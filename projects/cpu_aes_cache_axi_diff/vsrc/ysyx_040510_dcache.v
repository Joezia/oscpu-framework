`include "ysyx_040510_para.v"
module ysyx_040510_dcache(
	input				clk,
	input				rst,

	input				mem_valid_i,
	input				mem_req_i,
	input		[63:0]	mem_addr_i,
	output		[63:0]	mem_data_read_o,
	input		[63:0]	mem_data_write_i,
	input		[7:0]	mem_write_mask_i,

	input				arb_mem_trans_done_i,
	input				arb_mem_r_hs_i,
	input		[1:0]	arb_state_i,

	output	reg			dcache_valid_o,
	output	reg 		dcache_req_o,
	output	reg [63:0]	dcache_addr_o,
	output	reg [7:0]	dcache_len_o,
	output	reg [7:0]	dcache_mask_o,
	output	reg [63:0]	dcache_data_o,
	input		[63:0]	dcache_data_read_i,

	output				dcache_stall_o
);
parameter OFFSET_WIDTH_DCACHE	= 3;
parameter INDEX_WIDTH_DCACHE	= 7;
parameter TAG_WIDTH_DCACHE		= 54;
`define OFFSET_RANGE_D	 OFFSET_WIDTH_DCACHE - 1 : 0
`define INDEX_RANGE_D	 INDEX_WIDTH_DCACHE + OFFSET_WIDTH_DCACHE - 1 : OFFSET_WIDTH_DCACHE
`define TAG_RANGE_D		 63 : INDEX_WIDTH_DCACHE + OFFSET_WIDTH_DCACHE

wire [OFFSET_WIDTH_DCACHE - 1	: 0] offset_i	= mem_addr_i[`OFFSET_RANGE_D];
wire [INDEX_WIDTH_DCACHE - 1	: 0] index_i	= mem_addr_i[`INDEX_RANGE_D];
wire [TAG_WIDTH_DCACHE - 1		: 0] tag_i		= mem_addr_i[`TAG_RANGE_D];

reg [TAG_WIDTH_DCACHE - 1 : 0]	tag_0		[128];
reg [127 : 0]					valid_0;
reg	[127 : 0]					dirty_0;
reg [TAG_WIDTH_DCACHE - 1 : 0]	tag_1		[128];
reg [127 : 0]					valid_1;
reg	[127 : 0]					dirty_1;
reg [TAG_WIDTH_DCACHE - 1 : 0]	tag_2		[128];
reg [127 : 0]					valid_2;
reg	[127 : 0]					dirty_2;
reg [TAG_WIDTH_DCACHE - 1 : 0]	tag_3		[128];
reg [127 : 0]					valid_3;
reg	[127 : 0]					dirty_3;

reg [1:0]						sel_dram;

//************************************************ State machine
parameter [2:0] IDLE				= 3'b000,
				READ_HIT			= 3'b001,
				MEM_WRITE_PRE		= 3'b010,
				CACHE_READ_FROM_MEM = 3'b011,
				CACHE_WRITE_BACK	= 3'b100,
				WRITE_HIT			= 3'b101;

wire hit_0			= valid_0[index_i] & (tag_0[index_i] == tag_i);
wire hit_1			= valid_1[index_i] & (tag_1[index_i] == tag_i);
wire hit_2			= valid_2[index_i] & (tag_2[index_i] == tag_i);
wire hit_3			= valid_3[index_i] & (tag_3[index_i] == tag_i);
wire [3:0]hit_sel	= {hit_3, hit_2, hit_1, hit_0};
wire hit			= hit_3 | hit_2 | hit_1 | hit_0;
wire miss			= !hit;
wire is_dirty[4];
assign is_dirty[0] = dirty_0[index_i] == 1'b1;
assign is_dirty[1] = dirty_1[index_i] == 1'b1;
assign is_dirty[2] = dirty_2[index_i] == 1'b1;
assign is_dirty[3] = dirty_3[index_i] == 1'b1;

//wire hit		= valid[index_i] & (tag[index_i] == tag_i);
//wire miss		= !hit;
//wire is_dirty	= dirty[index_i] == 1'b1;

reg	[63:0]	dcache_ram_addr;			// The address of data block of dcache
reg	[2:0]	dcache_state;
reg [1:0]	tmp_counter;
wire dcache_state_idle					= dcache_state == IDLE;
wire dcache_state_read_hit				= dcache_state == READ_HIT;
wire dcache_state_cache_read_from_mem	= dcache_state == CACHE_READ_FROM_MEM;
wire dcache_state_cache_write_back		= dcache_state == CACHE_WRITE_BACK;
wire dcache_state_write_hit				= dcache_state == WRITE_HIT;
always @(posedge clk)begin
	if(!rst) begin
		dcache_state		<= IDLE;
		dcache_ram_addr		<= 0;
		sel_dram			<= 0;
		tmp_counter			<= 0;

		dcache_valid_o		<= 0;
		dcache_req_o		<= 0;
		dcache_addr_o		<= 0;
		dcache_len_o		<= 0;
		dcache_mask_o		<= 0;
		dcache_data_o		<= 0;
	end
	else begin
		if(!mem_valid_i)	sel_dram <= ($random);

		case(dcache_state)
			IDLE:begin
				if(mem_valid_i & (mem_req_i==`REQ_READ) & hit)begin	
					dcache_state	<= READ_HIT;
				end
				else if(mem_valid_i & (mem_req_i==`REQ_READ) & miss & is_dirty[sel_dram])begin
					dcache_state	<= MEM_WRITE_PRE;
					dcache_ram_addr <=	{64{sel_dram==2'd0}} & {tag_0[index_i],index_i,3'b0} | 
										{64{sel_dram==2'd1}} & {tag_1[index_i],index_i,3'b0} |
										{64{sel_dram==2'd2}} & {tag_2[index_i],index_i,3'b0} |
										{64{sel_dram==2'd3}} & {tag_3[index_i],index_i,3'b0} ;
				end
				else if(mem_valid_i & (mem_req_i==`REQ_READ) & miss & !is_dirty[sel_dram])begin
					dcache_state	<= CACHE_READ_FROM_MEM;
					dcache_ram_addr	<= {mem_addr_i[63:3],3'b0};
					if(sel_dram == 2'd0)	valid_0[index_i]	<= 1'b0;
					if(sel_dram == 2'd1)	valid_1[index_i]	<= 1'b0;
					if(sel_dram == 2'd2)	valid_2[index_i]	<= 1'b0;
					if(sel_dram == 2'd3)	valid_3[index_i]	<= 1'b0;
					/* read from memory - related output signal enable*/ 
					dcache_valid_o	<= 1'b1;
					dcache_req_o	<= `REQ_READ;
					dcache_addr_o	<= {mem_addr_i[63:3],3'b0};
					dcache_len_o	<= 7'd0;		// len+1
				end
				else if(mem_valid_i & (mem_req_i==`REQ_WRITE) & miss & is_dirty[sel_dram])begin
					dcache_state	<= MEM_WRITE_PRE;
					dcache_ram_addr <=	{64{sel_dram==2'd0}} & {tag_0[index_i],index_i,3'b0} | 
										{64{sel_dram==2'd1}} & {tag_1[index_i],index_i,3'b0} |
										{64{sel_dram==2'd2}} & {tag_2[index_i],index_i,3'b0} |
										{64{sel_dram==2'd3}} & {tag_3[index_i],index_i,3'b0} ;
				end
				else if(mem_valid_i & (mem_req_i==`REQ_WRITE) & miss & !is_dirty[sel_dram])begin
					dcache_state	<= CACHE_READ_FROM_MEM;
					dcache_ram_addr	<= {mem_addr_i[63:3],3'b0};
					if(sel_dram == 2'd0)	valid_0[index_i]	<= 1'b0;
					if(sel_dram == 2'd1)	valid_1[index_i]	<= 1'b0;
					if(sel_dram == 2'd2)	valid_2[index_i]	<= 1'b0;
					if(sel_dram == 2'd3)	valid_3[index_i]	<= 1'b0;
					/* read from memory - related output signal enable*/ 
					dcache_valid_o	<= 1'b1;
					dcache_req_o	<= `REQ_READ;
					dcache_addr_o	<= {mem_addr_i[63:3],3'b0};
					dcache_len_o	<= 7'd0;		// len+1
				end
				else if(mem_valid_i & (mem_req_i==`REQ_WRITE))begin
					dcache_state	<= WRITE_HIT;	
					dcache_ram_addr <= {mem_addr_i[63:3],3'b0};
				end
			end
			WRITE_HIT:begin
				if(arb_state_i == 2'b00)begin
					dcache_state	<= IDLE;

					if(hit_0)begin						
						tag_0	[dcache_ram_addr[`INDEX_RANGE_D]]	<= dcache_ram_addr[`TAG_RANGE_D];
						valid_0	[dcache_ram_addr[`INDEX_RANGE_D]]	<= 1'b1;
						dirty_0 [dcache_ram_addr[`INDEX_RANGE_D]]	<= 1'b1;
					end
					if(hit_1)begin						
						tag_1	[dcache_ram_addr[`INDEX_RANGE_D]]	<= dcache_ram_addr[`TAG_RANGE_D];
						valid_1	[dcache_ram_addr[`INDEX_RANGE_D]]	<= 1'b1;
						dirty_1 [dcache_ram_addr[`INDEX_RANGE_D]]	<= 1'b1;
					end
					if(hit_2)begin						
						tag_2	[dcache_ram_addr[`INDEX_RANGE_D]]	<= dcache_ram_addr[`TAG_RANGE_D];
						valid_2	[dcache_ram_addr[`INDEX_RANGE_D]]	<= 1'b1;
						dirty_2 [dcache_ram_addr[`INDEX_RANGE_D]]	<= 1'b1;
					end
					if(hit_3)begin						
						tag_3	[dcache_ram_addr[`INDEX_RANGE_D]]	<= dcache_ram_addr[`TAG_RANGE_D];
						valid_3	[dcache_ram_addr[`INDEX_RANGE_D]]	<= 1'b1;
						dirty_3 [dcache_ram_addr[`INDEX_RANGE_D]]	<= 1'b1;
					end

				end
			end
			READ_HIT:begin
				if(arb_state_i == 2'b00)begin
					dcache_state	<= IDLE;
				end
			end
			CACHE_READ_FROM_MEM:begin		// note: Need to write dcache_ram !!!
				if(arb_mem_trans_done_i)begin
					if(sel_dram == 2'd0)begin						
						tag_0	[dcache_ram_addr[`INDEX_RANGE_D]]	<= dcache_ram_addr[`TAG_RANGE_D];
						valid_0	[dcache_ram_addr[`INDEX_RANGE_D]]	<= 1'b1;
						dirty_0 [dcache_ram_addr[`INDEX_RANGE_D]]	<= 0;
					end
					if(sel_dram == 2'd1)begin						
						tag_1	[dcache_ram_addr[`INDEX_RANGE_D]]	<= dcache_ram_addr[`TAG_RANGE_D];
						valid_1	[dcache_ram_addr[`INDEX_RANGE_D]]	<= 1'b1;
						dirty_1 [dcache_ram_addr[`INDEX_RANGE_D]]	<= 0;
					end
					if(sel_dram == 2'd2)begin						
						tag_2	[dcache_ram_addr[`INDEX_RANGE_D]]	<= dcache_ram_addr[`TAG_RANGE_D];
						valid_2	[dcache_ram_addr[`INDEX_RANGE_D]]	<= 1'b1;
						dirty_2 [dcache_ram_addr[`INDEX_RANGE_D]]	<= 0;
					end
					if(sel_dram == 2'd3)begin						
						tag_3	[dcache_ram_addr[`INDEX_RANGE_D]]	<= dcache_ram_addr[`TAG_RANGE_D];
						valid_3	[dcache_ram_addr[`INDEX_RANGE_D]]	<= 1'b1;
						dirty_3 [dcache_ram_addr[`INDEX_RANGE_D]]	<= 0;
					end

					dcache_valid_o							<= 0;
					dcache_state							<= IDLE; 
				end
				else if(arb_mem_r_hs_i)begin
					dcache_ram_addr							<= dcache_ram_addr + 64'd8;
					if(sel_dram == 2'd0)begin						
						tag_0	[dcache_ram_addr[`INDEX_RANGE_D]]	<= dcache_ram_addr[`TAG_RANGE_D];
						valid_0	[dcache_ram_addr[`INDEX_RANGE_D]]	<= 1'b1;
						dirty_0 [dcache_ram_addr[`INDEX_RANGE_D]]	<= 0;
					end
					if(sel_dram == 2'd1)begin						
						tag_1	[dcache_ram_addr[`INDEX_RANGE_D]]	<= dcache_ram_addr[`TAG_RANGE_D];
						valid_1	[dcache_ram_addr[`INDEX_RANGE_D]]	<= 1'b1;
						dirty_1 [dcache_ram_addr[`INDEX_RANGE_D]]	<= 0;
					end
					if(sel_dram == 2'd2)begin						
						tag_2	[dcache_ram_addr[`INDEX_RANGE_D]]	<= dcache_ram_addr[`TAG_RANGE_D];
						valid_2	[dcache_ram_addr[`INDEX_RANGE_D]]	<= 1'b1;
						dirty_2 [dcache_ram_addr[`INDEX_RANGE_D]]	<= 0;
					end
					if(sel_dram == 2'd3)begin						
						tag_3	[dcache_ram_addr[`INDEX_RANGE_D]]	<= dcache_ram_addr[`TAG_RANGE_D];
						valid_3	[dcache_ram_addr[`INDEX_RANGE_D]]	<= 1'b1;
						dirty_3 [dcache_ram_addr[`INDEX_RANGE_D]]	<= 0;
					end
				end
			end
			MEM_WRITE_PRE:begin
			/* write to the memory - related output signal enable*/ 
				if(tmp_counter == 0) begin
					dcache_state	<= MEM_WRITE_PRE;
					tmp_counter		<= 2'b01;
				end
				else begin
					dcache_state	<= CACHE_WRITE_BACK;
					tmp_counter		<= 0;

					dcache_valid_o	<= 1'b1;
					dcache_req_o	<= `REQ_WRITE;
					dcache_addr_o	<= dcache_ram_addr;
					dcache_data_o	<=	{64{sel_dram == 2'd0}} & (dcache_ram_addr[3] ? dram_0_data_read_128[127:64] : dram_0_data_read_128[63:0]) |
										{64{sel_dram == 2'd1}} & (dcache_ram_addr[3] ? dram_1_data_read_128[127:64] : dram_1_data_read_128[63:0]) |
										{64{sel_dram == 2'd2}} & (dcache_ram_addr[3] ? dram_2_data_read_128[127:64] : dram_2_data_read_128[63:0]) |
										{64{sel_dram == 2'd3}} & (dcache_ram_addr[3] ? dram_3_data_read_128[127:64] : dram_3_data_read_128[63:0]) ;
					dcache_mask_o	<= 8'b1111_1111;
					dcache_len_o	<= 7'b0;				// 写回只写1个64位数字

					dcache_ram_addr <= dcache_ram_addr + 64'd8;
				end
			end
			CACHE_WRITE_BACK:begin			// note: Need to read dcache_ram !!!
				if(arb_mem_trans_done_i)begin
					dcache_state							<= IDLE;

					if(sel_dram == 2'd0)begin
						dirty_0[dcache_addr_o[`INDEX_RANGE_D]]	<= 0;
						valid_0[dcache_addr_o[`INDEX_RANGE_D]]	<= 0;
					end
					if(sel_dram == 2'd1)begin
						dirty_1[dcache_addr_o[`INDEX_RANGE_D]]	<= 0;
						valid_1[dcache_addr_o[`INDEX_RANGE_D]]	<= 0;
					end
					if(sel_dram == 2'd2)begin
						dirty_2[dcache_addr_o[`INDEX_RANGE_D]]	<= 0;
						valid_2[dcache_addr_o[`INDEX_RANGE_D]]	<= 0;
					end
					if(sel_dram == 2'd3)begin
						dirty_3[dcache_addr_o[`INDEX_RANGE_D]]	<= 0;
						valid_3[dcache_addr_o[`INDEX_RANGE_D]]	<= 0;
					end

					dcache_valid_o	<= 0;
				end
			end
			default:	dcache_state	<= IDLE;
		endcase
	end
end

wire [127:0]	dram_0_data_read_128;
wire [127:0]	dram_1_data_read_128;
wire [127:0]	dram_2_data_read_128;
wire [127:0]	dram_3_data_read_128;

wire dram_0_wen_read_from_mem	= (sel_dram == 2'd0) &	(dcache_state_cache_read_from_mem && (arb_mem_r_hs_i | arb_mem_trans_done_i));
wire dram_0_wen_write_hit		= (hit_0) & (dcache_state_write_hit);
wire dram_1_wen_read_from_mem	= (sel_dram == 2'd1) &	(dcache_state_cache_read_from_mem && (arb_mem_r_hs_i | arb_mem_trans_done_i));
wire dram_1_wen_write_hit		= (hit_1) & (dcache_state_write_hit);
wire dram_2_wen_read_from_mem	= (sel_dram == 2'd2) &	(dcache_state_cache_read_from_mem && (arb_mem_r_hs_i | arb_mem_trans_done_i));
wire dram_2_wen_write_hit		= (hit_2) & (dcache_state_write_hit);
wire dram_3_wen_read_from_mem	= (sel_dram == 2'd3) &	(dcache_state_cache_read_from_mem && (arb_mem_r_hs_i | arb_mem_trans_done_i));
wire dram_3_wen_write_hit		= (hit_3) & (dcache_state_write_hit);
wire dram_0_wen = !(dram_0_wen_read_from_mem | dram_0_wen_write_hit);
wire dram_1_wen = !(dram_1_wen_read_from_mem | dram_1_wen_write_hit);
wire dram_2_wen = !(dram_2_wen_read_from_mem | dram_2_wen_write_hit);
wire dram_3_wen = !(dram_3_wen_read_from_mem | dram_3_wen_write_hit);

//***********mask
wire [127:0]	dram_read_from_mem_mask = dcache_ram_addr[3] ? 
						128'h00000000_00000000_ffffffff_ffffffff :
						128'hffffffff_ffffffff_00000000_00000000 ;	
wire [63:0]		dram_mem_write_mask_i = {	{8{~mem_write_mask_i[7]}},{8{~mem_write_mask_i[6]}},
											{8{~mem_write_mask_i[5]}},{8{~mem_write_mask_i[4]}},
											{8{~mem_write_mask_i[3]}},{8{~mem_write_mask_i[2]}},
											{8{~mem_write_mask_i[1]}},{8{~mem_write_mask_i[0]}}	};
wire [127:0]	dram_write_hit_mask = dcache_ram_addr[3] ? 
						{dram_mem_write_mask_i,64'hffffffff_ffffffff} :
						{64'hffffffff_ffffffff,dram_mem_write_mask_i} ;
wire [127:0]	dram_bwen = dcache_state_write_hit ? dram_write_hit_mask : dram_read_from_mem_mask;

wire [5:0]		dram_addr = dcache_state_idle ? mem_addr_i[9:4] : dcache_ram_addr[9:4];
//**********data
wire [127:0]	dram_read_from_mem_data_write = dcache_ram_addr[3] ?
												{dcache_data_read_i,64'b0} :
												{64'b0,dcache_data_read_i} ;
wire [127:0]	dram_write_hit_data_write = dcache_ram_addr[3] ?
												{mem_data_write_i,64'b0} :
												{64'b0,mem_data_write_i} ;
wire [127:0]	dram_data_write = dcache_state_write_hit ? dram_write_hit_data_write : dram_read_from_mem_data_write;

S011HD1P_X32Y2D128_BW dcache_ram_0(
	.Q		(dram_0_data_read_128),
	.CLK	(clk),
	.CEN	(0),
	.WEN	(dram_0_wen),
	.BWEN	(dram_bwen),
	.A		(dram_addr),
	.D		(dram_data_write)
);
S011HD1P_X32Y2D128_BW dcache_ram_1(
	.Q		(dram_1_data_read_128),
	.CLK	(clk),
	.CEN	(0),
	.WEN	(dram_1_wen),
	.BWEN	(dram_bwen),
	.A		(dram_addr),
	.D		(dram_data_write)
);
S011HD1P_X32Y2D128_BW dcache_ram_2(
	.Q		(dram_2_data_read_128),
	.CLK	(clk),
	.CEN	(0),
	.WEN	(dram_2_wen),
	.BWEN	(dram_bwen),
	.A		(dram_addr),
	.D		(dram_data_write)
);
S011HD1P_X32Y2D128_BW dcache_ram_3(
	.Q		(dram_3_data_read_128),
	.CLK	(clk),
	.CEN	(0),
	.WEN	(dram_3_wen),
	.BWEN	(dram_bwen),
	.A		(dram_addr),
	.D		(dram_data_write)
);

assign mem_data_read_o =	{64{hit_0}} & (mem_addr_i[3] ? dram_0_data_read_128[127:64] : dram_0_data_read_128[63:0]) |
							{64{hit_1}} & (mem_addr_i[3] ? dram_1_data_read_128[127:64] : dram_1_data_read_128[63:0]) |
							{64{hit_2}} & (mem_addr_i[3] ? dram_2_data_read_128[127:64] : dram_2_data_read_128[63:0]) |
							{64{hit_3}} & (mem_addr_i[3] ? dram_3_data_read_128[127:64] : dram_3_data_read_128[63:0]) ;

assign dcache_stall_o = (mem_valid_i & !(dcache_state_read_hit) & (mem_req_i == `REQ_READ)) |
						(mem_valid_i & !(dcache_state_write_hit)& (mem_req_i == `REQ_WRITE)); // TMP Change!!!!
endmodule

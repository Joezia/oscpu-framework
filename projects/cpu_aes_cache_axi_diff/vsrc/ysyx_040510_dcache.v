`include "ysyx_040510_para.v"
module ysyx_040510_dcache(
	input				clk,
	input				rst,

	input				mem_valid_i,
	input				mem_req_i,
	input		[63:0]	mem_addr_i,
	input		[63:0]	mem_data_write_i,
	output		[63:0]	mem_data_read_o,
	input		[7:0]	mem_write_mask_i,

	input				arb_mem_trans_done_i,
	input				arb_mem_r_hs_i,

	output	reg			dcache_valid_o,
	output	reg 		dcache_req_o,
	output	reg [63:0]	dcache_addr_o,
	output	reg [7:0]	dcache_len_o,
	output	reg [63:0]	dcache_data_o,
	input		[63:0]	dcache_data_read_i,

	output				dcache_stall_o
);
parameter OFFSET_WIDTH_DCACHE	= 4;
parameter INDEX_WIDTH_DCACHE	= 7;
parameter TAG_WIDTH_DCACHE		= 53;

wire [OFFSET_WIDTH_DCACHE - 1	: 0] offset_i	= mem_addr_i[OFFSET_WIDTH_DCACHE - 1 : 0];
wire [INDEX_WIDTH_DCACHE - 1	: 0] index_i	= mem_addr_i[INDEX_WIDTH_DCACHE + OFFSET_WIDTH_DCACHE - 1 : OFFSET_WIDTH_DCACHE];
wire [TAG_WIDTH_DCACHE - 1		: 0] tag_i		= mem_addr_i[64 - 1 : INDEX_WIDTH_DCACHE+OFFSET_WIDTH_DCACHE];

reg [TAG_WIDTH_DCACHE - 1 : 0]	tag		[128];
reg [1 : 0]						valid	[128];
reg								dirty	[128];
//************************************* Reg reset
genvar i;
generate 
	for(i = 0; i < 128; i = i + 1) begin: reset_reg
		always @(posedge clk)begin
			if(!rst)begin
				tag[i]		<= 0;
				valid[i]	<= 0;
				dirty[i]	<= 0;		
			end
		end
	end
endgenerate
always @(posedge clk)begin
	if(!rst)begin
		dcache_valid_o		<= 0;
		dcache_req_o		<= 0;
		dcache_addr_o		<= 0;
		dcache_len_o		<= 0;
		dcache_data_o		<= 0;
	end
end
//************************************** State machine
parameter [2:0] IDLE				= 3'b000,
				READ_HIT			= 3'b001,
				MEM_WRITE_PRE		= 3'b010,
				CACHE_READ_FROM_MEM = 3'b011,
				CACHE_WRITE_BACK	= 3'b100,
				WRITE_HIT			= 3'b101,
				WRITE_MISS			= 3'b110;

wire hit		= valid[index_i][0] & valid[index_i][1] & (tag[index_i] == tag_i);
wire miss		= !hit;
wire is_dirty	= dirty[index_i] == 1'b1;

reg	[63:0]	dcache_ram_addr;			// The address of data block of dcache
reg [63:0]	dcache_ram_data;			
reg	[2:0]	dcache_state;
wire dcache_state_idle					= dcache_state == IDLE;
wire dcache_state_read_hit				= dcache_state == READ_HIT;
wire dcache_state_read_miss				= dcache_state == READ_MISS;
wire dcache_state_cache_read_from_mem	= dcache_state == CACHE_READ_FROM_MEM;
wire dcache_state_cache_write_back		= dcache_state == CACHE_WRITE_BACK;
wire dcache_state_write_hit				= dcache_state == WRITE_HIT;
wire dcache_state_write_miss			= dcache_state == WRITE_MISS;
always @(posedge clk)begin
	if(!rst) begin
		dcache_state		<= IDLE;
		dcache_ram_addr		<= 0;
		dcache_ram_data		<= 0;
	end
	else begin
		case(dcache_state)
			IDLE:begin
				if(mem_valid_i & (mem_req_i==`REQ_READ) & hit)begin	
					dcache_state	<= READ_HIT;
				end

				if(mem_valid_i & (mem_req_i==`REQ_READ) & miss & is_dirty)begin
					dcache_state	<= MEM_WRITE_PRE;
					dcache_ram_addr <= {tag[index_i],index_i,4'b0}; 
				end

				if(mem_valid_i & (mem_req_i==`REQ_READ) & miss & !is_dirty)begin
					dcache_state	<= CACHE_READ_FROM_MEM;
					dcache_ram_addr	<= {mem_addr_i[63:4],4'b0};
					valid[index_i]	<= 2'b0;
					/* read from memory - related output signal enable*/ 
					dcache_valid_o	<= 1'b1;
					dcache_req_o	<= `REQ_READ;
					dcache_addr_o	<= {mem_addr_i[63:4],4'b0};
					dcache_len_o	<= 7'd1;		// len+1
				end
			end
			READ_HIT:begin
				dcache_state	<= IDLE;
			end
			CACHE_READ_FROM_MEM:begin		// note: Need to write dcache_ram !!!
				if(arb_mem_trans_done_i && arb_mem_r_hs_i)begin
					tag	 [dcache_ram_addr[10:4]]	<= dcache_ram_addr[63:11];
					valid[dcache_ram_addr[10:4]]	<= 2'b11;
					dirty[dcache_ram_addr[10:4]]	<= 0;

					dcache_valid_o					<= 0;
					dcache_state					<= READ_HIT; 
				end
				else if(arb_mem_r_hs_i)begin
					dcache_ram_addr					<= dcache_ram_addr + 64'd8;
				end
			end
			MEM_WRITE_PRE:begin
			/* write to the memory - related output signal enable*/ 
					dcache_state	<= CACHE_WRITE_BACK;

					dcache_valid_o	<= 1'b1;
					dcache_req_o	<= `REQ_WRITE;
					dcache_addr_o	<= dcache_ram_addr;
					dcache_data_o	<= dram_data_read_128;
					dcache_len_o	<= 7'b1;
			end
			CACHE_WRITE_BACK:begin			// note: Need to read dcache_ram !!!

			end
			default:	dcache_state	<= IDLE;
		endcase
	end
end
wire [127:0]	dram_data_read_128;
wire			dram_wen;
wire [127:0]	dram_bwen;
wire [6:0]		dram_addr = dcache_state_cache_read_from_mem? dcache_ram_addr[10:4] :
							dcache_state_cache_write_back	? dcache_ram_addr[10:4] :
							mem_addr_i[10:4];
wire [127:0]	dram_data_write;
/*
S011HD1P_X32Y2D128_BW dcache_ram(
	.Q		(dram_data_read_128),
	.CLK	(clk),
	.CEN	(0),
	.WEN	(dram_wen),
	.BWEN	(dram_bwen),
	.A		(dram_addr),
	.D		(dram_data_write)
);
*/
assign dcache_stall_o = mem_valid_i & !(dcache_state_read_hit);
endmodule

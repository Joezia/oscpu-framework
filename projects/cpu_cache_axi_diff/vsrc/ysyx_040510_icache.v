`include "ysyx_040510_para.v"
module ysyx_040510_icache(
	input				clk,
	input				rst,

	input		[63:0]	if_addr_i,
	output		[63:0]	if_data_o,

	output				icache_valid_o,
	output	reg [63:0]	icache_addr_o,
	output	reg [7:0]	icache_len_o,
	output	reg 		icache_req_o,
	input		[63:0]	icache_data_read_i,

	input				arb_if_trans_done_i,
	input				arb_if_r_hs_i,
	input		[1:0]	arb_state_i,
	input				axi_trans_done_pulse,

	input		[127:0]	iram_data_read_128,
	output				iram_wen,
	output		[127:0]	iram_bwen,
	output		[5:0]	iram_addr,
	output		[127:0]	iram_data,

	output				icache_stall_o
);
parameter OFFSET_WIDTH	= 4;
parameter INDEX_WIDTH	= 6;
parameter TAG_WIDTH		= 54;

reg	[TAG_WIDTH-1:0]	tag [128];
reg [63:0]			valid;

wire [OFFSET_WIDTH-1 : 0]offset_i = if_addr_i[3:0];
wire [INDEX_WIDTH-1  : 0]index_i  = if_addr_i[9:4];
wire [INDEX_WIDTH    : 0]tag_idx  = if_addr_i[9:3];
wire [TAG_WIDTH-1	 : 0]tag_i	  = if_addr_i[63:10];

always @(posedge clk)begin
	if(!rst)begin
		{tag[0],tag[1],tag[2],tag[3],tag[4],tag[5],tag[6],tag[7],tag[8],tag[9],tag[10],tag[11],tag[12],tag[13],tag[14],tag[15],tag[16],tag[17],tag[18],tag[19],tag[20],tag[21],tag[22],tag[23],tag[24],tag[25],tag[26],tag[27],tag[28],tag[29],tag[30],tag[31],tag[32],tag[33],tag[34],tag[35],tag[36],tag[37],tag[38],tag[39],tag[40],tag[41],tag[42],tag[43],tag[44],tag[45],tag[46],tag[47],tag[48],tag[49],tag[50],tag[51],tag[52],tag[53],tag[54],tag[55],tag[56],tag[57],tag[58],tag[59],tag[60],tag[61],tag[62],tag[63]}   <= 3456'b0;
		valid <= 64'b0;
	end
end

//******************************* State machine
wire hit  =  (valid[index_i] == 1) && (tag[tag_idx] == tag_i);
wire miss = !(valid[index_i] == 1) && (tag[tag_idx] == tag_i);
parameter [1:0]	IF_HIT	= 2'b00,
				HIT		= 2'b01,
				MISS	= 2'b10;
reg  [1:0] icache_state;
reg  [63:0]addr_icache_read;

always@(posedge clk)begin
	if(!rst) begin
		icache_state <= IF_HIT;
		addr_icache_read <= 0;
	end
	else begin
		case(icache_state)
			IF_HIT:begin
				if(if_addr_i >= 64'h80000000)begin
					icache_state		<= hit ? HIT : MISS; 
					addr_icache_read	<= if_addr_i;
				end
			end
			HIT:begin
				if(arb_state_i == 2'b00)icache_state		<= IF_HIT;			
			end
			MISS:begin
				icache_state		<= re_write_finish ? IF_HIT : MISS;
			end
			default:	icache_state <= IF_HIT;
		endcase
	end	
end
wire state_ifhit	= icache_state == IF_HIT;
wire state_hit		= icache_state == HIT;
wire state_miss		= icache_state == MISS;
//
//************************************** Re_write icache
parameter [1:0]	IDLE		= 2'b00,
				RE_WRITE	= 2'b01;
reg [1:0]	re_write_state;
reg [63:0]	re_write_addr;
reg			icache_valid_pre;

always @(posedge clk)begin
	if(!rst)begin
		re_write_state <= IDLE;
		re_write_addr  <= 0;
		icache_valid_pre<= 1'b1;
		icache_addr_o	<= 0;
		icache_len_o	<= 8'h7f;				// 127
		icache_req_o	<= `REQ_READ;
	end
	else begin
		case(re_write_state)
			IDLE:begin
				if(state_miss)begin
					re_write_state	<= RE_WRITE;
					re_write_addr	<= addr_icache_read;
					valid			<= 64'h0;

					icache_valid_pre<= 1'b1;
					icache_addr_o	<= addr_icache_read;
					icache_len_o	<= 8'h7f;				// 127
					icache_req_o	<= `REQ_READ;
				end
			end
			RE_WRITE:begin
				if(arb_if_trans_done_i && arb_if_r_hs_i)begin
					tag[re_write_addr[9:3]] <= re_write_addr[63:10];
					valid[re_write_addr[9:4]] <= 1'b1;

					icache_valid_pre <= 0;
					re_write_state <= IDLE;
				end
				else if(arb_if_r_hs_i)begin
					re_write_addr			<= re_write_addr + 64'd8;				
					tag[re_write_addr[9:3]] <= re_write_addr[63:10];
					valid[re_write_addr[9:4]] <= 1'b1;

				end
			end
			default:	re_write_state <= IDLE;
		endcase 
	end	
end
wire state_idle		= re_write_state == IDLE;
wire state_re_write = re_write_state == RE_WRITE;
wire re_write_finish= state_re_write && arb_if_trans_done_i && arb_if_r_hs_i;

assign	iram_wen	= !(state_re_write && arb_if_r_hs_i);
assign 	iram_bwen	= re_write_addr[3] ? 
						128'h00000000_00000000_ffffffff_ffffffff :
						128'hffffffff_ffffffff_00000000_00000000 ;	
assign 	iram_addr	= !iram_wen ? re_write_addr[9:4] : index_i;
assign 	iram_data	= re_write_addr[3] ?
						{icache_data_read_i,64'b0} :
						{64'b0,icache_data_read_i} ;	
/*
S011HD1P_X32Y2D128_BW icache_ram(
	.Q		(data_read_128),
	.CLK	(clk),
	.CEN	(0),
	.WEN	(ram_wen),
	.BWEN	(ram_bwen),
	.A		(ram_addr),
	.D		(ram_data)
);
*/
assign if_data_o	  = if_addr_i[3] ? iram_data_read_128[127:64] : iram_data_read_128[63:0];
assign icache_valid_o = icache_valid_pre && axi_trans_done_pulse;

/************** icache_stall_processing **********/
reg icache_stall_pre;
always@(posedge clk)begin
	if(!rst)	icache_stall_pre <= 0;
	else begin 
		if(state_ifhit && hit)	icache_stall_pre <= 0;
		else					icache_stall_pre <= 1'b1;
	end
end
assign icache_stall_o = icache_stall_pre & !state_hit;
endmodule

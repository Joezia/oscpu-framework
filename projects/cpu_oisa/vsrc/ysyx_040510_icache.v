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

	input		[127:0]	iram_0_data_read_128,
	output				iram_0_wen,
	output		[127:0]	iram_0_bwen,
	output		[5:0]	iram_0_addr,
	output		[127:0]	iram_0_data,
	input		[127:0]	iram_1_data_read_128,
	output				iram_1_wen,
	output		[127:0]	iram_1_bwen,
	output		[5:0]	iram_1_addr,
	output		[127:0]	iram_1_data,
	input		[127:0]	iram_2_data_read_128,
	output				iram_2_wen,
	output		[127:0]	iram_2_bwen,
	output		[5:0]	iram_2_addr,
	output		[127:0]	iram_2_data,
	input		[127:0]	iram_3_data_read_128,
	output				iram_3_wen,
	output		[127:0]	iram_3_bwen,
	output		[5:0]	iram_3_addr,
	output		[127:0]	iram_3_data,

	output				icache_stall_o
);
parameter OFFSET_WIDTH	= 3;
parameter INDEX_WIDTH	= 7;
parameter TAG_WIDTH		= 54;
`define OFFSET_RANGE	OFFSET_WIDTH-1 : 0
`define INDEX_RANGE		OFFSET_WIDTH+INDEX_WIDTH-1 : OFFSET_WIDTH
`define	TAG_RANGE		63 : OFFSET_WIDTH+INDEX_WIDTH

reg	[TAG_WIDTH - 1	:0]		tag_0 [128];
reg [127:0]					valid_0;
reg	[TAG_WIDTH - 1	:0]		tag_1 [128];
reg [127:0]					valid_1;
reg	[TAG_WIDTH - 1	:0]		tag_2 [128];
reg [127:0]					valid_2;
reg	[TAG_WIDTH - 1	:0]		tag_3 [128];
reg [127:0]					valid_3;

reg [1:0]					iram_sel;

wire [OFFSET_WIDTH-1 : 0]offset_i = if_addr_i[`OFFSET_RANGE];
wire [INDEX_WIDTH-1  : 0]index_i  = if_addr_i[`INDEX_RANGE];
wire [TAG_WIDTH-1	 : 0]tag_i	  = if_addr_i[`TAG_RANGE];

//******************************* State machine
wire		hit_0	= (valid_0[index_i] == 1) && (tag_0[index_i] == tag_i);
wire		hit_1	= (valid_1[index_i] == 1) && (tag_1[index_i] == tag_i);
wire		hit_2	= (valid_2[index_i] == 1) && (tag_2[index_i] == tag_i);
wire		hit_3	= (valid_3[index_i] == 1) && (tag_3[index_i] == tag_i);
wire [3:0]	hit_sel	= {hit_3 , hit_2 , hit_1 , hit_0};
wire		hit		= hit_0 | hit_1 | hit_2 | hit_3; 

parameter [1:0]	IF_HIT	= 2'b00,
				HIT		= 2'b01,
				MISS	= 2'b10;
reg  [1:0]	icache_state;
wire state_ifhit	= icache_state == IF_HIT;
wire state_hit		= icache_state == HIT;
wire state_miss		= icache_state == MISS;

reg  [63:0]	addr_icache_read;

//****************************** State machine 2
parameter [1:0]	IDLE		= 2'b00,
				RE_WRITE	= 2'b01;
reg [1:0]	re_write_state;
wire state_idle			= re_write_state == IDLE;
wire state_re_write		= re_write_state == RE_WRITE;

reg [63:0]	re_write_addr;
reg			icache_valid_pre;
wire re_write_finish	= state_re_write && arb_if_trans_done_i;

always@(posedge clk)begin
	if(!rst) begin
		icache_state <= IF_HIT;
		addr_icache_read <= 0;

		iram_sel <= 2'b00;
	end
	else begin
		case(icache_state)
			IF_HIT:begin
				if(if_addr_i >= 64'h80000000)begin
					icache_state		<= hit ? HIT : MISS; 
					iram_sel			<= hit ? iram_sel : iram_sel + 2'b01;
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
//
//************************************** Re_write icache

always @(posedge clk)begin
	if(!rst)begin
		re_write_state	<= IDLE;
		re_write_addr	<= 0;
		icache_valid_pre<= 1'b1;
		icache_addr_o	<= 0;
		icache_len_o	<= 8'h0;
		icache_req_o	<= `REQ_READ;
		
		{tag_0[0],tag_0[1],tag_0[2],tag_0[3],tag_0[4],tag_0[5],tag_0[6],tag_0[7],tag_0[8],tag_0[9],tag_0[10],tag_0[11],tag_0[12],tag_0[13],tag_0[14],tag_0[15],tag_0[16],tag_0[17],tag_0[18],tag_0[19],tag_0[20],tag_0[21],tag_0[22],tag_0[23],tag_0[24],tag_0[25],tag_0[26],tag_0[27],tag_0[28],tag_0[29],tag_0[30],tag_0[31],tag_0[32],tag_0[33],tag_0[34],tag_0[35],tag_0[36],tag_0[37],tag_0[38],tag_0[39],tag_0[40],tag_0[41],tag_0[42],tag_0[43],tag_0[44],tag_0[45],tag_0[46],tag_0[47],tag_0[48],tag_0[49],tag_0[50],tag_0[51],tag_0[52],tag_0[53],tag_0[54],tag_0[55],tag_0[56],tag_0[57],tag_0[58],tag_0[59],tag_0[60],tag_0[61],tag_0[62],tag_0[63]}   <= 3456'b0;
		{tag_0[64],tag_0[65],tag_0[66],tag_0[67],tag_0[68],tag_0[69],tag_0[70],tag_0[71],tag_0[72],tag_0[73],tag_0[74],tag_0[75],tag_0[76],tag_0[77],tag_0[78],tag_0[79],tag_0[80],tag_0[81],tag_0[82],tag_0[83],tag_0[84],tag_0[85],tag_0[86],tag_0[87],tag_0[88],tag_0[89],tag_0[90],tag_0[91],tag_0[92],tag_0[93],tag_0[94],tag_0[95],tag_0[96],tag_0[97],tag_0[98],tag_0[99],tag_0[100],tag_0[101],tag_0[102],tag_0[103],tag_0[104],tag_0[105],tag_0[106],tag_0[107],tag_0[108],tag_0[109],tag_0[110],tag_0[111],tag_0[112],tag_0[113],tag_0[114],tag_0[115],tag_0[116],tag_0[117],tag_0[118],tag_0[119],tag_0[120],tag_0[121],tag_0[122],tag_0[123],tag_0[124],tag_0[125],tag_0[126],tag_0[127]}   <= 3456'b0;

		{tag_1[0],tag_1[1],tag_1[2],tag_1[3],tag_1[4],tag_1[5],tag_1[6],tag_1[7],tag_1[8],tag_1[9],tag_1[10],tag_1[11],tag_1[12],tag_1[13],tag_1[14],tag_1[15],tag_1[16],tag_1[17],tag_1[18],tag_1[19],tag_1[20],tag_1[21],tag_1[22],tag_1[23],tag_1[24],tag_1[25],tag_1[26],tag_1[27],tag_1[28],tag_1[29],tag_1[30],tag_1[31],tag_1[32],tag_1[33],tag_1[34],tag_1[35],tag_1[36],tag_1[37],tag_1[38],tag_1[39],tag_1[40],tag_1[41],tag_1[42],tag_1[43],tag_1[44],tag_1[45],tag_1[46],tag_1[47],tag_1[48],tag_1[49],tag_1[50],tag_1[51],tag_1[52],tag_1[53],tag_1[54],tag_1[55],tag_1[56],tag_1[57],tag_1[58],tag_1[59],tag_1[60],tag_1[61],tag_1[62],tag_1[63]}   <= 3456'b0;
		{tag_1[64],tag_1[65],tag_1[66],tag_1[67],tag_1[68],tag_1[69],tag_1[70],tag_1[71],tag_1[72],tag_1[73],tag_1[74],tag_1[75],tag_1[76],tag_1[77],tag_1[78],tag_1[79],tag_1[80],tag_1[81],tag_1[82],tag_1[83],tag_1[84],tag_1[85],tag_1[86],tag_1[87],tag_1[88],tag_1[89],tag_1[90],tag_1[91],tag_1[92],tag_1[93],tag_1[94],tag_1[95],tag_1[96],tag_1[97],tag_1[98],tag_1[99],tag_1[100],tag_1[101],tag_1[102],tag_1[103],tag_1[104],tag_1[105],tag_1[106],tag_1[107],tag_1[108],tag_1[109],tag_1[110],tag_1[111],tag_1[112],tag_1[113],tag_1[114],tag_1[115],tag_1[116],tag_1[117],tag_1[118],tag_1[119],tag_1[120],tag_1[121],tag_1[122],tag_1[123],tag_1[124],tag_1[125],tag_1[126],tag_1[127]}   <= 3456'b0;

		{tag_2[0],tag_2[1],tag_2[2],tag_2[3],tag_2[4],tag_2[5],tag_2[6],tag_2[7],tag_2[8],tag_2[9],tag_2[10],tag_2[11],tag_2[12],tag_2[13],tag_2[14],tag_2[15],tag_2[16],tag_2[17],tag_2[18],tag_2[19],tag_2[20],tag_2[21],tag_2[22],tag_2[23],tag_2[24],tag_2[25],tag_2[26],tag_2[27],tag_2[28],tag_2[29],tag_2[30],tag_2[31],tag_2[32],tag_2[33],tag_2[34],tag_2[35],tag_2[36],tag_2[37],tag_2[38],tag_2[39],tag_2[40],tag_2[41],tag_2[42],tag_2[43],tag_2[44],tag_2[45],tag_2[46],tag_2[47],tag_2[48],tag_2[49],tag_2[50],tag_2[51],tag_2[52],tag_2[53],tag_2[54],tag_2[55],tag_2[56],tag_2[57],tag_2[58],tag_2[59],tag_2[60],tag_2[61],tag_2[62],tag_2[63]}   <= 3456'b0;
		{tag_2[64],tag_2[65],tag_2[66],tag_2[67],tag_2[68],tag_2[69],tag_2[70],tag_2[71],tag_2[72],tag_2[73],tag_2[74],tag_2[75],tag_2[76],tag_2[77],tag_2[78],tag_2[79],tag_2[80],tag_2[81],tag_2[82],tag_2[83],tag_2[84],tag_2[85],tag_2[86],tag_2[87],tag_2[88],tag_2[89],tag_2[90],tag_2[91],tag_2[92],tag_2[93],tag_2[94],tag_2[95],tag_2[96],tag_2[97],tag_2[98],tag_2[99],tag_2[100],tag_2[101],tag_2[102],tag_2[103],tag_2[104],tag_2[105],tag_2[106],tag_2[107],tag_2[108],tag_2[109],tag_2[110],tag_2[111],tag_2[112],tag_2[113],tag_2[114],tag_2[115],tag_2[116],tag_2[117],tag_2[118],tag_2[119],tag_2[120],tag_2[121],tag_2[122],tag_2[123],tag_2[124],tag_2[125],tag_2[126],tag_2[127]}   <= 3456'b0;

		{tag_3[0],tag_3[1],tag_3[2],tag_3[3],tag_3[4],tag_3[5],tag_3[6],tag_3[7],tag_3[8],tag_3[9],tag_3[10],tag_3[11],tag_3[12],tag_3[13],tag_3[14],tag_3[15],tag_3[16],tag_3[17],tag_3[18],tag_3[19],tag_3[20],tag_3[21],tag_3[22],tag_3[23],tag_3[24],tag_3[25],tag_3[26],tag_3[27],tag_3[28],tag_3[29],tag_3[30],tag_3[31],tag_3[32],tag_3[33],tag_3[34],tag_3[35],tag_3[36],tag_3[37],tag_3[38],tag_3[39],tag_3[40],tag_3[41],tag_3[42],tag_3[43],tag_3[44],tag_3[45],tag_3[46],tag_3[47],tag_3[48],tag_3[49],tag_3[50],tag_3[51],tag_3[52],tag_3[53],tag_3[54],tag_3[55],tag_3[56],tag_3[57],tag_3[58],tag_3[59],tag_3[60],tag_3[61],tag_3[62],tag_3[63]}   <= 3456'b0;
		{tag_3[64],tag_3[65],tag_3[66],tag_3[67],tag_3[68],tag_3[69],tag_3[70],tag_3[71],tag_3[72],tag_3[73],tag_3[74],tag_3[75],tag_3[76],tag_3[77],tag_3[78],tag_3[79],tag_3[80],tag_3[81],tag_3[82],tag_3[83],tag_3[84],tag_3[85],tag_3[86],tag_3[87],tag_3[88],tag_3[89],tag_3[90],tag_3[91],tag_3[92],tag_3[93],tag_3[94],tag_3[95],tag_3[96],tag_3[97],tag_3[98],tag_3[99],tag_3[100],tag_3[101],tag_3[102],tag_3[103],tag_3[104],tag_3[105],tag_3[106],tag_3[107],tag_3[108],tag_3[109],tag_3[110],tag_3[111],tag_3[112],tag_3[113],tag_3[114],tag_3[115],tag_3[116],tag_3[117],tag_3[118],tag_3[119],tag_3[120],tag_3[121],tag_3[122],tag_3[123],tag_3[124],tag_3[125],tag_3[126],tag_3[127]}   <= 3456'b0;

		valid_0 <= 128'b0;
		valid_1 <= 128'b0;
		valid_2 <= 128'b0;
		valid_3 <= 128'b0;
	end
	else begin
		case(re_write_state)
			IDLE:begin
				if(state_miss)begin
					re_write_state							<= RE_WRITE;
					re_write_addr							<= addr_icache_read;
					if(iram_sel == 2'b00)	valid_0[addr_icache_read[`INDEX_RANGE]]	<= 1'b0;
					if(iram_sel == 2'b01)	valid_1[addr_icache_read[`INDEX_RANGE]]	<= 1'b0;
					if(iram_sel == 2'b10)	valid_2[addr_icache_read[`INDEX_RANGE]]	<= 1'b0;
					if(iram_sel == 2'b11)	valid_3[addr_icache_read[`INDEX_RANGE]]	<= 1'b0;

					icache_valid_pre						<= 1'b1;
					icache_addr_o							<= addr_icache_read;
					icache_len_o							<= 8'h0;
					icache_req_o							<= `REQ_READ;
				end
			end
			RE_WRITE:begin
				if(arb_if_trans_done_i )begin
					if(iram_sel == 2'b00)begin
						tag_0[re_write_addr[`INDEX_RANGE]]		<= re_write_addr[63:10];
						valid_0[re_write_addr[`INDEX_RANGE]]	<= 1'b1;
					end
					if(iram_sel == 2'b01)begin
						tag_1[re_write_addr[`INDEX_RANGE]]		<= re_write_addr[63:10];
						valid_1[re_write_addr[`INDEX_RANGE]]	<= 1'b1;
					end
					if(iram_sel == 2'b10)begin
						tag_2[re_write_addr[`INDEX_RANGE]]		<= re_write_addr[63:10];
						valid_2[re_write_addr[`INDEX_RANGE]]	<= 1'b1;
					end
					if(iram_sel == 2'b11)begin
						tag_3[re_write_addr[`INDEX_RANGE]]		<= re_write_addr[63:10];
						valid_3[re_write_addr[`INDEX_RANGE]]	<= 1'b1;
					end

					icache_valid_pre						<= 0;
					re_write_state							<= IDLE;
				end
				else if(arb_if_r_hs_i)begin
					re_write_addr							<= re_write_addr + 64'd8;

					if(iram_sel == 2'b00)begin
						tag_0[re_write_addr[`INDEX_RANGE]]		<= re_write_addr[63:10];
						valid_0[re_write_addr[`INDEX_RANGE]]	<= 1'b1;
					end
					if(iram_sel == 2'b01)begin
						tag_1[re_write_addr[`INDEX_RANGE]]		<= re_write_addr[63:10];
						valid_1[re_write_addr[`INDEX_RANGE]]	<= 1'b1;
					end
					if(iram_sel == 2'b10)begin
						tag_2[re_write_addr[`INDEX_RANGE]]		<= re_write_addr[63:10];
						valid_2[re_write_addr[`INDEX_RANGE]]	<= 1'b1;
					end
					if(iram_sel == 2'b11)begin
						tag_3[re_write_addr[`INDEX_RANGE]]		<= re_write_addr[63:10];
						valid_3[re_write_addr[`INDEX_RANGE]]	<= 1'b1;
					end
				end
			end
			default:	re_write_state <= IDLE;
		endcase 
	end	
end

assign	iram_0_wen	= !(state_re_write && (arb_if_r_hs_i | arb_if_trans_done_i) && (iram_sel == 2'b00));
assign 	iram_0_bwen	= re_write_addr[3] ? 
						128'h00000000_00000000_ffffffff_ffffffff :
						128'hffffffff_ffffffff_00000000_00000000 ;	
assign 	iram_0_addr	= !iram_0_wen ? re_write_addr[9:4] : if_addr_i[9:4];
assign 	iram_0_data	= re_write_addr[3] ?
						{icache_data_read_i,64'b0} :
						{64'b0,icache_data_read_i} ;	

assign	iram_1_wen	= !(state_re_write && (arb_if_r_hs_i | arb_if_trans_done_i) && (iram_sel == 2'b01));
assign 	iram_1_bwen	= re_write_addr[3] ? 
						128'h00000000_00000000_ffffffff_ffffffff :
						128'hffffffff_ffffffff_00000000_00000000 ;	
assign 	iram_1_addr	= !iram_1_wen ? re_write_addr[9:4] : if_addr_i[9:4];
assign 	iram_1_data	= re_write_addr[3] ?
						{icache_data_read_i,64'b0} :
						{64'b0,icache_data_read_i} ;	

assign	iram_2_wen	= !(state_re_write && (arb_if_r_hs_i | arb_if_trans_done_i) && (iram_sel == 2'b10));
assign 	iram_2_bwen	= re_write_addr[3] ? 
						128'h00000000_00000000_ffffffff_ffffffff :
						128'hffffffff_ffffffff_00000000_00000000 ;	
assign 	iram_2_addr	= !iram_2_wen ? re_write_addr[9:4] : if_addr_i[9:4];
assign 	iram_2_data	= re_write_addr[3] ?
						{icache_data_read_i,64'b0} :
						{64'b0,icache_data_read_i} ;	

assign	iram_3_wen	= !(state_re_write && (arb_if_r_hs_i | arb_if_trans_done_i) && (iram_sel == 2'b11));
assign 	iram_3_bwen	= re_write_addr[3] ? 
						128'h00000000_00000000_ffffffff_ffffffff :
						128'hffffffff_ffffffff_00000000_00000000 ;	
assign 	iram_3_addr	= !iram_3_wen ? re_write_addr[9:4] : if_addr_i[9:4];
assign 	iram_3_data	= re_write_addr[3] ?
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
assign if_data_o  = {64{hit_0}} & (if_addr_i[3] ? iram_0_data_read_128[127:64] : iram_0_data_read_128[63:0]) | 
					{64{hit_1}} & (if_addr_i[3] ? iram_1_data_read_128[127:64] : iram_1_data_read_128[63:0]) |
					{64{hit_2}} & (if_addr_i[3] ? iram_2_data_read_128[127:64] : iram_2_data_read_128[63:0]) |
					{64{hit_3}} & (if_addr_i[3] ? iram_3_data_read_128[127:64] : iram_3_data_read_128[63:0]) ;

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


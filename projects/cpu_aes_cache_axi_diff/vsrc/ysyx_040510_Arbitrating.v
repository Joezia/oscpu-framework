`include "ysyx_040510_para.v"
module ysyx_040510_Arbitrating(
	input			clk,
	input			rst,

	input				icache_valid_i,
	output reg [63:0]	icache_data_read_o,
	input	[63:0]		icache_addr_i,
	input	[1:0]		icache_size_i,
	input	[7:0]		icache_len_i,
	input				icache_req_i,

	input				dcache_valid_i,
	input				dcache_req_i,
	input	[63:0]		dcache_addr_i,
	input	[7:0]		dcache_len_i,
	input	[63:0]		dcache_data_write_i,
	output reg [63:0]	dcache_data_read_o,

	output				rw_valid_o,
	input				rw_ready_i,
	output				rw_req_o,
	input	[63:0]		rw_data_read_i,
	output	[63:0]		rw_data_write_o,
	output	[63:0]		rw_addr_o,
	output	[1:0]		rw_size_o,	
	output	[7:0]		rw_len_o,
	input				rw_trans_done_i,
	input				rw_r_hs_i,
	output  [1:0]		rw_arb_state_o,
	
	output	reg			arb_if_r_hs_o,
	output	reg			arb_if_trans_done_o,
	output	reg			arb_mem_trans_done_o,
	output	reg			arb_mem_r_hs_o,
	
	output				axi_trans_done_pulse,
	output reg			axi_stall_o
);

//************************************* State machine
parameter [1:0] IDLE = 2'b00,
				MEM  = 2'b01,
				IF	 = 2'b10;

reg [1:0] arb_state;
wire state_idle	= arb_state == IDLE;
wire state_mem	= arb_state == MEM;
wire state_if   = arb_state == IF;

reg situation_if_valid;

reg zza_pulse_1;						//When detected trans_done,generating 1 clk neg_pulse
always@(posedge clk)begin
	if(!rst)					zza_pulse_1 <= 1;
	else if(rw_trans_done_i)	zza_pulse_1 <= 1'b0;
	else						zza_pulse_1 <= 1'b1;
end

reg		zza_pulse_3;					//When detected trans_done, generating 3 clk neg_pulse
reg [1:0]zza_count;
always@(posedge clk)begin
	if(!rst) begin 
		zza_pulse_3 <= 1'b1;
		zza_count	<= 2'b0;
	end
	else begin
		if(rw_trans_done_i) begin 
			zza_pulse_3 <= 1'b0;
			zza_count	<= 2'b01;
		end
		else if(zza_count == 2'b01) zza_count <= 2'b10;
		else if(zza_count == 2'b10) zza_count <= 2'b00;
		else						zza_pulse_3 <= 1'b1;
	end
end

assign axi_trans_done_pulse = zza_pulse_1;
wire zza_pulse = situation_if_valid ? zza_pulse_3 : zza_pulse_1;

always @(posedge clk)begin
	if(!rst)begin
		arb_state		<= IDLE;
	end
	else begin
		case(arb_state)
			IDLE:begin
				if		(dcache_valid_i & zza_pulse)		arb_state <= MEM;
				else if (icache_valid_i & zza_pulse)		arb_state <= IF;
				else										arb_state <= IDLE;
			end
			MEM:begin
				if		(rw_trans_done_i && icache_valid_i)	arb_state <= IF;
				else if (rw_trans_done_i)					arb_state <= IDLE;	
			end
			IF:begin
				if		(rw_trans_done_i)					arb_state <= IDLE;     	
			end
			default:										arb_state <= IDLE;
		endcase
	end
end

wire rw_valid_pre	=	state_idle	? 0					:
						state_mem	? dcache_valid_i	:
						state_if	? icache_valid_i	: 0;
assign rw_valid_o	=	rw_valid_pre & zza_pulse;

assign rw_req_o		=	state_idle	? 0					:
						state_mem	? dcache_req_i		:
						state_if	? icache_req_i		: 0;	

assign rw_data_write_o =	dcache_data_write_i;
assign rw_addr_o	=	state_idle	? 64'h0			:
						state_mem	? dcache_addr_i	:
						state_if	? icache_addr_i		: 64'b0;
assign rw_size_o	=	icache_size_i;
assign rw_len_o		=	{8{state_if}}  & icache_len_i |
						{8{state_mem}} & dcache_len_i ;
assign rw_arb_state_o = arb_state;

always @(posedge clk)begin
	if(!rst)begin
		situation_if_valid		<= 0;
		dcache_data_read_o		<= 0;
		icache_data_read_o		<= 0;
		arb_if_r_hs_o			<= 0;
		arb_if_trans_done_o		<= 0;
		arb_mem_r_hs_o			<= 0;
		arb_mem_trans_done_o	<= 0;
	end
	else begin
		if(state_mem && rw_trans_done_i)begin
			dcache_data_read_o		<= rw_data_read_i;
			situation_if_valid		<= icache_valid_i ? 1 : 0;
		end
		if		(state_if && rw_r_hs_i)			icache_data_read_o	<= rw_data_read_i;

		if		(state_mem && rw_trans_done_i)	arb_mem_trans_done_o<= 1'b1;
		else if	(state_mem && rw_r_hs_i)		arb_mem_r_hs_o		<= 1'b1;
		else begin
			arb_mem_r_hs_o		<= 0;
			arb_mem_trans_done_o<= 0;
		end

		if		(state_if && rw_trans_done_i)	arb_if_trans_done_o <= 1'b1;
		else if	(state_if && rw_r_hs_i)			arb_if_r_hs_o		<= 1'b1;
		else begin 
			arb_if_r_hs_o		<= 0;
			arb_if_trans_done_o <= 0;
		end
	end
end

always@(posedge clk)begin
	if(!rst)begin
		axi_stall_o <= 0;
	end
	else begin
		if		(rw_trans_done_i && state_mem && (!icache_valid_i))	axi_stall_o <= 1'b0;
		else if	(rw_trans_done_i && state_if)						axi_stall_o <= 1'b0;
		else if	(icache_valid_i || (dcache_valid_i && zza_pulse))		axi_stall_o <= 1'b1;
	end
end

endmodule


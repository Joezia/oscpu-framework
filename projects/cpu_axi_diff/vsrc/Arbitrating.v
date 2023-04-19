`include "para.v"
module Arbitrating(
	input			clk,
	input			rst,

	input			if_valid_i,
	output reg [63:0]	if_data_read_o,
	input	[63:0]	if_addr_i,
	input	[1:0]	if_size_i,
	input			if_req_i,

	input			mem_valid_i,
	input	[63:0]	mem_addr_i,
	output reg [63:0]	mem_data_read_o,
	input	[63:0]	mem_data_write_i,
	input	[63:0]	mem_write_mask_axi,
	input			mem_req_i,

	output			rw_valid_o,
	input			rw_ready_i,
	output			rw_req_o,
	input	[63:0]	rw_data_read_i,
	output	[63:0]	rw_data_write_o,
	output	[63:0]	rw_addr_o,
	output	[1:0]	rw_size_o,	
	input			rw_trans_done_i,

	output reg		axi_stall_o
);

//************************************* State machine
parameter [1:0] IDLE = 2'b00,
				MEM  = 2'b01,
				IF	 = 2'b10;

reg [1:0] arb_state;
wire state_idle	= arb_state == IDLE;
wire state_mem	= arb_state == MEM;
wire state_if   = arb_state == IF;

always @(posedge clk)begin
	if(!rst)begin
		arb_state <= IDLE;
	end
	else begin
		case(arb_state)
			IDLE:begin
				if		(mem_valid_i & zza_pulse)		arb_state <= MEM;
				else if (if_valid_i & zza_pulse)		arb_state <= IF;
				else									arb_state <= IDLE;
			end
			MEM:begin
				if		(rw_trans_done_i && if_valid_i)	arb_state <= IF;
				else if (rw_trans_done_i)				arb_state <= IDLE;	
			end
			IF:begin
				if		(rw_trans_done_i)				arb_state <= IDLE;     	
			end
			default:								arb_state <= IDLE;
		endcase
	end
end

reg zza_pulse;						//When detected trans_done, generating a neg_pulse
reg zza_count;
always@(posedge clk)begin
	if(!rst) begin 
		zza_pulse <= 1'b1;
		zza_count <= 1'b0;
	end
	else begin
	if(rw_trans_done_i) begin 
		zza_pulse <= 1'b0;
		zza_count <= 1'b1;
	end
	else if(zza_count)  zza_count <= 1'b0;
	else				zza_pulse <= 1'b1;
end
end

wire rw_valid_pre	=	state_idle	? 0				:
						state_mem	? mem_valid_i	:
						state_if	? if_valid_i	: 0;
assign rw_valid_o	= rw_valid_pre & zza_pulse;

assign rw_req_o		=	state_idle	? 0				:
						state_mem	? mem_req_i		:
						state_if	? if_req_i		: 0;	

assign rw_data_write_o =	mem_data_write_i;
assign rw_addr_o	=	state_idle	? 64'h0			:
						state_mem	? mem_addr_i	:
						state_if	? if_addr_i		: 64'b0;
assign rw_size_o	=	if_size_i;

always @(posedge clk)begin
	if(state_mem && rw_trans_done_i) mem_data_read_o <= rw_data_read_i;
	if(state_if	 && rw_trans_done_i) if_data_read_o  <= rw_data_read_i;
end

always@(posedge clk)begin
	if(rw_trans_done_i && state_if)			axi_stall_o <= 1'b0;
	else if(if_valid_i || (mem_valid_i&&zza_pulse))		axi_stall_o <= 1'b1;
end

endmodule

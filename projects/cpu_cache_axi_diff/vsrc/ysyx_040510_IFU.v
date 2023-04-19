`include "ysyx_040510_para.v"
module ysyx_040510_IFU(
	input			clk,
	input			rst,
	input	[63:0]	pc,
	output	[31:0]	inst,

	output			if_valid_o,
	input			if_ready_i,
	input	[63:0]	if_data_read_i,
	output	[63:0]	if_addr_o,
	output	[1:0]	if_size_o,
	output			if_req_o,

	input			axi_stall_i
);

assign if_addr_o	= (pc >> 3)<<3;
assign if_size_o	= `SIZE_W;
assign if_req_o		= `REQ_READ;
assign if_valid_o	= 1'b1;

wire [63:0] rdata;

assign rdata	= if_data_read_i;
assign inst		= pc[2] ? rdata[63 : 32] : rdata[31 : 0];

endmodule

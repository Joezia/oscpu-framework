`include "para.v"
module IFU(
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

reg [63:0] rdata;
wire handshake_if	= !axi_stall_i;

assign rdata	= if_data_read_i;
assign inst		= pc[2] ? rdata[63 : 32] : rdata[31 : 0];

/*
RAMHelper RAMHelper(
  .clk              (clk),
  .en               (1),
  .rIdx             ((pc - `PC_START) >> 3),
  .rdata            (rdata),
  .wIdx             (0),
  .wdata            (0),
  .wmask            (0),
  .wen              (0)
);
*/
endmodule

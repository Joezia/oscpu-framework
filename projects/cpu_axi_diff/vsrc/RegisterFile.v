//import "DPI-C" function void set_gpr_ptr(input logic [63:0] a []);
`include "para.v"

module RegisterFile (
	input clk,
	input rst,
	//Read reg
	input reg1_ren,
	input reg2_ren,
	input [4:0]reg1addr,
	input [4:0]reg2addr,
	//Write reg
	input [63:0] wdata,
	input [4:0] waddr,
	input read_mem_en,
	input [63:0]sext_read_mem_value,
	input wen,
	input pc_wen,
	input axi_stall_i,
	// NPC
	input [63:0] npc,

	output [63:0] reg_write_value_wb,
	output [63:0] reg1,
	output [63:0] reg2,
	output [63:0] reg10,
	output reg [63:0] pc,

	output [63:0]regs_gpr[31:0]
);
	reg [63:0] rf [32];

	assign reg10 = rf[10];
	assign regs_gpr = rf;
	
	//Write
	always @(posedge clk) begin
	  if(!axi_stall_i)begin
		if(!rst)begin
			rf[0]<=64'b0;rf[1]<=64'b0;rf[2]<=64'b0;rf[3]<=64'b0;rf[4]<=64'b0;rf[5]<=64'b0;rf[6]<=64'b0;rf[7]<=64'b0;rf[8]<=64'b0;rf[9]<=64'b0;rf[10]<=64'b0;rf[11]<=64'b0;rf[12]<=64'b0;rf[13]<=64'b0;rf[14]<=64'b0;rf[15]<=64'b0;rf[16]<=64'b0;rf[17]<=64'b0;rf[18]<=64'b0;rf[19]<=64'b0;rf[20]<=64'b0;rf[21]<=64'b0;rf[22]<=64'b0;rf[23]<=64'b0;rf[24]<=64'b0;rf[25]<=64'b0;rf[26]<=64'b0;rf[27]<=64'b0;rf[28]<=64'b0;rf[29]<=64'b0;rf[30]<=64'b0;rf[31]<=64'b0;

			pc <= 64'h0000000080000000 - 64'h4;
		end
		else begin
			if(pc_wen) pc <= npc;
		end
	  end
	end
	
	/* verilator lint_off LATCH */	
	always @(*)begin
		if(wen)begin
			rf[waddr] = read_mem_en ? sext_read_mem_value : wdata;
			rf[0] = 64'b0;
		end
		else begin 
			;
		end
	end
	/* verilator lint_on LATCH */	
	
	assign reg_write_value_wb = read_mem_en?sext_read_mem_value:wdata;

	//Read
	assign reg1 = reg1_ren ? rf[reg1addr] : 64'b0;
	assign reg2 = reg2_ren ? rf[reg2addr] : 64'b0;

endmodule

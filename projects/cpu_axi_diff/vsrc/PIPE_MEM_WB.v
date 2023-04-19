module PIPE_MEM_WB(
	input clk,
	//Data
	input [63:0]	pc_mem,
	input [63:0]	npc_mem,
	input [31:0]	inst_mem,
	input [4:0]		rd_mem,
	input [63:0]	reg10,
	input			ebreak_mem,
	input [2:0]		branch_type_mem,
	input [63:0]	alu_sext_value_mem,
	input [63:0]	sext_read_mem_value_mem,
	input [63:0]	reg2_to_mem_forward,
	//Control
	input			wen_mem,
	input			read_mem_en_mem,
	input			write_mem_en_mem,
	input			pipeline_stall_mem,
	input [3:0]			mem_ctrl_mem,
	input [63:0]		mem_write_mask,

	input			axi_stall_i,
	
	output reg [63:0]pc_wb,
	output reg [63:0]npc_wb,
	output reg [31:0]inst_wb,
	output reg [4:0] rd_wb,
	output reg ebreak_wb,
	output reg [2:0]branch_type_wb,
	output reg [63:0]alu_sext_value_wb,
	output reg [63:0]sext_read_mem_value_wb,
	output reg wen_wb,
	output reg read_mem_en_wb,
	output reg write_mem_en_wb,
	output reg pipeline_stall_wb
);

always @(posedge clk)begin 
  if(!axi_stall_i)begin
	pc_wb <= pc_mem;
	npc_wb <= npc_mem;
	inst_wb <= inst_mem;
	rd_wb <= rd_mem;
	ebreak_wb <= ebreak_mem;
	branch_type_wb <= branch_type_mem;
	alu_sext_value_wb <= alu_sext_value_mem;
	sext_read_mem_value_wb <= sext_read_mem_value_mem;

	wen_wb <= wen_mem;
	read_mem_en_wb <= read_mem_en_mem;
	write_mem_en_wb <= write_mem_en_mem;
	pipeline_stall_wb <= pipeline_stall_mem;
  end
end

//***************************************************
//Write to memory 
RAMHelper RAMHelper(
  .clk              (clk),
  .en               (1),
  .rIdx             (0),
  .rdata            (),
  .wIdx             ((alu_sext_value_mem - `PC_START) >> 3),
  .wdata            (reg2_to_mem_forward),
  .wmask            (mem_write_mask),
  .wen              (!axi_stall_i && write_mem_en_mem)	//!Temporarily!
);

endmodule

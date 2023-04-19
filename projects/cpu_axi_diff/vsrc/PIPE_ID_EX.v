module PIPE_ID_EX(
	input clk,
	input rst,
	input [63:0]pc_if,
	//Data
	input [31:0]inst_id,
	input [63:0]npc_id,
	input [63:0]reg1_value_id,
	input [63:0]reg2_value_id,
	input		ebreak_id,
	input [63:0]pc_id,
	input [4:0] rs1_id,
	input [4:0] rs2_id,
	input [4:0] rd_id,
	input [63:0]imm_id,
	//Control
	input		wen_id,
	input		npc_op_id,
	input		npc_regimm_id,
	input [4:0]	alu_op_id,
	input		alu_only_imm_id,
	input		alu_pc_reg1_id,
	input		alu_imm_reg2_id,
	input [3:0]	value_width_ctrl_id,
	input [3:0]	mem_ctrl_id,
	input [2:0] branch_type_id,
	input		operator_a_w_id,
	input		operator_a_w_s_id,
	input		operator_b_w_id,
	input		if_inst_sll_id,
	input		read_mem_en_id,
	input		write_mem_en_id,

	input		pipeline_stall,
	input		axi_stall_i,

	output reg	[31:0]inst_ex,
	output reg	[63:0]npc_ex,
	output reg	[63:0]reg1_value_ex,
	output reg	[63:0]reg2_value_ex,
	output reg		ebreak_ex,
	output reg	[63:0]pc_ex,
	output reg	[4:0] rs1_ex,
	output reg	[4:0] rs2_ex,
	output reg	[4:0] rd_ex,
	output reg	[63:0]imm_ex,

	output reg		wen_ex,				//hazard
	output reg		npc_op_ex,
	output reg		npc_regimm_ex,
	output reg [4:0]alu_op_ex,			
	output reg		alu_only_imm_ex,
	output reg		alu_pc_reg1_ex,
	output reg		alu_imm_reg2_ex,
	output reg [3:0]value_width_ctrl_ex,//hazard
	output reg [3:0]mem_ctrl_ex,			
	output reg [2:0] branch_type_ex,	//hazard
	output reg operator_a_w_ex,
	output reg operator_a_w_s_ex,
	output reg operator_b_w_ex,
	output reg if_inst_sll_ex,
	output reg read_mem_en_ex,			//hazard
	output reg write_mem_en_ex,			//hazard
	output reg pipeline_stall_ex
);

always @(posedge clk)begin
  if(!axi_stall_i)begin
	inst_ex				<= inst_id;
	npc_ex				<= npc_id;
	reg1_value_ex		<= reg1_value_id;
	reg2_value_ex		<= reg2_value_id;
	ebreak_ex			<= ebreak_id;
	pc_ex				<= pc_id;
	rs1_ex				<= rs1_id;
	rs2_ex				<= rs2_id;
	rd_ex				<= rd_id;
	imm_ex				<= imm_id; 

	npc_op_ex			<= npc_op_id;		//ALU
	npc_regimm_ex		<= npc_regimm_id;
	alu_op_ex			<= alu_op_id;
	alu_only_imm_ex		<= alu_only_imm_id;
	alu_pc_reg1_ex		<= alu_pc_reg1_id;
	alu_imm_reg2_ex		<= alu_imm_reg2_id;
	value_width_ctrl_ex <= value_width_ctrl_id;
	mem_ctrl_ex			<= mem_ctrl_id;
	branch_type_ex		<= branch_type_id;
	operator_a_w_ex		<= operator_a_w_id;
	operator_a_w_s_ex	<= operator_a_w_s_id;
	operator_b_w_ex		<= operator_b_w_id;
	if_inst_sll_ex		<= if_inst_sll_id;
	read_mem_en_ex		<= read_mem_en_id;			//MEM and WB
	pipeline_stall_ex	<= pipeline_stall;


	if(!rst || pipeline_stall)begin
		wen_ex			<= 0;
		write_mem_en_ex <= 0;
	end
	else begin
		wen_ex <= wen_id && !(pc_if == 64'h0000000080000000);
		write_mem_en_ex <= write_mem_en_id;
	end

  end
end

endmodule 

module ysyx_040510_PIPE_ID_EX(
	input clk,
	input rst,
	input [63:0]pc_if,
	//Data
	input [31:0]inst_id,
	input [63:0]npc_id,
	input [63:0]reg1_value_id,
	input [63:0]reg2_value_id,
	input [63:0]csr_value_id,
	input		ebreak_id,
	input [63:0]pc_id,
	input [4:0] rs1_id,
	input [4:0] rs2_id,
	input [4:0] rd_id,
	input [11:0]csr_id,
	input [4:0]zimm_id,
	input csr_if_zimm_id,
	input [63:0]imm_id,
	//Control
	input		wen_id,
	input		csr_wen_id,
	input		npc_op_id,
	input		npc_regimm_id,
	input [4:0]	alu_op_id,
	input [2:0]	csr_alu_op_id,
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
	input		environment_call_id,
	input		m_mode_return_id,
	input		read_mem_en_id,
	input		write_mem_en_id,

	input		pipeline_stall,
	input		axi_stall_i,
	input		m_time_interrupt_trigger,

	output reg	[31:0]inst_ex,
	output reg	[63:0]npc_ex,
	output reg	[63:0]reg1_value_ex,
	output reg	[63:0]reg2_value_ex,
	output reg  [63:0]csr_value_ex,
	output reg		ebreak_ex,
	output reg	[63:0]pc_ex,
	output reg	[4:0] rs1_ex,
	output reg	[4:0] rs2_ex,
	output reg	[4:0] rd_ex,
	output reg	[11:0]csr_ex,
	output reg	[4:0]zimm_ex,
	output reg	csr_if_zimm_ex,
	output reg	[63:0]imm_ex,

	output reg		wen_ex,				//hazard
	output reg		csr_wen_ex,
	output reg		npc_op_ex,
	output reg		npc_regimm_ex,
	output reg [4:0]alu_op_ex,			
	output reg [2:0]csr_alu_op_ex,			
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
	output reg environment_call_ex,
	output reg m_mode_return_ex,
	output reg read_mem_en_ex,			//hazard
	output reg write_mem_en_ex,			//hazard
	output reg pipeline_stall_ex
);

always @(posedge clk)begin
	if(!rst) begin
		inst_ex				<= 0; 
		npc_ex				<= 0; 
		reg1_value_ex		<= 0; 
		reg2_value_ex		<= 0; 
		csr_value_ex		<= 0; 
		ebreak_ex			<= 0; 
		pc_ex				<= 0; 
		rs1_ex				<= 0; 
		rs2_ex				<= 0; 
		rd_ex				<= 0; 
		csr_ex				<= 0; 
		zimm_ex				<= 0; 
		csr_if_zimm_ex		<= 0; 
		imm_ex				<= 0; 
    
		npc_op_ex			<= 0; 
		npc_regimm_ex		<= 0; 
		alu_op_ex			<= 0; 
		csr_alu_op_ex		<= 0; 
		alu_only_imm_ex		<= 0; 
		alu_pc_reg1_ex		<= 0; 
		alu_imm_reg2_ex		<= 0; 
		value_width_ctrl_ex <= 0; 
		mem_ctrl_ex			<= 0; 
		branch_type_ex		<= 0; 
		operator_a_w_ex		<= 0; 
		operator_a_w_s_ex	<= 0; 
		operator_b_w_ex		<= 0; 
		if_inst_sll_ex		<= 0; 
		environment_call_ex <= 0; 
		m_mode_return_ex    <= 0; 
		read_mem_en_ex		<= 0; 
		pipeline_stall_ex	<= 0; 
		csr_wen_ex			<= 0; 
		wen_ex				<= 0; 
		write_mem_en_ex		<= 0; 
	end
	else if(!axi_stall_i)begin
		inst_ex				<= inst_id;
		npc_ex				<= npc_id;
		reg1_value_ex		<= reg1_value_id;
		reg2_value_ex		<= reg2_value_id;
		csr_value_ex		<= csr_value_id;
		ebreak_ex			<= ebreak_id;
		pc_ex				<= pc_id;
		rs1_ex				<= rs1_id;
		rs2_ex				<= rs2_id;
		rd_ex				<= rd_id;
		csr_ex				<= csr_id;
		zimm_ex				<= zimm_id;
		csr_if_zimm_ex		<= csr_if_zimm_id;
		imm_ex				<= imm_id; 
    
		npc_op_ex			<= npc_op_id;		//ALU
		npc_regimm_ex		<= npc_regimm_id;
		alu_op_ex			<= alu_op_id;
		csr_alu_op_ex		<= csr_alu_op_id;
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
		environment_call_ex <= environment_call_id;
		m_mode_return_ex    <= m_mode_return_id;
		read_mem_en_ex		<= read_mem_en_id;			//MEM and WB
		pipeline_stall_ex	<= pipeline_stall;
    
		if(pipeline_stall || m_time_interrupt_trigger)begin
			wen_ex			<= 0;
			write_mem_en_ex <= 0;
		end
		else begin
			csr_wen_ex <= csr_wen_id;
			wen_ex <= wen_id && !(pc_if == 64'h0000000080000000);
			write_mem_en_ex <= write_mem_en_id;
		end
	end
end

endmodule 

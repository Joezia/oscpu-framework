module ysyx_040510_PIPE_EX_MEM(
	//Data 
	input clk,	
	input rst, 
	input [63:0]pc_ex,
	input [63:0]npc_ex,
	input [31:0]inst_ex,
	input [4:0]rs2_ex,
	input [4:0]rd_ex,
	input [63:0]reg2_value_ex,
	input ebreak_ex,
	input [63:0]alu_sext_value_ex,
	//Control
	input wen_ex,
	input read_mem_en_ex,
	input write_mem_en_ex, 
	input [2:0]branch_type_ex,
	input npc_op_ex,
	input npc_regimm_ex,
	input [3:0]mem_ctrl_ex,
	input pipeline_stall_ex,
	input environment_call_ex,
	input m_mode_return_ex,
	input		cmov_wen_ex,
	input [11:0]csr_ex,
	input		csr_wen_ex,
	input [63:0]csr_value_writeback_ex,

	input axi_stall_i,
	input m_time_interrupt_trigger,

	output	reg [63:0]pc_mem,
	output	reg [63:0]npc_mem,
	output	reg [31:0]inst_mem,
	output	reg [4:0]rs2_mem,
	output	reg [4:0]rd_mem,  
	output	reg [63:0]reg2_value_mem,
	output	reg ebreak_mem,
	output	reg [63:0]alu_sext_value_mem,
	output	reg wen_mem,
	output	reg read_mem_en_mem,
	output	reg write_mem_en_mem,
	output	reg [2:0]branch_type_mem,
	output	reg npc_op_mem,
	output	reg npc_regimm_mem,
	output	reg [3:0]mem_ctrl_mem,
	output	reg pipeline_stall_mem,
	output	reg environment_call_mem,
	output  reg m_mode_return_mem,
	output	reg cmov_wen_mem,
	output	reg [11:0]csr_mem,
	output	reg  csr_wen_mem,
	output  reg	[63:0]csr_value_writeback_mem
);

always@(posedge clk)begin
	if(!rst)begin
		pc_mem					<= 0; 
		npc_mem					<= 0; 
		inst_mem				<= 0; 
		rs2_mem					<= 0; 
		rd_mem					<= 0; 
		reg2_value_mem			<= 0; 
		ebreak_mem				<= 0; 
		alu_sext_value_mem		<= 0; 
    
		wen_mem					<= 0; 
		read_mem_en_mem			<= 0; 
		write_mem_en_mem		<= 0; 
		branch_type_mem			<= 0; 
		npc_op_mem				<= 0; 
		npc_regimm_mem			<= 0; 
		mem_ctrl_mem			<= 0; 
		pipeline_stall_mem		<= 0; 
		environment_call_mem	<= 0; 
		m_mode_return_mem		<= 0; 
		csr_mem					<= 0; 
		csr_wen_mem				<= 0; 
		csr_value_writeback_mem <= 0;
		cmov_wen_mem			<= 0;
	end
	else begin
		if(!axi_stall_i)begin
			pc_mem <= pc_ex;
			npc_mem <= npc_ex;
			inst_mem <= inst_ex;
			rs2_mem <= rs2_ex;
			rd_mem <= rd_ex;
			reg2_value_mem <= reg2_value_ex;
			ebreak_mem <= ebreak_ex;
			alu_sext_value_mem <= alu_sext_value_ex;
        
			wen_mem <= m_time_interrupt_trigger ? 0 : wen_ex;
			read_mem_en_mem <= read_mem_en_ex;
			write_mem_en_mem <= m_time_interrupt_trigger ? 0 : write_mem_en_ex;
			branch_type_mem <= branch_type_ex;
			npc_op_mem <= npc_op_ex;
			npc_regimm_mem <= npc_regimm_ex;
			mem_ctrl_mem <= mem_ctrl_ex;
			pipeline_stall_mem <= pipeline_stall_ex;
			environment_call_mem <= environment_call_ex;
			m_mode_return_mem <= m_mode_return_ex;
			cmov_wen_mem	<= cmov_wen_ex;
			csr_mem <= csr_ex;
			csr_wen_mem <= csr_wen_ex;
			csr_value_writeback_mem <= csr_value_writeback_ex;
		end
	end
end

endmodule

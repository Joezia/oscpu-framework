module ysyx_040510_PIPE_MEM_WB(
	input clk,
	input rst,
	//Data
	input [63:0]	pc_mem,
	input [63:0]	npc_mem,
	input [31:0]	inst_mem,
	input [4:0]		rd_mem,
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
	input			environment_call_mem,
	input			m_mode_return_mem,
	input			if_clint_mem,
	input			if_uart_mem,
	input			cmov_wen_mem,
	input [11:0]	csr_mem,
	input			csr_wen_mem,
	input [63:0]	csr_value_writeback_mem,

	input			axi_stall_i,
	input			m_time_interrupt_trigger,
	
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
	output reg pipeline_stall_wb,
	output reg environment_call_wb,
	output reg m_mode_return_wb,
	output reg if_clint_wb,
	output reg if_uart_wb,
	output reg cmov_wen_wb,
	output reg [11:0]csr_wb,
	output reg csr_wen_wb,
	output reg [63:0]csr_value_writeback_wb
);

always @(posedge clk)begin 
	if(!rst)begin
		pc_wb					<= 0; 
		npc_wb					<= 0; 
		inst_wb					<= 0; 
		rd_wb					<= 0; 
		ebreak_wb				<= 0; 
		branch_type_wb			<= 0; 
		alu_sext_value_wb		<= 0; 
		sext_read_mem_value_wb	<= 0; 
    
		wen_wb					<= 0; 
		read_mem_en_wb			<= 0; 
		write_mem_en_wb			<= 0; 
		pipeline_stall_wb		<= 0; 
		environment_call_wb		<= 0; 
		m_mode_return_wb		<= 0; 
		if_clint_wb				<= 0; 
		if_uart_wb				<= 0; 
		cmov_wen_wb				<= 0;
		csr_wb					<= 0; 
		csr_wen_wb				<= 0; 
		csr_value_writeback_wb	<= 0; 
	end
	else if(!axi_stall_i)begin
		pc_wb <= pc_mem;
		npc_wb <= npc_mem;
		inst_wb <= inst_mem;
		rd_wb <= rd_mem;
		ebreak_wb <= ebreak_mem;
		branch_type_wb <= branch_type_mem;
		alu_sext_value_wb <= alu_sext_value_mem;
		sext_read_mem_value_wb <= sext_read_mem_value_mem;
    
		wen_wb <= m_time_interrupt_trigger ? 0 : wen_mem;
		read_mem_en_wb <= read_mem_en_mem;
		write_mem_en_wb <= m_time_interrupt_trigger ? 0 : write_mem_en_mem;
		pipeline_stall_wb <= pipeline_stall_mem;
		environment_call_wb <= environment_call_mem;
		m_mode_return_wb <= m_mode_return_mem;
		if_clint_wb	<= if_clint_mem;
		if_uart_wb	<= if_uart_mem;
		cmov_wen_wb	<= cmov_wen_mem;
		csr_wb <= csr_mem;
		csr_wen_wb <= csr_wen_mem;
		csr_value_writeback_wb <= csr_value_writeback_mem;
	end
end
endmodule

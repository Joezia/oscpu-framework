`include "ysyx_040510_para.v"
module ysyx_040510_cpu(
    input                               clock,
    input                               reset,

	input								axi_stall,
	input								icache_stall_i,

	output								io_char_valid_o,
	output [7:0]						io_char_o,

	output								clint_wen_o,
	output								clint_ren_o,
	output [63:0]						clint_addr_o,
	output [63:0]						clint_data_o,
	input  [63:0]						clint_data_read_i,
	input								mtime_ge_mtimecmp_i,

	output								mem_valid,
	output								mem_req,
	output [63:0]						mem_addr,
	input  [63:0]						mem_data_read,
	output [63:0]						mem_data_write,
	output [7:0]						mem_write_mask_axi,
    
    output                              if_valid,
    input                               if_ready,
    input  [63:0]                       if_data_read,
    output [63:0]                       if_addr,
    output [1:0]                        if_size,
	output								if_req,
    input  [1:0]                        if_resp
);

wire [63:0]pc_id;
wire [63:0]pc_if;
wire [63:0]pc_ex;
wire [63:0]pc_mem;
wire [63:0]pc_wb;
wire [31:0]inst_id;
wire [31:0]inst_if;
wire [31:0]inst_ex;
wire [31:0]inst_mem;
wire [31:0]inst_wb;

wire [2:0]optype;		//
wire npc_op_id;
wire npc_op_ex;
wire npc_op_mem;
wire npc_regimm_id;	
wire npc_regimm_ex;	
wire npc_regimm_mem;	
wire reg1_ren;			//
wire reg2_ren;			//
wire csr_ren;
wire rf_wen;			//
wire wen_id;
wire wen_ex;
wire wen_mem;
wire wen_wb;
wire csr_wen_id;
wire csr_wen_ex;
wire csr_wen_mem;
wire csr_wen_wb;
wire [4:0]alu_op_id;
wire [4:0]alu_op_ex;
wire [2:0]csr_alu_op_id;
wire [2:0]csr_alu_op_ex;
wire alu_only_imm_id;
wire alu_only_imm_ex;
wire alu_pc_reg1_id;
wire alu_pc_reg1_ex;
wire alu_imm_reg2_id;
wire alu_imm_reg2_ex;
wire csr_if_zimm_id;
wire csr_if_zimm_ex;
wire [4:0]rd_id;
wire [4:0]rd_ex;
wire [4:0]rd_mem;
wire [4:0]rd_wb;
wire [11:0]csr_id;
wire [11:0]csr_ex;
wire [11:0]csr_mem;
wire [11:0]csr_wb;
wire [4:0]zimm_id;
wire [4:0]zimm_ex;
wire [4:0]rs1_id;
wire [4:0]rs1_ex;
wire [4:0]rs2_id;
wire [4:0]rs2_ex;
wire [4:0]rs2_mem;
//wire [63:0]reg10;				//
wire read_mem_en_id;	
wire read_mem_en_ex;	
wire read_mem_en_mem;	
wire read_mem_en_wb;	
wire write_mem_en_id;
wire write_mem_en_ex;
wire write_mem_en_mem;
wire write_mem_en_wb;
wire [3:0]mem_ctrl_id;
wire [3:0]mem_ctrl_ex;
wire [3:0]mem_ctrl_mem;
wire [3:0]value_width_ctrl_id;
wire [3:0]value_width_ctrl_ex;
wire [2:0]branch_type_id;
wire [2:0]branch_type_ex;
wire [2:0]branch_type_mem;
wire [2:0]branch_type_wb;
wire operator_a_w_id;
wire operator_a_w_ex;
wire operator_a_w_s_id;
wire operator_a_w_s_ex;
wire operator_b_w_id;
wire operator_b_w_ex;
wire if_inst_sll_id;
wire if_inst_sll_ex;
wire environment_call_id;
wire environment_call_ex;
wire environment_call_mem;
wire environment_call_wb;
wire m_mode_return_id;
wire m_mode_return_ex;
wire m_mode_return_mem;
wire m_mode_return_wb;

wire if_inst_aes64ds_id;
wire if_inst_aes64ds_ex;
wire if_inst_aes64dsm_id;
wire if_inst_aes64dsm_ex;
wire if_inst_aes64es_id;
wire if_inst_aes64es_ex;
wire if_inst_aes64esm_id;
wire if_inst_aes64esm_ex;
wire if_inst_aes64im_id;
wire if_inst_aes64im_ex;
wire if_inst_aes64ks1i_id;
wire if_inst_aes64ks1i_ex;
wire if_inst_aes64ks2_id;
wire if_inst_aes64ks2_ex;
wire [3:0]ks1i_rnum_id;
wire [3:0]ks1i_rnum_ex;

wire if_cmov_id;
wire if_cmov_ex;
wire cmov_wen_ex;
wire cmov_wen_mem;
wire cmov_wen_wb;
wire lb_rd_value_wr;
wire lb_wen;
wire [4:0] lb_rs1;
wire [4:0] lb_rs2;
wire [4:0] lb_rd;
wire [3:0] lb_isa_type;
wire lb_rs1_value;
wire lb_rs2_value;
wire lb_rd_value;

wire ebreak_id;
wire ebreak_ex;
wire ebreak_mem;
wire ebreak_wb;

wire [63:0]reg2_value_forwardb_ex;
wire [63:0]csr_value_writeback_ex;
wire [63:0]csr_value_writeback_mem;
wire [63:0]csr_value_writeback_wb;
wire alu_stall;

wire [63:0]read_mem_value;
wire [63:0]reg2_to_mem_forward;
wire [63:0]mem_write_mask;
wire if_clint_mem;
wire if_clint_wb;
wire if_uart_mem;
wire if_uart_wb;

wire		clint_wen;
wire		clint_ren;
wire [63:0]	clint_addr;
wire [63:0]	clint_data;

wire [63:0]pc;
wire [63:0]npc;
wire [63:0]npc_ex;
wire [63:0]npc_mem;
wire [63:0]npc_wb;
wire [63:0]reg1_value_id;
wire [63:0]reg1_value_ex;
wire [63:0]reg2_value_id;
wire [63:0]reg2_value_ex;
wire [63:0]reg2_value_mem;
wire [63:0]csr_value_id;
wire [63:0]csr_value_ex;
wire [63:0]reg_write_value_wb;
wire [63:0]regs_gpr[31:0];

wire m_time_interrupt;
wire m_time_interrupt_trigger;

wire [63:0]value;
wire [63:0]imm_id;
wire [63:0]imm_ex;
wire [63:0]sext_read_mem_value_mem;
wire [63:0]sext_read_mem_value_wb;
wire [63:0]sext_value_ex;
wire [63:0]sext_value_mem;
wire [63:0]sext_value_wb;

wire IF_Flush;

wire [1:0]Forward_a;
wire [1:0]Forward_b;
wire [1:0]Forward_c;
wire [1:0]Forward_d;
wire Forward_store;

wire pipeline_stall;
wire pipeline_stall_ex;
wire pipeline_stall_mem;
wire pipeline_stall_wb;
wire pc_wen;

wire [63:0]reg_write_value_mem = read_mem_en_mem?sext_read_mem_value_mem:sext_value_mem;



wire axi_stall_i = axi_stall || icache_stall_i || alu_stall;
wire device_stall = axi_stall || icache_stall_i;
wire clk = clock;
wire rst = !reset;
assign	clint_wen_o = clint_wen;
assign	clint_ren_o = clint_ren;
assign	clint_addr_o = clint_addr;
assign	clint_data_o = clint_data;

ysyx_040510_IFU IFU0(
	.clk		(clk),
	.rst		(rst),
	.pc			(pc),
	.inst		(inst_if),

	.if_valid_o		(if_valid),
	.if_ready_i		(if_ready),
	.if_data_read_i	(if_data_read),
	.if_addr_o		(if_addr),
	.if_size_o		(if_size),
	.if_req_o		(if_req),

	.axi_stall_i	(axi_stall_i)
);

ysyx_040510_PIPE_IF_ID pipe_if_id_reg(
	.clk(clk),							//
	.rst(rst),
	.pc_if(pc),							//
	.pipeline_stall(pipeline_stall),	// 
	.IF_Flush(IF_Flush),				//
	.inst_if(inst_if),					//	

	.m_time_interrupt_trigger(m_time_interrupt_trigger),
	.axi_stall_i(axi_stall_i),

	.pc_id(pc_id),						//
	.inst_id(inst_id)					//
);


ysyx_040510_IDU IDU0(
	.clk(clk),		//
	.rst(rst),		//
	.inst(inst_id),	//
	.pc(pc_id),		//
	.axi_stall_i(axi_stall_i),

	.optype(optype),//
	.npc_op(npc_op_id),			//
	.npc_regimm(npc_regimm_id),	//
	.reg1_ren(reg1_ren),	//	
	.reg2_ren(reg2_ren),	//
	.csr_ren(csr_ren),
	.rf_wen(rf_wen),		//  ignore
	.wen(wen_id),			//
	.csr_wen(csr_wen_id),
	.alu_op(alu_op_id),		//
	.csr_alu_op(csr_alu_op_id),
	.alu_only_imm(alu_only_imm_id),	//
	.alu_pc_reg1(alu_pc_reg1_id),	//
	.alu_imm_reg2(alu_imm_reg2_id),	//
	.rd(rd_id),		//
	.rs1(rs1_id),	//
	.rs2(rs2_id),	//
	.csr(csr_id),
	.zimm(zimm_id),
	.csr_if_zimm(csr_if_zimm_id),
	.if_inst_aes64ks1i	(if_inst_aes64ks1i_id),
	.if_inst_aes64ks2	(if_inst_aes64ks2_id),
	.if_inst_aes64esm	(if_inst_aes64esm_id),
	.if_inst_aes64es	(if_inst_aes64es_id),
	.if_inst_aes64dsm	(if_inst_aes64dsm_id),
	.if_inst_aes64ds	(if_inst_aes64ds_id),
	.if_inst_aes64im	(if_inst_aes64im_id),
	.ks1i_rnum			(ks1i_rnum_id),
	.if_cmov			(if_cmov_id),
	.lb_rd_value_o		(lb_rd_value_wr),
	.lb_wen_o			(lb_wen),
	.lb_rs1_o			(lb_rs1),
	.lb_rs2_o			(lb_rs2),
	.lb_rd_o			(lb_rd),
	.lb_isa_type		(lb_isa_type),
	.lb_rs1_value_i		(lb_rs1_value),
	.lb_rs2_value_i		(lb_rs2_value),
	.lb_rd_value_i		(lb_rd_value),
	.read_mem_en(read_mem_en_id),		//
	.write_mem_en(write_mem_en_id),		//
	.mem_ctrl(mem_ctrl_id),				//
	.value_width_ctrl(value_width_ctrl_id),	//
	.branch_type(branch_type_id),		//
	.operator_a_w(operator_a_w_id),		//
	.operator_a_w_s(operator_a_w_s_id),	//
	.operator_b_w(operator_b_w_id),
	.environment_call(environment_call_id),
	.m_mode_return(m_mode_return_id),
	.if_inst_sll(if_inst_sll_id)
);

oisa_label oisa_u(
	.clk			(clk),
	.rst			(rst),
	.lb_rd_value_i	(lb_rd_value_wr),
	.lb_wen_i		(lb_wen),
	.lb_rs1_i		(lb_rs1),
	.lb_rs2_i		(lb_rs2),
	.lb_rd_i		(lb_rd),
	.lb_isa_type	(lb_isa_type),
	.lb_rs1_value_o	(lb_rs1_value),
	.lb_rs2_value_o	(lb_rs2_value),
	.lb_rd_value_o	(lb_rd_value),
	.lb_violation_o	()
);

ysyx_040510_PIPE_ID_EX pipe_id_ex_reg(
	.clk(clk),						//
	.rst(rst),						//
	.pc_if(pc),						//	

	.inst_id(inst_id),
	.reg1_value_id(reg1_value_id),	//
	.reg2_value_id(reg2_value_id),	//
	.csr_value_id(csr_value_id),
	.ebreak_id(ebreak_id),
	.pc_id(pc_id),					//
	.npc_id(npc),
	.rs1_id(rs1_id),				//
	.rs2_id(rs2_id),				//
	.rd_id(rd_id),					//
	.csr_id(csr_id),
	.zimm_id(zimm_id),
	.csr_if_zimm_id(csr_if_zimm_id),
	.imm_id(imm_id),				//

	.m_time_interrupt_trigger(m_time_interrupt_trigger),

	.if_inst_aes64ds_id(if_inst_aes64ds_id),
	.if_inst_aes64dsm_id(if_inst_aes64dsm_id),
	.if_inst_aes64es_id(if_inst_aes64es_id),
	.if_inst_aes64esm_id(if_inst_aes64esm_id),
	.if_inst_aes64im_id(if_inst_aes64im_id),
	.if_inst_aes64ks1i_id(if_inst_aes64ks1i_id),
	.if_inst_aes64ks2_id(if_inst_aes64ks2_id),
	.ks1i_rnum_id(ks1i_rnum_id),
	.if_cmov_id	(if_cmov_id),

	.wen_id(wen_id),				//
	.csr_wen_id(csr_wen_id),
	.npc_op_id(npc_op_id),			//
	.npc_regimm_id(npc_regimm_id),	//
	.alu_op_id(alu_op_id),			//
	.csr_alu_op_id(csr_alu_op_id),			//
	.alu_only_imm_id(alu_only_imm_id),//
	.alu_pc_reg1_id(alu_pc_reg1_id),	//
	.alu_imm_reg2_id(alu_imm_reg2_id),	//
	.mem_ctrl_id(mem_ctrl_id),				//
	.value_width_ctrl_id(value_width_ctrl_id),	//
	.branch_type_id(branch_type_id),		//
	.operator_a_w_id(operator_a_w_id),		//
	.operator_a_w_s_id(operator_a_w_s_id),	//
	.operator_b_w_id(operator_b_w_id),		//
	.if_inst_sll_id(if_inst_sll_id),
	.read_mem_en_id(read_mem_en_id),		//
	.pipeline_stall(pipeline_stall),
	.write_mem_en_id(write_mem_en_id),		//
	.environment_call_id(environment_call_id),
	.m_mode_return_id(m_mode_return_id),

	.axi_stall_i(axi_stall_i),

	.inst_ex(inst_ex),
	.reg1_value_ex(reg1_value_ex),	//
	.reg2_value_ex(reg2_value_ex),	//
	.csr_value_ex(csr_value_ex),
	.ebreak_ex(ebreak_ex),
	.pc_ex(pc_ex),					//
	.npc_ex(npc_ex),
	.rs1_ex(rs1_ex),				//
	.rs2_ex(rs2_ex),				//
	.rd_ex(rd_ex),					//
	.csr_ex(csr_ex),
	.zimm_ex(zimm_ex),
	.csr_if_zimm_ex(csr_if_zimm_ex),
	.imm_ex(imm_ex),				//

	.if_inst_aes64ds_ex(if_inst_aes64ds_ex),
	.if_inst_aes64dsm_ex(if_inst_aes64dsm_ex),
	.if_inst_aes64es_ex(if_inst_aes64es_ex),
	.if_inst_aes64esm_ex(if_inst_aes64esm_ex),
	.if_inst_aes64im_ex(if_inst_aes64im_ex),
	.if_inst_aes64ks1i_ex(if_inst_aes64ks1i_ex),
	.if_inst_aes64ks2_ex(if_inst_aes64ks2_ex),
	.ks1i_rnum_ex(ks1i_rnum_ex),
	.if_cmov_ex	(if_cmov_ex),

	.wen_ex(wen_ex),				//
	.csr_wen_ex(csr_wen_ex),
	.npc_op_ex(npc_op_ex),			//
	.npc_regimm_ex(npc_regimm_ex),	//
	.alu_op_ex(alu_op_ex),			//
	.csr_alu_op_ex(csr_alu_op_ex),			//
	.alu_only_imm_ex(alu_only_imm_ex),	//
	.alu_pc_reg1_ex(alu_pc_reg1_ex),	//
	.alu_imm_reg2_ex(alu_imm_reg2_ex),	//
	.mem_ctrl_ex(mem_ctrl_ex),				//
	.value_width_ctrl_ex(value_width_ctrl_ex),	//
	.branch_type_ex(branch_type_ex),		//
	.operator_a_w_ex(operator_a_w_ex),		//
	.operator_a_w_s_ex(operator_a_w_s_ex),	//
	.operator_b_w_ex(operator_b_w_ex),		//
	.if_inst_sll_ex(if_inst_sll_ex),
	.environment_call_ex(environment_call_ex),
	.m_mode_return_ex(m_mode_return_ex),
	.read_mem_en_ex(read_mem_en_ex),		//
	.write_mem_en_ex(write_mem_en_ex),		//
	.pipeline_stall_ex(pipeline_stall_ex)
);


ysyx_040510_ALU alu_module(
	.clk(clk),
	.rst(rst),
	.reg1(reg1_value_ex),				//
	.reg2(reg2_value_ex),				//
	.csr_value(csr_value_ex),
	.pc(pc_ex),							//
	.imm(imm_ex),						//
	.zimm(zimm_ex),
	.csr_if_zimm(csr_if_zimm_ex),
	.alu_op(alu_op_ex),					//
	.csr_alu_op(csr_alu_op_ex),
	.npc_op(npc_op_ex),					//
	.alu_only_imm(alu_only_imm_ex),		//
	.alu_pc_reg1(alu_pc_reg1_ex),		//
	.alu_imm_reg2(alu_imm_reg2_ex),		//
	.value(value),						//
	.csr_value_writeback(csr_value_writeback_ex),
	.branch_type(branch_type_ex),		//
	.operator_a_w(operator_a_w_ex),		//input,ctrl signal from IDU
	.operator_a_w_s(operator_a_w_s_ex),	//...
	.operator_b_w(operator_b_w_ex),		//...
	.if_inst_sll(if_inst_sll_ex),

	.if_inst_aes64ds(if_inst_aes64ds_ex),
	.if_inst_aes64dsm(if_inst_aes64dsm_ex),
	.if_inst_aes64es(if_inst_aes64es_ex),
	.if_inst_aes64esm(if_inst_aes64esm_ex),
	.if_inst_aes64im(if_inst_aes64im_ex),
	.if_inst_aes64ks1i(if_inst_aes64ks1i_ex),
	.if_inst_aes64ks2(if_inst_aes64ks2_ex),
	.ks1i_rnum(ks1i_rnum_ex),
	.if_cmov	(if_cmov_ex),
	.cmov_wen	(cmov_wen_ex),

	.device_stall(device_stall),
	.alu_stall(alu_stall),

	.Forward_a(Forward_a),
	.Forward_b(Forward_b),
	.sext_value_mem(sext_value_mem),
	.reg_write_value_wb(reg_write_value_wb),
	.reg2_forwardb(reg2_value_forwardb_ex)
);

ysyx_040510_PIPE_EX_MEM pipe_ex_mem_reg(
	.clk(clk),							//
	.rst(rst),
	.pc_ex(pc_ex),						//
	.npc_ex(npc_ex),
	.inst_ex(inst_ex),
	.rs2_ex(rs2_ex),
	.rd_ex(rd_ex),						//
	.reg2_value_ex(reg2_value_forwardb_ex),		//
	.ebreak_ex(ebreak_ex),
	.alu_sext_value_ex(sext_value_ex),	//
	.wen_ex(wen_ex),					//
	.read_mem_en_ex(read_mem_en_ex),	//
	.write_mem_en_ex(write_mem_en_ex),	//
	.branch_type_ex(branch_type_ex), //
	.npc_op_ex(npc_op_ex),				//
	.npc_regimm_ex(npc_regimm_ex),		//
	.mem_ctrl_ex(mem_ctrl_ex),			//
	.pipeline_stall_ex(pipeline_stall_ex),
	.cmov_wen_ex	(cmov_wen_ex),
	.csr_ex(csr_ex),
	.csr_wen_ex(csr_wen_ex),
	.csr_value_writeback_ex(csr_value_writeback_ex),
	.environment_call_ex(environment_call_ex),
	.m_mode_return_ex(m_mode_return_ex),

	.axi_stall_i(axi_stall_i),
	.m_time_interrupt_trigger(m_time_interrupt_trigger),

	.pc_mem(pc_mem),						//
	.npc_mem(npc_mem),
	.inst_mem(inst_mem),					//
	.rs2_mem(rs2_mem),						//
	.rd_mem(rd_mem),						//
	.reg2_value_mem(reg2_value_mem),		//
	.ebreak_mem(ebreak_mem),
	.alu_sext_value_mem(sext_value_mem),	//
	.wen_mem(wen_mem),						//
	.read_mem_en_mem(read_mem_en_mem),		//
	.write_mem_en_mem(write_mem_en_mem),	//
	.branch_type_mem(branch_type_mem),
	.npc_op_mem(npc_op_mem),				//
	.npc_regimm_mem(npc_regimm_mem),		//
	.mem_ctrl_mem(mem_ctrl_mem),				//
	.pipeline_stall_mem(pipeline_stall_mem),
	.cmov_wen_mem	(cmov_wen_mem),
	.environment_call_mem(environment_call_mem),
	.m_mode_return_mem(m_mode_return_mem),
	.csr_mem(csr_mem),
	.csr_wen_mem(csr_wen_mem),
	.csr_value_writeback_mem(csr_value_writeback_mem)
);


ysyx_040510_MEM memory(
	.clk(clk),							//
	.rst(rst),							//
	.read_mem_en(read_mem_en_mem),		//
	.write_mem_en(write_mem_en_mem),	//
	.mem_ctrl(mem_ctrl_mem),			//
	.addr(sext_value_mem),				//
	.reg2(reg2_value_mem),				//
	.read_mem_value(read_mem_value),	//
	.Forward_store(Forward_store),
	.mem_write_mask(mem_write_mask),
	.reg_write_value_wb(reg_write_value_wb),//wb stage, the value written into regfile
	.reg2_to_mem_forward(reg2_to_mem_forward),

	.if_clint	(if_clint_mem),
	.if_uart_o	(if_uart_mem),

	.mem_valid_o(mem_valid),
	.mem_req_o(mem_req),
	.mem_addr_o(mem_addr),
	.mem_data_read_i(mem_data_read),
	.mem_data_write_o(mem_data_write),
	.mem_write_mask_axi(mem_write_mask_axi),

	.clint_wen_o			(clint_wen),
	.clint_ren_o			(clint_ren),
	.clint_addr_o			(clint_addr),
	.clint_data_read_i		(clint_data_read_i),
	.clint_data_o			(clint_data)
);


ysyx_040510_PIPE_MEM_WB pipe_mem_wb(
	.clk(clk),						//
	.rst(rst),
	.pc_mem(pc_mem),				//
	.npc_mem(npc_mem),
	.inst_mem(inst_mem),			//
	.rd_mem(rd_mem),				//
	.ebreak_mem(ebreak_mem),
	.branch_type_mem(branch_type_mem),
	.alu_sext_value_mem(sext_value_mem),		//
	.sext_read_mem_value_mem(sext_read_mem_value_mem),//
	.wen_mem(wen_mem),					//
	.read_mem_en_mem(read_mem_en_mem),	//
	.write_mem_en_mem(write_mem_en_mem),	//
	.pipeline_stall_mem(pipeline_stall_mem),
	.reg2_to_mem_forward(reg2_to_mem_forward),
	.mem_ctrl_mem(mem_ctrl_mem),
	.mem_write_mask(mem_write_mask),
	.environment_call_mem(environment_call_mem),
	.m_mode_return_mem(m_mode_return_mem),
	.if_clint_mem(if_clint_mem),
	.if_uart_mem(if_uart_mem),
	.cmov_wen_mem	(cmov_wen_mem),
	.csr_mem(csr_mem),
	.csr_wen_mem(csr_wen_mem),
	.csr_value_writeback_mem(csr_value_writeback_mem),

	.axi_stall_i(axi_stall_i),
	.m_time_interrupt_trigger(m_time_interrupt_trigger),

	.pc_wb(pc_wb),				//
	.npc_wb(npc_wb),
	.inst_wb(inst_wb),			//
	.rd_wb(rd_wb),				//
	.ebreak_wb(ebreak_wb),
	.branch_type_wb(branch_type_wb),
	.alu_sext_value_wb(sext_value_wb),		//
	.sext_read_mem_value_wb(sext_read_mem_value_wb),//
	.wen_wb(wen_wb),				//
	.read_mem_en_wb(read_mem_en_wb),	//
	.write_mem_en_wb(write_mem_en_wb),	//
	.pipeline_stall_wb(pipeline_stall_wb),
	.environment_call_wb(environment_call_wb),
	.m_mode_return_wb(m_mode_return_wb),
	.if_clint_wb(if_clint_wb),
	.if_uart_wb(if_uart_wb),
	.cmov_wen_wb	(cmov_wen_wb),
	.csr_wb(csr_wb),
	.csr_wen_wb(csr_wen_wb),
	.csr_value_writeback_wb(csr_value_writeback_wb)
);


ysyx_040510_RegisterFile rf(
	.clk(clk),				//
	.rst(rst),				//
	.reg1_ren(reg1_ren),	//
	.reg2_ren(reg2_ren),	//
	.csr_ren(csr_ren),
	.reg1addr(rs1_id),		//
	.reg2addr(rs2_id),		//
	.csraddr(csr_id),
	.wdata(sext_value_wb),	//***
	.wdata_mem(sext_value_mem),
	.waddr(rd_wb),			//***
	.waddr_mem(rd_mem),
	.wen(wen_wb),			//***
	.wen_mem(wen_mem),
	.pc_wen(pc_wen),		//hazard detection->pc_wen
	.axi_stall_i(axi_stall_i),
	.read_mem_en(read_mem_en_wb),					//****
	.read_mem_en_mem(read_mem_en_mem),
	.sext_read_mem_value(sext_read_mem_value_wb),	//****
	.sext_read_mem_value_mem(sext_read_mem_value_mem),
	.npc(npc),				//
	.pc_wb(pc_wb),
	.pc_mem(pc_mem),
	.inst_wb(inst_wb),			//
	.reg1(reg1_value_id),	//
	.reg2(reg2_value_id),	//
	.csr_value(csr_value_id),
//	.reg10(reg10),			//
	.pc(pc),
	.reg_write_value_wb(reg_write_value_wb),	//output
	.regs_gpr(regs_gpr),
	.environment_call_wb(environment_call_wb),//****
	.m_mode_return_wb(m_mode_return_wb),//****
	.mtime_ge_mtimecmp_i(mtime_ge_mtimecmp_i),
	.cmov_wen_wb	(cmov_wen_wb),
	.csr_wb(csr_wb),		//***
	.csr_wen_wb(csr_wen_wb),//***
	.csr_value_writeback_wb(csr_value_writeback_wb),//***
	.mstatus_3(mstatus_3),
	.mepc_3(mepc_3),
	.mtvec_3(mtvec_3),
	.mcause_3(mcause_3),
	.mie_3(mie_3),
	.mip_3(mip_3),
	.mscratch_3(mscratch_3),
	.m_time_interrupt_trigger(m_time_interrupt_trigger),
	.m_time_interrupt_o(m_time_interrupt)
);

ysyx_040510_SEXT sext(
	.inst(inst_id),								//
	.optype(optype),							//
	.value(value),								//
	.value_width_ctrl(value_width_ctrl_ex),		//
	.mem_ctrl(mem_ctrl_mem),					//
	.read_mem_value(read_mem_value),			//
	.read_mem_addr(sext_value_mem),
	.sext_read_mem_value(sext_read_mem_value_mem), //
	.sext_value(sext_value_ex),					//
	.imm(imm_id)								//
);


ysyx_040510_NPC npc_processing(
	.reg1(reg1_value_id),		//
	.reg2(reg2_value_id),		//
	.mtvec_value(mtvec_3),
	.mepc_value(mepc_3),
	.pc_id(pc_id),				//
	.pc_if(pc),					//
	.imm(imm_id),				//
	.npc_op(npc_op_id),			//
	.npc_regimm(npc_regimm_id),	//	
	.pipeline_stall(pipeline_stall),
	.Forward_c(Forward_c),						//
	.Forward_d(Forward_d),						//
	.sext_value_ex(sext_value_ex),
	.reg_write_value_mem(reg_write_value_mem),			//
	.reg_write_value_wb(reg_write_value_wb),	//
	.branch_type(branch_type_id),				//
	.environment_call_id(environment_call_id),
	.m_mode_return_id(m_mode_return_id),
	.m_time_interrupt_trigger(m_time_interrupt_trigger),

	.IF_Flush(IF_Flush),						//
	.npc(npc)									//
);

ysyx_040510_Forwarding forwarding_unit(
	.clk(clk),
	.rst(rst),
	.rs1_id(rs1_id),
	.rs1_ex(rs1_ex),
	.rs2_id(rs2_id),
	.rs2_ex(rs2_ex),
	.rd_ex(rd_ex),
	.rd_mem(rd_mem),
	.rd_wb(rd_wb),
	.rs2_mem(rs2_mem),
	.write_mem_en_mem(write_mem_en_mem),
	.read_mem_en_wb(read_mem_en_wb),
	.wen_ex(wen_ex),
	.wen_mem(wen_mem),
	.wen_wb(wen_wb),

	.Forward_a(Forward_a),
	.Forward_b(Forward_b),
	.Forward_c(Forward_c),
	.Forward_d(Forward_d),
	.Forward_store(Forward_store)
);

ysyx_040510_Hazard_detection hazard_detection_unit(
	.clk(clk),
	.rst(rst),
	.rs1_id(rs1_id),
	.rs2_id(rs2_id),
	.rd_ex(rd_ex),
	.inst_id(inst_id),
	.inst_ex(inst_ex),
	.read_mem_en_ex(read_mem_en_ex),
	.pipeline_stall(pipeline_stall),
	.pc_wen(pc_wen)
);

//***********************************************************************************
//***********************************************************************************
//port for Environment_3 and difftest_3 
wire [63:0]	pc_3		= pc_wb;
wire [31:0]	inst_3		= inst_wb;
wire [63:0]	rd_data_3	= reg_write_value_wb;
wire [4:0]	rd_w_addr_3	= rd_wb;
wire		rd_w_ena_3	= wen_wb;
wire		inst_valid_3= (!axi_stall_i) && (!m_time_interrupt) && (!m_time_interrupt_trigger)&& ((branch_type_wb != 3'b000)||write_mem_en_wb||wen_wb||(inst_wb == 32'h7b)||environment_call_wb||m_mode_return_wb) && (!pipeline_stall_wb) && (!(inst_wb  == 32'b0));
wire		inst_skip_3	= (inst_wb == 32'h7b) | m_time_interrupt | if_clint_wb | if_uart_wb | (csr_wb == 12'hb00) ; 

wire [63:0]mstatus_3;
wire [63:0]mepc_3;
wire [63:0]mtvec_3;
wire [63:0]mcause_3;
wire [63:0]mie_3;
wire [63:0]mip_3;
wire [63:0]mscratch_3;
/*
always@(posedge clk)begin
	if(m_time_interrupt) $display("[clint] Visiting the CLINT");
end
*/
assign io_char_valid_o	= !axi_stall_i & ((inst_wb == 32'h7b) | if_uart_wb);
assign io_char_o		= regs_gpr[10];	//reg10[7:0];

// Difftest
reg				cmt_wen;
reg [7:0]		cmt_wdest;
reg [63:0]		cmt_wdata;
reg [63:0]		cmt_pc;
reg [31:0]		cmt_inst;
reg				cmt_valid;
reg				cmt_skip;
reg				trap;
reg [7:0]		trap_code;
reg [63:0]		cycleCnt;
reg [63:0]		instrCnt;
reg [63:0]		regs_diff [31:0];

always @(negedge clock) begin
  if (reset) begin
    {cmt_wen, cmt_wdest, cmt_wdata, cmt_pc, cmt_inst, cmt_valid, cmt_skip, trap, trap_code, cycleCnt, instrCnt, regs_diff[0], regs_diff[1], regs_diff[2], regs_diff[3], regs_diff[4], regs_diff[5], regs_diff[6], regs_diff[7], regs_diff[8], regs_diff[9], regs_diff[10], regs_diff[11], regs_diff[12], regs_diff[13], regs_diff[14], regs_diff[15], regs_diff[16], regs_diff[17], regs_diff[18], regs_diff[19], regs_diff[20], regs_diff[21], regs_diff[22], regs_diff[23], regs_diff[24], regs_diff[25], regs_diff[26], regs_diff[27], regs_diff[28], regs_diff[29], regs_diff[30], regs_diff[31]} <= 0;
  end
  else if (~trap) begin
    cmt_wen		<= rd_w_ena_3;
    cmt_wdest	<= {3'd0, rd_w_addr_3};
    cmt_wdata	<= rd_data_3;
    cmt_pc		<= pc_3;
    cmt_inst	<= inst_3;
    cmt_valid	<= inst_valid_3;
	cmt_skip	<= inst_skip_3;

	regs_diff	<= regs_gpr;

    trap		<= inst_3[6:0] == 7'h6b;
    trap_code	<= regs_gpr[10][7:0];
    cycleCnt	<= cycleCnt + 1;
    instrCnt	<= instrCnt + inst_valid_3;
  end
end

DifftestInstrCommit DifftestInstrCommit(
  .clock              (clock),
  .coreid             (0),
  .index              (0),
  .valid              (cmt_valid),
  .pc                 (cmt_pc),
  .instr              (cmt_inst),
  .skip               (cmt_skip),
  .isRVC              (0),
  .scFailed           (0),
  .wen                (cmt_wen),
  .wdest              (cmt_wdest),
  .wdata              (cmt_wdata)
);

DifftestArchIntRegState DifftestArchIntRegState (
  .clock              (clock),
  .coreid             (0),
  .gpr_0              (regs_diff[0]),
  .gpr_1              (regs_diff[1]),
  .gpr_2              (regs_diff[2]),
  .gpr_3              (regs_diff[3]),
  .gpr_4              (regs_diff[4]),
  .gpr_5              (regs_diff[5]),
  .gpr_6              (regs_diff[6]),
  .gpr_7              (regs_diff[7]),
  .gpr_8              (regs_diff[8]),
  .gpr_9              (regs_diff[9]),
  .gpr_10             (regs_diff[10]),
  .gpr_11             (regs_diff[11]),
  .gpr_12             (regs_diff[12]),
  .gpr_13             (regs_diff[13]),
  .gpr_14             (regs_diff[14]),
  .gpr_15             (regs_diff[15]),
  .gpr_16             (regs_diff[16]),
  .gpr_17             (regs_diff[17]),
  .gpr_18             (regs_diff[18]),
  .gpr_19             (regs_diff[19]),
  .gpr_20             (regs_diff[20]),
  .gpr_21             (regs_diff[21]),
  .gpr_22             (regs_diff[22]),
  .gpr_23             (regs_diff[23]),
  .gpr_24             (regs_diff[24]),
  .gpr_25             (regs_diff[25]),
  .gpr_26             (regs_diff[26]),
  .gpr_27             (regs_diff[27]),
  .gpr_28             (regs_diff[28]),
  .gpr_29             (regs_diff[29]),
  .gpr_30             (regs_diff[30]),
  .gpr_31             (regs_diff[31])
);

DifftestTrapEvent DifftestTrapEvent(
  .clock              (clock),
  .coreid             (0),
  .valid              (trap),
  .code               (trap_code),
  .pc                 (cmt_pc),
  .cycleCnt           (cycleCnt),
  .instrCnt           (instrCnt)
);

DifftestCSRState DifftestCSRState(
  .clock              (clock),
  .coreid             (0),
  .priviledgeMode     (`RISCV_PRIV_MODE_M),
  .mstatus            (mstatus_3),
  .sstatus            (0),
  .mepc               (mepc_3),
  .sepc               (0),
  .mtval              (0),
  .stval              (0),
  .mtvec              (mtvec_3),
  .stvec              (0),
  .mcause             (mcause_3),
  .scause             (0),
  .satp               (0),
  .mip                (mip_3),
  .mie                (mie_3),
  .mscratch           (mscratch_3),
  .sscratch           (0),
  .mideleg            (0),
  .medeleg            (0)
);

DifftestArchFpRegState DifftestArchFpRegState(
  .clock              (clock),
  .coreid             (0),
  .fpr_0              (0),
  .fpr_1              (0),
  .fpr_2              (0),
  .fpr_3              (0),
  .fpr_4              (0),
  .fpr_5              (0),
  .fpr_6              (0),
  .fpr_7              (0),
  .fpr_8              (0),
  .fpr_9              (0),
  .fpr_10             (0),
  .fpr_11             (0),
  .fpr_12             (0),
  .fpr_13             (0),
  .fpr_14             (0),
  .fpr_15             (0),
  .fpr_16             (0),
  .fpr_17             (0),
  .fpr_18             (0),
  .fpr_19             (0),
  .fpr_20             (0),
  .fpr_21             (0),
  .fpr_22             (0),
  .fpr_23             (0),
  .fpr_24             (0),
  .fpr_25             (0),
  .fpr_26             (0),
  .fpr_27             (0),
  .fpr_28             (0),
  .fpr_29             (0),
  .fpr_30             (0),
  .fpr_31             (0)
);

endmodule

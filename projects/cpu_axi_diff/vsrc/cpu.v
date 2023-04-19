//`include "defines.v"
`include "para.v"

module cpu(
    input                               clock,
    input                               reset,

	input								axi_stall_i,

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

wire clk = clock;
wire rst = !reset;

IFU IFU0(
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

PIPE_IF_ID pipe_if_id_reg(
	.clk(clk),							//
	.pc_if(pc),							//
	.pipeline_stall(pipeline_stall),	// 
	.IF_Flush(IF_Flush),				//
	.inst_if(inst_if),					//	

	.axi_stall_i(axi_stall_i),

	.pc_id(pc_id),						//
	.inst_id(inst_id)					//
);

wire [2:0]optype;		//
wire npc_op_id;
wire npc_op_ex;
wire npc_op_mem;
wire npc_regimm_id;	
wire npc_regimm_ex;	
wire npc_regimm_mem;	
wire reg1_ren;			//
wire reg2_ren;			//
wire rf_wen;			//
wire wen_id;
wire wen_ex;
wire wen_mem;
wire wen_wb;
wire [4:0]alu_op_id;
wire [4:0]alu_op_ex;
wire alu_only_imm_id;
wire alu_only_imm_ex;
wire alu_pc_reg1_id;
wire alu_pc_reg1_ex;
wire alu_imm_reg2_id;
wire alu_imm_reg2_ex;
wire [4:0]rd_id;
wire [4:0]rd_ex;
wire [4:0]rd_mem;
wire [4:0]rd_wb;
wire [4:0]rs1_id;
wire [4:0]rs1_ex;
wire [4:0]rs2_id;
wire [4:0]rs2_ex;
wire [4:0]rs2_mem;
wire [63:0]reg10;				//
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
IDU IDU0(
	.clk(clk),		//
	.rst(rst),		//
	.inst(inst_id),	//
	.pc(pc_id),		//
	.reg10(reg10),	//
	.axi_stall_i(axi_stall_i),

	.optype(optype),//
	.npc_op(npc_op_id),			//
	.npc_regimm(npc_regimm_id),	//
	.reg1_ren(reg1_ren),	//	
	.reg2_ren(reg2_ren),	//
	.rf_wen(rf_wen),		//  ignore
	.wen(wen_id),			//
	.alu_op(alu_op_id),		//
	.alu_only_imm(alu_only_imm_id),	//
	.alu_pc_reg1(alu_pc_reg1_id),	//
	.alu_imm_reg2(alu_imm_reg2_id),	//
	.rd(rd_id),		//
	.rs1(rs1_id),	//
	.rs2(rs2_id),	//
	.read_mem_en(read_mem_en_id),		//
	.write_mem_en(write_mem_en_id),		//
	.mem_ctrl(mem_ctrl_id),				//
	.value_width_ctrl(value_width_ctrl_id),	//
	.branch_type(branch_type_id),		//
	.operator_a_w(operator_a_w_id),		//
	.operator_a_w_s(operator_a_w_s_id),	//
	.operator_b_w(operator_b_w_id),
	.if_inst_sll(if_inst_sll_id)
);

wire ebreak_id;
wire ebreak_ex;
wire ebreak_mem;
wire ebreak_wb;
PIPE_ID_EX pipe_id_ex_reg(
	.clk(clk),						//
	.rst(rst),						//
	.pc_if(pc),						//	

	.inst_id(inst_id),
	.reg1_value_id(reg1_value_id),	//
	.reg2_value_id(reg2_value_id),	//
	.ebreak_id(ebreak_id),
	.pc_id(pc_id),					//
	.npc_id(npc),
	.rs1_id(rs1_id),				//
	.rs2_id(rs2_id),				//
	.rd_id(rd_id),					//
	.imm_id(imm_id),				//

	.wen_id(wen_id),				//
	.npc_op_id(npc_op_id),			//
	.npc_regimm_id(npc_regimm_id),	//
	.alu_op_id(alu_op_id),			//
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

	.axi_stall_i(axi_stall_i),

	.inst_ex(inst_ex),
	.reg1_value_ex(reg1_value_ex),	//
	.reg2_value_ex(reg2_value_ex),	//
	.ebreak_ex(ebreak_ex),
	.pc_ex(pc_ex),					//
	.npc_ex(npc_ex),
	.rs1_ex(rs1_ex),				//
	.rs2_ex(rs2_ex),				//
	.rd_ex(rd_ex),					//
	.imm_ex(imm_ex),				//

	.wen_ex(wen_ex),				//
	.npc_op_ex(npc_op_ex),			//
	.npc_regimm_ex(npc_regimm_ex),	//
	.alu_op_ex(alu_op_ex),			//
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
	.read_mem_en_ex(read_mem_en_ex),		//
	.write_mem_en_ex(write_mem_en_ex),		//
	.pipeline_stall_ex(pipeline_stall_ex)
);

wire [63:0]reg2_value_forwardb_ex;
ALU alu_module(
	.reg1(reg1_value_ex),				//
	.reg2(reg2_value_ex),				//
	.pc(pc_ex),							//
	.imm(imm_ex),						//
	.alu_op(alu_op_ex),					//
	.npc_op(npc_op_ex),					//
	.alu_only_imm(alu_only_imm_ex),		//
	.alu_pc_reg1(alu_pc_reg1_ex),		//
	.alu_imm_reg2(alu_imm_reg2_ex),		//
	.value(value),						//
	.branch_type(branch_type_ex),		//
	.operator_a_w(operator_a_w_ex),		//input,ctrl signal from IDU
	.operator_a_w_s(operator_a_w_s_ex),	//...
	.operator_b_w(operator_b_w_ex),		//...
	.if_inst_sll(if_inst_sll_ex),

	.Forward_a(Forward_a),
	.Forward_b(Forward_b),
	.sext_value_mem(sext_value_mem),
	.reg_write_value_wb(reg_write_value_wb),
	.reg2_forwardb(reg2_value_forwardb_ex)
);

PIPE_EX_MEM pipe_ex_mem_reg(
	.clk(clk),							//
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
	.axi_stall_i(axi_stall_i),

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
	.pipeline_stall_mem(pipeline_stall_mem)
);

wire [63:0]read_mem_value;
wire [63:0]reg2_to_mem_forward;
wire [63:0]mem_write_mask;

MEM memory(
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

	.mem_valid_o(mem_valid),
	.mem_req_o(mem_req),
	.mem_addr_o(mem_addr),
	.mem_data_read_i(mem_data_read),
	.mem_data_write_o(mem_data_write),
	.mem_write_mask_axi(mem_write_mask_axi)
);

wire [63:0]reg_write_value_mem = read_mem_en_mem?sext_read_mem_value_mem:sext_value_mem;

PIPE_MEM_WB pipe_mem_wb(
	.clk(clk),						//
	.pc_mem(pc_mem),				//
	.npc_mem(npc_mem),
	.inst_mem(inst_mem),			//
	.rd_mem(rd_mem),				//
	.reg10(reg10),			//
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

	.axi_stall_i(axi_stall_i),

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
	.pipeline_stall_wb(pipeline_stall_wb)
);

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
wire [63:0]reg_write_value_wb;
wire [63:0]regs_gpr[31:0];
RegisterFile rf(
	.clk(clk),				//
	.rst(rst),				//
	.reg1_ren(reg1_ren),	//
	.reg2_ren(reg2_ren),	//
	.reg1addr(rs1_id),		//
	.reg2addr(rs2_id),		//
	.wdata(sext_value_wb),	//
	.waddr(rd_wb),			//
	.wen(wen_wb),			//
	.pc_wen(pc_wen),		//hazard detection->pc_wen
	.axi_stall_i(axi_stall_i),
	.read_mem_en(read_mem_en_wb),					//
	.sext_read_mem_value(sext_read_mem_value_wb),	//
	.npc(npc),				//
	.reg1(reg1_value_id),	//
	.reg2(reg2_value_id),	//
	.reg10(reg10),			//
	.pc(pc),
	.reg_write_value_wb(reg_write_value_wb),	//output
	.regs_gpr(regs_gpr)
);

wire [63:0]value;
wire [63:0]imm_id;
wire [63:0]imm_ex;
wire [63:0]sext_read_mem_value_mem;
wire [63:0]sext_read_mem_value_wb;
wire [63:0]sext_value_ex;
wire [63:0]sext_value_mem;
wire [63:0]sext_value_wb;
SEXT sext(
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

wire IF_Flush;
NPC npc_processing(
	.reg1(reg1_value_id),		//
	.reg2(reg2_value_id),		//
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

	.IF_Flush(IF_Flush),						//
	.npc(npc)									//
);

wire [1:0]Forward_a;
wire [1:0]Forward_b;
wire [1:0]Forward_c;
wire [1:0]Forward_d;
wire Forward_store;
Forwarding forwarding_unit(
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

wire pipeline_stall;
wire pipeline_stall_ex;
wire pipeline_stall_mem;
wire pipeline_stall_wb;
wire pc_wen;
Hazard_detection hazard_detection_unit(
	.rs1_id(rs1_id),
	.rs2_id(rs2_id),
	.rd_ex(rd_ex),
	.read_mem_en_ex(read_mem_en_ex),
	.pipeline_stall(pipeline_stall),
	.pc_wen(pc_wen)
);

//***************************************************************
//port for Environment_3 and difftest_3 
wire [63:0]pc_3			= pc_wb;
wire [31:0]inst_3		= inst_wb;
wire [63:0]rd_data_3	= reg_write_value_wb;
wire [4:0] rd_w_addr_3	= rd_wb;
wire rd_w_ena_3			= wen_wb;
wire inst_valid_3		= (!axi_stall_i) && ((branch_type_wb != 3'b000)||write_mem_en_wb||wen_wb) && (!pipeline_stall_wb) && (!(inst_wb  == 32'b0));

// Difftest
reg cmt_wen;
reg [7:0] cmt_wdest;
reg [`REG_BUS] cmt_wdata;
reg [`REG_BUS] cmt_pc;
reg [31:0] cmt_inst;
reg cmt_valid;
reg trap;
reg [7:0] trap_code;
reg [63:0] cycleCnt;
reg [63:0] instrCnt;
reg [`REG_BUS] regs_diff [0 : 31];

always @(negedge clock) begin
  if (reset) begin
    {cmt_wen, cmt_wdest, cmt_wdata, cmt_pc, cmt_inst, cmt_valid, trap, trap_code, cycleCnt, instrCnt} <= 0;
  end
  else if (~trap) begin
    cmt_wen		<= rd_w_ena_3;
    cmt_wdest	<= {3'd0, rd_w_addr_3};
    cmt_wdata	<= rd_data_3;
    cmt_pc		<= pc_3;
    cmt_inst	<= inst_3;
    cmt_valid	<= inst_valid_3;

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
  .skip               (0),
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
  .mstatus            (0),
  .sstatus            (0),
  .mepc               (0),
  .sepc               (0),
  .mtval              (0),
  .stval              (0),
  .mtvec              (0),
  .stvec              (0),
  .mcause             (0),
  .scause             (0),
  .satp               (0),
  .mip                (0),
  .mie                (0),
  .mscratch           (0),
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

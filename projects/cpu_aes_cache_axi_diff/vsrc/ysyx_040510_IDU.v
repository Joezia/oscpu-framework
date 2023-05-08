`include "ysyx_040510_para.v"
module ysyx_040510_IDU(					//combinatorial logic
	input clk,
	input rst,
	input [31:0]inst,
	input [63:0]pc,

	input axi_stall_i,

	output [2:0]optype,
	output npc_op,
	output npc_regimm,
	output reg1_ren,
	output reg2_ren,
	output csr_ren,
	output wen,
	output rf_wen,
	output csr_wen,
	output [4:0]alu_op,
	output [2:0]csr_alu_op,
	output alu_only_imm,		//for the inst: lui
	output alu_pc_reg1,
	output alu_imm_reg2,
	output [4:0]rd,
	output [4:0]rs1,
	output [4:0]rs2,
	output [11:0]csr,
	output csr_if_zimm,
	output [4:0]zimm,

	output if_inst_aes64ds,
	output if_inst_aes64dsm,
	output if_inst_aes64es,
	output if_inst_aes64esm,
	output if_inst_aes64im,
	output if_inst_aes64ks1i,
	output if_inst_aes64ks2,
	output [3:0]ks1i_rnum,

	output read_mem_en,
	output write_mem_en,
	output [3:0]mem_ctrl,

	output [3:0]value_width_ctrl,
	output [2:0]branch_type,
	output operator_a_w,
	output operator_a_w_s,
	output operator_b_w,
	output environment_call,
	output m_mode_return,
	output if_inst_sll
);
	wire [6:0]opcode = inst[6:0];
	wire [2:0]func3 = inst[14:12];
	assign rd = inst[11:7];
	assign rs1 = inst[19:15];
	assign rs2 = inst[24:20];
	assign csr = inst[31:20];
	assign zimm = inst[19:15];


	//Instruction
	wire inst_FLUSH = (inst == 32'b0);
	wire inst_ecall = (inst == 32'h0000_0073);
	wire inst_mret  = (inst == 32'h3020_0073);
	wire inst_csrrc = ~func3[2] & func3[1] & func3[0] & opcode[6] & opcode[5] & opcode[4] & ~opcode[3] & ~opcode[2] & opcode[1] & opcode[0];
	wire inst_csrrci = func3[2] & func3[1] & func3[0] & opcode[6] & opcode[5] & opcode[4] & ~opcode[3] & ~opcode[2] & opcode[1] & opcode[0];
	wire inst_csrrs = ~func3[2] & func3[1] & ~func3[0] & opcode[6] & opcode[5] & opcode[4] & ~opcode[3] & ~opcode[2] & opcode[1] & opcode[0];
	wire inst_csrrsi = func3[2] & func3[1] & ~func3[0] & opcode[6] & opcode[5] & opcode[4] & ~opcode[3] & ~opcode[2] & opcode[1] & opcode[0];
	wire inst_csrrw = ~func3[2] & ~func3[1] & func3[0] & opcode[6] & opcode[5] & opcode[4] & ~opcode[3] & ~opcode[2] & opcode[1] & opcode[0];
	wire inst_csrrwi = func3[2] & ~func3[1] & func3[0] & opcode[6] & opcode[5] & opcode[4] & ~opcode[3] & ~opcode[2] & opcode[1] & opcode[0];
	wire inst_addi = ~func3[2] & ~func3[1] & ~func3[0] & ~opcode[6] & ~opcode[5] & opcode[4] & ~opcode[3] & ~opcode[2] & opcode[1] & opcode[0];
	wire inst_xor = ~inst[31] & ~inst[30] & ~inst[29] & ~inst[28] & ~inst [27]& ~inst[26] & ~inst[25] & func3[2] & ~func3[1] & ~func3[0] & ~opcode[6] & opcode[5] & opcode[4] & ~opcode[3] & ~opcode[2] & opcode[1] & opcode[0];
	wire inst_xori = func3[2] & ~func3[1] & ~func3[0] & ~opcode[6] & ~opcode[5] & opcode[4] & ~opcode[3] & ~opcode[2] & opcode[1] & opcode[0];
	wire inst_ori = func3[2] & func3[1] & ~func3[0] & ~opcode[6] & ~opcode[5] & opcode[4] & ~opcode[3] & ~opcode[2] & opcode[1] & opcode[0];
	wire inst_addiw = ~func3[2] & ~func3[1] & ~func3[0] & ~opcode[6] & ~opcode[5] & opcode[4] & opcode[3] & ~opcode[2] & opcode[1] & opcode[0];
	wire inst_addw = ~inst[31] & ~inst[30] & ~inst[29] & ~inst[28] & ~inst [27]& ~inst[26] & ~inst[25] & ~func3[2] & ~func3[1] & ~func3[0] & ~opcode[6] & opcode[5] & opcode[4] & opcode[3] & ~opcode[2] & opcode[1] & opcode[0];
	wire inst_subw = ~inst[31] & inst[30] & ~inst[29] & ~inst[28] & ~inst [27]& ~inst[26] & ~inst[25] & ~func3[2] & ~func3[1] & ~func3[0] & ~opcode[6] & opcode[5] & opcode[4] & opcode[3] & ~opcode[2] & opcode[1] & opcode[0];
	wire inst_mul = ~inst[31] & ~inst[30] & ~inst[29] & ~inst[28] & ~inst [27]& ~inst[26] & inst[25] & ~func3[2] & ~func3[1] & ~func3[0] & ~opcode[6] & opcode[5] & opcode[4] & ~opcode[3] & ~opcode[2] & opcode[1] & opcode[0];
	wire inst_mulw = ~inst[31] & ~inst[30] & ~inst[29] & ~inst[28] & ~inst [27]& ~inst[26] & inst[25] & ~func3[2] & ~func3[1] & ~func3[0] & ~opcode[6] & opcode[5] & opcode[4] & opcode[3] & ~opcode[2] & opcode[1] & opcode[0];
	wire inst_divw = ~inst[31] & ~inst[30] & ~inst[29] & ~inst[28] & ~inst [27]& ~inst[26] & inst[25] & func3[2] & ~func3[1] & ~func3[0] & ~opcode[6] & opcode[5] & opcode[4] & opcode[3] & ~opcode[2] & opcode[1] & opcode[0];
	wire inst_divu = ~inst[31] & ~inst[30] & ~inst[29] & ~inst[28] & ~inst [27]& ~inst[26] & inst[25] & func3[2] & ~func3[1] & func3[0] & ~opcode[6] & opcode[5] & opcode[4] & ~opcode[3] & ~opcode[2] & opcode[1] & opcode[0];
	wire inst_divuw = ~inst[31] & ~inst[30] & ~inst[29] & ~inst[28] & ~inst [27]& ~inst[26] & inst[25] & func3[2] & ~func3[1] & func3[0] & ~opcode[6] & opcode[5] & opcode[4] & opcode[3] & ~opcode[2] & opcode[1] & opcode[0];
	wire inst_remw = ~inst[31] & ~inst[30] & ~inst[29] & ~inst[28] & ~inst [27]& ~inst[26] & inst[25] & func3[2] & func3[1] & ~func3[0] & ~opcode[6] & opcode[5] & opcode[4] & opcode[3] & ~opcode[2] & opcode[1] & opcode[0];
	wire inst_remuw = ~inst[31] & ~inst[30] & ~inst[29] & ~inst[28] & ~inst [27]& ~inst[26] & inst[25] & func3[2] & func3[1] & func3[0] & ~opcode[6] & opcode[5] & opcode[4] & opcode[3] & ~opcode[2] & opcode[1] & opcode[0];
	wire inst_sub = ~inst[31] & inst[30] & ~inst[29] & ~inst[28] & ~inst [27] & ~inst[26] & ~inst[25] & ~func3[2] & ~func3[1] & ~func3[0] & ~opcode[6] & opcode[5] & opcode[4] & ~opcode[3] & ~opcode[2] & opcode[1] & opcode[0];
	wire inst_add = ~inst[31] & ~inst[30] & ~inst[29] & ~inst[28] & ~inst [27] & ~inst[26] & ~inst[25] & ~func3[2] & ~func3[1] & ~func3[0] & ~opcode[6] & opcode[5] & opcode[4] & ~opcode[3] & ~opcode[2] & opcode[1] & opcode[0];
	wire inst_sll = ~inst[31] & ~inst[30] & ~inst[29] & ~inst[28] & ~inst [27] & ~inst[26] & ~inst[25] & ~func3[2] & ~func3[1] & func3[0] & ~opcode[6] & opcode[5] & opcode[4] & ~opcode[3] & ~opcode[2] & opcode[1] & opcode[0];
	wire inst_slli = ~inst[31] & ~inst[30] & ~inst[29] & ~inst[28] & ~inst [27] & ~inst[26] & ~func3[2] & ~func3[1] & func3[0] & ~opcode[6] & ~opcode[5] & opcode[4] & ~opcode[3] & ~opcode[2] & opcode[1] & opcode[0];
	wire inst_slliw = ~inst[31] & ~inst[30] & ~inst[29] & ~inst[28] & ~inst [27] & ~inst[26] & ~func3[2] & ~func3[1] & func3[0] & ~opcode[6] & ~opcode[5] & opcode[4] & opcode[3] & ~opcode[2] & opcode[1] & opcode[0];
	wire inst_srli = ~inst[31] & ~inst[30] & ~inst[29] & ~inst[28] & ~inst [27] & ~inst[26] & func3[2] & ~func3[1] & func3[0] & ~opcode[6] & ~opcode[5] & opcode[4] & ~opcode[3] & ~opcode[2] & opcode[1] & opcode[0];
	wire inst_srliw = ~inst[31] & ~inst[30] & ~inst[29] & ~inst[28] & ~inst [27] & ~inst[26] & func3[2] & ~func3[1] & func3[0] & ~opcode[6] & ~opcode[5] & opcode[4] & opcode[3] & ~opcode[2] & opcode[1] & opcode[0];
	wire inst_andi = func3[2] & func3[1] & func3[0] & ~opcode[6] & ~opcode[5] & opcode[4] & ~opcode[3] & ~opcode[2] & opcode[1] & opcode[0];
	wire inst_and = ~inst[31] & ~inst[30] & ~inst[29] & ~inst[28] & ~inst [27] & ~inst[26] & ~inst[25] & func3[2] & func3[1] & func3[0] & ~opcode[6] & opcode[5] & opcode[4] & ~opcode[3] & ~opcode[2] & opcode[1] & opcode[0];
	wire inst_or = ~inst[31] & ~inst[30] & ~inst[29] & ~inst[28] & ~inst [27] & ~inst[26] & ~inst[25] & func3[2] & func3[1] & ~func3[0] & ~opcode[6] & opcode[5] & opcode[4] & ~opcode[3] & ~opcode[2] & opcode[1] & opcode[0];
	wire inst_srai = ~inst[31] & inst[30] & ~inst[29] & ~inst[28] & ~inst [27] & ~inst[26] & func3[2] & ~func3[1] & func3[0] & ~opcode[6] & ~opcode[5] & opcode[4] & ~opcode[3] & ~opcode[2] & opcode[1] & opcode[0];
	wire inst_sraiw = ~inst[31] & inst[30] & ~inst[29] & ~inst[28] & ~inst [27] & ~inst[26] & func3[2] & ~func3[1] & func3[0] & ~opcode[6] & ~opcode[5] & opcode[4] & opcode[3] & ~opcode[2] & opcode[1] & opcode[0];
	wire inst_sra = ~inst[31] & inst[30] & ~inst[29] & ~inst[28] & ~inst [27] & ~inst[26] & ~inst[25] & func3[2] & ~func3[1] & func3[0] & ~opcode[6] & opcode[5] & opcode[4] & ~opcode[3] & ~opcode[2] & opcode[1] & opcode[0];
	wire inst_sraw = ~inst[31] & inst[30] & ~inst[29] & ~inst[28] & ~inst [27] & ~inst[26] & ~inst[25] & func3[2] & ~func3[1] & func3[0] & ~opcode[6] & opcode[5] & opcode[4] & opcode[3] & ~opcode[2] & opcode[1] & opcode[0];
	wire inst_srl = ~inst[31] & ~inst[30] & ~inst[29] & ~inst[28] & ~inst [27] & ~inst[26] & ~inst[25] & func3[2] & ~func3[1] & func3[0] & ~opcode[6] & opcode[5] & opcode[4] & ~opcode[3] & ~opcode[2] & opcode[1] & opcode[0];
	wire inst_srlw = ~inst[31] & ~inst[30] & ~inst[29] & ~inst[28] & ~inst [27] & ~inst[26] & ~inst[25] & func3[2] & ~func3[1] & func3[0] & ~opcode[6] & opcode[5] & opcode[4] & opcode[3] & ~opcode[2] & opcode[1] & opcode[0];
	wire inst_sllw = ~inst[31] & ~inst[30] & ~inst[29] & ~inst[28] & ~inst [27] & ~inst[26] & ~inst[25] & ~func3[2] & ~func3[1] & func3[0] & ~opcode[6] & opcode[5] & opcode[4] & opcode[3] & ~opcode[2] & opcode[1] & opcode[0];
	wire inst_lui = ~opcode[6] & opcode[5] & opcode[4] & ~opcode[3] & opcode[2] & opcode[1] & opcode[0];
	wire inst_auipc = ~opcode[6] & ~opcode[5] & opcode[4] & ~opcode[3] & opcode[2] & opcode[1] & opcode[0];
	wire inst_jal = opcode[6] & opcode[5] & ~opcode[4] & opcode[3] & opcode[2] & opcode[1] & opcode[0];
	wire inst_jalr = ~func3[2] & ~func3[1] & ~func3[0] & opcode[6] & opcode[5] & ~opcode[4] & ~opcode[3] & opcode[2] & opcode[1] & opcode[0];
	wire inst_slti = ~func3[2] & func3[1] & ~func3[0] & ~opcode[6] & ~opcode[5] & opcode[4] & ~opcode[3] & ~opcode[2] & opcode[1] & opcode[0];
	wire inst_sltiu = ~func3[2] & func3[1] & func3[0] & ~opcode[6] & ~opcode[5] & opcode[4] & ~opcode[3] & ~opcode[2] & opcode[1] & opcode[0];
	wire inst_sltu = ~inst[31] & ~inst[30] & ~inst[29] & ~inst[28] & ~inst [27] & ~inst[26] & ~inst[25] & ~func3[2] & func3[1] & func3[0] & ~opcode[6] & opcode[5] & opcode[4] & ~opcode[3] & ~opcode[2] & opcode[1] & opcode[0];
	wire inst_slt = ~inst[31] & ~inst[30] & ~inst[29] & ~inst[28] & ~inst [27] & ~inst[26] & ~inst[25] & ~func3[2] & func3[1] & ~func3[0] & ~opcode[6] & opcode[5] & opcode[4] & ~opcode[3] & ~opcode[2] & opcode[1] & opcode[0];
	wire inst_beq = ~func3[2] & ~func3[1] & ~func3[0] & opcode[6] & opcode[5] & ~opcode[4] & ~opcode[3] & ~opcode[2] & opcode[1] & opcode[0];
	wire inst_bne = ~func3[2] & ~func3[1] & func3[0] & opcode[6] & opcode[5] & ~opcode[4] & ~opcode[3] & ~opcode[2] & opcode[1] & opcode[0];
	wire inst_bge = func3[2] & ~func3[1] & func3[0] & opcode[6] & opcode[5] & ~opcode[4] & ~opcode[3] & ~opcode[2] & opcode[1] & opcode[0];
	wire inst_bgeu = func3[2] & func3[1] & func3[0] & opcode[6] & opcode[5] & ~opcode[4] & ~opcode[3] & ~opcode[2] & opcode[1] & opcode[0];
	wire inst_blt = func3[2] & ~func3[1] & ~func3[0] & opcode[6] & opcode[5] & ~opcode[4] & ~opcode[3] & ~opcode[2] & opcode[1] & opcode[0];
	wire inst_bltu = func3[2] & func3[1] & ~func3[0] & opcode[6] & opcode[5] & ~opcode[4] & ~opcode[3] & ~opcode[2] & opcode[1] & opcode[0];
	wire inst_sd = ~func3[2] & func3[1] & func3[0] & ~opcode[6] & opcode[5] & ~opcode[4] & ~opcode[3] & ~opcode[2] & opcode[1] & opcode[0];
	wire inst_sw = ~func3[2] & func3[1] & ~func3[0] & ~opcode[6] & opcode[5] & ~opcode[4] & ~opcode[3] & ~opcode[2] & opcode[1] & opcode[0];
	wire inst_sh = ~func3[2] & ~func3[1] & func3[0] & ~opcode[6] & opcode[5] & ~opcode[4] & ~opcode[3] & ~opcode[2] & opcode[1] & opcode[0];
	wire inst_sb = ~func3[2] & ~func3[1] & ~func3[0] & ~opcode[6] & opcode[5] & ~opcode[4] & ~opcode[3] & ~opcode[2] & opcode[1] & opcode[0];
	wire inst_lb = ~func3[2] & ~func3[1] & ~func3[0] & ~opcode[6] & ~opcode[5] & ~opcode[4] & ~opcode[3] & ~opcode[2] & opcode[1] & opcode[0];
	wire inst_lbu = func3[2] & ~func3[1] & ~func3[0] & ~opcode[6] & ~opcode[5] & ~opcode[4] & ~opcode[3] & ~opcode[2] & opcode[1] & opcode[0];
	wire inst_lhu = func3[2] & ~func3[1] & func3[0] & ~opcode[6] & ~opcode[5] & ~opcode[4] & ~opcode[3] & ~opcode[2] & opcode[1] & opcode[0];
	wire inst_lw = ~func3[2] & func3[1] & ~func3[0] & ~opcode[6] & ~opcode[5] & ~opcode[4] & ~opcode[3] & ~opcode[2] & opcode[1] & opcode[0];
	wire inst_lwu = func3[2] & func3[1] & ~func3[0] & ~opcode[6] & ~opcode[5] & ~opcode[4] & ~opcode[3] & ~opcode[2] & opcode[1] & opcode[0];
	wire inst_lh = ~func3[2] & ~func3[1] & func3[0] & ~opcode[6] & ~opcode[5] & ~opcode[4] & ~opcode[3] & ~opcode[2] & opcode[1] & opcode[0];
	wire inst_ld = ~func3[2] & func3[1] & func3[0] & ~opcode[6] & ~opcode[5] & ~opcode[4] & ~opcode[3] & ~opcode[2] & opcode[1] & opcode[0];
	wire inst_ebreak =  ~func3[2] & ~func3[1] & ~func3[0] & opcode[6] & opcode[5] & opcode[4] & ~opcode[3] & ~opcode[2] & opcode[1] & opcode[0];

	wire inst_aes64ds = ~inst[31] & ~inst[30] & inst[29] & inst[28] & inst[27] & ~inst[26] & inst[25] & ~func3[2] & ~func3[1] & ~func3[0] & ~opcode[6] & opcode[5] & opcode[4] & ~opcode[3] & ~opcode[2] & opcode[1] & opcode[0];
	wire inst_aes64dsm = ~inst[31] & ~inst[30] & inst[29] & inst[28] & inst[27] & inst[26] & inst[25] & ~func3[2] & ~func3[1] & ~func3[0] & ~opcode[6] & opcode[5] & opcode[4] & ~opcode[3] & ~opcode[2] & opcode[1] & opcode[0];
	wire inst_aes64es = ~inst[31] & ~inst[30] & inst[29] & inst[28] & ~inst[27] & ~inst[26] & inst[25] & ~func3[2] & ~func3[1] & ~func3[0] & ~opcode[6] & opcode[5] & opcode[4] & ~opcode[3] & ~opcode[2] & opcode[1] & opcode[0];
	wire inst_aes64esm = ~inst[31] & ~inst[30] & inst[29] & inst[28] & ~inst[27] & inst[26] & inst[25] & ~func3[2] & ~func3[1] & ~func3[0] & ~opcode[6] & opcode[5] & opcode[4] & ~opcode[3] & ~opcode[2] & opcode[1] & opcode[0];
	wire inst_aes64im = ~inst[31] & ~inst[30] & inst[29] & inst[28] & ~inst[27] & ~inst[26] & ~inst[25] & ~inst[24] & ~inst[23] & ~inst[22] & ~inst[21] & ~inst[20] & ~func3[2] & ~func3[1] & func3[0] & ~opcode[6] & ~opcode[5] & opcode[4] & ~opcode[3] & ~opcode[2] & opcode[1] & opcode[0];
	wire inst_aes64ks1i = ~inst[31] & ~inst[30] & inst[29] & inst[28] & ~inst[27] & ~inst[26] & ~inst[25] & inst[24] & ~func3[2] & ~func3[1] & func3[0] & ~opcode[6] & ~opcode[5] & opcode[4] & ~opcode[3] & ~opcode[2] & opcode[1] & opcode[0];
	wire inst_aes64ks2 = ~inst[31] & inst[30] & inst[29] & inst[28] & inst[27] & inst[26] & inst[25] & ~func3[2] & ~func3[1] & ~func3[0] & ~opcode[6] & opcode[5] & opcode[4] & ~opcode[3] & ~opcode[2] & opcode[1] & opcode[0];

	wire inst_trap			= (inst == 32'h6b);
	wire inst_7b			= (inst == 32'h7b);

	wire if_inst_correct = inst_FLUSH|inst_ecall|inst_mret|inst_trap|inst_7b|inst_csrrw|inst_csrrwi|inst_csrrc|inst_csrrs|inst_csrrci|inst_csrrsi|inst_addi|inst_xor|inst_xori|inst_ori|inst_addiw|inst_subw|inst_addw|inst_remuw|inst_remw|inst_divw|inst_divu|inst_divuw|inst_mulw|inst_mul|inst_sub|inst_auipc|inst_lui|inst_jal|inst_jalr|inst_sd|inst_sw|inst_sh|inst_sb|inst_slti|inst_sltiu|inst_lhu|inst_lb|inst_lbu|inst_lh|inst_lwu|inst_lw|inst_ld|inst_beq|inst_bne|inst_bge|inst_bgeu|inst_blt|inst_bltu|inst_ebreak|inst_add|inst_srai|inst_sraiw|inst_sra|inst_sraw|inst_srl|inst_srlw|inst_andi|inst_and|inst_or|inst_sllw|inst_slli|inst_slliw|inst_sll|inst_sltu|inst_slt|inst_srli|inst_srliw|inst_aes64ds|inst_aes64dsm|inst_aes64es|inst_aes64im|inst_aes64esm|inst_aes64ks1i|inst_aes64ks2; 

	//Inst type
	assign optype[0] = inst_csrrc|inst_csrrs|inst_csrrci|inst_csrrsi|inst_csrrw|inst_csrrwi|inst_addi|inst_xori|inst_ori|inst_addiw|inst_jal|inst_jalr|inst_lb|inst_lbu|inst_lhu|inst_lh|inst_lwu|inst_lw|inst_ld|inst_slti|inst_sltiu|inst_beq|inst_bne|inst_blt|inst_bge|inst_bgeu|inst_bltu|inst_srai|inst_sraiw|inst_andi|inst_slli|inst_slliw|inst_srli|inst_srliw;
	assign optype[1] = inst_aes64ds|inst_aes64dsm|inst_aes64es|inst_aes64im|inst_aes64esm|inst_aes64ks2|inst_aes64ks1i|inst_ebreak|inst_beq|inst_bne|inst_bge|inst_bgeu|inst_blt|inst_sd|inst_sb|inst_sw|inst_sh|inst_bltu;
	assign optype[2] = inst_aes64ds|inst_aes64dsm|inst_aes64es|inst_aes64im|inst_aes64esm|inst_aes64ks2|inst_aes64ks1i|inst_ebreak|inst_auipc|inst_lui|inst_jal;

	//PC and Register
	assign npc_op = inst_jal|inst_jalr;
	assign npc_regimm = inst_jalr;
	assign reg1_ren = inst_aes64ds|inst_aes64dsm|inst_aes64es|inst_aes64im|inst_aes64esm|inst_aes64ks2|inst_aes64ks1i|inst_csrrc|inst_csrrs|inst_csrrw|inst_sd|inst_sw|inst_sh|inst_sb|inst_addi|inst_xor|inst_xori|inst_ori|inst_addiw|inst_jalr|inst_lb|inst_lbu|inst_lhu|inst_lh|inst_lwu|inst_lw|inst_ld|inst_subw|inst_bltu|inst_addw|inst_remw|inst_remuw|inst_divw|inst_divu|inst_divuw|inst_mulw|inst_mul|inst_add|inst_sub|inst_slti|inst_sltiu|inst_beq|inst_bne|inst_bge|inst_bgeu|inst_blt||inst_srai|inst_sraiw|inst_sra|inst_sraw|inst_srl|inst_srlw|inst_andi|inst_sll|inst_sllw|inst_slli|inst_slliw|inst_srli|inst_srliw|inst_and|inst_sltu|inst_or|inst_slt;
	assign reg2_ren = inst_aes64ds|inst_aes64dsm|inst_aes64es|inst_aes64esm|inst_aes64ks2|inst_xor|inst_sd|inst_sw|inst_sh|inst_sb|inst_mulw|inst_mul|inst_subw|inst_addw|inst_sub|inst_beq|inst_bne|inst_bge|inst_bgeu|inst_blt|inst_bltu|inst_add|inst_sll|inst_sllw|inst_and|inst_sltu|inst_or|inst_remw|inst_remuw|inst_divw|inst_divu|inst_divuw|inst_slt|inst_sra|inst_sraw|inst_srl|inst_srlw;
	assign rf_wen = inst_aes64ds|inst_aes64dsm|inst_aes64es|inst_aes64im|inst_aes64esm|inst_aes64ks2|inst_aes64ks1i|inst_csrrc|inst_csrrs|inst_csrrci|inst_csrrsi|inst_csrrw|inst_csrrwi|inst_andi|inst_addi|inst_xor|inst_xori|inst_ori|inst_addiw|inst_auipc|inst_lui|inst_jal|inst_jalr|inst_lb|inst_lbu|inst_lhu|inst_lh|inst_lwu|inst_lw|inst_ld|inst_mulw|inst_mul|inst_divw|inst_divu|inst_divuw|inst_remw|inst_addw|inst_subw|inst_add|inst_sub|inst_slti|inst_sltiu|inst_srai|inst_sraiw|inst_sra|inst_sraw|inst_srl|inst_srlw|inst_sll|inst_sllw|inst_and|inst_or|inst_sltu|inst_slt|inst_slli|inst_slliw|inst_srli|inst_srliw|inst_remuw;
	assign wen = inst_aes64ds|inst_aes64dsm|inst_aes64es|inst_aes64im|inst_aes64esm|inst_aes64ks2|inst_aes64ks1i|inst_csrrc|inst_csrrs|inst_csrrci|inst_csrrsi|inst_csrrw|inst_csrrwi|inst_andi|inst_addi|inst_xor|inst_xori|inst_ori|inst_addiw|inst_auipc|inst_lui|inst_jal|inst_jalr|inst_lb|inst_lbu|inst_lhu|inst_lw|inst_lwu|inst_lh|inst_ld|inst_addw|inst_subw|inst_mulw|inst_mul|inst_divw|inst_divu|inst_divuw|inst_remw|inst_remuw|inst_sub|inst_add|inst_slti|inst_sltiu|inst_srai|inst_sraiw|inst_sra|inst_sraw|inst_srl|inst_srlw|inst_sll|inst_sllw|inst_and|inst_or|inst_sltu|inst_slt|inst_slli|inst_slliw|inst_srli|inst_srliw;
	assign csr_ren = inst_csrrc|inst_csrrs|inst_csrrci|inst_csrrsi|inst_csrrwi|inst_csrrw;
	assign csr_wen = inst_csrrc|inst_csrrs|inst_csrrci|inst_csrrsi|inst_csrrwi|inst_csrrw;

	//**ALU**
	assign alu_op[0]=inst_aes64ds|inst_aes64dsm|inst_aes64es|inst_aes64im|inst_aes64esm|inst_aes64ks2|inst_aes64ks1i|inst_sub|inst_subw|inst_slti|inst_sltiu|inst_beq|inst_bne|inst_sll|inst_sllw|inst_remuw|inst_sltu|inst_or|inst_ori|inst_srli|inst_srliw|inst_divu|inst_divuw|inst_bltu|inst_slt|inst_sra|inst_sraw;
	assign alu_op[1]=inst_aes64ds|inst_aes64dsm|inst_aes64es|inst_aes64im|inst_aes64esm|inst_aes64ks2|inst_aes64ks1i|inst_csrrc|inst_csrrs|inst_csrrci|inst_csrrsi|inst_csrrw|inst_csrrwi|inst_srai|inst_sraiw|inst_xor|inst_xori|inst_ori|inst_or|inst_mulw|inst_mul|inst_remw|inst_divu|inst_divuw|inst_slti|inst_slt|inst_sra|inst_sraw;
	assign alu_op[2]=inst_andi|inst_sll|inst_sllw|inst_and|inst_xor|inst_xori|inst_ori|inst_or|inst_divw|inst_remw|inst_remuw|inst_slti|inst_slt;
	assign alu_op[3]=inst_slli|inst_slliw|inst_srli|inst_srliw|inst_mulw|inst_mul|inst_divw|inst_divu|inst_divuw|inst_remw|inst_remuw|inst_slti|inst_slt;
	assign alu_op[4]=inst_aes64ds|inst_aes64dsm|inst_aes64es|inst_aes64im|inst_aes64esm|inst_aes64ks2|inst_aes64ks1i|inst_csrrc|inst_csrrs|inst_csrrci|inst_csrrsi|inst_csrrw|inst_csrrwi|inst_srl|inst_srlw|inst_sltiu|inst_sltu;

	assign csr_alu_op[0] = inst_csrrc|inst_csrrs|inst_csrrci|inst_csrrsi;
	assign csr_alu_op[1] = inst_csrrc|inst_csrrw|inst_csrrci|inst_csrrwi;
	assign csr_alu_op[2] = 0;

	assign csr_if_zimm = inst_csrrwi|inst_csrrci|inst_csrrsi;

	assign alu_only_imm = inst_lui;
	assign alu_pc_reg1=inst_auipc|inst_jal|inst_jalr;
	assign alu_imm_reg2=inst_slli|inst_slliw|inst_srli|inst_srliw|inst_sd|inst_sw|inst_sh|inst_sb|inst_andi|inst_addi|inst_xori|inst_ori|inst_addiw|inst_auipc|inst_lui|inst_lb|inst_lbu|inst_lhu|inst_lwu|inst_lw|inst_lh|inst_ld|inst_slti|inst_sltiu|inst_srai|inst_sraiw;
	assign operator_a_w = inst_divw|inst_divuw|inst_remw|inst_remuw|inst_srliw|inst_srlw;
	assign operator_b_w = inst_divw|inst_divuw|inst_remw|inst_remuw;
	assign operator_a_w_s = inst_sraiw|inst_sraw;

	//BRANCH
	assign branch_type[0] = inst_beq|inst_bge|inst_bltu;
	assign branch_type[1] = inst_bne|inst_bge|inst_bgeu;
	assign branch_type[2] = inst_blt|inst_bltu|inst_bgeu;

	//MEM
	assign read_mem_en = inst_lb|inst_lbu|inst_lwu|inst_lw|inst_ld|inst_lh|inst_lhu;
	assign write_mem_en = inst_sd|inst_sb|inst_sw|inst_sh;
	assign mem_ctrl[0] = inst_lwu|inst_sb|inst_lb|inst_lbu|inst_lhu;  
	assign mem_ctrl[1] = inst_lh|inst_lhu|inst_sh;
	assign mem_ctrl[2] = inst_lw|inst_lbu|inst_lhu|inst_sw;
	assign mem_ctrl[3] = inst_lwu|inst_ld|inst_sd;

	//value width control
	assign value_width_ctrl[0] = 0;	
	assign value_width_ctrl[1] = 0;	
	assign value_width_ctrl[2] = inst_addw|inst_subw|inst_mulw|inst_addiw|inst_sllw|inst_divuw|inst_divw|inst_remw|inst_remuw|inst_slliw|inst_sraiw|inst_sraw|inst_srlw|inst_srliw;	
	assign value_width_ctrl[3] = 0;	

	//Other Control
	assign if_inst_sll = inst_sll|inst_sra|inst_srl;
	assign environment_call = inst_ecall;
	assign m_mode_return	= inst_mret;

	//AES
	assign if_inst_aes64ds		= inst_aes64ds;
	assign if_inst_aes64dsm		= inst_aes64dsm;
	assign if_inst_aes64es		= inst_aes64es;
	assign if_inst_aes64esm		= inst_aes64esm;
	assign if_inst_aes64im		= inst_aes64im;
	assign if_inst_aes64ks1i	= inst_aes64ks1i;
	assign if_inst_aes64ks2		= inst_aes64ks2;
	assign ks1i_rnum = inst[23:20];


	always @(posedge clk)begin
		if(!axi_stall_i)begin	
			if(!rst)begin
				;
			end
			else begin 
				if(~if_inst_correct) begin	
					$display("\n???Cannot recognize the instruction! - zza  pc:%h\t inst: %h\n",pc,inst);
				end
			end
		end
	end
endmodule

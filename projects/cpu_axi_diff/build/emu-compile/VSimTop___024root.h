// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VSimTop.h for the primary calling header

#ifndef VERILATED_VSIMTOP___024ROOT_H_
#define VERILATED_VSIMTOP___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class VSimTop__Syms;
class VSimTop_VerilatedVcd;
class VSimTop___024unit;


//----------

VL_MODULE(VSimTop___024root) {
  public:
    // CELLS
    VSimTop___024unit* __PVT____024unit;

    // PORTS
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(io_perfInfo_clean,0,0);
    VL_IN8(io_perfInfo_dump,0,0);
    VL_OUT8(io_uart_out_valid,0,0);
    VL_OUT8(io_uart_out_ch,7,0);
    VL_OUT8(io_uart_in_valid,0,0);
    VL_IN8(io_uart_in_ch,7,0);
    VL_IN8(io_memAXI_0_aw_ready,0,0);
    VL_OUT8(io_memAXI_0_aw_valid,0,0);
    VL_OUT8(io_memAXI_0_aw_bits_prot,2,0);
    VL_OUT8(io_memAXI_0_aw_bits_id,3,0);
    VL_OUT8(io_memAXI_0_aw_bits_user,0,0);
    VL_OUT8(io_memAXI_0_aw_bits_len,7,0);
    VL_OUT8(io_memAXI_0_aw_bits_size,2,0);
    VL_OUT8(io_memAXI_0_aw_bits_burst,1,0);
    VL_OUT8(io_memAXI_0_aw_bits_lock,0,0);
    VL_OUT8(io_memAXI_0_aw_bits_cache,3,0);
    VL_OUT8(io_memAXI_0_aw_bits_qos,3,0);
    VL_IN8(io_memAXI_0_w_ready,0,0);
    VL_OUT8(io_memAXI_0_w_valid,0,0);
    VL_OUT8(io_memAXI_0_w_bits_strb,7,0);
    VL_OUT8(io_memAXI_0_w_bits_last,0,0);
    VL_OUT8(io_memAXI_0_b_ready,0,0);
    VL_IN8(io_memAXI_0_b_valid,0,0);
    VL_IN8(io_memAXI_0_b_bits_resp,1,0);
    VL_IN8(io_memAXI_0_b_bits_id,3,0);
    VL_IN8(io_memAXI_0_b_bits_user,0,0);
    VL_IN8(io_memAXI_0_ar_ready,0,0);
    VL_OUT8(io_memAXI_0_ar_valid,0,0);
    VL_OUT8(io_memAXI_0_ar_bits_prot,2,0);
    VL_OUT8(io_memAXI_0_ar_bits_id,3,0);
    VL_OUT8(io_memAXI_0_ar_bits_user,0,0);
    VL_OUT8(io_memAXI_0_ar_bits_len,7,0);
    VL_OUT8(io_memAXI_0_ar_bits_size,2,0);
    VL_OUT8(io_memAXI_0_ar_bits_burst,1,0);
    VL_OUT8(io_memAXI_0_ar_bits_lock,0,0);
    VL_OUT8(io_memAXI_0_ar_bits_cache,3,0);
    VL_OUT8(io_memAXI_0_ar_bits_qos,3,0);
    VL_OUT8(io_memAXI_0_r_ready,0,0);
    VL_IN8(io_memAXI_0_r_valid,0,0);
    VL_IN8(io_memAXI_0_r_bits_resp,1,0);
    VL_IN8(io_memAXI_0_r_bits_last,0,0);
    VL_IN8(io_memAXI_0_r_bits_id,3,0);
    VL_IN8(io_memAXI_0_r_bits_user,0,0);
    VL_IN64(io_logCtrl_log_begin,63,0);
    VL_IN64(io_logCtrl_log_end,63,0);
    VL_IN64(io_logCtrl_log_level,63,0);
    VL_OUT64(io_memAXI_0_aw_bits_addr,63,0);
    VL_OUT64(io_memAXI_0_ar_bits_addr,63,0);
    VL_OUT64(io_memAXI_0_w_bits_data[4],63,0);
    VL_IN64(io_memAXI_0_r_bits_data[4],63,0);

    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*3:0*/ SimTop__DOT__ar_region;
        CData/*0:0*/ SimTop__DOT__if_ready;
        CData/*0:0*/ SimTop__DOT__mem_valid;
        CData/*7:0*/ SimTop__DOT__mem_write_mask_axi;
        CData/*0:0*/ SimTop__DOT__rw_valid;
        CData/*0:0*/ SimTop__DOT__rw_req;
        CData/*0:0*/ SimTop__DOT__axi_stall;
        CData/*0:0*/ SimTop__DOT__axi_rw__DOT__aw_hs;
        CData/*0:0*/ SimTop__DOT__axi_rw__DOT__w_hs;
        CData/*0:0*/ SimTop__DOT__axi_rw__DOT__b_hs;
        CData/*0:0*/ SimTop__DOT__axi_rw__DOT__ar_hs;
        CData/*0:0*/ SimTop__DOT__axi_rw__DOT__r_hs;
        CData/*0:0*/ SimTop__DOT__axi_rw__DOT__r_done;
        CData/*0:0*/ SimTop__DOT__axi_rw__DOT__trans_done;
        CData/*1:0*/ SimTop__DOT__axi_rw__DOT__w_state;
        CData/*1:0*/ SimTop__DOT__axi_rw__DOT__r_state;
        CData/*7:0*/ SimTop__DOT__axi_rw__DOT__len;
        CData/*0:0*/ SimTop__DOT__axi_rw__DOT__len_incr_en;
        CData/*7:0*/ SimTop__DOT__axi_rw__DOT__axi_len;
        CData/*0:0*/ SimTop__DOT__axi_rw__DOT__rw_ready;
        CData/*0:0*/ SimTop__DOT__axi_rw__DOT__rw_ready_en;
        CData/*1:0*/ SimTop__DOT__axi_rw__DOT__rw_resp;
        CData/*1:0*/ SimTop__DOT__arbitrating__DOT__arb_state;
        CData/*0:0*/ SimTop__DOT__arbitrating__DOT__zza_pulse;
        CData/*0:0*/ SimTop__DOT__arbitrating__DOT__zza_count;
        CData/*2:0*/ SimTop__DOT__u_cpu__DOT__optype;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__npc_op_id;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__npc_op_ex;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__npc_op_mem;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__npc_regimm_ex;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__npc_regimm_mem;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__wen_ex;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__wen_mem;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__wen_wb;
        CData/*4:0*/ SimTop__DOT__u_cpu__DOT__alu_op_id;
        CData/*4:0*/ SimTop__DOT__u_cpu__DOT__alu_op_ex;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__alu_only_imm_ex;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__alu_pc_reg1_ex;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__alu_imm_reg2_ex;
        CData/*4:0*/ SimTop__DOT__u_cpu__DOT__rd_ex;
        CData/*4:0*/ SimTop__DOT__u_cpu__DOT__rd_mem;
        CData/*4:0*/ SimTop__DOT__u_cpu__DOT__rd_wb;
        CData/*4:0*/ SimTop__DOT__u_cpu__DOT__rs1_ex;
        CData/*4:0*/ SimTop__DOT__u_cpu__DOT__rs2_ex;
        CData/*4:0*/ SimTop__DOT__u_cpu__DOT__rs2_mem;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__read_mem_en_ex;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__read_mem_en_mem;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__read_mem_en_wb;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__write_mem_en_ex;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__write_mem_en_mem;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__write_mem_en_wb;
        CData/*3:0*/ SimTop__DOT__u_cpu__DOT__mem_ctrl_id;
        CData/*3:0*/ SimTop__DOT__u_cpu__DOT__mem_ctrl_ex;
        CData/*3:0*/ SimTop__DOT__u_cpu__DOT__mem_ctrl_mem;
        CData/*3:0*/ SimTop__DOT__u_cpu__DOT__value_width_ctrl_id;
        CData/*3:0*/ SimTop__DOT__u_cpu__DOT__value_width_ctrl_ex;
        CData/*2:0*/ SimTop__DOT__u_cpu__DOT__branch_type_id;
        CData/*2:0*/ SimTop__DOT__u_cpu__DOT__branch_type_ex;
        CData/*2:0*/ SimTop__DOT__u_cpu__DOT__branch_type_mem;
        CData/*2:0*/ SimTop__DOT__u_cpu__DOT__branch_type_wb;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__operator_a_w_ex;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__operator_a_w_s_ex;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__operator_b_w_ex;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__if_inst_sll_ex;
    };
    struct {
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__ebreak_id;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__ebreak_ex;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__ebreak_mem;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__ebreak_wb;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__IF_Flush;
        CData/*1:0*/ SimTop__DOT__u_cpu__DOT__Forward_a;
        CData/*1:0*/ SimTop__DOT__u_cpu__DOT__Forward_b;
        CData/*1:0*/ SimTop__DOT__u_cpu__DOT__Forward_c;
        CData/*1:0*/ SimTop__DOT__u_cpu__DOT__Forward_d;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__pipeline_stall;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__pipeline_stall_ex;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__pipeline_stall_mem;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__pipeline_stall_wb;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__inst_valid_3;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__cmt_wen;
        CData/*7:0*/ SimTop__DOT__u_cpu__DOT__cmt_wdest;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__cmt_valid;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__trap;
        CData/*7:0*/ SimTop__DOT__u_cpu__DOT__trap_code;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_addi;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_xor;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_xori;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_ori;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_addiw;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_addw;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_subw;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_mul;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_mulw;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_divw;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_divuw;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_remw;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_remuw;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sub;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_add;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sll;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_slli;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_slliw;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_srli;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_srliw;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_andi;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_and;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_or;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_srai;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sraiw;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sra;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sraw;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_srl;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_srlw;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sllw;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lui;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_auipc;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_jal;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_jalr;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_slti;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sltiu;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sltu;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_slt;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_beq;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_bne;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_bge;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_bgeu;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_blt;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_bltu;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sd;
    };
    struct {
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sw;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sh;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sb;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lb;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lbu;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lhu;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lw;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lwu;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lh;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_ld;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_ebreak;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__hit;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__hit;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__hit;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__hit;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__hit;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__sext__DOT__sext_value0__DOT__i0__DOT__hit;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_en;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__hit;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__hit;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__lut_out;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__hit;
        IData/*31:0*/ SimTop__DOT__u_cpu__DOT__inst_id;
        IData/*31:0*/ SimTop__DOT__u_cpu__DOT__inst_ex;
        IData/*31:0*/ SimTop__DOT__u_cpu__DOT__inst_mem;
        IData/*31:0*/ SimTop__DOT__u_cpu__DOT__inst_wb;
        IData/*31:0*/ SimTop__DOT__u_cpu__DOT__cmt_inst;
        QData/*63:0*/ SimTop__DOT__if_data_read;
        QData/*63:0*/ SimTop__DOT__mem_data_read;
        QData/*63:0*/ SimTop__DOT__rw_addr;
        QData/*63:0*/ SimTop__DOT__u_cpu__DOT__pc_id;
        QData/*63:0*/ SimTop__DOT__u_cpu__DOT__pc_if;
        QData/*63:0*/ SimTop__DOT__u_cpu__DOT__pc_ex;
        QData/*63:0*/ SimTop__DOT__u_cpu__DOT__pc_mem;
        QData/*63:0*/ SimTop__DOT__u_cpu__DOT__pc_wb;
        QData/*63:0*/ SimTop__DOT__u_cpu__DOT__reg2_value_forwardb_ex;
        QData/*63:0*/ SimTop__DOT__u_cpu__DOT__reg2_to_mem_forward;
        QData/*63:0*/ SimTop__DOT__u_cpu__DOT__mem_write_mask;
        QData/*63:0*/ SimTop__DOT__u_cpu__DOT__reg_write_value_mem;
        QData/*63:0*/ SimTop__DOT__u_cpu__DOT__pc;
        QData/*63:0*/ SimTop__DOT__u_cpu__DOT__npc;
        QData/*63:0*/ SimTop__DOT__u_cpu__DOT__npc_ex;
        QData/*63:0*/ SimTop__DOT__u_cpu__DOT__npc_mem;
        QData/*63:0*/ SimTop__DOT__u_cpu__DOT__npc_wb;
        QData/*63:0*/ SimTop__DOT__u_cpu__DOT__reg1_value_id;
        QData/*63:0*/ SimTop__DOT__u_cpu__DOT__reg1_value_ex;
        QData/*63:0*/ SimTop__DOT__u_cpu__DOT__reg2_value_id;
        QData/*63:0*/ SimTop__DOT__u_cpu__DOT__reg2_value_ex;
        QData/*63:0*/ SimTop__DOT__u_cpu__DOT__reg2_value_mem;
        QData/*63:0*/ SimTop__DOT__u_cpu__DOT__reg_write_value_wb;
        QData/*63:0*/ SimTop__DOT__u_cpu__DOT__value;
        QData/*63:0*/ SimTop__DOT__u_cpu__DOT__imm_id;
        QData/*63:0*/ SimTop__DOT__u_cpu__DOT__imm_ex;
        QData/*63:0*/ SimTop__DOT__u_cpu__DOT__sext_read_mem_value_mem;
        QData/*63:0*/ SimTop__DOT__u_cpu__DOT__sext_read_mem_value_wb;
        QData/*63:0*/ SimTop__DOT__u_cpu__DOT__sext_value_ex;
        QData/*63:0*/ SimTop__DOT__u_cpu__DOT__sext_value_mem;
        QData/*63:0*/ SimTop__DOT__u_cpu__DOT__sext_value_wb;
        QData/*63:0*/ SimTop__DOT__u_cpu__DOT__cmt_wdata;
        QData/*63:0*/ SimTop__DOT__u_cpu__DOT__cmt_pc;
        QData/*63:0*/ SimTop__DOT__u_cpu__DOT__cycleCnt;
        QData/*63:0*/ SimTop__DOT__u_cpu__DOT__instrCnt;
        QData/*63:0*/ SimTop__DOT__u_cpu__DOT__alu_module__DOT__reg1_forwarda;
        QData/*63:0*/ SimTop__DOT__u_cpu__DOT__alu_module__DOT__a0;
    };
    struct {
        QData/*63:0*/ SimTop__DOT__u_cpu__DOT__alu_module__DOT__b0;
        QData/*63:0*/ SimTop__DOT__u_cpu__DOT__alu_module__DOT__a;
        QData/*63:0*/ SimTop__DOT__u_cpu__DOT__alu_module__DOT__b;
        QData/*63:0*/ SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__lut_out;
        QData/*63:0*/ SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__lut_out;
        QData/*63:0*/ SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__lut_out;
        QData/*63:0*/ SimTop__DOT__u_cpu__DOT__memory__DOT__value_writen_to_mem;
        QData/*63:0*/ SimTop__DOT__u_cpu__DOT__pipe_mem_wb__DOT__RAMHelper__DOT__rdata;
        QData/*63:0*/ SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__lut_out;
        QData/*63:0*/ SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__lut_out;
        QData/*63:0*/ SimTop__DOT__u_cpu__DOT__sext__DOT__sext_value0__DOT__i0__DOT__lut_out;
        QData/*63:0*/ SimTop__DOT__u_cpu__DOT__npc_processing__DOT__operation_a_forward;
        QData/*63:0*/ SimTop__DOT__u_cpu__DOT__npc_processing__DOT__operation_b_forward;
        QData/*63:0*/ SimTop__DOT__u_cpu__DOT__npc_processing__DOT__pc_branch_addr;
        QData/*63:0*/ SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__lut_out;
        QData/*63:0*/ SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__lut_out;
        VlUnpacked<QData/*63:0*/, 32> SimTop__DOT__u_cpu__DOT__regs_gpr;
        VlUnpacked<QData/*63:0*/, 32> SimTop__DOT__u_cpu__DOT__regs_diff;
        VlUnpacked<VlWide<3>/*65:0*/, 3> SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*1:0*/, 3> SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 3> SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__data_list;
        VlUnpacked<VlWide<3>/*65:0*/, 3> SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*1:0*/, 3> SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 3> SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__data_list;
        VlUnpacked<VlWide<3>/*68:0*/, 18> SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*4:0*/, 18> SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 18> SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list;
        VlUnpacked<QData/*63:0*/, 32> SimTop__DOT__u_cpu__DOT__rf__DOT__rf;
        VlUnpacked<VlWide<3>/*66:0*/, 5> SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*2:0*/, 5> SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 5> SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__data_list;
        VlUnpacked<VlWide<3>/*67:0*/, 7> SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*3:0*/, 7> SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 7> SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__data_list;
        VlUnpacked<VlWide<3>/*67:0*/, 2> SimTop__DOT__u_cpu__DOT__sext__DOT__sext_value0__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*3:0*/, 2> SimTop__DOT__u_cpu__DOT__sext__DOT__sext_value0__DOT__i0__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 2> SimTop__DOT__u_cpu__DOT__sext__DOT__sext_value0__DOT__i0__DOT__data_list;
        VlUnpacked<VlWide<3>/*65:0*/, 4> SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*1:0*/, 4> SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 4> SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__data_list;
        VlUnpacked<VlWide<3>/*65:0*/, 4> SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*1:0*/, 4> SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 4> SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*3:0*/, 6> SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*2:0*/, 6> SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*0:0*/, 6> SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__data_list;
    };

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clock;
    VlWide<7>/*197:0*/ SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__forward_a_mux____pinNumber4;
    VlWide<7>/*197:0*/ SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__forward_b_mux____pinNumber4;
    VlWide<39>/*1241:0*/ SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4;
    VlWide<11>/*334:0*/ SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_imm____pinNumber4;
    VlWide<15>/*475:0*/ SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4;
    VlWide<5>/*135:0*/ SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_value0____pinNumber4;
    VlWide<9>/*263:0*/ SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_c_mux____pinNumber4;
    VlWide<9>/*263:0*/ SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_d_mux____pinNumber4;
    IData/*23:0*/ SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__branch_test____pinNumber4;
    VlUnpacked<QData/*63:0*/, 32> SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;

    // INTERNAL VARIABLES
    VSimTop__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VSimTop___024root);  ///< Copying not allowed
  public:
    VSimTop___024root(const char* name);
    ~VSimTop___024root();

    // INTERNAL METHODS
    void __Vconfigure(VSimTop__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard

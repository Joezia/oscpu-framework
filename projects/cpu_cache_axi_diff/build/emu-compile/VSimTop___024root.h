// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VSimTop.h for the primary calling header

#ifndef VERILATED_VSIMTOP___024ROOT_H_
#define VERILATED_VSIMTOP___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class VSimTop__Syms;
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
    VL_OUT(io_memAXI_0_aw_bits_addr,31,0);
    VL_OUT(io_memAXI_0_ar_bits_addr,31,0);
    VL_IN64(io_logCtrl_log_begin,63,0);
    VL_IN64(io_logCtrl_log_end,63,0);
    VL_IN64(io_logCtrl_log_level,63,0);
    VL_OUT64(io_memAXI_0_w_bits_data[4],63,0);
    VL_IN64(io_memAXI_0_r_bits_data[4],63,0);

    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ SimTop__DOT__mem_valid;
        CData/*0:0*/ SimTop__DOT__icache_valid;
        CData/*0:0*/ SimTop__DOT__icache_req;
        CData/*0:0*/ SimTop__DOT__rw_valid;
        CData/*0:0*/ SimTop__DOT__rw_req;
        CData/*0:0*/ SimTop__DOT__arb_if_r_hs;
        CData/*0:0*/ SimTop__DOT__arb_if_trans_done;
        CData/*0:0*/ SimTop__DOT__axi_stall;
        CData/*0:0*/ SimTop__DOT__iram_wen;
        CData/*5:0*/ SimTop__DOT__iram_addr;
        CData/*0:0*/ SimTop__DOT__axi_rw__DOT__aw_hs;
        CData/*0:0*/ SimTop__DOT__axi_rw__DOT__w_hs;
        CData/*0:0*/ SimTop__DOT__axi_rw__DOT__b_hs;
        CData/*0:0*/ SimTop__DOT__axi_rw__DOT__ar_hs;
        CData/*0:0*/ SimTop__DOT__axi_rw__DOT__r_hs;
        CData/*0:0*/ SimTop__DOT__axi_rw__DOT__r_done;
        CData/*0:0*/ SimTop__DOT__axi_rw__DOT__trans_done;
        CData/*1:0*/ SimTop__DOT__axi_rw__DOT__w_state;
        CData/*1:0*/ SimTop__DOT__axi_rw__DOT__r_state;
        CData/*1:0*/ SimTop__DOT__arbitrating__DOT__arb_state;
        CData/*0:0*/ SimTop__DOT__arbitrating__DOT__zza_pulse_1;
        CData/*0:0*/ SimTop__DOT__arbitrating__DOT__zza_pulse_3;
        CData/*1:0*/ SimTop__DOT__arbitrating__DOT__zza_count;
        CData/*0:0*/ SimTop__DOT__arbitrating__DOT__zza_pulse;
        CData/*0:0*/ SimTop__DOT__arbitrating__DOT__situation_if_valid;
        CData/*0:0*/ SimTop__DOT__u_icache__DOT__hit;
        CData/*1:0*/ SimTop__DOT__u_icache__DOT__icache_state;
        CData/*1:0*/ SimTop__DOT__u_icache__DOT__re_write_state;
        CData/*0:0*/ SimTop__DOT__u_icache__DOT__icache_valid_pre;
        CData/*0:0*/ SimTop__DOT__u_icache__DOT__icache_stall_pre;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__axi_stall_i;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__device_stall;
        CData/*2:0*/ SimTop__DOT__u_cpu__DOT__optype;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__npc_op_id;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__npc_op_ex;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__csr_ren;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__wen_ex;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__wen_mem;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__wen_wb;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__csr_wen_ex;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__csr_wen_mem;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__csr_wen_wb;
        CData/*4:0*/ SimTop__DOT__u_cpu__DOT__alu_op_id;
        CData/*4:0*/ SimTop__DOT__u_cpu__DOT__alu_op_ex;
        CData/*2:0*/ SimTop__DOT__u_cpu__DOT__csr_alu_op_id;
        CData/*2:0*/ SimTop__DOT__u_cpu__DOT__csr_alu_op_ex;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__alu_only_imm_ex;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__alu_pc_reg1_ex;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__alu_imm_reg2_ex;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__csr_if_zimm_ex;
        CData/*4:0*/ SimTop__DOT__u_cpu__DOT__rd_ex;
        CData/*4:0*/ SimTop__DOT__u_cpu__DOT__rd_mem;
        CData/*4:0*/ SimTop__DOT__u_cpu__DOT__rd_wb;
        CData/*4:0*/ SimTop__DOT__u_cpu__DOT__zimm_ex;
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
    };
    struct {
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
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__environment_call_ex;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__environment_call_mem;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__environment_call_wb;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__m_mode_return_ex;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__m_mode_return_mem;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__m_mode_return_wb;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__if_clint_mem;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__if_clint_wb;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__clint_wen;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__m_time_interrupt;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__m_time_interrupt_trigger;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__IF_Flush;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__pipeline_stall;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__pipeline_stall_ex;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__pipeline_stall_mem;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__pipeline_stall_wb;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__pc_wen;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__inst_valid_3;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__cmt_wen;
        CData/*7:0*/ SimTop__DOT__u_cpu__DOT__cmt_wdest;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__cmt_valid;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__cmt_skip;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__trap;
        CData/*7:0*/ SimTop__DOT__u_cpu__DOT__trap_code;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrc;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrci;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrs;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrsi;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrw;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrwi;
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
    };
    struct {
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
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_valid;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_ready;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__mul_calculating;
        CData/*6:0*/ SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__mul_result_cnt;
        CData/*1:0*/ SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__div_state;
        CData/*6:0*/ SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__div_cnt;
        CData/*0:0*/ SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__diff_neg;
        SData/*11:0*/ SimTop__DOT__u_cpu__DOT__csr_ex;
        SData/*11:0*/ SimTop__DOT__u_cpu__DOT__csr_mem;
        SData/*11:0*/ SimTop__DOT__u_cpu__DOT__csr_wb;
        VlWide<4>/*127:0*/ SimTop__DOT__iram_data_read_128;
        IData/*31:0*/ SimTop__DOT__u_cpu__DOT__inst_id;
        IData/*31:0*/ SimTop__DOT__u_cpu__DOT__inst_ex;
        IData/*31:0*/ SimTop__DOT__u_cpu__DOT__inst_mem;
        IData/*31:0*/ SimTop__DOT__u_cpu__DOT__inst_wb;
        IData/*31:0*/ SimTop__DOT__u_cpu__DOT__cmt_inst;
        VlWide<4>/*127:0*/ SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__mul_result_partial;
        VlWide<4>/*127:0*/ SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__mul_result;
        VlWide<4>/*127:0*/ SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__multiplcand;
        VlWide<4>/*127:0*/ SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__dividend_abs;
        VlWide<3>/*64:0*/ SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__divisor_abs;
        VlWide<3>/*64:0*/ SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__diff_temp;
        QData/*63:0*/ SimTop__DOT__mem_data_read;
        QData/*63:0*/ SimTop__DOT__icache_addr;
        QData/*63:0*/ SimTop__DOT__icache_data_read;
        QData/*63:0*/ SimTop__DOT__clint_data_read;
        QData/*63:0*/ SimTop__DOT__u_icache__DOT__valid;
        QData/*63:0*/ SimTop__DOT__u_icache__DOT__addr_icache_read;
        QData/*63:0*/ SimTop__DOT__u_icache__DOT__re_write_addr;
        QData/*63:0*/ SimTop__DOT__u_cpu__DOT__pc_id;
    };
    struct {
        QData/*63:0*/ SimTop__DOT__u_cpu__DOT__pc_ex;
        QData/*63:0*/ SimTop__DOT__u_cpu__DOT__pc_mem;
        QData/*63:0*/ SimTop__DOT__u_cpu__DOT__pc_wb;
        QData/*63:0*/ SimTop__DOT__u_cpu__DOT__reg2_value_forwardb_ex;
        QData/*63:0*/ SimTop__DOT__u_cpu__DOT__csr_value_writeback_ex;
        QData/*63:0*/ SimTop__DOT__u_cpu__DOT__csr_value_writeback_mem;
        QData/*63:0*/ SimTop__DOT__u_cpu__DOT__csr_value_writeback_wb;
        QData/*63:0*/ SimTop__DOT__u_cpu__DOT__pc;
        QData/*63:0*/ SimTop__DOT__u_cpu__DOT__npc;
        QData/*63:0*/ SimTop__DOT__u_cpu__DOT__reg1_value_id;
        QData/*63:0*/ SimTop__DOT__u_cpu__DOT__reg1_value_ex;
        QData/*63:0*/ SimTop__DOT__u_cpu__DOT__reg2_value_id;
        QData/*63:0*/ SimTop__DOT__u_cpu__DOT__reg2_value_ex;
        QData/*63:0*/ SimTop__DOT__u_cpu__DOT__reg2_value_mem;
        QData/*63:0*/ SimTop__DOT__u_cpu__DOT__csr_value_ex;
        QData/*63:0*/ SimTop__DOT__u_cpu__DOT__reg_write_value_wb;
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
        QData/*63:0*/ SimTop__DOT__u_cpu__DOT__alu_module__DOT__a;
        QData/*63:0*/ SimTop__DOT__u_cpu__DOT__alu_module__DOT__b;
        QData/*63:0*/ SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__multipler;
        QData/*63:0*/ SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__quotient_abs;
        QData/*63:0*/ SimTop__DOT__u_cpu__DOT__memory__DOT__value_writen_to_mem;
        QData/*63:0*/ SimTop__DOT__u_cpu__DOT__rf__DOT__mstatus;
        QData/*63:0*/ SimTop__DOT__u_cpu__DOT__rf__DOT__mepc;
        QData/*63:0*/ SimTop__DOT__u_cpu__DOT__rf__DOT__mtvec;
        QData/*63:0*/ SimTop__DOT__u_cpu__DOT__rf__DOT__mcause;
        QData/*63:0*/ SimTop__DOT__u_cpu__DOT__rf__DOT__mie;
        QData/*63:0*/ SimTop__DOT__u_cpu__DOT__rf__DOT__mip;
        QData/*63:0*/ SimTop__DOT__u_cpu__DOT__rf__DOT__mscratch;
        QData/*63:0*/ SimTop__DOT__u_cpu__DOT__rf__DOT__mstatus_reg;
        QData/*63:0*/ SimTop__DOT__u_cpu__DOT__rf__DOT__mie_reg;
        QData/*63:0*/ SimTop__DOT__u_cpu__DOT__rf__DOT__mstatus_latch;
        QData/*63:0*/ SimTop__DOT__u_cpu__DOT__rf__DOT__mepc_latch;
        QData/*63:0*/ SimTop__DOT__u_cpu__DOT__rf__DOT__mtvec_latch;
        QData/*63:0*/ SimTop__DOT__u_cpu__DOT__rf__DOT__mcause_latch;
        QData/*63:0*/ SimTop__DOT__u_cpu__DOT__rf__DOT__mie_latch;
        QData/*63:0*/ SimTop__DOT__u_cpu__DOT__rf__DOT__mip_latch;
        QData/*63:0*/ SimTop__DOT__u_cpu__DOT__rf__DOT__mscratch_latch;
        QData/*63:0*/ SimTop__DOT__u_cpu__DOT__rf__DOT__mepc_timeint_reg;
        QData/*63:0*/ SimTop__DOT__u_cpu__DOT__rf__DOT__mcause_timeint_reg;
        QData/*63:0*/ SimTop__DOT__clint__DOT__mtime;
        QData/*63:0*/ SimTop__DOT__clint__DOT__mtimecmp;
        VlUnpacked<QData/*53:0*/, 128> SimTop__DOT__u_icache__DOT__tag;
        VlUnpacked<VlWide<4>/*127:0*/, 64> SimTop__DOT__icache_ram__DOT__ram;
        VlUnpacked<QData/*63:0*/, 32> SimTop__DOT__u_cpu__DOT__regs_gpr;
        VlUnpacked<QData/*63:0*/, 32> SimTop__DOT__u_cpu__DOT__regs_diff;
        VlUnpacked<VlWide<3>/*65:0*/, 3> SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*1:0*/, 3> SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 3> SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__data_list;
        VlUnpacked<VlWide<3>/*65:0*/, 3> SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*1:0*/, 3> SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 3> SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__data_list;
        VlUnpacked<VlWide<3>/*68:0*/, 19> SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*4:0*/, 19> SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list;
    };
    struct {
        VlUnpacked<QData/*63:0*/, 19> SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list;
        VlUnpacked<VlWide<3>/*66:0*/, 3> SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_value_write__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*2:0*/, 3> SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_value_write__DOT__i0__DOT__key_list;
        VlUnpacked<QData/*63:0*/, 3> SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_value_write__DOT__i0__DOT__data_list;
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
    VlUnpacked<QData/*63:0*/, 32> SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr;

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

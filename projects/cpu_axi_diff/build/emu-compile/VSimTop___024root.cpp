// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSimTop.h for the primary calling header

#include "VSimTop___024root.h"
#include "VSimTop__Syms.h"

#include "verilated_dpi.h"

//==========

void VSimTop___024unit____Vdpiimwrap_ram_write_helper_TOP____024unit(QData/*63:0*/ wIdx, QData/*63:0*/ wdata, QData/*63:0*/ wmask, CData/*0:0*/ wen);
void VSimTop___024unit____Vdpiimwrap_v_difftest_CSRState_TOP____024unit(CData/*7:0*/ coreid, CData/*7:0*/ priviledgeMode, QData/*63:0*/ mstatus, QData/*63:0*/ sstatus, QData/*63:0*/ mepc, QData/*63:0*/ sepc, QData/*63:0*/ mtval, QData/*63:0*/ stval, QData/*63:0*/ mtvec, QData/*63:0*/ stvec, QData/*63:0*/ mcause, QData/*63:0*/ scause, QData/*63:0*/ satp, QData/*63:0*/ mip, QData/*63:0*/ mie, QData/*63:0*/ mscratch, QData/*63:0*/ sscratch, QData/*63:0*/ mideleg, QData/*63:0*/ medeleg);
void VSimTop___024unit____Vdpiimwrap_v_difftest_ArchFpRegState_TOP____024unit(CData/*7:0*/ coreid, QData/*63:0*/ fpr_0, QData/*63:0*/ fpr_1, QData/*63:0*/ fpr_2, QData/*63:0*/ fpr_3, QData/*63:0*/ fpr_4, QData/*63:0*/ fpr_5, QData/*63:0*/ fpr_6, QData/*63:0*/ fpr_7, QData/*63:0*/ fpr_8, QData/*63:0*/ fpr_9, QData/*63:0*/ fpr_10, QData/*63:0*/ fpr_11, QData/*63:0*/ fpr_12, QData/*63:0*/ fpr_13, QData/*63:0*/ fpr_14, QData/*63:0*/ fpr_15, QData/*63:0*/ fpr_16, QData/*63:0*/ fpr_17, QData/*63:0*/ fpr_18, QData/*63:0*/ fpr_19, QData/*63:0*/ fpr_20, QData/*63:0*/ fpr_21, QData/*63:0*/ fpr_22, QData/*63:0*/ fpr_23, QData/*63:0*/ fpr_24, QData/*63:0*/ fpr_25, QData/*63:0*/ fpr_26, QData/*63:0*/ fpr_27, QData/*63:0*/ fpr_28, QData/*63:0*/ fpr_29, QData/*63:0*/ fpr_30, QData/*63:0*/ fpr_31);
void VSimTop___024unit____Vdpiimwrap_v_difftest_ArchIntRegState_TOP____024unit(CData/*7:0*/ coreid, QData/*63:0*/ gpr_0, QData/*63:0*/ gpr_1, QData/*63:0*/ gpr_2, QData/*63:0*/ gpr_3, QData/*63:0*/ gpr_4, QData/*63:0*/ gpr_5, QData/*63:0*/ gpr_6, QData/*63:0*/ gpr_7, QData/*63:0*/ gpr_8, QData/*63:0*/ gpr_9, QData/*63:0*/ gpr_10, QData/*63:0*/ gpr_11, QData/*63:0*/ gpr_12, QData/*63:0*/ gpr_13, QData/*63:0*/ gpr_14, QData/*63:0*/ gpr_15, QData/*63:0*/ gpr_16, QData/*63:0*/ gpr_17, QData/*63:0*/ gpr_18, QData/*63:0*/ gpr_19, QData/*63:0*/ gpr_20, QData/*63:0*/ gpr_21, QData/*63:0*/ gpr_22, QData/*63:0*/ gpr_23, QData/*63:0*/ gpr_24, QData/*63:0*/ gpr_25, QData/*63:0*/ gpr_26, QData/*63:0*/ gpr_27, QData/*63:0*/ gpr_28, QData/*63:0*/ gpr_29, QData/*63:0*/ gpr_30, QData/*63:0*/ gpr_31);
void VSimTop___024unit____Vdpiimwrap_v_difftest_TrapEvent_TOP____024unit(CData/*7:0*/ coreid, CData/*0:0*/ valid, CData/*7:0*/ code, QData/*63:0*/ pc, QData/*63:0*/ cycleCnt, QData/*63:0*/ instrCnt);
void VSimTop___024unit____Vdpiimwrap_v_difftest_InstrCommit_TOP____024unit(CData/*7:0*/ coreid, CData/*7:0*/ index, CData/*0:0*/ valid, QData/*63:0*/ pc, IData/*31:0*/ instr, CData/*0:0*/ skip, CData/*0:0*/ isRVC, CData/*0:0*/ scFailed, CData/*0:0*/ wen, CData/*7:0*/ wdest, QData/*63:0*/ wdata);
extern const VlUnpacked<CData/*0:0*/, 128> VSimTop__ConstPool__TABLE_a4fb0ffb_0;
extern const VlUnpacked<CData/*1:0*/, 128> VSimTop__ConstPool__TABLE_dc6f46b9_0;
extern const VlUnpacked<CData/*0:0*/, 64> VSimTop__ConstPool__TABLE_c1a1efce_0;
extern const VlUnpacked<CData/*1:0*/, 64> VSimTop__ConstPool__TABLE_3289ff5d_0;
extern const VlUnpacked<CData/*0:0*/, 128> VSimTop__ConstPool__TABLE_076c602d_0;
extern const VlUnpacked<CData/*1:0*/, 128> VSimTop__ConstPool__TABLE_3403b772_0;

VL_INLINE_OPT void VSimTop___024root___sequent__TOP__2(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___sequent__TOP__2\n"); );
    // Variables
    CData/*6:0*/ __Vtableidx1;
    CData/*5:0*/ __Vtableidx2;
    CData/*6:0*/ __Vtableidx3;
    CData/*7:0*/ __Vdly__SimTop__DOT__axi_rw__DOT__len;
    CData/*1:0*/ __Vdly__SimTop__DOT__arbitrating__DOT__arb_state;
    CData/*0:0*/ __Vdly__SimTop__DOT__arbitrating__DOT__zza_count;
    CData/*0:0*/ __Vdlyvset__SimTop__DOT__u_cpu__DOT__rf__DOT__rf__v0;
    VlWide<3>/*95:0*/ __Vtemp404;
    VlWide<7>/*223:0*/ __Vtemp407;
    VlWide<9>/*287:0*/ __Vtemp409;
    VlWide<13>/*415:0*/ __Vtemp413;
    VlWide<15>/*479:0*/ __Vtemp415;
    VlWide<3>/*95:0*/ __Vtemp417;
    VlWide<3>/*95:0*/ __Vtemp422;
    VlWide<5>/*159:0*/ __Vtemp515;
    VlWide<4>/*127:0*/ __Vtemp516;
    VlWide<8>/*255:0*/ __Vtemp517;
    VlWide<9>/*287:0*/ __Vtemp518;
    VlWide<3>/*95:0*/ __Vtemp545;
    VlWide<3>/*95:0*/ __Vtemp580;
    VlWide<3>/*95:0*/ __Vtemp581;
    VlWide<3>/*95:0*/ __Vtemp582;
    VlWide<3>/*95:0*/ __Vtemp583;
    VlWide<3>/*95:0*/ __Vtemp716;
    VlWide<3>/*95:0*/ __Vtemp731;
    VlWide<3>/*95:0*/ __Vtemp738;
    QData/*63:0*/ __Vdly__SimTop__DOT__u_cpu__DOT__pc;
    // Body
    __Vdly__SimTop__DOT__arbitrating__DOT__zza_count 
        = vlSelf->SimTop__DOT__arbitrating__DOT__zza_count;
    __Vdly__SimTop__DOT__axi_rw__DOT__len = vlSelf->SimTop__DOT__axi_rw__DOT__len;
    __Vdly__SimTop__DOT__arbitrating__DOT__arb_state 
        = vlSelf->SimTop__DOT__arbitrating__DOT__arb_state;
    __Vdlyvset__SimTop__DOT__u_cpu__DOT__rf__DOT__rf__v0 = 0U;
    __Vdly__SimTop__DOT__u_cpu__DOT__pc = vlSelf->SimTop__DOT__u_cpu__DOT__pc;
    if ((1U & (~ (IData)(vlSelf->SimTop__DOT__axi_stall)))) {
        if ((1U & (~ (IData)(vlSelf->reset)))) {
            if (VL_UNLIKELY((1U & (~ ((((((((((((((
                                                   ((((((((((((((((((((((((((((((((((((((((((((0U 
                                                                                == vlSelf->SimTop__DOT__u_cpu__DOT__inst_id) 
                                                                                | (0x6bU 
                                                                                == vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)) 
                                                                                | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_addi)) 
                                                                                | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_xor)) 
                                                                                | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_xori)) 
                                                                                | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_ori)) 
                                                                                | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_addiw)) 
                                                                                | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_subw)) 
                                                                                | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_addw)) 
                                                                                | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_remuw)) 
                                                                                | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_remw)) 
                                                                                | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_divw)) 
                                                                                | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_divuw)) 
                                                                                | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_mulw)) 
                                                                                | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_mul)) 
                                                                                | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sub)) 
                                                                               | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_auipc)) 
                                                                              | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lui)) 
                                                                             | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_jal)) 
                                                                            | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_jalr)) 
                                                                           | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sd)) 
                                                                          | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sw)) 
                                                                         | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sh)) 
                                                                        | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sb)) 
                                                                       | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_slti)) 
                                                                      | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sltiu)) 
                                                                     | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lhu)) 
                                                                    | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lb)) 
                                                                   | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lbu)) 
                                                                  | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lh)) 
                                                                 | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lwu)) 
                                                                | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lw)) 
                                                               | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_ld)) 
                                                              | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_beq)) 
                                                             | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_bne)) 
                                                            | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_bge)) 
                                                           | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_bgeu)) 
                                                          | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_blt)) 
                                                         | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_bltu)) 
                                                        | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_ebreak)) 
                                                       | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_add)) 
                                                      | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_srai)) 
                                                     | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sraiw)) 
                                                    | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sra)) 
                                                   | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sraw)) 
                                                  | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_srl)) 
                                                 | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_srlw)) 
                                                | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_andi)) 
                                               | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_and)) 
                                              | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_or)) 
                                             | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sllw)) 
                                            | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_slli)) 
                                           | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_slliw)) 
                                          | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sll)) 
                                         | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sltu)) 
                                        | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_slt)) 
                                       | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_srli)) 
                                      | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_srliw)))))) {
                VL_WRITEF("\n???Cannot recognize the instruction! - zza  pc:%x\t inst: %x\n\n",
                          64,vlSelf->SimTop__DOT__u_cpu__DOT__pc_id,
                          32,vlSelf->SimTop__DOT__u_cpu__DOT__inst_id);
            }
        }
    }
    VSimTop___024unit____Vdpiimwrap_ram_write_helper_TOP____024unit(
                                                                    ((vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem 
                                                                      - 0x80000000ULL) 
                                                                     >> 3U), vlSelf->SimTop__DOT__u_cpu__DOT__reg2_to_mem_forward, vlSelf->SimTop__DOT__u_cpu__DOT__mem_write_mask, 
                                                                    ((~ (IData)(vlSelf->SimTop__DOT__axi_stall)) 
                                                                     & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__write_mem_en_mem)));
    VSimTop___024unit____Vdpiimwrap_v_difftest_CSRState_TOP____024unit(0U, 3U, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL);
    VSimTop___024unit____Vdpiimwrap_v_difftest_ArchFpRegState_TOP____024unit(0U, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL);
    VSimTop___024unit____Vdpiimwrap_v_difftest_ArchIntRegState_TOP____024unit(0U, 
                                                                              vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                                                              [0U], 
                                                                              vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                                                              [1U], 
                                                                              vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                                                              [2U], 
                                                                              vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                                                              [3U], 
                                                                              vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                                                              [4U], 
                                                                              vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                                                              [5U], 
                                                                              vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                                                              [6U], 
                                                                              vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                                                              [7U], 
                                                                              vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                                                              [8U], 
                                                                              vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                                                              [9U], 
                                                                              vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                                                              [0xaU], 
                                                                              vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                                                              [0xbU], 
                                                                              vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                                                              [0xcU], 
                                                                              vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                                                              [0xdU], 
                                                                              vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                                                              [0xeU], 
                                                                              vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                                                              [0xfU], 
                                                                              vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                                                              [0x10U], 
                                                                              vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                                                              [0x11U], 
                                                                              vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                                                              [0x12U], 
                                                                              vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                                                              [0x13U], 
                                                                              vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                                                              [0x14U], 
                                                                              vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                                                              [0x15U], 
                                                                              vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                                                              [0x16U], 
                                                                              vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                                                              [0x17U], 
                                                                              vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                                                              [0x18U], 
                                                                              vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                                                              [0x19U], 
                                                                              vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                                                              [0x1aU], 
                                                                              vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                                                              [0x1bU], 
                                                                              vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                                                              [0x1cU], 
                                                                              vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                                                              [0x1dU], 
                                                                              vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                                                              [0x1eU], 
                                                                              vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                                                              [0x1fU]);
    VSimTop___024unit____Vdpiimwrap_v_difftest_TrapEvent_TOP____024unit(0U, (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__trap), 
                                                                        (7U 
                                                                         & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__trap_code)), vlSelf->SimTop__DOT__u_cpu__DOT__cmt_pc, vlSelf->SimTop__DOT__u_cpu__DOT__cycleCnt, vlSelf->SimTop__DOT__u_cpu__DOT__instrCnt);
    if (vlSelf->SimTop__DOT__u_cpu__DOT__cmt_valid) {
        VSimTop___024unit____Vdpiimwrap_v_difftest_InstrCommit_TOP____024unit(0U, 0U, (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__cmt_valid), vlSelf->SimTop__DOT__u_cpu__DOT__cmt_pc, vlSelf->SimTop__DOT__u_cpu__DOT__cmt_inst, 0U, 0U, 0U, (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__cmt_wen), vlSelf->SimTop__DOT__u_cpu__DOT__cmt_wdest, vlSelf->SimTop__DOT__u_cpu__DOT__cmt_wdata);
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__axi_rw__DOT__rw_ready = 0U;
    } else if (vlSelf->SimTop__DOT__axi_rw__DOT__rw_ready_en) {
        vlSelf->SimTop__DOT__axi_rw__DOT__rw_ready 
            = vlSelf->SimTop__DOT__axi_rw__DOT__trans_done;
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__axi_rw__DOT__rw_resp = 0U;
    } else if (vlSelf->SimTop__DOT__axi_rw__DOT__trans_done) {
        vlSelf->SimTop__DOT__axi_rw__DOT__rw_resp = 
            (1U & ((IData)(vlSelf->SimTop__DOT__rw_req)
                    ? (IData)(vlSelf->io_memAXI_0_b_bits_resp)
                    : (IData)(vlSelf->io_memAXI_0_r_bits_resp)));
    }
    if ((((IData)(vlSelf->reset) | ((IData)(vlSelf->SimTop__DOT__rw_req) 
                                    & (0U == (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__w_state)))) 
         | ((~ (IData)(vlSelf->SimTop__DOT__rw_req)) 
            & (0U == (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__r_state))))) {
        __Vdly__SimTop__DOT__axi_rw__DOT__len = 0U;
    } else if (vlSelf->SimTop__DOT__axi_rw__DOT__len_incr_en) {
        __Vdly__SimTop__DOT__axi_rw__DOT__len = (0xffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__len)));
    }
    __Vtableidx1 = (((IData)(vlSelf->SimTop__DOT__axi_rw__DOT__aw_hs) 
                     << 6U) | (((IData)(vlSelf->SimTop__DOT__axi_rw__DOT__w_hs) 
                                << 5U) | (((IData)(vlSelf->SimTop__DOT__axi_rw__DOT__b_hs) 
                                           << 4U) | 
                                          (((IData)(vlSelf->SimTop__DOT__axi_rw__DOT__w_state) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->SimTop__DOT__rw_valid) 
                                                & (IData)(vlSelf->SimTop__DOT__rw_req)) 
                                               << 1U) 
                                              | (1U 
                                                 & (~ (IData)(vlSelf->reset))))))));
    if (VSimTop__ConstPool__TABLE_a4fb0ffb_0[__Vtableidx1]) {
        vlSelf->SimTop__DOT__axi_rw__DOT__w_state = 
            VSimTop__ConstPool__TABLE_dc6f46b9_0[__Vtableidx1];
    }
    __Vtableidx2 = (((IData)(vlSelf->SimTop__DOT__axi_rw__DOT__r_done) 
                     << 5U) | (((IData)(vlSelf->SimTop__DOT__axi_rw__DOT__ar_hs) 
                                << 4U) | (((IData)(vlSelf->SimTop__DOT__axi_rw__DOT__r_state) 
                                           << 2U) | 
                                          ((((IData)(vlSelf->SimTop__DOT__rw_valid) 
                                             & (~ (IData)(vlSelf->SimTop__DOT__rw_req))) 
                                            << 1U) 
                                           | (1U & 
                                              (~ (IData)(vlSelf->reset)))))));
    if (VSimTop__ConstPool__TABLE_c1a1efce_0[__Vtableidx2]) {
        vlSelf->SimTop__DOT__axi_rw__DOT__r_state = 
            VSimTop__ConstPool__TABLE_3289ff5d_0[__Vtableidx2];
    }
    __Vtableidx3 = (0x20U | (((IData)(vlSelf->SimTop__DOT__axi_rw__DOT__trans_done) 
                              << 6U) | (((IData)(vlSelf->SimTop__DOT__arbitrating__DOT__zza_pulse) 
                                         << 4U) | (
                                                   ((IData)(vlSelf->SimTop__DOT__mem_valid) 
                                                    << 3U) 
                                                   | (((IData)(vlSelf->SimTop__DOT__arbitrating__DOT__arb_state) 
                                                       << 1U) 
                                                      | (1U 
                                                         & (~ (IData)(vlSelf->reset))))))));
    if (VSimTop__ConstPool__TABLE_076c602d_0[__Vtableidx3]) {
        __Vdly__SimTop__DOT__arbitrating__DOT__arb_state 
            = VSimTop__ConstPool__TABLE_3403b772_0[__Vtableidx3];
    }
    if ((1U & (~ (IData)(vlSelf->SimTop__DOT__axi_stall)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__ebreak_wb 
            = vlSelf->SimTop__DOT__u_cpu__DOT__ebreak_mem;
    }
    if ((1U & (~ (IData)(vlSelf->SimTop__DOT__axi_stall)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__npc_wb = vlSelf->SimTop__DOT__u_cpu__DOT__npc_mem;
    }
    if ((1U & (~ (IData)(vlSelf->SimTop__DOT__axi_stall)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__pipeline_stall_wb 
            = vlSelf->SimTop__DOT__u_cpu__DOT__pipeline_stall_mem;
    }
    if ((1U & (~ (IData)(vlSelf->SimTop__DOT__axi_stall)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__branch_type_wb 
            = vlSelf->SimTop__DOT__u_cpu__DOT__branch_type_mem;
    }
    if ((1U & (~ (IData)(vlSelf->SimTop__DOT__axi_stall)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__npc_regimm_mem 
            = vlSelf->SimTop__DOT__u_cpu__DOT__npc_regimm_ex;
    }
    if ((1U & (~ (IData)(vlSelf->SimTop__DOT__axi_stall)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__value_width_ctrl_ex 
            = vlSelf->SimTop__DOT__u_cpu__DOT__value_width_ctrl_id;
    }
    if ((1U & (~ (IData)(vlSelf->SimTop__DOT__axi_stall)))) {
        if (vlSelf->reset) {
            __Vdlyvset__SimTop__DOT__u_cpu__DOT__rf__DOT__rf__v0 = 1U;
        }
    }
    if ((1U & (~ (IData)(vlSelf->SimTop__DOT__axi_stall)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__mem_ctrl_mem 
            = vlSelf->SimTop__DOT__u_cpu__DOT__mem_ctrl_ex;
    }
    if ((1U & (~ (IData)(vlSelf->SimTop__DOT__axi_stall)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__write_mem_en_wb 
            = vlSelf->SimTop__DOT__u_cpu__DOT__write_mem_en_mem;
    }
    if ((1U & (~ (IData)(vlSelf->SimTop__DOT__axi_stall)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__inst_wb = vlSelf->SimTop__DOT__u_cpu__DOT__inst_mem;
    }
    if ((1U & (~ (IData)(vlSelf->SimTop__DOT__axi_stall)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_ex 
            = vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_id;
    }
    if ((1U & (~ (IData)(vlSelf->SimTop__DOT__axi_stall)))) {
        if (vlSelf->reset) {
            __Vdly__SimTop__DOT__u_cpu__DOT__pc = 0x7ffffffcULL;
        } else if ((1U & (~ ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__read_mem_en_ex) 
                             & (((0x1fU & (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                           >> 0xfU)) 
                                 == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rd_ex)) 
                                | ((0x1fU & (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                             >> 0x14U)) 
                                   == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rd_ex))))))) {
            __Vdly__SimTop__DOT__u_cpu__DOT__pc = vlSelf->SimTop__DOT__u_cpu__DOT__npc;
        }
    }
    if (((1U == (IData)(vlSelf->SimTop__DOT__arbitrating__DOT__arb_state)) 
         & (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__trans_done))) {
        vlSelf->SimTop__DOT__mem_data_read = vlSelf->io_memAXI_0_r_bits_data
            [0U];
    }
    if ((1U & (~ (IData)(vlSelf->SimTop__DOT__axi_stall)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__if_inst_sll_ex 
            = (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sll) 
                | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sra)) 
               | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_srl));
    }
    if ((1U & (~ (IData)(vlSelf->SimTop__DOT__axi_stall)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__operator_a_w_s_ex 
            = ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sraiw) 
               | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sraw));
    }
    if ((1U & (~ (IData)(vlSelf->SimTop__DOT__axi_stall)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__operator_b_w_ex 
            = ((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_divw) 
                 | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_divuw)) 
                | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_remw)) 
               | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_remuw));
    }
    if ((1U & (~ (IData)(vlSelf->SimTop__DOT__axi_stall)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__operator_a_w_ex 
            = ((((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_divw) 
                   | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_divuw)) 
                  | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_remw)) 
                 | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_remuw)) 
                | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_srliw)) 
               | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_srlw));
    }
    if ((1U & (~ (IData)(vlSelf->SimTop__DOT__axi_stall)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__reg2_value_mem 
            = vlSelf->SimTop__DOT__u_cpu__DOT__reg2_value_forwardb_ex;
    }
    if ((1U & (~ (IData)(vlSelf->SimTop__DOT__axi_stall)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__imm_ex = vlSelf->SimTop__DOT__u_cpu__DOT__imm_id;
    }
    if ((1U & (~ (IData)(vlSelf->SimTop__DOT__axi_stall)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__npc_op_mem 
            = vlSelf->SimTop__DOT__u_cpu__DOT__npc_op_ex;
    }
    if ((1U & (~ (IData)(vlSelf->SimTop__DOT__axi_stall)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__alu_only_imm_ex 
            = vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lui;
    }
    if ((1U & (~ (IData)(vlSelf->SimTop__DOT__axi_stall)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__pc_wb = vlSelf->SimTop__DOT__u_cpu__DOT__pc_mem;
    }
    if ((1U & (~ (IData)(vlSelf->SimTop__DOT__axi_stall)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__alu_pc_reg1_ex 
            = (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_auipc) 
                | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_jal)) 
               | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_jalr));
    }
    if ((1U & (~ (IData)(vlSelf->SimTop__DOT__axi_stall)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__alu_imm_reg2_ex 
            = ((((((((((((((((((((((((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_slli) 
                                       | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_slliw)) 
                                      | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_srli)) 
                                     | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_srliw)) 
                                    | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sd)) 
                                   | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sw)) 
                                  | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sh)) 
                                 | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sb)) 
                                | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_andi)) 
                               | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_addi)) 
                              | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_xori)) 
                             | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_ori)) 
                            | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_addiw)) 
                           | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_auipc)) 
                          | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lui)) 
                         | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lb)) 
                        | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lbu)) 
                       | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lhu)) 
                      | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lwu)) 
                     | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lw)) 
                    | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lh)) 
                   | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_ld)) 
                  | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_slti)) 
                 | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sltiu)) 
                | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_srai)) 
               | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sraiw));
    }
    if ((1U & (~ (IData)(vlSelf->SimTop__DOT__axi_stall)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__rs1_ex = (0x1fU 
                                                   & (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                                      >> 0xfU));
    }
    if ((1U & (~ (IData)(vlSelf->SimTop__DOT__axi_stall)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__rs2_mem = vlSelf->SimTop__DOT__u_cpu__DOT__rs2_ex;
    }
    if ((1U & (~ (IData)(vlSelf->SimTop__DOT__axi_stall)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__wen_wb = vlSelf->SimTop__DOT__u_cpu__DOT__wen_mem;
    }
    if ((1U & (~ (IData)(vlSelf->SimTop__DOT__axi_stall)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__rd_wb = vlSelf->SimTop__DOT__u_cpu__DOT__rd_mem;
    }
    if ((1U & (~ (IData)(vlSelf->SimTop__DOT__axi_stall)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__reg2_value_ex 
            = vlSelf->SimTop__DOT__u_cpu__DOT__reg2_value_id;
    }
    if ((1U & (~ (IData)(vlSelf->SimTop__DOT__axi_stall)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__reg1_value_ex 
            = vlSelf->SimTop__DOT__u_cpu__DOT__reg1_value_id;
    }
    if ((1U & (~ (IData)(vlSelf->SimTop__DOT__axi_stall)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__sext_read_mem_value_wb 
            = vlSelf->SimTop__DOT__u_cpu__DOT__sext_read_mem_value_mem;
    }
    if ((1U & (~ (IData)(vlSelf->SimTop__DOT__axi_stall)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__read_mem_en_wb 
            = vlSelf->SimTop__DOT__u_cpu__DOT__read_mem_en_mem;
    }
    if ((1U & (~ (IData)(vlSelf->SimTop__DOT__axi_stall)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_wb 
            = vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem;
    }
    vlSelf->SimTop__DOT__axi_rw__DOT__len = __Vdly__SimTop__DOT__axi_rw__DOT__len;
    if (__Vdlyvset__SimTop__DOT__u_cpu__DOT__rf__DOT__rf__v0) {
        vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[0U] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[1U] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[2U] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[3U] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[4U] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[5U] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[6U] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[7U] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[8U] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[9U] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[0xaU] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[0xbU] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[0xcU] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[0xdU] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[0xeU] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[0xfU] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[0x10U] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[0x11U] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[0x12U] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[0x13U] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[0x14U] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[0x15U] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[0x16U] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[0x17U] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[0x18U] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[0x19U] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[0x1aU] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[0x1bU] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[0x1cU] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[0x1dU] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[0x1eU] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[0x1fU] = 0ULL;
    }
    vlSelf->io_memAXI_0_aw_valid = (1U == (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__w_state));
    vlSelf->io_memAXI_0_w_valid = (2U == (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__w_state));
    vlSelf->io_memAXI_0_b_ready = (3U == (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__w_state));
    vlSelf->io_memAXI_0_ar_valid = (1U == (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__r_state));
    vlSelf->io_memAXI_0_r_ready = (2U == (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__r_state));
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__arbitrating__DOT__zza_pulse = 1U;
        __Vdly__SimTop__DOT__arbitrating__DOT__zza_count = 0U;
    } else if (vlSelf->SimTop__DOT__axi_rw__DOT__trans_done) {
        vlSelf->SimTop__DOT__arbitrating__DOT__zza_pulse = 0U;
        __Vdly__SimTop__DOT__arbitrating__DOT__zza_count = 1U;
    } else if (vlSelf->SimTop__DOT__arbitrating__DOT__zza_count) {
        __Vdly__SimTop__DOT__arbitrating__DOT__zza_count = 0U;
    } else {
        vlSelf->SimTop__DOT__arbitrating__DOT__zza_pulse = 1U;
    }
    if ((1U & (~ (IData)(vlSelf->SimTop__DOT__axi_stall)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__ebreak_mem 
            = vlSelf->SimTop__DOT__u_cpu__DOT__ebreak_ex;
    }
    if ((1U & (~ (IData)(vlSelf->SimTop__DOT__axi_stall)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__npc_mem = vlSelf->SimTop__DOT__u_cpu__DOT__npc_ex;
    }
    if ((1U & (~ (IData)(vlSelf->SimTop__DOT__axi_stall)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__pipeline_stall_mem 
            = vlSelf->SimTop__DOT__u_cpu__DOT__pipeline_stall_ex;
    }
    if ((1U & (~ (IData)(vlSelf->SimTop__DOT__axi_stall)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__branch_type_mem 
            = vlSelf->SimTop__DOT__u_cpu__DOT__branch_type_ex;
    }
    if ((1U & (~ (IData)(vlSelf->SimTop__DOT__axi_stall)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__npc_regimm_ex 
            = vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_jalr;
    }
    if ((1U & (~ (IData)(vlSelf->SimTop__DOT__axi_stall)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__mem_ctrl_ex 
            = vlSelf->SimTop__DOT__u_cpu__DOT__mem_ctrl_id;
    }
    if ((1U & (~ (IData)(vlSelf->SimTop__DOT__axi_stall)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__write_mem_en_mem 
            = vlSelf->SimTop__DOT__u_cpu__DOT__write_mem_en_ex;
    }
    if ((1U & (~ (IData)(vlSelf->SimTop__DOT__axi_stall)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__inst_mem = vlSelf->SimTop__DOT__u_cpu__DOT__inst_ex;
    }
    if ((1U & (~ (IData)(vlSelf->SimTop__DOT__axi_stall)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__npc_op_ex 
            = vlSelf->SimTop__DOT__u_cpu__DOT__npc_op_id;
    }
    if ((1U & (~ (IData)(vlSelf->SimTop__DOT__axi_stall)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__pc_mem = vlSelf->SimTop__DOT__u_cpu__DOT__pc_ex;
    }
    if ((1U & (~ (IData)(vlSelf->SimTop__DOT__axi_stall)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__rs2_ex = (0x1fU 
                                                   & (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                                      >> 0x14U));
    }
    if ((1U & (~ (IData)(vlSelf->SimTop__DOT__axi_stall)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__wen_mem = vlSelf->SimTop__DOT__u_cpu__DOT__wen_ex;
    }
    if ((1U & (~ (IData)(vlSelf->SimTop__DOT__axi_stall)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__rd_mem = vlSelf->SimTop__DOT__u_cpu__DOT__rd_ex;
    }
    if ((1U & (~ (IData)(vlSelf->SimTop__DOT__axi_stall)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__read_mem_en_mem 
            = vlSelf->SimTop__DOT__u_cpu__DOT__read_mem_en_ex;
    }
    vlSelf->SimTop__DOT__u_cpu__DOT__reg_write_value_wb 
        = ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__read_mem_en_wb)
            ? vlSelf->SimTop__DOT__u_cpu__DOT__sext_read_mem_value_wb
            : vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_wb);
    if (vlSelf->SimTop__DOT__u_cpu__DOT__wen_wb) {
        vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[vlSelf->SimTop__DOT__u_cpu__DOT__rd_wb] 
            = ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__read_mem_en_wb)
                ? vlSelf->SimTop__DOT__u_cpu__DOT__sext_read_mem_value_wb
                : vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_wb);
        vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[0U] = 0ULL;
    }
    if ((1U & (~ (IData)(vlSelf->SimTop__DOT__axi_stall)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem 
            = vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_ex;
    }
    vlSelf->SimTop__DOT__arbitrating__DOT__zza_count 
        = __Vdly__SimTop__DOT__arbitrating__DOT__zza_count;
    vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[0x1fU] 
        = vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf
        [0U];
    vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[0x1eU] 
        = vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf
        [1U];
    vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[0x1dU] 
        = vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf
        [2U];
    vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[0x1cU] 
        = vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf
        [3U];
    vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[0x1bU] 
        = vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf
        [4U];
    vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[0x1aU] 
        = vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf
        [5U];
    vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[0x19U] 
        = vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf
        [6U];
    vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[0x18U] 
        = vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf
        [7U];
    vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[0x17U] 
        = vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf
        [8U];
    vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[0x16U] 
        = vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf
        [9U];
    vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[0x15U] 
        = vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf
        [0xaU];
    vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[0x14U] 
        = vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf
        [0xbU];
    vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[0x13U] 
        = vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf
        [0xcU];
    vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[0x12U] 
        = vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf
        [0xdU];
    vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[0x11U] 
        = vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf
        [0xeU];
    vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[0x10U] 
        = vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf
        [0xfU];
    vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[0xfU] 
        = vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf
        [0x10U];
    vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[0xeU] 
        = vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf
        [0x11U];
    vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[0xdU] 
        = vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf
        [0x12U];
    vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[0xcU] 
        = vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf
        [0x13U];
    vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[0xbU] 
        = vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf
        [0x14U];
    vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[0xaU] 
        = vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf
        [0x15U];
    vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[9U] 
        = vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf
        [0x16U];
    vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[8U] 
        = vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf
        [0x17U];
    vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[7U] 
        = vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf
        [0x18U];
    vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[6U] 
        = vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf
        [0x19U];
    vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[5U] 
        = vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf
        [0x1aU];
    vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[4U] 
        = vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf
        [0x1bU];
    vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[3U] 
        = vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf
        [0x1cU];
    vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[2U] 
        = vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf
        [0x1dU];
    vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[1U] 
        = vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf
        [0x1eU];
    vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[0U] 
        = vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf
        [0x1fU];
    if ((1U & (~ (IData)(vlSelf->SimTop__DOT__axi_stall)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__ebreak_ex 
            = vlSelf->SimTop__DOT__u_cpu__DOT__ebreak_id;
    }
    if ((1U & (~ (IData)(vlSelf->SimTop__DOT__axi_stall)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__npc_ex = vlSelf->SimTop__DOT__u_cpu__DOT__npc;
    }
    if ((1U & (~ (IData)(vlSelf->SimTop__DOT__axi_stall)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__pipeline_stall_ex 
            = vlSelf->SimTop__DOT__u_cpu__DOT__pipeline_stall;
    }
    if ((1U & (~ (IData)(vlSelf->SimTop__DOT__axi_stall)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__branch_type_ex 
            = vlSelf->SimTop__DOT__u_cpu__DOT__branch_type_id;
    }
    vlSelf->SimTop__DOT__u_cpu__DOT__memory__DOT__value_writen_to_mem 
        = (((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__read_mem_en_wb) 
              & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__write_mem_en_mem)) 
             & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rs2_mem) 
                == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rd_wb))) 
            & (0U != (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rd_wb)))
            ? vlSelf->SimTop__DOT__u_cpu__DOT__reg_write_value_wb
            : vlSelf->SimTop__DOT__u_cpu__DOT__reg2_value_mem);
    if ((1U & (~ (IData)(vlSelf->SimTop__DOT__axi_stall)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__write_mem_en_ex 
            = ((~ ((IData)(vlSelf->reset) | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__pipeline_stall))) 
               & ((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sd) 
                    | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sb)) 
                   | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sw)) 
                  | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sh)));
    }
    if ((1U & (~ (IData)(vlSelf->SimTop__DOT__axi_stall)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__inst_ex = vlSelf->SimTop__DOT__u_cpu__DOT__inst_id;
    }
    if ((1U & (~ (IData)(vlSelf->SimTop__DOT__axi_stall)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__pc_ex = vlSelf->SimTop__DOT__u_cpu__DOT__pc_id;
    }
    if ((1U & (~ (IData)(vlSelf->SimTop__DOT__axi_stall)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__wen_ex = (
                                                   (~ 
                                                    ((IData)(vlSelf->reset) 
                                                     | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__pipeline_stall))) 
                                                   & ((((((((((((((((((((((((((((((((((((((((((((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_andi) 
                                                                                | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_addi)) 
                                                                                | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_xor)) 
                                                                                | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_xori)) 
                                                                                | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_ori)) 
                                                                                | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_addiw)) 
                                                                                | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_auipc)) 
                                                                                | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lui)) 
                                                                                | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_jal)) 
                                                                                | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_jalr)) 
                                                                                | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lb)) 
                                                                                | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lbu)) 
                                                                                | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lhu)) 
                                                                                | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lw)) 
                                                                                | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lwu)) 
                                                                                | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lh)) 
                                                                                | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_ld)) 
                                                                                | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_addw)) 
                                                                                | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_subw)) 
                                                                                | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_mulw)) 
                                                                               | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_mul)) 
                                                                              | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_divw)) 
                                                                             | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_divuw)) 
                                                                            | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_remw)) 
                                                                           | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_remuw)) 
                                                                          | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sub)) 
                                                                         | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_add)) 
                                                                        | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_slti)) 
                                                                       | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sltiu)) 
                                                                      | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_srai)) 
                                                                     | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sraiw)) 
                                                                    | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sra)) 
                                                                   | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sraw)) 
                                                                  | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_srl)) 
                                                                 | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_srlw)) 
                                                                | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sll)) 
                                                               | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sllw)) 
                                                              | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_and)) 
                                                             | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_or)) 
                                                            | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sltu)) 
                                                           | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_slt)) 
                                                          | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_slli)) 
                                                         | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_slliw)) 
                                                        | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_srli)) 
                                                       | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_srliw)) 
                                                      & (0x80000000ULL 
                                                         != vlSelf->SimTop__DOT__u_cpu__DOT__pc)));
    }
    if ((1U & (~ (IData)(vlSelf->SimTop__DOT__axi_stall)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__rd_ex = (0x1fU 
                                                  & (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                                     >> 7U));
    }
    vlSelf->SimTop__DOT__u_cpu__DOT__Forward_b = ((
                                                   ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__wen_mem) 
                                                    & (0U 
                                                       != (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rd_mem))) 
                                                   & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rs2_ex) 
                                                      == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rd_mem)))
                                                   ? 2U
                                                   : 
                                                  (((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__wen_wb) 
                                                      & (0U 
                                                         != (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rd_wb))) 
                                                     & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rs2_ex) 
                                                        == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rd_wb))) 
                                                    & (~ 
                                                       (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__wen_mem) 
                                                         & (0U 
                                                            != (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rd_mem))) 
                                                        & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rs2_ex) 
                                                           == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rd_mem)))))
                                                    ? 1U
                                                    : 0U));
    vlSelf->SimTop__DOT__u_cpu__DOT__Forward_a = ((
                                                   ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__wen_mem) 
                                                    & (0U 
                                                       != (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rd_mem))) 
                                                   & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rs1_ex) 
                                                      == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rd_mem)))
                                                   ? 2U
                                                   : 
                                                  (((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__wen_wb) 
                                                      & (0U 
                                                         != (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rd_wb))) 
                                                     & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rs1_ex) 
                                                        == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rd_wb))) 
                                                    & (~ 
                                                       (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__wen_mem) 
                                                         & (0U 
                                                            != (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rd_mem))) 
                                                        & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rs1_ex) 
                                                           == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rd_mem)))))
                                                    ? 1U
                                                    : 0U));
    vlSelf->SimTop__DOT__mem_valid = ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__read_mem_en_mem) 
                                      | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__write_mem_en_mem));
    if ((1U & (~ (IData)(vlSelf->SimTop__DOT__axi_stall)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__read_mem_en_ex 
            = (((((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lb) 
                    | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lbu)) 
                   | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lwu)) 
                  | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lw)) 
                 | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_ld)) 
                | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lh)) 
               | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lhu));
    }
    vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[0x1fU] 
        = vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr
        [0x1fU];
    vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[0x1eU] 
        = vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr
        [0x1eU];
    vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[0x1dU] 
        = vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr
        [0x1dU];
    vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[0x1cU] 
        = vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr
        [0x1cU];
    vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[0x1bU] 
        = vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr
        [0x1bU];
    vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[0x1aU] 
        = vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr
        [0x1aU];
    vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[0x19U] 
        = vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr
        [0x19U];
    vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[0x18U] 
        = vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr
        [0x18U];
    vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[0x17U] 
        = vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr
        [0x17U];
    vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[0x16U] 
        = vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr
        [0x16U];
    vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[0x15U] 
        = vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr
        [0x15U];
    vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[0x14U] 
        = vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr
        [0x14U];
    vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[0x13U] 
        = vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr
        [0x13U];
    vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[0x12U] 
        = vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr
        [0x12U];
    vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[0x11U] 
        = vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr
        [0x11U];
    vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[0x10U] 
        = vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr
        [0x10U];
    vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[0xfU] 
        = vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr
        [0xfU];
    vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[0xeU] 
        = vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr
        [0xeU];
    vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[0xdU] 
        = vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr
        [0xdU];
    vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[0xcU] 
        = vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr
        [0xcU];
    vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[0xbU] 
        = vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr
        [0xbU];
    vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[0xaU] 
        = vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr
        [0xaU];
    vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[9U] = 
        vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr
        [9U];
    vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[8U] = 
        vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr
        [8U];
    vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[7U] = 
        vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr
        [7U];
    vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[6U] = 
        vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr
        [6U];
    vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[5U] = 
        vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr
        [5U];
    vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[4U] = 
        vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr
        [4U];
    vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[3U] = 
        vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr
        [3U];
    vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[2U] = 
        vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr
        [2U];
    vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[1U] = 
        vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr
        [1U];
    vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[0U] = 
        vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr
        [0U];
    if ((8U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__mem_ctrl_mem))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__mem_write_mask 
            = ((4U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__mem_ctrl_mem))
                ? 0ULL : ((2U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__mem_ctrl_mem))
                           ? 0ULL : ((1U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__mem_ctrl_mem))
                                      ? 0ULL : 0xffffffffffffffffULL)));
        vlSelf->SimTop__DOT__mem_write_mask_axi = (
                                                   (4U 
                                                    & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__mem_ctrl_mem))
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__mem_ctrl_mem))
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__mem_ctrl_mem))
                                                      ? 0U
                                                      : 0xffU)));
    } else {
        vlSelf->SimTop__DOT__u_cpu__DOT__mem_write_mask 
            = ((4U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__mem_ctrl_mem))
                ? ((2U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__mem_ctrl_mem))
                    ? 0ULL : ((1U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__mem_ctrl_mem))
                               ? 0ULL : ((1U & (IData)(
                                                       (vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem 
                                                        >> 2U)))
                                          ? 0xffffffff00000000ULL
                                          : 0xffffffffULL)))
                : ((2U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__mem_ctrl_mem))
                    ? ((1U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__mem_ctrl_mem))
                        ? 0ULL : ((0U == (7U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                   ? 0xffffULL : ((2U 
                                                   == 
                                                   (7U 
                                                    & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                                   ? 0xffff0000ULL
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                                    ? 0xffff00000000ULL
                                                    : 
                                                   ((6U 
                                                     == 
                                                     (7U 
                                                      & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                                     ? 0xffff000000000000ULL
                                                     : 0xffffULL)))))
                    : ((1U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__mem_ctrl_mem))
                        ? ((0U == (7U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                            ? 0xffULL : ((1U == (7U 
                                                 & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                          ? 0xff00ULL
                                          : ((2U == 
                                              (7U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                              ? 0xff0000ULL
                                              : ((3U 
                                                  == 
                                                  (7U 
                                                   & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                                  ? 0xff000000ULL
                                                  : 
                                                 ((4U 
                                                   == 
                                                   (7U 
                                                    & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                                   ? 0xff00000000ULL
                                                   : 
                                                  ((5U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                                    ? 0xff0000000000ULL
                                                    : 
                                                   ((6U 
                                                     == 
                                                     (7U 
                                                      & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                                     ? 0xff000000000000ULL
                                                     : 
                                                    ((7U 
                                                      == 
                                                      (7U 
                                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                                      ? 0xff00000000000000ULL
                                                      : 0xffULL))))))))
                        : 0ULL)));
        vlSelf->SimTop__DOT__mem_write_mask_axi = (
                                                   (4U 
                                                    & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__mem_ctrl_mem))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__mem_ctrl_mem))
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__mem_ctrl_mem))
                                                      ? 0U
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem 
                                                                  >> 2U)))
                                                       ? 0xf0U
                                                       : 0xfU)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__mem_ctrl_mem))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__mem_ctrl_mem))
                                                      ? 0U
                                                      : 
                                                     ((0U 
                                                       == 
                                                       (7U 
                                                        & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                                       ? 3U
                                                       : 
                                                      ((2U 
                                                        == 
                                                        (7U 
                                                         & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                                        ? 0xcU
                                                        : 
                                                       ((4U 
                                                         == 
                                                         (7U 
                                                          & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                                         ? 0x30U
                                                         : 
                                                        ((6U 
                                                          == 
                                                          (7U 
                                                           & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                                          ? 0xc0U
                                                          : 0U)))))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__mem_ctrl_mem))
                                                      ? 
                                                     ((0U 
                                                       == 
                                                       (7U 
                                                        & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                                       ? 1U
                                                       : 
                                                      ((1U 
                                                        == 
                                                        (7U 
                                                         & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                                        ? 2U
                                                        : 
                                                       ((2U 
                                                         == 
                                                         (7U 
                                                          & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                                         ? 4U
                                                         : 
                                                        ((3U 
                                                          == 
                                                          (7U 
                                                           & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                                          ? 8U
                                                          : 
                                                         ((4U 
                                                           == 
                                                           (7U 
                                                            & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                                           ? 0x10U
                                                           : 
                                                          ((5U 
                                                            == 
                                                            (7U 
                                                             & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                                            ? 0x20U
                                                            : 
                                                           ((6U 
                                                             == 
                                                             (7U 
                                                              & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                                             ? 0x40U
                                                             : 
                                                            ((7U 
                                                              == 
                                                              (7U 
                                                               & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                                              ? 0x80U
                                                              : 0U))))))))
                                                      : 0U)));
    }
    __Vtemp404[0U] = (IData)(((0U == (7U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                               ? (QData)((IData)((0xffffU 
                                                  & (IData)(vlSelf->SimTop__DOT__mem_data_read))))
                               : ((2U == (7U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                   ? (QData)((IData)(
                                                     (0xffffU 
                                                      & (IData)(
                                                                (vlSelf->SimTop__DOT__mem_data_read 
                                                                 >> 0x10U)))))
                                   : ((4U == (7U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                       ? (QData)((IData)(
                                                         (0xffffU 
                                                          & (IData)(
                                                                    (vlSelf->SimTop__DOT__mem_data_read 
                                                                     >> 0x20U)))))
                                       : ((6U == (7U 
                                                  & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                           ? (QData)((IData)(
                                                             (0xffffU 
                                                              & (IData)(
                                                                        (vlSelf->SimTop__DOT__mem_data_read 
                                                                         >> 0x30U)))))
                                           : (QData)((IData)(
                                                             (0xffffU 
                                                              & (IData)(vlSelf->SimTop__DOT__mem_data_read)))))))));
    __Vtemp404[1U] = (IData)((((0U == (7U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                ? (QData)((IData)((0xffffU 
                                                   & (IData)(vlSelf->SimTop__DOT__mem_data_read))))
                                : ((2U == (7U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                    ? (QData)((IData)(
                                                      (0xffffU 
                                                       & (IData)(
                                                                 (vlSelf->SimTop__DOT__mem_data_read 
                                                                  >> 0x10U)))))
                                    : ((4U == (7U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                        ? (QData)((IData)(
                                                          (0xffffU 
                                                           & (IData)(
                                                                     (vlSelf->SimTop__DOT__mem_data_read 
                                                                      >> 0x20U)))))
                                        : ((6U == (7U 
                                                   & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                            ? (QData)((IData)(
                                                              (0xffffU 
                                                               & (IData)(
                                                                         (vlSelf->SimTop__DOT__mem_data_read 
                                                                          >> 0x30U)))))
                                            : (QData)((IData)(
                                                              (0xffffU 
                                                               & (IData)(vlSelf->SimTop__DOT__mem_data_read)))))))) 
                              >> 0x20U));
    __Vtemp407[4U] = (0x90U | (((IData)(((0U == (7U 
                                                 & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                          ? (QData)((IData)(
                                                            (0xffU 
                                                             & (IData)(vlSelf->SimTop__DOT__mem_data_read))))
                                          : ((1U == 
                                              (7U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                              ? (QData)((IData)(
                                                                (0xffU 
                                                                 & (IData)(
                                                                           (vlSelf->SimTop__DOT__mem_data_read 
                                                                            >> 8U)))))
                                              : ((2U 
                                                  == 
                                                  (7U 
                                                   & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                                  ? (QData)((IData)(
                                                                    (0xffU 
                                                                     & (IData)(
                                                                               (vlSelf->SimTop__DOT__mem_data_read 
                                                                                >> 0x10U)))))
                                                  : 
                                                 ((3U 
                                                   == 
                                                   (7U 
                                                    & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                                   ? (QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(
                                                                                (vlSelf->SimTop__DOT__mem_data_read 
                                                                                >> 0x18U)))))
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                                    ? (QData)((IData)(
                                                                      (0xffU 
                                                                       & (IData)(
                                                                                (vlSelf->SimTop__DOT__mem_data_read 
                                                                                >> 0x20U)))))
                                                    : 
                                                   ((5U 
                                                     == 
                                                     (7U 
                                                      & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                                     ? (QData)((IData)(
                                                                       (0xffU 
                                                                        & (IData)(
                                                                                (vlSelf->SimTop__DOT__mem_data_read 
                                                                                >> 0x28U)))))
                                                     : 
                                                    ((6U 
                                                      == 
                                                      (7U 
                                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                                      ? (QData)((IData)(
                                                                        (0xffU 
                                                                         & (IData)(
                                                                                (vlSelf->SimTop__DOT__mem_data_read 
                                                                                >> 0x30U)))))
                                                      : 
                                                     ((7U 
                                                       == 
                                                       (7U 
                                                        & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                                       ? (QData)((IData)(
                                                                         (0xffU 
                                                                          & (IData)(
                                                                                (vlSelf->SimTop__DOT__mem_data_read 
                                                                                >> 0x38U)))))
                                                       : (QData)((IData)(
                                                                         (0xffU 
                                                                          & (IData)(vlSelf->SimTop__DOT__mem_data_read))))))))))))) 
                                << 8U) | ((IData)((
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem 
                                                                >> 2U)))
                                                     ? (QData)((IData)(
                                                                       (vlSelf->SimTop__DOT__mem_data_read 
                                                                        >> 0x20U)))
                                                     : (QData)((IData)(vlSelf->SimTop__DOT__mem_data_read))) 
                                                   >> 0x20U)) 
                                          >> 0x1cU)));
    __Vtemp407[5U] = (((IData)(((0U == (7U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                 ? (QData)((IData)(
                                                   (0xffU 
                                                    & (IData)(vlSelf->SimTop__DOT__mem_data_read))))
                                 : ((1U == (7U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                     ? (QData)((IData)(
                                                       (0xffU 
                                                        & (IData)(
                                                                  (vlSelf->SimTop__DOT__mem_data_read 
                                                                   >> 8U)))))
                                     : ((2U == (7U 
                                                & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & (IData)(
                                                                      (vlSelf->SimTop__DOT__mem_data_read 
                                                                       >> 0x10U)))))
                                         : ((3U == 
                                             (7U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                             ? (QData)((IData)(
                                                               (0xffU 
                                                                & (IData)(
                                                                          (vlSelf->SimTop__DOT__mem_data_read 
                                                                           >> 0x18U)))))
                                             : ((4U 
                                                 == 
                                                 (7U 
                                                  & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(
                                                                              (vlSelf->SimTop__DOT__mem_data_read 
                                                                               >> 0x20U)))))
                                                 : 
                                                ((5U 
                                                  == 
                                                  (7U 
                                                   & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                                  ? (QData)((IData)(
                                                                    (0xffU 
                                                                     & (IData)(
                                                                               (vlSelf->SimTop__DOT__mem_data_read 
                                                                                >> 0x28U)))))
                                                  : 
                                                 ((6U 
                                                   == 
                                                   (7U 
                                                    & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                                   ? (QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(
                                                                                (vlSelf->SimTop__DOT__mem_data_read 
                                                                                >> 0x30U)))))
                                                   : 
                                                  ((7U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                                    ? (QData)((IData)(
                                                                      (0xffU 
                                                                       & (IData)(
                                                                                (vlSelf->SimTop__DOT__mem_data_read 
                                                                                >> 0x38U)))))
                                                    : (QData)((IData)(
                                                                      (0xffU 
                                                                       & (IData)(vlSelf->SimTop__DOT__mem_data_read))))))))))))) 
                       >> 0x18U) | ((IData)((((0U == 
                                               (7U 
                                                & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                               ? (QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->SimTop__DOT__mem_data_read))))
                                               : ((1U 
                                                   == 
                                                   (7U 
                                                    & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                                   ? (QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(
                                                                                (vlSelf->SimTop__DOT__mem_data_read 
                                                                                >> 8U)))))
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                                    ? (QData)((IData)(
                                                                      (0xffU 
                                                                       & (IData)(
                                                                                (vlSelf->SimTop__DOT__mem_data_read 
                                                                                >> 0x10U)))))
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (7U 
                                                      & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                                     ? (QData)((IData)(
                                                                       (0xffU 
                                                                        & (IData)(
                                                                                (vlSelf->SimTop__DOT__mem_data_read 
                                                                                >> 0x18U)))))
                                                     : 
                                                    ((4U 
                                                      == 
                                                      (7U 
                                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                                      ? (QData)((IData)(
                                                                        (0xffU 
                                                                         & (IData)(
                                                                                (vlSelf->SimTop__DOT__mem_data_read 
                                                                                >> 0x20U)))))
                                                      : 
                                                     ((5U 
                                                       == 
                                                       (7U 
                                                        & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                                       ? (QData)((IData)(
                                                                         (0xffU 
                                                                          & (IData)(
                                                                                (vlSelf->SimTop__DOT__mem_data_read 
                                                                                >> 0x28U)))))
                                                       : 
                                                      ((6U 
                                                        == 
                                                        (7U 
                                                         & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                                        ? (QData)((IData)(
                                                                          (0xffU 
                                                                           & (IData)(
                                                                                (vlSelf->SimTop__DOT__mem_data_read 
                                                                                >> 0x30U)))))
                                                        : 
                                                       ((7U 
                                                         == 
                                                         (7U 
                                                          & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                                         ? (QData)((IData)(
                                                                           (0xffU 
                                                                            & (IData)(
                                                                                (vlSelf->SimTop__DOT__mem_data_read 
                                                                                >> 0x38U)))))
                                                         : (QData)((IData)(
                                                                           (0xffU 
                                                                            & (IData)(vlSelf->SimTop__DOT__mem_data_read)))))))))))) 
                                             >> 0x20U)) 
                                    << 8U));
    __Vtemp407[6U] = ((IData)((((0U == (7U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                 ? (QData)((IData)(
                                                   (0xffU 
                                                    & (IData)(vlSelf->SimTop__DOT__mem_data_read))))
                                 : ((1U == (7U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                     ? (QData)((IData)(
                                                       (0xffU 
                                                        & (IData)(
                                                                  (vlSelf->SimTop__DOT__mem_data_read 
                                                                   >> 8U)))))
                                     : ((2U == (7U 
                                                & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & (IData)(
                                                                      (vlSelf->SimTop__DOT__mem_data_read 
                                                                       >> 0x10U)))))
                                         : ((3U == 
                                             (7U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                             ? (QData)((IData)(
                                                               (0xffU 
                                                                & (IData)(
                                                                          (vlSelf->SimTop__DOT__mem_data_read 
                                                                           >> 0x18U)))))
                                             : ((4U 
                                                 == 
                                                 (7U 
                                                  & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(
                                                                              (vlSelf->SimTop__DOT__mem_data_read 
                                                                               >> 0x20U)))))
                                                 : 
                                                ((5U 
                                                  == 
                                                  (7U 
                                                   & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                                  ? (QData)((IData)(
                                                                    (0xffU 
                                                                     & (IData)(
                                                                               (vlSelf->SimTop__DOT__mem_data_read 
                                                                                >> 0x28U)))))
                                                  : 
                                                 ((6U 
                                                   == 
                                                   (7U 
                                                    & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                                   ? (QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(
                                                                                (vlSelf->SimTop__DOT__mem_data_read 
                                                                                >> 0x30U)))))
                                                   : 
                                                  ((7U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                                    ? (QData)((IData)(
                                                                      (0xffU 
                                                                       & (IData)(
                                                                                (vlSelf->SimTop__DOT__mem_data_read 
                                                                                >> 0x38U)))))
                                                    : (QData)((IData)(
                                                                      (0xffU 
                                                                       & (IData)(vlSelf->SimTop__DOT__mem_data_read)))))))))))) 
                               >> 0x20U)) >> 0x18U);
    __Vtemp409[6U] = (0x500U | (((IData)(((0U == (7U 
                                                  & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                           ? (((- (QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->SimTop__DOT__mem_data_read 
                                                                              >> 7U)))))) 
                                               << 8U) 
                                              | (QData)((IData)(
                                                                (0xffU 
                                                                 & (IData)(vlSelf->SimTop__DOT__mem_data_read)))))
                                           : ((1U == 
                                               (7U 
                                                & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                               ? ((
                                                   (- (QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->SimTop__DOT__mem_data_read 
                                                                                >> 0xfU)))))) 
                                                   << 8U) 
                                                  | (QData)((IData)(
                                                                    (0xffU 
                                                                     & (IData)(
                                                                               (vlSelf->SimTop__DOT__mem_data_read 
                                                                                >> 8U))))))
                                               : ((2U 
                                                   == 
                                                   (7U 
                                                    & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                                   ? 
                                                  (((- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->SimTop__DOT__mem_data_read 
                                                                                >> 0x17U)))))) 
                                                    << 8U) 
                                                   | (QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(
                                                                                (vlSelf->SimTop__DOT__mem_data_read 
                                                                                >> 0x10U))))))
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->SimTop__DOT__mem_data_read 
                                                                                >> 0x1fU)))))) 
                                                     << 8U) 
                                                    | (QData)((IData)(
                                                                      (0xffU 
                                                                       & (IData)(
                                                                                (vlSelf->SimTop__DOT__mem_data_read 
                                                                                >> 0x18U))))))
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (7U 
                                                      & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                                     ? 
                                                    (((- (QData)((IData)(
                                                                         (1U 
                                                                          & (IData)(
                                                                                (vlSelf->SimTop__DOT__mem_data_read 
                                                                                >> 0x27U)))))) 
                                                      << 8U) 
                                                     | (QData)((IData)(
                                                                       (0xffU 
                                                                        & (IData)(
                                                                                (vlSelf->SimTop__DOT__mem_data_read 
                                                                                >> 0x20U))))))
                                                     : 
                                                    ((5U 
                                                      == 
                                                      (7U 
                                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                                      ? 
                                                     (((- (QData)((IData)(
                                                                          (1U 
                                                                           & (IData)(
                                                                                (vlSelf->SimTop__DOT__mem_data_read 
                                                                                >> 0x2fU)))))) 
                                                       << 8U) 
                                                      | (QData)((IData)(
                                                                        (0xffU 
                                                                         & (IData)(
                                                                                (vlSelf->SimTop__DOT__mem_data_read 
                                                                                >> 0x28U))))))
                                                      : 
                                                     ((6U 
                                                       == 
                                                       (7U 
                                                        & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                                       ? 
                                                      (((- (QData)((IData)(
                                                                           (1U 
                                                                            & (IData)(
                                                                                (vlSelf->SimTop__DOT__mem_data_read 
                                                                                >> 0x37U)))))) 
                                                        << 8U) 
                                                       | (QData)((IData)(
                                                                         (0xffU 
                                                                          & (IData)(
                                                                                (vlSelf->SimTop__DOT__mem_data_read 
                                                                                >> 0x30U))))))
                                                       : 
                                                      ((7U 
                                                        == 
                                                        (7U 
                                                         & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                                        ? 
                                                       (((- (QData)((IData)(
                                                                            (1U 
                                                                             & (IData)(
                                                                                (vlSelf->SimTop__DOT__mem_data_read 
                                                                                >> 0x3fU)))))) 
                                                         << 8U) 
                                                        | (QData)((IData)(
                                                                          (0xffU 
                                                                           & (IData)(
                                                                                (vlSelf->SimTop__DOT__mem_data_read 
                                                                                >> 0x38U))))))
                                                        : 
                                                       (((- (QData)((IData)(
                                                                            (1U 
                                                                             & (IData)(
                                                                                (vlSelf->SimTop__DOT__mem_data_read 
                                                                                >> 7U)))))) 
                                                         << 8U) 
                                                        | (QData)((IData)(
                                                                          (0xffU 
                                                                           & (IData)(vlSelf->SimTop__DOT__mem_data_read)))))))))))))) 
                                 << 0xcU) | __Vtemp407[6U]));
    __Vtemp409[7U] = (((IData)(((0U == (7U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                 ? (((- (QData)((IData)(
                                                        (1U 
                                                         & (IData)(
                                                                   (vlSelf->SimTop__DOT__mem_data_read 
                                                                    >> 7U)))))) 
                                     << 8U) | (QData)((IData)(
                                                              (0xffU 
                                                               & (IData)(vlSelf->SimTop__DOT__mem_data_read)))))
                                 : ((1U == (7U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                     ? (((- (QData)((IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelf->SimTop__DOT__mem_data_read 
                                                                        >> 0xfU)))))) 
                                         << 8U) | (QData)((IData)(
                                                                  (0xffU 
                                                                   & (IData)(
                                                                             (vlSelf->SimTop__DOT__mem_data_read 
                                                                              >> 8U))))))
                                     : ((2U == (7U 
                                                & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                         ? (((- (QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->SimTop__DOT__mem_data_read 
                                                                            >> 0x17U)))))) 
                                             << 8U) 
                                            | (QData)((IData)(
                                                              (0xffU 
                                                               & (IData)(
                                                                         (vlSelf->SimTop__DOT__mem_data_read 
                                                                          >> 0x10U))))))
                                         : ((3U == 
                                             (7U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                             ? (((- (QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->SimTop__DOT__mem_data_read 
                                                                                >> 0x1fU)))))) 
                                                 << 8U) 
                                                | (QData)((IData)(
                                                                  (0xffU 
                                                                   & (IData)(
                                                                             (vlSelf->SimTop__DOT__mem_data_read 
                                                                              >> 0x18U))))))
                                             : ((4U 
                                                 == 
                                                 (7U 
                                                  & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                                 ? 
                                                (((- (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->SimTop__DOT__mem_data_read 
                                                                                >> 0x27U)))))) 
                                                  << 8U) 
                                                 | (QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(
                                                                              (vlSelf->SimTop__DOT__mem_data_read 
                                                                               >> 0x20U))))))
                                                 : 
                                                ((5U 
                                                  == 
                                                  (7U 
                                                   & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                                  ? 
                                                 (((- (QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->SimTop__DOT__mem_data_read 
                                                                                >> 0x2fU)))))) 
                                                   << 8U) 
                                                  | (QData)((IData)(
                                                                    (0xffU 
                                                                     & (IData)(
                                                                               (vlSelf->SimTop__DOT__mem_data_read 
                                                                                >> 0x28U))))))
                                                  : 
                                                 ((6U 
                                                   == 
                                                   (7U 
                                                    & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                                   ? 
                                                  (((- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->SimTop__DOT__mem_data_read 
                                                                                >> 0x37U)))))) 
                                                    << 8U) 
                                                   | (QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(
                                                                                (vlSelf->SimTop__DOT__mem_data_read 
                                                                                >> 0x30U))))))
                                                   : 
                                                  ((7U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->SimTop__DOT__mem_data_read 
                                                                                >> 0x3fU)))))) 
                                                     << 8U) 
                                                    | (QData)((IData)(
                                                                      (0xffU 
                                                                       & (IData)(
                                                                                (vlSelf->SimTop__DOT__mem_data_read 
                                                                                >> 0x38U))))))
                                                    : 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->SimTop__DOT__mem_data_read 
                                                                                >> 7U)))))) 
                                                     << 8U) 
                                                    | (QData)((IData)(
                                                                      (0xffU 
                                                                       & (IData)(vlSelf->SimTop__DOT__mem_data_read)))))))))))))) 
                       >> 0x14U) | ((IData)((((0U == 
                                               (7U 
                                                & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                               ? ((
                                                   (- (QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->SimTop__DOT__mem_data_read 
                                                                                >> 7U)))))) 
                                                   << 8U) 
                                                  | (QData)((IData)(
                                                                    (0xffU 
                                                                     & (IData)(vlSelf->SimTop__DOT__mem_data_read)))))
                                               : ((1U 
                                                   == 
                                                   (7U 
                                                    & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                                   ? 
                                                  (((- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->SimTop__DOT__mem_data_read 
                                                                                >> 0xfU)))))) 
                                                    << 8U) 
                                                   | (QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(
                                                                                (vlSelf->SimTop__DOT__mem_data_read 
                                                                                >> 8U))))))
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->SimTop__DOT__mem_data_read 
                                                                                >> 0x17U)))))) 
                                                     << 8U) 
                                                    | (QData)((IData)(
                                                                      (0xffU 
                                                                       & (IData)(
                                                                                (vlSelf->SimTop__DOT__mem_data_read 
                                                                                >> 0x10U))))))
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (7U 
                                                      & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                                     ? 
                                                    (((- (QData)((IData)(
                                                                         (1U 
                                                                          & (IData)(
                                                                                (vlSelf->SimTop__DOT__mem_data_read 
                                                                                >> 0x1fU)))))) 
                                                      << 8U) 
                                                     | (QData)((IData)(
                                                                       (0xffU 
                                                                        & (IData)(
                                                                                (vlSelf->SimTop__DOT__mem_data_read 
                                                                                >> 0x18U))))))
                                                     : 
                                                    ((4U 
                                                      == 
                                                      (7U 
                                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                                      ? 
                                                     (((- (QData)((IData)(
                                                                          (1U 
                                                                           & (IData)(
                                                                                (vlSelf->SimTop__DOT__mem_data_read 
                                                                                >> 0x27U)))))) 
                                                       << 8U) 
                                                      | (QData)((IData)(
                                                                        (0xffU 
                                                                         & (IData)(
                                                                                (vlSelf->SimTop__DOT__mem_data_read 
                                                                                >> 0x20U))))))
                                                      : 
                                                     ((5U 
                                                       == 
                                                       (7U 
                                                        & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                                       ? 
                                                      (((- (QData)((IData)(
                                                                           (1U 
                                                                            & (IData)(
                                                                                (vlSelf->SimTop__DOT__mem_data_read 
                                                                                >> 0x2fU)))))) 
                                                        << 8U) 
                                                       | (QData)((IData)(
                                                                         (0xffU 
                                                                          & (IData)(
                                                                                (vlSelf->SimTop__DOT__mem_data_read 
                                                                                >> 0x28U))))))
                                                       : 
                                                      ((6U 
                                                        == 
                                                        (7U 
                                                         & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                                        ? 
                                                       (((- (QData)((IData)(
                                                                            (1U 
                                                                             & (IData)(
                                                                                (vlSelf->SimTop__DOT__mem_data_read 
                                                                                >> 0x37U)))))) 
                                                         << 8U) 
                                                        | (QData)((IData)(
                                                                          (0xffU 
                                                                           & (IData)(
                                                                                (vlSelf->SimTop__DOT__mem_data_read 
                                                                                >> 0x30U))))))
                                                        : 
                                                       ((7U 
                                                         == 
                                                         (7U 
                                                          & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                                         ? 
                                                        (((- (QData)((IData)(
                                                                             (1U 
                                                                              & (IData)(
                                                                                (vlSelf->SimTop__DOT__mem_data_read 
                                                                                >> 0x3fU)))))) 
                                                          << 8U) 
                                                         | (QData)((IData)(
                                                                           (0xffU 
                                                                            & (IData)(
                                                                                (vlSelf->SimTop__DOT__mem_data_read 
                                                                                >> 0x38U))))))
                                                         : 
                                                        (((- (QData)((IData)(
                                                                             (1U 
                                                                              & (IData)(
                                                                                (vlSelf->SimTop__DOT__mem_data_read 
                                                                                >> 7U)))))) 
                                                          << 8U) 
                                                         | (QData)((IData)(
                                                                           (0xffU 
                                                                            & (IData)(vlSelf->SimTop__DOT__mem_data_read))))))))))))) 
                                             >> 0x20U)) 
                                    << 0xcU));
    __Vtemp409[8U] = ((IData)((((0U == (7U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                 ? (((- (QData)((IData)(
                                                        (1U 
                                                         & (IData)(
                                                                   (vlSelf->SimTop__DOT__mem_data_read 
                                                                    >> 7U)))))) 
                                     << 8U) | (QData)((IData)(
                                                              (0xffU 
                                                               & (IData)(vlSelf->SimTop__DOT__mem_data_read)))))
                                 : ((1U == (7U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                     ? (((- (QData)((IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelf->SimTop__DOT__mem_data_read 
                                                                        >> 0xfU)))))) 
                                         << 8U) | (QData)((IData)(
                                                                  (0xffU 
                                                                   & (IData)(
                                                                             (vlSelf->SimTop__DOT__mem_data_read 
                                                                              >> 8U))))))
                                     : ((2U == (7U 
                                                & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                         ? (((- (QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelf->SimTop__DOT__mem_data_read 
                                                                            >> 0x17U)))))) 
                                             << 8U) 
                                            | (QData)((IData)(
                                                              (0xffU 
                                                               & (IData)(
                                                                         (vlSelf->SimTop__DOT__mem_data_read 
                                                                          >> 0x10U))))))
                                         : ((3U == 
                                             (7U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                             ? (((- (QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->SimTop__DOT__mem_data_read 
                                                                                >> 0x1fU)))))) 
                                                 << 8U) 
                                                | (QData)((IData)(
                                                                  (0xffU 
                                                                   & (IData)(
                                                                             (vlSelf->SimTop__DOT__mem_data_read 
                                                                              >> 0x18U))))))
                                             : ((4U 
                                                 == 
                                                 (7U 
                                                  & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                                 ? 
                                                (((- (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->SimTop__DOT__mem_data_read 
                                                                                >> 0x27U)))))) 
                                                  << 8U) 
                                                 | (QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(
                                                                              (vlSelf->SimTop__DOT__mem_data_read 
                                                                               >> 0x20U))))))
                                                 : 
                                                ((5U 
                                                  == 
                                                  (7U 
                                                   & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                                  ? 
                                                 (((- (QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->SimTop__DOT__mem_data_read 
                                                                                >> 0x2fU)))))) 
                                                   << 8U) 
                                                  | (QData)((IData)(
                                                                    (0xffU 
                                                                     & (IData)(
                                                                               (vlSelf->SimTop__DOT__mem_data_read 
                                                                                >> 0x28U))))))
                                                  : 
                                                 ((6U 
                                                   == 
                                                   (7U 
                                                    & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                                   ? 
                                                  (((- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->SimTop__DOT__mem_data_read 
                                                                                >> 0x37U)))))) 
                                                    << 8U) 
                                                   | (QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(
                                                                                (vlSelf->SimTop__DOT__mem_data_read 
                                                                                >> 0x30U))))))
                                                   : 
                                                  ((7U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->SimTop__DOT__mem_data_read 
                                                                                >> 0x3fU)))))) 
                                                     << 8U) 
                                                    | (QData)((IData)(
                                                                      (0xffU 
                                                                       & (IData)(
                                                                                (vlSelf->SimTop__DOT__mem_data_read 
                                                                                >> 0x38U))))))
                                                    : 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->SimTop__DOT__mem_data_read 
                                                                                >> 7U)))))) 
                                                     << 8U) 
                                                    | (QData)((IData)(
                                                                      (0xffU 
                                                                       & (IData)(vlSelf->SimTop__DOT__mem_data_read))))))))))))) 
                               >> 0x20U)) >> 0x14U);
    __Vtemp413[0xbU] = (((IData)(((1U & (IData)((vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem 
                                                 >> 2U)))
                                   ? (((QData)((IData)(
                                                       (- (IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->SimTop__DOT__mem_data_read 
                                                                              >> 0x3fU))))))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   (vlSelf->SimTop__DOT__mem_data_read 
                                                                    >> 0x20U))))
                                   : (((QData)((IData)(
                                                       (- (IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->SimTop__DOT__mem_data_read 
                                                                              >> 0x1fU))))))) 
                                       << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__mem_data_read))))) 
                         >> 0xcU) | ((IData)((((1U 
                                                & (IData)(
                                                          (vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem 
                                                           >> 2U)))
                                                ? (
                                                   ((QData)((IData)(
                                                                    (- (IData)(
                                                                               (1U 
                                                                                & (IData)(
                                                                                (vlSelf->SimTop__DOT__mem_data_read 
                                                                                >> 0x3fU))))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     (vlSelf->SimTop__DOT__mem_data_read 
                                                                      >> 0x20U))))
                                                : (
                                                   ((QData)((IData)(
                                                                    (- (IData)(
                                                                               (1U 
                                                                                & (IData)(
                                                                                (vlSelf->SimTop__DOT__mem_data_read 
                                                                                >> 0x1fU))))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->SimTop__DOT__mem_data_read)))) 
                                              >> 0x20U)) 
                                     << 0x14U));
    __Vtemp415[0xcU] = (0x400000U | (((IData)(((0U 
                                                == 
                                                (7U 
                                                 & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                                ? (
                                                   ((- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->SimTop__DOT__mem_data_read 
                                                                                >> 0xfU)))))) 
                                                    << 0x10U) 
                                                   | (QData)((IData)(
                                                                     (0xffffU 
                                                                      & (IData)(vlSelf->SimTop__DOT__mem_data_read)))))
                                                : (
                                                   (2U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->SimTop__DOT__mem_data_read 
                                                                                >> 0x1fU)))))) 
                                                     << 0x10U) 
                                                    | (QData)((IData)(
                                                                      (0xffffU 
                                                                       & (IData)(
                                                                                (vlSelf->SimTop__DOT__mem_data_read 
                                                                                >> 0x10U))))))
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (7U 
                                                      & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                                     ? 
                                                    (((- (QData)((IData)(
                                                                         (1U 
                                                                          & (IData)(
                                                                                (vlSelf->SimTop__DOT__mem_data_read 
                                                                                >> 0x2fU)))))) 
                                                      << 0x10U) 
                                                     | (QData)((IData)(
                                                                       (0xffffU 
                                                                        & (IData)(
                                                                                (vlSelf->SimTop__DOT__mem_data_read 
                                                                                >> 0x20U))))))
                                                     : 
                                                    ((6U 
                                                      == 
                                                      (7U 
                                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                                      ? 
                                                     (((- (QData)((IData)(
                                                                          (1U 
                                                                           & (IData)(
                                                                                (vlSelf->SimTop__DOT__mem_data_read 
                                                                                >> 0x3fU)))))) 
                                                       << 0x10U) 
                                                      | (QData)((IData)(
                                                                        (0xffffU 
                                                                         & (IData)(
                                                                                (vlSelf->SimTop__DOT__mem_data_read 
                                                                                >> 0x30U))))))
                                                      : 
                                                     (((- (QData)((IData)(
                                                                          (1U 
                                                                           & (IData)(
                                                                                (vlSelf->SimTop__DOT__mem_data_read 
                                                                                >> 0xfU)))))) 
                                                       << 0x10U) 
                                                      | (QData)((IData)(
                                                                        (0xffffU 
                                                                         & (IData)(vlSelf->SimTop__DOT__mem_data_read)))))))))) 
                                      << 0x18U) | ((IData)(
                                                           (((1U 
                                                              & (IData)(
                                                                        (vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem 
                                                                         >> 2U)))
                                                              ? 
                                                             (((QData)((IData)(
                                                                               (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->SimTop__DOT__mem_data_read 
                                                                                >> 0x3fU))))))) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                (vlSelf->SimTop__DOT__mem_data_read 
                                                                                >> 0x20U))))
                                                              : 
                                                             (((QData)((IData)(
                                                                               (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->SimTop__DOT__mem_data_read 
                                                                                >> 0x1fU))))))) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(vlSelf->SimTop__DOT__mem_data_read)))) 
                                                            >> 0x20U)) 
                                                   >> 0xcU)));
    __Vtemp415[0xdU] = (((IData)(((0U == (7U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                   ? (((- (QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->SimTop__DOT__mem_data_read 
                                                                      >> 0xfU)))))) 
                                       << 0x10U) | (QData)((IData)(
                                                                   (0xffffU 
                                                                    & (IData)(vlSelf->SimTop__DOT__mem_data_read)))))
                                   : ((2U == (7U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                       ? (((- (QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->SimTop__DOT__mem_data_read 
                                                                          >> 0x1fU)))))) 
                                           << 0x10U) 
                                          | (QData)((IData)(
                                                            (0xffffU 
                                                             & (IData)(
                                                                       (vlSelf->SimTop__DOT__mem_data_read 
                                                                        >> 0x10U))))))
                                       : ((4U == (7U 
                                                  & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                           ? (((- (QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->SimTop__DOT__mem_data_read 
                                                                              >> 0x2fU)))))) 
                                               << 0x10U) 
                                              | (QData)((IData)(
                                                                (0xffffU 
                                                                 & (IData)(
                                                                           (vlSelf->SimTop__DOT__mem_data_read 
                                                                            >> 0x20U))))))
                                           : ((6U == 
                                               (7U 
                                                & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                               ? ((
                                                   (- (QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->SimTop__DOT__mem_data_read 
                                                                                >> 0x3fU)))))) 
                                                   << 0x10U) 
                                                  | (QData)((IData)(
                                                                    (0xffffU 
                                                                     & (IData)(
                                                                               (vlSelf->SimTop__DOT__mem_data_read 
                                                                                >> 0x30U))))))
                                               : ((
                                                   (- (QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->SimTop__DOT__mem_data_read 
                                                                                >> 0xfU)))))) 
                                                   << 0x10U) 
                                                  | (QData)((IData)(
                                                                    (0xffffU 
                                                                     & (IData)(vlSelf->SimTop__DOT__mem_data_read)))))))))) 
                         >> 8U) | ((IData)((((0U == 
                                              (7U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                              ? (((- (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->SimTop__DOT__mem_data_read 
                                                                                >> 0xfU)))))) 
                                                  << 0x10U) 
                                                 | (QData)((IData)(
                                                                   (0xffffU 
                                                                    & (IData)(vlSelf->SimTop__DOT__mem_data_read)))))
                                              : ((2U 
                                                  == 
                                                  (7U 
                                                   & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                                  ? 
                                                 (((- (QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->SimTop__DOT__mem_data_read 
                                                                                >> 0x1fU)))))) 
                                                   << 0x10U) 
                                                  | (QData)((IData)(
                                                                    (0xffffU 
                                                                     & (IData)(
                                                                               (vlSelf->SimTop__DOT__mem_data_read 
                                                                                >> 0x10U))))))
                                                  : 
                                                 ((4U 
                                                   == 
                                                   (7U 
                                                    & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                                   ? 
                                                  (((- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->SimTop__DOT__mem_data_read 
                                                                                >> 0x2fU)))))) 
                                                    << 0x10U) 
                                                   | (QData)((IData)(
                                                                     (0xffffU 
                                                                      & (IData)(
                                                                                (vlSelf->SimTop__DOT__mem_data_read 
                                                                                >> 0x20U))))))
                                                   : 
                                                  ((6U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->SimTop__DOT__mem_data_read 
                                                                                >> 0x3fU)))))) 
                                                     << 0x10U) 
                                                    | (QData)((IData)(
                                                                      (0xffffU 
                                                                       & (IData)(
                                                                                (vlSelf->SimTop__DOT__mem_data_read 
                                                                                >> 0x30U))))))
                                                    : 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->SimTop__DOT__mem_data_read 
                                                                                >> 0xfU)))))) 
                                                     << 0x10U) 
                                                    | (QData)((IData)(
                                                                      (0xffffU 
                                                                       & (IData)(vlSelf->SimTop__DOT__mem_data_read))))))))) 
                                            >> 0x20U)) 
                                   << 0x18U));
    __Vtemp415[0xeU] = ((IData)((((0U == (7U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                   ? (((- (QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (vlSelf->SimTop__DOT__mem_data_read 
                                                                      >> 0xfU)))))) 
                                       << 0x10U) | (QData)((IData)(
                                                                   (0xffffU 
                                                                    & (IData)(vlSelf->SimTop__DOT__mem_data_read)))))
                                   : ((2U == (7U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                       ? (((- (QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->SimTop__DOT__mem_data_read 
                                                                          >> 0x1fU)))))) 
                                           << 0x10U) 
                                          | (QData)((IData)(
                                                            (0xffffU 
                                                             & (IData)(
                                                                       (vlSelf->SimTop__DOT__mem_data_read 
                                                                        >> 0x10U))))))
                                       : ((4U == (7U 
                                                  & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                           ? (((- (QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->SimTop__DOT__mem_data_read 
                                                                              >> 0x2fU)))))) 
                                               << 0x10U) 
                                              | (QData)((IData)(
                                                                (0xffffU 
                                                                 & (IData)(
                                                                           (vlSelf->SimTop__DOT__mem_data_read 
                                                                            >> 0x20U))))))
                                           : ((6U == 
                                               (7U 
                                                & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                               ? ((
                                                   (- (QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->SimTop__DOT__mem_data_read 
                                                                                >> 0x3fU)))))) 
                                                   << 0x10U) 
                                                  | (QData)((IData)(
                                                                    (0xffffU 
                                                                     & (IData)(
                                                                               (vlSelf->SimTop__DOT__mem_data_read 
                                                                                >> 0x30U))))))
                                               : ((
                                                   (- (QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->SimTop__DOT__mem_data_read 
                                                                                >> 0xfU)))))) 
                                                   << 0x10U) 
                                                  | (QData)((IData)(
                                                                    (0xffffU 
                                                                     & (IData)(vlSelf->SimTop__DOT__mem_data_read))))))))) 
                                 >> 0x20U)) >> 8U);
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4[0U] 
        = __Vtemp404[0U];
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4[1U] 
        = __Vtemp404[1U];
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4[2U] 
        = (7U | ((IData)(((1U & (IData)((vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem 
                                         >> 2U))) ? (QData)((IData)(
                                                                    (vlSelf->SimTop__DOT__mem_data_read 
                                                                     >> 0x20U)))
                           : (QData)((IData)(vlSelf->SimTop__DOT__mem_data_read)))) 
                 << 4U));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4[3U] 
        = (((IData)(((1U & (IData)((vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem 
                                    >> 2U))) ? (QData)((IData)(
                                                               (vlSelf->SimTop__DOT__mem_data_read 
                                                                >> 0x20U)))
                      : (QData)((IData)(vlSelf->SimTop__DOT__mem_data_read)))) 
            >> 0x1cU) | ((IData)((((1U & (IData)((vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem 
                                                  >> 2U)))
                                    ? (QData)((IData)(
                                                      (vlSelf->SimTop__DOT__mem_data_read 
                                                       >> 0x20U)))
                                    : (QData)((IData)(vlSelf->SimTop__DOT__mem_data_read))) 
                                  >> 0x20U)) << 4U));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4[4U] 
        = __Vtemp407[4U];
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4[5U] 
        = __Vtemp407[5U];
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4[6U] 
        = __Vtemp409[6U];
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4[7U] 
        = __Vtemp409[7U];
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4[8U] 
        = (0x1000U | (((IData)(vlSelf->SimTop__DOT__mem_data_read) 
                       << 0x10U) | __Vtemp409[8U]));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4[9U] 
        = (((IData)(vlSelf->SimTop__DOT__mem_data_read) 
            >> 0x10U) | ((IData)((vlSelf->SimTop__DOT__mem_data_read 
                                  >> 0x20U)) << 0x10U));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4[0xaU] 
        = (0x80000U | (((IData)(((1U & (IData)((vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem 
                                                >> 2U)))
                                  ? (((QData)((IData)(
                                                      (- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->SimTop__DOT__mem_data_read 
                                                                             >> 0x3fU))))))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  (vlSelf->SimTop__DOT__mem_data_read 
                                                                   >> 0x20U))))
                                  : (((QData)((IData)(
                                                      (- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->SimTop__DOT__mem_data_read 
                                                                             >> 0x1fU))))))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__mem_data_read))))) 
                        << 0x14U) | ((IData)((vlSelf->SimTop__DOT__mem_data_read 
                                              >> 0x20U)) 
                                     >> 0x10U)));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4[0xbU] 
        = __Vtemp413[0xbU];
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4[0xcU] 
        = __Vtemp415[0xcU];
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4[0xdU] 
        = __Vtemp415[0xdU];
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4[0xeU] 
        = (0x2000000U | __Vtemp415[0xeU]);
    VL_EXTEND_WQ(66,64, __Vtemp417, vlSelf->SimTop__DOT__u_cpu__DOT__reg2_value_ex);
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__forward_b_mux____pinNumber4[0U] 
        = (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__reg_write_value_wb);
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__forward_b_mux____pinNumber4[1U] 
        = (IData)((vlSelf->SimTop__DOT__u_cpu__DOT__reg_write_value_wb 
                   >> 0x20U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__forward_b_mux____pinNumber4[2U] 
        = (1U | ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem) 
                 << 2U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__forward_b_mux____pinNumber4[3U] 
        = (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem) 
            >> 0x1eU) | ((IData)((vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem 
                                  >> 0x20U)) << 2U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__forward_b_mux____pinNumber4[4U] 
        = (8U | ((__Vtemp417[0U] << 4U) | ((IData)(
                                                   (vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem 
                                                    >> 0x20U)) 
                                           >> 0x1eU)));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__forward_b_mux____pinNumber4[5U] 
        = ((__Vtemp417[0U] >> 0x1cU) | (__Vtemp417[1U] 
                                        << 4U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__forward_b_mux____pinNumber4[6U] 
        = ((__Vtemp417[1U] >> 0x1cU) | (__Vtemp417[2U] 
                                        << 4U));
    VL_EXTEND_WQ(66,64, __Vtemp422, vlSelf->SimTop__DOT__u_cpu__DOT__reg1_value_ex);
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__forward_a_mux____pinNumber4[0U] 
        = (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__reg_write_value_wb);
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__forward_a_mux____pinNumber4[1U] 
        = (IData)((vlSelf->SimTop__DOT__u_cpu__DOT__reg_write_value_wb 
                   >> 0x20U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__forward_a_mux____pinNumber4[2U] 
        = (1U | ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem) 
                 << 2U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__forward_a_mux____pinNumber4[3U] 
        = (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem) 
            >> 0x1eU) | ((IData)((vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem 
                                  >> 0x20U)) << 2U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__forward_a_mux____pinNumber4[4U] 
        = (8U | ((__Vtemp422[0U] << 4U) | ((IData)(
                                                   (vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem 
                                                    >> 0x20U)) 
                                           >> 0x1eU)));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__forward_a_mux____pinNumber4[5U] 
        = ((__Vtemp422[0U] >> 0x1cU) | (__Vtemp422[1U] 
                                        << 4U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__forward_a_mux____pinNumber4[6U] 
        = ((__Vtemp422[1U] >> 0x1cU) | (__Vtemp422[2U] 
                                        << 4U));
    vlSelf->SimTop__DOT__u_cpu__DOT__reg2_to_mem_forward 
        = ((8U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__mem_ctrl_mem))
            ? vlSelf->SimTop__DOT__u_cpu__DOT__memory__DOT__value_writen_to_mem
            : ((4U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__mem_ctrl_mem))
                ? ((2U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__mem_ctrl_mem))
                    ? vlSelf->SimTop__DOT__u_cpu__DOT__memory__DOT__value_writen_to_mem
                    : ((1U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__mem_ctrl_mem))
                        ? vlSelf->SimTop__DOT__u_cpu__DOT__memory__DOT__value_writen_to_mem
                        : ((1U & (IData)((vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem 
                                          >> 2U))) ? 
                           (vlSelf->SimTop__DOT__u_cpu__DOT__memory__DOT__value_writen_to_mem 
                            << 0x20U) : vlSelf->SimTop__DOT__u_cpu__DOT__memory__DOT__value_writen_to_mem)))
                : ((2U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__mem_ctrl_mem))
                    ? ((1U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__mem_ctrl_mem))
                        ? vlSelf->SimTop__DOT__u_cpu__DOT__memory__DOT__value_writen_to_mem
                        : ((0U == (7U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                            ? vlSelf->SimTop__DOT__u_cpu__DOT__memory__DOT__value_writen_to_mem
                            : ((2U == (7U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                ? (vlSelf->SimTop__DOT__u_cpu__DOT__memory__DOT__value_writen_to_mem 
                                   << 0x10U) : ((4U 
                                                 == 
                                                 (7U 
                                                  & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                                 ? 
                                                (vlSelf->SimTop__DOT__u_cpu__DOT__memory__DOT__value_writen_to_mem 
                                                 << 0x20U)
                                                 : 
                                                ((6U 
                                                  == 
                                                  (7U 
                                                   & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                                  ? 
                                                 (vlSelf->SimTop__DOT__u_cpu__DOT__memory__DOT__value_writen_to_mem 
                                                  << 0x30U)
                                                  : vlSelf->SimTop__DOT__u_cpu__DOT__memory__DOT__value_writen_to_mem)))))
                    : ((1U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__mem_ctrl_mem))
                        ? ((0U == (7U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                            ? vlSelf->SimTop__DOT__u_cpu__DOT__memory__DOT__value_writen_to_mem
                            : ((1U == (7U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                ? (vlSelf->SimTop__DOT__u_cpu__DOT__memory__DOT__value_writen_to_mem 
                                   << 8U) : ((2U == 
                                              (7U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                              ? (vlSelf->SimTop__DOT__u_cpu__DOT__memory__DOT__value_writen_to_mem 
                                                 << 0x10U)
                                              : ((3U 
                                                  == 
                                                  (7U 
                                                   & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                                  ? 
                                                 (vlSelf->SimTop__DOT__u_cpu__DOT__memory__DOT__value_writen_to_mem 
                                                  << 0x18U)
                                                  : 
                                                 ((4U 
                                                   == 
                                                   (7U 
                                                    & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                                   ? 
                                                  (vlSelf->SimTop__DOT__u_cpu__DOT__memory__DOT__value_writen_to_mem 
                                                   << 0x20U)
                                                   : 
                                                  ((5U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                                    ? 
                                                   (vlSelf->SimTop__DOT__u_cpu__DOT__memory__DOT__value_writen_to_mem 
                                                    << 0x28U)
                                                    : 
                                                   ((6U 
                                                     == 
                                                     (7U 
                                                      & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                                     ? 
                                                    (vlSelf->SimTop__DOT__u_cpu__DOT__memory__DOT__value_writen_to_mem 
                                                     << 0x30U)
                                                     : 
                                                    ((7U 
                                                      == 
                                                      (7U 
                                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                                      ? 
                                                     (vlSelf->SimTop__DOT__u_cpu__DOT__memory__DOT__value_writen_to_mem 
                                                      << 0x38U)
                                                      : vlSelf->SimTop__DOT__u_cpu__DOT__memory__DOT__value_writen_to_mem))))))))
                        : vlSelf->SimTop__DOT__u_cpu__DOT__memory__DOT__value_writen_to_mem))));
    vlSelf->io_memAXI_0_w_bits_strb = vlSelf->SimTop__DOT__mem_write_mask_axi;
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__pair_list[0U][0U] 
        = vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4[0U];
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__pair_list[0U][1U] 
        = vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4[1U];
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__pair_list[0U][2U] 
        = (0xfU & vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4[2U]);
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__pair_list[1U][0U] 
        = ((vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4[3U] 
            << 0x1cU) | (vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4[2U] 
                         >> 4U));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__pair_list[1U][1U] 
        = ((vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4[4U] 
            << 0x1cU) | (vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4[3U] 
                         >> 4U));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__pair_list[1U][2U] 
        = (0xfU & (vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4[4U] 
                   >> 4U));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__pair_list[2U][0U] 
        = ((vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4[5U] 
            << 0x18U) | (vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4[4U] 
                         >> 8U));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__pair_list[2U][1U] 
        = ((vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4[6U] 
            << 0x18U) | (vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4[5U] 
                         >> 8U));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__pair_list[2U][2U] 
        = (0xfU & (vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4[6U] 
                   >> 8U));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__pair_list[3U][0U] 
        = ((vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4[7U] 
            << 0x14U) | (vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4[6U] 
                         >> 0xcU));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__pair_list[3U][1U] 
        = ((vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4[8U] 
            << 0x14U) | (vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4[7U] 
                         >> 0xcU));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__pair_list[3U][2U] 
        = (0xfU & (vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4[8U] 
                   >> 0xcU));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__pair_list[4U][0U] 
        = ((vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4[9U] 
            << 0x10U) | (vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4[8U] 
                         >> 0x10U));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__pair_list[4U][1U] 
        = ((vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4[0xaU] 
            << 0x10U) | (vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4[9U] 
                         >> 0x10U));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__pair_list[4U][2U] 
        = (0xfU & (vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4[0xaU] 
                   >> 0x10U));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__pair_list[5U][0U] 
        = ((vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4[0xbU] 
            << 0xcU) | (vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4[0xaU] 
                        >> 0x14U));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__pair_list[5U][1U] 
        = ((vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4[0xcU] 
            << 0xcU) | (vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4[0xbU] 
                        >> 0x14U));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__pair_list[5U][2U] 
        = (0xfU & (vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4[0xcU] 
                   >> 0x14U));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__pair_list[6U][0U] 
        = ((vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4[0xdU] 
            << 8U) | (vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4[0xcU] 
                      >> 0x18U));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__pair_list[6U][1U] 
        = ((vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4[0xeU] 
            << 8U) | (vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4[0xdU] 
                      >> 0x18U));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__pair_list[6U][2U] 
        = (0xfU & (vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4[0xeU] 
                   >> 0x18U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__pair_list[0U][0U] 
        = vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__forward_b_mux____pinNumber4[0U];
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__pair_list[0U][1U] 
        = vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__forward_b_mux____pinNumber4[1U];
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__pair_list[0U][2U] 
        = (3U & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__forward_b_mux____pinNumber4[2U]);
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__pair_list[1U][0U] 
        = ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__forward_b_mux____pinNumber4[3U] 
            << 0x1eU) | (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__forward_b_mux____pinNumber4[2U] 
                         >> 2U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__pair_list[1U][1U] 
        = ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__forward_b_mux____pinNumber4[4U] 
            << 0x1eU) | (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__forward_b_mux____pinNumber4[3U] 
                         >> 2U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__pair_list[1U][2U] 
        = (3U & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__forward_b_mux____pinNumber4[4U] 
                 >> 2U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__pair_list[2U][0U] 
        = ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__forward_b_mux____pinNumber4[5U] 
            << 0x1cU) | (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__forward_b_mux____pinNumber4[4U] 
                         >> 4U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__pair_list[2U][1U] 
        = ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__forward_b_mux____pinNumber4[6U] 
            << 0x1cU) | (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__forward_b_mux____pinNumber4[5U] 
                         >> 4U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__pair_list[2U][2U] 
        = (3U & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__forward_b_mux____pinNumber4[6U] 
                 >> 4U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__pair_list[0U][0U] 
        = vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__forward_a_mux____pinNumber4[0U];
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__pair_list[0U][1U] 
        = vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__forward_a_mux____pinNumber4[1U];
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__pair_list[0U][2U] 
        = (3U & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__forward_a_mux____pinNumber4[2U]);
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__pair_list[1U][0U] 
        = ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__forward_a_mux____pinNumber4[3U] 
            << 0x1eU) | (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__forward_a_mux____pinNumber4[2U] 
                         >> 2U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__pair_list[1U][1U] 
        = ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__forward_a_mux____pinNumber4[4U] 
            << 0x1eU) | (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__forward_a_mux____pinNumber4[3U] 
                         >> 2U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__pair_list[1U][2U] 
        = (3U & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__forward_a_mux____pinNumber4[4U] 
                 >> 2U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__pair_list[2U][0U] 
        = ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__forward_a_mux____pinNumber4[5U] 
            << 0x1cU) | (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__forward_a_mux____pinNumber4[4U] 
                         >> 4U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__pair_list[2U][1U] 
        = ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__forward_a_mux____pinNumber4[6U] 
            << 0x1cU) | (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__forward_a_mux____pinNumber4[5U] 
                         >> 4U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__pair_list[2U][2U] 
        = (3U & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__forward_a_mux____pinNumber4[6U] 
                 >> 4U));
    vlSelf->io_memAXI_0_w_bits_data[0U] = vlSelf->SimTop__DOT__u_cpu__DOT__reg2_to_mem_forward;
    if ((1U & (~ (IData)(vlSelf->SimTop__DOT__axi_stall)))) {
        if (vlSelf->SimTop__DOT__u_cpu__DOT__IF_Flush) {
            vlSelf->SimTop__DOT__u_cpu__DOT__pc_id = 0ULL;
        } else if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__pipeline_stall)))) {
            vlSelf->SimTop__DOT__u_cpu__DOT__pc_id 
                = vlSelf->SimTop__DOT__u_cpu__DOT__pc;
        }
    }
    if ((1U & (~ (IData)(vlSelf->SimTop__DOT__axi_stall)))) {
        if (vlSelf->SimTop__DOT__u_cpu__DOT__IF_Flush) {
            vlSelf->SimTop__DOT__u_cpu__DOT__inst_id = 0U;
        } else if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__pipeline_stall)))) {
            vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                = ((1U & (IData)((vlSelf->SimTop__DOT__u_cpu__DOT__pc 
                                  >> 2U))) ? (IData)(
                                                     (vlSelf->SimTop__DOT__if_data_read 
                                                      >> 0x20U))
                    : (IData)(vlSelf->SimTop__DOT__if_data_read));
        }
    }
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__key_list[0U] 
        = (0xfU & vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__key_list[1U] 
        = (0xfU & vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__pair_list
           [1U][2U]);
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__pair_list
                            [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__pair_list
                                                                   [2U][0U])));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__key_list[2U] 
        = (0xfU & vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__pair_list
           [2U][2U]);
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__data_list[3U] 
        = (((QData)((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__pair_list
                            [3U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__pair_list
                                                                   [3U][0U])));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__key_list[3U] 
        = (0xfU & vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__pair_list
           [3U][2U]);
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__data_list[4U] 
        = (((QData)((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__pair_list
                            [4U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__pair_list
                                                                   [4U][0U])));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__key_list[4U] 
        = (0xfU & vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__pair_list
           [4U][2U]);
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__data_list[5U] 
        = (((QData)((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__pair_list
                            [5U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__pair_list
                                                                   [5U][0U])));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__key_list[5U] 
        = (0xfU & vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__pair_list
           [5U][2U]);
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__data_list[6U] 
        = (((QData)((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__pair_list
                            [6U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__pair_list
                                                                   [6U][0U])));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__key_list[6U] 
        = (0xfU & vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__pair_list
           [6U][2U]);
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__key_list[0U] 
        = (3U & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__key_list[1U] 
        = (3U & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__pair_list
           [1U][2U]);
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__pair_list
                            [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__pair_list
                                                                   [2U][0U])));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__key_list[2U] 
        = (3U & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__pair_list
           [2U][2U]);
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__key_list[0U] 
        = (3U & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__key_list[1U] 
        = (3U & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__pair_list
           [1U][2U]);
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__pair_list
                            [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__pair_list
                                                                   [2U][0U])));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__key_list[2U] 
        = (3U & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__pair_list
           [2U][2U]);
    vlSelf->SimTop__DOT__u_cpu__DOT__pc = __Vdly__SimTop__DOT__u_cpu__DOT__pc;
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__mem_ctrl_mem) 
                               == vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__mem_ctrl_mem) 
           == vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__lut_out 
        = (vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__mem_ctrl_mem) 
                                  == vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__mem_ctrl_mem) 
              == vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__lut_out 
        = (vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__mem_ctrl_mem) 
                                  == vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__key_list
                                  [2U])))) & vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__mem_ctrl_mem) 
              == vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__lut_out 
        = (vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__mem_ctrl_mem) 
                                  == vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__key_list
                                  [3U])))) & vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__mem_ctrl_mem) 
              == vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__lut_out 
        = (vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__mem_ctrl_mem) 
                                  == vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__key_list
                                  [4U])))) & vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__mem_ctrl_mem) 
              == vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__lut_out 
        = (vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__mem_ctrl_mem) 
                                  == vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__key_list
                                  [5U])))) & vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__mem_ctrl_mem) 
              == vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__lut_out 
        = (vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__mem_ctrl_mem) 
                                  == vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__key_list
                                  [6U])))) & vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__mem_ctrl_mem) 
              == vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext_read_mem_value_mem 
        = ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__hit)
            ? vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__lut_out
            : vlSelf->SimTop__DOT__mem_data_read);
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__Forward_b) 
                               == vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__Forward_b) 
           == vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__Forward_b) 
                                  == vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__Forward_b) 
              == vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__Forward_b) 
                                  == vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__key_list
                                  [2U])))) & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__Forward_b) 
              == vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->SimTop__DOT__u_cpu__DOT__reg2_value_forwardb_ex 
        = ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__hit)
            ? vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__lut_out
            : vlSelf->SimTop__DOT__u_cpu__DOT__reg2_value_ex);
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__Forward_a) 
                               == vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__Forward_a) 
           == vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__Forward_a) 
                                  == vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__Forward_a) 
              == vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__Forward_a) 
                                  == vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__key_list
                                  [2U])))) & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__Forward_a) 
              == vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__reg1_forwarda 
        = ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__hit)
            ? vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__lut_out
            : vlSelf->SimTop__DOT__u_cpu__DOT__reg1_value_ex);
    if (((2U == (IData)(vlSelf->SimTop__DOT__arbitrating__DOT__arb_state)) 
         & (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__trans_done))) {
        vlSelf->SimTop__DOT__if_data_read = vlSelf->io_memAXI_0_r_bits_data
            [0U];
    }
    vlSelf->SimTop__DOT__axi_stall = (1U & (~ ((IData)(vlSelf->SimTop__DOT__axi_rw__DOT__trans_done) 
                                               & (2U 
                                                  == (IData)(vlSelf->SimTop__DOT__arbitrating__DOT__arb_state)))));
    vlSelf->SimTop__DOT__u_cpu__DOT__pipeline_stall 
        = ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__read_mem_en_ex) 
           & (((0x1fU & (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                         >> 0xfU)) == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rd_ex)) 
              | ((0x1fU & (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                           >> 0x14U)) == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rd_ex))));
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lui 
        = (IData)((0x37U == (0x7fU & vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)));
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_auipc 
        = (IData)((0x17U == (0x7fU & vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)));
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_ebreak 
        = (IData)((0x73U == (0x707fU & vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)));
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_jal 
        = (IData)((0x6fU == (0x7fU & vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)));
    __Vtemp515[4U] = (0x40U | ((7U & ((IData)(((((- (QData)((IData)(
                                                                    (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                                                     >> 0x1fU)))) 
                                                 << 0xcU) 
                                                | (QData)((IData)(
                                                                  (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                                                   >> 0x14U)))) 
                                               >> 0x20U)) 
                                      >> 0x1aU)) | 
                               (0x38U & ((IData)(((
                                                   ((- (QData)((IData)(
                                                                       (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                                                        >> 0x1fU)))) 
                                                    << 0xcU) 
                                                   | (QData)((IData)(
                                                                     (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                                                      >> 0x14U)))) 
                                                  >> 0x20U)) 
                                         >> 0x1aU))));
    __Vtemp516[2U] = (((IData)((((- (QData)((IData)(
                                                    (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                                     >> 0x1fU)))) 
                                 << 0x14U) | (QData)((IData)(
                                                             ((0xff000U 
                                                               & vlSelf->SimTop__DOT__u_cpu__DOT__inst_id) 
                                                              | ((0x800U 
                                                                  & (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                                                     >> 9U)) 
                                                                 | ((0x7e0U 
                                                                     & (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                                                        >> 0x14U)) 
                                                                    | (0x1eU 
                                                                       & (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                                                          >> 0x14U))))))))) 
                       >> 9U) | ((IData)(((((- (QData)((IData)(
                                                               (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                                                >> 0x1fU)))) 
                                            << 0x14U) 
                                           | (QData)((IData)(
                                                             ((0xff000U 
                                                               & vlSelf->SimTop__DOT__u_cpu__DOT__inst_id) 
                                                              | ((0x800U 
                                                                  & (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                                                     >> 9U)) 
                                                                 | ((0x7e0U 
                                                                     & (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                                                        >> 0x14U)) 
                                                                    | (0x1eU 
                                                                       & (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                                                          >> 0x14U)))))))) 
                                          >> 0x20U)) 
                                 << 0x17U));
    __Vtemp517[4U] = ((0x7fffffU & ((IData)((((QData)((IData)(
                                                              (- (IData)(
                                                                         (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                                                          >> 0x1fU))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               (0xfffff000U 
                                                                & vlSelf->SimTop__DOT__u_cpu__DOT__inst_id))))) 
                                    >> 6U)) | ((0x3800000U 
                                                & ((IData)(
                                                           (((QData)((IData)(
                                                                             (- (IData)(
                                                                                (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                                                                >> 0x1fU))))) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              (0xfffff000U 
                                                                               & vlSelf->SimTop__DOT__u_cpu__DOT__inst_id))))) 
                                                   >> 6U)) 
                                               | ((IData)(
                                                          ((((QData)((IData)(
                                                                             (- (IData)(
                                                                                (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                                                                >> 0x1fU))))) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              (0xfffff000U 
                                                                               & vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)))) 
                                                           >> 0x20U)) 
                                                  << 0x1aU)));
    __Vtemp517[5U] = (0x10000000U | ((0x7fffffU & ((IData)(
                                                           ((((QData)((IData)(
                                                                              (- (IData)(
                                                                                (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                                                                >> 0x1fU))))) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               (0xfffff000U 
                                                                                & vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)))) 
                                                            >> 0x20U)) 
                                                   >> 6U)) 
                                     | (((IData)(((
                                                   (- (QData)((IData)(
                                                                      (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                                                       >> 0x1fU)))) 
                                                   << 0xcU) 
                                                  | (QData)((IData)(
                                                                    (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                                                     >> 0x14U))))) 
                                         << 0x1dU) 
                                        | (0x3800000U 
                                           & ((IData)(
                                                      ((((QData)((IData)(
                                                                         (- (IData)(
                                                                                (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                                                                >> 0x1fU))))) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          (0xfffff000U 
                                                                           & vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)))) 
                                                       >> 0x20U)) 
                                              >> 6U)))));
    __Vtemp517[6U] = ((0x7fffffU & ((IData)((((- (QData)((IData)(
                                                                 (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                                                  >> 0x1fU)))) 
                                              << 0xcU) 
                                             | (QData)((IData)(
                                                               (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                                                >> 0x14U))))) 
                                    >> 3U)) | ((0x3800000U 
                                                & ((IData)(
                                                           (((- (QData)((IData)(
                                                                                (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                                                                >> 0x1fU)))) 
                                                             << 0xcU) 
                                                            | (QData)((IData)(
                                                                              (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                                                               >> 0x14U))))) 
                                                   >> 3U)) 
                                               | ((0x1c000000U 
                                                   & ((IData)(
                                                              (((- (QData)((IData)(
                                                                                (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                                                                >> 0x1fU)))) 
                                                                << 0xcU) 
                                                               | (QData)((IData)(
                                                                                (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                                                                >> 0x14U))))) 
                                                      >> 3U)) 
                                                  | ((IData)(
                                                             ((((- (QData)((IData)(
                                                                                (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                                                                >> 0x1fU)))) 
                                                                << 0xcU) 
                                                               | (QData)((IData)(
                                                                                (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                                                                >> 0x14U)))) 
                                                              >> 0x20U)) 
                                                     << 0x1dU))));
    __Vtemp517[7U] = ((0x7fffffU & ((IData)(((((- (QData)((IData)(
                                                                  (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                                                   >> 0x1fU)))) 
                                               << 0xcU) 
                                              | (QData)((IData)(
                                                                (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                                                 >> 0x14U)))) 
                                             >> 0x20U)) 
                                    >> 3U)) | (__Vtemp515[4U] 
                                               << 0x17U));
    __Vtemp518[1U] = (((IData)((0x30000000000000ULL 
                                | (0xfffffffffffffULL 
                                   & (- (QData)((IData)(
                                                        (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                                         >> 0x1fU))))))) 
                       >> 0x11U) | ((IData)(((0x30000000000000ULL 
                                              | (0xfffffffffffffULL 
                                                 & (- (QData)((IData)(
                                                                      (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                                                       >> 0x1fU)))))) 
                                             >> 0x20U)) 
                                    << 0xfU));
    __Vtemp518[3U] = ((__Vtemp516[2U] >> 0x11U) | (0xffff8000U 
                                                   & ((IData)(
                                                              ((((- (QData)((IData)(
                                                                                (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                                                                >> 0x1fU)))) 
                                                                 << 0x14U) 
                                                                | (QData)((IData)(
                                                                                ((0xff000U 
                                                                                & vlSelf->SimTop__DOT__u_cpu__DOT__inst_id) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                                                                >> 9U)) 
                                                                                | ((0x7e0U 
                                                                                & (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                                                                >> 0x14U)) 
                                                                                | (0x1eU 
                                                                                & (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                                                                >> 0x14U)))))))) 
                                                               >> 0x20U)) 
                                                      << 6U)));
    __Vtemp518[4U] = (0x140U | (((0x7e00U & ((IData)(
                                                     (((QData)((IData)(
                                                                       (- (IData)(
                                                                                (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                                                                >> 0x1fU))))) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        (0xfffff000U 
                                                                         & vlSelf->SimTop__DOT__u_cpu__DOT__inst_id))))) 
                                             << 9U)) 
                                 | ((IData)(((((- (QData)((IData)(
                                                                  (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                                                   >> 0x1fU)))) 
                                               << 0x14U) 
                                              | (QData)((IData)(
                                                                ((0xff000U 
                                                                  & vlSelf->SimTop__DOT__u_cpu__DOT__inst_id) 
                                                                 | ((0x800U 
                                                                     & (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                                                        >> 9U)) 
                                                                    | ((0x7e0U 
                                                                        & (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                                                           >> 0x14U)) 
                                                                       | (0x1eU 
                                                                          & (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                                                             >> 0x14U)))))))) 
                                             >> 0x20U)) 
                                    >> 0x1aU)) | (__Vtemp517[4U] 
                                                  << 0xfU)));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_imm____pinNumber4[0U] 
        = (IData)((((- (QData)((IData)((vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                        >> 0x1fU)))) 
                    << 0xbU) | (QData)((IData)(((0x7e0U 
                                                 & (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                                    >> 0x14U)) 
                                                | (0x1fU 
                                                   & (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                                      >> 7U)))))));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_imm____pinNumber4[1U] 
        = (IData)(((((- (QData)((IData)((vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                         >> 0x1fU)))) 
                     << 0xbU) | (QData)((IData)(((0x7e0U 
                                                  & (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                                     >> 0x14U)) 
                                                 | (0x1fU 
                                                    & (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                                       >> 7U)))))) 
                   >> 0x20U));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_imm____pinNumber4[2U] 
        = (2U | (((IData)((0x30000000000000ULL | (0xfffffffffffffULL 
                                                  & (- (QData)((IData)(
                                                                       (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                                                        >> 0x1fU))))))) 
                  << 0xfU) | ((0x4000U & (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                          << 7U)) | 
                              ((0x3f00U & (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                           >> 0x11U)) 
                               | (0xf0U & (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                           >> 4U))))));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_imm____pinNumber4[3U] 
        = __Vtemp518[1U];
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_imm____pinNumber4[4U] 
        = (((0x7fc0U & ((IData)((((- (QData)((IData)(
                                                     (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                                      >> 0x1fU)))) 
                                  << 0x14U) | (QData)((IData)(
                                                              ((0xff000U 
                                                                & vlSelf->SimTop__DOT__u_cpu__DOT__inst_id) 
                                                               | ((0x800U 
                                                                   & (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                                                      >> 9U)) 
                                                                  | ((0x7e0U 
                                                                      & (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                                                         >> 0x14U)) 
                                                                     | (0x1eU 
                                                                        & (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                                                           >> 0x14U))))))))) 
                        << 6U)) | ((IData)(((0x30000000000000ULL 
                                             | (0xfffffffffffffULL 
                                                & (- (QData)((IData)(
                                                                     (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                                                      >> 0x1fU)))))) 
                                            >> 0x20U)) 
                                   >> 0x11U)) | (__Vtemp516[2U] 
                                                 << 0xfU));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_imm____pinNumber4[5U] 
        = __Vtemp518[3U];
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_imm____pinNumber4[6U] 
        = __Vtemp518[4U];
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_imm____pinNumber4[7U] 
        = ((__Vtemp517[4U] >> 0x11U) | (__Vtemp517[5U] 
                                        << 0xfU));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_imm____pinNumber4[8U] 
        = ((__Vtemp517[5U] >> 0x11U) | (__Vtemp517[6U] 
                                        << 0xfU));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_imm____pinNumber4[9U] 
        = ((__Vtemp517[6U] >> 0x11U) | (__Vtemp517[7U] 
                                        << 0xfU));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_imm____pinNumber4[0xaU] 
        = (__Vtemp517[7U] >> 0x11U);
    vlSelf->SimTop__DOT__u_cpu__DOT__Forward_d = ((
                                                   ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__wen_ex) 
                                                    & (0U 
                                                       != (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rd_ex))) 
                                                   & ((0x1fU 
                                                       & (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                                          >> 0x14U)) 
                                                      == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rd_ex)))
                                                   ? 3U
                                                   : 
                                                  ((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__wen_mem) 
                                                     & (0U 
                                                        != (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rd_mem))) 
                                                    & ((0x1fU 
                                                        & (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                                           >> 0x14U)) 
                                                       == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rd_mem)))
                                                    ? 2U
                                                    : 
                                                   (((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__wen_wb) 
                                                       & (0U 
                                                          != (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rd_wb))) 
                                                      & ((0x1fU 
                                                          & (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                                             >> 0x14U)) 
                                                         == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rd_wb))) 
                                                     & (~ 
                                                        (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__wen_mem) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rd_mem))) 
                                                         & ((0x1fU 
                                                             & (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                                                >> 0x14U)) 
                                                            == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rd_mem)))))
                                                     ? 1U
                                                     : 0U)));
    vlSelf->SimTop__DOT__u_cpu__DOT__Forward_c = ((
                                                   ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__wen_ex) 
                                                    & (0U 
                                                       != (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rd_ex))) 
                                                   & ((0x1fU 
                                                       & (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                                          >> 0xfU)) 
                                                      == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rd_ex)))
                                                   ? 3U
                                                   : 
                                                  ((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__wen_mem) 
                                                     & (0U 
                                                        != (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rd_mem))) 
                                                    & ((0x1fU 
                                                        & (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                                           >> 0xfU)) 
                                                       == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rd_mem)))
                                                    ? 2U
                                                    : 
                                                   (((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__wen_wb) 
                                                       & (0U 
                                                          != (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rd_wb))) 
                                                      & ((0x1fU 
                                                          & (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                                             >> 0xfU)) 
                                                         == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rd_wb))) 
                                                     & (~ 
                                                        (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__wen_mem) 
                                                          & (0U 
                                                             != (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rd_mem))) 
                                                         & ((0x1fU 
                                                             & (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                                                >> 0xfU)) 
                                                            == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rd_mem)))))
                                                     ? 1U
                                                     : 0U)));
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_addi 
        = (IData)((0x13U == (0x707fU & vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)));
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lh 
        = (IData)((0x1003U == (0x707fU & vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)));
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_ld 
        = (IData)((0x3003U == (0x707fU & vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)));
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lw 
        = (IData)((0x2003U == (0x707fU & vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)));
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lb 
        = (IData)((3U == (0x707fU & vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)));
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_addiw 
        = (IData)((0x1bU == (0x707fU & vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)));
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_slli 
        = (IData)((0x1013U == (0xfc00707fU & vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)));
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_andi 
        = (IData)((0x7013U == (0x707fU & vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)));
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_srai 
        = (IData)((0x40005013U == (0xfc00707fU & vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)));
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lwu 
        = (IData)((0x6003U == (0x707fU & vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)));
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lbu 
        = (IData)((0x4003U == (0x707fU & vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)));
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lhu 
        = (IData)((0x5003U == (0x707fU & vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)));
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_slliw 
        = (IData)((0x101bU == (0xfc00707fU & vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)));
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sltiu 
        = (IData)((0x3013U == (0x707fU & vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)));
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sraiw 
        = (IData)((0x4000501bU == (0xfc00707fU & vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)));
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_jalr 
        = (IData)((0x67U == (0x707fU & vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)));
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_xori 
        = (IData)((0x4013U == (0x707fU & vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)));
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_srli 
        = (IData)((0x5013U == (0xfc00707fU & vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)));
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_srliw 
        = (IData)((0x501bU == (0xfc00707fU & vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)));
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_ori 
        = (IData)((0x6013U == (0x707fU & vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)));
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_slti 
        = (IData)((0x2013U == (0x707fU & vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)));
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_add 
        = (IData)((0x33U == (0xfe00707fU & vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)));
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_srl 
        = (IData)((0x5033U == (0xfe00707fU & vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)));
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_addw 
        = (IData)((0x3bU == (0xfe00707fU & vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)));
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_and 
        = (IData)((0x7033U == (0xfe00707fU & vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)));
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sub 
        = (IData)((0x40000033U == (0xfe00707fU & vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)));
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_srlw 
        = (IData)((0x503bU == (0xfe00707fU & vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)));
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sltu 
        = (IData)((0x3033U == (0xfe00707fU & vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)));
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_mul 
        = (IData)((0x2000033U == (0xfe00707fU & vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)));
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_xor 
        = (IData)((0x4033U == (0xfe00707fU & vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)));
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_subw 
        = (IData)((0x4000003bU == (0xfe00707fU & vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)));
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sll 
        = (IData)((0x1033U == (0xfe00707fU & vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)));
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sra 
        = (IData)((0x40005033U == (0xfe00707fU & vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)));
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_divw 
        = (IData)((0x200403bU == (0xfe00707fU & vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)));
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_mulw 
        = (IData)((0x200003bU == (0xfe00707fU & vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)));
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sllw 
        = (IData)((0x103bU == (0xfe00707fU & vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)));
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sraw 
        = (IData)((0x4000503bU == (0xfe00707fU & vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)));
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_or 
        = (IData)((0x6033U == (0xfe00707fU & vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)));
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_remw 
        = (IData)((0x200603bU == (0xfe00707fU & vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)));
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_remuw 
        = (IData)((0x200703bU == (0xfe00707fU & vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)));
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_divuw 
        = (IData)((0x200503bU == (0xfe00707fU & vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)));
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_slt 
        = (IData)((0x2033U == (0xfe00707fU & vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)));
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sd 
        = (IData)((0x3023U == (0x707fU & vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)));
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sh 
        = (IData)((0x1023U == (0x707fU & vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)));
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sw 
        = (IData)((0x2023U == (0x707fU & vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)));
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sb 
        = (IData)((0x23U == (0x707fU & vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)));
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_blt 
        = (IData)((0x4063U == (0x707fU & vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)));
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_bge 
        = (IData)((0x5063U == (0x707fU & vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)));
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_beq 
        = (IData)((0x63U == (0x707fU & vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)));
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_bne 
        = (IData)((0x1063U == (0x707fU & vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)));
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_bgeu 
        = (IData)((0x7063U == (0x707fU & vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)));
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_bltu 
        = (IData)((0x6063U == (0x707fU & vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)));
    vlSelf->SimTop__DOT__u_cpu__DOT__reg_write_value_mem 
        = ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__read_mem_en_mem)
            ? vlSelf->SimTop__DOT__u_cpu__DOT__sext_read_mem_value_mem
            : vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem);
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b0 
        = ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__npc_op_ex)
            ? 4ULL : ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_imm_reg2_ex)
                       ? vlSelf->SimTop__DOT__u_cpu__DOT__imm_ex
                       : vlSelf->SimTop__DOT__u_cpu__DOT__reg2_value_forwardb_ex));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a0 
        = ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_only_imm_ex)
            ? 0ULL : ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_pc_reg1_ex)
                       ? vlSelf->SimTop__DOT__u_cpu__DOT__pc_ex
                       : vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__reg1_forwarda));
    vlSelf->SimTop__DOT__arbitrating__DOT__arb_state 
        = __Vdly__SimTop__DOT__arbitrating__DOT__arb_state;
    vlSelf->SimTop__DOT__u_cpu__DOT__optype = ((3U 
                                                & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__optype)) 
                                               | (((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_ebreak) 
                                                     | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_auipc)) 
                                                    | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lui)) 
                                                   | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_jal)) 
                                                  << 2U));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__pair_list[0U][0U] 
        = vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_imm____pinNumber4[0U];
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__pair_list[0U][1U] 
        = vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_imm____pinNumber4[1U];
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__pair_list[0U][2U] 
        = (7U & vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_imm____pinNumber4[2U]);
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__pair_list[1U][0U] 
        = ((vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_imm____pinNumber4[3U] 
            << 0x1dU) | (vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_imm____pinNumber4[2U] 
                         >> 3U));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__pair_list[1U][1U] 
        = ((vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_imm____pinNumber4[4U] 
            << 0x1dU) | (vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_imm____pinNumber4[3U] 
                         >> 3U));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__pair_list[1U][2U] 
        = (7U & (vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_imm____pinNumber4[4U] 
                 >> 3U));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__pair_list[2U][0U] 
        = ((vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_imm____pinNumber4[5U] 
            << 0x1aU) | (vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_imm____pinNumber4[4U] 
                         >> 6U));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__pair_list[2U][1U] 
        = ((vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_imm____pinNumber4[6U] 
            << 0x1aU) | (vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_imm____pinNumber4[5U] 
                         >> 6U));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__pair_list[2U][2U] 
        = (7U & (vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_imm____pinNumber4[6U] 
                 >> 6U));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__pair_list[3U][0U] 
        = ((vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_imm____pinNumber4[7U] 
            << 0x17U) | (vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_imm____pinNumber4[6U] 
                         >> 9U));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__pair_list[3U][1U] 
        = ((vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_imm____pinNumber4[8U] 
            << 0x17U) | (vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_imm____pinNumber4[7U] 
                         >> 9U));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__pair_list[3U][2U] 
        = (7U & (vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_imm____pinNumber4[8U] 
                 >> 9U));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__pair_list[4U][0U] 
        = ((vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_imm____pinNumber4[9U] 
            << 0x14U) | (vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_imm____pinNumber4[8U] 
                         >> 0xcU));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__pair_list[4U][1U] 
        = ((vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_imm____pinNumber4[0xaU] 
            << 0x14U) | (vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_imm____pinNumber4[9U] 
                         >> 0xcU));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__pair_list[4U][2U] 
        = (7U & (vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_imm____pinNumber4[0xaU] 
                 >> 0xcU));
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_op_id = ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_jal) 
                                                  | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_jalr));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_id = ((0xfU 
                                                   & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_id)) 
                                                  | (((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_srl) 
                                                        | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_srlw)) 
                                                       | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sltiu)) 
                                                      | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sltu)) 
                                                     << 4U));
    vlSelf->SimTop__DOT__u_cpu__DOT__value_width_ctrl_id 
        = ((0xbU & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__value_width_ctrl_id)) 
           | (((((((((((((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_addw) 
                           | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_subw)) 
                          | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_mulw)) 
                         | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_addiw)) 
                        | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sllw)) 
                       | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_divuw)) 
                      | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_divw)) 
                     | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_remw)) 
                    | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_remuw)) 
                   | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_slliw)) 
                  | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sraiw)) 
                 | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sraw)) 
                | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_srlw)) 
               | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_srliw)) 
              << 2U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_id = ((0x17U 
                                                   & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_id)) 
                                                  | (((((((((((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_slli) 
                                                                | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_slliw)) 
                                                               | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_srli)) 
                                                              | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_srliw)) 
                                                             | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_mulw)) 
                                                            | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_mul)) 
                                                           | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_divw)) 
                                                          | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_divuw)) 
                                                         | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_remw)) 
                                                        | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_remuw)) 
                                                       | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_slti)) 
                                                      | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_slt)) 
                                                     << 3U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_id = ((0x1bU 
                                                   & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_id)) 
                                                  | ((((((((((((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_andi) 
                                                                 | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sll)) 
                                                                | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sllw)) 
                                                               | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_and)) 
                                                              | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_xor)) 
                                                             | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_xori)) 
                                                            | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_ori)) 
                                                           | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_or)) 
                                                          | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_divw)) 
                                                         | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_remw)) 
                                                        | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_remuw)) 
                                                       | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_slti)) 
                                                      | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_slt)) 
                                                     << 2U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_id = ((0x1dU 
                                                   & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_id)) 
                                                  | (((((((((((((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_srai) 
                                                                  | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sraiw)) 
                                                                 | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_xor)) 
                                                                | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_xori)) 
                                                               | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_ori)) 
                                                              | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_or)) 
                                                             | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_mulw)) 
                                                            | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_mul)) 
                                                           | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_remw)) 
                                                          | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_divuw)) 
                                                         | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_slti)) 
                                                        | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_slt)) 
                                                       | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sra)) 
                                                      | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sraw)) 
                                                     << 1U));
    vlSelf->SimTop__DOT__u_cpu__DOT__mem_ctrl_id = 
        ((7U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__mem_ctrl_id)) 
         | ((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lwu) 
              | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_ld)) 
             | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sd)) 
            << 3U));
    vlSelf->SimTop__DOT__u_cpu__DOT__mem_ctrl_id = 
        ((0xdU & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__mem_ctrl_id)) 
         | ((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lh) 
              | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lhu)) 
             | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sh)) 
            << 1U));
    vlSelf->SimTop__DOT__u_cpu__DOT__mem_ctrl_id = 
        ((0xbU & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__mem_ctrl_id)) 
         | (((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lw) 
               | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lbu)) 
              | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lhu)) 
             | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sw)) 
            << 2U));
    vlSelf->SimTop__DOT__u_cpu__DOT__mem_ctrl_id = 
        ((0xeU & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__mem_ctrl_id)) 
         | (((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lwu) 
               | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sb)) 
              | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lb)) 
             | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lbu)) 
            | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lhu)));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_id = ((0x1eU 
                                                   & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_id)) 
                                                  | (((((((((((((((((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sub) 
                                                                      | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_subw)) 
                                                                     | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_slti)) 
                                                                    | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sltiu)) 
                                                                   | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_beq)) 
                                                                  | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_bne)) 
                                                                 | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sll)) 
                                                                | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sllw)) 
                                                               | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_remuw)) 
                                                              | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sltu)) 
                                                             | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_or)) 
                                                            | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_ori)) 
                                                           | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_srli)) 
                                                          | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_srliw)) 
                                                         | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_divuw)) 
                                                        | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_bltu)) 
                                                       | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_slt)) 
                                                      | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sra)) 
                                                     | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sraw)));
    vlSelf->SimTop__DOT__u_cpu__DOT__branch_type_id 
        = ((3U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__branch_type_id)) 
           | ((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_blt) 
                | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_bltu)) 
               | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_bgeu)) 
              << 2U));
    vlSelf->SimTop__DOT__u_cpu__DOT__branch_type_id 
        = ((4U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__branch_type_id)) 
           | (((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_bne) 
                 | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_bge)) 
                | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_bgeu)) 
               << 1U) | (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_beq) 
                          | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_bge)) 
                         | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_bltu))));
    vlSelf->SimTop__DOT__u_cpu__DOT__optype = ((5U 
                                                & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__optype)) 
                                               | ((((((((((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_ebreak) 
                                                            | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_beq)) 
                                                           | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_bne)) 
                                                          | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_bge)) 
                                                         | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_bgeu)) 
                                                        | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_blt)) 
                                                       | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sd)) 
                                                      | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sb)) 
                                                     | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sw)) 
                                                    | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sh)) 
                                                   | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_bltu)) 
                                                  << 1U));
    vlSelf->SimTop__DOT__u_cpu__DOT__optype = ((6U 
                                                & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__optype)) 
                                               | ((((((((((((((((((((((((((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_addi) 
                                                                            | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_xori)) 
                                                                           | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_ori)) 
                                                                          | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_addiw)) 
                                                                         | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_jal)) 
                                                                        | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_jalr)) 
                                                                       | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lb)) 
                                                                      | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lbu)) 
                                                                     | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lhu)) 
                                                                    | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lh)) 
                                                                   | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lwu)) 
                                                                  | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lw)) 
                                                                 | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_ld)) 
                                                                | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_slti)) 
                                                               | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sltiu)) 
                                                              | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_beq)) 
                                                             | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_bne)) 
                                                            | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_blt)) 
                                                           | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_bge)) 
                                                          | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_bgeu)) 
                                                         | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_bltu)) 
                                                        | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_srai)) 
                                                       | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sraiw)) 
                                                      | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_andi)) 
                                                     | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_slli)) 
                                                    | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_slliw)) 
                                                   | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_srli)) 
                                                  | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_srliw)));
    vlSelf->SimTop__DOT__u_cpu__DOT__reg2_value_id 
        = ((((((((((((((((((((((((((((((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_xor) 
                                         | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sd)) 
                                        | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sw)) 
                                       | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sh)) 
                                      | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sb)) 
                                     | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_mulw)) 
                                    | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_mul)) 
                                   | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_subw)) 
                                  | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_addw)) 
                                 | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sub)) 
                                | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_beq)) 
                               | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_bne)) 
                              | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_bge)) 
                             | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_bgeu)) 
                            | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_blt)) 
                           | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_bltu)) 
                          | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_add)) 
                         | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sll)) 
                        | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sllw)) 
                       | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_and)) 
                      | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sltu)) 
                     | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_or)) 
                    | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_remw)) 
                   | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_remuw)) 
                  | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_divw)) 
                 | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_divuw)) 
                | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_slt)) 
               | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sra)) 
              | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sraw)) 
             | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_srl)) 
            | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_srlw))
            ? vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf
           [(0x1fU & (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                      >> 0x14U))] : 0ULL);
    vlSelf->SimTop__DOT__u_cpu__DOT__reg1_value_id 
        = (((((((((((((((((((((((((((((((((((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sd) 
                                              | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sw)) 
                                             | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sh)) 
                                            | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sb)) 
                                           | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_addi)) 
                                          | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_xor)) 
                                         | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_xori)) 
                                        | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_ori)) 
                                       | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_addiw)) 
                                      | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_jalr)) 
                                     | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lb)) 
                                    | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lbu)) 
                                   | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lhu)) 
                                  | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lh)) 
                                 | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lwu)) 
                                | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lw)) 
                               | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_ld)) 
                              | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_subw)) 
                             | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_bltu)) 
                            | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_addw)) 
                           | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_remw)) 
                          | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_remuw)) 
                         | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_divw)) 
                        | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_divuw)) 
                       | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_mulw)) 
                      | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_mul)) 
                     | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_add)) 
                    | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sub)) 
                   | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_slti)) 
                  | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sltiu)) 
                 | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_beq)) 
                | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_bne)) 
               | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_bge)) 
              | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_bgeu)) 
             | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_blt)) 
            | (((((((((((((((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_srai) 
                              | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sraiw)) 
                             | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sra)) 
                            | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sraw)) 
                           | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_srl)) 
                          | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_srlw)) 
                         | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_andi)) 
                        | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sll)) 
                       | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sllw)) 
                      | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_slli)) 
                     | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_slliw)) 
                    | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_srli)) 
                   | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_srliw)) 
                  | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_and)) 
                 | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sltu)) 
                | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_or)) 
               | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_slt)))
            ? vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf
           [(0x1fU & (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                      >> 0xfU))] : 0ULL);
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b 
        = ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__operator_b_w_ex)
            ? (QData)((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b0))
            : vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b0);
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
        = ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__operator_a_w_s_ex)
            ? (((QData)((IData)((- (IData)((1U & (IData)(
                                                         (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a0 
                                                          >> 0x1fU))))))) 
                << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a0)))
            : ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__operator_a_w_ex)
                ? (QData)((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a0))
                : vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a0));
    vlSelf->SimTop__DOT__u_cpu__DOT__inst_valid_3 = 
        ((((~ (IData)(vlSelf->SimTop__DOT__axi_stall)) 
           & (((0U != (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__branch_type_wb)) 
               | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__write_mem_en_wb)) 
              | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__wen_wb))) 
          & (~ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__pipeline_stall_wb))) 
         & (0U != vlSelf->SimTop__DOT__u_cpu__DOT__inst_wb));
    vlSelf->SimTop__DOT__rw_valid = (((0U == (IData)(vlSelf->SimTop__DOT__arbitrating__DOT__arb_state))
                                       ? 0U : ((1U 
                                                == (IData)(vlSelf->SimTop__DOT__arbitrating__DOT__arb_state))
                                                ? (IData)(vlSelf->SimTop__DOT__mem_valid)
                                                : (
                                                   (2U 
                                                    == (IData)(vlSelf->SimTop__DOT__arbitrating__DOT__arb_state))
                                                    ? 1U
                                                    : 0U))) 
                                     & (IData)(vlSelf->SimTop__DOT__arbitrating__DOT__zza_pulse));
    if ((0U == (IData)(vlSelf->SimTop__DOT__arbitrating__DOT__arb_state))) {
        vlSelf->SimTop__DOT__rw_req = 0U;
        vlSelf->SimTop__DOT__rw_addr = 0ULL;
    } else {
        vlSelf->SimTop__DOT__rw_req = (1U & ((1U == (IData)(vlSelf->SimTop__DOT__arbitrating__DOT__arb_state))
                                              ? (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__write_mem_en_mem)
                                              : ((2U 
                                                  == (IData)(vlSelf->SimTop__DOT__arbitrating__DOT__arb_state))
                                                  ? 0U
                                                  : 0U)));
        vlSelf->SimTop__DOT__rw_addr = ((1U == (IData)(vlSelf->SimTop__DOT__arbitrating__DOT__arb_state))
                                         ? (0xfffffffffffffff8ULL 
                                            & vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)
                                         : ((2U == (IData)(vlSelf->SimTop__DOT__arbitrating__DOT__arb_state))
                                             ? (0xfffffffffffffff8ULL 
                                                & vlSelf->SimTop__DOT__u_cpu__DOT__pc)
                                             : 0ULL));
    }
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__key_list[0U] 
        = (7U & vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__key_list[1U] 
        = (7U & vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__pair_list
           [1U][2U]);
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__pair_list
                            [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__pair_list
                                                                   [2U][0U])));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__key_list[2U] 
        = (7U & vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__pair_list
           [2U][2U]);
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__data_list[3U] 
        = (((QData)((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__pair_list
                            [3U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__pair_list
                                                                   [3U][0U])));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__key_list[3U] 
        = (7U & vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__pair_list
           [3U][2U]);
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__data_list[4U] 
        = (((QData)((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__pair_list
                            [4U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__pair_list
                                                                   [4U][0U])));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__key_list[4U] 
        = (7U & vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__pair_list
           [4U][2U]);
    VL_EXTEND_WQ(69,64, __Vtemp545, (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                                     + vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0U] 
        = (IData)(((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                    < vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b)
                    ? 1ULL : 0ULL));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[1U] 
        = (IData)((((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                     < vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b)
                     ? 1ULL : 0ULL) >> 0x20U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[2U] 
        = (0x11U | ((IData)((VL_LTS_IQQ(1,64,64, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b)
                              ? 1ULL : 0ULL)) << 5U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[3U] 
        = (((IData)((VL_LTS_IQQ(1,64,64, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b)
                      ? 1ULL : 0ULL)) >> 0x1bU) | ((IData)(
                                                           ((VL_LTS_IQQ(1,64,64, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b)
                                                              ? 1ULL
                                                              : 0ULL) 
                                                            >> 0x20U)) 
                                                   << 5U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[4U] 
        = (0x1e0U | (((IData)(VL_MODDIV_QQQ(64, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b)) 
                      << 0xaU) | ((IData)(((VL_LTS_IQQ(1,64,64, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b)
                                             ? 1ULL
                                             : 0ULL) 
                                           >> 0x20U)) 
                                  >> 0x1bU)));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[5U] 
        = (((IData)(VL_MODDIV_QQQ(64, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b)) 
            >> 0x16U) | ((IData)((VL_MODDIV_QQQ(64, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b) 
                                  >> 0x20U)) << 0xaU));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[6U] 
        = (0x3400U | (((IData)(VL_MODDIVS_QQQ(64, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b)) 
                       << 0xfU) | ((IData)((VL_MODDIV_QQQ(64, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b) 
                                            >> 0x20U)) 
                                   >> 0x16U)));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[7U] 
        = (((IData)(VL_MODDIVS_QQQ(64, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b)) 
            >> 0x11U) | ((IData)((VL_MODDIVS_QQQ(64, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b) 
                                  >> 0x20U)) << 0xfU));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[8U] 
        = (0x70000U | (((IData)(VL_DIV_QQQ(64, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b)) 
                        << 0x14U) | ((IData)((VL_MODDIVS_QQQ(64, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b) 
                                              >> 0x20U)) 
                                     >> 0x11U)));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[9U] 
        = (((IData)(VL_DIV_QQQ(64, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b)) 
            >> 0xcU) | ((IData)((VL_DIV_QQQ(64, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b) 
                                 >> 0x20U)) << 0x14U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0xaU] 
        = (0xb00000U | (((IData)(VL_DIVS_QQQ(64, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b)) 
                         << 0x19U) | ((IData)((VL_DIV_QQQ(64, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b) 
                                               >> 0x20U)) 
                                      >> 0xcU)));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0xbU] 
        = (((IData)(VL_DIVS_QQQ(64, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b)) 
            >> 7U) | ((IData)((VL_DIVS_QQQ(64, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b) 
                               >> 0x20U)) << 0x19U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0xcU] 
        = (0x18000000U | (((IData)((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                                    * vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b)) 
                           << 0x1eU) | ((IData)((VL_DIVS_QQQ(64, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b) 
                                                 >> 0x20U)) 
                                        >> 7U)));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0xdU] 
        = (((IData)((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                     * vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b)) 
            >> 2U) | ((IData)(((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                                * vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b) 
                               >> 0x20U)) << 0x1eU));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0xeU] 
        = (0x80000000U | ((IData)(((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                                    * vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b) 
                                   >> 0x20U)) >> 2U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0xfU] 
        = (2U | ((IData)((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                          >> (0x3fU & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b)))) 
                 << 3U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x10U] 
        = (((IData)((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                     >> (0x3fU & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b)))) 
            >> 0x1dU) | ((IData)(((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                                   >> (0x3fU & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b))) 
                                  >> 0x20U)) << 3U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x11U] 
        = (0x48U | (((IData)((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                              << (0x3fU & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b)))) 
                     << 8U) | ((IData)(((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                                         >> (0x3fU 
                                             & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b))) 
                                        >> 0x20U)) 
                               >> 0x1dU)));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x12U] 
        = (((IData)((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                     << (0x3fU & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b)))) 
            >> 0x18U) | ((IData)(((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                                   << (0x3fU & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b))) 
                                  >> 0x20U)) << 8U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x13U] 
        = (0x800U | (((IData)((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                               | vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b)) 
                      << 0xdU) | ((IData)(((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                                            << (0x3fU 
                                                & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b))) 
                                           >> 0x20U)) 
                                  >> 0x18U)));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x14U] 
        = (((IData)((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                     | vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b)) 
            >> 0x13U) | ((IData)(((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                                   | vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b) 
                                  >> 0x20U)) << 0xdU));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x15U] 
        = (0xe000U | (((IData)((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                                ^ vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b)) 
                       << 0x12U) | ((IData)(((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                                              | vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b) 
                                             >> 0x20U)) 
                                    >> 0x13U)));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x16U] 
        = (((IData)((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                     ^ vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b)) 
            >> 0xeU) | ((IData)(((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                                  ^ vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b) 
                                 >> 0x20U)) << 0x12U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x17U] 
        = (0x180000U | (((IData)(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__if_inst_sll_ex)
                                   ? (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                                      >> (0x3fU & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b)))
                                   : (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                                      >> (0x1fU & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b))))) 
                         << 0x17U) | ((IData)(((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                                                ^ vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b) 
                                               >> 0x20U)) 
                                      >> 0xeU)));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x18U] 
        = (((IData)(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__if_inst_sll_ex)
                      ? (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                         >> (0x3fU & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b)))
                      : (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                         >> (0x1fU & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b))))) 
            >> 9U) | ((IData)((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__if_inst_sll_ex)
                                 ? (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                                    >> (0x3fU & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b)))
                                 : (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                                    >> (0x1fU & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b)))) 
                               >> 0x20U)) << 0x17U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x19U] 
        = (0x8000000U | (((IData)(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__if_inst_sll_ex)
                                    ? (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                                       << (0x3fU & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b)))
                                    : (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                                       << (0x1fU & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b))))) 
                          << 0x1cU) | ((IData)((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__if_inst_sll_ex)
                                                  ? 
                                                 (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                                                  >> 
                                                  (0x3fU 
                                                   & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b)))
                                                  : 
                                                 (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                                                  >> 
                                                  (0x1fU 
                                                   & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b)))) 
                                                >> 0x20U)) 
                                       >> 9U)));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x1aU] 
        = (((IData)(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__if_inst_sll_ex)
                      ? (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                         << (0x3fU & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b)))
                      : (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                         << (0x1fU & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b))))) 
            >> 4U) | ((IData)((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__if_inst_sll_ex)
                                 ? (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                                    << (0x3fU & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b)))
                                 : (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                                    << (0x1fU & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b)))) 
                               >> 0x20U)) << 0x1cU));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x1bU] 
        = (0x50000000U | ((IData)((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__if_inst_sll_ex)
                                     ? (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                                        << (0x3fU & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b)))
                                     : (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                                        << (0x1fU & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b)))) 
                                   >> 0x20U)) >> 4U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x1cU] 
        = ((IData)((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                    & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b)) 
           << 1U);
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x1dU] 
        = (((IData)((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                     & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b)) 
            >> 0x1fU) | ((IData)(((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b) 
                                  >> 0x20U)) << 1U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x1eU] 
        = (8U | (((IData)(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__if_inst_sll_ex)
                            ? VL_SHIFTRS_QQI(64,64,6, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a, 
                                             (0x3fU 
                                              & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b)))
                            : VL_SHIFTRS_QQI(64,64,5, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a, 
                                             (0x1fU 
                                              & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b))))) 
                  << 6U) | ((IData)(((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                                      & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b) 
                                     >> 0x20U)) >> 0x1fU)));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x1fU] 
        = (((IData)(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__if_inst_sll_ex)
                      ? VL_SHIFTRS_QQI(64,64,6, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a, 
                                       (0x3fU & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b)))
                      : VL_SHIFTRS_QQI(64,64,5, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a, 
                                       (0x1fU & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b))))) 
            >> 0x1aU) | ((IData)((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__if_inst_sll_ex)
                                    ? VL_SHIFTRS_QQI(64,64,6, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a, 
                                                     (0x3fU 
                                                      & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b)))
                                    : VL_SHIFTRS_QQI(64,64,5, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a, 
                                                     (0x1fU 
                                                      & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b)))) 
                                  >> 0x20U)) << 6U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x20U] 
        = (0xc0U | (((IData)(VL_SHIFTRS_QQI(64,64,6, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a, 
                                            (0x3fU 
                                             & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b)))) 
                     << 0xbU) | ((IData)((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__if_inst_sll_ex)
                                            ? VL_SHIFTRS_QQI(64,64,6, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a, 
                                                             (0x3fU 
                                                              & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b)))
                                            : VL_SHIFTRS_QQI(64,64,5, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a, 
                                                             (0x1fU 
                                                              & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b)))) 
                                          >> 0x20U)) 
                                 >> 0x1aU)));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x21U] 
        = (((IData)(VL_SHIFTRS_QQI(64,64,6, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a, 
                                   (0x3fU & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b)))) 
            >> 0x15U) | ((IData)((VL_SHIFTRS_QQI(64,64,6, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a, 
                                                 (0x3fU 
                                                  & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b))) 
                                  >> 0x20U)) << 0xbU));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x22U] 
        = (0x1000U | (((IData)((1ULL + (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                                        + (~ vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b)))) 
                       << 0x10U) | ((IData)((VL_SHIFTRS_QQI(64,64,6, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a, 
                                                            (0x3fU 
                                                             & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b))) 
                                             >> 0x20U)) 
                                    >> 0x15U)));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x23U] 
        = (((IData)((1ULL + (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                             + (~ vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b)))) 
            >> 0x10U) | ((IData)(((1ULL + (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                                           + (~ vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b))) 
                                  >> 0x20U)) << 0x10U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x24U] 
        = (0x10000U | ((__Vtemp545[0U] << 0x15U) | 
                       ((IData)(((1ULL + (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                                          + (~ vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b))) 
                                 >> 0x20U)) >> 0x10U)));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x25U] 
        = ((__Vtemp545[0U] >> 0xbU) | (__Vtemp545[1U] 
                                       << 0x15U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x26U] 
        = ((__Vtemp545[1U] >> 0xbU) | (__Vtemp545[2U] 
                                       << 0x15U));
    VL_EXTEND_WQ(65,64, __Vtemp580, vlSelf->SimTop__DOT__rw_addr);
    vlSelf->io_memAXI_0_ar_bits_addr = (0xfffffffffffffff8ULL 
                                        & (((QData)((IData)(
                                                            __Vtemp580[1U])) 
                                            << 0x20U) 
                                           | (0xfffffffffffffff8ULL 
                                              & (QData)((IData)(
                                                                __Vtemp580[0U])))));
    VL_EXTEND_WQ(65,64, __Vtemp581, vlSelf->SimTop__DOT__rw_addr);
    vlSelf->io_memAXI_0_aw_bits_addr = (0xfffffffffffffff8ULL 
                                        & (((QData)((IData)(
                                                            __Vtemp581[1U])) 
                                            << 0x20U) 
                                           | (0xfffffffffffffff8ULL 
                                              & (QData)((IData)(
                                                                __Vtemp581[0U])))));
    VL_EXTEND_WQ(65,64, __Vtemp582, vlSelf->SimTop__DOT__rw_addr);
    VL_EXTEND_WQ(65,64, __Vtemp583, vlSelf->SimTop__DOT__rw_addr);
    vlSelf->SimTop__DOT__axi_rw__DOT__axi_len = ((0U 
                                                  == 
                                                  (7U 
                                                   & __Vtemp582[0U]))
                                                  ? 0U
                                                  : 
                                                 (1U 
                                                  & (((IData)(3U) 
                                                      + 
                                                      (7U 
                                                       & __Vtemp583[0U])) 
                                                     >> 3U)));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__optype) 
                               == vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__optype) 
           == vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__lut_out 
        = (vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__optype) 
                                  == vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__optype) 
              == vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__lut_out 
        = (vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__optype) 
                                  == vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__key_list
                                  [2U])))) & vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__optype) 
              == vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__lut_out 
        = (vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__optype) 
                                  == vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__key_list
                                  [3U])))) & vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__optype) 
              == vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__lut_out 
        = (vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__optype) 
                                  == vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__key_list
                                  [4U])))) & vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__optype) 
              == vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->SimTop__DOT__u_cpu__DOT__imm_id = ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__hit)
                                                ? vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__lut_out
                                                : 0xffff0000ffff0000ULL);
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[0U][0U] 
        = vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0U];
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[0U][1U] 
        = vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[1U];
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[0U][2U] 
        = (0x1fU & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[2U]);
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[1U][0U] 
        = ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[3U] 
            << 0x1bU) | (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[2U] 
                         >> 5U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[1U][1U] 
        = ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[4U] 
            << 0x1bU) | (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[3U] 
                         >> 5U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[1U][2U] 
        = (0x1fU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[4U] 
                    >> 5U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[2U][0U] 
        = ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[5U] 
            << 0x16U) | (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[4U] 
                         >> 0xaU));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[2U][1U] 
        = ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[6U] 
            << 0x16U) | (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[5U] 
                         >> 0xaU));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[2U][2U] 
        = (0x1fU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[6U] 
                    >> 0xaU));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[3U][0U] 
        = ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[7U] 
            << 0x11U) | (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[6U] 
                         >> 0xfU));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[3U][1U] 
        = ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[8U] 
            << 0x11U) | (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[7U] 
                         >> 0xfU));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[3U][2U] 
        = (0x1fU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[8U] 
                    >> 0xfU));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[4U][0U] 
        = ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[9U] 
            << 0xcU) | (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[8U] 
                        >> 0x14U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[4U][1U] 
        = ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0xaU] 
            << 0xcU) | (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[9U] 
                        >> 0x14U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[4U][2U] 
        = (0x1fU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0xaU] 
                    >> 0x14U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[5U][0U] 
        = ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0xbU] 
            << 7U) | (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0xaU] 
                      >> 0x19U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[5U][1U] 
        = ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0xcU] 
            << 7U) | (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0xbU] 
                      >> 0x19U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[5U][2U] 
        = (0x1fU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0xcU] 
                    >> 0x19U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[6U][0U] 
        = ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0xdU] 
            << 2U) | (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0xcU] 
                      >> 0x1eU));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[6U][1U] 
        = ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0xeU] 
            << 2U) | (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0xdU] 
                      >> 0x1eU));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[6U][2U] 
        = (0x1fU & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0xfU] 
                     << 2U) | (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0xeU] 
                               >> 0x1eU)));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[7U][0U] 
        = ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x10U] 
            << 0x1dU) | (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0xfU] 
                         >> 3U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[7U][1U] 
        = ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x11U] 
            << 0x1dU) | (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x10U] 
                         >> 3U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[7U][2U] 
        = (0x1fU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x11U] 
                    >> 3U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[8U][0U] 
        = ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x12U] 
            << 0x18U) | (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x11U] 
                         >> 8U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[8U][1U] 
        = ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x13U] 
            << 0x18U) | (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x12U] 
                         >> 8U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[8U][2U] 
        = (0x1fU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x13U] 
                    >> 8U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[9U][0U] 
        = ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x14U] 
            << 0x13U) | (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x13U] 
                         >> 0xdU));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[9U][1U] 
        = ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x15U] 
            << 0x13U) | (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x14U] 
                         >> 0xdU));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[9U][2U] 
        = (0x1fU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x15U] 
                    >> 0xdU));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[0xaU][0U] 
        = ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x16U] 
            << 0xeU) | (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x15U] 
                        >> 0x12U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[0xaU][1U] 
        = ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x17U] 
            << 0xeU) | (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x16U] 
                        >> 0x12U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[0xaU][2U] 
        = (0x1fU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x17U] 
                    >> 0x12U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[0xbU][0U] 
        = ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x18U] 
            << 9U) | (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x17U] 
                      >> 0x17U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[0xbU][1U] 
        = ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x19U] 
            << 9U) | (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x18U] 
                      >> 0x17U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[0xbU][2U] 
        = (0x1fU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x19U] 
                    >> 0x17U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[0xcU][0U] 
        = ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x1aU] 
            << 4U) | (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x19U] 
                      >> 0x1cU));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[0xcU][1U] 
        = ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x1bU] 
            << 4U) | (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x1aU] 
                      >> 0x1cU));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[0xcU][2U] 
        = (0x1fU & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x1cU] 
                     << 4U) | (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x1bU] 
                               >> 0x1cU)));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[0xdU][0U] 
        = ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x1dU] 
            << 0x1fU) | (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x1cU] 
                         >> 1U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[0xdU][1U] 
        = ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x1eU] 
            << 0x1fU) | (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x1dU] 
                         >> 1U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[0xdU][2U] 
        = (0x1fU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x1eU] 
                    >> 1U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[0xeU][0U] 
        = ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x1fU] 
            << 0x1aU) | (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x1eU] 
                         >> 6U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[0xeU][1U] 
        = ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x20U] 
            << 0x1aU) | (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x1fU] 
                         >> 6U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[0xeU][2U] 
        = (0x1fU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x20U] 
                    >> 6U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[0xfU][0U] 
        = ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x21U] 
            << 0x15U) | (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x20U] 
                         >> 0xbU));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[0xfU][1U] 
        = ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x22U] 
            << 0x15U) | (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x21U] 
                         >> 0xbU));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[0xfU][2U] 
        = (0x1fU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x22U] 
                    >> 0xbU));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[0x10U][0U] 
        = ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x23U] 
            << 0x10U) | (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x22U] 
                         >> 0x10U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[0x10U][1U] 
        = ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x24U] 
            << 0x10U) | (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x23U] 
                         >> 0x10U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[0x10U][2U] 
        = (0x1fU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x24U] 
                    >> 0x10U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[0x11U][0U] 
        = ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x25U] 
            << 0xbU) | (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x24U] 
                        >> 0x15U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[0x11U][1U] 
        = ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x26U] 
            << 0xbU) | (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x25U] 
                        >> 0x15U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[0x11U][2U] 
        = (0x1fU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x26U] 
                    >> 0x15U));
    vlSelf->io_memAXI_0_ar_bits_len = vlSelf->SimTop__DOT__axi_rw__DOT__axi_len;
    vlSelf->io_memAXI_0_aw_bits_len = vlSelf->SimTop__DOT__axi_rw__DOT__axi_len;
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__pc_branch_addr 
        = (vlSelf->SimTop__DOT__u_cpu__DOT__pc_id + vlSelf->SimTop__DOT__u_cpu__DOT__imm_id);
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[0U] 
        = (0x1fU & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[1U] 
        = (0x1fU & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list
           [1U][2U]);
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list
                            [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list
                                                                   [2U][0U])));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[2U] 
        = (0x1fU & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list
           [2U][2U]);
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[3U] 
        = (((QData)((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list
                            [3U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list
                                                                   [3U][0U])));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[3U] 
        = (0x1fU & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list
           [3U][2U]);
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[4U] 
        = (((QData)((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list
                            [4U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list
                                                                   [4U][0U])));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[4U] 
        = (0x1fU & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list
           [4U][2U]);
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[5U] 
        = (((QData)((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list
                            [5U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list
                                                                   [5U][0U])));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[5U] 
        = (0x1fU & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list
           [5U][2U]);
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[6U] 
        = (((QData)((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list
                            [6U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list
                                                                   [6U][0U])));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[6U] 
        = (0x1fU & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list
           [6U][2U]);
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[7U] 
        = (((QData)((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list
                            [7U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list
                                                                   [7U][0U])));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[7U] 
        = (0x1fU & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list
           [7U][2U]);
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[8U] 
        = (((QData)((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list
                            [8U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list
                                                                   [8U][0U])));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[8U] 
        = (0x1fU & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list
           [8U][2U]);
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[9U] 
        = (((QData)((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list
                            [9U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list
                                                                   [9U][0U])));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[9U] 
        = (0x1fU & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list
           [9U][2U]);
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[0xaU] 
        = (((QData)((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list
                            [0xaU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list
                             [0xaU][0U])));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[0xaU] 
        = (0x1fU & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list
           [0xaU][2U]);
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[0xbU] 
        = (((QData)((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list
                            [0xbU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list
                             [0xbU][0U])));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[0xbU] 
        = (0x1fU & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list
           [0xbU][2U]);
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[0xcU] 
        = (((QData)((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list
                            [0xcU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list
                             [0xcU][0U])));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[0xcU] 
        = (0x1fU & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list
           [0xcU][2U]);
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[0xdU] 
        = (((QData)((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list
                            [0xdU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list
                             [0xdU][0U])));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[0xdU] 
        = (0x1fU & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list
           [0xdU][2U]);
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[0xeU] 
        = (((QData)((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list
                            [0xeU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list
                             [0xeU][0U])));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[0xeU] 
        = (0x1fU & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list
           [0xeU][2U]);
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[0xfU] 
        = (((QData)((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list
                            [0xfU][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list
                             [0xfU][0U])));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[0xfU] 
        = (0x1fU & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list
           [0xfU][2U]);
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[0x10U] 
        = (((QData)((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list
                            [0x10U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list
                             [0x10U][0U])));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[0x10U] 
        = (0x1fU & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list
           [0x10U][2U]);
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[0x11U] 
        = (((QData)((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list
                            [0x11U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list
                             [0x11U][0U])));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[0x11U] 
        = (0x1fU & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list
           [0x11U][2U]);
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_ex) 
                               == vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_ex) 
           == vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__lut_out 
        = (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_ex) 
                                  == vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_ex) 
              == vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__lut_out 
        = (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_ex) 
                                  == vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list
                                  [2U])))) & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_ex) 
              == vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__lut_out 
        = (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_ex) 
                                  == vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list
                                  [3U])))) & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_ex) 
              == vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__lut_out 
        = (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_ex) 
                                  == vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list
                                  [4U])))) & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_ex) 
              == vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__lut_out 
        = (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_ex) 
                                  == vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list
                                  [5U])))) & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_ex) 
              == vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__lut_out 
        = (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_ex) 
                                  == vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list
                                  [6U])))) & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_ex) 
              == vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__lut_out 
        = (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_ex) 
                                  == vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list
                                  [7U])))) & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_ex) 
              == vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__lut_out 
        = (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_ex) 
                                  == vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list
                                  [8U])))) & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list
              [8U]));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_ex) 
              == vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list
              [8U]));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__lut_out 
        = (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_ex) 
                                  == vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list
                                  [9U])))) & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list
              [9U]));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_ex) 
              == vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list
              [9U]));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__lut_out 
        = (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_ex) 
                                  == vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list
                                  [0xaU])))) & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list
              [0xaU]));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_ex) 
              == vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list
              [0xaU]));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__lut_out 
        = (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_ex) 
                                  == vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list
                                  [0xbU])))) & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list
              [0xbU]));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_ex) 
              == vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list
              [0xbU]));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__lut_out 
        = (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_ex) 
                                  == vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list
                                  [0xcU])))) & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list
              [0xcU]));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_ex) 
              == vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list
              [0xcU]));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__lut_out 
        = (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_ex) 
                                  == vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list
                                  [0xdU])))) & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list
              [0xdU]));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_ex) 
              == vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list
              [0xdU]));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__lut_out 
        = (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_ex) 
                                  == vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list
                                  [0xeU])))) & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list
              [0xeU]));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_ex) 
              == vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list
              [0xeU]));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__lut_out 
        = (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_ex) 
                                  == vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list
                                  [0xfU])))) & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list
              [0xfU]));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_ex) 
              == vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list
              [0xfU]));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__lut_out 
        = (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_ex) 
                                  == vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list
                                  [0x10U])))) & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list
              [0x10U]));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_ex) 
              == vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list
              [0x10U]));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__lut_out 
        = (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_ex) 
                                  == vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list
                                  [0x11U])))) & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list
              [0x11U]));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_ex) 
              == vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list
              [0x11U]));
    vlSelf->SimTop__DOT__u_cpu__DOT__value = ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__hit)
                                               ? vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__lut_out
                                               : 0xfedcba9876543210ULL);
    VL_EXTEND_WQ(68,64, __Vtemp716, vlSelf->SimTop__DOT__u_cpu__DOT__value);
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_value0____pinNumber4[0U] 
        = (IData)((((QData)((IData)((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelf->SimTop__DOT__u_cpu__DOT__value 
                                                           >> 0x1fU))))))) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__value))));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_value0____pinNumber4[1U] 
        = (IData)(((((QData)((IData)((- (IData)((1U 
                                                 & (IData)(
                                                           (vlSelf->SimTop__DOT__u_cpu__DOT__value 
                                                            >> 0x1fU))))))) 
                     << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__value))) 
                   >> 0x20U));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_value0____pinNumber4[2U] 
        = (4U | (__Vtemp716[0U] << 4U));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_value0____pinNumber4[3U] 
        = ((__Vtemp716[0U] >> 0x1cU) | (__Vtemp716[1U] 
                                        << 4U));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_value0____pinNumber4[4U] 
        = ((__Vtemp716[1U] >> 0x1cU) | (__Vtemp716[2U] 
                                        << 4U));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_value0__DOT__i0__DOT__pair_list[0U][0U] 
        = vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_value0____pinNumber4[0U];
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_value0__DOT__i0__DOT__pair_list[0U][1U] 
        = vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_value0____pinNumber4[1U];
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_value0__DOT__i0__DOT__pair_list[0U][2U] 
        = (0xfU & vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_value0____pinNumber4[2U]);
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_value0__DOT__i0__DOT__pair_list[1U][0U] 
        = ((vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_value0____pinNumber4[3U] 
            << 0x1cU) | (vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_value0____pinNumber4[2U] 
                         >> 4U));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_value0__DOT__i0__DOT__pair_list[1U][1U] 
        = ((vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_value0____pinNumber4[4U] 
            << 0x1cU) | (vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_value0____pinNumber4[3U] 
                         >> 4U));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_value0__DOT__i0__DOT__pair_list[1U][2U] 
        = (0xfU & (vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_value0____pinNumber4[4U] 
                   >> 4U));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_value0__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_value0__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_value0__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_value0__DOT__i0__DOT__key_list[0U] 
        = (0xfU & vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_value0__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_value0__DOT__i0__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_value0__DOT__i0__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_value0__DOT__i0__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_value0__DOT__i0__DOT__key_list[1U] 
        = (0xfU & vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_value0__DOT__i0__DOT__pair_list
           [1U][2U]);
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_value0__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__value_width_ctrl_ex) 
                               == vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_value0__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_value0__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_value0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__value_width_ctrl_ex) 
           == vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_value0__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_value0__DOT__i0__DOT__lut_out 
        = (vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_value0__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__value_width_ctrl_ex) 
                                  == vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_value0__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_value0__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_value0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_value0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__value_width_ctrl_ex) 
              == vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_value0__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_ex 
        = ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_value0__DOT__i0__DOT__hit)
            ? vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_value0__DOT__i0__DOT__lut_out
            : vlSelf->SimTop__DOT__u_cpu__DOT__value);
    VL_EXTEND_WQ(66,64, __Vtemp731, vlSelf->SimTop__DOT__u_cpu__DOT__reg2_value_id);
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_d_mux____pinNumber4[0U] 
        = (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_ex);
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_d_mux____pinNumber4[1U] 
        = (IData)((vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_ex 
                   >> 0x20U));
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_d_mux____pinNumber4[2U] 
        = (3U | ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__reg_write_value_wb) 
                 << 2U));
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_d_mux____pinNumber4[3U] 
        = (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__reg_write_value_wb) 
            >> 0x1eU) | ((IData)((vlSelf->SimTop__DOT__u_cpu__DOT__reg_write_value_wb 
                                  >> 0x20U)) << 2U));
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_d_mux____pinNumber4[4U] 
        = (4U | (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__reg_write_value_mem) 
                  << 4U) | ((IData)((vlSelf->SimTop__DOT__u_cpu__DOT__reg_write_value_wb 
                                     >> 0x20U)) >> 0x1eU)));
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_d_mux____pinNumber4[5U] 
        = (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__reg_write_value_mem) 
            >> 0x1cU) | ((IData)((vlSelf->SimTop__DOT__u_cpu__DOT__reg_write_value_mem 
                                  >> 0x20U)) << 4U));
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_d_mux____pinNumber4[6U] 
        = (0x20U | ((__Vtemp731[0U] << 6U) | ((IData)(
                                                      (vlSelf->SimTop__DOT__u_cpu__DOT__reg_write_value_mem 
                                                       >> 0x20U)) 
                                              >> 0x1cU)));
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_d_mux____pinNumber4[7U] 
        = ((__Vtemp731[0U] >> 0x1aU) | (__Vtemp731[1U] 
                                        << 6U));
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_d_mux____pinNumber4[8U] 
        = ((__Vtemp731[1U] >> 0x1aU) | (__Vtemp731[2U] 
                                        << 6U));
    VL_EXTEND_WQ(66,64, __Vtemp738, vlSelf->SimTop__DOT__u_cpu__DOT__reg1_value_id);
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_c_mux____pinNumber4[0U] 
        = (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_ex);
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_c_mux____pinNumber4[1U] 
        = (IData)((vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_ex 
                   >> 0x20U));
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_c_mux____pinNumber4[2U] 
        = (3U | ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__reg_write_value_wb) 
                 << 2U));
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_c_mux____pinNumber4[3U] 
        = (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__reg_write_value_wb) 
            >> 0x1eU) | ((IData)((vlSelf->SimTop__DOT__u_cpu__DOT__reg_write_value_wb 
                                  >> 0x20U)) << 2U));
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_c_mux____pinNumber4[4U] 
        = (4U | (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__reg_write_value_mem) 
                  << 4U) | ((IData)((vlSelf->SimTop__DOT__u_cpu__DOT__reg_write_value_wb 
                                     >> 0x20U)) >> 0x1eU)));
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_c_mux____pinNumber4[5U] 
        = (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__reg_write_value_mem) 
            >> 0x1cU) | ((IData)((vlSelf->SimTop__DOT__u_cpu__DOT__reg_write_value_mem 
                                  >> 0x20U)) << 4U));
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_c_mux____pinNumber4[6U] 
        = (0x20U | ((__Vtemp738[0U] << 6U) | ((IData)(
                                                      (vlSelf->SimTop__DOT__u_cpu__DOT__reg_write_value_mem 
                                                       >> 0x20U)) 
                                              >> 0x1cU)));
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_c_mux____pinNumber4[7U] 
        = ((__Vtemp738[0U] >> 0x1aU) | (__Vtemp738[1U] 
                                        << 6U));
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_c_mux____pinNumber4[8U] 
        = ((__Vtemp738[1U] >> 0x1aU) | (__Vtemp738[2U] 
                                        << 6U));
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__pair_list[0U][0U] 
        = vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_d_mux____pinNumber4[0U];
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__pair_list[0U][1U] 
        = vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_d_mux____pinNumber4[1U];
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__pair_list[0U][2U] 
        = (3U & vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_d_mux____pinNumber4[2U]);
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__pair_list[1U][0U] 
        = ((vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_d_mux____pinNumber4[3U] 
            << 0x1eU) | (vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_d_mux____pinNumber4[2U] 
                         >> 2U));
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__pair_list[1U][1U] 
        = ((vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_d_mux____pinNumber4[4U] 
            << 0x1eU) | (vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_d_mux____pinNumber4[3U] 
                         >> 2U));
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__pair_list[1U][2U] 
        = (3U & (vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_d_mux____pinNumber4[4U] 
                 >> 2U));
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__pair_list[2U][0U] 
        = ((vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_d_mux____pinNumber4[5U] 
            << 0x1cU) | (vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_d_mux____pinNumber4[4U] 
                         >> 4U));
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__pair_list[2U][1U] 
        = ((vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_d_mux____pinNumber4[6U] 
            << 0x1cU) | (vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_d_mux____pinNumber4[5U] 
                         >> 4U));
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__pair_list[2U][2U] 
        = (3U & (vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_d_mux____pinNumber4[6U] 
                 >> 4U));
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__pair_list[3U][0U] 
        = ((vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_d_mux____pinNumber4[7U] 
            << 0x1aU) | (vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_d_mux____pinNumber4[6U] 
                         >> 6U));
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__pair_list[3U][1U] 
        = ((vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_d_mux____pinNumber4[8U] 
            << 0x1aU) | (vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_d_mux____pinNumber4[7U] 
                         >> 6U));
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__pair_list[3U][2U] 
        = (3U & (vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_d_mux____pinNumber4[8U] 
                 >> 6U));
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__pair_list[0U][0U] 
        = vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_c_mux____pinNumber4[0U];
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__pair_list[0U][1U] 
        = vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_c_mux____pinNumber4[1U];
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__pair_list[0U][2U] 
        = (3U & vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_c_mux____pinNumber4[2U]);
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__pair_list[1U][0U] 
        = ((vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_c_mux____pinNumber4[3U] 
            << 0x1eU) | (vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_c_mux____pinNumber4[2U] 
                         >> 2U));
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__pair_list[1U][1U] 
        = ((vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_c_mux____pinNumber4[4U] 
            << 0x1eU) | (vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_c_mux____pinNumber4[3U] 
                         >> 2U));
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__pair_list[1U][2U] 
        = (3U & (vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_c_mux____pinNumber4[4U] 
                 >> 2U));
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__pair_list[2U][0U] 
        = ((vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_c_mux____pinNumber4[5U] 
            << 0x1cU) | (vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_c_mux____pinNumber4[4U] 
                         >> 4U));
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__pair_list[2U][1U] 
        = ((vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_c_mux____pinNumber4[6U] 
            << 0x1cU) | (vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_c_mux____pinNumber4[5U] 
                         >> 4U));
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__pair_list[2U][2U] 
        = (3U & (vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_c_mux____pinNumber4[6U] 
                 >> 4U));
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__pair_list[3U][0U] 
        = ((vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_c_mux____pinNumber4[7U] 
            << 0x1aU) | (vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_c_mux____pinNumber4[6U] 
                         >> 6U));
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__pair_list[3U][1U] 
        = ((vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_c_mux____pinNumber4[8U] 
            << 0x1aU) | (vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_c_mux____pinNumber4[7U] 
                         >> 6U));
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__pair_list[3U][2U] 
        = (3U & (vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_c_mux____pinNumber4[8U] 
                 >> 6U));
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__key_list[0U] 
        = (3U & vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__key_list[1U] 
        = (3U & vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__pair_list
           [1U][2U]);
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__pair_list
                            [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__pair_list
                                                                   [2U][0U])));
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__key_list[2U] 
        = (3U & vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__pair_list
           [2U][2U]);
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__data_list[3U] 
        = (((QData)((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__pair_list
                            [3U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__pair_list
                                                                   [3U][0U])));
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__key_list[3U] 
        = (3U & vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__pair_list
           [3U][2U]);
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__key_list[0U] 
        = (3U & vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__key_list[1U] 
        = (3U & vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__pair_list
           [1U][2U]);
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__pair_list
                            [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__pair_list
                                                                   [2U][0U])));
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__key_list[2U] 
        = (3U & vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__pair_list
           [2U][2U]);
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__data_list[3U] 
        = (((QData)((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__pair_list
                            [3U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__pair_list
                                                                   [3U][0U])));
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__key_list[3U] 
        = (3U & vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__pair_list
           [3U][2U]);
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__Forward_d) 
                               == vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__Forward_d) 
           == vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__Forward_d) 
                                  == vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__Forward_d) 
              == vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__Forward_d) 
                                  == vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__key_list
                                  [2U])))) & vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__Forward_d) 
              == vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__Forward_d) 
                                  == vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__key_list
                                  [3U])))) & vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__Forward_d) 
              == vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__operation_b_forward 
        = ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__hit)
            ? vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__lut_out
            : vlSelf->SimTop__DOT__u_cpu__DOT__reg2_value_id);
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__Forward_c) 
                               == vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__Forward_c) 
           == vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__Forward_c) 
                                  == vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__Forward_c) 
              == vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__Forward_c) 
                                  == vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__key_list
                                  [2U])))) & vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__Forward_c) 
              == vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__Forward_c) 
                                  == vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__key_list
                                  [3U])))) & vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__Forward_c) 
              == vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__operation_a_forward 
        = ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__hit)
            ? vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__lut_out
            : vlSelf->SimTop__DOT__u_cpu__DOT__reg1_value_id);
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__branch_test____pinNumber4 
        = (0x246c8aU | ((0x100000U & ((~ (IData)((0U 
                                                  != 
                                                  (vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__operation_a_forward 
                                                   ^ vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__operation_b_forward)))) 
                                      << 0x14U)) | 
                        (((IData)((0U != (vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__operation_a_forward 
                                          ^ vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__operation_b_forward))) 
                          << 0x10U) | ((VL_GTES_IQQ(1,64,64, vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__operation_a_forward, vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__operation_b_forward) 
                                        << 0xcU) | 
                                       (((vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__operation_a_forward 
                                          >= vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__operation_b_forward) 
                                         << 8U) | (
                                                   (VL_LTS_IQQ(1,64,64, vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__operation_a_forward, vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__operation_b_forward) 
                                                    << 4U) 
                                                   | (vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__operation_a_forward 
                                                      < vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__operation_b_forward)))))));
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__pair_list[0U] 
        = (0xfU & vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__branch_test____pinNumber4);
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__pair_list[1U] 
        = (0xfU & (vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__branch_test____pinNumber4 
                   >> 4U));
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__pair_list[2U] 
        = (0xfU & (vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__branch_test____pinNumber4 
                   >> 8U));
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__pair_list[3U] 
        = (0xfU & (vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__branch_test____pinNumber4 
                   >> 0xcU));
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__pair_list[4U] 
        = (0xfU & (vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__branch_test____pinNumber4 
                   >> 0x10U));
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__pair_list[5U] 
        = (0xfU & (vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__branch_test____pinNumber4 
                   >> 0x14U));
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__data_list[0U] 
        = (1U & vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__pair_list
           [0U]);
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__key_list[0U] 
        = (7U & (vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__pair_list
                 [0U] >> 1U));
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__data_list[1U] 
        = (1U & vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__pair_list
           [1U]);
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__key_list[1U] 
        = (7U & (vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__pair_list
                 [1U] >> 1U));
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__data_list[2U] 
        = (1U & vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__pair_list
           [2U]);
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__key_list[2U] 
        = (7U & (vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__pair_list
                 [2U] >> 1U));
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__data_list[3U] 
        = (1U & vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__pair_list
           [3U]);
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__key_list[3U] 
        = (7U & (vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__pair_list
                 [3U] >> 1U));
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__data_list[4U] 
        = (1U & vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__pair_list
           [4U]);
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__key_list[4U] 
        = (7U & (vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__pair_list
                 [4U] >> 1U));
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__data_list[5U] 
        = (1U & vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__pair_list
           [5U]);
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__key_list[5U] 
        = (7U & (vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__pair_list
                 [5U] >> 1U));
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__lut_out 
        = (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__branch_type_id) 
            == vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__key_list
            [0U]) & vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__branch_type_id) 
           == vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__branch_type_id) 
               == vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__key_list
               [1U]) & vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__branch_type_id) 
              == vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__branch_type_id) 
               == vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__key_list
               [2U]) & vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__branch_type_id) 
              == vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__branch_type_id) 
               == vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__key_list
               [3U]) & vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__branch_type_id) 
              == vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__branch_type_id) 
               == vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__key_list
               [4U]) & vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__branch_type_id) 
              == vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__branch_type_id) 
               == vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__key_list
               [5U]) & vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__branch_type_id) 
              == vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_en 
        = ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__hit) 
           & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__lut_out));
    vlSelf->SimTop__DOT__u_cpu__DOT__IF_Flush = ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__pipeline_stall)
                                                  ? 0U
                                                  : 
                                                 (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_en) 
                                                   | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__npc_op_id))
                                                   ? 1U
                                                   : 0U));
    vlSelf->SimTop__DOT__u_cpu__DOT__npc = ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_en)
                                             ? vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__pc_branch_addr
                                             : ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__npc_op_id)
                                                 ? 
                                                ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_jalr)
                                                  ? 
                                                 (0xfffffffffffffffeULL 
                                                  & (vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__operation_a_forward 
                                                     + vlSelf->SimTop__DOT__u_cpu__DOT__imm_id))
                                                  : vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__pc_branch_addr)
                                                 : 
                                                (4ULL 
                                                 + vlSelf->SimTop__DOT__u_cpu__DOT__pc)));
}

VL_INLINE_OPT void VSimTop___024root___sequent__TOP__3(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___sequent__TOP__3\n"); );
    // Variables
    CData/*0:0*/ __Vdly__SimTop__DOT__u_cpu__DOT__trap;
    CData/*0:0*/ __Vdlyvset__SimTop__DOT__u_cpu__DOT__regs_diff__v0;
    CData/*0:0*/ __Vdlyvset__SimTop__DOT__u_cpu__DOT__regs_diff__v1;
    QData/*63:0*/ __Vdly__SimTop__DOT__u_cpu__DOT__cycleCnt;
    QData/*63:0*/ __Vdly__SimTop__DOT__u_cpu__DOT__instrCnt;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v0;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v1;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v2;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v3;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v4;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v5;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v6;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v7;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v8;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v9;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v10;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v11;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v12;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v13;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v14;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v15;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v16;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v17;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v18;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v19;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v20;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v21;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v22;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v23;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v24;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v25;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v26;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v27;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v28;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v29;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v30;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v31;
    // Body
    __Vdly__SimTop__DOT__u_cpu__DOT__instrCnt = vlSelf->SimTop__DOT__u_cpu__DOT__instrCnt;
    __Vdly__SimTop__DOT__u_cpu__DOT__cycleCnt = vlSelf->SimTop__DOT__u_cpu__DOT__cycleCnt;
    __Vdly__SimTop__DOT__u_cpu__DOT__trap = vlSelf->SimTop__DOT__u_cpu__DOT__trap;
    __Vdlyvset__SimTop__DOT__u_cpu__DOT__regs_diff__v0 = 0U;
    __Vdlyvset__SimTop__DOT__u_cpu__DOT__regs_diff__v1 = 0U;
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_cpu__DOT__cmt_wen = 0U;
        vlSelf->SimTop__DOT__u_cpu__DOT__cmt_wdest = 0U;
        vlSelf->SimTop__DOT__u_cpu__DOT__cmt_wdata = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__cmt_pc = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__cmt_inst = 0U;
        vlSelf->SimTop__DOT__u_cpu__DOT__cmt_valid = 0U;
        __Vdly__SimTop__DOT__u_cpu__DOT__trap = 0U;
        vlSelf->SimTop__DOT__u_cpu__DOT__trap_code = 0U;
        __Vdly__SimTop__DOT__u_cpu__DOT__cycleCnt = 0ULL;
        __Vdly__SimTop__DOT__u_cpu__DOT__instrCnt = 0ULL;
    } else if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__trap)))) {
        __Vdly__SimTop__DOT__u_cpu__DOT__cycleCnt = 
            (1ULL + vlSelf->SimTop__DOT__u_cpu__DOT__cycleCnt);
        __Vdly__SimTop__DOT__u_cpu__DOT__instrCnt = 
            (vlSelf->SimTop__DOT__u_cpu__DOT__instrCnt 
             + (QData)((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__inst_valid_3)));
        vlSelf->SimTop__DOT__u_cpu__DOT__cmt_wen = vlSelf->SimTop__DOT__u_cpu__DOT__wen_wb;
        vlSelf->SimTop__DOT__u_cpu__DOT__cmt_wdest 
            = vlSelf->SimTop__DOT__u_cpu__DOT__rd_wb;
        vlSelf->SimTop__DOT__u_cpu__DOT__cmt_wdata 
            = vlSelf->SimTop__DOT__u_cpu__DOT__reg_write_value_wb;
        vlSelf->SimTop__DOT__u_cpu__DOT__cmt_pc = vlSelf->SimTop__DOT__u_cpu__DOT__pc_wb;
        vlSelf->SimTop__DOT__u_cpu__DOT__cmt_inst = vlSelf->SimTop__DOT__u_cpu__DOT__inst_wb;
        vlSelf->SimTop__DOT__u_cpu__DOT__cmt_valid 
            = vlSelf->SimTop__DOT__u_cpu__DOT__inst_valid_3;
        __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v0 
            = vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr
            [0x1fU];
        __Vdlyvset__SimTop__DOT__u_cpu__DOT__regs_diff__v0 = 1U;
        __Vdly__SimTop__DOT__u_cpu__DOT__trap = (0x6bU 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->SimTop__DOT__u_cpu__DOT__inst_wb));
        vlSelf->SimTop__DOT__u_cpu__DOT__trap_code 
            = (0xffU & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr
                               [0xaU]));
        __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v1 
            = vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr
            [0x1eU];
        __Vdlyvset__SimTop__DOT__u_cpu__DOT__regs_diff__v1 = 1U;
        __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v2 
            = vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr
            [0x1dU];
        __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v3 
            = vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr
            [0x1cU];
        __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v4 
            = vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr
            [0x1bU];
        __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v5 
            = vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr
            [0x1aU];
        __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v6 
            = vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr
            [0x19U];
        __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v7 
            = vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr
            [0x18U];
        __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v8 
            = vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr
            [0x17U];
        __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v9 
            = vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr
            [0x16U];
        __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v10 
            = vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr
            [0x15U];
        __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v11 
            = vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr
            [0x14U];
        __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v12 
            = vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr
            [0x13U];
        __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v13 
            = vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr
            [0x12U];
        __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v14 
            = vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr
            [0x11U];
        __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v15 
            = vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr
            [0x10U];
        __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v16 
            = vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr
            [0xfU];
        __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v17 
            = vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr
            [0xeU];
        __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v18 
            = vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr
            [0xdU];
        __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v19 
            = vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr
            [0xcU];
        __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v20 
            = vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr
            [0xbU];
        __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v21 
            = vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr
            [0xaU];
        __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v22 
            = vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr
            [9U];
        __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v23 
            = vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr
            [8U];
        __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v24 
            = vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr
            [7U];
        __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v25 
            = vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr
            [6U];
        __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v26 
            = vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr
            [5U];
        __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v27 
            = vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr
            [4U];
        __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v28 
            = vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr
            [3U];
        __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v29 
            = vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr
            [2U];
        __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v30 
            = vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr
            [1U];
        __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v31 
            = vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr
            [0U];
    }
    vlSelf->SimTop__DOT__u_cpu__DOT__trap = __Vdly__SimTop__DOT__u_cpu__DOT__trap;
    vlSelf->SimTop__DOT__u_cpu__DOT__cycleCnt = __Vdly__SimTop__DOT__u_cpu__DOT__cycleCnt;
    vlSelf->SimTop__DOT__u_cpu__DOT__instrCnt = __Vdly__SimTop__DOT__u_cpu__DOT__instrCnt;
    if (__Vdlyvset__SimTop__DOT__u_cpu__DOT__regs_diff__v0) {
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[0U] 
            = __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v0;
    }
    if (__Vdlyvset__SimTop__DOT__u_cpu__DOT__regs_diff__v1) {
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[1U] 
            = __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v1;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[2U] 
            = __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v2;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[3U] 
            = __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v3;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[4U] 
            = __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v4;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[5U] 
            = __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v5;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[6U] 
            = __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v6;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[7U] 
            = __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v7;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[8U] 
            = __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v8;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[9U] 
            = __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v9;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[0xaU] 
            = __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v10;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[0xbU] 
            = __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v11;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[0xcU] 
            = __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v12;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[0xdU] 
            = __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v13;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[0xeU] 
            = __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v14;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[0xfU] 
            = __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v15;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[0x10U] 
            = __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v16;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[0x11U] 
            = __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v17;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[0x12U] 
            = __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v18;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[0x13U] 
            = __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v19;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[0x14U] 
            = __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v20;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[0x15U] 
            = __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v21;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[0x16U] 
            = __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v22;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[0x17U] 
            = __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v23;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[0x18U] 
            = __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v24;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[0x19U] 
            = __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v25;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[0x1aU] 
            = __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v26;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[0x1bU] 
            = __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v27;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[0x1cU] 
            = __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v28;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[0x1dU] 
            = __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v29;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[0x1eU] 
            = __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v30;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[0x1fU] 
            = __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v31;
    }
}

VL_INLINE_OPT void VSimTop___024root___combo__TOP__4(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___combo__TOP__4\n"); );
    // Body
    vlSelf->SimTop__DOT__axi_rw__DOT__aw_hs = ((IData)(vlSelf->io_memAXI_0_aw_ready) 
                                               & (1U 
                                                  == (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__w_state)));
    vlSelf->SimTop__DOT__axi_rw__DOT__w_hs = ((IData)(vlSelf->io_memAXI_0_w_ready) 
                                              & (2U 
                                                 == (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__w_state)));
    vlSelf->SimTop__DOT__axi_rw__DOT__b_hs = ((3U == (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__w_state)) 
                                              & (IData)(vlSelf->io_memAXI_0_b_valid));
    vlSelf->SimTop__DOT__axi_rw__DOT__ar_hs = ((IData)(vlSelf->io_memAXI_0_ar_ready) 
                                               & (1U 
                                                  == (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__r_state)));
    vlSelf->SimTop__DOT__axi_rw__DOT__r_hs = ((2U == (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__r_state)) 
                                              & (IData)(vlSelf->io_memAXI_0_r_valid));
    vlSelf->SimTop__DOT__axi_rw__DOT__r_done = ((IData)(vlSelf->SimTop__DOT__axi_rw__DOT__r_hs) 
                                                & (IData)(vlSelf->io_memAXI_0_r_bits_last));
    vlSelf->SimTop__DOT__axi_rw__DOT__len_incr_en = 
        (((IData)(vlSelf->SimTop__DOT__axi_rw__DOT__len) 
          != (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__axi_len)) 
         & ((IData)(vlSelf->SimTop__DOT__axi_rw__DOT__w_hs) 
            | (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__r_hs)));
    vlSelf->SimTop__DOT__axi_rw__DOT__trans_done = 
        ((IData)(vlSelf->SimTop__DOT__rw_req) ? (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__b_hs)
          : (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__r_done));
    vlSelf->SimTop__DOT__axi_rw__DOT__rw_ready_en = 
        ((IData)(vlSelf->SimTop__DOT__axi_rw__DOT__trans_done) 
         | (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__rw_ready));
}

void VSimTop___024root___eval(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        VSimTop___024root___sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if (((~ (IData)(vlSelf->clock)) & (IData)(vlSelf->__Vclklast__TOP__clock))) {
        VSimTop___024root___sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    VSimTop___024root___combo__TOP__4(vlSelf);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    // Final
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

QData VSimTop___024root___change_request_1(VSimTop___024root* vlSelf);

VL_INLINE_OPT QData VSimTop___024root___change_request(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___change_request\n"); );
    // Body
    return (VSimTop___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData VSimTop___024root___change_request_1(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VSimTop___024root___eval_debug_assertions(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->io_perfInfo_clean & 0xfeU))) {
        Verilated::overWidthError("io_perfInfo_clean");}
    if (VL_UNLIKELY((vlSelf->io_perfInfo_dump & 0xfeU))) {
        Verilated::overWidthError("io_perfInfo_dump");}
    if (VL_UNLIKELY((vlSelf->io_memAXI_0_aw_ready & 0xfeU))) {
        Verilated::overWidthError("io_memAXI_0_aw_ready");}
    if (VL_UNLIKELY((vlSelf->io_memAXI_0_w_ready & 0xfeU))) {
        Verilated::overWidthError("io_memAXI_0_w_ready");}
    if (VL_UNLIKELY((vlSelf->io_memAXI_0_b_valid & 0xfeU))) {
        Verilated::overWidthError("io_memAXI_0_b_valid");}
    if (VL_UNLIKELY((vlSelf->io_memAXI_0_b_bits_resp 
                     & 0xfcU))) {
        Verilated::overWidthError("io_memAXI_0_b_bits_resp");}
    if (VL_UNLIKELY((vlSelf->io_memAXI_0_b_bits_id 
                     & 0xf0U))) {
        Verilated::overWidthError("io_memAXI_0_b_bits_id");}
    if (VL_UNLIKELY((vlSelf->io_memAXI_0_b_bits_user 
                     & 0xfeU))) {
        Verilated::overWidthError("io_memAXI_0_b_bits_user");}
    if (VL_UNLIKELY((vlSelf->io_memAXI_0_ar_ready & 0xfeU))) {
        Verilated::overWidthError("io_memAXI_0_ar_ready");}
    if (VL_UNLIKELY((vlSelf->io_memAXI_0_r_valid & 0xfeU))) {
        Verilated::overWidthError("io_memAXI_0_r_valid");}
    if (VL_UNLIKELY((vlSelf->io_memAXI_0_r_bits_resp 
                     & 0xfcU))) {
        Verilated::overWidthError("io_memAXI_0_r_bits_resp");}
    if (VL_UNLIKELY((vlSelf->io_memAXI_0_r_bits_last 
                     & 0xfeU))) {
        Verilated::overWidthError("io_memAXI_0_r_bits_last");}
    if (VL_UNLIKELY((vlSelf->io_memAXI_0_r_bits_id 
                     & 0xf0U))) {
        Verilated::overWidthError("io_memAXI_0_r_bits_id");}
    if (VL_UNLIKELY((vlSelf->io_memAXI_0_r_bits_user 
                     & 0xfeU))) {
        Verilated::overWidthError("io_memAXI_0_r_bits_user");}
}
#endif  // VL_DEBUG

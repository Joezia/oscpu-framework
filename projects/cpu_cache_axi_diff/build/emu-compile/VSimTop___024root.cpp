// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSimTop.h for the primary calling header

#include "VSimTop___024root.h"
#include "VSimTop__Syms.h"

#include "verilated_dpi.h"

//==========

void VSimTop___024unit____Vdpiimwrap_v_difftest_ArchFpRegState_TOP____024unit(CData/*7:0*/ coreid, QData/*63:0*/ fpr_0, QData/*63:0*/ fpr_1, QData/*63:0*/ fpr_2, QData/*63:0*/ fpr_3, QData/*63:0*/ fpr_4, QData/*63:0*/ fpr_5, QData/*63:0*/ fpr_6, QData/*63:0*/ fpr_7, QData/*63:0*/ fpr_8, QData/*63:0*/ fpr_9, QData/*63:0*/ fpr_10, QData/*63:0*/ fpr_11, QData/*63:0*/ fpr_12, QData/*63:0*/ fpr_13, QData/*63:0*/ fpr_14, QData/*63:0*/ fpr_15, QData/*63:0*/ fpr_16, QData/*63:0*/ fpr_17, QData/*63:0*/ fpr_18, QData/*63:0*/ fpr_19, QData/*63:0*/ fpr_20, QData/*63:0*/ fpr_21, QData/*63:0*/ fpr_22, QData/*63:0*/ fpr_23, QData/*63:0*/ fpr_24, QData/*63:0*/ fpr_25, QData/*63:0*/ fpr_26, QData/*63:0*/ fpr_27, QData/*63:0*/ fpr_28, QData/*63:0*/ fpr_29, QData/*63:0*/ fpr_30, QData/*63:0*/ fpr_31);
void VSimTop___024unit____Vdpiimwrap_v_difftest_ArchIntRegState_TOP____024unit(CData/*7:0*/ coreid, QData/*63:0*/ gpr_0, QData/*63:0*/ gpr_1, QData/*63:0*/ gpr_2, QData/*63:0*/ gpr_3, QData/*63:0*/ gpr_4, QData/*63:0*/ gpr_5, QData/*63:0*/ gpr_6, QData/*63:0*/ gpr_7, QData/*63:0*/ gpr_8, QData/*63:0*/ gpr_9, QData/*63:0*/ gpr_10, QData/*63:0*/ gpr_11, QData/*63:0*/ gpr_12, QData/*63:0*/ gpr_13, QData/*63:0*/ gpr_14, QData/*63:0*/ gpr_15, QData/*63:0*/ gpr_16, QData/*63:0*/ gpr_17, QData/*63:0*/ gpr_18, QData/*63:0*/ gpr_19, QData/*63:0*/ gpr_20, QData/*63:0*/ gpr_21, QData/*63:0*/ gpr_22, QData/*63:0*/ gpr_23, QData/*63:0*/ gpr_24, QData/*63:0*/ gpr_25, QData/*63:0*/ gpr_26, QData/*63:0*/ gpr_27, QData/*63:0*/ gpr_28, QData/*63:0*/ gpr_29, QData/*63:0*/ gpr_30, QData/*63:0*/ gpr_31);
void VSimTop___024unit____Vdpiimwrap_v_difftest_CSRState_TOP____024unit(CData/*7:0*/ coreid, CData/*7:0*/ priviledgeMode, QData/*63:0*/ mstatus, QData/*63:0*/ sstatus, QData/*63:0*/ mepc, QData/*63:0*/ sepc, QData/*63:0*/ mtval, QData/*63:0*/ stval, QData/*63:0*/ mtvec, QData/*63:0*/ stvec, QData/*63:0*/ mcause, QData/*63:0*/ scause, QData/*63:0*/ satp, QData/*63:0*/ mip, QData/*63:0*/ mie, QData/*63:0*/ mscratch, QData/*63:0*/ sscratch, QData/*63:0*/ mideleg, QData/*63:0*/ medeleg);
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
    CData/*7:0*/ SimTop__DOT__mem_write_mask_axi;
    CData/*0:0*/ SimTop__DOT__icache_stall;
    CData/*1:0*/ SimTop__DOT__u_cpu__DOT__Forward_a;
    CData/*1:0*/ SimTop__DOT__u_cpu__DOT__Forward_b;
    CData/*1:0*/ SimTop__DOT__u_cpu__DOT__Forward_c;
    CData/*1:0*/ SimTop__DOT__u_cpu__DOT__Forward_d;
    CData/*0:0*/ SimTop__DOT__u_cpu__DOT__Forward_store;
    CData/*0:0*/ SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__hit;
    CData/*0:0*/ SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__hit;
    CData/*0:0*/ SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__hit;
    CData/*0:0*/ SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_value_write__DOT__i0__DOT__hit;
    CData/*0:0*/ SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__hit;
    CData/*0:0*/ SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__hit;
    CData/*0:0*/ SimTop__DOT__u_cpu__DOT__sext__DOT__sext_value0__DOT__i0__DOT__hit;
    CData/*0:0*/ SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_en;
    CData/*0:0*/ SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__hit;
    CData/*0:0*/ SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__hit;
    CData/*0:0*/ SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__lut_out;
    CData/*0:0*/ SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__hit;
    CData/*6:0*/ __Vtableidx1;
    CData/*5:0*/ __Vtableidx2;
    CData/*6:0*/ __Vtableidx3;
    CData/*1:0*/ __Vdly__SimTop__DOT__arbitrating__DOT__arb_state;
    CData/*1:0*/ __Vdly__SimTop__DOT__arbitrating__DOT__zza_count;
    CData/*0:0*/ __Vdlyvset__SimTop__DOT__u_icache__DOT__tag__v0;
    CData/*1:0*/ __Vdly__SimTop__DOT__u_icache__DOT__icache_state;
    CData/*1:0*/ __Vdly__SimTop__DOT__u_icache__DOT__re_write_state;
    CData/*6:0*/ __Vdlyvdim0__SimTop__DOT__u_icache__DOT__tag__v64;
    CData/*0:0*/ __Vdlyvset__SimTop__DOT__u_icache__DOT__tag__v64;
    CData/*6:0*/ __Vdlyvdim0__SimTop__DOT__u_icache__DOT__tag__v65;
    CData/*0:0*/ __Vdlyvset__SimTop__DOT__u_icache__DOT__tag__v65;
    CData/*5:0*/ __Vdlyvdim0__SimTop__DOT__icache_ram__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__SimTop__DOT__icache_ram__DOT__ram__v0;
    CData/*6:0*/ __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__mul_result_cnt;
    CData/*1:0*/ __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__div_state;
    CData/*6:0*/ __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__div_cnt;
    CData/*0:0*/ __Vdlyvset__SimTop__DOT__u_cpu__DOT__rf__DOT__rf__v0;
    VlWide<7>/*197:0*/ SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__forward_a_mux____pinNumber4;
    VlWide<7>/*197:0*/ SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__forward_b_mux____pinNumber4;
    VlWide<41>/*1310:0*/ SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4;
    VlWide<7>/*200:0*/ SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__csr_value_write____pinNumber4;
    VlWide<11>/*334:0*/ SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_imm____pinNumber4;
    VlWide<15>/*475:0*/ SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4;
    VlWide<5>/*135:0*/ SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_value0____pinNumber4;
    VlWide<9>/*263:0*/ SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_c_mux____pinNumber4;
    VlWide<9>/*263:0*/ SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_d_mux____pinNumber4;
    IData/*23:0*/ SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__branch_test____pinNumber4;
    VlWide<4>/*127:0*/ __Vdlyvval__SimTop__DOT__icache_ram__DOT__ram__v0;
    VlWide<4>/*127:0*/ __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__mul_result;
    VlWide<4>/*127:0*/ __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__multiplcand;
    VlWide<4>/*127:0*/ __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__dividend_abs;
    VlWide<4>/*127:0*/ __Vtemp446;
    VlWide<4>/*127:0*/ __Vtemp447;
    VlWide<4>/*127:0*/ __Vtemp448;
    VlWide<4>/*127:0*/ __Vtemp449;
    VlWide<3>/*95:0*/ __Vtemp452;
    VlWide<3>/*95:0*/ __Vtemp453;
    VlWide<4>/*127:0*/ __Vtemp456;
    VlWide<4>/*127:0*/ __Vtemp457;
    VlWide<4>/*127:0*/ __Vtemp458;
    VlWide<4>/*127:0*/ __Vtemp460;
    VlWide<4>/*127:0*/ __Vtemp461;
    VlWide<4>/*127:0*/ __Vtemp462;
    VlWide<4>/*127:0*/ __Vtemp464;
    VlWide<4>/*127:0*/ __Vtemp465;
    VlWide<3>/*95:0*/ __Vtemp470;
    VlWide<3>/*95:0*/ __Vtemp471;
    VlWide<3>/*95:0*/ __Vtemp475;
    VlWide<3>/*95:0*/ __Vtemp476;
    VlWide<3>/*95:0*/ __Vtemp481;
    VlWide<3>/*95:0*/ __Vtemp504;
    VlWide<7>/*223:0*/ __Vtemp507;
    VlWide<9>/*287:0*/ __Vtemp509;
    VlWide<13>/*415:0*/ __Vtemp513;
    VlWide<15>/*479:0*/ __Vtemp515;
    VlWide<4>/*127:0*/ __Vtemp585;
    VlWide<5>/*159:0*/ __Vtemp607;
    VlWide<4>/*127:0*/ __Vtemp608;
    VlWide<8>/*255:0*/ __Vtemp609;
    VlWide<9>/*287:0*/ __Vtemp610;
    VlWide<3>/*95:0*/ __Vtemp612;
    VlWide<3>/*95:0*/ __Vtemp838;
    VlWide<3>/*95:0*/ __Vtemp841;
    VlWide<3>/*95:0*/ __Vtemp842;
    VlWide<3>/*95:0*/ __Vtemp855;
    VlWide<3>/*95:0*/ __Vtemp862;
    IData/*31:0*/ __Vilp;
    QData/*63:0*/ SimTop__DOT__rw_addr;
    QData/*63:0*/ SimTop__DOT__u_cpu__DOT__read_mem_value;
    QData/*63:0*/ SimTop__DOT__u_cpu__DOT__reg2_to_mem_forward;
    QData/*63:0*/ SimTop__DOT__u_cpu__DOT__reg_write_value_mem;
    QData/*63:0*/ SimTop__DOT__u_cpu__DOT__value;
    QData/*63:0*/ SimTop__DOT__u_cpu__DOT__alu_module__DOT__reg1_forwarda;
    QData/*63:0*/ SimTop__DOT__u_cpu__DOT__alu_module__DOT__a0;
    QData/*63:0*/ SimTop__DOT__u_cpu__DOT__alu_module__DOT__b0;
    QData/*63:0*/ SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_operation_a;
    QData/*63:0*/ SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__lut_out;
    QData/*63:0*/ SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__lut_out;
    QData/*63:0*/ SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__lut_out;
    QData/*63:0*/ SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_value_write__DOT__i0__DOT__lut_out;
    QData/*63:0*/ SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__lut_out;
    QData/*63:0*/ SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__lut_out;
    QData/*63:0*/ SimTop__DOT__u_cpu__DOT__sext__DOT__sext_value0__DOT__i0__DOT__lut_out;
    QData/*63:0*/ SimTop__DOT__u_cpu__DOT__npc_processing__DOT__operation_a_forward;
    QData/*63:0*/ SimTop__DOT__u_cpu__DOT__npc_processing__DOT__operation_b_forward;
    QData/*63:0*/ SimTop__DOT__u_cpu__DOT__npc_processing__DOT__pc_branch_addr;
    QData/*63:0*/ SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__lut_out;
    QData/*63:0*/ SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__lut_out;
    QData/*63:0*/ __Vdly__SimTop__DOT__u_icache__DOT__re_write_addr;
    QData/*53:0*/ __Vdlyvval__SimTop__DOT__u_icache__DOT__tag__v64;
    QData/*53:0*/ __Vdlyvval__SimTop__DOT__u_icache__DOT__tag__v65;
    QData/*63:0*/ __Vdly__SimTop__DOT__clint__DOT__mtime;
    QData/*63:0*/ __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__multipler;
    QData/*63:0*/ __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__quotient_abs;
    // Body
    __Vdly__SimTop__DOT__arbitrating__DOT__zza_count 
        = vlSelf->SimTop__DOT__arbitrating__DOT__zza_count;
    __Vdlyvset__SimTop__DOT__icache_ram__DOT__ram__v0 = 0U;
    __Vdly__SimTop__DOT__arbitrating__DOT__arb_state 
        = vlSelf->SimTop__DOT__arbitrating__DOT__arb_state;
    __Vdlyvset__SimTop__DOT__u_cpu__DOT__rf__DOT__rf__v0 = 0U;
    __Vdly__SimTop__DOT__u_icache__DOT__re_write_addr 
        = vlSelf->SimTop__DOT__u_icache__DOT__re_write_addr;
    __Vdly__SimTop__DOT__u_icache__DOT__re_write_state 
        = vlSelf->SimTop__DOT__u_icache__DOT__re_write_state;
    __Vdly__SimTop__DOT__u_icache__DOT__icache_state 
        = vlSelf->SimTop__DOT__u_icache__DOT__icache_state;
    __Vdlyvset__SimTop__DOT__u_icache__DOT__tag__v0 = 0U;
    __Vdlyvset__SimTop__DOT__u_icache__DOT__tag__v64 = 0U;
    __Vdlyvset__SimTop__DOT__u_icache__DOT__tag__v65 = 0U;
    __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__mul_result_cnt 
        = vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__mul_result_cnt;
    __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__multiplcand[0U] 
        = vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__multiplcand[0U];
    __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__multiplcand[1U] 
        = vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__multiplcand[1U];
    __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__multiplcand[2U] 
        = vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__multiplcand[2U];
    __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__multiplcand[3U] 
        = vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__multiplcand[3U];
    __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__multipler 
        = vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__multipler;
    __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__quotient_abs 
        = vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__quotient_abs;
    __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__div_cnt 
        = vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__div_cnt;
    __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__dividend_abs[0U] 
        = vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__dividend_abs[0U];
    __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__dividend_abs[1U] 
        = vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__dividend_abs[1U];
    __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__dividend_abs[2U] 
        = vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__dividend_abs[2U];
    __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__dividend_abs[3U] 
        = vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__dividend_abs[3U];
    __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__div_state 
        = vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__div_state;
    __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__mul_result[0U] 
        = vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__mul_result[0U];
    __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__mul_result[1U] 
        = vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__mul_result[1U];
    __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__mul_result[2U] 
        = vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__mul_result[2U];
    __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__mul_result[3U] 
        = vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__mul_result[3U];
    __Vdly__SimTop__DOT__clint__DOT__mtime = vlSelf->SimTop__DOT__clint__DOT__mtime;
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_cpu__DOT__pc_wen = 1U;
    }
    if (vlSelf->reset) {
        SimTop__DOT__mem_write_mask_axi = 0U;
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_cpu__DOT__pipeline_stall = 0U;
    }
    if (vlSelf->reset) {
        SimTop__DOT__u_cpu__DOT__Forward_store = 0U;
    }
    if (vlSelf->reset) {
        SimTop__DOT__u_cpu__DOT__Forward_d = 0U;
    }
    if (vlSelf->reset) {
        SimTop__DOT__u_cpu__DOT__Forward_c = 0U;
    }
    if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__axi_stall_i)))) {
        if ((1U & (~ (IData)(vlSelf->reset)))) {
            if (VL_UNLIKELY((1U & (~ ((((((((((((((
                                                   (((((((((((((((((((((((((((((((((((((((((((((((((((((0U 
                                                                                == vlSelf->SimTop__DOT__u_cpu__DOT__inst_id) 
                                                                                | (0x73U 
                                                                                == vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)) 
                                                                                | (0x30200073U 
                                                                                == vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)) 
                                                                                | (0x6bU 
                                                                                == vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)) 
                                                                                | (0x7bU 
                                                                                == vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)) 
                                                                                | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrw)) 
                                                                                | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrwi)) 
                                                                                | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrc)) 
                                                                                | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrs)) 
                                                                                | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrci)) 
                                                                                | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrsi)) 
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
    if (vlSelf->reset) {
        SimTop__DOT__u_cpu__DOT__Forward_b = 0U;
    }
    if (vlSelf->reset) {
        SimTop__DOT__u_cpu__DOT__Forward_a = 0U;
    }
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
    VSimTop___024unit____Vdpiimwrap_v_difftest_CSRState_TOP____024unit(0U, 3U, vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mstatus, 0ULL, vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mepc, 0ULL, 0ULL, 0ULL, vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mtvec, 0ULL, vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mcause, 0ULL, 0ULL, vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mip, vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mie, vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mscratch, 0ULL, 0ULL, 0ULL);
    VSimTop___024unit____Vdpiimwrap_v_difftest_TrapEvent_TOP____024unit(0U, (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__trap), 
                                                                        (7U 
                                                                         & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__trap_code)), vlSelf->SimTop__DOT__u_cpu__DOT__cmt_pc, vlSelf->SimTop__DOT__u_cpu__DOT__cycleCnt, vlSelf->SimTop__DOT__u_cpu__DOT__instrCnt);
    if (vlSelf->SimTop__DOT__u_cpu__DOT__cmt_valid) {
        VSimTop___024unit____Vdpiimwrap_v_difftest_InstrCommit_TOP____024unit(0U, 0U, (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__cmt_valid), vlSelf->SimTop__DOT__u_cpu__DOT__cmt_pc, vlSelf->SimTop__DOT__u_cpu__DOT__cmt_inst, (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__cmt_skip), 0U, 0U, (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__cmt_wen), vlSelf->SimTop__DOT__u_cpu__DOT__cmt_wdest, vlSelf->SimTop__DOT__u_cpu__DOT__cmt_wdata);
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mscratch = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mscratch_latch = 0ULL;
    } else {
        vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mscratch_latch 
            = vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mscratch;
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mip = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mip_latch = 0ULL;
    } else {
        vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mip_latch 
            = vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mip;
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__arbitrating__DOT__zza_pulse_3 = 1U;
        __Vdly__SimTop__DOT__arbitrating__DOT__zza_count = 0U;
    } else if (vlSelf->SimTop__DOT__axi_rw__DOT__trans_done) {
        vlSelf->SimTop__DOT__arbitrating__DOT__zza_pulse_3 = 0U;
        __Vdly__SimTop__DOT__arbitrating__DOT__zza_count = 1U;
    } else if ((1U == (IData)(vlSelf->SimTop__DOT__arbitrating__DOT__zza_count))) {
        __Vdly__SimTop__DOT__arbitrating__DOT__zza_count = 2U;
    } else if ((2U == (IData)(vlSelf->SimTop__DOT__arbitrating__DOT__zza_count))) {
        __Vdly__SimTop__DOT__arbitrating__DOT__zza_count = 0U;
    } else {
        vlSelf->SimTop__DOT__arbitrating__DOT__zza_pulse_3 = 1U;
    }
    vlSelf->SimTop__DOT__arbitrating__DOT__zza_pulse_1 
        = (1U & ((IData)(vlSelf->reset) | (~ (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__trans_done))));
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__arbitrating__DOT__situation_if_valid = 0U;
    } else if (((1U == (IData)(vlSelf->SimTop__DOT__arbitrating__DOT__arb_state)) 
                & (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__trans_done))) {
        vlSelf->SimTop__DOT__arbitrating__DOT__situation_if_valid 
            = ((IData)(vlSelf->SimTop__DOT__icache_valid)
                ? 1U : 0U);
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mtvec = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mtvec_latch = 0ULL;
    } else {
        vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mtvec_latch 
            = vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mtvec;
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
    __Vtableidx3 = (((IData)(vlSelf->SimTop__DOT__axi_rw__DOT__trans_done) 
                     << 6U) | (((IData)(vlSelf->SimTop__DOT__icache_valid) 
                                << 5U) | (((IData)(vlSelf->SimTop__DOT__arbitrating__DOT__zza_pulse) 
                                           << 4U) | 
                                          (((IData)(vlSelf->SimTop__DOT__mem_valid) 
                                            << 3U) 
                                           | (((IData)(vlSelf->SimTop__DOT__arbitrating__DOT__arb_state) 
                                               << 1U) 
                                              | (1U 
                                                 & (~ (IData)(vlSelf->reset))))))));
    if (VSimTop__ConstPool__TABLE_076c602d_0[__Vtableidx3]) {
        __Vdly__SimTop__DOT__arbitrating__DOT__arb_state 
            = VSimTop__ConstPool__TABLE_3403b772_0[__Vtableidx3];
    }
    if (vlSelf->reset) {
        __Vdlyvset__SimTop__DOT__u_cpu__DOT__rf__DOT__rf__v0 = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_cpu__DOT__csr_alu_op_ex = 0U;
    } else if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__axi_stall_i)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__csr_alu_op_ex 
            = vlSelf->SimTop__DOT__u_cpu__DOT__csr_alu_op_id;
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_cpu__DOT__csr_if_zimm_ex = 0U;
    } else if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__axi_stall_i)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__csr_if_zimm_ex 
            = (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrwi) 
                | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrci)) 
               | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrsi));
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_cpu__DOT__value_width_ctrl_ex = 0U;
    } else if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__axi_stall_i)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__value_width_ctrl_ex 
            = vlSelf->SimTop__DOT__u_cpu__DOT__value_width_ctrl_id;
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_cpu__DOT__csr_value_writeback_wb = 0ULL;
    } else if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__axi_stall_i)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__csr_value_writeback_wb 
            = vlSelf->SimTop__DOT__u_cpu__DOT__csr_value_writeback_mem;
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__axi_stall = 0U;
    } else if ((((IData)(vlSelf->SimTop__DOT__axi_rw__DOT__trans_done) 
                 & (1U == (IData)(vlSelf->SimTop__DOT__arbitrating__DOT__arb_state))) 
                & (~ (IData)(vlSelf->SimTop__DOT__icache_valid)))) {
        vlSelf->SimTop__DOT__axi_stall = 0U;
    } else if (((IData)(vlSelf->SimTop__DOT__axi_rw__DOT__trans_done) 
                & (2U == (IData)(vlSelf->SimTop__DOT__arbitrating__DOT__arb_state)))) {
        vlSelf->SimTop__DOT__axi_stall = 0U;
    } else if (((IData)(vlSelf->SimTop__DOT__icache_valid) 
                | ((IData)(vlSelf->SimTop__DOT__mem_valid) 
                   & (IData)(vlSelf->SimTop__DOT__arbitrating__DOT__zza_pulse)))) {
        vlSelf->SimTop__DOT__axi_stall = 1U;
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_cpu__DOT__pipeline_stall_wb = 0U;
    } else if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__axi_stall_i)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__pipeline_stall_wb 
            = vlSelf->SimTop__DOT__u_cpu__DOT__pipeline_stall_mem;
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_cpu__DOT__branch_type_wb = 0U;
    } else if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__axi_stall_i)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__branch_type_wb 
            = vlSelf->SimTop__DOT__u_cpu__DOT__branch_type_mem;
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_cpu__DOT__mem_ctrl_mem = 0U;
    } else if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__axi_stall_i)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__mem_ctrl_mem 
            = vlSelf->SimTop__DOT__u_cpu__DOT__mem_ctrl_ex;
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mie = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mie_reg = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mie_latch = 0ULL;
    } else {
        if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__axi_stall_i)))) {
            vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mie_reg 
                = vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mie;
        }
        vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mie_latch 
            = vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mie;
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mstatus = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mstatus_reg = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mstatus_latch = 0ULL;
    } else {
        if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__axi_stall_i)))) {
            vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mstatus_reg 
                = vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mstatus;
        }
        vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mstatus_latch 
            = vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mstatus;
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_cpu__DOT__csr_wen_wb = 0U;
    } else if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__axi_stall_i)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__csr_wen_wb 
            = vlSelf->SimTop__DOT__u_cpu__DOT__csr_wen_mem;
    }
    vlSelf->SimTop__DOT__u_icache__DOT__icache_stall_pre 
        = (1U & ((~ (IData)(vlSelf->reset)) & (~ ((0U 
                                                   == (IData)(vlSelf->SimTop__DOT__u_icache__DOT__icache_state)) 
                                                  & (IData)(vlSelf->SimTop__DOT__u_icache__DOT__hit)))));
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_icache__DOT__valid = 0ULL;
    }
    if (vlSelf->reset) {
        __Vdlyvset__SimTop__DOT__u_icache__DOT__tag__v0 = 1U;
    }
    if (vlSelf->reset) {
        __Vdly__SimTop__DOT__u_icache__DOT__re_write_state = 0U;
        __Vdly__SimTop__DOT__u_icache__DOT__re_write_addr = 0ULL;
        vlSelf->SimTop__DOT__u_icache__DOT__icache_valid_pre = 1U;
        vlSelf->SimTop__DOT__icache_addr = 0ULL;
        vlSelf->SimTop__DOT__icache_req = 0U;
    } else if ((0U == (IData)(vlSelf->SimTop__DOT__u_icache__DOT__re_write_state))) {
        if ((2U == (IData)(vlSelf->SimTop__DOT__u_icache__DOT__icache_state))) {
            __Vdly__SimTop__DOT__u_icache__DOT__re_write_state = 1U;
            __Vdly__SimTop__DOT__u_icache__DOT__re_write_addr 
                = vlSelf->SimTop__DOT__u_icache__DOT__addr_icache_read;
            vlSelf->SimTop__DOT__u_icache__DOT__valid = 0ULL;
            vlSelf->SimTop__DOT__u_icache__DOT__icache_valid_pre = 1U;
            vlSelf->SimTop__DOT__icache_addr = vlSelf->SimTop__DOT__u_icache__DOT__addr_icache_read;
            vlSelf->SimTop__DOT__icache_req = 0U;
        }
    } else if ((1U == (IData)(vlSelf->SimTop__DOT__u_icache__DOT__re_write_state))) {
        if (((IData)(vlSelf->SimTop__DOT__arb_if_trans_done) 
             & (IData)(vlSelf->SimTop__DOT__arb_if_r_hs))) {
            __Vdlyvval__SimTop__DOT__u_icache__DOT__tag__v64 
                = (vlSelf->SimTop__DOT__u_icache__DOT__re_write_addr 
                   >> 0xaU);
            __Vdlyvset__SimTop__DOT__u_icache__DOT__tag__v64 = 1U;
            __Vdlyvdim0__SimTop__DOT__u_icache__DOT__tag__v64 
                = (0x7fU & (IData)((vlSelf->SimTop__DOT__u_icache__DOT__re_write_addr 
                                    >> 3U)));
            vlSelf->SimTop__DOT__u_icache__DOT__icache_valid_pre = 0U;
            __Vdly__SimTop__DOT__u_icache__DOT__re_write_state = 0U;
            vlSelf->SimTop__DOT__u_icache__DOT__valid 
                = (vlSelf->SimTop__DOT__u_icache__DOT__valid 
                   | ((QData)((IData)(1U)) << (0x3fU 
                                               & (IData)(
                                                         (vlSelf->SimTop__DOT__u_icache__DOT__re_write_addr 
                                                          >> 4U)))));
        } else if (vlSelf->SimTop__DOT__arb_if_r_hs) {
            __Vdly__SimTop__DOT__u_icache__DOT__re_write_addr 
                = (8ULL + vlSelf->SimTop__DOT__u_icache__DOT__re_write_addr);
            __Vdlyvval__SimTop__DOT__u_icache__DOT__tag__v65 
                = (vlSelf->SimTop__DOT__u_icache__DOT__re_write_addr 
                   >> 0xaU);
            __Vdlyvset__SimTop__DOT__u_icache__DOT__tag__v65 = 1U;
            __Vdlyvdim0__SimTop__DOT__u_icache__DOT__tag__v65 
                = (0x7fU & (IData)((vlSelf->SimTop__DOT__u_icache__DOT__re_write_addr 
                                    >> 3U)));
            vlSelf->SimTop__DOT__u_icache__DOT__valid 
                = (vlSelf->SimTop__DOT__u_icache__DOT__valid 
                   | ((QData)((IData)(1U)) << (0x3fU 
                                               & (IData)(
                                                         (vlSelf->SimTop__DOT__u_icache__DOT__re_write_addr 
                                                          >> 4U)))));
        }
    } else {
        __Vdly__SimTop__DOT__u_icache__DOT__re_write_state = 0U;
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_cpu__DOT__zimm_ex = 0U;
    } else if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__axi_stall_i)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__zimm_ex = 
            (0x1fU & (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                      >> 0xfU));
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_cpu__DOT__environment_call_wb = 0U;
    } else if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__axi_stall_i)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__environment_call_wb 
            = vlSelf->SimTop__DOT__u_cpu__DOT__environment_call_mem;
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_cpu__DOT__inst_wb = 0U;
    } else if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__axi_stall_i)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__inst_wb = vlSelf->SimTop__DOT__u_cpu__DOT__inst_mem;
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_cpu__DOT__csr_wb = 0U;
    } else if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__axi_stall_i)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__csr_wb = vlSelf->SimTop__DOT__u_cpu__DOT__csr_mem;
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mcause = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mcause_latch = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mcause_timeint_reg = 0ULL;
    } else {
        if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__axi_stall_i)))) {
            if ((1U & (~ ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__m_time_interrupt) 
                          | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__m_time_interrupt_trigger))))) {
                vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mcause_timeint_reg 
                    = vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mcause;
            }
        }
        vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mcause_latch 
            = vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mcause;
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mepc = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mepc_latch = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mepc_timeint_reg = 0ULL;
    } else {
        if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__axi_stall_i)))) {
            if ((1U & (~ ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__m_time_interrupt) 
                          | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__m_time_interrupt_trigger))))) {
                vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mepc_timeint_reg 
                    = vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mepc;
            }
        }
        vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mepc_latch 
            = vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mepc;
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_cpu__DOT__if_clint_wb = 0U;
    } else if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__axi_stall_i)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__if_clint_wb 
            = vlSelf->SimTop__DOT__u_cpu__DOT__if_clint_mem;
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__mem_data_read = 0ULL;
    } else if (((1U == (IData)(vlSelf->SimTop__DOT__arbitrating__DOT__arb_state)) 
                & (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__trans_done))) {
        vlSelf->SimTop__DOT__mem_data_read = vlSelf->io_memAXI_0_r_bits_data
            [0U];
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_cpu__DOT__write_mem_en_wb = 0U;
    } else if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__axi_stall_i)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__write_mem_en_wb 
            = ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__m_time_interrupt_trigger)
                ? 0U : (1U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__write_mem_en_mem)));
    }
    if (vlSelf->reset) {
        __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__multiplcand[0U] = 0U;
        __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__multiplcand[1U] = 0U;
        __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__multiplcand[2U] = 0U;
        __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__multiplcand[3U] = 0U;
    } else if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__device_stall)))) {
        if (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__mul_calculating) {
            VL_SHIFTL_WWI(128,128,32, __Vtemp446, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__multiplcand, 1U);
            __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__multiplcand[0U] 
                = __Vtemp446[0U];
            __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__multiplcand[1U] 
                = __Vtemp446[1U];
            __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__multiplcand[2U] 
                = __Vtemp446[2U];
            __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__multiplcand[3U] 
                = __Vtemp446[3U];
        } else if ((0xaU == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_ex))) {
            VL_EXTEND_WQ(128,64, __Vtemp447, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a);
            __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__multiplcand[0U] 
                = __Vtemp447[0U];
            __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__multiplcand[1U] 
                = __Vtemp447[1U];
            __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__multiplcand[2U] 
                = __Vtemp447[2U];
            __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__multiplcand[3U] 
                = __Vtemp447[3U];
        }
    }
    if (vlSelf->reset) {
        __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__multipler = 0ULL;
    } else if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__device_stall)))) {
        if (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__mul_calculating) {
            __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__multipler 
                = (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__multipler 
                   >> 1U);
        } else if ((0xaU == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_ex))) {
            __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__multipler 
                = vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b;
        }
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_cpu__DOT__if_inst_sll_ex = 0U;
    } else if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__axi_stall_i)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__if_inst_sll_ex 
            = (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sll) 
                | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sra)) 
               | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_srl));
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_cpu__DOT__csr_value_ex = 0ULL;
    } else if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__axi_stall_i)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__csr_value_ex 
            = (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__csr_ren) 
                & (0x300U == (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                              >> 0x14U))) ? vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mstatus
                : (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__csr_ren) 
                    & (0x305U == (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                  >> 0x14U))) ? vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mtvec
                    : (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__csr_ren) 
                        & (0x341U == (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                      >> 0x14U))) ? vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mepc
                        : (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__csr_ren) 
                            & (0x342U == (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                          >> 0x14U)))
                            ? vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mcause
                            : 0ULL))));
    }
    if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__device_stall)))) {
        if (vlSelf->reset) {
            __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__div_state = 0U;
            __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__div_cnt = 0U;
            __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__dividend_abs[0U] = 0U;
            __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__dividend_abs[1U] = 0U;
            __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__dividend_abs[2U] = 0U;
            __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__dividend_abs[3U] = 0U;
            vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__divisor_abs[0U] = 0U;
            vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__divisor_abs[1U] = 0U;
            vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__divisor_abs[2U] = 0U;
            __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__quotient_abs = 0ULL;
        } else if ((0U == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__div_state))) {
            if (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_ready) {
                __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__div_state = 1U;
                __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__div_cnt = 0U;
                VL_EXTEND_WQ(128,64, __Vtemp448, (1ULL 
                                                  + 
                                                  (~ vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a)));
                VL_EXTEND_WQ(128,64, __Vtemp449, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a);
                if (((0xcU == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_ex)) 
                     & (IData)((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                                >> 0x3fU)))) {
                    __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__dividend_abs[0U] 
                        = __Vtemp448[0U];
                    __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__dividend_abs[1U] 
                        = __Vtemp448[1U];
                    __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__dividend_abs[2U] 
                        = __Vtemp448[2U];
                    __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__dividend_abs[3U] 
                        = __Vtemp448[3U];
                } else {
                    __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__dividend_abs[0U] 
                        = __Vtemp449[0U];
                    __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__dividend_abs[1U] 
                        = __Vtemp449[1U];
                    __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__dividend_abs[2U] 
                        = __Vtemp449[2U];
                    __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__dividend_abs[3U] 
                        = __Vtemp449[3U];
                }
                VL_EXTEND_WQ(65,64, __Vtemp452, (1ULL 
                                                 + 
                                                 (~ vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b)));
                VL_EXTEND_WQ(65,64, __Vtemp453, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b);
                if (((0xcU == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_ex)) 
                     & (IData)((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b 
                                >> 0x3fU)))) {
                    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__divisor_abs[0U] 
                        = __Vtemp452[0U];
                    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__divisor_abs[1U] 
                        = __Vtemp452[1U];
                    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__divisor_abs[2U] 
                        = __Vtemp452[2U];
                } else {
                    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__divisor_abs[0U] 
                        = __Vtemp453[0U];
                    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__divisor_abs[1U] 
                        = __Vtemp453[1U];
                    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__divisor_abs[2U] 
                        = __Vtemp453[2U];
                }
                __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__quotient_abs = 0ULL;
            } else {
                __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__div_state = 0U;
                __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__div_cnt = 0U;
                __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__dividend_abs[0U] = 0U;
                __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__dividend_abs[1U] = 0U;
                __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__dividend_abs[2U] = 0U;
                __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__dividend_abs[3U] = 0U;
                vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__divisor_abs[0U] = 0U;
                vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__divisor_abs[1U] = 0U;
                vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__divisor_abs[2U] = 0U;
                __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__quotient_abs = 0ULL;
            }
        } else if ((1U == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__div_state))) {
            if ((0x3fU == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__div_cnt))) {
                VL_SHIFTL_WWI(128,128,32, __Vtemp456, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__dividend_abs, 1U);
                __Vtemp457[0U] = (IData)((0x7fffffffffffffffULL 
                                          & (((QData)((IData)(
                                                              vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__dividend_abs[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__dividend_abs[0U])))));
                __Vtemp457[1U] = ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__diff_temp[0U] 
                                   << 0x1fU) | (IData)(
                                                       ((0x7fffffffffffffffULL 
                                                         & (((QData)((IData)(
                                                                             vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__dividend_abs[1U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__dividend_abs[0U])))) 
                                                        >> 0x20U)));
                __Vtemp457[2U] = ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__diff_temp[0U] 
                                   >> 1U) | (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__diff_temp[1U] 
                                             << 0x1fU));
                __Vtemp457[3U] = ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__diff_temp[1U] 
                                   >> 1U) | (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__diff_temp[2U] 
                                             << 0x1fU));
                VL_SHIFTL_WWI(128,128,32, __Vtemp458, __Vtemp457, 1U);
                if (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__diff_neg) {
                    __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__dividend_abs[0U] 
                        = __Vtemp456[0U];
                    __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__dividend_abs[1U] 
                        = __Vtemp456[1U];
                    __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__dividend_abs[2U] 
                        = __Vtemp456[2U];
                    __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__dividend_abs[3U] 
                        = __Vtemp456[3U];
                } else {
                    __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__dividend_abs[0U] 
                        = __Vtemp458[0U];
                    __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__dividend_abs[1U] 
                        = __Vtemp458[1U];
                    __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__dividend_abs[2U] 
                        = __Vtemp458[2U];
                    __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__dividend_abs[3U] 
                        = __Vtemp458[3U];
                }
                __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__quotient_abs 
                    = ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__quotient_abs 
                        << 1U) | (QData)((IData)((1U 
                                                  & (~ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__diff_neg))))));
                __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__div_cnt 
                    = (0x7fU & ((IData)(1U) + (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__div_cnt)));
                __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__div_state = 2U;
            } else {
                VL_SHIFTL_WWI(128,128,32, __Vtemp460, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__dividend_abs, 1U);
                __Vtemp461[0U] = (IData)((0x7fffffffffffffffULL 
                                          & (((QData)((IData)(
                                                              vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__dividend_abs[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__dividend_abs[0U])))));
                __Vtemp461[1U] = ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__diff_temp[0U] 
                                   << 0x1fU) | (IData)(
                                                       ((0x7fffffffffffffffULL 
                                                         & (((QData)((IData)(
                                                                             vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__dividend_abs[1U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__dividend_abs[0U])))) 
                                                        >> 0x20U)));
                __Vtemp461[2U] = ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__diff_temp[0U] 
                                   >> 1U) | (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__diff_temp[1U] 
                                             << 0x1fU));
                __Vtemp461[3U] = ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__diff_temp[1U] 
                                   >> 1U) | (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__diff_temp[2U] 
                                             << 0x1fU));
                VL_SHIFTL_WWI(128,128,32, __Vtemp462, __Vtemp461, 1U);
                if (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__diff_neg) {
                    __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__dividend_abs[0U] 
                        = __Vtemp460[0U];
                    __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__dividend_abs[1U] 
                        = __Vtemp460[1U];
                    __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__dividend_abs[2U] 
                        = __Vtemp460[2U];
                    __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__dividend_abs[3U] 
                        = __Vtemp460[3U];
                } else {
                    __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__dividend_abs[0U] 
                        = __Vtemp462[0U];
                    __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__dividend_abs[1U] 
                        = __Vtemp462[1U];
                    __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__dividend_abs[2U] 
                        = __Vtemp462[2U];
                    __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__dividend_abs[3U] 
                        = __Vtemp462[3U];
                }
                __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__quotient_abs 
                    = ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__quotient_abs 
                        << 1U) | (QData)((IData)((1U 
                                                  & (~ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__diff_neg))))));
                __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__div_cnt 
                    = (0x7fU & ((IData)(1U) + (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__div_cnt)));
            }
        } else {
            __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__div_state = 0U;
        }
    }
    if (vlSelf->reset) {
        __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__mul_result[0U] = 0U;
        __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__mul_result[1U] = 0U;
        __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__mul_result[2U] = 0U;
        __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__mul_result[3U] = 0U;
        __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__mul_result[0U] = 0U;
        __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__mul_result[1U] = 0U;
        __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__mul_result[2U] = 0U;
        __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__mul_result[3U] = 0U;
    } else if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__device_stall)))) {
        if (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__mul_calculating) 
             & (0x3fU == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__mul_result_cnt)))) {
            VL_ADD_W(4, __Vtemp464, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__mul_result, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__mul_result_partial);
            __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__mul_result[0U] 
                = __Vtemp464[0U];
            __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__mul_result[1U] 
                = __Vtemp464[1U];
            __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__mul_result[2U] 
                = __Vtemp464[2U];
            __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__mul_result[3U] 
                = __Vtemp464[3U];
            __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__mul_result_cnt 
                = (0x7fU & ((IData)(1U) + (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__mul_result_cnt)));
        } else if (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__mul_calculating) {
            VL_ADD_W(4, __Vtemp465, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__mul_result, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__mul_result_partial);
            __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__mul_result[0U] 
                = __Vtemp465[0U];
            __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__mul_result[1U] 
                = __Vtemp465[1U];
            __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__mul_result[2U] 
                = __Vtemp465[2U];
            __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__mul_result[3U] 
                = __Vtemp465[3U];
            __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__mul_result_cnt 
                = (0x7fU & ((IData)(1U) + (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__mul_result_cnt)));
        } else if ((0xaU == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_ex))) {
            __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__mul_result_cnt = 0U;
            __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__mul_result[0U] = 0U;
            __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__mul_result[1U] = 0U;
            __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__mul_result[2U] = 0U;
            __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__mul_result[3U] = 0U;
        }
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_cpu__DOT__operator_a_w_s_ex = 0U;
    } else if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__axi_stall_i)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__operator_a_w_s_ex 
            = ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sraiw) 
               | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sraw));
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_cpu__DOT__operator_b_w_ex = 0U;
    } else if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__axi_stall_i)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__operator_b_w_ex 
            = ((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_divw) 
                 | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_divuw)) 
                | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_remw)) 
               | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_remuw));
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_cpu__DOT__operator_a_w_ex = 0U;
    } else if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__axi_stall_i)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__operator_a_w_ex 
            = ((((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_divw) 
                   | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_divuw)) 
                  | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_remw)) 
                 | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_remuw)) 
                | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_srliw)) 
               | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_srlw));
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_cpu__DOT__reg2_value_mem = 0ULL;
    } else if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__axi_stall_i)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__reg2_value_mem 
            = vlSelf->SimTop__DOT__u_cpu__DOT__reg2_value_forwardb_ex;
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_cpu__DOT__npc_op_ex = 0U;
    } else if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__axi_stall_i)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__npc_op_ex 
            = vlSelf->SimTop__DOT__u_cpu__DOT__npc_op_id;
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_cpu__DOT__imm_ex = 0ULL;
    } else if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__axi_stall_i)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__imm_ex = vlSelf->SimTop__DOT__u_cpu__DOT__imm_id;
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_cpu__DOT__alu_only_imm_ex = 0U;
    } else if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__axi_stall_i)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__alu_only_imm_ex 
            = vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lui;
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_cpu__DOT__alu_pc_reg1_ex = 0U;
    } else if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__axi_stall_i)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__alu_pc_reg1_ex 
            = (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_auipc) 
                | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_jal)) 
               | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_jalr));
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_cpu__DOT__pc_wb = 0ULL;
    } else if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__axi_stall_i)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__pc_wb = vlSelf->SimTop__DOT__u_cpu__DOT__pc_mem;
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_cpu__DOT__alu_imm_reg2_ex = 0U;
    } else if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__axi_stall_i)))) {
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
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_cpu__DOT__rs1_ex = 0U;
    } else if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__axi_stall_i)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__rs1_ex = (0x1fU 
                                                   & (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                                      >> 0xfU));
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_cpu__DOT__rs2_mem = 0U;
    } else if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__axi_stall_i)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__rs2_mem = vlSelf->SimTop__DOT__u_cpu__DOT__rs2_ex;
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_cpu__DOT__wen_wb = 0U;
    } else if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__axi_stall_i)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__wen_wb = ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__m_time_interrupt_trigger)
                                                    ? 0U
                                                    : 
                                                   (1U 
                                                    & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__wen_mem)));
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_cpu__DOT__rd_wb = 0U;
    } else if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__axi_stall_i)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__rd_wb = vlSelf->SimTop__DOT__u_cpu__DOT__rd_mem;
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_cpu__DOT__reg2_value_ex = 0ULL;
    } else if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__axi_stall_i)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__reg2_value_ex 
            = vlSelf->SimTop__DOT__u_cpu__DOT__reg2_value_id;
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_cpu__DOT__reg1_value_ex = 0ULL;
    } else if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__axi_stall_i)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__reg1_value_ex 
            = vlSelf->SimTop__DOT__u_cpu__DOT__reg1_value_id;
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_cpu__DOT__sext_read_mem_value_wb = 0ULL;
    } else if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__axi_stall_i)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__sext_read_mem_value_wb 
            = vlSelf->SimTop__DOT__u_cpu__DOT__sext_read_mem_value_mem;
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_cpu__DOT__read_mem_en_wb = 0U;
    } else if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__axi_stall_i)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__read_mem_en_wb 
            = vlSelf->SimTop__DOT__u_cpu__DOT__read_mem_en_mem;
    }
    if (vlSelf->reset) {
        __Vdly__SimTop__DOT__clint__DOT__mtime = 0ULL;
        vlSelf->SimTop__DOT__clint_data_read = 0ULL;
    } else {
        __Vdly__SimTop__DOT__clint__DOT__mtime = (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__clint_wen) 
                                                   & (0xbff8U 
                                                      == 
                                                      (0xffffU 
                                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem))))
                                                   ? vlSelf->SimTop__DOT__u_cpu__DOT__memory__DOT__value_writen_to_mem
                                                   : 
                                                  (1ULL 
                                                   + vlSelf->SimTop__DOT__clint__DOT__mtime));
        if ((IData)(((0x2004000ULL == (0xffffffffULL 
                                       & vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)) 
                     & (1U == (1U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__read_mem_en_mem)))))) {
            vlSelf->SimTop__DOT__clint_data_read = vlSelf->SimTop__DOT__clint__DOT__mtimecmp;
        }
        if ((IData)(((0x200bff8ULL == (0xffffffffULL 
                                       & vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)) 
                     & (1U == (1U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__read_mem_en_mem)))))) {
            vlSelf->SimTop__DOT__clint_data_read = vlSelf->SimTop__DOT__clint__DOT__mtime;
        }
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_wb = 0ULL;
    } else if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__axi_stall_i)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_wb 
            = vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem;
    }
    vlSelf->SimTop__DOT__arbitrating__DOT__zza_count 
        = __Vdly__SimTop__DOT__arbitrating__DOT__zza_count;
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
    if (__Vdlyvset__SimTop__DOT__u_icache__DOT__tag__v0) {
        __Vilp = 0U;
        while ((__Vilp <= 0x3fU)) {
            vlSelf->SimTop__DOT__u_icache__DOT__tag[__Vilp] = 0ULL;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    if (__Vdlyvset__SimTop__DOT__u_icache__DOT__tag__v64) {
        vlSelf->SimTop__DOT__u_icache__DOT__tag[__Vdlyvdim0__SimTop__DOT__u_icache__DOT__tag__v64] 
            = __Vdlyvval__SimTop__DOT__u_icache__DOT__tag__v64;
    }
    if (__Vdlyvset__SimTop__DOT__u_icache__DOT__tag__v65) {
        vlSelf->SimTop__DOT__u_icache__DOT__tag[__Vdlyvdim0__SimTop__DOT__u_icache__DOT__tag__v65] 
            = __Vdlyvval__SimTop__DOT__u_icache__DOT__tag__v65;
    }
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__multiplcand[0U] 
        = __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__multiplcand[0U];
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__multiplcand[1U] 
        = __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__multiplcand[1U];
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__multiplcand[2U] 
        = __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__multiplcand[2U];
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__multiplcand[3U] 
        = __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__multiplcand[3U];
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__multipler 
        = __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__multipler;
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__div_cnt 
        = __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__div_cnt;
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__quotient_abs 
        = __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__quotient_abs;
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__dividend_abs[0U] 
        = __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__dividend_abs[0U];
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__dividend_abs[1U] 
        = __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__dividend_abs[1U];
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__dividend_abs[2U] 
        = __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__dividend_abs[2U];
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__dividend_abs[3U] 
        = __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__dividend_abs[3U];
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__div_state 
        = __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__div_state;
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__mul_result_cnt 
        = __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__mul_result_cnt;
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__mul_result[0U] 
        = __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__mul_result[0U];
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__mul_result[1U] 
        = __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__mul_result[1U];
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__mul_result[2U] 
        = __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__mul_result[2U];
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__mul_result[3U] 
        = __Vdly__SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__mul_result[3U];
    vlSelf->SimTop__DOT__clint__DOT__mtime = __Vdly__SimTop__DOT__clint__DOT__mtime;
    vlSelf->SimTop__DOT__arbitrating__DOT__zza_pulse 
        = ((IData)(vlSelf->SimTop__DOT__arbitrating__DOT__situation_if_valid)
            ? (IData)(vlSelf->SimTop__DOT__arbitrating__DOT__zza_pulse_3)
            : (IData)(vlSelf->SimTop__DOT__arbitrating__DOT__zza_pulse_1));
    vlSelf->io_memAXI_0_aw_valid = (1U == (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__w_state));
    vlSelf->io_memAXI_0_w_valid = (2U == (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__w_state));
    vlSelf->io_memAXI_0_b_ready = (3U == (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__w_state));
    vlSelf->io_memAXI_0_ar_valid = (1U == (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__r_state));
    vlSelf->io_memAXI_0_r_ready = (2U == (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__r_state));
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_cpu__DOT__csr_value_writeback_mem = 0ULL;
    } else if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__axi_stall_i)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__csr_value_writeback_mem 
            = vlSelf->SimTop__DOT__u_cpu__DOT__csr_value_writeback_ex;
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_cpu__DOT__pipeline_stall_mem = 0U;
    } else if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__axi_stall_i)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__pipeline_stall_mem 
            = vlSelf->SimTop__DOT__u_cpu__DOT__pipeline_stall_ex;
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_cpu__DOT__branch_type_mem = 0U;
    } else if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__axi_stall_i)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__branch_type_mem 
            = vlSelf->SimTop__DOT__u_cpu__DOT__branch_type_ex;
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_cpu__DOT__mem_ctrl_ex = 0U;
    } else if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__axi_stall_i)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__mem_ctrl_ex 
            = vlSelf->SimTop__DOT__u_cpu__DOT__mem_ctrl_id;
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_cpu__DOT__csr_wen_mem = 0U;
    } else if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__axi_stall_i)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__csr_wen_mem 
            = vlSelf->SimTop__DOT__u_cpu__DOT__csr_wen_ex;
    }
    vlSelf->SimTop__DOT__icache_valid = ((IData)(vlSelf->SimTop__DOT__u_icache__DOT__icache_valid_pre) 
                                         & (IData)(vlSelf->SimTop__DOT__arbitrating__DOT__zza_pulse_1));
    if (vlSelf->reset) {
        __Vdly__SimTop__DOT__u_icache__DOT__icache_state = 0U;
        vlSelf->SimTop__DOT__u_icache__DOT__addr_icache_read = 0ULL;
    } else if ((0U == (IData)(vlSelf->SimTop__DOT__u_icache__DOT__icache_state))) {
        if ((0x80000000ULL <= (0xfffffffffffffff8ULL 
                               & vlSelf->SimTop__DOT__u_cpu__DOT__pc))) {
            __Vdly__SimTop__DOT__u_icache__DOT__icache_state 
                = ((IData)(vlSelf->SimTop__DOT__u_icache__DOT__hit)
                    ? 1U : 2U);
            vlSelf->SimTop__DOT__u_icache__DOT__addr_icache_read 
                = (0xfffffffffffffff8ULL & vlSelf->SimTop__DOT__u_cpu__DOT__pc);
        }
    } else if ((1U == (IData)(vlSelf->SimTop__DOT__u_icache__DOT__icache_state))) {
        if ((0U == (IData)(vlSelf->SimTop__DOT__arbitrating__DOT__arb_state))) {
            __Vdly__SimTop__DOT__u_icache__DOT__icache_state = 0U;
        }
    } else {
        __Vdly__SimTop__DOT__u_icache__DOT__icache_state 
            = ((2U == (IData)(vlSelf->SimTop__DOT__u_icache__DOT__icache_state))
                ? ((((1U == (IData)(vlSelf->SimTop__DOT__u_icache__DOT__re_write_state)) 
                     & (IData)(vlSelf->SimTop__DOT__arb_if_trans_done)) 
                    & (IData)(vlSelf->SimTop__DOT__arb_if_r_hs))
                    ? 0U : 2U) : 0U);
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_cpu__DOT__environment_call_mem = 0U;
    } else if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__axi_stall_i)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__environment_call_mem 
            = vlSelf->SimTop__DOT__u_cpu__DOT__environment_call_ex;
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_cpu__DOT__inst_mem = 0U;
    } else if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__axi_stall_i)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__inst_mem = vlSelf->SimTop__DOT__u_cpu__DOT__inst_ex;
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_cpu__DOT__csr_mem = 0U;
    } else if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__axi_stall_i)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__csr_mem = vlSelf->SimTop__DOT__u_cpu__DOT__csr_ex;
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_cpu__DOT__m_time_interrupt = 0U;
    } else {
        if (vlSelf->SimTop__DOT__u_cpu__DOT__m_time_interrupt_trigger) {
            vlSelf->SimTop__DOT__u_cpu__DOT__m_time_interrupt = 1U;
        }
        if (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__m_mode_return_wb) 
             & (~ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__axi_stall_i)))) {
            vlSelf->SimTop__DOT__u_cpu__DOT__m_time_interrupt = 0U;
        }
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_cpu__DOT__write_mem_en_mem = 0U;
    } else if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__axi_stall_i)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__write_mem_en_mem 
            = ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__m_time_interrupt_trigger)
                ? 0U : (1U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__write_mem_en_ex)));
    }
    if ((1U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__multipler))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__mul_result_partial[0U] 
            = vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__multiplcand[0U];
        vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__mul_result_partial[1U] 
            = vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__multiplcand[1U];
        vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__mul_result_partial[2U] 
            = vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__multiplcand[2U];
        vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__mul_result_partial[3U] 
            = vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__multiplcand[3U];
    } else {
        vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__mul_result_partial[0U] = 0U;
        vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__mul_result_partial[1U] = 0U;
        vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__mul_result_partial[2U] = 0U;
        vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__mul_result_partial[3U] = 0U;
    }
    __Vtemp470[0U] = ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__dividend_abs[2U] 
                       << 1U) | (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__dividend_abs[1U] 
                                 >> 0x1fU));
    __Vtemp470[1U] = ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__dividend_abs[3U] 
                       << 1U) | (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__dividend_abs[2U] 
                                 >> 0x1fU));
    __Vtemp470[2U] = (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__dividend_abs[3U] 
                      >> 0x1fU);
    VL_SUB_W(3, __Vtemp471, __Vtemp470, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__divisor_abs);
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__diff_temp[0U] 
        = __Vtemp471[0U];
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__diff_temp[1U] 
        = __Vtemp471[1U];
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__diff_temp[2U] 
        = (1U & __Vtemp471[2U]);
    __Vtemp475[0U] = ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__dividend_abs[2U] 
                       << 1U) | (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__dividend_abs[1U] 
                                 >> 0x1fU));
    __Vtemp475[1U] = ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__dividend_abs[3U] 
                       << 1U) | (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__dividend_abs[2U] 
                                 >> 0x1fU));
    __Vtemp475[2U] = (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__dividend_abs[3U] 
                      >> 0x1fU);
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__diff_neg 
        = VL_LT_W(3, __Vtemp475, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__divisor_abs);
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__mul_calculating = 0U;
    } else if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__device_stall)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__mul_calculating 
            = (1U & (~ ((0xaU != (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_ex)) 
                        | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_valid))));
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_cpu__DOT__pc_mem = 0ULL;
    } else if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__axi_stall_i)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__pc_mem = vlSelf->SimTop__DOT__u_cpu__DOT__pc_ex;
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_cpu__DOT__rs2_ex = 0U;
    } else if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__axi_stall_i)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__rs2_ex = (0x1fU 
                                                   & (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                                      >> 0x14U));
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_cpu__DOT__wen_mem = 0U;
    } else if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__axi_stall_i)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__wen_mem = 
            ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__m_time_interrupt_trigger)
              ? 0U : (1U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__wen_ex)));
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_cpu__DOT__rd_mem = 0U;
    } else if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__axi_stall_i)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__rd_mem = vlSelf->SimTop__DOT__u_cpu__DOT__rd_ex;
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_cpu__DOT__read_mem_en_mem = 0U;
    } else if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__axi_stall_i)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__read_mem_en_mem 
            = vlSelf->SimTop__DOT__u_cpu__DOT__read_mem_en_ex;
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__clint__DOT__mtimecmp = 0xf4240ULL;
    } else if (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__clint_wen) 
                & (0x4000U == (0xffffU & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem))))) {
        vlSelf->SimTop__DOT__clint__DOT__mtimecmp = vlSelf->SimTop__DOT__u_cpu__DOT__memory__DOT__value_writen_to_mem;
    }
    vlSelf->SimTop__DOT__u_cpu__DOT__reg_write_value_wb 
        = ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__read_mem_en_wb)
            ? vlSelf->SimTop__DOT__u_cpu__DOT__sext_read_mem_value_wb
            : vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_wb);
    vlSelf->SimTop__DOT__u_icache__DOT__re_write_state 
        = __Vdly__SimTop__DOT__u_icache__DOT__re_write_state;
    vlSelf->SimTop__DOT__u_icache__DOT__icache_state 
        = __Vdly__SimTop__DOT__u_icache__DOT__icache_state;
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_cpu__DOT__pipeline_stall_ex = 0U;
    } else if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__axi_stall_i)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__pipeline_stall_ex 
            = vlSelf->SimTop__DOT__u_cpu__DOT__pipeline_stall;
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_cpu__DOT__branch_type_ex = 0U;
    } else if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__axi_stall_i)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__branch_type_ex 
            = vlSelf->SimTop__DOT__u_cpu__DOT__branch_type_id;
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_cpu__DOT__csr_wen_ex = 0U;
    } else if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__axi_stall_i)))) {
        if ((1U & (~ ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__pipeline_stall) 
                      | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__m_time_interrupt_trigger))))) {
            vlSelf->SimTop__DOT__u_cpu__DOT__csr_wen_ex 
                = ((((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrc) 
                       | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrs)) 
                      | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrci)) 
                     | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrsi)) 
                    | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrwi)) 
                   | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrw));
        }
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__arb_if_trans_done = 0U;
    } else if (((2U == (IData)(vlSelf->SimTop__DOT__arbitrating__DOT__arb_state)) 
                & (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__trans_done))) {
        vlSelf->SimTop__DOT__arb_if_trans_done = 1U;
    } else if ((1U & (~ ((2U == (IData)(vlSelf->SimTop__DOT__arbitrating__DOT__arb_state)) 
                         & (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__r_hs))))) {
        vlSelf->SimTop__DOT__arb_if_trans_done = 0U;
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__arb_if_r_hs = 0U;
    } else if ((1U & (~ ((2U == (IData)(vlSelf->SimTop__DOT__arbitrating__DOT__arb_state)) 
                         & (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__trans_done))))) {
        vlSelf->SimTop__DOT__arb_if_r_hs = ((2U == (IData)(vlSelf->SimTop__DOT__arbitrating__DOT__arb_state)) 
                                            & (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__r_hs));
    }
    SimTop__DOT__icache_stall = ((IData)(vlSelf->SimTop__DOT__u_icache__DOT__icache_stall_pre) 
                                 & (1U != (IData)(vlSelf->SimTop__DOT__u_icache__DOT__icache_state)));
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_cpu__DOT__environment_call_ex = 0U;
    } else if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__axi_stall_i)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__environment_call_ex 
            = (0x73U == vlSelf->SimTop__DOT__u_cpu__DOT__inst_id);
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_cpu__DOT__inst_ex = 0U;
    } else if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__axi_stall_i)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__inst_ex = vlSelf->SimTop__DOT__u_cpu__DOT__inst_id;
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_cpu__DOT__csr_ex = 0U;
    } else if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__axi_stall_i)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__csr_ex = (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                                   >> 0x14U);
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_cpu__DOT__m_mode_return_wb = 0U;
    } else if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__axi_stall_i)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__m_mode_return_wb 
            = vlSelf->SimTop__DOT__u_cpu__DOT__m_mode_return_mem;
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_cpu__DOT__write_mem_en_ex = 0U;
    } else if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__axi_stall_i)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__write_mem_en_ex 
            = ((~ ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__pipeline_stall) 
                   | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__m_time_interrupt_trigger))) 
               & ((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sd) 
                    | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sb)) 
                   | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sw)) 
                  | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sh)));
    }
    SimTop__DOT__u_cpu__DOT__Forward_store = ((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__read_mem_en_wb) 
                                                & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__write_mem_en_mem)) 
                                               & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rs2_mem) 
                                                  == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rd_wb))) 
                                              & (0U 
                                                 != (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rd_wb)));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_valid 
        = ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__mul_calculating) 
           & (~ (IData)((0U != vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__multipler))));
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_ex = 0U;
    } else if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__axi_stall_i)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_ex 
            = vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_id;
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_cpu__DOT__pc_ex = 0ULL;
    } else if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__axi_stall_i)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__pc_ex = vlSelf->SimTop__DOT__u_cpu__DOT__pc_id;
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_cpu__DOT__wen_ex = 0U;
    } else if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__axi_stall_i)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__wen_ex = (
                                                   (~ 
                                                    ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__pipeline_stall) 
                                                     | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__m_time_interrupt_trigger))) 
                                                   & ((((((((((((((((((((((((((((((((((((((((((((((((((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrc) 
                                                                                | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrs)) 
                                                                                | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrci)) 
                                                                                | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrsi)) 
                                                                                | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrw)) 
                                                                                | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrwi)) 
                                                                                | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_andi)) 
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
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_cpu__DOT__rd_ex = 0U;
    } else if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__axi_stall_i)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__rd_ex = (0x1fU 
                                                  & (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                                     >> 7U));
    }
    SimTop__DOT__u_cpu__DOT__Forward_b = ((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__wen_mem) 
                                            & (0U != (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rd_mem))) 
                                           & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rs2_ex) 
                                              == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rd_mem)))
                                           ? 2U : (
                                                   ((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__wen_wb) 
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
    SimTop__DOT__u_cpu__DOT__Forward_a = ((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__wen_mem) 
                                            & (0U != (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rd_mem))) 
                                           & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rs1_ex) 
                                              == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rd_mem)))
                                           ? 2U : (
                                                   ((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__wen_wb) 
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
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_cpu__DOT__read_mem_en_ex = 0U;
    } else if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__axi_stall_i)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__read_mem_en_ex 
            = (((((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lb) 
                    | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lbu)) 
                   | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lwu)) 
                  | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lw)) 
                 | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_ld)) 
                | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lh)) 
               | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lhu));
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem = 0ULL;
    } else if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__axi_stall_i)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem 
            = vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_ex;
    }
    vlSelf->SimTop__DOT__u_cpu__DOT__device_stall = 
        ((IData)(vlSelf->SimTop__DOT__axi_stall) | (IData)(SimTop__DOT__icache_stall));
    vlSelf->SimTop__DOT__u_cpu__DOT__memory__DOT__value_writen_to_mem 
        = ((IData)(SimTop__DOT__u_cpu__DOT__Forward_store)
            ? vlSelf->SimTop__DOT__u_cpu__DOT__reg_write_value_wb
            : vlSelf->SimTop__DOT__u_cpu__DOT__reg2_value_mem);
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_cpu__DOT__m_mode_return_mem = 0U;
    } else if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__axi_stall_i)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__m_mode_return_mem 
            = vlSelf->SimTop__DOT__u_cpu__DOT__m_mode_return_ex;
    }
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_ready 
        = ((0xcU == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_ex)) 
           | (0xbU == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_ex)));
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_cpu__DOT__pc_id = 0ULL;
    } else if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__axi_stall_i)))) {
        if (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IF_Flush) 
             | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__m_time_interrupt_trigger))) {
            vlSelf->SimTop__DOT__u_cpu__DOT__pc_id = 0ULL;
        } else if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__pipeline_stall)))) {
            vlSelf->SimTop__DOT__u_cpu__DOT__pc_id 
                = vlSelf->SimTop__DOT__u_cpu__DOT__pc;
        }
    }
    vlSelf->SimTop__DOT__u_cpu__DOT__clint_wen = ((0x200U 
                                                   == 
                                                   (0xffffU 
                                                    & (IData)(
                                                              (vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem 
                                                               >> 0x10U)))) 
                                                  & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__write_mem_en_mem));
    SimTop__DOT__mem_write_mask_axi = ((8U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__mem_ctrl_mem))
                                        ? ((4U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__mem_ctrl_mem))
                                            ? 0U : 
                                           ((2U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__mem_ctrl_mem))
                                             ? 0U : 
                                            ((1U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__mem_ctrl_mem))
                                              ? 0U : 0xffU)))
                                        : ((4U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__mem_ctrl_mem))
                                            ? ((2U 
                                                & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__mem_ctrl_mem))
                                                ? 0U
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__mem_ctrl_mem))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem 
                                                                >> 2U)))
                                                     ? 0xf0U
                                                     : 0xfU)))
                                            : ((2U 
                                                & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__mem_ctrl_mem))
                                                ? (
                                                   (1U 
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
                                                : (
                                                   (1U 
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
                                                    : 0U))));
    vlSelf->SimTop__DOT__mem_valid = ((0x200U != (0xffffU 
                                                  & (IData)(
                                                            (vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem 
                                                             >> 0x10U)))) 
                                      & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__read_mem_en_mem) 
                                         | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__write_mem_en_mem)));
    vlSelf->SimTop__DOT__u_cpu__DOT__if_clint_mem = 
        ((0x200U == (0xffffU & (IData)((vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem 
                                        >> 0x10U)))) 
         & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__read_mem_en_mem) 
            | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__write_mem_en_mem)));
    VL_EXTEND_WQ(66,64, __Vtemp476, vlSelf->SimTop__DOT__u_cpu__DOT__reg2_value_ex);
    SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__forward_b_mux____pinNumber4[0U] 
        = (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__reg_write_value_wb);
    SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__forward_b_mux____pinNumber4[1U] 
        = (IData)((vlSelf->SimTop__DOT__u_cpu__DOT__reg_write_value_wb 
                   >> 0x20U));
    SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__forward_b_mux____pinNumber4[2U] 
        = (1U | ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem) 
                 << 2U));
    SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__forward_b_mux____pinNumber4[3U] 
        = (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem) 
            >> 0x1eU) | ((IData)((vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem 
                                  >> 0x20U)) << 2U));
    SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__forward_b_mux____pinNumber4[4U] 
        = (8U | ((__Vtemp476[0U] << 4U) | ((IData)(
                                                   (vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem 
                                                    >> 0x20U)) 
                                           >> 0x1eU)));
    SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__forward_b_mux____pinNumber4[5U] 
        = ((__Vtemp476[0U] >> 0x1cU) | (__Vtemp476[1U] 
                                        << 4U));
    SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__forward_b_mux____pinNumber4[6U] 
        = ((__Vtemp476[1U] >> 0x1cU) | (__Vtemp476[2U] 
                                        << 4U));
    VL_EXTEND_WQ(66,64, __Vtemp481, vlSelf->SimTop__DOT__u_cpu__DOT__reg1_value_ex);
    SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__forward_a_mux____pinNumber4[0U] 
        = (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__reg_write_value_wb);
    SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__forward_a_mux____pinNumber4[1U] 
        = (IData)((vlSelf->SimTop__DOT__u_cpu__DOT__reg_write_value_wb 
                   >> 0x20U));
    SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__forward_a_mux____pinNumber4[2U] 
        = (1U | ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem) 
                 << 2U));
    SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__forward_a_mux____pinNumber4[3U] 
        = (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem) 
            >> 0x1eU) | ((IData)((vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem 
                                  >> 0x20U)) << 2U));
    SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__forward_a_mux____pinNumber4[4U] 
        = (8U | ((__Vtemp481[0U] << 4U) | ((IData)(
                                                   (vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem 
                                                    >> 0x20U)) 
                                           >> 0x1eU)));
    SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__forward_a_mux____pinNumber4[5U] 
        = ((__Vtemp481[0U] >> 0x1cU) | (__Vtemp481[1U] 
                                        << 4U));
    SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__forward_a_mux____pinNumber4[6U] 
        = ((__Vtemp481[1U] >> 0x1cU) | (__Vtemp481[2U] 
                                        << 4U));
    SimTop__DOT__u_cpu__DOT__reg2_to_mem_forward = 
        ((8U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__mem_ctrl_mem))
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
                                 << 0x10U) : ((4U == 
                                               (7U 
                                                & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                               ? (vlSelf->SimTop__DOT__u_cpu__DOT__memory__DOT__value_writen_to_mem 
                                                  << 0x20U)
                                               : ((6U 
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
                                 << 8U) : ((2U == (7U 
                                                   & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                            ? (vlSelf->SimTop__DOT__u_cpu__DOT__memory__DOT__value_writen_to_mem 
                                               << 0x10U)
                                            : ((3U 
                                                == 
                                                (7U 
                                                 & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                                ? (vlSelf->SimTop__DOT__u_cpu__DOT__memory__DOT__value_writen_to_mem 
                                                   << 0x18U)
                                                : (
                                                   (4U 
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
    vlSelf->io_memAXI_0_w_bits_strb = SimTop__DOT__mem_write_mask_axi;
    SimTop__DOT__u_cpu__DOT__read_mem_value = ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__if_clint_mem)
                                                ? vlSelf->SimTop__DOT__clint_data_read
                                                : vlSelf->SimTop__DOT__mem_data_read);
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__pair_list[0U][0U] 
        = SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__forward_b_mux____pinNumber4[0U];
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__pair_list[0U][1U] 
        = SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__forward_b_mux____pinNumber4[1U];
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__pair_list[0U][2U] 
        = (3U & SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__forward_b_mux____pinNumber4[2U]);
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__pair_list[1U][0U] 
        = ((SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__forward_b_mux____pinNumber4[3U] 
            << 0x1eU) | (SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__forward_b_mux____pinNumber4[2U] 
                         >> 2U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__pair_list[1U][1U] 
        = ((SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__forward_b_mux____pinNumber4[4U] 
            << 0x1eU) | (SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__forward_b_mux____pinNumber4[3U] 
                         >> 2U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__pair_list[1U][2U] 
        = (3U & (SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__forward_b_mux____pinNumber4[4U] 
                 >> 2U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__pair_list[2U][0U] 
        = ((SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__forward_b_mux____pinNumber4[5U] 
            << 0x1cU) | (SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__forward_b_mux____pinNumber4[4U] 
                         >> 4U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__pair_list[2U][1U] 
        = ((SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__forward_b_mux____pinNumber4[6U] 
            << 0x1cU) | (SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__forward_b_mux____pinNumber4[5U] 
                         >> 4U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__pair_list[2U][2U] 
        = (3U & (SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__forward_b_mux____pinNumber4[6U] 
                 >> 4U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__pair_list[0U][0U] 
        = SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__forward_a_mux____pinNumber4[0U];
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__pair_list[0U][1U] 
        = SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__forward_a_mux____pinNumber4[1U];
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__pair_list[0U][2U] 
        = (3U & SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__forward_a_mux____pinNumber4[2U]);
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__pair_list[1U][0U] 
        = ((SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__forward_a_mux____pinNumber4[3U] 
            << 0x1eU) | (SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__forward_a_mux____pinNumber4[2U] 
                         >> 2U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__pair_list[1U][1U] 
        = ((SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__forward_a_mux____pinNumber4[4U] 
            << 0x1eU) | (SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__forward_a_mux____pinNumber4[3U] 
                         >> 2U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__pair_list[1U][2U] 
        = (3U & (SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__forward_a_mux____pinNumber4[4U] 
                 >> 2U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__pair_list[2U][0U] 
        = ((SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__forward_a_mux____pinNumber4[5U] 
            << 0x1cU) | (SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__forward_a_mux____pinNumber4[4U] 
                         >> 4U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__pair_list[2U][1U] 
        = ((SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__forward_a_mux____pinNumber4[6U] 
            << 0x1cU) | (SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__forward_a_mux____pinNumber4[5U] 
                         >> 4U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__pair_list[2U][2U] 
        = (3U & (SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__forward_a_mux____pinNumber4[6U] 
                 >> 4U));
    vlSelf->io_memAXI_0_w_bits_data[0U] = SimTop__DOT__u_cpu__DOT__reg2_to_mem_forward;
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_cpu__DOT__m_mode_return_ex = 0U;
    } else if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__axi_stall_i)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__m_mode_return_ex 
            = (0x30200073U == vlSelf->SimTop__DOT__u_cpu__DOT__inst_id);
    }
    __Vtemp504[0U] = (IData)(((0U == (7U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                               ? (QData)((IData)((0xffffU 
                                                  & (IData)(SimTop__DOT__u_cpu__DOT__read_mem_value))))
                               : ((2U == (7U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                   ? (QData)((IData)(
                                                     (0xffffU 
                                                      & (IData)(
                                                                (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                 >> 0x10U)))))
                                   : ((4U == (7U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                       ? (QData)((IData)(
                                                         (0xffffU 
                                                          & (IData)(
                                                                    (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                     >> 0x20U)))))
                                       : ((6U == (7U 
                                                  & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                           ? (QData)((IData)(
                                                             (0xffffU 
                                                              & (IData)(
                                                                        (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                         >> 0x30U)))))
                                           : (QData)((IData)(
                                                             (0xffffU 
                                                              & (IData)(SimTop__DOT__u_cpu__DOT__read_mem_value)))))))));
    __Vtemp504[1U] = (IData)((((0U == (7U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                ? (QData)((IData)((0xffffU 
                                                   & (IData)(SimTop__DOT__u_cpu__DOT__read_mem_value))))
                                : ((2U == (7U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                    ? (QData)((IData)(
                                                      (0xffffU 
                                                       & (IData)(
                                                                 (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                  >> 0x10U)))))
                                    : ((4U == (7U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                        ? (QData)((IData)(
                                                          (0xffffU 
                                                           & (IData)(
                                                                     (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                      >> 0x20U)))))
                                        : ((6U == (7U 
                                                   & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                            ? (QData)((IData)(
                                                              (0xffffU 
                                                               & (IData)(
                                                                         (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                          >> 0x30U)))))
                                            : (QData)((IData)(
                                                              (0xffffU 
                                                               & (IData)(SimTop__DOT__u_cpu__DOT__read_mem_value)))))))) 
                              >> 0x20U));
    __Vtemp507[4U] = (0x90U | (((IData)(((0U == (7U 
                                                 & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                          ? (QData)((IData)(
                                                            (0xffU 
                                                             & (IData)(SimTop__DOT__u_cpu__DOT__read_mem_value))))
                                          : ((1U == 
                                              (7U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                              ? (QData)((IData)(
                                                                (0xffU 
                                                                 & (IData)(
                                                                           (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                            >> 8U)))))
                                              : ((2U 
                                                  == 
                                                  (7U 
                                                   & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                                  ? (QData)((IData)(
                                                                    (0xffU 
                                                                     & (IData)(
                                                                               (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                                >> 0x10U)))))
                                                  : 
                                                 ((3U 
                                                   == 
                                                   (7U 
                                                    & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                                   ? (QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(
                                                                                (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                                >> 0x18U)))))
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                                    ? (QData)((IData)(
                                                                      (0xffU 
                                                                       & (IData)(
                                                                                (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                                >> 0x20U)))))
                                                    : 
                                                   ((5U 
                                                     == 
                                                     (7U 
                                                      & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                                     ? (QData)((IData)(
                                                                       (0xffU 
                                                                        & (IData)(
                                                                                (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                                >> 0x28U)))))
                                                     : 
                                                    ((6U 
                                                      == 
                                                      (7U 
                                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                                      ? (QData)((IData)(
                                                                        (0xffU 
                                                                         & (IData)(
                                                                                (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                                >> 0x30U)))))
                                                      : 
                                                     ((7U 
                                                       == 
                                                       (7U 
                                                        & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                                       ? (QData)((IData)(
                                                                         (0xffU 
                                                                          & (IData)(
                                                                                (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                                >> 0x38U)))))
                                                       : (QData)((IData)(
                                                                         (0xffU 
                                                                          & (IData)(SimTop__DOT__u_cpu__DOT__read_mem_value))))))))))))) 
                                << 8U) | ((IData)((
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem 
                                                                >> 2U)))
                                                     ? (QData)((IData)(
                                                                       (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                        >> 0x20U)))
                                                     : (QData)((IData)(SimTop__DOT__u_cpu__DOT__read_mem_value))) 
                                                   >> 0x20U)) 
                                          >> 0x1cU)));
    __Vtemp507[5U] = (((IData)(((0U == (7U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                 ? (QData)((IData)(
                                                   (0xffU 
                                                    & (IData)(SimTop__DOT__u_cpu__DOT__read_mem_value))))
                                 : ((1U == (7U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                     ? (QData)((IData)(
                                                       (0xffU 
                                                        & (IData)(
                                                                  (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                   >> 8U)))))
                                     : ((2U == (7U 
                                                & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & (IData)(
                                                                      (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                       >> 0x10U)))))
                                         : ((3U == 
                                             (7U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                             ? (QData)((IData)(
                                                               (0xffU 
                                                                & (IData)(
                                                                          (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                           >> 0x18U)))))
                                             : ((4U 
                                                 == 
                                                 (7U 
                                                  & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(
                                                                              (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                               >> 0x20U)))))
                                                 : 
                                                ((5U 
                                                  == 
                                                  (7U 
                                                   & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                                  ? (QData)((IData)(
                                                                    (0xffU 
                                                                     & (IData)(
                                                                               (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                                >> 0x28U)))))
                                                  : 
                                                 ((6U 
                                                   == 
                                                   (7U 
                                                    & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                                   ? (QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(
                                                                                (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                                >> 0x30U)))))
                                                   : 
                                                  ((7U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                                    ? (QData)((IData)(
                                                                      (0xffU 
                                                                       & (IData)(
                                                                                (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                                >> 0x38U)))))
                                                    : (QData)((IData)(
                                                                      (0xffU 
                                                                       & (IData)(SimTop__DOT__u_cpu__DOT__read_mem_value))))))))))))) 
                       >> 0x18U) | ((IData)((((0U == 
                                               (7U 
                                                & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                               ? (QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(SimTop__DOT__u_cpu__DOT__read_mem_value))))
                                               : ((1U 
                                                   == 
                                                   (7U 
                                                    & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                                   ? (QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(
                                                                                (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                                >> 8U)))))
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                                    ? (QData)((IData)(
                                                                      (0xffU 
                                                                       & (IData)(
                                                                                (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                                >> 0x10U)))))
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (7U 
                                                      & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                                     ? (QData)((IData)(
                                                                       (0xffU 
                                                                        & (IData)(
                                                                                (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                                >> 0x18U)))))
                                                     : 
                                                    ((4U 
                                                      == 
                                                      (7U 
                                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                                      ? (QData)((IData)(
                                                                        (0xffU 
                                                                         & (IData)(
                                                                                (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                                >> 0x20U)))))
                                                      : 
                                                     ((5U 
                                                       == 
                                                       (7U 
                                                        & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                                       ? (QData)((IData)(
                                                                         (0xffU 
                                                                          & (IData)(
                                                                                (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                                >> 0x28U)))))
                                                       : 
                                                      ((6U 
                                                        == 
                                                        (7U 
                                                         & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                                        ? (QData)((IData)(
                                                                          (0xffU 
                                                                           & (IData)(
                                                                                (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                                >> 0x30U)))))
                                                        : 
                                                       ((7U 
                                                         == 
                                                         (7U 
                                                          & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                                         ? (QData)((IData)(
                                                                           (0xffU 
                                                                            & (IData)(
                                                                                (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                                >> 0x38U)))))
                                                         : (QData)((IData)(
                                                                           (0xffU 
                                                                            & (IData)(SimTop__DOT__u_cpu__DOT__read_mem_value)))))))))))) 
                                             >> 0x20U)) 
                                    << 8U));
    __Vtemp507[6U] = ((IData)((((0U == (7U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                 ? (QData)((IData)(
                                                   (0xffU 
                                                    & (IData)(SimTop__DOT__u_cpu__DOT__read_mem_value))))
                                 : ((1U == (7U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                     ? (QData)((IData)(
                                                       (0xffU 
                                                        & (IData)(
                                                                  (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                   >> 8U)))))
                                     : ((2U == (7U 
                                                & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                         ? (QData)((IData)(
                                                           (0xffU 
                                                            & (IData)(
                                                                      (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                       >> 0x10U)))))
                                         : ((3U == 
                                             (7U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                             ? (QData)((IData)(
                                                               (0xffU 
                                                                & (IData)(
                                                                          (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                           >> 0x18U)))))
                                             : ((4U 
                                                 == 
                                                 (7U 
                                                  & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                                 ? (QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(
                                                                              (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                               >> 0x20U)))))
                                                 : 
                                                ((5U 
                                                  == 
                                                  (7U 
                                                   & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                                  ? (QData)((IData)(
                                                                    (0xffU 
                                                                     & (IData)(
                                                                               (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                                >> 0x28U)))))
                                                  : 
                                                 ((6U 
                                                   == 
                                                   (7U 
                                                    & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                                   ? (QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(
                                                                                (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                                >> 0x30U)))))
                                                   : 
                                                  ((7U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                                    ? (QData)((IData)(
                                                                      (0xffU 
                                                                       & (IData)(
                                                                                (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                                >> 0x38U)))))
                                                    : (QData)((IData)(
                                                                      (0xffU 
                                                                       & (IData)(SimTop__DOT__u_cpu__DOT__read_mem_value)))))))))))) 
                               >> 0x20U)) >> 0x18U);
    __Vtemp509[6U] = (0x500U | (((IData)(((0U == (7U 
                                                  & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                           ? (((- (QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                              >> 7U)))))) 
                                               << 8U) 
                                              | (QData)((IData)(
                                                                (0xffU 
                                                                 & (IData)(SimTop__DOT__u_cpu__DOT__read_mem_value)))))
                                           : ((1U == 
                                               (7U 
                                                & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                               ? ((
                                                   (- (QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                                >> 0xfU)))))) 
                                                   << 8U) 
                                                  | (QData)((IData)(
                                                                    (0xffU 
                                                                     & (IData)(
                                                                               (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                                >> 8U))))))
                                               : ((2U 
                                                   == 
                                                   (7U 
                                                    & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                                   ? 
                                                  (((- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                                >> 0x17U)))))) 
                                                    << 8U) 
                                                   | (QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(
                                                                                (SimTop__DOT__u_cpu__DOT__read_mem_value 
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
                                                                                (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                                >> 0x1fU)))))) 
                                                     << 8U) 
                                                    | (QData)((IData)(
                                                                      (0xffU 
                                                                       & (IData)(
                                                                                (SimTop__DOT__u_cpu__DOT__read_mem_value 
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
                                                                                (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                                >> 0x27U)))))) 
                                                      << 8U) 
                                                     | (QData)((IData)(
                                                                       (0xffU 
                                                                        & (IData)(
                                                                                (SimTop__DOT__u_cpu__DOT__read_mem_value 
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
                                                                                (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                                >> 0x2fU)))))) 
                                                       << 8U) 
                                                      | (QData)((IData)(
                                                                        (0xffU 
                                                                         & (IData)(
                                                                                (SimTop__DOT__u_cpu__DOT__read_mem_value 
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
                                                                                (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                                >> 0x37U)))))) 
                                                        << 8U) 
                                                       | (QData)((IData)(
                                                                         (0xffU 
                                                                          & (IData)(
                                                                                (SimTop__DOT__u_cpu__DOT__read_mem_value 
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
                                                                                (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                                >> 0x3fU)))))) 
                                                         << 8U) 
                                                        | (QData)((IData)(
                                                                          (0xffU 
                                                                           & (IData)(
                                                                                (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                                >> 0x38U))))))
                                                        : 
                                                       (((- (QData)((IData)(
                                                                            (1U 
                                                                             & (IData)(
                                                                                (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                                >> 7U)))))) 
                                                         << 8U) 
                                                        | (QData)((IData)(
                                                                          (0xffU 
                                                                           & (IData)(SimTop__DOT__u_cpu__DOT__read_mem_value)))))))))))))) 
                                 << 0xcU) | __Vtemp507[6U]));
    __Vtemp509[7U] = (((IData)(((0U == (7U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                 ? (((- (QData)((IData)(
                                                        (1U 
                                                         & (IData)(
                                                                   (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                    >> 7U)))))) 
                                     << 8U) | (QData)((IData)(
                                                              (0xffU 
                                                               & (IData)(SimTop__DOT__u_cpu__DOT__read_mem_value)))))
                                 : ((1U == (7U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                     ? (((- (QData)((IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                        >> 0xfU)))))) 
                                         << 8U) | (QData)((IData)(
                                                                  (0xffU 
                                                                   & (IData)(
                                                                             (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                              >> 8U))))))
                                     : ((2U == (7U 
                                                & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                         ? (((- (QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                            >> 0x17U)))))) 
                                             << 8U) 
                                            | (QData)((IData)(
                                                              (0xffU 
                                                               & (IData)(
                                                                         (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                          >> 0x10U))))))
                                         : ((3U == 
                                             (7U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                             ? (((- (QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                                >> 0x1fU)))))) 
                                                 << 8U) 
                                                | (QData)((IData)(
                                                                  (0xffU 
                                                                   & (IData)(
                                                                             (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                              >> 0x18U))))))
                                             : ((4U 
                                                 == 
                                                 (7U 
                                                  & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                                 ? 
                                                (((- (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                                >> 0x27U)))))) 
                                                  << 8U) 
                                                 | (QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(
                                                                              (SimTop__DOT__u_cpu__DOT__read_mem_value 
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
                                                                                (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                                >> 0x2fU)))))) 
                                                   << 8U) 
                                                  | (QData)((IData)(
                                                                    (0xffU 
                                                                     & (IData)(
                                                                               (SimTop__DOT__u_cpu__DOT__read_mem_value 
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
                                                                                (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                                >> 0x37U)))))) 
                                                    << 8U) 
                                                   | (QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(
                                                                                (SimTop__DOT__u_cpu__DOT__read_mem_value 
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
                                                                                (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                                >> 0x3fU)))))) 
                                                     << 8U) 
                                                    | (QData)((IData)(
                                                                      (0xffU 
                                                                       & (IData)(
                                                                                (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                                >> 0x38U))))))
                                                    : 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                                >> 7U)))))) 
                                                     << 8U) 
                                                    | (QData)((IData)(
                                                                      (0xffU 
                                                                       & (IData)(SimTop__DOT__u_cpu__DOT__read_mem_value)))))))))))))) 
                       >> 0x14U) | ((IData)((((0U == 
                                               (7U 
                                                & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                               ? ((
                                                   (- (QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                                >> 7U)))))) 
                                                   << 8U) 
                                                  | (QData)((IData)(
                                                                    (0xffU 
                                                                     & (IData)(SimTop__DOT__u_cpu__DOT__read_mem_value)))))
                                               : ((1U 
                                                   == 
                                                   (7U 
                                                    & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                                   ? 
                                                  (((- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                                >> 0xfU)))))) 
                                                    << 8U) 
                                                   | (QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(
                                                                                (SimTop__DOT__u_cpu__DOT__read_mem_value 
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
                                                                                (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                                >> 0x17U)))))) 
                                                     << 8U) 
                                                    | (QData)((IData)(
                                                                      (0xffU 
                                                                       & (IData)(
                                                                                (SimTop__DOT__u_cpu__DOT__read_mem_value 
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
                                                                                (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                                >> 0x1fU)))))) 
                                                      << 8U) 
                                                     | (QData)((IData)(
                                                                       (0xffU 
                                                                        & (IData)(
                                                                                (SimTop__DOT__u_cpu__DOT__read_mem_value 
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
                                                                                (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                                >> 0x27U)))))) 
                                                       << 8U) 
                                                      | (QData)((IData)(
                                                                        (0xffU 
                                                                         & (IData)(
                                                                                (SimTop__DOT__u_cpu__DOT__read_mem_value 
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
                                                                                (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                                >> 0x2fU)))))) 
                                                        << 8U) 
                                                       | (QData)((IData)(
                                                                         (0xffU 
                                                                          & (IData)(
                                                                                (SimTop__DOT__u_cpu__DOT__read_mem_value 
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
                                                                                (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                                >> 0x37U)))))) 
                                                         << 8U) 
                                                        | (QData)((IData)(
                                                                          (0xffU 
                                                                           & (IData)(
                                                                                (SimTop__DOT__u_cpu__DOT__read_mem_value 
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
                                                                                (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                                >> 0x3fU)))))) 
                                                          << 8U) 
                                                         | (QData)((IData)(
                                                                           (0xffU 
                                                                            & (IData)(
                                                                                (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                                >> 0x38U))))))
                                                         : 
                                                        (((- (QData)((IData)(
                                                                             (1U 
                                                                              & (IData)(
                                                                                (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                                >> 7U)))))) 
                                                          << 8U) 
                                                         | (QData)((IData)(
                                                                           (0xffU 
                                                                            & (IData)(SimTop__DOT__u_cpu__DOT__read_mem_value))))))))))))) 
                                             >> 0x20U)) 
                                    << 0xcU));
    __Vtemp509[8U] = ((IData)((((0U == (7U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                 ? (((- (QData)((IData)(
                                                        (1U 
                                                         & (IData)(
                                                                   (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                    >> 7U)))))) 
                                     << 8U) | (QData)((IData)(
                                                              (0xffU 
                                                               & (IData)(SimTop__DOT__u_cpu__DOT__read_mem_value)))))
                                 : ((1U == (7U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                     ? (((- (QData)((IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                        >> 0xfU)))))) 
                                         << 8U) | (QData)((IData)(
                                                                  (0xffU 
                                                                   & (IData)(
                                                                             (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                              >> 8U))))))
                                     : ((2U == (7U 
                                                & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                         ? (((- (QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                            >> 0x17U)))))) 
                                             << 8U) 
                                            | (QData)((IData)(
                                                              (0xffU 
                                                               & (IData)(
                                                                         (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                          >> 0x10U))))))
                                         : ((3U == 
                                             (7U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                             ? (((- (QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                                >> 0x1fU)))))) 
                                                 << 8U) 
                                                | (QData)((IData)(
                                                                  (0xffU 
                                                                   & (IData)(
                                                                             (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                              >> 0x18U))))))
                                             : ((4U 
                                                 == 
                                                 (7U 
                                                  & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                                 ? 
                                                (((- (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                                >> 0x27U)))))) 
                                                  << 8U) 
                                                 | (QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(
                                                                              (SimTop__DOT__u_cpu__DOT__read_mem_value 
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
                                                                                (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                                >> 0x2fU)))))) 
                                                   << 8U) 
                                                  | (QData)((IData)(
                                                                    (0xffU 
                                                                     & (IData)(
                                                                               (SimTop__DOT__u_cpu__DOT__read_mem_value 
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
                                                                                (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                                >> 0x37U)))))) 
                                                    << 8U) 
                                                   | (QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(
                                                                                (SimTop__DOT__u_cpu__DOT__read_mem_value 
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
                                                                                (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                                >> 0x3fU)))))) 
                                                     << 8U) 
                                                    | (QData)((IData)(
                                                                      (0xffU 
                                                                       & (IData)(
                                                                                (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                                >> 0x38U))))))
                                                    : 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                                >> 7U)))))) 
                                                     << 8U) 
                                                    | (QData)((IData)(
                                                                      (0xffU 
                                                                       & (IData)(SimTop__DOT__u_cpu__DOT__read_mem_value))))))))))))) 
                               >> 0x20U)) >> 0x14U);
    __Vtemp513[0xbU] = (((IData)(((1U & (IData)((vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem 
                                                 >> 2U)))
                                   ? (((QData)((IData)(
                                                       (- (IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                              >> 0x3fU))))))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                    >> 0x20U))))
                                   : (((QData)((IData)(
                                                       (- (IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                              >> 0x1fU))))))) 
                                       << 0x20U) | (QData)((IData)(SimTop__DOT__u_cpu__DOT__read_mem_value))))) 
                         >> 0xcU) | ((IData)((((1U 
                                                & (IData)(
                                                          (vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem 
                                                           >> 2U)))
                                                ? (
                                                   ((QData)((IData)(
                                                                    (- (IData)(
                                                                               (1U 
                                                                                & (IData)(
                                                                                (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                                >> 0x3fU))))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                      >> 0x20U))))
                                                : (
                                                   ((QData)((IData)(
                                                                    (- (IData)(
                                                                               (1U 
                                                                                & (IData)(
                                                                                (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                                >> 0x1fU))))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(SimTop__DOT__u_cpu__DOT__read_mem_value)))) 
                                              >> 0x20U)) 
                                     << 0x14U));
    __Vtemp515[0xcU] = (0x400000U | (((IData)(((0U 
                                                == 
                                                (7U 
                                                 & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                                ? (
                                                   ((- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                                >> 0xfU)))))) 
                                                    << 0x10U) 
                                                   | (QData)((IData)(
                                                                     (0xffffU 
                                                                      & (IData)(SimTop__DOT__u_cpu__DOT__read_mem_value)))))
                                                : (
                                                   (2U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                                >> 0x1fU)))))) 
                                                     << 0x10U) 
                                                    | (QData)((IData)(
                                                                      (0xffffU 
                                                                       & (IData)(
                                                                                (SimTop__DOT__u_cpu__DOT__read_mem_value 
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
                                                                                (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                                >> 0x2fU)))))) 
                                                      << 0x10U) 
                                                     | (QData)((IData)(
                                                                       (0xffffU 
                                                                        & (IData)(
                                                                                (SimTop__DOT__u_cpu__DOT__read_mem_value 
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
                                                                                (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                                >> 0x3fU)))))) 
                                                       << 0x10U) 
                                                      | (QData)((IData)(
                                                                        (0xffffU 
                                                                         & (IData)(
                                                                                (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                                >> 0x30U))))))
                                                      : 
                                                     (((- (QData)((IData)(
                                                                          (1U 
                                                                           & (IData)(
                                                                                (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                                >> 0xfU)))))) 
                                                       << 0x10U) 
                                                      | (QData)((IData)(
                                                                        (0xffffU 
                                                                         & (IData)(SimTop__DOT__u_cpu__DOT__read_mem_value)))))))))) 
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
                                                                                (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                                >> 0x3fU))))))) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                                >> 0x20U))))
                                                              : 
                                                             (((QData)((IData)(
                                                                               (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                                >> 0x1fU))))))) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(SimTop__DOT__u_cpu__DOT__read_mem_value)))) 
                                                            >> 0x20U)) 
                                                   >> 0xcU)));
    __Vtemp515[0xdU] = (((IData)(((0U == (7U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                   ? (((- (QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                      >> 0xfU)))))) 
                                       << 0x10U) | (QData)((IData)(
                                                                   (0xffffU 
                                                                    & (IData)(SimTop__DOT__u_cpu__DOT__read_mem_value)))))
                                   : ((2U == (7U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                       ? (((- (QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                          >> 0x1fU)))))) 
                                           << 0x10U) 
                                          | (QData)((IData)(
                                                            (0xffffU 
                                                             & (IData)(
                                                                       (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                        >> 0x10U))))))
                                       : ((4U == (7U 
                                                  & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                           ? (((- (QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                              >> 0x2fU)))))) 
                                               << 0x10U) 
                                              | (QData)((IData)(
                                                                (0xffffU 
                                                                 & (IData)(
                                                                           (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                            >> 0x20U))))))
                                           : ((6U == 
                                               (7U 
                                                & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                               ? ((
                                                   (- (QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                                >> 0x3fU)))))) 
                                                   << 0x10U) 
                                                  | (QData)((IData)(
                                                                    (0xffffU 
                                                                     & (IData)(
                                                                               (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                                >> 0x30U))))))
                                               : ((
                                                   (- (QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                                >> 0xfU)))))) 
                                                   << 0x10U) 
                                                  | (QData)((IData)(
                                                                    (0xffffU 
                                                                     & (IData)(SimTop__DOT__u_cpu__DOT__read_mem_value)))))))))) 
                         >> 8U) | ((IData)((((0U == 
                                              (7U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                              ? (((- (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                                >> 0xfU)))))) 
                                                  << 0x10U) 
                                                 | (QData)((IData)(
                                                                   (0xffffU 
                                                                    & (IData)(SimTop__DOT__u_cpu__DOT__read_mem_value)))))
                                              : ((2U 
                                                  == 
                                                  (7U 
                                                   & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                                  ? 
                                                 (((- (QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                                >> 0x1fU)))))) 
                                                   << 0x10U) 
                                                  | (QData)((IData)(
                                                                    (0xffffU 
                                                                     & (IData)(
                                                                               (SimTop__DOT__u_cpu__DOT__read_mem_value 
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
                                                                                (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                                >> 0x2fU)))))) 
                                                    << 0x10U) 
                                                   | (QData)((IData)(
                                                                     (0xffffU 
                                                                      & (IData)(
                                                                                (SimTop__DOT__u_cpu__DOT__read_mem_value 
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
                                                                                (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                                >> 0x3fU)))))) 
                                                     << 0x10U) 
                                                    | (QData)((IData)(
                                                                      (0xffffU 
                                                                       & (IData)(
                                                                                (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                                >> 0x30U))))))
                                                    : 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                                >> 0xfU)))))) 
                                                     << 0x10U) 
                                                    | (QData)((IData)(
                                                                      (0xffffU 
                                                                       & (IData)(SimTop__DOT__u_cpu__DOT__read_mem_value))))))))) 
                                            >> 0x20U)) 
                                   << 0x18U));
    __Vtemp515[0xeU] = ((IData)((((0U == (7U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                   ? (((- (QData)((IData)(
                                                          (1U 
                                                           & (IData)(
                                                                     (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                      >> 0xfU)))))) 
                                       << 0x10U) | (QData)((IData)(
                                                                   (0xffffU 
                                                                    & (IData)(SimTop__DOT__u_cpu__DOT__read_mem_value)))))
                                   : ((2U == (7U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                       ? (((- (QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                          >> 0x1fU)))))) 
                                           << 0x10U) 
                                          | (QData)((IData)(
                                                            (0xffffU 
                                                             & (IData)(
                                                                       (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                        >> 0x10U))))))
                                       : ((4U == (7U 
                                                  & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                           ? (((- (QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                              >> 0x2fU)))))) 
                                               << 0x10U) 
                                              | (QData)((IData)(
                                                                (0xffffU 
                                                                 & (IData)(
                                                                           (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                            >> 0x20U))))))
                                           : ((6U == 
                                               (7U 
                                                & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                               ? ((
                                                   (- (QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                                >> 0x3fU)))))) 
                                                   << 0x10U) 
                                                  | (QData)((IData)(
                                                                    (0xffffU 
                                                                     & (IData)(
                                                                               (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                                >> 0x30U))))))
                                               : ((
                                                   (- (QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                                >> 0xfU)))))) 
                                                   << 0x10U) 
                                                  | (QData)((IData)(
                                                                    (0xffffU 
                                                                     & (IData)(SimTop__DOT__u_cpu__DOT__read_mem_value))))))))) 
                                 >> 0x20U)) >> 8U);
    SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4[0U] 
        = __Vtemp504[0U];
    SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4[1U] 
        = __Vtemp504[1U];
    SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4[2U] 
        = (7U | ((IData)(((1U & (IData)((vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem 
                                         >> 2U))) ? (QData)((IData)(
                                                                    (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                     >> 0x20U)))
                           : (QData)((IData)(SimTop__DOT__u_cpu__DOT__read_mem_value)))) 
                 << 4U));
    SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4[3U] 
        = (((IData)(((1U & (IData)((vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem 
                                    >> 2U))) ? (QData)((IData)(
                                                               (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                >> 0x20U)))
                      : (QData)((IData)(SimTop__DOT__u_cpu__DOT__read_mem_value)))) 
            >> 0x1cU) | ((IData)((((1U & (IData)((vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem 
                                                  >> 2U)))
                                    ? (QData)((IData)(
                                                      (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                       >> 0x20U)))
                                    : (QData)((IData)(SimTop__DOT__u_cpu__DOT__read_mem_value))) 
                                  >> 0x20U)) << 4U));
    SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4[4U] 
        = __Vtemp507[4U];
    SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4[5U] 
        = __Vtemp507[5U];
    SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4[6U] 
        = __Vtemp509[6U];
    SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4[7U] 
        = __Vtemp509[7U];
    SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4[8U] 
        = (0x1000U | (((IData)(SimTop__DOT__u_cpu__DOT__read_mem_value) 
                       << 0x10U) | __Vtemp509[8U]));
    SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4[9U] 
        = (((IData)(SimTop__DOT__u_cpu__DOT__read_mem_value) 
            >> 0x10U) | ((IData)((SimTop__DOT__u_cpu__DOT__read_mem_value 
                                  >> 0x20U)) << 0x10U));
    SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4[0xaU] 
        = (0x80000U | (((IData)(((1U & (IData)((vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem 
                                                >> 2U)))
                                  ? (((QData)((IData)(
                                                      (- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                             >> 0x3fU))))))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                   >> 0x20U))))
                                  : (((QData)((IData)(
                                                      (- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                             >> 0x1fU))))))) 
                                      << 0x20U) | (QData)((IData)(SimTop__DOT__u_cpu__DOT__read_mem_value))))) 
                        << 0x14U) | ((IData)((SimTop__DOT__u_cpu__DOT__read_mem_value 
                                              >> 0x20U)) 
                                     >> 0x10U)));
    SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4[0xbU] 
        = __Vtemp513[0xbU];
    SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4[0xcU] 
        = __Vtemp515[0xcU];
    SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4[0xdU] 
        = __Vtemp515[0xdU];
    SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4[0xeU] 
        = (0x2000000U | __Vtemp515[0xeU]);
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
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__pair_list[0U][0U] 
        = SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4[0U];
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__pair_list[0U][1U] 
        = SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4[1U];
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__pair_list[0U][2U] 
        = (0xfU & SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4[2U]);
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__pair_list[1U][0U] 
        = ((SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4[3U] 
            << 0x1cU) | (SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4[2U] 
                         >> 4U));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__pair_list[1U][1U] 
        = ((SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4[4U] 
            << 0x1cU) | (SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4[3U] 
                         >> 4U));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__pair_list[1U][2U] 
        = (0xfU & (SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4[4U] 
                   >> 4U));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__pair_list[2U][0U] 
        = ((SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4[5U] 
            << 0x18U) | (SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4[4U] 
                         >> 8U));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__pair_list[2U][1U] 
        = ((SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4[6U] 
            << 0x18U) | (SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4[5U] 
                         >> 8U));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__pair_list[2U][2U] 
        = (0xfU & (SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4[6U] 
                   >> 8U));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__pair_list[3U][0U] 
        = ((SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4[7U] 
            << 0x14U) | (SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4[6U] 
                         >> 0xcU));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__pair_list[3U][1U] 
        = ((SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4[8U] 
            << 0x14U) | (SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4[7U] 
                         >> 0xcU));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__pair_list[3U][2U] 
        = (0xfU & (SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4[8U] 
                   >> 0xcU));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__pair_list[4U][0U] 
        = ((SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4[9U] 
            << 0x10U) | (SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4[8U] 
                         >> 0x10U));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__pair_list[4U][1U] 
        = ((SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4[0xaU] 
            << 0x10U) | (SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4[9U] 
                         >> 0x10U));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__pair_list[4U][2U] 
        = (0xfU & (SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4[0xaU] 
                   >> 0x10U));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__pair_list[5U][0U] 
        = ((SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4[0xbU] 
            << 0xcU) | (SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4[0xaU] 
                        >> 0x14U));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__pair_list[5U][1U] 
        = ((SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4[0xcU] 
            << 0xcU) | (SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4[0xbU] 
                        >> 0x14U));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__pair_list[5U][2U] 
        = (0xfU & (SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4[0xcU] 
                   >> 0x14U));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__pair_list[6U][0U] 
        = ((SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4[0xdU] 
            << 8U) | (SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4[0xcU] 
                      >> 0x18U));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__pair_list[6U][1U] 
        = ((SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4[0xeU] 
            << 8U) | (SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4[0xdU] 
                      >> 0x18U));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__pair_list[6U][2U] 
        = (0xfU & (SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4[0xeU] 
                   >> 0x18U));
    SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(SimTop__DOT__u_cpu__DOT__Forward_b) 
                               == vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__data_list
           [0U]);
    SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__hit 
        = ((IData)(SimTop__DOT__u_cpu__DOT__Forward_b) 
           == vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__key_list
           [0U]);
    SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__lut_out 
        = (SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(SimTop__DOT__u_cpu__DOT__Forward_b) 
                                  == vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__data_list
              [1U]));
    SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__hit 
        = ((IData)(SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__hit) 
           | ((IData)(SimTop__DOT__u_cpu__DOT__Forward_b) 
              == vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__key_list
              [1U]));
    SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__lut_out 
        = (SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(SimTop__DOT__u_cpu__DOT__Forward_b) 
                                  == vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__key_list
                                  [2U])))) & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__data_list
              [2U]));
    SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__hit 
        = ((IData)(SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__hit) 
           | ((IData)(SimTop__DOT__u_cpu__DOT__Forward_b) 
              == vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->SimTop__DOT__u_cpu__DOT__reg2_value_forwardb_ex 
        = ((IData)(SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__hit)
            ? SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__lut_out
            : vlSelf->SimTop__DOT__u_cpu__DOT__reg2_value_ex);
    SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(SimTop__DOT__u_cpu__DOT__Forward_a) 
                               == vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__data_list
           [0U]);
    SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__hit 
        = ((IData)(SimTop__DOT__u_cpu__DOT__Forward_a) 
           == vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__key_list
           [0U]);
    SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__lut_out 
        = (SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(SimTop__DOT__u_cpu__DOT__Forward_a) 
                                  == vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__data_list
              [1U]));
    SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__hit 
        = ((IData)(SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__hit) 
           | ((IData)(SimTop__DOT__u_cpu__DOT__Forward_a) 
              == vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__key_list
              [1U]));
    SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__lut_out 
        = (SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(SimTop__DOT__u_cpu__DOT__Forward_a) 
                                  == vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__key_list
                                  [2U])))) & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__data_list
              [2U]));
    SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__hit 
        = ((IData)(SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__hit) 
           | ((IData)(SimTop__DOT__u_cpu__DOT__Forward_a) 
              == vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__key_list
              [2U]));
    SimTop__DOT__u_cpu__DOT__alu_module__DOT__reg1_forwarda 
        = ((IData)(SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__hit)
            ? SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__lut_out
            : vlSelf->SimTop__DOT__u_cpu__DOT__reg1_value_ex);
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_cpu__DOT__inst_id = 0U;
    } else if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__axi_stall_i)))) {
        if (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IF_Flush) 
             | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__m_time_interrupt_trigger))) {
            vlSelf->SimTop__DOT__u_cpu__DOT__inst_id = 0U;
        } else if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__pipeline_stall)))) {
            vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                = ((1U & (IData)((vlSelf->SimTop__DOT__u_cpu__DOT__pc 
                                  >> 2U))) ? (IData)(
                                                     (((1U 
                                                        & (IData)(
                                                                  (vlSelf->SimTop__DOT__u_cpu__DOT__pc 
                                                                   >> 3U)))
                                                        ? 
                                                       (((QData)((IData)(
                                                                         vlSelf->SimTop__DOT__iram_data_read_128[3U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->SimTop__DOT__iram_data_read_128[2U])))
                                                        : 
                                                       (((QData)((IData)(
                                                                         vlSelf->SimTop__DOT__iram_data_read_128[1U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->SimTop__DOT__iram_data_read_128[0U])))) 
                                                      >> 0x20U))
                    : (IData)(((1U & (IData)((vlSelf->SimTop__DOT__u_cpu__DOT__pc 
                                              >> 3U)))
                                ? (((QData)((IData)(
                                                    vlSelf->SimTop__DOT__iram_data_read_128[3U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->SimTop__DOT__iram_data_read_128[2U])))
                                : (((QData)((IData)(
                                                    vlSelf->SimTop__DOT__iram_data_read_128[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->SimTop__DOT__iram_data_read_128[0U]))))));
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
    SimTop__DOT__u_cpu__DOT__alu_module__DOT__b0 = 
        ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__npc_op_ex)
          ? 4ULL : ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_imm_reg2_ex)
                     ? vlSelf->SimTop__DOT__u_cpu__DOT__imm_ex
                     : vlSelf->SimTop__DOT__u_cpu__DOT__reg2_value_forwardb_ex));
    SimTop__DOT__u_cpu__DOT__alu_module__DOT__a0 = 
        ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_only_imm_ex)
          ? 0ULL : ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_pc_reg1_ex)
                     ? vlSelf->SimTop__DOT__u_cpu__DOT__pc_ex
                     : SimTop__DOT__u_cpu__DOT__alu_module__DOT__reg1_forwarda));
    SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__mem_ctrl_mem) 
                               == vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__data_list
           [0U]);
    SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__mem_ctrl_mem) 
           == vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__key_list
           [0U]);
    SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__lut_out 
        = (SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__mem_ctrl_mem) 
                                  == vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__data_list
              [1U]));
    SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__hit 
        = ((IData)(SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__mem_ctrl_mem) 
              == vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__key_list
              [1U]));
    SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__lut_out 
        = (SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__mem_ctrl_mem) 
                                  == vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__key_list
                                  [2U])))) & vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__data_list
              [2U]));
    SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__hit 
        = ((IData)(SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__mem_ctrl_mem) 
              == vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__key_list
              [2U]));
    SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__lut_out 
        = (SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__mem_ctrl_mem) 
                                  == vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__key_list
                                  [3U])))) & vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__data_list
              [3U]));
    SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__hit 
        = ((IData)(SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__mem_ctrl_mem) 
              == vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__key_list
              [3U]));
    SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__lut_out 
        = (SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__mem_ctrl_mem) 
                                  == vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__key_list
                                  [4U])))) & vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__data_list
              [4U]));
    SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__hit 
        = ((IData)(SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__mem_ctrl_mem) 
              == vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__key_list
              [4U]));
    SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__lut_out 
        = (SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__mem_ctrl_mem) 
                                  == vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__key_list
                                  [5U])))) & vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__data_list
              [5U]));
    SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__hit 
        = ((IData)(SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__mem_ctrl_mem) 
              == vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__key_list
              [5U]));
    SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__lut_out 
        = (SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__mem_ctrl_mem) 
                                  == vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__key_list
                                  [6U])))) & vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__data_list
              [6U]));
    SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__hit 
        = ((IData)(SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__mem_ctrl_mem) 
              == vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext_read_mem_value_mem 
        = ((IData)(SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__hit)
            ? SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__lut_out
            : SimTop__DOT__u_cpu__DOT__read_mem_value);
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b 
        = ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__operator_b_w_ex)
            ? (QData)((IData)(SimTop__DOT__u_cpu__DOT__alu_module__DOT__b0))
            : SimTop__DOT__u_cpu__DOT__alu_module__DOT__b0);
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
        = ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__operator_a_w_s_ex)
            ? (((QData)((IData)((- (IData)((1U & (IData)(
                                                         (SimTop__DOT__u_cpu__DOT__alu_module__DOT__a0 
                                                          >> 0x1fU))))))) 
                << 0x20U) | (QData)((IData)(SimTop__DOT__u_cpu__DOT__alu_module__DOT__a0)))
            : ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__operator_a_w_ex)
                ? (QData)((IData)(SimTop__DOT__u_cpu__DOT__alu_module__DOT__a0))
                : SimTop__DOT__u_cpu__DOT__alu_module__DOT__a0));
    if ((1U & (~ (IData)(vlSelf->SimTop__DOT__iram_wen)))) {
        VL_EXTEND_WQ(128,64, __Vtemp585, vlSelf->SimTop__DOT__icache_data_read);
        __Vdlyvval__SimTop__DOT__icache_ram__DOT__ram__v0[0U] 
            = ((((1U & (IData)((vlSelf->SimTop__DOT__u_icache__DOT__re_write_addr 
                                >> 3U))) ? 0U : __Vtemp585[0U]) 
                & (~ ((1U & (IData)((vlSelf->SimTop__DOT__u_icache__DOT__re_write_addr 
                                     >> 3U))) ? 0xffffffffU
                       : 0U))) | (vlSelf->SimTop__DOT__icache_ram__DOT__ram
                                  [vlSelf->SimTop__DOT__iram_addr][0U] 
                                  & ((1U & (IData)(
                                                   (vlSelf->SimTop__DOT__u_icache__DOT__re_write_addr 
                                                    >> 3U)))
                                      ? 0xffffffffU
                                      : 0U)));
        __Vdlyvval__SimTop__DOT__icache_ram__DOT__ram__v0[1U] 
            = ((((1U & (IData)((vlSelf->SimTop__DOT__u_icache__DOT__re_write_addr 
                                >> 3U))) ? 0U : __Vtemp585[1U]) 
                & (~ ((1U & (IData)((vlSelf->SimTop__DOT__u_icache__DOT__re_write_addr 
                                     >> 3U))) ? 0xffffffffU
                       : 0U))) | (vlSelf->SimTop__DOT__icache_ram__DOT__ram
                                  [vlSelf->SimTop__DOT__iram_addr][1U] 
                                  & ((1U & (IData)(
                                                   (vlSelf->SimTop__DOT__u_icache__DOT__re_write_addr 
                                                    >> 3U)))
                                      ? 0xffffffffU
                                      : 0U)));
        __Vdlyvval__SimTop__DOT__icache_ram__DOT__ram__v0[2U] 
            = ((((1U & (IData)((vlSelf->SimTop__DOT__u_icache__DOT__re_write_addr 
                                >> 3U))) ? (IData)(vlSelf->SimTop__DOT__icache_data_read)
                  : __Vtemp585[2U]) & (~ ((1U & (IData)(
                                                        (vlSelf->SimTop__DOT__u_icache__DOT__re_write_addr 
                                                         >> 3U)))
                                           ? 0U : 0xffffffffU))) 
               | (vlSelf->SimTop__DOT__icache_ram__DOT__ram
                  [vlSelf->SimTop__DOT__iram_addr][2U] 
                  & ((1U & (IData)((vlSelf->SimTop__DOT__u_icache__DOT__re_write_addr 
                                    >> 3U))) ? 0U : 0xffffffffU)));
        __Vdlyvval__SimTop__DOT__icache_ram__DOT__ram__v0[3U] 
            = ((((1U & (IData)((vlSelf->SimTop__DOT__u_icache__DOT__re_write_addr 
                                >> 3U))) ? (IData)(
                                                   (vlSelf->SimTop__DOT__icache_data_read 
                                                    >> 0x20U))
                  : __Vtemp585[3U]) & (~ ((1U & (IData)(
                                                        (vlSelf->SimTop__DOT__u_icache__DOT__re_write_addr 
                                                         >> 3U)))
                                           ? 0U : 0xffffffffU))) 
               | (vlSelf->SimTop__DOT__icache_ram__DOT__ram
                  [vlSelf->SimTop__DOT__iram_addr][3U] 
                  & ((1U & (IData)((vlSelf->SimTop__DOT__u_icache__DOT__re_write_addr 
                                    >> 3U))) ? 0U : 0xffffffffU)));
        __Vdlyvset__SimTop__DOT__icache_ram__DOT__ram__v0 = 1U;
        __Vdlyvdim0__SimTop__DOT__icache_ram__DOT__ram__v0 
            = vlSelf->SimTop__DOT__iram_addr;
    }
    if (vlSelf->SimTop__DOT__iram_wen) {
        vlSelf->SimTop__DOT__iram_data_read_128[0U] 
            = vlSelf->SimTop__DOT__icache_ram__DOT__ram
            [vlSelf->SimTop__DOT__iram_addr][0U];
        vlSelf->SimTop__DOT__iram_data_read_128[1U] 
            = vlSelf->SimTop__DOT__icache_ram__DOT__ram
            [vlSelf->SimTop__DOT__iram_addr][1U];
        vlSelf->SimTop__DOT__iram_data_read_128[2U] 
            = vlSelf->SimTop__DOT__icache_ram__DOT__ram
            [vlSelf->SimTop__DOT__iram_addr][2U];
        vlSelf->SimTop__DOT__iram_data_read_128[3U] 
            = vlSelf->SimTop__DOT__icache_ram__DOT__ram
            [vlSelf->SimTop__DOT__iram_addr][3U];
    } else {
        vlSelf->SimTop__DOT__iram_data_read_128[0U] 
            = VL_RANDOM_I(32);
        vlSelf->SimTop__DOT__iram_data_read_128[1U] 
            = VL_RANDOM_I(32);
        vlSelf->SimTop__DOT__iram_data_read_128[2U] 
            = VL_RANDOM_I(32);
        vlSelf->SimTop__DOT__iram_data_read_128[3U] 
            = VL_RANDOM_I(32);
    }
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_cpu__DOT__pc = 0x7ffffffcULL;
    } else if ((1U & (~ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__axi_stall_i)))) {
        if (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__pc_wen) 
             | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__m_time_interrupt_trigger))) {
            vlSelf->SimTop__DOT__u_cpu__DOT__pc = vlSelf->SimTop__DOT__u_cpu__DOT__npc;
        }
    }
    vlSelf->SimTop__DOT__u_cpu__DOT__pipeline_stall 
        = (((vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
             != vlSelf->SimTop__DOT__u_cpu__DOT__inst_ex) 
            & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__read_mem_en_ex)) 
           & (((0x1fU & (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                         >> 0xfU)) == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rd_ex)) 
              | ((0x1fU & (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                           >> 0x14U)) == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rd_ex))));
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lui 
        = (IData)((0x37U == (0x7fU & vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)));
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_auipc 
        = (IData)((0x17U == (0x7fU & vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)));
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrsi 
        = (IData)((0x6073U == (0x707fU & vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)));
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrwi 
        = (IData)((0x5073U == (0x707fU & vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)));
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrci 
        = (IData)((0x7073U == (0x707fU & vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)));
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_ebreak 
        = (IData)((0x73U == (0x707fU & vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)));
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_jal 
        = (IData)((0x6fU == (0x7fU & vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)));
    __Vtemp607[4U] = (0x40U | ((7U & ((IData)(((((- (QData)((IData)(
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
    __Vtemp608[2U] = (((IData)((((- (QData)((IData)(
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
    __Vtemp609[4U] = ((0x7fffffU & ((IData)((((QData)((IData)(
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
    __Vtemp609[5U] = (0x10000000U | ((0x7fffffU & ((IData)(
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
    __Vtemp609[6U] = ((0x7fffffU & ((IData)((((- (QData)((IData)(
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
    __Vtemp609[7U] = ((0x7fffffU & ((IData)(((((- (QData)((IData)(
                                                                  (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                                                   >> 0x1fU)))) 
                                               << 0xcU) 
                                              | (QData)((IData)(
                                                                (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                                                 >> 0x14U)))) 
                                             >> 0x20U)) 
                                    >> 3U)) | (__Vtemp607[4U] 
                                               << 0x17U));
    __Vtemp610[1U] = (((IData)((0x30000000000000ULL 
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
    __Vtemp610[3U] = ((__Vtemp608[2U] >> 0x11U) | (0xffff8000U 
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
    __Vtemp610[4U] = (0x140U | (((0x7e00U & ((IData)(
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
                                    >> 0x1aU)) | (__Vtemp609[4U] 
                                                  << 0xfU)));
    SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_imm____pinNumber4[0U] 
        = (IData)((((- (QData)((IData)((vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                        >> 0x1fU)))) 
                    << 0xbU) | (QData)((IData)(((0x7e0U 
                                                 & (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                                    >> 0x14U)) 
                                                | (0x1fU 
                                                   & (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                                      >> 7U)))))));
    SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_imm____pinNumber4[1U] 
        = (IData)(((((- (QData)((IData)((vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                         >> 0x1fU)))) 
                     << 0xbU) | (QData)((IData)(((0x7e0U 
                                                  & (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                                     >> 0x14U)) 
                                                 | (0x1fU 
                                                    & (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                                       >> 7U)))))) 
                   >> 0x20U));
    SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_imm____pinNumber4[2U] 
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
    SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_imm____pinNumber4[3U] 
        = __Vtemp610[1U];
    SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_imm____pinNumber4[4U] 
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
                                   >> 0x11U)) | (__Vtemp608[2U] 
                                                 << 0xfU));
    SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_imm____pinNumber4[5U] 
        = __Vtemp610[3U];
    SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_imm____pinNumber4[6U] 
        = __Vtemp610[4U];
    SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_imm____pinNumber4[7U] 
        = ((__Vtemp609[4U] >> 0x11U) | (__Vtemp609[5U] 
                                        << 0xfU));
    SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_imm____pinNumber4[8U] 
        = ((__Vtemp609[5U] >> 0x11U) | (__Vtemp609[6U] 
                                        << 0xfU));
    SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_imm____pinNumber4[9U] 
        = ((__Vtemp609[6U] >> 0x11U) | (__Vtemp609[7U] 
                                        << 0xfU));
    SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_imm____pinNumber4[0xaU] 
        = (__Vtemp609[7U] >> 0x11U);
    SimTop__DOT__u_cpu__DOT__Forward_d = ((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__wen_ex) 
                                            & (0U != (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rd_ex))) 
                                           & ((0x1fU 
                                               & (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                                  >> 0x14U)) 
                                              == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rd_ex)))
                                           ? 3U : (
                                                   (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__wen_mem) 
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
    SimTop__DOT__u_cpu__DOT__Forward_c = ((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__wen_ex) 
                                            & (0U != (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rd_ex))) 
                                           & ((0x1fU 
                                               & (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                                  >> 0xfU)) 
                                              == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rd_ex)))
                                           ? 3U : (
                                                   (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__wen_mem) 
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
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lwu 
        = (IData)((0x6003U == (0x707fU & vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)));
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lbu 
        = (IData)((0x4003U == (0x707fU & vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)));
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_srai 
        = (IData)((0x40005013U == (0xfc00707fU & vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)));
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lhu 
        = (IData)((0x5003U == (0x707fU & vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)));
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_slliw 
        = (IData)((0x101bU == (0xfc00707fU & vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)));
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sltiu 
        = (IData)((0x3013U == (0x707fU & vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)));
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sraiw 
        = (IData)((0x4000501bU == (0xfc00707fU & vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)));
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_srli 
        = (IData)((0x5013U == (0xfc00707fU & vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)));
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_xori 
        = (IData)((0x4013U == (0x707fU & vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)));
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_jalr 
        = (IData)((0x67U == (0x707fU & vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)));
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrs 
        = (IData)((0x2073U == (0x707fU & vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)));
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrw 
        = (IData)((0x1073U == (0x707fU & vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)));
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_srliw 
        = (IData)((0x501bU == (0xfc00707fU & vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)));
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrc 
        = (IData)((0x3073U == (0x707fU & vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)));
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_ori 
        = (IData)((0x6013U == (0x707fU & vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)));
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_slti 
        = (IData)((0x2013U == (0x707fU & vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)));
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_add 
        = (IData)((0x33U == (0xfe00707fU & vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)));
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_addw 
        = (IData)((0x3bU == (0xfe00707fU & vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)));
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_srl 
        = (IData)((0x5033U == (0xfe00707fU & vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)));
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_and 
        = (IData)((0x7033U == (0xfe00707fU & vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)));
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sub 
        = (IData)((0x40000033U == (0xfe00707fU & vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)));
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_srlw 
        = (IData)((0x503bU == (0xfe00707fU & vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)));
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_subw 
        = (IData)((0x4000003bU == (0xfe00707fU & vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)));
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sltu 
        = (IData)((0x3033U == (0xfe00707fU & vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)));
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_mul 
        = (IData)((0x2000033U == (0xfe00707fU & vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)));
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sll 
        = (IData)((0x1033U == (0xfe00707fU & vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)));
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_xor 
        = (IData)((0x4033U == (0xfe00707fU & vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)));
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
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_remuw 
        = (IData)((0x200703bU == (0xfe00707fU & vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)));
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_remw 
        = (IData)((0x200603bU == (0xfe00707fU & vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)));
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
    SimTop__DOT__u_cpu__DOT__reg_write_value_mem = 
        ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__read_mem_en_mem)
          ? vlSelf->SimTop__DOT__u_cpu__DOT__sext_read_mem_value_mem
          : vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem);
    SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_operation_a 
        = ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__csr_if_zimm_ex)
            ? (QData)((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__zimm_ex))
            : vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a);
    VL_EXTEND_WQ(69,64, __Vtemp612, (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                                     + vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b));
    SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0U] 
        = (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__csr_value_ex);
    SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[1U] 
        = (IData)((vlSelf->SimTop__DOT__u_cpu__DOT__csr_value_ex 
                   >> 0x20U));
    SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[2U] 
        = (0x12U | ((IData)(((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                              < vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b)
                              ? 1ULL : 0ULL)) << 5U));
    SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[3U] 
        = (((IData)(((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                      < vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b)
                      ? 1ULL : 0ULL)) >> 0x1bU) | ((IData)(
                                                           (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                                                              < vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b)
                                                              ? 1ULL
                                                              : 0ULL) 
                                                            >> 0x20U)) 
                                                   << 5U));
    SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[4U] 
        = (0x220U | (((IData)((VL_LTS_IQQ(1,64,64, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b)
                                ? 1ULL : 0ULL)) << 0xaU) 
                     | ((IData)((((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                                   < vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b)
                                   ? 1ULL : 0ULL) >> 0x20U)) 
                        >> 0x1bU)));
    SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[5U] 
        = (((IData)((VL_LTS_IQQ(1,64,64, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b)
                      ? 1ULL : 0ULL)) >> 0x16U) | ((IData)(
                                                           ((VL_LTS_IQQ(1,64,64, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b)
                                                              ? 1ULL
                                                              : 0ULL) 
                                                            >> 0x20U)) 
                                                   << 0xaU));
    SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[6U] 
        = (0x3c00U | (((IData)(VL_MODDIV_QQQ(64, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b)) 
                       << 0xfU) | ((IData)(((VL_LTS_IQQ(1,64,64, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b)
                                              ? 1ULL
                                              : 0ULL) 
                                            >> 0x20U)) 
                                   >> 0x16U)));
    SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[7U] 
        = (((IData)(VL_MODDIV_QQQ(64, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b)) 
            >> 0x11U) | ((IData)((VL_MODDIV_QQQ(64, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b) 
                                  >> 0x20U)) << 0xfU));
    SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[8U] 
        = (0x68000U | (((IData)(VL_MODDIVS_QQQ(64, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b)) 
                        << 0x14U) | ((IData)((VL_MODDIV_QQQ(64, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b) 
                                              >> 0x20U)) 
                                     >> 0x11U)));
    SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[9U] 
        = (((IData)(VL_MODDIVS_QQQ(64, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b)) 
            >> 0xcU) | ((IData)((VL_MODDIVS_QQQ(64, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b) 
                                 >> 0x20U)) << 0x14U));
    SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0xaU] 
        = (0xe00000U | (((IData)(VL_DIV_QQQ(64, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b)) 
                         << 0x19U) | ((IData)((VL_MODDIVS_QQQ(64, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b) 
                                               >> 0x20U)) 
                                      >> 0xcU)));
    SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0xbU] 
        = (((IData)(VL_DIV_QQQ(64, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b)) 
            >> 7U) | ((IData)((VL_DIV_QQQ(64, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b) 
                               >> 0x20U)) << 0x19U));
    SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0xcU] 
        = (0x16000000U | (((IData)(VL_DIVS_QQQ(64, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b)) 
                           << 0x1eU) | ((IData)((VL_DIV_QQQ(64, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b) 
                                                 >> 0x20U)) 
                                        >> 7U)));
    SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0xdU] 
        = (((IData)(VL_DIVS_QQQ(64, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b)) 
            >> 2U) | ((IData)((VL_DIVS_QQQ(64, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b) 
                               >> 0x20U)) << 0x1eU));
    SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0xeU] 
        = ((IData)((VL_DIVS_QQQ(64, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b) 
                    >> 0x20U)) >> 2U);
    SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0xfU] 
        = (3U | ((IData)((((QData)((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__mul_result[1U])) 
                           << 0x20U) | (QData)((IData)(
                                                       vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__mul_result[0U])))) 
                 << 3U));
    SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x10U] 
        = (((IData)((((QData)((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__mul_result[1U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__mul_result[0U])))) 
            >> 0x1dU) | ((IData)(((((QData)((IData)(
                                                    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__mul_result[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__mul_result[0U]))) 
                                  >> 0x20U)) << 3U));
    SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x11U] 
        = (0x50U | (((IData)((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                              >> (0x3fU & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b)))) 
                     << 8U) | ((IData)(((((QData)((IData)(
                                                          vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__mul_result[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__mul_result[0U]))) 
                                        >> 0x20U)) 
                               >> 0x1dU)));
    SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x12U] 
        = (((IData)((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                     >> (0x3fU & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b)))) 
            >> 0x18U) | ((IData)(((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                                   >> (0x3fU & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b))) 
                                  >> 0x20U)) << 8U));
    SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x13U] 
        = (0x900U | (((IData)((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                               << (0x3fU & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b)))) 
                      << 0xdU) | ((IData)(((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                                            >> (0x3fU 
                                                & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b))) 
                                           >> 0x20U)) 
                                  >> 0x18U)));
    SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x14U] 
        = (((IData)((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                     << (0x3fU & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b)))) 
            >> 0x13U) | ((IData)(((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                                   << (0x3fU & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b))) 
                                  >> 0x20U)) << 0xdU));
    SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x15U] 
        = (0x10000U | (((IData)((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                                 | vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b)) 
                        << 0x12U) | ((IData)(((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                                               << (0x3fU 
                                                   & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b))) 
                                              >> 0x20U)) 
                                     >> 0x13U)));
    SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x16U] 
        = (((IData)((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                     | vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b)) 
            >> 0xeU) | ((IData)(((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                                  | vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b) 
                                 >> 0x20U)) << 0x12U));
    SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x17U] 
        = (0x1c0000U | (((IData)((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                                  ^ vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b)) 
                         << 0x17U) | ((IData)(((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                                                | vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b) 
                                               >> 0x20U)) 
                                      >> 0xeU)));
    SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x18U] 
        = (((IData)((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                     ^ vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b)) 
            >> 9U) | ((IData)(((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                                ^ vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b) 
                               >> 0x20U)) << 0x17U));
    SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x19U] 
        = (0x3000000U | (((IData)(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__if_inst_sll_ex)
                                    ? (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                                       >> (0x3fU & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b)))
                                    : (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                                       >> (0x1fU & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b))))) 
                          << 0x1cU) | ((IData)(((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                                                 ^ vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b) 
                                                >> 0x20U)) 
                                       >> 9U)));
    SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x1aU] 
        = (((IData)(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__if_inst_sll_ex)
                      ? (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                         >> (0x3fU & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b)))
                      : (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                         >> (0x1fU & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b))))) 
            >> 4U) | ((IData)((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__if_inst_sll_ex)
                                 ? (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                                    >> (0x3fU & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b)))
                                 : (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                                    >> (0x1fU & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b)))) 
                               >> 0x20U)) << 0x1cU));
    SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x1bU] 
        = ((IData)((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__if_inst_sll_ex)
                      ? (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                         >> (0x3fU & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b)))
                      : (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                         >> (0x1fU & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b)))) 
                    >> 0x20U)) >> 4U);
    SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x1cU] 
        = (1U | ((IData)(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__if_inst_sll_ex)
                           ? (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                              << (0x3fU & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b)))
                           : (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                              << (0x1fU & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b))))) 
                 << 1U));
    SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x1dU] 
        = (((IData)(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__if_inst_sll_ex)
                      ? (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                         << (0x3fU & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b)))
                      : (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                         << (0x1fU & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b))))) 
            >> 0x1fU) | ((IData)((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__if_inst_sll_ex)
                                    ? (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                                       << (0x3fU & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b)))
                                    : (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                                       << (0x1fU & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b)))) 
                                  >> 0x20U)) << 1U));
    SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x1eU] 
        = (0xaU | (((IData)((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                             & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b)) 
                    << 6U) | ((IData)((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__if_inst_sll_ex)
                                         ? (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                                            << (0x3fU 
                                                & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b)))
                                         : (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                                            << (0x1fU 
                                                & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b)))) 
                                       >> 0x20U)) >> 0x1fU)));
    SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x1fU] 
        = (((IData)((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                     & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b)) 
            >> 0x1aU) | ((IData)(((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b) 
                                  >> 0x20U)) << 6U));
    SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x20U] 
        = (0x100U | (((IData)(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__if_inst_sll_ex)
                                ? VL_SHIFTRS_QQI(64,64,6, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a, 
                                                 (0x3fU 
                                                  & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b)))
                                : VL_SHIFTRS_QQI(64,64,5, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a, 
                                                 (0x1fU 
                                                  & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b))))) 
                      << 0xbU) | ((IData)(((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                                            & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b) 
                                           >> 0x20U)) 
                                  >> 0x1aU)));
    SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x21U] 
        = (((IData)(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__if_inst_sll_ex)
                      ? VL_SHIFTRS_QQI(64,64,6, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a, 
                                       (0x3fU & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b)))
                      : VL_SHIFTRS_QQI(64,64,5, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a, 
                                       (0x1fU & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b))))) 
            >> 0x15U) | ((IData)((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__if_inst_sll_ex)
                                    ? VL_SHIFTRS_QQI(64,64,6, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a, 
                                                     (0x3fU 
                                                      & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b)))
                                    : VL_SHIFTRS_QQI(64,64,5, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a, 
                                                     (0x1fU 
                                                      & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b)))) 
                                  >> 0x20U)) << 0xbU));
    SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x22U] 
        = (0x1800U | (((IData)(VL_SHIFTRS_QQI(64,64,6, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a, 
                                              (0x3fU 
                                               & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b)))) 
                       << 0x10U) | ((IData)((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__if_inst_sll_ex)
                                               ? VL_SHIFTRS_QQI(64,64,6, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a, 
                                                                (0x3fU 
                                                                 & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b)))
                                               : VL_SHIFTRS_QQI(64,64,5, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a, 
                                                                (0x1fU 
                                                                 & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b)))) 
                                             >> 0x20U)) 
                                    >> 0x15U)));
    SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x23U] 
        = (((IData)(VL_SHIFTRS_QQI(64,64,6, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a, 
                                   (0x3fU & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b)))) 
            >> 0x10U) | ((IData)((VL_SHIFTRS_QQI(64,64,6, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a, 
                                                 (0x3fU 
                                                  & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b))) 
                                  >> 0x20U)) << 0x10U));
    SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x24U] 
        = (0x20000U | (((IData)((1ULL + (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                                         + (~ vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b)))) 
                        << 0x15U) | ((IData)((VL_SHIFTRS_QQI(64,64,6, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a, 
                                                             (0x3fU 
                                                              & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b))) 
                                              >> 0x20U)) 
                                     >> 0x10U)));
    SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x25U] 
        = (((IData)((1ULL + (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                             + (~ vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b)))) 
            >> 0xbU) | ((IData)(((1ULL + (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                                          + (~ vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b))) 
                                 >> 0x20U)) << 0x15U));
    SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x26U] 
        = (0x200000U | ((__Vtemp612[0U] << 0x1aU) | 
                        ((IData)(((1ULL + (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                                           + (~ vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b))) 
                                  >> 0x20U)) >> 0xbU)));
    SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x27U] 
        = ((__Vtemp612[0U] >> 6U) | (__Vtemp612[1U] 
                                     << 0x1aU));
    SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x28U] 
        = ((__Vtemp612[1U] >> 6U) | (__Vtemp612[2U] 
                                     << 0x1aU));
    if (__Vdlyvset__SimTop__DOT__icache_ram__DOT__ram__v0) {
        vlSelf->SimTop__DOT__icache_ram__DOT__ram[__Vdlyvdim0__SimTop__DOT__icache_ram__DOT__ram__v0][0U] 
            = __Vdlyvval__SimTop__DOT__icache_ram__DOT__ram__v0[0U];
        vlSelf->SimTop__DOT__icache_ram__DOT__ram[__Vdlyvdim0__SimTop__DOT__icache_ram__DOT__ram__v0][1U] 
            = __Vdlyvval__SimTop__DOT__icache_ram__DOT__ram__v0[1U];
        vlSelf->SimTop__DOT__icache_ram__DOT__ram[__Vdlyvdim0__SimTop__DOT__icache_ram__DOT__ram__v0][2U] 
            = __Vdlyvval__SimTop__DOT__icache_ram__DOT__ram__v0[2U];
        vlSelf->SimTop__DOT__icache_ram__DOT__ram[__Vdlyvdim0__SimTop__DOT__icache_ram__DOT__ram__v0][3U] 
            = __Vdlyvval__SimTop__DOT__icache_ram__DOT__ram__v0[3U];
    }
    vlSelf->SimTop__DOT__u_icache__DOT__re_write_addr 
        = __Vdly__SimTop__DOT__u_icache__DOT__re_write_addr;
    vlSelf->SimTop__DOT__iram_wen = (1U & (~ ((1U == (IData)(vlSelf->SimTop__DOT__u_icache__DOT__re_write_state)) 
                                              & (IData)(vlSelf->SimTop__DOT__arb_if_r_hs))));
    vlSelf->SimTop__DOT__u_cpu__DOT__pc_wen = (1U & 
                                               (~ (
                                                   ((vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                                     != vlSelf->SimTop__DOT__u_cpu__DOT__inst_ex) 
                                                    & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__read_mem_en_ex)) 
                                                   & (((0x1fU 
                                                        & (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                                           >> 0xfU)) 
                                                       == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rd_ex)) 
                                                      | ((0x1fU 
                                                          & (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                                             >> 0x14U)) 
                                                         == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rd_ex))))));
    vlSelf->SimTop__DOT__u_cpu__DOT__axi_stall_i = 
        (((IData)(vlSelf->SimTop__DOT__axi_stall) | (IData)(SimTop__DOT__icache_stall)) 
         | (((0xaU == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_ex)) 
             & (~ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_valid))) 
            | ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_ready) 
               & (2U != (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__div_state)))));
    vlSelf->SimTop__DOT__u_cpu__DOT__m_time_interrupt_trigger 
        = (((vlSelf->SimTop__DOT__clint__DOT__mtime 
             >= vlSelf->SimTop__DOT__clint__DOT__mtimecmp) 
            & (IData)((vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mstatus_reg 
                       >> 3U))) & (IData)((vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mie_reg 
                                           >> 7U)));
    vlSelf->SimTop__DOT__u_cpu__DOT__optype = ((3U 
                                                & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__optype)) 
                                               | (((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_ebreak) 
                                                     | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_auipc)) 
                                                    | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lui)) 
                                                   | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_jal)) 
                                                  << 2U));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__pair_list[0U][0U] 
        = SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_imm____pinNumber4[0U];
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__pair_list[0U][1U] 
        = SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_imm____pinNumber4[1U];
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__pair_list[0U][2U] 
        = (7U & SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_imm____pinNumber4[2U]);
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__pair_list[1U][0U] 
        = ((SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_imm____pinNumber4[3U] 
            << 0x1dU) | (SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_imm____pinNumber4[2U] 
                         >> 3U));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__pair_list[1U][1U] 
        = ((SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_imm____pinNumber4[4U] 
            << 0x1dU) | (SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_imm____pinNumber4[3U] 
                         >> 3U));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__pair_list[1U][2U] 
        = (7U & (SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_imm____pinNumber4[4U] 
                 >> 3U));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__pair_list[2U][0U] 
        = ((SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_imm____pinNumber4[5U] 
            << 0x1aU) | (SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_imm____pinNumber4[4U] 
                         >> 6U));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__pair_list[2U][1U] 
        = ((SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_imm____pinNumber4[6U] 
            << 0x1aU) | (SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_imm____pinNumber4[5U] 
                         >> 6U));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__pair_list[2U][2U] 
        = (7U & (SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_imm____pinNumber4[6U] 
                 >> 6U));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__pair_list[3U][0U] 
        = ((SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_imm____pinNumber4[7U] 
            << 0x17U) | (SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_imm____pinNumber4[6U] 
                         >> 9U));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__pair_list[3U][1U] 
        = ((SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_imm____pinNumber4[8U] 
            << 0x17U) | (SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_imm____pinNumber4[7U] 
                         >> 9U));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__pair_list[3U][2U] 
        = (7U & (SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_imm____pinNumber4[8U] 
                 >> 9U));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__pair_list[4U][0U] 
        = ((SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_imm____pinNumber4[9U] 
            << 0x14U) | (SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_imm____pinNumber4[8U] 
                         >> 0xcU));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__pair_list[4U][1U] 
        = ((SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_imm____pinNumber4[0xaU] 
            << 0x14U) | (SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_imm____pinNumber4[9U] 
                         >> 0xcU));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__pair_list[4U][2U] 
        = (7U & (SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_imm____pinNumber4[0xaU] 
                 >> 0xcU));
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_op_id = ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_jal) 
                                                  | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_jalr));
    vlSelf->SimTop__DOT__u_cpu__DOT__csr_ren = ((((
                                                   ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrc) 
                                                    | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrs)) 
                                                   | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrci)) 
                                                  | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrsi)) 
                                                 | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrwi)) 
                                                | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrw));
    vlSelf->SimTop__DOT__u_cpu__DOT__csr_alu_op_id 
        = ((6U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__csr_alu_op_id)) 
           | ((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrc) 
                | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrs)) 
               | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrci)) 
              | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrsi)));
    vlSelf->SimTop__DOT__u_cpu__DOT__csr_alu_op_id 
        = ((5U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__csr_alu_op_id)) 
           | (((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrc) 
                 | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrw)) 
                | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrci)) 
               | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrwi)) 
              << 1U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_id = ((0xfU 
                                                   & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_id)) 
                                                  | (((((((((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrc) 
                                                              | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrs)) 
                                                             | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrci)) 
                                                            | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrsi)) 
                                                           | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrw)) 
                                                          | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrwi)) 
                                                         | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_srl)) 
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
                                                  | (((((((((((((((((((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrc) 
                                                                        | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrs)) 
                                                                       | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrci)) 
                                                                      | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrsi)) 
                                                                     | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrw)) 
                                                                    | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrwi)) 
                                                                   | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_srai)) 
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
                                               | ((((((((((((((((((((((((((((((((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrc) 
                                                                                | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrs)) 
                                                                                | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrci)) 
                                                                                | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrsi)) 
                                                                               | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrw)) 
                                                                              | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrwi)) 
                                                                             | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_addi)) 
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
    SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__csr_value_write____pinNumber4[0U] 
        = (IData)((vlSelf->SimTop__DOT__u_cpu__DOT__csr_value_ex 
                   & (~ SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_operation_a)));
    SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__csr_value_write____pinNumber4[1U] 
        = (IData)(((vlSelf->SimTop__DOT__u_cpu__DOT__csr_value_ex 
                    & (~ SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_operation_a)) 
                   >> 0x20U));
    SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__csr_value_write____pinNumber4[2U] 
        = (3U | ((IData)(SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_operation_a) 
                 << 3U));
    SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__csr_value_write____pinNumber4[3U] 
        = (((IData)(SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_operation_a) 
            >> 0x1dU) | ((IData)((SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_operation_a 
                                  >> 0x20U)) << 3U));
    SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__csr_value_write____pinNumber4[4U] 
        = (0x10U | (((IData)((SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_operation_a 
                              | vlSelf->SimTop__DOT__u_cpu__DOT__csr_value_ex)) 
                     << 6U) | ((IData)((SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_operation_a 
                                        >> 0x20U)) 
                               >> 0x1dU)));
    SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__csr_value_write____pinNumber4[5U] 
        = (((IData)((SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_operation_a 
                     | vlSelf->SimTop__DOT__u_cpu__DOT__csr_value_ex)) 
            >> 0x1aU) | ((IData)(((SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_operation_a 
                                   | vlSelf->SimTop__DOT__u_cpu__DOT__csr_value_ex) 
                                  >> 0x20U)) << 6U));
    SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__csr_value_write____pinNumber4[6U] 
        = (0x40U | ((IData)(((SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_operation_a 
                              | vlSelf->SimTop__DOT__u_cpu__DOT__csr_value_ex) 
                             >> 0x20U)) >> 0x1aU));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[0U][0U] 
        = SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0U];
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[0U][1U] 
        = SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[1U];
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[0U][2U] 
        = (0x1fU & SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[2U]);
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[1U][0U] 
        = ((SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[3U] 
            << 0x1bU) | (SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[2U] 
                         >> 5U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[1U][1U] 
        = ((SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[4U] 
            << 0x1bU) | (SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[3U] 
                         >> 5U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[1U][2U] 
        = (0x1fU & (SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[4U] 
                    >> 5U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[2U][0U] 
        = ((SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[5U] 
            << 0x16U) | (SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[4U] 
                         >> 0xaU));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[2U][1U] 
        = ((SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[6U] 
            << 0x16U) | (SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[5U] 
                         >> 0xaU));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[2U][2U] 
        = (0x1fU & (SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[6U] 
                    >> 0xaU));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[3U][0U] 
        = ((SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[7U] 
            << 0x11U) | (SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[6U] 
                         >> 0xfU));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[3U][1U] 
        = ((SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[8U] 
            << 0x11U) | (SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[7U] 
                         >> 0xfU));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[3U][2U] 
        = (0x1fU & (SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[8U] 
                    >> 0xfU));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[4U][0U] 
        = ((SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[9U] 
            << 0xcU) | (SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[8U] 
                        >> 0x14U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[4U][1U] 
        = ((SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0xaU] 
            << 0xcU) | (SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[9U] 
                        >> 0x14U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[4U][2U] 
        = (0x1fU & (SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0xaU] 
                    >> 0x14U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[5U][0U] 
        = ((SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0xbU] 
            << 7U) | (SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0xaU] 
                      >> 0x19U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[5U][1U] 
        = ((SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0xcU] 
            << 7U) | (SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0xbU] 
                      >> 0x19U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[5U][2U] 
        = (0x1fU & (SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0xcU] 
                    >> 0x19U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[6U][0U] 
        = ((SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0xdU] 
            << 2U) | (SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0xcU] 
                      >> 0x1eU));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[6U][1U] 
        = ((SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0xeU] 
            << 2U) | (SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0xdU] 
                      >> 0x1eU));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[6U][2U] 
        = (0x1fU & ((SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0xfU] 
                     << 2U) | (SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0xeU] 
                               >> 0x1eU)));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[7U][0U] 
        = ((SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x10U] 
            << 0x1dU) | (SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0xfU] 
                         >> 3U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[7U][1U] 
        = ((SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x11U] 
            << 0x1dU) | (SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x10U] 
                         >> 3U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[7U][2U] 
        = (0x1fU & (SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x11U] 
                    >> 3U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[8U][0U] 
        = ((SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x12U] 
            << 0x18U) | (SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x11U] 
                         >> 8U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[8U][1U] 
        = ((SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x13U] 
            << 0x18U) | (SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x12U] 
                         >> 8U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[8U][2U] 
        = (0x1fU & (SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x13U] 
                    >> 8U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[9U][0U] 
        = ((SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x14U] 
            << 0x13U) | (SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x13U] 
                         >> 0xdU));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[9U][1U] 
        = ((SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x15U] 
            << 0x13U) | (SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x14U] 
                         >> 0xdU));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[9U][2U] 
        = (0x1fU & (SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x15U] 
                    >> 0xdU));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[0xaU][0U] 
        = ((SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x16U] 
            << 0xeU) | (SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x15U] 
                        >> 0x12U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[0xaU][1U] 
        = ((SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x17U] 
            << 0xeU) | (SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x16U] 
                        >> 0x12U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[0xaU][2U] 
        = (0x1fU & (SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x17U] 
                    >> 0x12U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[0xbU][0U] 
        = ((SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x18U] 
            << 9U) | (SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x17U] 
                      >> 0x17U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[0xbU][1U] 
        = ((SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x19U] 
            << 9U) | (SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x18U] 
                      >> 0x17U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[0xbU][2U] 
        = (0x1fU & (SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x19U] 
                    >> 0x17U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[0xcU][0U] 
        = ((SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x1aU] 
            << 4U) | (SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x19U] 
                      >> 0x1cU));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[0xcU][1U] 
        = ((SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x1bU] 
            << 4U) | (SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x1aU] 
                      >> 0x1cU));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[0xcU][2U] 
        = (0x1fU & ((SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x1cU] 
                     << 4U) | (SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x1bU] 
                               >> 0x1cU)));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[0xdU][0U] 
        = ((SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x1dU] 
            << 0x1fU) | (SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x1cU] 
                         >> 1U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[0xdU][1U] 
        = ((SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x1eU] 
            << 0x1fU) | (SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x1dU] 
                         >> 1U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[0xdU][2U] 
        = (0x1fU & (SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x1eU] 
                    >> 1U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[0xeU][0U] 
        = ((SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x1fU] 
            << 0x1aU) | (SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x1eU] 
                         >> 6U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[0xeU][1U] 
        = ((SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x20U] 
            << 0x1aU) | (SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x1fU] 
                         >> 6U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[0xeU][2U] 
        = (0x1fU & (SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x20U] 
                    >> 6U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[0xfU][0U] 
        = ((SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x21U] 
            << 0x15U) | (SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x20U] 
                         >> 0xbU));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[0xfU][1U] 
        = ((SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x22U] 
            << 0x15U) | (SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x21U] 
                         >> 0xbU));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[0xfU][2U] 
        = (0x1fU & (SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x22U] 
                    >> 0xbU));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[0x10U][0U] 
        = ((SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x23U] 
            << 0x10U) | (SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x22U] 
                         >> 0x10U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[0x10U][1U] 
        = ((SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x24U] 
            << 0x10U) | (SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x23U] 
                         >> 0x10U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[0x10U][2U] 
        = (0x1fU & (SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x24U] 
                    >> 0x10U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[0x11U][0U] 
        = ((SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x25U] 
            << 0xbU) | (SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x24U] 
                        >> 0x15U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[0x11U][1U] 
        = ((SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x26U] 
            << 0xbU) | (SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x25U] 
                        >> 0x15U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[0x11U][2U] 
        = (0x1fU & (SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x26U] 
                    >> 0x15U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[0x12U][0U] 
        = ((SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x27U] 
            << 6U) | (SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x26U] 
                      >> 0x1aU));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[0x12U][1U] 
        = ((SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x28U] 
            << 6U) | (SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x27U] 
                      >> 0x1aU));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[0x12U][2U] 
        = (0x1fU & (SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x28U] 
                    >> 0x1aU));
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__icache_data_read = 0ULL;
    } else if (((2U == (IData)(vlSelf->SimTop__DOT__arbitrating__DOT__arb_state)) 
                & (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__r_hs))) {
        vlSelf->SimTop__DOT__icache_data_read = vlSelf->io_memAXI_0_r_bits_data
            [0U];
    }
    vlSelf->SimTop__DOT__u_icache__DOT__hit = ((IData)(
                                                       (vlSelf->SimTop__DOT__u_icache__DOT__valid 
                                                        >> 
                                                        (0x3fU 
                                                         & (IData)(
                                                                   (vlSelf->SimTop__DOT__u_cpu__DOT__pc 
                                                                    >> 4U))))) 
                                               & (vlSelf->SimTop__DOT__u_icache__DOT__tag
                                                  [
                                                  (0x7fU 
                                                   & (IData)(
                                                             (vlSelf->SimTop__DOT__u_cpu__DOT__pc 
                                                              >> 3U)))] 
                                                  == 
                                                  (vlSelf->SimTop__DOT__u_cpu__DOT__pc 
                                                   >> 0xaU)));
    vlSelf->SimTop__DOT__iram_addr = (0x3fU & ((IData)(vlSelf->SimTop__DOT__iram_wen)
                                                ? (IData)(
                                                          (vlSelf->SimTop__DOT__u_cpu__DOT__pc 
                                                           >> 4U))
                                                : (IData)(
                                                          (vlSelf->SimTop__DOT__u_icache__DOT__re_write_addr 
                                                           >> 4U))));
    vlSelf->io_uart_out_valid = ((~ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__axi_stall_i)) 
                                 & (0x7bU == vlSelf->SimTop__DOT__u_cpu__DOT__inst_wb));
    vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mscratch 
        = ((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__csr_wen_wb) 
             & (0x340U == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__csr_wb))) 
            & (~ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__m_time_interrupt_trigger)))
            ? vlSelf->SimTop__DOT__u_cpu__DOT__csr_value_writeback_wb
            : vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mscratch_latch);
    vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mie = 
        ((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__csr_wen_wb) 
           & (0x304U == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__csr_wb))) 
          & (~ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__m_time_interrupt_trigger)))
          ? vlSelf->SimTop__DOT__u_cpu__DOT__csr_value_writeback_wb
          : vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mie_latch);
    vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mip = 
        ((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__csr_wen_wb) 
           & (0x344U == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__csr_wb))) 
          & (~ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__m_time_interrupt_trigger)))
          ? vlSelf->SimTop__DOT__u_cpu__DOT__csr_value_writeback_wb
          : vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mip_latch);
    vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mstatus 
        = ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__m_time_interrupt_trigger)
            ? ((0xffffffffffffe000ULL & vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mstatus_reg) 
               | (QData)((IData)((0x1800U | ((0x700U 
                                              & ((IData)(
                                                         (vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mstatus_reg 
                                                          >> 8U)) 
                                                 << 8U)) 
                                             | ((0x80U 
                                                 & ((IData)(
                                                            (vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mstatus_reg 
                                                             >> 3U)) 
                                                    << 7U)) 
                                                | ((0x70U 
                                                    & ((IData)(
                                                               (vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mstatus_reg 
                                                                >> 4U)) 
                                                       << 4U)) 
                                                   | (7U 
                                                      & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mstatus_reg)))))))))
            : (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__csr_wen_wb) 
                & (0x300U == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__csr_wb)))
                ? vlSelf->SimTop__DOT__u_cpu__DOT__csr_value_writeback_wb
                : ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__environment_call_wb)
                    ? ((0xffffffffffffe000ULL & vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mstatus_reg) 
                       | (QData)((IData)((0x1800U | 
                                          ((0x700U 
                                            & ((IData)(
                                                       (vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mstatus_reg 
                                                        >> 8U)) 
                                               << 8U)) 
                                           | ((0x80U 
                                               & ((IData)(
                                                          (vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mstatus_reg 
                                                           >> 3U)) 
                                                  << 7U)) 
                                              | ((0x70U 
                                                  & ((IData)(
                                                             (vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mstatus_reg 
                                                              >> 4U)) 
                                                     << 4U)) 
                                                 | (7U 
                                                    & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mstatus_reg)))))))))
                    : ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__m_mode_return_wb)
                        ? ((0xffffffffffffe000ULL & vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mstatus_reg) 
                           | (QData)((IData)((0x80U 
                                              | ((0x700U 
                                                  & ((IData)(
                                                             (vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mstatus_reg 
                                                              >> 8U)) 
                                                     << 8U)) 
                                                 | ((0x70U 
                                                     & ((IData)(
                                                                (vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mstatus_reg 
                                                                 >> 4U)) 
                                                        << 4U)) 
                                                    | ((8U 
                                                        & ((IData)(
                                                                   (vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mstatus_reg 
                                                                    >> 7U)) 
                                                           << 3U)) 
                                                       | (7U 
                                                          & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mstatus_reg)))))))))
                        : vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mstatus_latch))));
    vlSelf->SimTop__DOT__u_cpu__DOT__inst_valid_3 = 
        ((((((~ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__axi_stall_i)) 
             & (~ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__m_time_interrupt))) 
            & (~ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__m_time_interrupt_trigger))) 
           & ((((((0U != (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__branch_type_wb)) 
                  | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__write_mem_en_wb)) 
                 | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__wen_wb)) 
                | (0x7bU == vlSelf->SimTop__DOT__u_cpu__DOT__inst_wb)) 
               | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__environment_call_wb)) 
              | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__m_mode_return_wb))) 
          & (~ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__pipeline_stall_wb))) 
         & (0U != vlSelf->SimTop__DOT__u_cpu__DOT__inst_wb));
    vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mcause 
        = ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__m_time_interrupt_trigger)
            ? 0x8000000000000007ULL : (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__csr_wen_wb) 
                                        & (0x342U == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__csr_wb)))
                                        ? vlSelf->SimTop__DOT__u_cpu__DOT__csr_value_writeback_wb
                                        : ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__environment_call_wb)
                                            ? 0xbULL
                                            : (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__m_time_interrupt) 
                                                & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__m_mode_return_wb))
                                                ? vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mcause_timeint_reg
                                                : vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mcause_latch))));
    vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mtvec 
        = ((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__csr_wen_wb) 
             & (0x305U == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__csr_wb))) 
            & (~ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__m_time_interrupt_trigger)))
            ? vlSelf->SimTop__DOT__u_cpu__DOT__csr_value_writeback_wb
            : vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mtvec_latch);
    vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mepc 
        = ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__m_time_interrupt_trigger)
            ? ((0U == vlSelf->SimTop__DOT__u_cpu__DOT__inst_wb)
                ? vlSelf->SimTop__DOT__u_cpu__DOT__pc_mem
                : vlSelf->SimTop__DOT__u_cpu__DOT__pc_wb)
            : (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__csr_wen_wb) 
                & (0x341U == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__csr_wb)))
                ? vlSelf->SimTop__DOT__u_cpu__DOT__csr_value_writeback_wb
                : ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__environment_call_wb)
                    ? vlSelf->SimTop__DOT__u_cpu__DOT__pc_wb
                    : (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__m_time_interrupt) 
                        & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__m_mode_return_wb))
                        ? vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mepc_timeint_reg
                        : vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mepc_latch))));
    if ((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__wen_wb) 
          & (~ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__m_time_interrupt_trigger))) 
         & (~ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__axi_stall_i)))) {
        vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[vlSelf->SimTop__DOT__u_cpu__DOT__rd_wb] 
            = ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__read_mem_en_wb)
                ? vlSelf->SimTop__DOT__u_cpu__DOT__sext_read_mem_value_wb
                : vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_wb);
        vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[0U] = 0ULL;
    } else {
        vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[vlSelf->SimTop__DOT__u_cpu__DOT__rd_wb] 
            = vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf
            [vlSelf->SimTop__DOT__u_cpu__DOT__rd_wb];
        vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[0U] = 0ULL;
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
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_value_write__DOT__i0__DOT__pair_list[0U][0U] 
        = SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__csr_value_write____pinNumber4[0U];
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_value_write__DOT__i0__DOT__pair_list[0U][1U] 
        = SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__csr_value_write____pinNumber4[1U];
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_value_write__DOT__i0__DOT__pair_list[0U][2U] 
        = (7U & SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__csr_value_write____pinNumber4[2U]);
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_value_write__DOT__i0__DOT__pair_list[1U][0U] 
        = ((SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__csr_value_write____pinNumber4[3U] 
            << 0x1dU) | (SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__csr_value_write____pinNumber4[2U] 
                         >> 3U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_value_write__DOT__i0__DOT__pair_list[1U][1U] 
        = ((SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__csr_value_write____pinNumber4[4U] 
            << 0x1dU) | (SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__csr_value_write____pinNumber4[3U] 
                         >> 3U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_value_write__DOT__i0__DOT__pair_list[1U][2U] 
        = (7U & (SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__csr_value_write____pinNumber4[4U] 
                 >> 3U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_value_write__DOT__i0__DOT__pair_list[2U][0U] 
        = ((SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__csr_value_write____pinNumber4[5U] 
            << 0x1aU) | (SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__csr_value_write____pinNumber4[4U] 
                         >> 6U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_value_write__DOT__i0__DOT__pair_list[2U][1U] 
        = ((SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__csr_value_write____pinNumber4[6U] 
            << 0x1aU) | (SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__csr_value_write____pinNumber4[5U] 
                         >> 6U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_value_write__DOT__i0__DOT__pair_list[2U][2U] 
        = (7U & (SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__csr_value_write____pinNumber4[6U] 
                 >> 6U));
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
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[0x12U] 
        = (((QData)((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list
                            [0x12U][1U])) << 0x20U) 
           | (QData)((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list
                             [0x12U][0U])));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[0x12U] 
        = (0x1fU & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list
           [0x12U][2U]);
    vlSelf->SimTop__DOT__arbitrating__DOT__arb_state 
        = __Vdly__SimTop__DOT__arbitrating__DOT__arb_state;
    vlSelf->io_uart_out_ch = (0xffU & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf
                                              [0xaU]));
    vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[0U] 
        = vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf
        [0U];
    vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[1U] 
        = vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf
        [1U];
    vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[2U] 
        = vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf
        [2U];
    vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[3U] 
        = vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf
        [3U];
    vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[4U] 
        = vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf
        [4U];
    vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[5U] 
        = vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf
        [5U];
    vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[6U] 
        = vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf
        [6U];
    vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[7U] 
        = vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf
        [7U];
    vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[8U] 
        = vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf
        [8U];
    vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[9U] 
        = vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf
        [9U];
    vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[0xaU] 
        = vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf
        [0xaU];
    vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[0xbU] 
        = vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf
        [0xbU];
    vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[0xcU] 
        = vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf
        [0xcU];
    vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[0xdU] 
        = vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf
        [0xdU];
    vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[0xeU] 
        = vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf
        [0xeU];
    vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[0xfU] 
        = vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf
        [0xfU];
    vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[0x10U] 
        = vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf
        [0x10U];
    vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[0x11U] 
        = vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf
        [0x11U];
    vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[0x12U] 
        = vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf
        [0x12U];
    vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[0x13U] 
        = vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf
        [0x13U];
    vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[0x14U] 
        = vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf
        [0x14U];
    vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[0x15U] 
        = vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf
        [0x15U];
    vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[0x16U] 
        = vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf
        [0x16U];
    vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[0x17U] 
        = vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf
        [0x17U];
    vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[0x18U] 
        = vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf
        [0x18U];
    vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[0x19U] 
        = vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf
        [0x19U];
    vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[0x1aU] 
        = vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf
        [0x1aU];
    vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[0x1bU] 
        = vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf
        [0x1bU];
    vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[0x1cU] 
        = vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf
        [0x1cU];
    vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[0x1dU] 
        = vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf
        [0x1dU];
    vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[0x1eU] 
        = vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf
        [0x1eU];
    vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[0x1fU] 
        = vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf
        [0x1fU];
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
        = ((((((((((((((((((((((((((((((((((((((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrc) 
                                                 | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrs)) 
                                                | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrw)) 
                                               | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sd)) 
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
    SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__optype) 
                               == vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__data_list
           [0U]);
    SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__optype) 
           == vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__key_list
           [0U]);
    SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__lut_out 
        = (SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__optype) 
                                  == vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__data_list
              [1U]));
    SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__hit 
        = ((IData)(SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__optype) 
              == vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__key_list
              [1U]));
    SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__lut_out 
        = (SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__optype) 
                                  == vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__key_list
                                  [2U])))) & vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__data_list
              [2U]));
    SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__hit 
        = ((IData)(SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__optype) 
              == vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__key_list
              [2U]));
    SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__lut_out 
        = (SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__optype) 
                                  == vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__key_list
                                  [3U])))) & vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__data_list
              [3U]));
    SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__hit 
        = ((IData)(SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__optype) 
              == vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__key_list
              [3U]));
    SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__lut_out 
        = (SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__optype) 
                                  == vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__key_list
                                  [4U])))) & vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__data_list
              [4U]));
    SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__hit 
        = ((IData)(SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__optype) 
              == vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->SimTop__DOT__u_cpu__DOT__imm_id = ((IData)(SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__hit)
                                                ? SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__lut_out
                                                : 0xffff0000ffff0000ULL);
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_value_write__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_value_write__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_value_write__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_value_write__DOT__i0__DOT__key_list[0U] 
        = (7U & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_value_write__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_value_write__DOT__i0__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_value_write__DOT__i0__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_value_write__DOT__i0__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_value_write__DOT__i0__DOT__key_list[1U] 
        = (7U & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_value_write__DOT__i0__DOT__pair_list
           [1U][2U]);
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_value_write__DOT__i0__DOT__data_list[2U] 
        = (((QData)((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_value_write__DOT__i0__DOT__pair_list
                            [2U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_value_write__DOT__i0__DOT__pair_list
                                                                   [2U][0U])));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_value_write__DOT__i0__DOT__key_list[2U] 
        = (7U & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_value_write__DOT__i0__DOT__pair_list
           [2U][2U]);
    SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_ex) 
                               == vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list
           [0U]);
    SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_ex) 
           == vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list
           [0U]);
    SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__lut_out 
        = (SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_ex) 
                                  == vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list
              [1U]));
    SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__hit 
        = ((IData)(SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_ex) 
              == vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list
              [1U]));
    SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__lut_out 
        = (SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_ex) 
                                  == vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list
                                  [2U])))) & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list
              [2U]));
    SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__hit 
        = ((IData)(SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_ex) 
              == vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list
              [2U]));
    SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__lut_out 
        = (SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_ex) 
                                  == vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list
                                  [3U])))) & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list
              [3U]));
    SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__hit 
        = ((IData)(SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_ex) 
              == vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list
              [3U]));
    SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__lut_out 
        = (SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_ex) 
                                  == vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list
                                  [4U])))) & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list
              [4U]));
    SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__hit 
        = ((IData)(SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_ex) 
              == vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list
              [4U]));
    SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__lut_out 
        = (SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_ex) 
                                  == vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list
                                  [5U])))) & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list
              [5U]));
    SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__hit 
        = ((IData)(SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_ex) 
              == vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list
              [5U]));
    SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__lut_out 
        = (SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_ex) 
                                  == vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list
                                  [6U])))) & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list
              [6U]));
    SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__hit 
        = ((IData)(SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_ex) 
              == vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list
              [6U]));
    SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__lut_out 
        = (SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_ex) 
                                  == vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list
                                  [7U])))) & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list
              [7U]));
    SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__hit 
        = ((IData)(SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_ex) 
              == vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list
              [7U]));
    SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__lut_out 
        = (SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_ex) 
                                  == vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list
                                  [8U])))) & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list
              [8U]));
    SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__hit 
        = ((IData)(SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_ex) 
              == vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list
              [8U]));
    SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__lut_out 
        = (SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_ex) 
                                  == vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list
                                  [9U])))) & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list
              [9U]));
    SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__hit 
        = ((IData)(SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_ex) 
              == vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list
              [9U]));
    SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__lut_out 
        = (SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_ex) 
                                  == vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list
                                  [0xaU])))) & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list
              [0xaU]));
    SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__hit 
        = ((IData)(SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_ex) 
              == vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list
              [0xaU]));
    SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__lut_out 
        = (SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_ex) 
                                  == vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list
                                  [0xbU])))) & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list
              [0xbU]));
    SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__hit 
        = ((IData)(SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_ex) 
              == vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list
              [0xbU]));
    SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__lut_out 
        = (SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_ex) 
                                  == vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list
                                  [0xcU])))) & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list
              [0xcU]));
    SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__hit 
        = ((IData)(SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_ex) 
              == vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list
              [0xcU]));
    SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__lut_out 
        = (SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_ex) 
                                  == vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list
                                  [0xdU])))) & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list
              [0xdU]));
    SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__hit 
        = ((IData)(SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_ex) 
              == vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list
              [0xdU]));
    SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__lut_out 
        = (SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_ex) 
                                  == vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list
                                  [0xeU])))) & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list
              [0xeU]));
    SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__hit 
        = ((IData)(SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_ex) 
              == vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list
              [0xeU]));
    SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__lut_out 
        = (SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_ex) 
                                  == vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list
                                  [0xfU])))) & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list
              [0xfU]));
    SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__hit 
        = ((IData)(SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_ex) 
              == vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list
              [0xfU]));
    SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__lut_out 
        = (SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_ex) 
                                  == vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list
                                  [0x10U])))) & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list
              [0x10U]));
    SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__hit 
        = ((IData)(SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_ex) 
              == vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list
              [0x10U]));
    SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__lut_out 
        = (SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_ex) 
                                  == vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list
                                  [0x11U])))) & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list
              [0x11U]));
    SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__hit 
        = ((IData)(SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_ex) 
              == vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list
              [0x11U]));
    SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__lut_out 
        = (SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_ex) 
                                  == vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list
                                  [0x12U])))) & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list
              [0x12U]));
    SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__hit 
        = ((IData)(SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_ex) 
              == vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list
              [0x12U]));
    SimTop__DOT__u_cpu__DOT__value = ((IData)(SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__hit)
                                       ? SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__lut_out
                                       : 0xfedcba9876543210ULL);
    vlSelf->io_memAXI_0_ar_bits_len = ((1U == (IData)(vlSelf->SimTop__DOT__arbitrating__DOT__arb_state))
                                        ? 0U : 0x7fU);
    vlSelf->SimTop__DOT__rw_valid = (((0U == (IData)(vlSelf->SimTop__DOT__arbitrating__DOT__arb_state))
                                       ? 0U : ((1U 
                                                == (IData)(vlSelf->SimTop__DOT__arbitrating__DOT__arb_state))
                                                ? (IData)(vlSelf->SimTop__DOT__mem_valid)
                                                : (
                                                   (2U 
                                                    == (IData)(vlSelf->SimTop__DOT__arbitrating__DOT__arb_state))
                                                    ? (IData)(vlSelf->SimTop__DOT__icache_valid)
                                                    : 0U))) 
                                     & (IData)(vlSelf->SimTop__DOT__arbitrating__DOT__zza_pulse));
    if ((0U == (IData)(vlSelf->SimTop__DOT__arbitrating__DOT__arb_state))) {
        vlSelf->SimTop__DOT__rw_req = 0U;
        SimTop__DOT__rw_addr = 0ULL;
    } else {
        vlSelf->SimTop__DOT__rw_req = (1U & ((1U == (IData)(vlSelf->SimTop__DOT__arbitrating__DOT__arb_state))
                                              ? (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__write_mem_en_mem)
                                              : ((2U 
                                                  == (IData)(vlSelf->SimTop__DOT__arbitrating__DOT__arb_state))
                                                  ? (IData)(vlSelf->SimTop__DOT__icache_req)
                                                  : 0U)));
        SimTop__DOT__rw_addr = ((1U == (IData)(vlSelf->SimTop__DOT__arbitrating__DOT__arb_state))
                                 ? (0xfffffffffffffff8ULL 
                                    & vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)
                                 : ((2U == (IData)(vlSelf->SimTop__DOT__arbitrating__DOT__arb_state))
                                     ? vlSelf->SimTop__DOT__icache_addr
                                     : 0ULL));
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
    SimTop__DOT__u_cpu__DOT__npc_processing__DOT__pc_branch_addr 
        = (vlSelf->SimTop__DOT__u_cpu__DOT__pc_id + vlSelf->SimTop__DOT__u_cpu__DOT__imm_id);
    SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_value_write__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__csr_alu_op_ex) 
                               == vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_value_write__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_value_write__DOT__i0__DOT__data_list
           [0U]);
    SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_value_write__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__csr_alu_op_ex) 
           == vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_value_write__DOT__i0__DOT__key_list
           [0U]);
    SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_value_write__DOT__i0__DOT__lut_out 
        = (SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_value_write__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__csr_alu_op_ex) 
                                  == vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_value_write__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_value_write__DOT__i0__DOT__data_list
              [1U]));
    SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_value_write__DOT__i0__DOT__hit 
        = ((IData)(SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_value_write__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__csr_alu_op_ex) 
              == vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_value_write__DOT__i0__DOT__key_list
              [1U]));
    SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_value_write__DOT__i0__DOT__lut_out 
        = (SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_value_write__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__csr_alu_op_ex) 
                                  == vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_value_write__DOT__i0__DOT__key_list
                                  [2U])))) & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_value_write__DOT__i0__DOT__data_list
              [2U]));
    SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_value_write__DOT__i0__DOT__hit 
        = ((IData)(SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_value_write__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__csr_alu_op_ex) 
              == vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_value_write__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->SimTop__DOT__u_cpu__DOT__csr_value_writeback_ex 
        = ((IData)(SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_value_write__DOT__i0__DOT__hit)
            ? SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_value_write__DOT__i0__DOT__lut_out
            : vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a);
    VL_EXTEND_WQ(68,64, __Vtemp838, SimTop__DOT__u_cpu__DOT__value);
    SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_value0____pinNumber4[0U] 
        = (IData)((((QData)((IData)((- (IData)((1U 
                                                & (IData)(
                                                          (SimTop__DOT__u_cpu__DOT__value 
                                                           >> 0x1fU))))))) 
                    << 0x20U) | (QData)((IData)(SimTop__DOT__u_cpu__DOT__value))));
    SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_value0____pinNumber4[1U] 
        = (IData)(((((QData)((IData)((- (IData)((1U 
                                                 & (IData)(
                                                           (SimTop__DOT__u_cpu__DOT__value 
                                                            >> 0x1fU))))))) 
                     << 0x20U) | (QData)((IData)(SimTop__DOT__u_cpu__DOT__value))) 
                   >> 0x20U));
    SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_value0____pinNumber4[2U] 
        = (4U | (__Vtemp838[0U] << 4U));
    SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_value0____pinNumber4[3U] 
        = ((__Vtemp838[0U] >> 0x1cU) | (__Vtemp838[1U] 
                                        << 4U));
    SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_value0____pinNumber4[4U] 
        = ((__Vtemp838[1U] >> 0x1cU) | (__Vtemp838[2U] 
                                        << 4U));
    VL_EXTEND_WQ(65,64, __Vtemp841, SimTop__DOT__rw_addr);
    vlSelf->io_memAXI_0_ar_bits_addr = (0xfffffff8U 
                                        & __Vtemp841[0U]);
    VL_EXTEND_WQ(65,64, __Vtemp842, SimTop__DOT__rw_addr);
    vlSelf->io_memAXI_0_aw_bits_addr = (0xfffffff8U 
                                        & __Vtemp842[0U]);
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_value0__DOT__i0__DOT__pair_list[0U][0U] 
        = SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_value0____pinNumber4[0U];
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_value0__DOT__i0__DOT__pair_list[0U][1U] 
        = SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_value0____pinNumber4[1U];
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_value0__DOT__i0__DOT__pair_list[0U][2U] 
        = (0xfU & SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_value0____pinNumber4[2U]);
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_value0__DOT__i0__DOT__pair_list[1U][0U] 
        = ((SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_value0____pinNumber4[3U] 
            << 0x1cU) | (SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_value0____pinNumber4[2U] 
                         >> 4U));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_value0__DOT__i0__DOT__pair_list[1U][1U] 
        = ((SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_value0____pinNumber4[4U] 
            << 0x1cU) | (SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_value0____pinNumber4[3U] 
                         >> 4U));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_value0__DOT__i0__DOT__pair_list[1U][2U] 
        = (0xfU & (SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_value0____pinNumber4[4U] 
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
    SimTop__DOT__u_cpu__DOT__sext__DOT__sext_value0__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__value_width_ctrl_ex) 
                               == vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_value0__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_value0__DOT__i0__DOT__data_list
           [0U]);
    SimTop__DOT__u_cpu__DOT__sext__DOT__sext_value0__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__value_width_ctrl_ex) 
           == vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_value0__DOT__i0__DOT__key_list
           [0U]);
    SimTop__DOT__u_cpu__DOT__sext__DOT__sext_value0__DOT__i0__DOT__lut_out 
        = (SimTop__DOT__u_cpu__DOT__sext__DOT__sext_value0__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__value_width_ctrl_ex) 
                                  == vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_value0__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_value0__DOT__i0__DOT__data_list
              [1U]));
    SimTop__DOT__u_cpu__DOT__sext__DOT__sext_value0__DOT__i0__DOT__hit 
        = ((IData)(SimTop__DOT__u_cpu__DOT__sext__DOT__sext_value0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__value_width_ctrl_ex) 
              == vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_value0__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_ex 
        = ((IData)(SimTop__DOT__u_cpu__DOT__sext__DOT__sext_value0__DOT__i0__DOT__hit)
            ? SimTop__DOT__u_cpu__DOT__sext__DOT__sext_value0__DOT__i0__DOT__lut_out
            : SimTop__DOT__u_cpu__DOT__value);
    VL_EXTEND_WQ(66,64, __Vtemp855, vlSelf->SimTop__DOT__u_cpu__DOT__reg2_value_id);
    SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_d_mux____pinNumber4[0U] 
        = (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_ex);
    SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_d_mux____pinNumber4[1U] 
        = (IData)((vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_ex 
                   >> 0x20U));
    SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_d_mux____pinNumber4[2U] 
        = (3U | ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__reg_write_value_wb) 
                 << 2U));
    SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_d_mux____pinNumber4[3U] 
        = (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__reg_write_value_wb) 
            >> 0x1eU) | ((IData)((vlSelf->SimTop__DOT__u_cpu__DOT__reg_write_value_wb 
                                  >> 0x20U)) << 2U));
    SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_d_mux____pinNumber4[4U] 
        = (4U | (((IData)(SimTop__DOT__u_cpu__DOT__reg_write_value_mem) 
                  << 4U) | ((IData)((vlSelf->SimTop__DOT__u_cpu__DOT__reg_write_value_wb 
                                     >> 0x20U)) >> 0x1eU)));
    SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_d_mux____pinNumber4[5U] 
        = (((IData)(SimTop__DOT__u_cpu__DOT__reg_write_value_mem) 
            >> 0x1cU) | ((IData)((SimTop__DOT__u_cpu__DOT__reg_write_value_mem 
                                  >> 0x20U)) << 4U));
    SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_d_mux____pinNumber4[6U] 
        = (0x20U | ((__Vtemp855[0U] << 6U) | ((IData)(
                                                      (SimTop__DOT__u_cpu__DOT__reg_write_value_mem 
                                                       >> 0x20U)) 
                                              >> 0x1cU)));
    SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_d_mux____pinNumber4[7U] 
        = ((__Vtemp855[0U] >> 0x1aU) | (__Vtemp855[1U] 
                                        << 6U));
    SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_d_mux____pinNumber4[8U] 
        = ((__Vtemp855[1U] >> 0x1aU) | (__Vtemp855[2U] 
                                        << 6U));
    VL_EXTEND_WQ(66,64, __Vtemp862, vlSelf->SimTop__DOT__u_cpu__DOT__reg1_value_id);
    SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_c_mux____pinNumber4[0U] 
        = (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_ex);
    SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_c_mux____pinNumber4[1U] 
        = (IData)((vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_ex 
                   >> 0x20U));
    SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_c_mux____pinNumber4[2U] 
        = (3U | ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__reg_write_value_wb) 
                 << 2U));
    SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_c_mux____pinNumber4[3U] 
        = (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__reg_write_value_wb) 
            >> 0x1eU) | ((IData)((vlSelf->SimTop__DOT__u_cpu__DOT__reg_write_value_wb 
                                  >> 0x20U)) << 2U));
    SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_c_mux____pinNumber4[4U] 
        = (4U | (((IData)(SimTop__DOT__u_cpu__DOT__reg_write_value_mem) 
                  << 4U) | ((IData)((vlSelf->SimTop__DOT__u_cpu__DOT__reg_write_value_wb 
                                     >> 0x20U)) >> 0x1eU)));
    SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_c_mux____pinNumber4[5U] 
        = (((IData)(SimTop__DOT__u_cpu__DOT__reg_write_value_mem) 
            >> 0x1cU) | ((IData)((SimTop__DOT__u_cpu__DOT__reg_write_value_mem 
                                  >> 0x20U)) << 4U));
    SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_c_mux____pinNumber4[6U] 
        = (0x20U | ((__Vtemp862[0U] << 6U) | ((IData)(
                                                      (SimTop__DOT__u_cpu__DOT__reg_write_value_mem 
                                                       >> 0x20U)) 
                                              >> 0x1cU)));
    SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_c_mux____pinNumber4[7U] 
        = ((__Vtemp862[0U] >> 0x1aU) | (__Vtemp862[1U] 
                                        << 6U));
    SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_c_mux____pinNumber4[8U] 
        = ((__Vtemp862[1U] >> 0x1aU) | (__Vtemp862[2U] 
                                        << 6U));
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__pair_list[0U][0U] 
        = SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_d_mux____pinNumber4[0U];
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__pair_list[0U][1U] 
        = SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_d_mux____pinNumber4[1U];
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__pair_list[0U][2U] 
        = (3U & SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_d_mux____pinNumber4[2U]);
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__pair_list[1U][0U] 
        = ((SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_d_mux____pinNumber4[3U] 
            << 0x1eU) | (SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_d_mux____pinNumber4[2U] 
                         >> 2U));
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__pair_list[1U][1U] 
        = ((SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_d_mux____pinNumber4[4U] 
            << 0x1eU) | (SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_d_mux____pinNumber4[3U] 
                         >> 2U));
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__pair_list[1U][2U] 
        = (3U & (SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_d_mux____pinNumber4[4U] 
                 >> 2U));
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__pair_list[2U][0U] 
        = ((SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_d_mux____pinNumber4[5U] 
            << 0x1cU) | (SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_d_mux____pinNumber4[4U] 
                         >> 4U));
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__pair_list[2U][1U] 
        = ((SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_d_mux____pinNumber4[6U] 
            << 0x1cU) | (SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_d_mux____pinNumber4[5U] 
                         >> 4U));
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__pair_list[2U][2U] 
        = (3U & (SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_d_mux____pinNumber4[6U] 
                 >> 4U));
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__pair_list[3U][0U] 
        = ((SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_d_mux____pinNumber4[7U] 
            << 0x1aU) | (SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_d_mux____pinNumber4[6U] 
                         >> 6U));
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__pair_list[3U][1U] 
        = ((SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_d_mux____pinNumber4[8U] 
            << 0x1aU) | (SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_d_mux____pinNumber4[7U] 
                         >> 6U));
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__pair_list[3U][2U] 
        = (3U & (SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_d_mux____pinNumber4[8U] 
                 >> 6U));
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__pair_list[0U][0U] 
        = SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_c_mux____pinNumber4[0U];
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__pair_list[0U][1U] 
        = SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_c_mux____pinNumber4[1U];
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__pair_list[0U][2U] 
        = (3U & SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_c_mux____pinNumber4[2U]);
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__pair_list[1U][0U] 
        = ((SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_c_mux____pinNumber4[3U] 
            << 0x1eU) | (SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_c_mux____pinNumber4[2U] 
                         >> 2U));
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__pair_list[1U][1U] 
        = ((SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_c_mux____pinNumber4[4U] 
            << 0x1eU) | (SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_c_mux____pinNumber4[3U] 
                         >> 2U));
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__pair_list[1U][2U] 
        = (3U & (SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_c_mux____pinNumber4[4U] 
                 >> 2U));
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__pair_list[2U][0U] 
        = ((SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_c_mux____pinNumber4[5U] 
            << 0x1cU) | (SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_c_mux____pinNumber4[4U] 
                         >> 4U));
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__pair_list[2U][1U] 
        = ((SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_c_mux____pinNumber4[6U] 
            << 0x1cU) | (SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_c_mux____pinNumber4[5U] 
                         >> 4U));
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__pair_list[2U][2U] 
        = (3U & (SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_c_mux____pinNumber4[6U] 
                 >> 4U));
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__pair_list[3U][0U] 
        = ((SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_c_mux____pinNumber4[7U] 
            << 0x1aU) | (SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_c_mux____pinNumber4[6U] 
                         >> 6U));
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__pair_list[3U][1U] 
        = ((SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_c_mux____pinNumber4[8U] 
            << 0x1aU) | (SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_c_mux____pinNumber4[7U] 
                         >> 6U));
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__pair_list[3U][2U] 
        = (3U & (SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_c_mux____pinNumber4[8U] 
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
    SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(SimTop__DOT__u_cpu__DOT__Forward_d) 
                               == vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__data_list
           [0U]);
    SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__hit 
        = ((IData)(SimTop__DOT__u_cpu__DOT__Forward_d) 
           == vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__key_list
           [0U]);
    SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__lut_out 
        = (SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(SimTop__DOT__u_cpu__DOT__Forward_d) 
                                  == vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__data_list
              [1U]));
    SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__hit 
        = ((IData)(SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__hit) 
           | ((IData)(SimTop__DOT__u_cpu__DOT__Forward_d) 
              == vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__key_list
              [1U]));
    SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__lut_out 
        = (SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(SimTop__DOT__u_cpu__DOT__Forward_d) 
                                  == vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__key_list
                                  [2U])))) & vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__data_list
              [2U]));
    SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__hit 
        = ((IData)(SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__hit) 
           | ((IData)(SimTop__DOT__u_cpu__DOT__Forward_d) 
              == vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__key_list
              [2U]));
    SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__lut_out 
        = (SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(SimTop__DOT__u_cpu__DOT__Forward_d) 
                                  == vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__key_list
                                  [3U])))) & vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__data_list
              [3U]));
    SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__hit 
        = ((IData)(SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__hit) 
           | ((IData)(SimTop__DOT__u_cpu__DOT__Forward_d) 
              == vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__key_list
              [3U]));
    SimTop__DOT__u_cpu__DOT__npc_processing__DOT__operation_b_forward 
        = ((IData)(SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__hit)
            ? SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__lut_out
            : vlSelf->SimTop__DOT__u_cpu__DOT__reg2_value_id);
    SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(SimTop__DOT__u_cpu__DOT__Forward_c) 
                               == vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__data_list
           [0U]);
    SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__hit 
        = ((IData)(SimTop__DOT__u_cpu__DOT__Forward_c) 
           == vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__key_list
           [0U]);
    SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__lut_out 
        = (SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(SimTop__DOT__u_cpu__DOT__Forward_c) 
                                  == vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__data_list
              [1U]));
    SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__hit 
        = ((IData)(SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__hit) 
           | ((IData)(SimTop__DOT__u_cpu__DOT__Forward_c) 
              == vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__key_list
              [1U]));
    SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__lut_out 
        = (SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(SimTop__DOT__u_cpu__DOT__Forward_c) 
                                  == vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__key_list
                                  [2U])))) & vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__data_list
              [2U]));
    SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__hit 
        = ((IData)(SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__hit) 
           | ((IData)(SimTop__DOT__u_cpu__DOT__Forward_c) 
              == vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__key_list
              [2U]));
    SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__lut_out 
        = (SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(SimTop__DOT__u_cpu__DOT__Forward_c) 
                                  == vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__key_list
                                  [3U])))) & vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__data_list
              [3U]));
    SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__hit 
        = ((IData)(SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__hit) 
           | ((IData)(SimTop__DOT__u_cpu__DOT__Forward_c) 
              == vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__key_list
              [3U]));
    SimTop__DOT__u_cpu__DOT__npc_processing__DOT__operation_a_forward 
        = ((IData)(SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__hit)
            ? SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__lut_out
            : vlSelf->SimTop__DOT__u_cpu__DOT__reg1_value_id);
    SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__branch_test____pinNumber4 
        = (0x246c8aU | ((0x100000U & ((~ (IData)((0U 
                                                  != 
                                                  (SimTop__DOT__u_cpu__DOT__npc_processing__DOT__operation_a_forward 
                                                   ^ SimTop__DOT__u_cpu__DOT__npc_processing__DOT__operation_b_forward)))) 
                                      << 0x14U)) | 
                        (((IData)((0U != (SimTop__DOT__u_cpu__DOT__npc_processing__DOT__operation_a_forward 
                                          ^ SimTop__DOT__u_cpu__DOT__npc_processing__DOT__operation_b_forward))) 
                          << 0x10U) | ((VL_GTES_IQQ(1,64,64, SimTop__DOT__u_cpu__DOT__npc_processing__DOT__operation_a_forward, SimTop__DOT__u_cpu__DOT__npc_processing__DOT__operation_b_forward) 
                                        << 0xcU) | 
                                       (((SimTop__DOT__u_cpu__DOT__npc_processing__DOT__operation_a_forward 
                                          >= SimTop__DOT__u_cpu__DOT__npc_processing__DOT__operation_b_forward) 
                                         << 8U) | (
                                                   (VL_LTS_IQQ(1,64,64, SimTop__DOT__u_cpu__DOT__npc_processing__DOT__operation_a_forward, SimTop__DOT__u_cpu__DOT__npc_processing__DOT__operation_b_forward) 
                                                    << 4U) 
                                                   | (SimTop__DOT__u_cpu__DOT__npc_processing__DOT__operation_a_forward 
                                                      < SimTop__DOT__u_cpu__DOT__npc_processing__DOT__operation_b_forward)))))));
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__pair_list[0U] 
        = (0xfU & SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__branch_test____pinNumber4);
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__pair_list[1U] 
        = (0xfU & (SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__branch_test____pinNumber4 
                   >> 4U));
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__pair_list[2U] 
        = (0xfU & (SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__branch_test____pinNumber4 
                   >> 8U));
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__pair_list[3U] 
        = (0xfU & (SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__branch_test____pinNumber4 
                   >> 0xcU));
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__pair_list[4U] 
        = (0xfU & (SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__branch_test____pinNumber4 
                   >> 0x10U));
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__pair_list[5U] 
        = (0xfU & (SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__branch_test____pinNumber4 
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
    SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__lut_out 
        = (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__branch_type_id) 
            == vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__key_list
            [0U]) & vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__data_list
           [0U]);
    SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__branch_type_id) 
           == vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__key_list
           [0U]);
    SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__lut_out 
        = ((IData)(SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__branch_type_id) 
               == vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__key_list
               [1U]) & vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__data_list
              [1U]));
    SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__hit 
        = ((IData)(SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__branch_type_id) 
              == vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__key_list
              [1U]));
    SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__lut_out 
        = ((IData)(SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__branch_type_id) 
               == vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__key_list
               [2U]) & vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__data_list
              [2U]));
    SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__hit 
        = ((IData)(SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__branch_type_id) 
              == vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__key_list
              [2U]));
    SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__lut_out 
        = ((IData)(SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__branch_type_id) 
               == vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__key_list
               [3U]) & vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__data_list
              [3U]));
    SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__hit 
        = ((IData)(SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__branch_type_id) 
              == vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__key_list
              [3U]));
    SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__lut_out 
        = ((IData)(SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__branch_type_id) 
               == vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__key_list
               [4U]) & vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__data_list
              [4U]));
    SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__hit 
        = ((IData)(SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__branch_type_id) 
              == vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__key_list
              [4U]));
    SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__lut_out 
        = ((IData)(SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__branch_type_id) 
               == vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__key_list
               [5U]) & vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__data_list
              [5U]));
    SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__hit 
        = ((IData)(SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__branch_type_id) 
              == vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__key_list
              [5U]));
    SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_en 
        = ((IData)(SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__hit) 
           & (IData)(SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__lut_out));
    vlSelf->SimTop__DOT__u_cpu__DOT__IF_Flush = ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__pipeline_stall)
                                                  ? 0U
                                                  : 
                                                 ((((((IData)(SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_en) 
                                                      | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__npc_op_id)) 
                                                     | (0x73U 
                                                        == vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)) 
                                                    | (0x30200073U 
                                                       == vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)) 
                                                   | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__m_time_interrupt_trigger))
                                                   ? 1U
                                                   : 0U));
    vlSelf->SimTop__DOT__u_cpu__DOT__npc = ((0x30200073U 
                                             == vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)
                                             ? vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mepc
                                             : (((0x73U 
                                                  == vlSelf->SimTop__DOT__u_cpu__DOT__inst_id) 
                                                 | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__m_time_interrupt_trigger))
                                                 ? vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mtvec
                                                 : 
                                                ((IData)(SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_en)
                                                  ? SimTop__DOT__u_cpu__DOT__npc_processing__DOT__pc_branch_addr
                                                  : 
                                                 ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__npc_op_id)
                                                   ? 
                                                  ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_jalr)
                                                    ? 
                                                   (0xfffffffffffffffeULL 
                                                    & (SimTop__DOT__u_cpu__DOT__npc_processing__DOT__operation_a_forward 
                                                       + vlSelf->SimTop__DOT__u_cpu__DOT__imm_id))
                                                    : SimTop__DOT__u_cpu__DOT__npc_processing__DOT__pc_branch_addr)
                                                   : 
                                                  (4ULL 
                                                   + vlSelf->SimTop__DOT__u_cpu__DOT__pc)))));
}

VL_INLINE_OPT void VSimTop___024root___sequent__TOP__3(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___sequent__TOP__3\n"); );
    // Variables
    CData/*0:0*/ __Vdly__SimTop__DOT__u_cpu__DOT__trap;
    CData/*0:0*/ __Vdlyvset__SimTop__DOT__u_cpu__DOT__regs_diff__v0;
    CData/*0:0*/ __Vdlyvset__SimTop__DOT__u_cpu__DOT__regs_diff__v32;
    CData/*0:0*/ __Vdlyvset__SimTop__DOT__u_cpu__DOT__regs_diff__v33;
    QData/*63:0*/ __Vdly__SimTop__DOT__u_cpu__DOT__cycleCnt;
    QData/*63:0*/ __Vdly__SimTop__DOT__u_cpu__DOT__instrCnt;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v32;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v33;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v34;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v35;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v36;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v37;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v38;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v39;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v40;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v41;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v42;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v43;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v44;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v45;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v46;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v47;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v48;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v49;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v50;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v51;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v52;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v53;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v54;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v55;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v56;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v57;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v58;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v59;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v60;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v61;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v62;
    QData/*63:0*/ __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v63;
    // Body
    __Vdly__SimTop__DOT__u_cpu__DOT__instrCnt = vlSelf->SimTop__DOT__u_cpu__DOT__instrCnt;
    __Vdly__SimTop__DOT__u_cpu__DOT__cycleCnt = vlSelf->SimTop__DOT__u_cpu__DOT__cycleCnt;
    __Vdly__SimTop__DOT__u_cpu__DOT__trap = vlSelf->SimTop__DOT__u_cpu__DOT__trap;
    __Vdlyvset__SimTop__DOT__u_cpu__DOT__regs_diff__v0 = 0U;
    __Vdlyvset__SimTop__DOT__u_cpu__DOT__regs_diff__v32 = 0U;
    __Vdlyvset__SimTop__DOT__u_cpu__DOT__regs_diff__v33 = 0U;
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_cpu__DOT__cmt_wen = 0U;
        vlSelf->SimTop__DOT__u_cpu__DOT__cmt_wdest = 0U;
        vlSelf->SimTop__DOT__u_cpu__DOT__cmt_wdata = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__cmt_pc = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__cmt_inst = 0U;
        vlSelf->SimTop__DOT__u_cpu__DOT__cmt_valid = 0U;
        vlSelf->SimTop__DOT__u_cpu__DOT__cmt_skip = 0U;
        __Vdly__SimTop__DOT__u_cpu__DOT__trap = 0U;
        vlSelf->SimTop__DOT__u_cpu__DOT__trap_code = 0U;
        __Vdly__SimTop__DOT__u_cpu__DOT__cycleCnt = 0ULL;
        __Vdly__SimTop__DOT__u_cpu__DOT__instrCnt = 0ULL;
        __Vdlyvset__SimTop__DOT__u_cpu__DOT__regs_diff__v0 = 1U;
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
        vlSelf->SimTop__DOT__u_cpu__DOT__cmt_skip = 
            ((((0x7bU == vlSelf->SimTop__DOT__u_cpu__DOT__inst_wb) 
               | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__m_time_interrupt)) 
              | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__if_clint_wb)) 
             | (0xb00U == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__csr_wb)));
        __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v32 
            = vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr
            [0x1fU];
        __Vdlyvset__SimTop__DOT__u_cpu__DOT__regs_diff__v32 = 1U;
        __Vdly__SimTop__DOT__u_cpu__DOT__trap = (0x6bU 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->SimTop__DOT__u_cpu__DOT__inst_wb));
        vlSelf->SimTop__DOT__u_cpu__DOT__trap_code 
            = (0xffU & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr
                               [0xaU]));
        __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v33 
            = vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr
            [0x1eU];
        __Vdlyvset__SimTop__DOT__u_cpu__DOT__regs_diff__v33 = 1U;
        __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v34 
            = vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr
            [0x1dU];
        __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v35 
            = vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr
            [0x1cU];
        __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v36 
            = vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr
            [0x1bU];
        __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v37 
            = vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr
            [0x1aU];
        __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v38 
            = vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr
            [0x19U];
        __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v39 
            = vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr
            [0x18U];
        __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v40 
            = vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr
            [0x17U];
        __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v41 
            = vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr
            [0x16U];
        __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v42 
            = vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr
            [0x15U];
        __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v43 
            = vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr
            [0x14U];
        __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v44 
            = vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr
            [0x13U];
        __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v45 
            = vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr
            [0x12U];
        __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v46 
            = vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr
            [0x11U];
        __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v47 
            = vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr
            [0x10U];
        __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v48 
            = vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr
            [0xfU];
        __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v49 
            = vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr
            [0xeU];
        __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v50 
            = vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr
            [0xdU];
        __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v51 
            = vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr
            [0xcU];
        __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v52 
            = vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr
            [0xbU];
        __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v53 
            = vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr
            [0xaU];
        __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v54 
            = vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr
            [9U];
        __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v55 
            = vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr
            [8U];
        __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v56 
            = vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr
            [7U];
        __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v57 
            = vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr
            [6U];
        __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v58 
            = vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr
            [5U];
        __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v59 
            = vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr
            [4U];
        __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v60 
            = vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr
            [3U];
        __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v61 
            = vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr
            [2U];
        __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v62 
            = vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr
            [1U];
        __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v63 
            = vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr
            [0U];
    }
    vlSelf->SimTop__DOT__u_cpu__DOT__trap = __Vdly__SimTop__DOT__u_cpu__DOT__trap;
    vlSelf->SimTop__DOT__u_cpu__DOT__cycleCnt = __Vdly__SimTop__DOT__u_cpu__DOT__cycleCnt;
    vlSelf->SimTop__DOT__u_cpu__DOT__instrCnt = __Vdly__SimTop__DOT__u_cpu__DOT__instrCnt;
    if (__Vdlyvset__SimTop__DOT__u_cpu__DOT__regs_diff__v0) {
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[0U] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[1U] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[2U] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[3U] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[4U] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[5U] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[6U] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[7U] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[8U] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[9U] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[0xaU] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[0xbU] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[0xcU] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[0xdU] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[0xeU] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[0xfU] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[0x10U] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[0x11U] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[0x12U] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[0x13U] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[0x14U] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[0x15U] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[0x16U] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[0x17U] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[0x18U] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[0x19U] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[0x1aU] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[0x1bU] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[0x1cU] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[0x1dU] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[0x1eU] = 0ULL;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[0x1fU] = 0ULL;
    }
    if (__Vdlyvset__SimTop__DOT__u_cpu__DOT__regs_diff__v32) {
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[0x1fU] 
            = __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v32;
    }
    if (__Vdlyvset__SimTop__DOT__u_cpu__DOT__regs_diff__v33) {
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[0x1eU] 
            = __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v33;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[0x1dU] 
            = __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v34;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[0x1cU] 
            = __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v35;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[0x1bU] 
            = __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v36;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[0x1aU] 
            = __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v37;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[0x19U] 
            = __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v38;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[0x18U] 
            = __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v39;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[0x17U] 
            = __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v40;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[0x16U] 
            = __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v41;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[0x15U] 
            = __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v42;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[0x14U] 
            = __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v43;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[0x13U] 
            = __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v44;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[0x12U] 
            = __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v45;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[0x11U] 
            = __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v46;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[0x10U] 
            = __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v47;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[0xfU] 
            = __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v48;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[0xeU] 
            = __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v49;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[0xdU] 
            = __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v50;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[0xcU] 
            = __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v51;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[0xbU] 
            = __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v52;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[0xaU] 
            = __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v53;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[9U] 
            = __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v54;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[8U] 
            = __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v55;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[7U] 
            = __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v56;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[6U] 
            = __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v57;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[5U] 
            = __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v58;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[4U] 
            = __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v59;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[3U] 
            = __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v60;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[2U] 
            = __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v61;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[1U] 
            = __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v62;
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[0U] 
            = __Vdlyvval__SimTop__DOT__u_cpu__DOT__regs_diff__v63;
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
    vlSelf->SimTop__DOT__axi_rw__DOT__trans_done = 
        ((IData)(vlSelf->SimTop__DOT__rw_req) ? (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__b_hs)
          : (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__r_done));
}

void VSimTop___024root___eval(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        VSimTop___024root___sequent__TOP__2(vlSelf);
    }
    if (((~ (IData)(vlSelf->clock)) & (IData)(vlSelf->__Vclklast__TOP__clock))) {
        VSimTop___024root___sequent__TOP__3(vlSelf);
    }
    VSimTop___024root___combo__TOP__4(vlSelf);
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

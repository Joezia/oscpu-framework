// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSimTop.h for the primary calling header

#include "VSimTop___024root.h"
#include "VSimTop__Syms.h"

#include "verilated_dpi.h"

//==========


void VSimTop___024root___ctor_var_reset(VSimTop___024root* vlSelf);

VSimTop___024root::VSimTop___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VSimTop___024root___ctor_var_reset(this);
}

void VSimTop___024root::__Vconfigure(VSimTop__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VSimTop___024root::~VSimTop___024root() {
}

void VSimTop___024root___settle__TOP__1(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___settle__TOP__1\n"); );
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
    VlWide<3>/*95:0*/ __Vtemp5;
    VlWide<3>/*95:0*/ __Vtemp6;
    VlWide<3>/*95:0*/ __Vtemp10;
    VlWide<5>/*159:0*/ __Vtemp14;
    VlWide<4>/*127:0*/ __Vtemp15;
    VlWide<8>/*255:0*/ __Vtemp16;
    VlWide<9>/*287:0*/ __Vtemp17;
    VlWide<3>/*95:0*/ __Vtemp19;
    VlWide<3>/*95:0*/ __Vtemp24;
    VlWide<3>/*95:0*/ __Vtemp44;
    VlWide<3>/*95:0*/ __Vtemp45;
    VlWide<3>/*95:0*/ __Vtemp65;
    VlWide<7>/*223:0*/ __Vtemp68;
    VlWide<9>/*287:0*/ __Vtemp70;
    VlWide<13>/*415:0*/ __Vtemp74;
    VlWide<15>/*479:0*/ __Vtemp76;
    VlWide<3>/*95:0*/ __Vtemp163;
    VlWide<3>/*95:0*/ __Vtemp355;
    VlWide<3>/*95:0*/ __Vtemp370;
    VlWide<3>/*95:0*/ __Vtemp377;
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
    // Body
    vlSelf->io_memAXI_0_ar_bits_id = 0U;
    vlSelf->io_memAXI_0_ar_bits_size = 3U;
    vlSelf->io_memAXI_0_ar_bits_burst = 1U;
    vlSelf->io_memAXI_0_aw_bits_id = 0U;
    vlSelf->io_memAXI_0_aw_bits_len = 0U;
    vlSelf->io_memAXI_0_aw_bits_size = 3U;
    vlSelf->io_memAXI_0_aw_bits_burst = 1U;
    vlSelf->io_memAXI_0_w_bits_last = 1U;
    vlSelf->SimTop__DOT__u_cpu__DOT__csr_alu_op_id 
        = (3U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__csr_alu_op_id));
    vlSelf->SimTop__DOT__u_cpu__DOT__value_width_ctrl_id 
        = (0xcU & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__value_width_ctrl_id));
    vlSelf->SimTop__DOT__u_cpu__DOT__value_width_ctrl_id 
        = (7U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__value_width_ctrl_id));
    vlSelf->io_memAXI_0_ar_valid = (1U == (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__r_state));
    vlSelf->io_memAXI_0_r_ready = (2U == (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__r_state));
    vlSelf->io_memAXI_0_aw_valid = (1U == (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__w_state));
    vlSelf->io_memAXI_0_w_valid = (2U == (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__w_state));
    vlSelf->io_memAXI_0_b_ready = (3U == (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__w_state));
    vlSelf->SimTop__DOT__axi_rw__DOT__aw_hs = ((IData)(vlSelf->io_memAXI_0_aw_ready) 
                                               & (1U 
                                                  == (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__w_state)));
    vlSelf->SimTop__DOT__axi_rw__DOT__w_hs = ((IData)(vlSelf->io_memAXI_0_w_ready) 
                                              & (2U 
                                                 == (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__w_state)));
    vlSelf->SimTop__DOT__axi_rw__DOT__ar_hs = ((IData)(vlSelf->io_memAXI_0_ar_ready) 
                                               & (1U 
                                                  == (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__r_state)));
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
    __Vtemp5[0U] = ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__dividend_abs[2U] 
                     << 1U) | (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__dividend_abs[1U] 
                               >> 0x1fU));
    __Vtemp5[1U] = ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__dividend_abs[3U] 
                     << 1U) | (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__dividend_abs[2U] 
                               >> 0x1fU));
    __Vtemp5[2U] = (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__dividend_abs[3U] 
                    >> 0x1fU);
    VL_SUB_W(3, __Vtemp6, __Vtemp5, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__divisor_abs);
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__diff_temp[0U] 
        = __Vtemp6[0U];
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__diff_temp[1U] 
        = __Vtemp6[1U];
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__diff_temp[2U] 
        = (1U & __Vtemp6[2U]);
    __Vtemp10[0U] = ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__dividend_abs[2U] 
                      << 1U) | (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__dividend_abs[1U] 
                                >> 0x1fU));
    __Vtemp10[1U] = ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__dividend_abs[3U] 
                      << 1U) | (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__dividend_abs[2U] 
                                >> 0x1fU));
    __Vtemp10[2U] = (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__dividend_abs[3U] 
                     >> 0x1fU);
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__diff_neg 
        = VL_LT_W(3, __Vtemp10, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__divisor_abs);
    vlSelf->SimTop__DOT__axi_rw__DOT__b_hs = ((3U == (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__w_state)) 
                                              & (IData)(vlSelf->io_memAXI_0_b_valid));
    vlSelf->SimTop__DOT__icache_valid = ((IData)(vlSelf->SimTop__DOT__u_icache__DOT__icache_valid_pre) 
                                         & (IData)(vlSelf->SimTop__DOT__arbitrating__DOT__zza_pulse_1));
    vlSelf->SimTop__DOT__arbitrating__DOT__zza_pulse 
        = ((IData)(vlSelf->SimTop__DOT__arbitrating__DOT__situation_if_valid)
            ? (IData)(vlSelf->SimTop__DOT__arbitrating__DOT__zza_pulse_3)
            : (IData)(vlSelf->SimTop__DOT__arbitrating__DOT__zza_pulse_1));
    vlSelf->SimTop__DOT__u_cpu__DOT__reg_write_value_wb 
        = ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__read_mem_en_wb)
            ? vlSelf->SimTop__DOT__u_cpu__DOT__sext_read_mem_value_wb
            : vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_wb);
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_valid 
        = ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__mul_calculating) 
           & (~ (IData)((0U != vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__multipler))));
    SimTop__DOT__icache_stall = ((IData)(vlSelf->SimTop__DOT__u_icache__DOT__icache_stall_pre) 
                                 & (1U != (IData)(vlSelf->SimTop__DOT__u_icache__DOT__icache_state)));
    SimTop__DOT__u_cpu__DOT__Forward_store = ((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__read_mem_en_wb) 
                                                & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__write_mem_en_mem)) 
                                               & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rs2_mem) 
                                                  == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rd_wb))) 
                                              & (0U 
                                                 != (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rd_wb)));
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
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_ready 
        = ((0xcU == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_ex)) 
           | (0xbU == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_ex)));
    vlSelf->SimTop__DOT__u_cpu__DOT__if_clint_mem = 
        ((0x200U == (0xffffU & (IData)((vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem 
                                        >> 0x10U)))) 
         & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__read_mem_en_mem) 
            | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__write_mem_en_mem)));
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
    __Vtemp14[4U] = (0x40U | ((7U & ((IData)(((((- (QData)((IData)(
                                                                   (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                                                    >> 0x1fU)))) 
                                                << 0xcU) 
                                               | (QData)((IData)(
                                                                 (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                                                  >> 0x14U)))) 
                                              >> 0x20U)) 
                                     >> 0x1aU)) | (0x38U 
                                                   & ((IData)(
                                                              ((((- (QData)((IData)(
                                                                                (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                                                                >> 0x1fU)))) 
                                                                 << 0xcU) 
                                                                | (QData)((IData)(
                                                                                (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                                                                >> 0x14U)))) 
                                                               >> 0x20U)) 
                                                      >> 0x1aU))));
    __Vtemp15[2U] = (((IData)((((- (QData)((IData)(
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
    __Vtemp16[4U] = ((0x7fffffU & ((IData)((((QData)((IData)(
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
    __Vtemp16[5U] = (0x10000000U | ((0x7fffffU & ((IData)(
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
                                    | (((IData)((((- (QData)((IData)(
                                                                     (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                                                      >> 0x1fU)))) 
                                                  << 0xcU) 
                                                 | (QData)((IData)(
                                                                   (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                                                    >> 0x14U))))) 
                                        << 0x1dU) | 
                                       (0x3800000U 
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
    __Vtemp16[6U] = ((0x7fffffU & ((IData)((((- (QData)((IData)(
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
    __Vtemp16[7U] = ((0x7fffffU & ((IData)(((((- (QData)((IData)(
                                                                 (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                                                  >> 0x1fU)))) 
                                              << 0xcU) 
                                             | (QData)((IData)(
                                                               (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                                                >> 0x14U)))) 
                                            >> 0x20U)) 
                                   >> 3U)) | (__Vtemp14[4U] 
                                              << 0x17U));
    __Vtemp17[1U] = (((IData)((0x30000000000000ULL 
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
    __Vtemp17[3U] = ((__Vtemp15[2U] >> 0x11U) | (0xffff8000U 
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
    __Vtemp17[4U] = (0x140U | (((0x7e00U & ((IData)(
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
                                   >> 0x1aU)) | (__Vtemp16[4U] 
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
        = __Vtemp17[1U];
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
                                   >> 0x11U)) | (__Vtemp15[2U] 
                                                 << 0xfU));
    SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_imm____pinNumber4[5U] 
        = __Vtemp17[3U];
    SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_imm____pinNumber4[6U] 
        = __Vtemp17[4U];
    SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_imm____pinNumber4[7U] 
        = ((__Vtemp16[4U] >> 0x11U) | (__Vtemp16[5U] 
                                       << 0xfU));
    SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_imm____pinNumber4[8U] 
        = ((__Vtemp16[5U] >> 0x11U) | (__Vtemp16[6U] 
                                       << 0xfU));
    SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_imm____pinNumber4[9U] 
        = ((__Vtemp16[6U] >> 0x11U) | (__Vtemp16[7U] 
                                       << 0xfU));
    SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_imm____pinNumber4[0xaU] 
        = (__Vtemp16[7U] >> 0x11U);
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
    vlSelf->SimTop__DOT__iram_wen = (1U & (~ ((1U == (IData)(vlSelf->SimTop__DOT__u_icache__DOT__re_write_state)) 
                                              & (IData)(vlSelf->SimTop__DOT__arb_if_r_hs))));
    vlSelf->SimTop__DOT__u_cpu__DOT__m_time_interrupt_trigger 
        = (((vlSelf->SimTop__DOT__clint__DOT__mtime 
             >= vlSelf->SimTop__DOT__clint__DOT__mtimecmp) 
            & (IData)((vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mstatus_reg 
                       >> 3U))) & (IData)((vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mie_reg 
                                           >> 7U)));
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
    vlSelf->SimTop__DOT__axi_rw__DOT__r_hs = ((2U == (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__r_state)) 
                                              & (IData)(vlSelf->io_memAXI_0_r_valid));
    vlSelf->io_memAXI_0_ar_bits_len = ((1U == (IData)(vlSelf->SimTop__DOT__arbitrating__DOT__arb_state))
                                        ? 0U : 0x7fU);
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
    VL_EXTEND_WQ(66,64, __Vtemp19, vlSelf->SimTop__DOT__u_cpu__DOT__reg2_value_ex);
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
        = (8U | ((__Vtemp19[0U] << 4U) | ((IData)((vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem 
                                                   >> 0x20U)) 
                                          >> 0x1eU)));
    SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__forward_b_mux____pinNumber4[5U] 
        = ((__Vtemp19[0U] >> 0x1cU) | (__Vtemp19[1U] 
                                       << 4U));
    SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__forward_b_mux____pinNumber4[6U] 
        = ((__Vtemp19[1U] >> 0x1cU) | (__Vtemp19[2U] 
                                       << 4U));
    VL_EXTEND_WQ(66,64, __Vtemp24, vlSelf->SimTop__DOT__u_cpu__DOT__reg1_value_ex);
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
        = (8U | ((__Vtemp24[0U] << 4U) | ((IData)((vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem 
                                                   >> 0x20U)) 
                                          >> 0x1eU)));
    SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__forward_a_mux____pinNumber4[5U] 
        = ((__Vtemp24[0U] >> 0x1cU) | (__Vtemp24[1U] 
                                       << 4U));
    SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__forward_a_mux____pinNumber4[6U] 
        = ((__Vtemp24[1U] >> 0x1cU) | (__Vtemp24[2U] 
                                       << 4U));
    vlSelf->SimTop__DOT__u_cpu__DOT__device_stall = 
        ((IData)(vlSelf->SimTop__DOT__axi_stall) | (IData)(SimTop__DOT__icache_stall));
    vlSelf->SimTop__DOT__u_cpu__DOT__memory__DOT__value_writen_to_mem 
        = ((IData)(SimTop__DOT__u_cpu__DOT__Forward_store)
            ? vlSelf->SimTop__DOT__u_cpu__DOT__reg_write_value_wb
            : vlSelf->SimTop__DOT__u_cpu__DOT__reg2_value_mem);
    vlSelf->io_memAXI_0_w_bits_strb = SimTop__DOT__mem_write_mask_axi;
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
    vlSelf->SimTop__DOT__u_cpu__DOT__axi_stall_i = 
        (((IData)(vlSelf->SimTop__DOT__axi_stall) | (IData)(SimTop__DOT__icache_stall)) 
         | (((0xaU == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_ex)) 
             & (~ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_valid))) 
            | ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_ready) 
               & (2U != (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__div_state)))));
    SimTop__DOT__u_cpu__DOT__read_mem_value = ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__if_clint_mem)
                                                ? vlSelf->SimTop__DOT__clint_data_read
                                                : vlSelf->SimTop__DOT__mem_data_read);
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
    vlSelf->SimTop__DOT__iram_addr = (0x3fU & ((IData)(vlSelf->SimTop__DOT__iram_wen)
                                                ? (IData)(
                                                          (vlSelf->SimTop__DOT__u_cpu__DOT__pc 
                                                           >> 4U))
                                                : (IData)(
                                                          (vlSelf->SimTop__DOT__u_icache__DOT__re_write_addr 
                                                           >> 4U))));
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
    if (vlSelf->SimTop__DOT__u_cpu__DOT__m_time_interrupt_trigger) {
        vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mstatus 
            = ((0xffffffffffffe000ULL & vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mstatus_reg) 
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
                                                      & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mstatus_reg)))))))));
        vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mcause = 0x8000000000000007ULL;
    } else {
        vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mstatus 
            = (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__csr_wen_wb) 
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
                        : vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mstatus_latch)));
        vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mcause 
            = (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__csr_wen_wb) 
                & (0x342U == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__csr_wb)))
                ? vlSelf->SimTop__DOT__u_cpu__DOT__csr_value_writeback_wb
                : ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__environment_call_wb)
                    ? 0xbULL : (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__m_time_interrupt) 
                                 & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__m_mode_return_wb))
                                 ? vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mcause_timeint_reg
                                 : vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mcause_latch)));
    }
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
    vlSelf->SimTop__DOT__axi_rw__DOT__r_done = ((IData)(vlSelf->SimTop__DOT__axi_rw__DOT__r_hs) 
                                                & (IData)(vlSelf->io_memAXI_0_r_bits_last));
    VL_EXTEND_WQ(65,64, __Vtemp44, SimTop__DOT__rw_addr);
    vlSelf->io_memAXI_0_ar_bits_addr = (0xfffffff8U 
                                        & __Vtemp44[0U]);
    VL_EXTEND_WQ(65,64, __Vtemp45, SimTop__DOT__rw_addr);
    vlSelf->io_memAXI_0_aw_bits_addr = (0xfffffff8U 
                                        & __Vtemp45[0U]);
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
    vlSelf->io_uart_out_valid = ((~ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__axi_stall_i)) 
                                 & (0x7bU == vlSelf->SimTop__DOT__u_cpu__DOT__inst_wb));
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
    __Vtemp65[0U] = (IData)(((0U == (7U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
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
    __Vtemp65[1U] = (IData)((((0U == (7U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
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
    __Vtemp68[4U] = (0x90U | (((IData)(((0U == (7U 
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
                               << 8U) | ((IData)(((
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem 
                                                               >> 2U)))
                                                    ? (QData)((IData)(
                                                                      (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                       >> 0x20U)))
                                                    : (QData)((IData)(SimTop__DOT__u_cpu__DOT__read_mem_value))) 
                                                  >> 0x20U)) 
                                         >> 0x1cU)));
    __Vtemp68[5U] = (((IData)(((0U == (7U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                ? (QData)((IData)((0xffU 
                                                   & (IData)(SimTop__DOT__u_cpu__DOT__read_mem_value))))
                                : ((1U == (7U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                    ? (QData)((IData)(
                                                      (0xffU 
                                                       & (IData)(
                                                                 (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                  >> 8U)))))
                                    : ((2U == (7U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                        ? (QData)((IData)(
                                                          (0xffU 
                                                           & (IData)(
                                                                     (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                      >> 0x10U)))))
                                        : ((3U == (7U 
                                                   & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
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
                                                : (
                                                   (5U 
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
                                              (7U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
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
    __Vtemp68[6U] = ((IData)((((0U == (7U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                ? (QData)((IData)((0xffU 
                                                   & (IData)(SimTop__DOT__u_cpu__DOT__read_mem_value))))
                                : ((1U == (7U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                    ? (QData)((IData)(
                                                      (0xffU 
                                                       & (IData)(
                                                                 (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                  >> 8U)))))
                                    : ((2U == (7U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                        ? (QData)((IData)(
                                                          (0xffU 
                                                           & (IData)(
                                                                     (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                      >> 0x10U)))))
                                        : ((3U == (7U 
                                                   & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
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
                                                : (
                                                   (5U 
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
    __Vtemp70[6U] = (0x500U | (((IData)(((0U == (7U 
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
                                              (7U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                              ? (((- (QData)((IData)(
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
                                << 0xcU) | __Vtemp68[6U]));
    __Vtemp70[7U] = (((IData)(((0U == (7U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
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
                                    : ((2U == (7U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
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
                                        : ((3U == (7U 
                                                   & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
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
                                                ? (
                                                   ((- (QData)((IData)(
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
                                                : (
                                                   (5U 
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
                                              (7U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                              ? (((- (QData)((IData)(
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
    __Vtemp70[8U] = ((IData)((((0U == (7U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
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
                                    : ((2U == (7U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
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
                                        : ((3U == (7U 
                                                   & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
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
                                                ? (
                                                   ((- (QData)((IData)(
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
                                                : (
                                                   (5U 
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
    __Vtemp74[0xbU] = (((IData)(((1U & (IData)((vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem 
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
                        >> 0xcU) | ((IData)((((1U & (IData)(
                                                            (vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem 
                                                             >> 2U)))
                                               ? (((QData)((IData)(
                                                                   (- (IData)(
                                                                              (1U 
                                                                               & (IData)(
                                                                                (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                                >> 0x3fU))))))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                     >> 0x20U))))
                                               : (((QData)((IData)(
                                                                   (- (IData)(
                                                                              (1U 
                                                                               & (IData)(
                                                                                (SimTop__DOT__u_cpu__DOT__read_mem_value 
                                                                                >> 0x1fU))))))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(SimTop__DOT__u_cpu__DOT__read_mem_value)))) 
                                             >> 0x20U)) 
                                    << 0x14U));
    __Vtemp76[0xcU] = (0x400000U | (((IData)(((0U == 
                                               (7U 
                                                & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                               ? ((
                                                   (- (QData)((IData)(
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
    __Vtemp76[0xdU] = (((IData)(((0U == (7U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
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
                                              (7U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                              ? (((- (QData)((IData)(
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
                                              : (((- (QData)((IData)(
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
    __Vtemp76[0xeU] = ((IData)((((0U == (7U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
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
                                              (7U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                              ? (((- (QData)((IData)(
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
                                              : (((- (QData)((IData)(
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
        = __Vtemp65[0U];
    SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4[1U] 
        = __Vtemp65[1U];
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
        = __Vtemp68[4U];
    SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4[5U] 
        = __Vtemp68[5U];
    SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4[6U] 
        = __Vtemp70[6U];
    SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4[7U] 
        = __Vtemp70[7U];
    SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4[8U] 
        = (0x1000U | (((IData)(SimTop__DOT__u_cpu__DOT__read_mem_value) 
                       << 0x10U) | __Vtemp70[8U]));
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
        = __Vtemp74[0xbU];
    SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4[0xcU] 
        = __Vtemp76[0xcU];
    SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4[0xdU] 
        = __Vtemp76[0xdU];
    SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4[0xeU] 
        = (0x2000000U | __Vtemp76[0xeU]);
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
    vlSelf->SimTop__DOT__axi_rw__DOT__trans_done = 
        ((IData)(vlSelf->SimTop__DOT__rw_req) ? (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__b_hs)
          : (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__r_done));
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
    vlSelf->io_memAXI_0_w_bits_data[0U] = SimTop__DOT__u_cpu__DOT__reg2_to_mem_forward;
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
    SimTop__DOT__u_cpu__DOT__npc_processing__DOT__pc_branch_addr 
        = (vlSelf->SimTop__DOT__u_cpu__DOT__pc_id + vlSelf->SimTop__DOT__u_cpu__DOT__imm_id);
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
    SimTop__DOT__u_cpu__DOT__reg_write_value_mem = 
        ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__read_mem_en_mem)
          ? vlSelf->SimTop__DOT__u_cpu__DOT__sext_read_mem_value_mem
          : vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem);
    SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_operation_a 
        = ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__csr_if_zimm_ex)
            ? (QData)((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__zimm_ex))
            : vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a);
    VL_EXTEND_WQ(69,64, __Vtemp163, (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
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
        = (0x200000U | ((__Vtemp163[0U] << 0x1aU) | 
                        ((IData)(((1ULL + (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                                           + (~ vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b))) 
                                  >> 0x20U)) >> 0xbU)));
    SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x27U] 
        = ((__Vtemp163[0U] >> 6U) | (__Vtemp163[1U] 
                                     << 0x1aU));
    SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x28U] 
        = ((__Vtemp163[1U] >> 6U) | (__Vtemp163[2U] 
                                     << 0x1aU));
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
    VL_EXTEND_WQ(68,64, __Vtemp355, SimTop__DOT__u_cpu__DOT__value);
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
        = (4U | (__Vtemp355[0U] << 4U));
    SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_value0____pinNumber4[3U] 
        = ((__Vtemp355[0U] >> 0x1cU) | (__Vtemp355[1U] 
                                        << 4U));
    SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_value0____pinNumber4[4U] 
        = ((__Vtemp355[1U] >> 0x1cU) | (__Vtemp355[2U] 
                                        << 4U));
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
    VL_EXTEND_WQ(66,64, __Vtemp370, vlSelf->SimTop__DOT__u_cpu__DOT__reg2_value_id);
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
        = (0x20U | ((__Vtemp370[0U] << 6U) | ((IData)(
                                                      (SimTop__DOT__u_cpu__DOT__reg_write_value_mem 
                                                       >> 0x20U)) 
                                              >> 0x1cU)));
    SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_d_mux____pinNumber4[7U] 
        = ((__Vtemp370[0U] >> 0x1aU) | (__Vtemp370[1U] 
                                        << 6U));
    SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_d_mux____pinNumber4[8U] 
        = ((__Vtemp370[1U] >> 0x1aU) | (__Vtemp370[2U] 
                                        << 6U));
    VL_EXTEND_WQ(66,64, __Vtemp377, vlSelf->SimTop__DOT__u_cpu__DOT__reg1_value_id);
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
        = (0x20U | ((__Vtemp377[0U] << 6U) | ((IData)(
                                                      (SimTop__DOT__u_cpu__DOT__reg_write_value_mem 
                                                       >> 0x20U)) 
                                              >> 0x1cU)));
    SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_c_mux____pinNumber4[7U] 
        = ((__Vtemp377[0U] >> 0x1aU) | (__Vtemp377[1U] 
                                        << 6U));
    SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_c_mux____pinNumber4[8U] 
        = ((__Vtemp377[1U] >> 0x1aU) | (__Vtemp377[2U] 
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

void VSimTop___024root___eval_initial(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

void VSimTop___024root___eval_settle(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___eval_settle\n"); );
    // Body
    VSimTop___024root___settle__TOP__1(vlSelf);
}

void VSimTop___024root___final(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___final\n"); );
}

void VSimTop___024root___ctor_var_reset(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_logCtrl_log_begin = VL_RAND_RESET_Q(64);
    vlSelf->io_logCtrl_log_end = VL_RAND_RESET_Q(64);
    vlSelf->io_logCtrl_log_level = VL_RAND_RESET_Q(64);
    vlSelf->io_perfInfo_clean = VL_RAND_RESET_I(1);
    vlSelf->io_perfInfo_dump = VL_RAND_RESET_I(1);
    vlSelf->io_uart_out_valid = VL_RAND_RESET_I(1);
    vlSelf->io_uart_out_ch = VL_RAND_RESET_I(8);
    vlSelf->io_uart_in_valid = VL_RAND_RESET_I(1);
    vlSelf->io_uart_in_ch = VL_RAND_RESET_I(8);
    vlSelf->io_memAXI_0_aw_ready = VL_RAND_RESET_I(1);
    vlSelf->io_memAXI_0_aw_valid = VL_RAND_RESET_I(1);
    vlSelf->io_memAXI_0_aw_bits_addr = VL_RAND_RESET_I(32);
    vlSelf->io_memAXI_0_aw_bits_prot = VL_RAND_RESET_I(3);
    vlSelf->io_memAXI_0_aw_bits_id = VL_RAND_RESET_I(4);
    vlSelf->io_memAXI_0_aw_bits_user = VL_RAND_RESET_I(1);
    vlSelf->io_memAXI_0_aw_bits_len = VL_RAND_RESET_I(8);
    vlSelf->io_memAXI_0_aw_bits_size = VL_RAND_RESET_I(3);
    vlSelf->io_memAXI_0_aw_bits_burst = VL_RAND_RESET_I(2);
    vlSelf->io_memAXI_0_aw_bits_lock = VL_RAND_RESET_I(1);
    vlSelf->io_memAXI_0_aw_bits_cache = VL_RAND_RESET_I(4);
    vlSelf->io_memAXI_0_aw_bits_qos = VL_RAND_RESET_I(4);
    vlSelf->io_memAXI_0_w_ready = VL_RAND_RESET_I(1);
    vlSelf->io_memAXI_0_w_valid = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->io_memAXI_0_w_bits_data[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->io_memAXI_0_w_bits_strb = VL_RAND_RESET_I(8);
    vlSelf->io_memAXI_0_w_bits_last = VL_RAND_RESET_I(1);
    vlSelf->io_memAXI_0_b_ready = VL_RAND_RESET_I(1);
    vlSelf->io_memAXI_0_b_valid = VL_RAND_RESET_I(1);
    vlSelf->io_memAXI_0_b_bits_resp = VL_RAND_RESET_I(2);
    vlSelf->io_memAXI_0_b_bits_id = VL_RAND_RESET_I(4);
    vlSelf->io_memAXI_0_b_bits_user = VL_RAND_RESET_I(1);
    vlSelf->io_memAXI_0_ar_ready = VL_RAND_RESET_I(1);
    vlSelf->io_memAXI_0_ar_valid = VL_RAND_RESET_I(1);
    vlSelf->io_memAXI_0_ar_bits_addr = VL_RAND_RESET_I(32);
    vlSelf->io_memAXI_0_ar_bits_prot = VL_RAND_RESET_I(3);
    vlSelf->io_memAXI_0_ar_bits_id = VL_RAND_RESET_I(4);
    vlSelf->io_memAXI_0_ar_bits_user = VL_RAND_RESET_I(1);
    vlSelf->io_memAXI_0_ar_bits_len = VL_RAND_RESET_I(8);
    vlSelf->io_memAXI_0_ar_bits_size = VL_RAND_RESET_I(3);
    vlSelf->io_memAXI_0_ar_bits_burst = VL_RAND_RESET_I(2);
    vlSelf->io_memAXI_0_ar_bits_lock = VL_RAND_RESET_I(1);
    vlSelf->io_memAXI_0_ar_bits_cache = VL_RAND_RESET_I(4);
    vlSelf->io_memAXI_0_ar_bits_qos = VL_RAND_RESET_I(4);
    vlSelf->io_memAXI_0_r_ready = VL_RAND_RESET_I(1);
    vlSelf->io_memAXI_0_r_valid = VL_RAND_RESET_I(1);
    vlSelf->io_memAXI_0_r_bits_resp = VL_RAND_RESET_I(2);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->io_memAXI_0_r_bits_data[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->io_memAXI_0_r_bits_last = VL_RAND_RESET_I(1);
    vlSelf->io_memAXI_0_r_bits_id = VL_RAND_RESET_I(4);
    vlSelf->io_memAXI_0_r_bits_user = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__mem_valid = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__mem_data_read = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__icache_valid = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__icache_addr = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__icache_req = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__icache_data_read = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__rw_valid = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__rw_req = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__arb_if_r_hs = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__arb_if_trans_done = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__axi_stall = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->SimTop__DOT__iram_data_read_128);
    vlSelf->SimTop__DOT__iram_wen = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__iram_addr = VL_RAND_RESET_I(6);
    vlSelf->SimTop__DOT__clint_data_read = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__axi_rw__DOT__aw_hs = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__axi_rw__DOT__w_hs = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__axi_rw__DOT__b_hs = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__axi_rw__DOT__ar_hs = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__axi_rw__DOT__r_hs = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__axi_rw__DOT__r_done = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__axi_rw__DOT__trans_done = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__axi_rw__DOT__w_state = VL_RAND_RESET_I(2);
    vlSelf->SimTop__DOT__axi_rw__DOT__r_state = VL_RAND_RESET_I(2);
    vlSelf->SimTop__DOT__arbitrating__DOT__arb_state = VL_RAND_RESET_I(2);
    vlSelf->SimTop__DOT__arbitrating__DOT__zza_pulse_1 = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__arbitrating__DOT__zza_pulse_3 = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__arbitrating__DOT__zza_count = VL_RAND_RESET_I(2);
    vlSelf->SimTop__DOT__arbitrating__DOT__zza_pulse = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__arbitrating__DOT__situation_if_valid = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<128; ++__Vi0) {
        vlSelf->SimTop__DOT__u_icache__DOT__tag[__Vi0] = VL_RAND_RESET_Q(54);
    }
    vlSelf->SimTop__DOT__u_icache__DOT__valid = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_icache__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_icache__DOT__icache_state = VL_RAND_RESET_I(2);
    vlSelf->SimTop__DOT__u_icache__DOT__addr_icache_read = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_icache__DOT__re_write_state = VL_RAND_RESET_I(2);
    vlSelf->SimTop__DOT__u_icache__DOT__re_write_addr = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_icache__DOT__icache_valid_pre = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_icache__DOT__icache_stall_pre = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->SimTop__DOT__icache_ram__DOT__ram[__Vi0]);
    }
    vlSelf->SimTop__DOT__u_cpu__DOT__axi_stall_i = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__device_stall = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__pc_id = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_cpu__DOT__pc_ex = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_cpu__DOT__pc_mem = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_cpu__DOT__pc_wb = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_cpu__DOT__inst_id = VL_RAND_RESET_I(32);
    vlSelf->SimTop__DOT__u_cpu__DOT__inst_ex = VL_RAND_RESET_I(32);
    vlSelf->SimTop__DOT__u_cpu__DOT__inst_mem = VL_RAND_RESET_I(32);
    vlSelf->SimTop__DOT__u_cpu__DOT__inst_wb = VL_RAND_RESET_I(32);
    vlSelf->SimTop__DOT__u_cpu__DOT__optype = VL_RAND_RESET_I(3);
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_op_id = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_op_ex = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__csr_ren = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__wen_ex = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__wen_mem = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__wen_wb = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__csr_wen_ex = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__csr_wen_mem = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__csr_wen_wb = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_id = VL_RAND_RESET_I(5);
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_ex = VL_RAND_RESET_I(5);
    vlSelf->SimTop__DOT__u_cpu__DOT__csr_alu_op_id = VL_RAND_RESET_I(3);
    vlSelf->SimTop__DOT__u_cpu__DOT__csr_alu_op_ex = VL_RAND_RESET_I(3);
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_only_imm_ex = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_pc_reg1_ex = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_imm_reg2_ex = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__csr_if_zimm_ex = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__rd_ex = VL_RAND_RESET_I(5);
    vlSelf->SimTop__DOT__u_cpu__DOT__rd_mem = VL_RAND_RESET_I(5);
    vlSelf->SimTop__DOT__u_cpu__DOT__rd_wb = VL_RAND_RESET_I(5);
    vlSelf->SimTop__DOT__u_cpu__DOT__csr_ex = VL_RAND_RESET_I(12);
    vlSelf->SimTop__DOT__u_cpu__DOT__csr_mem = VL_RAND_RESET_I(12);
    vlSelf->SimTop__DOT__u_cpu__DOT__csr_wb = VL_RAND_RESET_I(12);
    vlSelf->SimTop__DOT__u_cpu__DOT__zimm_ex = VL_RAND_RESET_I(5);
    vlSelf->SimTop__DOT__u_cpu__DOT__rs1_ex = VL_RAND_RESET_I(5);
    vlSelf->SimTop__DOT__u_cpu__DOT__rs2_ex = VL_RAND_RESET_I(5);
    vlSelf->SimTop__DOT__u_cpu__DOT__rs2_mem = VL_RAND_RESET_I(5);
    vlSelf->SimTop__DOT__u_cpu__DOT__read_mem_en_ex = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__read_mem_en_mem = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__read_mem_en_wb = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__write_mem_en_ex = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__write_mem_en_mem = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__write_mem_en_wb = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__mem_ctrl_id = VL_RAND_RESET_I(4);
    vlSelf->SimTop__DOT__u_cpu__DOT__mem_ctrl_ex = VL_RAND_RESET_I(4);
    vlSelf->SimTop__DOT__u_cpu__DOT__mem_ctrl_mem = VL_RAND_RESET_I(4);
    vlSelf->SimTop__DOT__u_cpu__DOT__value_width_ctrl_id = VL_RAND_RESET_I(4);
    vlSelf->SimTop__DOT__u_cpu__DOT__value_width_ctrl_ex = VL_RAND_RESET_I(4);
    vlSelf->SimTop__DOT__u_cpu__DOT__branch_type_id = VL_RAND_RESET_I(3);
    vlSelf->SimTop__DOT__u_cpu__DOT__branch_type_ex = VL_RAND_RESET_I(3);
    vlSelf->SimTop__DOT__u_cpu__DOT__branch_type_mem = VL_RAND_RESET_I(3);
    vlSelf->SimTop__DOT__u_cpu__DOT__branch_type_wb = VL_RAND_RESET_I(3);
    vlSelf->SimTop__DOT__u_cpu__DOT__operator_a_w_ex = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__operator_a_w_s_ex = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__operator_b_w_ex = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__if_inst_sll_ex = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__environment_call_ex = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__environment_call_mem = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__environment_call_wb = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__m_mode_return_ex = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__m_mode_return_mem = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__m_mode_return_wb = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__reg2_value_forwardb_ex = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_cpu__DOT__csr_value_writeback_ex = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_cpu__DOT__csr_value_writeback_mem = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_cpu__DOT__csr_value_writeback_wb = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_cpu__DOT__if_clint_mem = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__if_clint_wb = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__clint_wen = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__pc = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_cpu__DOT__npc = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_cpu__DOT__reg1_value_id = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_cpu__DOT__reg1_value_ex = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_cpu__DOT__reg2_value_id = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_cpu__DOT__reg2_value_ex = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_cpu__DOT__reg2_value_mem = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_cpu__DOT__csr_value_ex = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_cpu__DOT__reg_write_value_wb = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->SimTop__DOT__u_cpu__DOT__m_time_interrupt = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__m_time_interrupt_trigger = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__imm_id = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_cpu__DOT__imm_ex = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_cpu__DOT__sext_read_mem_value_mem = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_cpu__DOT__sext_read_mem_value_wb = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_ex = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_wb = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_cpu__DOT__IF_Flush = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__pipeline_stall = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__pipeline_stall_ex = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__pipeline_stall_mem = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__pipeline_stall_wb = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__pc_wen = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__inst_valid_3 = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__cmt_wen = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__cmt_wdest = VL_RAND_RESET_I(8);
    vlSelf->SimTop__DOT__u_cpu__DOT__cmt_wdata = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_cpu__DOT__cmt_pc = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_cpu__DOT__cmt_inst = VL_RAND_RESET_I(32);
    vlSelf->SimTop__DOT__u_cpu__DOT__cmt_valid = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__cmt_skip = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__trap = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__trap_code = VL_RAND_RESET_I(8);
    vlSelf->SimTop__DOT__u_cpu__DOT__cycleCnt = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_cpu__DOT__instrCnt = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrc = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrci = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrs = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrsi = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrw = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrwi = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_addi = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_xor = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_xori = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_ori = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_addiw = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_addw = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_subw = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_mul = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_mulw = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_divw = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_divuw = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_remw = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_remuw = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sub = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_add = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sll = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_slli = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_slliw = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_srli = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_srliw = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_andi = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_and = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_or = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_srai = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sraiw = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sra = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sraw = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_srl = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_srlw = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sllw = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lui = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_auipc = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_jal = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_jalr = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_slti = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sltiu = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sltu = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_slt = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_beq = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_bne = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_bge = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_bgeu = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_blt = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_bltu = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sd = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sw = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sh = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sb = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lb = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lbu = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lhu = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lw = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lwu = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lh = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_ld = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_ebreak = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_valid = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_ready = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        VL_RAND_RESET_W(66, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        VL_RAND_RESET_W(66, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__mul_calculating = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__mul_result_partial);
    VL_RAND_RESET_W(128, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__mul_result);
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__mul_result_cnt = VL_RAND_RESET_I(7);
    VL_RAND_RESET_W(128, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__multiplcand);
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__multipler = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__div_state = VL_RAND_RESET_I(2);
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__div_cnt = VL_RAND_RESET_I(7);
    VL_RAND_RESET_W(128, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__dividend_abs);
    VL_RAND_RESET_W(65, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__divisor_abs);
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__quotient_abs = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(65, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__diff_temp);
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__diff_neg = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<19; ++__Vi0) {
        VL_RAND_RESET_W(69, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<19; ++__Vi0) {
        vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0=0; __Vi0<19; ++__Vi0) {
        vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        VL_RAND_RESET_W(67, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_value_write__DOT__i0__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_value_write__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_value_write__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->SimTop__DOT__u_cpu__DOT__memory__DOT__value_writen_to_mem = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mstatus = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mepc = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mtvec = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mcause = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mie = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mip = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mscratch = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mstatus_reg = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mie_reg = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mstatus_latch = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mepc_latch = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mtvec_latch = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mcause_latch = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mie_latch = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mip_latch = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mscratch_latch = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mepc_timeint_reg = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mcause_timeint_reg = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        VL_RAND_RESET_W(67, vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0=0; __Vi0<7; ++__Vi0) {
        VL_RAND_RESET_W(68, vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<7; ++__Vi0) {
        vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0=0; __Vi0<7; ++__Vi0) {
        vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        VL_RAND_RESET_W(68, vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_value0__DOT__i0__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_value0__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_value0__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        VL_RAND_RESET_W(66, vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        VL_RAND_RESET_W(66, vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0=0; __Vi0<6; ++__Vi0) {
        vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0=0; __Vi0<6; ++__Vi0) {
        vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<6; ++__Vi0) {
        vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->SimTop__DOT__clint__DOT__mtime = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__clint__DOT__mtimecmp = VL_RAND_RESET_Q(64);
}

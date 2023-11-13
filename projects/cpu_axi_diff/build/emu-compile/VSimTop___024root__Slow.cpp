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

void VSimTop___024unit____Vdpiimwrap_ram_read_helper_TOP____024unit(CData/*0:0*/ en, QData/*63:0*/ rIdx, QData/*63:0*/ &ram_read_helper__Vfuncrtn);

void VSimTop___024root___settle__TOP__1(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___settle__TOP__1\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp1;
    VlWide<7>/*223:0*/ __Vtemp4;
    VlWide<9>/*287:0*/ __Vtemp6;
    VlWide<13>/*415:0*/ __Vtemp10;
    VlWide<15>/*479:0*/ __Vtemp12;
    VlWide<5>/*159:0*/ __Vtemp17;
    VlWide<4>/*127:0*/ __Vtemp18;
    VlWide<8>/*255:0*/ __Vtemp19;
    VlWide<9>/*287:0*/ __Vtemp20;
    VlWide<3>/*95:0*/ __Vtemp22;
    VlWide<3>/*95:0*/ __Vtemp27;
    VlWide<3>/*95:0*/ __Vtemp68;
    VlWide<3>/*95:0*/ __Vtemp69;
    VlWide<3>/*95:0*/ __Vtemp70;
    VlWide<3>/*95:0*/ __Vtemp71;
    VlWide<3>/*95:0*/ __Vtemp154;
    VlWide<3>/*95:0*/ __Vtemp313;
    VlWide<3>/*95:0*/ __Vtemp328;
    VlWide<3>/*95:0*/ __Vtemp335;
    QData/*63:0*/ __Vfunc_ram_read_helper__0__Vfuncout;
    // Body
    vlSelf->io_memAXI_0_ar_bits_prot = 0U;
    vlSelf->io_memAXI_0_ar_bits_id = 0U;
    vlSelf->io_memAXI_0_ar_bits_user = 0U;
    vlSelf->io_memAXI_0_ar_bits_size = 3U;
    vlSelf->io_memAXI_0_ar_bits_burst = 1U;
    vlSelf->io_memAXI_0_ar_bits_lock = 0U;
    vlSelf->io_memAXI_0_ar_bits_cache = 2U;
    vlSelf->io_memAXI_0_ar_bits_qos = 0U;
    vlSelf->io_memAXI_0_aw_bits_prot = 0U;
    vlSelf->io_memAXI_0_aw_bits_id = 0U;
    vlSelf->io_memAXI_0_aw_bits_user = 0U;
    vlSelf->io_memAXI_0_aw_bits_size = 3U;
    vlSelf->io_memAXI_0_aw_bits_burst = 1U;
    vlSelf->io_memAXI_0_aw_bits_lock = 0U;
    vlSelf->io_memAXI_0_aw_bits_cache = 0xfU;
    vlSelf->io_memAXI_0_aw_bits_qos = 0U;
    vlSelf->io_memAXI_0_w_bits_last = 1U;
    VSimTop___024unit____Vdpiimwrap_ram_read_helper_TOP____024unit(1U, 0ULL, __Vfunc_ram_read_helper__0__Vfuncout);
    vlSelf->SimTop__DOT__u_cpu__DOT__pipe_mem_wb__DOT__RAMHelper__DOT__rdata 
        = __Vfunc_ram_read_helper__0__Vfuncout;
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
    vlSelf->SimTop__DOT__axi_rw__DOT__ar_hs = ((IData)(vlSelf->io_memAXI_0_ar_ready) 
                                               & (1U 
                                                  == (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__r_state)));
    vlSelf->SimTop__DOT__axi_rw__DOT__w_hs = ((IData)(vlSelf->io_memAXI_0_w_ready) 
                                              & (2U 
                                                 == (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__w_state)));
    vlSelf->SimTop__DOT__axi_rw__DOT__b_hs = ((3U == (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__w_state)) 
                                              & (IData)(vlSelf->io_memAXI_0_b_valid));
    vlSelf->SimTop__DOT__axi_rw__DOT__r_hs = ((2U == (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__r_state)) 
                                              & (IData)(vlSelf->io_memAXI_0_r_valid));
    vlSelf->SimTop__DOT__u_cpu__DOT__reg_write_value_wb 
        = ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__read_mem_en_wb)
            ? vlSelf->SimTop__DOT__u_cpu__DOT__sext_read_mem_value_wb
            : vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_wb);
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
    vlSelf->SimTop__DOT__mem_valid = ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__read_mem_en_mem) 
                                      | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__write_mem_en_mem));
    __Vtemp1[0U] = (IData)(((0U == (7U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
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
    __Vtemp1[1U] = (IData)((((0U == (7U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
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
    __Vtemp4[4U] = (0x90U | (((IData)(((0U == (7U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                        ? (QData)((IData)(
                                                          (0xffU 
                                                           & (IData)(vlSelf->SimTop__DOT__mem_data_read))))
                                        : ((1U == (7U 
                                                   & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
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
                                                : (
                                                   (3U 
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
                              << 8U) | ((IData)((((1U 
                                                   & (IData)(
                                                             (vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem 
                                                              >> 2U)))
                                                   ? (QData)((IData)(
                                                                     (vlSelf->SimTop__DOT__mem_data_read 
                                                                      >> 0x20U)))
                                                   : (QData)((IData)(vlSelf->SimTop__DOT__mem_data_read))) 
                                                 >> 0x20U)) 
                                        >> 0x1cU)));
    __Vtemp4[5U] = (((IData)(((0U == (7U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                               ? (QData)((IData)((0xffU 
                                                  & (IData)(vlSelf->SimTop__DOT__mem_data_read))))
                               : ((1U == (7U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                   ? (QData)((IData)(
                                                     (0xffU 
                                                      & (IData)(
                                                                (vlSelf->SimTop__DOT__mem_data_read 
                                                                 >> 8U)))))
                                   : ((2U == (7U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                       ? (QData)((IData)(
                                                         (0xffU 
                                                          & (IData)(
                                                                    (vlSelf->SimTop__DOT__mem_data_read 
                                                                     >> 0x10U)))))
                                       : ((3U == (7U 
                                                  & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                           ? (QData)((IData)(
                                                             (0xffU 
                                                              & (IData)(
                                                                        (vlSelf->SimTop__DOT__mem_data_read 
                                                                         >> 0x18U)))))
                                           : ((4U == 
                                               (7U 
                                                & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                               ? (QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(
                                                                            (vlSelf->SimTop__DOT__mem_data_read 
                                                                             >> 0x20U)))))
                                               : ((5U 
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
                                             (7U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
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
    __Vtemp4[6U] = ((IData)((((0U == (7U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                               ? (QData)((IData)((0xffU 
                                                  & (IData)(vlSelf->SimTop__DOT__mem_data_read))))
                               : ((1U == (7U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                   ? (QData)((IData)(
                                                     (0xffU 
                                                      & (IData)(
                                                                (vlSelf->SimTop__DOT__mem_data_read 
                                                                 >> 8U)))))
                                   : ((2U == (7U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                       ? (QData)((IData)(
                                                         (0xffU 
                                                          & (IData)(
                                                                    (vlSelf->SimTop__DOT__mem_data_read 
                                                                     >> 0x10U)))))
                                       : ((3U == (7U 
                                                  & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                           ? (QData)((IData)(
                                                             (0xffU 
                                                              & (IData)(
                                                                        (vlSelf->SimTop__DOT__mem_data_read 
                                                                         >> 0x18U)))))
                                           : ((4U == 
                                               (7U 
                                                & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                               ? (QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(
                                                                            (vlSelf->SimTop__DOT__mem_data_read 
                                                                             >> 0x20U)))))
                                               : ((5U 
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
    __Vtemp6[6U] = (0x500U | (((IData)(((0U == (7U 
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
                                             (7U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                             ? (((- (QData)((IData)(
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
                               << 0xcU) | __Vtemp4[6U]));
    __Vtemp6[7U] = (((IData)(((0U == (7U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
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
                                   : ((2U == (7U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                       ? (((- (QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->SimTop__DOT__mem_data_read 
                                                                          >> 0x17U)))))) 
                                           << 8U) | (QData)((IData)(
                                                                    (0xffU 
                                                                     & (IData)(
                                                                               (vlSelf->SimTop__DOT__mem_data_read 
                                                                                >> 0x10U))))))
                                       : ((3U == (7U 
                                                  & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
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
                                           : ((4U == 
                                               (7U 
                                                & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                               ? ((
                                                   (- (QData)((IData)(
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
                                               : ((5U 
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
                                             (7U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                             ? (((- (QData)((IData)(
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
    __Vtemp6[8U] = ((IData)((((0U == (7U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
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
                                   : ((2U == (7U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                       ? (((- (QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->SimTop__DOT__mem_data_read 
                                                                          >> 0x17U)))))) 
                                           << 8U) | (QData)((IData)(
                                                                    (0xffU 
                                                                     & (IData)(
                                                                               (vlSelf->SimTop__DOT__mem_data_read 
                                                                                >> 0x10U))))))
                                       : ((3U == (7U 
                                                  & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
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
                                           : ((4U == 
                                               (7U 
                                                & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                               ? ((
                                                   (- (QData)((IData)(
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
                                               : ((5U 
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
    __Vtemp10[0xbU] = (((IData)(((1U & (IData)((vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem 
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
                        >> 0xcU) | ((IData)((((1U & (IData)(
                                                            (vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem 
                                                             >> 2U)))
                                               ? (((QData)((IData)(
                                                                   (- (IData)(
                                                                              (1U 
                                                                               & (IData)(
                                                                                (vlSelf->SimTop__DOT__mem_data_read 
                                                                                >> 0x3fU))))))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    (vlSelf->SimTop__DOT__mem_data_read 
                                                                     >> 0x20U))))
                                               : (((QData)((IData)(
                                                                   (- (IData)(
                                                                              (1U 
                                                                               & (IData)(
                                                                                (vlSelf->SimTop__DOT__mem_data_read 
                                                                                >> 0x1fU))))))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(vlSelf->SimTop__DOT__mem_data_read)))) 
                                             >> 0x20U)) 
                                    << 0x14U));
    __Vtemp12[0xcU] = (0x400000U | (((IData)(((0U == 
                                               (7U 
                                                & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                               ? ((
                                                   (- (QData)((IData)(
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
    __Vtemp12[0xdU] = (((IData)(((0U == (7U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
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
                                              (7U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                              ? (((- (QData)((IData)(
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
                                              : (((- (QData)((IData)(
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
    __Vtemp12[0xeU] = ((IData)((((0U == (7U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
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
                                              (7U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)))
                                              ? (((- (QData)((IData)(
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
                                              : (((- (QData)((IData)(
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
        = __Vtemp1[0U];
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4[1U] 
        = __Vtemp1[1U];
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
        = __Vtemp4[4U];
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4[5U] 
        = __Vtemp4[5U];
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4[6U] 
        = __Vtemp6[6U];
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4[7U] 
        = __Vtemp6[7U];
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4[8U] 
        = (0x1000U | (((IData)(vlSelf->SimTop__DOT__mem_data_read) 
                       << 0x10U) | __Vtemp6[8U]));
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
        = __Vtemp10[0xbU];
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4[0xcU] 
        = __Vtemp12[0xcU];
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4[0xdU] 
        = __Vtemp12[0xdU];
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4[0xeU] 
        = (0x2000000U | __Vtemp12[0xeU]);
    if (vlSelf->SimTop__DOT__u_cpu__DOT__wen_wb) {
        vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[vlSelf->SimTop__DOT__u_cpu__DOT__rd_wb] 
            = ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__read_mem_en_wb)
                ? vlSelf->SimTop__DOT__u_cpu__DOT__sext_read_mem_value_wb
                : vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_wb);
        vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[0U] = 0ULL;
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
    __Vtemp17[4U] = (0x40U | ((7U & ((IData)(((((- (QData)((IData)(
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
    __Vtemp18[2U] = (((IData)((((- (QData)((IData)(
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
    __Vtemp19[4U] = ((0x7fffffU & ((IData)((((QData)((IData)(
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
    __Vtemp19[5U] = (0x10000000U | ((0x7fffffU & ((IData)(
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
    __Vtemp19[6U] = ((0x7fffffU & ((IData)((((- (QData)((IData)(
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
    __Vtemp19[7U] = ((0x7fffffU & ((IData)(((((- (QData)((IData)(
                                                                 (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                                                  >> 0x1fU)))) 
                                              << 0xcU) 
                                             | (QData)((IData)(
                                                               (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                                                >> 0x14U)))) 
                                            >> 0x20U)) 
                                   >> 3U)) | (__Vtemp17[4U] 
                                              << 0x17U));
    __Vtemp20[1U] = (((IData)((0x30000000000000ULL 
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
    __Vtemp20[3U] = ((__Vtemp18[2U] >> 0x11U) | (0xffff8000U 
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
    __Vtemp20[4U] = (0x140U | (((0x7e00U & ((IData)(
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
                                   >> 0x1aU)) | (__Vtemp19[4U] 
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
        = __Vtemp20[1U];
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
                                   >> 0x11U)) | (__Vtemp18[2U] 
                                                 << 0xfU));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_imm____pinNumber4[5U] 
        = __Vtemp20[3U];
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_imm____pinNumber4[6U] 
        = __Vtemp20[4U];
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_imm____pinNumber4[7U] 
        = ((__Vtemp19[4U] >> 0x11U) | (__Vtemp19[5U] 
                                       << 0xfU));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_imm____pinNumber4[8U] 
        = ((__Vtemp19[5U] >> 0x11U) | (__Vtemp19[6U] 
                                       << 0xfU));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_imm____pinNumber4[9U] 
        = ((__Vtemp19[6U] >> 0x11U) | (__Vtemp19[7U] 
                                       << 0xfU));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_imm____pinNumber4[0xaU] 
        = (__Vtemp19[7U] >> 0x11U);
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
    vlSelf->SimTop__DOT__u_cpu__DOT__inst_valid_3 = 
        ((((~ (IData)(vlSelf->SimTop__DOT__axi_stall)) 
           & (((0U != (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__branch_type_wb)) 
               | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__write_mem_en_wb)) 
              | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__wen_wb))) 
          & (~ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__pipeline_stall_wb))) 
         & (0U != vlSelf->SimTop__DOT__u_cpu__DOT__inst_wb));
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
    vlSelf->SimTop__DOT__axi_rw__DOT__r_done = ((IData)(vlSelf->SimTop__DOT__axi_rw__DOT__r_hs) 
                                                & (IData)(vlSelf->io_memAXI_0_r_bits_last));
    VL_EXTEND_WQ(66,64, __Vtemp22, vlSelf->SimTop__DOT__u_cpu__DOT__reg2_value_ex);
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
        = (8U | ((__Vtemp22[0U] << 4U) | ((IData)((vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem 
                                                   >> 0x20U)) 
                                          >> 0x1eU)));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__forward_b_mux____pinNumber4[5U] 
        = ((__Vtemp22[0U] >> 0x1cU) | (__Vtemp22[1U] 
                                       << 4U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__forward_b_mux____pinNumber4[6U] 
        = ((__Vtemp22[1U] >> 0x1cU) | (__Vtemp22[2U] 
                                       << 4U));
    VL_EXTEND_WQ(66,64, __Vtemp27, vlSelf->SimTop__DOT__u_cpu__DOT__reg1_value_ex);
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
        = (8U | ((__Vtemp27[0U] << 4U) | ((IData)((vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem 
                                                   >> 0x20U)) 
                                          >> 0x1eU)));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__forward_a_mux____pinNumber4[5U] 
        = ((__Vtemp27[0U] >> 0x1cU) | (__Vtemp27[1U] 
                                       << 4U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__forward_a_mux____pinNumber4[6U] 
        = ((__Vtemp27[1U] >> 0x1cU) | (__Vtemp27[2U] 
                                       << 4U));
    vlSelf->SimTop__DOT__u_cpu__DOT__memory__DOT__value_writen_to_mem 
        = (((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__read_mem_en_wb) 
              & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__write_mem_en_mem)) 
             & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rs2_mem) 
                == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rd_wb))) 
            & (0U != (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rd_wb)))
            ? vlSelf->SimTop__DOT__u_cpu__DOT__reg_write_value_wb
            : vlSelf->SimTop__DOT__u_cpu__DOT__reg2_value_mem);
    vlSelf->io_memAXI_0_w_bits_strb = vlSelf->SimTop__DOT__mem_write_mask_axi;
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
    VL_EXTEND_WQ(65,64, __Vtemp68, vlSelf->SimTop__DOT__rw_addr);
    vlSelf->io_memAXI_0_ar_bits_addr = (0xfffffffffffffff8ULL 
                                        & (((QData)((IData)(
                                                            __Vtemp68[1U])) 
                                            << 0x20U) 
                                           | (0xfffffffffffffff8ULL 
                                              & (QData)((IData)(
                                                                __Vtemp68[0U])))));
    VL_EXTEND_WQ(65,64, __Vtemp69, vlSelf->SimTop__DOT__rw_addr);
    vlSelf->io_memAXI_0_aw_bits_addr = (0xfffffffffffffff8ULL 
                                        & (((QData)((IData)(
                                                            __Vtemp69[1U])) 
                                            << 0x20U) 
                                           | (0xfffffffffffffff8ULL 
                                              & (QData)((IData)(
                                                                __Vtemp69[0U])))));
    VL_EXTEND_WQ(65,64, __Vtemp70, vlSelf->SimTop__DOT__rw_addr);
    VL_EXTEND_WQ(65,64, __Vtemp71, vlSelf->SimTop__DOT__rw_addr);
    vlSelf->SimTop__DOT__axi_rw__DOT__axi_len = ((0U 
                                                  == 
                                                  (7U 
                                                   & __Vtemp70[0U]))
                                                  ? 0U
                                                  : 
                                                 (1U 
                                                  & (((IData)(3U) 
                                                      + 
                                                      (7U 
                                                       & __Vtemp71[0U])) 
                                                     >> 3U)));
    vlSelf->SimTop__DOT__axi_rw__DOT__trans_done = 
        ((IData)(vlSelf->SimTop__DOT__rw_req) ? (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__b_hs)
          : (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__r_done));
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
    vlSelf->io_memAXI_0_ar_bits_len = vlSelf->SimTop__DOT__axi_rw__DOT__axi_len;
    vlSelf->io_memAXI_0_aw_bits_len = vlSelf->SimTop__DOT__axi_rw__DOT__axi_len;
    vlSelf->SimTop__DOT__axi_rw__DOT__len_incr_en = 
        (((IData)(vlSelf->SimTop__DOT__axi_rw__DOT__len) 
          != (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__axi_len)) 
         & ((IData)(vlSelf->SimTop__DOT__axi_rw__DOT__w_hs) 
            | (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__r_hs)));
    vlSelf->SimTop__DOT__axi_rw__DOT__rw_ready_en = 
        ((IData)(vlSelf->SimTop__DOT__axi_rw__DOT__trans_done) 
         | (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__rw_ready));
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
    vlSelf->io_memAXI_0_w_bits_data[0U] = vlSelf->SimTop__DOT__u_cpu__DOT__reg2_to_mem_forward;
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
    vlSelf->SimTop__DOT__u_cpu__DOT__reg_write_value_mem 
        = ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__read_mem_en_mem)
            ? vlSelf->SimTop__DOT__u_cpu__DOT__sext_read_mem_value_mem
            : vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem);
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__pc_branch_addr 
        = (vlSelf->SimTop__DOT__u_cpu__DOT__pc_id + vlSelf->SimTop__DOT__u_cpu__DOT__imm_id);
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
    VL_EXTEND_WQ(69,64, __Vtemp154, (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
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
        = (0x10000U | ((__Vtemp154[0U] << 0x15U) | 
                       ((IData)(((1ULL + (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                                          + (~ vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b))) 
                                 >> 0x20U)) >> 0x10U)));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x25U] 
        = ((__Vtemp154[0U] >> 0xbU) | (__Vtemp154[1U] 
                                       << 0x15U));
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4[0x26U] 
        = ((__Vtemp154[1U] >> 0xbU) | (__Vtemp154[2U] 
                                       << 0x15U));
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
    VL_EXTEND_WQ(68,64, __Vtemp313, vlSelf->SimTop__DOT__u_cpu__DOT__value);
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
        = (4U | (__Vtemp313[0U] << 4U));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_value0____pinNumber4[3U] 
        = ((__Vtemp313[0U] >> 0x1cU) | (__Vtemp313[1U] 
                                        << 4U));
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_value0____pinNumber4[4U] 
        = ((__Vtemp313[1U] >> 0x1cU) | (__Vtemp313[2U] 
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
    VL_EXTEND_WQ(66,64, __Vtemp328, vlSelf->SimTop__DOT__u_cpu__DOT__reg2_value_id);
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
        = (0x20U | ((__Vtemp328[0U] << 6U) | ((IData)(
                                                      (vlSelf->SimTop__DOT__u_cpu__DOT__reg_write_value_mem 
                                                       >> 0x20U)) 
                                              >> 0x1cU)));
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_d_mux____pinNumber4[7U] 
        = ((__Vtemp328[0U] >> 0x1aU) | (__Vtemp328[1U] 
                                        << 6U));
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_d_mux____pinNumber4[8U] 
        = ((__Vtemp328[1U] >> 0x1aU) | (__Vtemp328[2U] 
                                        << 6U));
    VL_EXTEND_WQ(66,64, __Vtemp335, vlSelf->SimTop__DOT__u_cpu__DOT__reg1_value_id);
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
        = (0x20U | ((__Vtemp335[0U] << 6U) | ((IData)(
                                                      (vlSelf->SimTop__DOT__u_cpu__DOT__reg_write_value_mem 
                                                       >> 0x20U)) 
                                              >> 0x1cU)));
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_c_mux____pinNumber4[7U] 
        = ((__Vtemp335[0U] >> 0x1aU) | (__Vtemp335[1U] 
                                        << 6U));
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_c_mux____pinNumber4[8U] 
        = ((__Vtemp335[1U] >> 0x1aU) | (__Vtemp335[2U] 
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
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
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
    vlSelf->io_memAXI_0_aw_bits_addr = VL_RAND_RESET_Q(64);
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
    vlSelf->io_memAXI_0_ar_bits_addr = VL_RAND_RESET_Q(64);
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
    vlSelf->SimTop__DOT__ar_region = VL_RAND_RESET_I(4);
    vlSelf->SimTop__DOT__if_ready = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__if_data_read = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__mem_valid = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__mem_data_read = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__mem_write_mask_axi = VL_RAND_RESET_I(8);
    vlSelf->SimTop__DOT__rw_valid = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__rw_req = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__rw_addr = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__axi_stall = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__axi_rw__DOT__aw_hs = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__axi_rw__DOT__w_hs = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__axi_rw__DOT__b_hs = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__axi_rw__DOT__ar_hs = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__axi_rw__DOT__r_hs = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__axi_rw__DOT__r_done = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__axi_rw__DOT__trans_done = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__axi_rw__DOT__w_state = VL_RAND_RESET_I(2);
    vlSelf->SimTop__DOT__axi_rw__DOT__r_state = VL_RAND_RESET_I(2);
    vlSelf->SimTop__DOT__axi_rw__DOT__len = VL_RAND_RESET_I(8);
    vlSelf->SimTop__DOT__axi_rw__DOT__len_incr_en = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__axi_rw__DOT__axi_len = VL_RAND_RESET_I(8);
    vlSelf->SimTop__DOT__axi_rw__DOT__rw_ready = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__axi_rw__DOT__rw_ready_en = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__axi_rw__DOT__rw_resp = VL_RAND_RESET_I(2);
    vlSelf->SimTop__DOT__arbitrating__DOT__arb_state = VL_RAND_RESET_I(2);
    vlSelf->SimTop__DOT__arbitrating__DOT__zza_pulse = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__arbitrating__DOT__zza_count = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__pc_id = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_cpu__DOT__pc_if = VL_RAND_RESET_Q(64);
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
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_op_mem = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_regimm_ex = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_regimm_mem = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__wen_ex = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__wen_mem = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__wen_wb = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_id = VL_RAND_RESET_I(5);
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_ex = VL_RAND_RESET_I(5);
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_only_imm_ex = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_pc_reg1_ex = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_imm_reg2_ex = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__rd_ex = VL_RAND_RESET_I(5);
    vlSelf->SimTop__DOT__u_cpu__DOT__rd_mem = VL_RAND_RESET_I(5);
    vlSelf->SimTop__DOT__u_cpu__DOT__rd_wb = VL_RAND_RESET_I(5);
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
    vlSelf->SimTop__DOT__u_cpu__DOT__ebreak_id = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__ebreak_ex = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__ebreak_mem = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__ebreak_wb = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__reg2_value_forwardb_ex = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_cpu__DOT__reg2_to_mem_forward = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_cpu__DOT__mem_write_mask = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_cpu__DOT__reg_write_value_mem = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_cpu__DOT__pc = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_cpu__DOT__npc = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_ex = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_mem = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_wb = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_cpu__DOT__reg1_value_id = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_cpu__DOT__reg1_value_ex = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_cpu__DOT__reg2_value_id = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_cpu__DOT__reg2_value_ex = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_cpu__DOT__reg2_value_mem = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_cpu__DOT__reg_write_value_wb = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->SimTop__DOT__u_cpu__DOT__value = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_cpu__DOT__imm_id = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_cpu__DOT__imm_ex = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_cpu__DOT__sext_read_mem_value_mem = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_cpu__DOT__sext_read_mem_value_wb = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_ex = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_wb = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_cpu__DOT__IF_Flush = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__Forward_a = VL_RAND_RESET_I(2);
    vlSelf->SimTop__DOT__u_cpu__DOT__Forward_b = VL_RAND_RESET_I(2);
    vlSelf->SimTop__DOT__u_cpu__DOT__Forward_c = VL_RAND_RESET_I(2);
    vlSelf->SimTop__DOT__u_cpu__DOT__Forward_d = VL_RAND_RESET_I(2);
    vlSelf->SimTop__DOT__u_cpu__DOT__pipeline_stall = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__pipeline_stall_ex = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__pipeline_stall_mem = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__pipeline_stall_wb = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__inst_valid_3 = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__cmt_wen = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__cmt_wdest = VL_RAND_RESET_I(8);
    vlSelf->SimTop__DOT__u_cpu__DOT__cmt_wdata = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_cpu__DOT__cmt_pc = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_cpu__DOT__cmt_inst = VL_RAND_RESET_I(32);
    vlSelf->SimTop__DOT__u_cpu__DOT__cmt_valid = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__trap = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__trap_code = VL_RAND_RESET_I(8);
    vlSelf->SimTop__DOT__u_cpu__DOT__cycleCnt = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_cpu__DOT__instrCnt = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[__Vi0] = VL_RAND_RESET_Q(64);
    }
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
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__reg1_forwarda = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(198, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__forward_a_mux____pinNumber4);
    VL_RAND_RESET_W(198, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__forward_b_mux____pinNumber4);
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a0 = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b0 = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(1242, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        VL_RAND_RESET_W(66, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__lut_out = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        VL_RAND_RESET_W(66, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__lut_out = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<18; ++__Vi0) {
        VL_RAND_RESET_W(69, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<18; ++__Vi0) {
        vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0=0; __Vi0<18; ++__Vi0) {
        vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__lut_out = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__memory__DOT__value_writen_to_mem = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_cpu__DOT__pipe_mem_wb__DOT__RAMHelper__DOT__rdata = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[__Vi0] = VL_RAND_RESET_Q(64);
    }
    VL_RAND_RESET_W(335, vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_imm____pinNumber4);
    VL_RAND_RESET_W(476, vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4);
    VL_RAND_RESET_W(136, vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_value0____pinNumber4);
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        VL_RAND_RESET_W(67, vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__lut_out = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<7; ++__Vi0) {
        VL_RAND_RESET_W(68, vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<7; ++__Vi0) {
        vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0=0; __Vi0<7; ++__Vi0) {
        vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__lut_out = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        VL_RAND_RESET_W(68, vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_value0__DOT__i0__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_value0__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_value0__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_value0__DOT__i0__DOT__lut_out = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_value0__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__operation_a_forward = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__operation_b_forward = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(264, vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_c_mux____pinNumber4);
    VL_RAND_RESET_W(264, vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_d_mux____pinNumber4);
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_en = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__branch_test____pinNumber4 = VL_RAND_RESET_I(24);
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__pc_branch_addr = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        VL_RAND_RESET_W(66, vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__lut_out = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        VL_RAND_RESET_W(66, vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__lut_out = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<6; ++__Vi0) {
        vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0=0; __Vi0<6; ++__Vi0) {
        vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<6; ++__Vi0) {
        vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}

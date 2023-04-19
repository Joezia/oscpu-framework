// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSimTop__Syms.h"


void VSimTop___024root__traceChgSub0(VSimTop___024root* vlSelf, VerilatedVcd* tracep);

void VSimTop___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    VSimTop___024root* const __restrict vlSelf = static_cast<VSimTop___024root*>(voidSelf);
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        VSimTop___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void VSimTop___024root__traceChgSub0(VSimTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<3>/*95:0*/ __Vtemp971;
    VlWide<4>/*127:0*/ __Vtemp975;
    VlWide<4>/*127:0*/ __Vtemp977;
    VlWide<4>/*127:0*/ __Vtemp979;
    VlWide<3>/*95:0*/ __Vtemp980;
    VlWide<3>/*95:0*/ __Vtemp981;
    VlWide<3>/*95:0*/ __Vtemp982;
    VlWide<3>/*95:0*/ __Vtemp983;
    VlWide<3>/*95:0*/ __Vtemp984;
    VlWide<3>/*95:0*/ __Vtemp985;
    VlWide<3>/*95:0*/ __Vtemp986;
    VlWide<3>/*95:0*/ __Vtemp987;
    VlWide<4>/*127:0*/ __Vtemp988;
    VlWide<3>/*95:0*/ __Vtemp989;
    VlWide<4>/*127:0*/ __Vtemp990;
    VlWide<4>/*127:0*/ __Vtemp991;
    VlWide<3>/*95:0*/ __Vtemp992;
    VlWide<4>/*127:0*/ __Vtemp993;
    VlWide<4>/*127:0*/ __Vtemp994;
    VlWide<3>/*95:0*/ __Vtemp995;
    VlWide<4>/*127:0*/ __Vtemp996;
    VlWide<4>/*127:0*/ __Vtemp1001;
    VlWide<3>/*95:0*/ __Vtemp1002;
    VlWide<4>/*127:0*/ __Vtemp1003;
    VlWide<3>/*95:0*/ __Vtemp1004;
    VlWide<4>/*127:0*/ __Vtemp1005;
    VlWide<3>/*95:0*/ __Vtemp1006;
    VlWide<4>/*127:0*/ __Vtemp1007;
    VlWide<3>/*95:0*/ __Vtemp1008;
    VlWide<4>/*127:0*/ __Vtemp1009;
    VlWide<3>/*95:0*/ __Vtemp1010;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+0,((1U == (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__w_state))));
            VL_EXTEND_WQ(65,64, __Vtemp971, vlSelf->SimTop__DOT__rw_addr);
            tracep->chgIData(oldp+1,((0xfffffff8U & 
                                      __Vtemp971[0U])),32);
            tracep->chgBit(oldp+2,((2U == (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__w_state))));
            tracep->chgQData(oldp+3,(vlSelf->SimTop__DOT__u_cpu__DOT__reg2_to_mem_forward),64);
            tracep->chgCData(oldp+5,(vlSelf->SimTop__DOT__mem_write_mask_axi),8);
            tracep->chgBit(oldp+6,((3U == (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__w_state))));
            tracep->chgBit(oldp+7,((1U == (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__r_state))));
            tracep->chgCData(oldp+8,(((1U == (IData)(vlSelf->SimTop__DOT__arbitrating__DOT__arb_state))
                                       ? 0U : 0x7fU)),8);
            tracep->chgBit(oldp+9,((2U == (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__r_state))));
            tracep->chgQData(oldp+10,(((1U & (IData)(
                                                     (vlSelf->SimTop__DOT__u_cpu__DOT__pc 
                                                      >> 3U)))
                                        ? (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__iram_data_read_128[3U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->SimTop__DOT__iram_data_read_128[2U])))
                                        : (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__iram_data_read_128[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->SimTop__DOT__iram_data_read_128[0U]))))),64);
            tracep->chgQData(oldp+12,((0xfffffffffffffff8ULL 
                                       & vlSelf->SimTop__DOT__u_cpu__DOT__pc)),64);
            tracep->chgCData(oldp+14,(vlSelf->SimTop__DOT__axi_rw__DOT__rw_resp),2);
            tracep->chgBit(oldp+15,(vlSelf->SimTop__DOT__mem_valid));
            tracep->chgBit(oldp+16,(vlSelf->SimTop__DOT__u_cpu__DOT__write_mem_en_mem));
            tracep->chgQData(oldp+17,((0xfffffffffffffff8ULL 
                                       & vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)),64);
            tracep->chgQData(oldp+19,(vlSelf->SimTop__DOT__mem_data_read),64);
            tracep->chgBit(oldp+21,(vlSelf->SimTop__DOT__icache_valid));
            tracep->chgQData(oldp+22,(vlSelf->SimTop__DOT__icache_addr),64);
            tracep->chgCData(oldp+24,(vlSelf->SimTop__DOT__icache_len),8);
            tracep->chgBit(oldp+25,(vlSelf->SimTop__DOT__icache_req));
            tracep->chgQData(oldp+26,(vlSelf->SimTop__DOT__icache_data_read),64);
            tracep->chgBit(oldp+28,(vlSelf->SimTop__DOT__icache_stall));
            tracep->chgBit(oldp+29,(vlSelf->SimTop__DOT__rw_valid));
            tracep->chgBit(oldp+30,(vlSelf->SimTop__DOT__axi_rw__DOT__rw_ready));
            tracep->chgBit(oldp+31,(vlSelf->SimTop__DOT__rw_req));
            tracep->chgQData(oldp+32,(vlSelf->SimTop__DOT__rw_addr),64);
            tracep->chgCData(oldp+34,(vlSelf->SimTop__DOT__arbitrating__DOT__arb_state),2);
            tracep->chgBit(oldp+35,(vlSelf->SimTop__DOT__arb_if_r_hs));
            tracep->chgBit(oldp+36,(vlSelf->SimTop__DOT__arb_if_trans_done));
            tracep->chgBit(oldp+37,(vlSelf->SimTop__DOT__arbitrating__DOT__zza_pulse_1));
            tracep->chgBit(oldp+38,(vlSelf->SimTop__DOT__axi_stall));
            tracep->chgBit(oldp+39,(((~ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__axi_stall_i)) 
                                     & (0x7bU == vlSelf->SimTop__DOT__u_cpu__DOT__inst_wb))));
            tracep->chgCData(oldp+40,((0xffU & (IData)(
                                                       vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf
                                                       [0xaU]))),8);
            tracep->chgWData(oldp+41,(vlSelf->SimTop__DOT__iram_data_read_128),128);
            tracep->chgBit(oldp+45,(vlSelf->SimTop__DOT__iram_wen));
            if ((1U & (IData)((vlSelf->SimTop__DOT__u_icache__DOT__re_write_addr 
                               >> 3U)))) {
                __Vtemp975[0U] = 0xffffffffU;
                __Vtemp975[1U] = 0xffffffffU;
                __Vtemp975[2U] = 0U;
                __Vtemp975[3U] = 0U;
            } else {
                __Vtemp975[0U] = 0U;
                __Vtemp975[1U] = 0U;
                __Vtemp975[2U] = 0xffffffffU;
                __Vtemp975[3U] = 0xffffffffU;
            }
            tracep->chgWData(oldp+46,(__Vtemp975),128);
            tracep->chgCData(oldp+50,(vlSelf->SimTop__DOT__iram_addr),6);
            VL_EXTEND_WQ(128,64, __Vtemp977, vlSelf->SimTop__DOT__icache_data_read);
            if ((1U & (IData)((vlSelf->SimTop__DOT__u_icache__DOT__re_write_addr 
                               >> 3U)))) {
                __Vtemp979[0U] = 0U;
                __Vtemp979[1U] = 0U;
                __Vtemp979[2U] = (IData)(vlSelf->SimTop__DOT__icache_data_read);
                __Vtemp979[3U] = (IData)((vlSelf->SimTop__DOT__icache_data_read 
                                          >> 0x20U));
            } else {
                __Vtemp979[0U] = __Vtemp977[0U];
                __Vtemp979[1U] = __Vtemp977[1U];
                __Vtemp979[2U] = __Vtemp977[2U];
                __Vtemp979[3U] = __Vtemp977[3U];
            }
            tracep->chgWData(oldp+51,(__Vtemp979),128);
            tracep->chgBit(oldp+55,(vlSelf->SimTop__DOT__u_cpu__DOT__clint_wen));
            tracep->chgBit(oldp+56,(((0x200U == (0xffffU 
                                                 & (IData)(
                                                           (vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem 
                                                            >> 0x10U)))) 
                                     & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__read_mem_en_mem))));
            tracep->chgQData(oldp+57,(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem),64);
            tracep->chgQData(oldp+59,(vlSelf->SimTop__DOT__u_cpu__DOT__memory__DOT__value_writen_to_mem),64);
            tracep->chgQData(oldp+61,(vlSelf->SimTop__DOT__clint_data_read),64);
            tracep->chgBit(oldp+63,((vlSelf->SimTop__DOT__clint__DOT__mtime 
                                     >= vlSelf->SimTop__DOT__clint__DOT__mtimecmp)));
            VL_EXTEND_WQ(65,64, __Vtemp980, vlSelf->SimTop__DOT__u_cpu__DOT__reg2_to_mem_forward);
            tracep->chgWData(oldp+64,(__Vtemp980),65);
            VL_EXTEND_WQ(65,64, __Vtemp981, vlSelf->SimTop__DOT__rw_addr);
            tracep->chgWData(oldp+67,(__Vtemp981),65);
            tracep->chgBit(oldp+70,(((IData)(vlSelf->SimTop__DOT__rw_valid) 
                                     & (IData)(vlSelf->SimTop__DOT__rw_req))));
            tracep->chgBit(oldp+71,(((IData)(vlSelf->SimTop__DOT__rw_valid) 
                                     & (~ (IData)(vlSelf->SimTop__DOT__rw_req)))));
            tracep->chgCData(oldp+72,(vlSelf->SimTop__DOT__axi_rw__DOT__w_state),2);
            tracep->chgCData(oldp+73,(vlSelf->SimTop__DOT__axi_rw__DOT__r_state),2);
            tracep->chgBit(oldp+74,((0U == (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__w_state))));
            tracep->chgBit(oldp+75,((0U == (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__r_state))));
            tracep->chgCData(oldp+76,(vlSelf->SimTop__DOT__axi_rw__DOT__len),8);
            VL_EXTEND_WQ(65,64, __Vtemp982, vlSelf->SimTop__DOT__rw_addr);
            tracep->chgBit(oldp+77,((0U == (7U & __Vtemp982[0U]))));
            VL_EXTEND_WQ(65,64, __Vtemp983, vlSelf->SimTop__DOT__rw_addr);
            tracep->chgCData(oldp+78,((7U & __Vtemp983[0U])),4);
            VL_EXTEND_WQ(65,64, __Vtemp984, vlSelf->SimTop__DOT__rw_addr);
            tracep->chgCData(oldp+79,((0xfU & ((IData)(3U) 
                                               + (7U 
                                                  & __Vtemp984[0U])))),4);
            VL_EXTEND_WQ(65,64, __Vtemp985, vlSelf->SimTop__DOT__rw_addr);
            tracep->chgBit(oldp+80,((1U & (((IData)(3U) 
                                            + (7U & 
                                               __Vtemp985[0U])) 
                                           >> 3U))));
            VL_EXTEND_WQ(65,64, __Vtemp986, vlSelf->SimTop__DOT__rw_addr);
            tracep->chgCData(oldp+81,((0x38U & (__Vtemp986[0U] 
                                                << 3U))),6);
            VL_EXTEND_WQ(65,64, __Vtemp987, vlSelf->SimTop__DOT__rw_addr);
            tracep->chgCData(oldp+82,((0x3fU & (- (0x38U 
                                                   & (__Vtemp987[0U] 
                                                      << 3U))))),6);
            __Vtemp988[0U] = 0xffffffffU;
            __Vtemp988[1U] = 0U;
            __Vtemp988[2U] = 0U;
            __Vtemp988[3U] = 0U;
            VL_EXTEND_WQ(65,64, __Vtemp989, vlSelf->SimTop__DOT__rw_addr);
            VL_SHIFTL_WWI(128,128,6, __Vtemp990, __Vtemp988, 
                          (0x38U & (__Vtemp989[0U] 
                                    << 3U)));
            tracep->chgWData(oldp+83,(__Vtemp990),128);
            __Vtemp991[0U] = 0xffffffffU;
            __Vtemp991[1U] = 0U;
            __Vtemp991[2U] = 0U;
            __Vtemp991[3U] = 0U;
            VL_EXTEND_WQ(65,64, __Vtemp992, vlSelf->SimTop__DOT__rw_addr);
            VL_SHIFTL_WWI(128,128,6, __Vtemp993, __Vtemp991, 
                          (0x38U & (__Vtemp992[0U] 
                                    << 3U)));
            tracep->chgQData(oldp+87,((((QData)((IData)(
                                                        __Vtemp993[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    __Vtemp993[0U])))),64);
            __Vtemp994[0U] = 0xffffffffU;
            __Vtemp994[1U] = 0U;
            __Vtemp994[2U] = 0U;
            __Vtemp994[3U] = 0U;
            VL_EXTEND_WQ(65,64, __Vtemp995, vlSelf->SimTop__DOT__rw_addr);
            VL_SHIFTL_WWI(128,128,6, __Vtemp996, __Vtemp994, 
                          (0x38U & (__Vtemp995[0U] 
                                    << 3U)));
            tracep->chgQData(oldp+89,((((QData)((IData)(
                                                        __Vtemp996[3U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    __Vtemp996[2U])))),64);
            tracep->chgQData(oldp+91,((QData)((IData)(vlSelf->SimTop__DOT__mem_write_mask_axi))),64);
            tracep->chgBit(oldp+93,((0U == (IData)(vlSelf->SimTop__DOT__arbitrating__DOT__arb_state))));
            tracep->chgBit(oldp+94,((1U == (IData)(vlSelf->SimTop__DOT__arbitrating__DOT__arb_state))));
            tracep->chgBit(oldp+95,((2U == (IData)(vlSelf->SimTop__DOT__arbitrating__DOT__arb_state))));
            tracep->chgBit(oldp+96,(vlSelf->SimTop__DOT__arbitrating__DOT__zza_pulse_3));
            tracep->chgCData(oldp+97,(vlSelf->SimTop__DOT__arbitrating__DOT__zza_count),2);
            tracep->chgBit(oldp+98,(vlSelf->SimTop__DOT__arbitrating__DOT__zza_pulse));
            tracep->chgBit(oldp+99,(((0U == (IData)(vlSelf->SimTop__DOT__arbitrating__DOT__arb_state))
                                      ? 0U : (1U & 
                                              ((1U 
                                                == (IData)(vlSelf->SimTop__DOT__arbitrating__DOT__arb_state))
                                                ? (IData)(vlSelf->SimTop__DOT__mem_valid)
                                                : (
                                                   (2U 
                                                    == (IData)(vlSelf->SimTop__DOT__arbitrating__DOT__arb_state))
                                                    ? (IData)(vlSelf->SimTop__DOT__icache_valid)
                                                    : 0U))))));
            tracep->chgBit(oldp+100,(vlSelf->SimTop__DOT__arbitrating__DOT__situation_if_valid));
            tracep->chgQData(oldp+101,(vlSelf->SimTop__DOT__u_icache__DOT__valid),64);
            tracep->chgCData(oldp+103,((8U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__pc))),4);
            tracep->chgCData(oldp+104,((0x3fU & (IData)(
                                                        (vlSelf->SimTop__DOT__u_cpu__DOT__pc 
                                                         >> 4U)))),6);
            tracep->chgCData(oldp+105,((0x7fU & (IData)(
                                                        (vlSelf->SimTop__DOT__u_cpu__DOT__pc 
                                                         >> 3U)))),7);
            tracep->chgQData(oldp+106,((vlSelf->SimTop__DOT__u_cpu__DOT__pc 
                                        >> 0xaU)),54);
            tracep->chgBit(oldp+108,(vlSelf->SimTop__DOT__u_icache__DOT__hit));
            tracep->chgBit(oldp+109,(((~ (IData)((vlSelf->SimTop__DOT__u_icache__DOT__valid 
                                                  >> 
                                                  (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->SimTop__DOT__u_cpu__DOT__pc 
                                                              >> 4U)))))) 
                                      & (vlSelf->SimTop__DOT__u_icache__DOT__tag
                                         [(0x7fU & (IData)(
                                                           (vlSelf->SimTop__DOT__u_cpu__DOT__pc 
                                                            >> 3U)))] 
                                         == (vlSelf->SimTop__DOT__u_cpu__DOT__pc 
                                             >> 0xaU)))));
            tracep->chgCData(oldp+110,(vlSelf->SimTop__DOT__u_icache__DOT__icache_state),2);
            tracep->chgQData(oldp+111,(vlSelf->SimTop__DOT__u_icache__DOT__addr_icache_read),64);
            tracep->chgBit(oldp+113,((0U == (IData)(vlSelf->SimTop__DOT__u_icache__DOT__icache_state))));
            tracep->chgBit(oldp+114,((1U == (IData)(vlSelf->SimTop__DOT__u_icache__DOT__icache_state))));
            tracep->chgBit(oldp+115,((2U == (IData)(vlSelf->SimTop__DOT__u_icache__DOT__icache_state))));
            tracep->chgCData(oldp+116,(vlSelf->SimTop__DOT__u_icache__DOT__re_write_state),2);
            tracep->chgQData(oldp+117,(vlSelf->SimTop__DOT__u_icache__DOT__re_write_addr),64);
            tracep->chgBit(oldp+119,(vlSelf->SimTop__DOT__u_icache__DOT__icache_valid_pre));
            tracep->chgBit(oldp+120,((0U == (IData)(vlSelf->SimTop__DOT__u_icache__DOT__re_write_state))));
            tracep->chgBit(oldp+121,((1U == (IData)(vlSelf->SimTop__DOT__u_icache__DOT__re_write_state))));
            tracep->chgBit(oldp+122,((((1U == (IData)(vlSelf->SimTop__DOT__u_icache__DOT__re_write_state)) 
                                       & (IData)(vlSelf->SimTop__DOT__arb_if_trans_done)) 
                                      & (IData)(vlSelf->SimTop__DOT__arb_if_r_hs))));
            tracep->chgBit(oldp+123,(vlSelf->SimTop__DOT__u_icache__DOT__icache_stall_pre));
            tracep->chgBit(oldp+124,((1U & (~ (IData)(vlSelf->SimTop__DOT__iram_wen)))));
            __Vtemp1001[0U] = (~ ((1U & (IData)((vlSelf->SimTop__DOT__u_icache__DOT__re_write_addr 
                                                 >> 3U)))
                                   ? 0xffffffffU : 0U));
            __Vtemp1001[1U] = (~ ((1U & (IData)((vlSelf->SimTop__DOT__u_icache__DOT__re_write_addr 
                                                 >> 3U)))
                                   ? 0xffffffffU : 0U));
            __Vtemp1001[2U] = (~ ((1U & (IData)((vlSelf->SimTop__DOT__u_icache__DOT__re_write_addr 
                                                 >> 3U)))
                                   ? 0U : 0xffffffffU));
            __Vtemp1001[3U] = (~ ((1U & (IData)((vlSelf->SimTop__DOT__u_icache__DOT__re_write_addr 
                                                 >> 3U)))
                                   ? 0U : 0xffffffffU));
            tracep->chgWData(oldp+125,(__Vtemp1001),128);
            tracep->chgBit(oldp+129,(vlSelf->SimTop__DOT__u_cpu__DOT__axi_stall_i));
            tracep->chgBit(oldp+130,(vlSelf->SimTop__DOT__u_cpu__DOT__device_stall));
            tracep->chgQData(oldp+131,(vlSelf->SimTop__DOT__u_cpu__DOT__pc_id),64);
            tracep->chgQData(oldp+133,(vlSelf->SimTop__DOT__u_cpu__DOT__pc_ex),64);
            tracep->chgQData(oldp+135,(vlSelf->SimTop__DOT__u_cpu__DOT__pc_mem),64);
            tracep->chgQData(oldp+137,(vlSelf->SimTop__DOT__u_cpu__DOT__pc_wb),64);
            tracep->chgIData(oldp+139,(vlSelf->SimTop__DOT__u_cpu__DOT__inst_id),32);
            tracep->chgIData(oldp+140,(((1U & (IData)(
                                                      (vlSelf->SimTop__DOT__u_cpu__DOT__pc 
                                                       >> 2U)))
                                         ? (IData)(
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
                                         : (IData)(
                                                   ((1U 
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
                                                                       vlSelf->SimTop__DOT__iram_data_read_128[0U]))))))),32);
            tracep->chgIData(oldp+141,(vlSelf->SimTop__DOT__u_cpu__DOT__inst_ex),32);
            tracep->chgIData(oldp+142,(vlSelf->SimTop__DOT__u_cpu__DOT__inst_mem),32);
            tracep->chgIData(oldp+143,(vlSelf->SimTop__DOT__u_cpu__DOT__inst_wb),32);
            tracep->chgCData(oldp+144,(vlSelf->SimTop__DOT__u_cpu__DOT__optype),3);
            tracep->chgBit(oldp+145,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_op_id));
            tracep->chgBit(oldp+146,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_op_ex));
            tracep->chgBit(oldp+147,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_op_mem));
            tracep->chgBit(oldp+148,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_jalr));
            tracep->chgBit(oldp+149,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_regimm_ex));
            tracep->chgBit(oldp+150,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_regimm_mem));
            tracep->chgBit(oldp+151,(((((((((((((((
                                                   (((((((((((((((((((((((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrc) 
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
                                         | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_slt)))));
            tracep->chgBit(oldp+152,(((((((((((((((
                                                   (((((((((((((((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_xor) 
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
                                      | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_srlw))));
            tracep->chgBit(oldp+153,(vlSelf->SimTop__DOT__u_cpu__DOT__csr_ren));
            tracep->chgBit(oldp+154,(((((((((((((((
                                                   (((((((((((((((((((((((((((((((((((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrc) 
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
                                                                     | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lh)) 
                                                                    | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lwu)) 
                                                                   | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lw)) 
                                                                  | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_ld)) 
                                                                 | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_mulw)) 
                                                                | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_mul)) 
                                                               | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_divw)) 
                                                              | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_divuw)) 
                                                             | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_remw)) 
                                                            | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_addw)) 
                                                           | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_subw)) 
                                                          | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_add)) 
                                                         | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sub)) 
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
                                      | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_remuw))));
            tracep->chgBit(oldp+155,(((((((((((((((
                                                   (((((((((((((((((((((((((((((((((((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrc) 
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
                                      | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_srliw))));
            tracep->chgBit(oldp+156,(vlSelf->SimTop__DOT__u_cpu__DOT__wen_ex));
            tracep->chgBit(oldp+157,(vlSelf->SimTop__DOT__u_cpu__DOT__wen_mem));
            tracep->chgBit(oldp+158,(vlSelf->SimTop__DOT__u_cpu__DOT__wen_wb));
            tracep->chgBit(oldp+159,(((((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrc) 
                                          | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrs)) 
                                         | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrci)) 
                                        | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrsi)) 
                                       | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrwi)) 
                                      | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrw))));
            tracep->chgBit(oldp+160,(vlSelf->SimTop__DOT__u_cpu__DOT__csr_wen_ex));
            tracep->chgBit(oldp+161,(vlSelf->SimTop__DOT__u_cpu__DOT__csr_wen_mem));
            tracep->chgBit(oldp+162,(vlSelf->SimTop__DOT__u_cpu__DOT__csr_wen_wb));
            tracep->chgCData(oldp+163,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_id),5);
            tracep->chgCData(oldp+164,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_ex),5);
            tracep->chgCData(oldp+165,(vlSelf->SimTop__DOT__u_cpu__DOT__csr_alu_op_id),3);
            tracep->chgCData(oldp+166,(vlSelf->SimTop__DOT__u_cpu__DOT__csr_alu_op_ex),3);
            tracep->chgBit(oldp+167,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lui));
            tracep->chgBit(oldp+168,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_only_imm_ex));
            tracep->chgBit(oldp+169,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_auipc) 
                                       | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_jal)) 
                                      | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_jalr))));
            tracep->chgBit(oldp+170,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_pc_reg1_ex));
            tracep->chgBit(oldp+171,(((((((((((((((
                                                   ((((((((((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_slli) 
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
                                      | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sraiw))));
            tracep->chgBit(oldp+172,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_imm_reg2_ex));
            tracep->chgBit(oldp+173,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrwi) 
                                       | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrci)) 
                                      | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrsi))));
            tracep->chgBit(oldp+174,(vlSelf->SimTop__DOT__u_cpu__DOT__csr_if_zimm_ex));
            tracep->chgCData(oldp+175,((0x1fU & (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                                 >> 7U))),5);
            tracep->chgCData(oldp+176,(vlSelf->SimTop__DOT__u_cpu__DOT__rd_ex),5);
            tracep->chgCData(oldp+177,(vlSelf->SimTop__DOT__u_cpu__DOT__rd_mem),5);
            tracep->chgCData(oldp+178,(vlSelf->SimTop__DOT__u_cpu__DOT__rd_wb),5);
            tracep->chgSData(oldp+179,((vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                        >> 0x14U)),12);
            tracep->chgSData(oldp+180,(vlSelf->SimTop__DOT__u_cpu__DOT__csr_ex),12);
            tracep->chgSData(oldp+181,(vlSelf->SimTop__DOT__u_cpu__DOT__csr_mem),12);
            tracep->chgSData(oldp+182,(vlSelf->SimTop__DOT__u_cpu__DOT__csr_wb),12);
            tracep->chgCData(oldp+183,((0x1fU & (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                                 >> 0xfU))),5);
            tracep->chgCData(oldp+184,(vlSelf->SimTop__DOT__u_cpu__DOT__zimm_ex),5);
            tracep->chgCData(oldp+185,(vlSelf->SimTop__DOT__u_cpu__DOT__rs1_ex),5);
            tracep->chgCData(oldp+186,((0x1fU & (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                                 >> 0x14U))),5);
            tracep->chgCData(oldp+187,(vlSelf->SimTop__DOT__u_cpu__DOT__rs2_ex),5);
            tracep->chgCData(oldp+188,(vlSelf->SimTop__DOT__u_cpu__DOT__rs2_mem),5);
            tracep->chgQData(oldp+189,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf
                                       [0xaU]),64);
            tracep->chgBit(oldp+191,((((((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lb) 
                                           | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lbu)) 
                                          | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lwu)) 
                                         | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lw)) 
                                        | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_ld)) 
                                       | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lh)) 
                                      | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lhu))));
            tracep->chgBit(oldp+192,(vlSelf->SimTop__DOT__u_cpu__DOT__read_mem_en_ex));
            tracep->chgBit(oldp+193,(vlSelf->SimTop__DOT__u_cpu__DOT__read_mem_en_mem));
            tracep->chgBit(oldp+194,(vlSelf->SimTop__DOT__u_cpu__DOT__read_mem_en_wb));
            tracep->chgBit(oldp+195,(((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sd) 
                                        | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sb)) 
                                       | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sw)) 
                                      | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sh))));
            tracep->chgBit(oldp+196,(vlSelf->SimTop__DOT__u_cpu__DOT__write_mem_en_ex));
            tracep->chgBit(oldp+197,(vlSelf->SimTop__DOT__u_cpu__DOT__write_mem_en_wb));
            tracep->chgCData(oldp+198,(vlSelf->SimTop__DOT__u_cpu__DOT__mem_ctrl_id),4);
            tracep->chgCData(oldp+199,(vlSelf->SimTop__DOT__u_cpu__DOT__mem_ctrl_ex),4);
            tracep->chgCData(oldp+200,(vlSelf->SimTop__DOT__u_cpu__DOT__mem_ctrl_mem),4);
            tracep->chgCData(oldp+201,(vlSelf->SimTop__DOT__u_cpu__DOT__value_width_ctrl_id),4);
            tracep->chgCData(oldp+202,(vlSelf->SimTop__DOT__u_cpu__DOT__value_width_ctrl_ex),4);
            tracep->chgCData(oldp+203,(vlSelf->SimTop__DOT__u_cpu__DOT__branch_type_id),3);
            tracep->chgCData(oldp+204,(vlSelf->SimTop__DOT__u_cpu__DOT__branch_type_ex),3);
            tracep->chgCData(oldp+205,(vlSelf->SimTop__DOT__u_cpu__DOT__branch_type_mem),3);
            tracep->chgCData(oldp+206,(vlSelf->SimTop__DOT__u_cpu__DOT__branch_type_wb),3);
            tracep->chgBit(oldp+207,(((((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_divw) 
                                          | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_divuw)) 
                                         | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_remw)) 
                                        | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_remuw)) 
                                       | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_srliw)) 
                                      | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_srlw))));
            tracep->chgBit(oldp+208,(vlSelf->SimTop__DOT__u_cpu__DOT__operator_a_w_ex));
            tracep->chgBit(oldp+209,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sraiw) 
                                      | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sraw))));
            tracep->chgBit(oldp+210,(vlSelf->SimTop__DOT__u_cpu__DOT__operator_a_w_s_ex));
            tracep->chgBit(oldp+211,(((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_divw) 
                                        | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_divuw)) 
                                       | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_remw)) 
                                      | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_remuw))));
            tracep->chgBit(oldp+212,(vlSelf->SimTop__DOT__u_cpu__DOT__operator_b_w_ex));
            tracep->chgBit(oldp+213,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sll) 
                                       | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sra)) 
                                      | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_srl))));
            tracep->chgBit(oldp+214,(vlSelf->SimTop__DOT__u_cpu__DOT__if_inst_sll_ex));
            tracep->chgBit(oldp+215,((0x73U == vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)));
            tracep->chgBit(oldp+216,(vlSelf->SimTop__DOT__u_cpu__DOT__environment_call_ex));
            tracep->chgBit(oldp+217,(vlSelf->SimTop__DOT__u_cpu__DOT__environment_call_mem));
            tracep->chgBit(oldp+218,(vlSelf->SimTop__DOT__u_cpu__DOT__environment_call_wb));
            tracep->chgBit(oldp+219,((0x30200073U == vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)));
            tracep->chgBit(oldp+220,(vlSelf->SimTop__DOT__u_cpu__DOT__m_mode_return_ex));
            tracep->chgBit(oldp+221,(vlSelf->SimTop__DOT__u_cpu__DOT__m_mode_return_mem));
            tracep->chgBit(oldp+222,(vlSelf->SimTop__DOT__u_cpu__DOT__m_mode_return_wb));
            tracep->chgBit(oldp+223,(vlSelf->SimTop__DOT__u_cpu__DOT__ebreak_ex));
            tracep->chgBit(oldp+224,(vlSelf->SimTop__DOT__u_cpu__DOT__ebreak_mem));
            tracep->chgBit(oldp+225,(vlSelf->SimTop__DOT__u_cpu__DOT__ebreak_wb));
            tracep->chgQData(oldp+226,(vlSelf->SimTop__DOT__u_cpu__DOT__reg2_value_forwardb_ex),64);
            tracep->chgQData(oldp+228,(vlSelf->SimTop__DOT__u_cpu__DOT__csr_value_writeback_ex),64);
            tracep->chgQData(oldp+230,(vlSelf->SimTop__DOT__u_cpu__DOT__csr_value_writeback_mem),64);
            tracep->chgQData(oldp+232,(vlSelf->SimTop__DOT__u_cpu__DOT__csr_value_writeback_wb),64);
            tracep->chgBit(oldp+234,((((0xaU == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_ex)) 
                                       & (~ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_valid))) 
                                      | ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_ready) 
                                         & (2U != (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__div_state))))));
            tracep->chgQData(oldp+235,(vlSelf->SimTop__DOT__u_cpu__DOT__read_mem_value),64);
            tracep->chgQData(oldp+237,(vlSelf->SimTop__DOT__u_cpu__DOT__mem_write_mask),64);
            tracep->chgBit(oldp+239,(vlSelf->SimTop__DOT__u_cpu__DOT__if_clint_mem));
            tracep->chgBit(oldp+240,(vlSelf->SimTop__DOT__u_cpu__DOT__if_clint_wb));
            tracep->chgQData(oldp+241,(vlSelf->SimTop__DOT__u_cpu__DOT__reg_write_value_mem),64);
            tracep->chgQData(oldp+243,(vlSelf->SimTop__DOT__u_cpu__DOT__pc),64);
            tracep->chgQData(oldp+245,(vlSelf->SimTop__DOT__u_cpu__DOT__npc),64);
            tracep->chgQData(oldp+247,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_ex),64);
            tracep->chgQData(oldp+249,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_mem),64);
            tracep->chgQData(oldp+251,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_wb),64);
            tracep->chgQData(oldp+253,(vlSelf->SimTop__DOT__u_cpu__DOT__reg1_value_id),64);
            tracep->chgQData(oldp+255,(vlSelf->SimTop__DOT__u_cpu__DOT__reg1_value_ex),64);
            tracep->chgQData(oldp+257,(vlSelf->SimTop__DOT__u_cpu__DOT__reg2_value_id),64);
            tracep->chgQData(oldp+259,(vlSelf->SimTop__DOT__u_cpu__DOT__reg2_value_ex),64);
            tracep->chgQData(oldp+261,(vlSelf->SimTop__DOT__u_cpu__DOT__reg2_value_mem),64);
            tracep->chgQData(oldp+263,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__csr_ren) 
                                         & (0x300U 
                                            == (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                                >> 0x14U)))
                                         ? vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mstatus
                                         : (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__csr_ren) 
                                             & (0x305U 
                                                == 
                                                (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                                 >> 0x14U)))
                                             ? vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mtvec
                                             : (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__csr_ren) 
                                                 & (0x341U 
                                                    == 
                                                    (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                                     >> 0x14U)))
                                                 ? vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mepc
                                                 : 
                                                (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__csr_ren) 
                                                  & (0x342U 
                                                     == 
                                                     (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                                      >> 0x14U)))
                                                  ? vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mcause
                                                  : 0ULL))))),64);
            tracep->chgQData(oldp+265,(vlSelf->SimTop__DOT__u_cpu__DOT__csr_value_ex),64);
            tracep->chgQData(oldp+267,(vlSelf->SimTop__DOT__u_cpu__DOT__reg_write_value_wb),64);
            tracep->chgQData(oldp+269,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[0]),64);
            tracep->chgQData(oldp+271,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[1]),64);
            tracep->chgQData(oldp+273,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[2]),64);
            tracep->chgQData(oldp+275,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[3]),64);
            tracep->chgQData(oldp+277,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[4]),64);
            tracep->chgQData(oldp+279,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[5]),64);
            tracep->chgQData(oldp+281,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[6]),64);
            tracep->chgQData(oldp+283,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[7]),64);
            tracep->chgQData(oldp+285,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[8]),64);
            tracep->chgQData(oldp+287,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[9]),64);
            tracep->chgQData(oldp+289,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[10]),64);
            tracep->chgQData(oldp+291,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[11]),64);
            tracep->chgQData(oldp+293,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[12]),64);
            tracep->chgQData(oldp+295,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[13]),64);
            tracep->chgQData(oldp+297,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[14]),64);
            tracep->chgQData(oldp+299,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[15]),64);
            tracep->chgQData(oldp+301,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[16]),64);
            tracep->chgQData(oldp+303,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[17]),64);
            tracep->chgQData(oldp+305,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[18]),64);
            tracep->chgQData(oldp+307,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[19]),64);
            tracep->chgQData(oldp+309,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[20]),64);
            tracep->chgQData(oldp+311,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[21]),64);
            tracep->chgQData(oldp+313,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[22]),64);
            tracep->chgQData(oldp+315,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[23]),64);
            tracep->chgQData(oldp+317,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[24]),64);
            tracep->chgQData(oldp+319,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[25]),64);
            tracep->chgQData(oldp+321,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[26]),64);
            tracep->chgQData(oldp+323,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[27]),64);
            tracep->chgQData(oldp+325,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[28]),64);
            tracep->chgQData(oldp+327,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[29]),64);
            tracep->chgQData(oldp+329,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[30]),64);
            tracep->chgQData(oldp+331,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[31]),64);
            tracep->chgBit(oldp+333,(vlSelf->SimTop__DOT__u_cpu__DOT__m_time_interrupt));
            tracep->chgBit(oldp+334,(vlSelf->SimTop__DOT__u_cpu__DOT__m_time_interrupt_trigger));
            tracep->chgQData(oldp+335,(vlSelf->SimTop__DOT__u_cpu__DOT__value),64);
            tracep->chgQData(oldp+337,(vlSelf->SimTop__DOT__u_cpu__DOT__imm_id),64);
            tracep->chgQData(oldp+339,(vlSelf->SimTop__DOT__u_cpu__DOT__imm_ex),64);
            tracep->chgQData(oldp+341,(vlSelf->SimTop__DOT__u_cpu__DOT__sext_read_mem_value_mem),64);
            tracep->chgQData(oldp+343,(vlSelf->SimTop__DOT__u_cpu__DOT__sext_read_mem_value_wb),64);
            tracep->chgQData(oldp+345,(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_ex),64);
            tracep->chgQData(oldp+347,(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_wb),64);
            tracep->chgBit(oldp+349,(vlSelf->SimTop__DOT__u_cpu__DOT__IF_Flush));
            tracep->chgCData(oldp+350,(vlSelf->SimTop__DOT__u_cpu__DOT__Forward_a),2);
            tracep->chgCData(oldp+351,(vlSelf->SimTop__DOT__u_cpu__DOT__Forward_b),2);
            tracep->chgCData(oldp+352,(vlSelf->SimTop__DOT__u_cpu__DOT__Forward_c),2);
            tracep->chgCData(oldp+353,(vlSelf->SimTop__DOT__u_cpu__DOT__Forward_d),2);
            tracep->chgBit(oldp+354,(vlSelf->SimTop__DOT__u_cpu__DOT__Forward_store));
            tracep->chgBit(oldp+355,(vlSelf->SimTop__DOT__u_cpu__DOT__pipeline_stall));
            tracep->chgBit(oldp+356,(vlSelf->SimTop__DOT__u_cpu__DOT__pipeline_stall_ex));
            tracep->chgBit(oldp+357,(vlSelf->SimTop__DOT__u_cpu__DOT__pipeline_stall_mem));
            tracep->chgBit(oldp+358,(vlSelf->SimTop__DOT__u_cpu__DOT__pipeline_stall_wb));
            tracep->chgBit(oldp+359,(vlSelf->SimTop__DOT__u_cpu__DOT__pc_wen));
            tracep->chgBit(oldp+360,(vlSelf->SimTop__DOT__u_cpu__DOT__inst_valid_3));
            tracep->chgBit(oldp+361,(((((0x7bU == vlSelf->SimTop__DOT__u_cpu__DOT__inst_wb) 
                                        | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__m_time_interrupt)) 
                                       | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__if_clint_wb)) 
                                      | (0xb00U == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__csr_wb)))));
            tracep->chgQData(oldp+362,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mstatus),64);
            tracep->chgQData(oldp+364,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mepc),64);
            tracep->chgQData(oldp+366,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mtvec),64);
            tracep->chgQData(oldp+368,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mcause),64);
            tracep->chgQData(oldp+370,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mie),64);
            tracep->chgQData(oldp+372,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mip),64);
            tracep->chgQData(oldp+374,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mscratch),64);
            tracep->chgCData(oldp+376,((0x7fU & vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)),7);
            tracep->chgCData(oldp+377,((7U & (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                              >> 0xcU))),3);
            tracep->chgBit(oldp+378,((0U == vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)));
            tracep->chgBit(oldp+379,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrc));
            tracep->chgBit(oldp+380,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrci));
            tracep->chgBit(oldp+381,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrs));
            tracep->chgBit(oldp+382,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrsi));
            tracep->chgBit(oldp+383,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrw));
            tracep->chgBit(oldp+384,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrwi));
            tracep->chgBit(oldp+385,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_addi));
            tracep->chgBit(oldp+386,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_xor));
            tracep->chgBit(oldp+387,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_xori));
            tracep->chgBit(oldp+388,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_ori));
            tracep->chgBit(oldp+389,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_addiw));
            tracep->chgBit(oldp+390,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_addw));
            tracep->chgBit(oldp+391,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_subw));
            tracep->chgBit(oldp+392,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_mul));
            tracep->chgBit(oldp+393,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_mulw));
            tracep->chgBit(oldp+394,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_divw));
            tracep->chgBit(oldp+395,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_divuw));
            tracep->chgBit(oldp+396,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_remw));
            tracep->chgBit(oldp+397,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_remuw));
            tracep->chgBit(oldp+398,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sub));
            tracep->chgBit(oldp+399,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_add));
            tracep->chgBit(oldp+400,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sll));
            tracep->chgBit(oldp+401,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_slli));
            tracep->chgBit(oldp+402,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_slliw));
            tracep->chgBit(oldp+403,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_srli));
            tracep->chgBit(oldp+404,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_srliw));
            tracep->chgBit(oldp+405,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_andi));
            tracep->chgBit(oldp+406,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_and));
            tracep->chgBit(oldp+407,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_or));
            tracep->chgBit(oldp+408,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_srai));
            tracep->chgBit(oldp+409,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sraiw));
            tracep->chgBit(oldp+410,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sra));
            tracep->chgBit(oldp+411,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sraw));
            tracep->chgBit(oldp+412,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_srl));
            tracep->chgBit(oldp+413,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_srlw));
            tracep->chgBit(oldp+414,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sllw));
            tracep->chgBit(oldp+415,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_auipc));
            tracep->chgBit(oldp+416,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_jal));
            tracep->chgBit(oldp+417,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_slti));
            tracep->chgBit(oldp+418,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sltiu));
            tracep->chgBit(oldp+419,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sltu));
            tracep->chgBit(oldp+420,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_slt));
            tracep->chgBit(oldp+421,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_beq));
            tracep->chgBit(oldp+422,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_bne));
            tracep->chgBit(oldp+423,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_bge));
            tracep->chgBit(oldp+424,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_bgeu));
            tracep->chgBit(oldp+425,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_blt));
            tracep->chgBit(oldp+426,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_bltu));
            tracep->chgBit(oldp+427,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sd));
            tracep->chgBit(oldp+428,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sw));
            tracep->chgBit(oldp+429,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sh));
            tracep->chgBit(oldp+430,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sb));
            tracep->chgBit(oldp+431,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lb));
            tracep->chgBit(oldp+432,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lbu));
            tracep->chgBit(oldp+433,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lhu));
            tracep->chgBit(oldp+434,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lw));
            tracep->chgBit(oldp+435,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lwu));
            tracep->chgBit(oldp+436,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lh));
            tracep->chgBit(oldp+437,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_ld));
            tracep->chgBit(oldp+438,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_ebreak));
            tracep->chgBit(oldp+439,((0x6bU == vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)));
            tracep->chgBit(oldp+440,((0x7bU == vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)));
            tracep->chgBit(oldp+441,(((((((((((((((
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
                                      | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_srliw))));
            tracep->chgQData(oldp+442,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__reg1_forwarda),64);
            tracep->chgQData(oldp+444,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a0),64);
            tracep->chgQData(oldp+446,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b0),64);
            tracep->chgQData(oldp+448,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a),64);
            tracep->chgQData(oldp+450,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b),64);
            tracep->chgBit(oldp+452,((0xaU == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_ex))));
            tracep->chgBit(oldp+453,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_valid));
            tracep->chgQData(oldp+454,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__mul_result[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__mul_result[0U])))),64);
            tracep->chgBit(oldp+456,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_ready));
            tracep->chgBit(oldp+457,((2U == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__div_state))));
            tracep->chgBit(oldp+458,((0xcU == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_ex))));
            tracep->chgQData(oldp+459,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__quotient_sign)
                                         ? (1ULL + 
                                            (~ vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__quotient_abs))
                                         : vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__quotient_abs)),64);
            tracep->chgQData(oldp+461,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_operation_a),64);
            tracep->chgWData(oldp+463,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__forward_a_mux____pinNumber4),198);
            tracep->chgWData(oldp+470,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__pair_list[0]),66);
            tracep->chgWData(oldp+473,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__pair_list[1]),66);
            tracep->chgWData(oldp+476,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__pair_list[2]),66);
            tracep->chgCData(oldp+479,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__key_list[0]),2);
            tracep->chgCData(oldp+480,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__key_list[1]),2);
            tracep->chgCData(oldp+481,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__key_list[2]),2);
            tracep->chgQData(oldp+482,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+484,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+486,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+488,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+490,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__hit));
            tracep->chgWData(oldp+491,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__forward_b_mux____pinNumber4),198);
            tracep->chgWData(oldp+498,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__pair_list[0]),66);
            tracep->chgWData(oldp+501,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__pair_list[1]),66);
            tracep->chgWData(oldp+504,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__pair_list[2]),66);
            tracep->chgCData(oldp+507,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__key_list[0]),2);
            tracep->chgCData(oldp+508,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__key_list[1]),2);
            tracep->chgCData(oldp+509,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__key_list[2]),2);
            tracep->chgQData(oldp+510,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+512,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+514,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+516,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+518,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__hit));
            tracep->chgBit(oldp+519,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__mul_calculating));
            tracep->chgWData(oldp+520,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__mul_result_partial),128);
            tracep->chgWData(oldp+524,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__mul_result),128);
            tracep->chgCData(oldp+528,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__mul_result_cnt),7);
            tracep->chgWData(oldp+529,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__multiplcand),128);
            tracep->chgQData(oldp+533,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__multipler),64);
            tracep->chgCData(oldp+535,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__div_state),2);
            tracep->chgCData(oldp+536,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__div_cnt),7);
            tracep->chgWData(oldp+537,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__dividend_abs),128);
            tracep->chgWData(oldp+541,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__divisor_abs),65);
            tracep->chgQData(oldp+544,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__quotient_abs),64);
            tracep->chgBit(oldp+546,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__quotient_sign));
            tracep->chgBit(oldp+547,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__remainder_sign));
            tracep->chgWData(oldp+548,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__diff_temp),65);
            tracep->chgBit(oldp+551,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__diff_neg));
            tracep->chgQData(oldp+552,(VL_DIVS_QQQ(64, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b)),64);
            tracep->chgQData(oldp+554,(VL_DIV_QQQ(64, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b)),64);
            tracep->chgBit(oldp+556,((((0xcU == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_ex))
                                        ? VL_DIVS_QQQ(64, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b)
                                        : VL_DIV_QQQ(64, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b)) 
                                      == ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__quotient_sign)
                                           ? (1ULL 
                                              + (~ vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__quotient_abs))
                                           : vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__quotient_abs))));
            tracep->chgWData(oldp+557,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4),1311);
            tracep->chgWData(oldp+598,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[0]),69);
            tracep->chgWData(oldp+601,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[1]),69);
            tracep->chgWData(oldp+604,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[2]),69);
            tracep->chgWData(oldp+607,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[3]),69);
            tracep->chgWData(oldp+610,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[4]),69);
            tracep->chgWData(oldp+613,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[5]),69);
            tracep->chgWData(oldp+616,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[6]),69);
            tracep->chgWData(oldp+619,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[7]),69);
            tracep->chgWData(oldp+622,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[8]),69);
            tracep->chgWData(oldp+625,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[9]),69);
            tracep->chgWData(oldp+628,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[10]),69);
            tracep->chgWData(oldp+631,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[11]),69);
            tracep->chgWData(oldp+634,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[12]),69);
            tracep->chgWData(oldp+637,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[13]),69);
            tracep->chgWData(oldp+640,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[14]),69);
            tracep->chgWData(oldp+643,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[15]),69);
            tracep->chgWData(oldp+646,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[16]),69);
            tracep->chgWData(oldp+649,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[17]),69);
            tracep->chgWData(oldp+652,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[18]),69);
            tracep->chgCData(oldp+655,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[0]),5);
            tracep->chgCData(oldp+656,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[1]),5);
            tracep->chgCData(oldp+657,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[2]),5);
            tracep->chgCData(oldp+658,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[3]),5);
            tracep->chgCData(oldp+659,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[4]),5);
            tracep->chgCData(oldp+660,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[5]),5);
            tracep->chgCData(oldp+661,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[6]),5);
            tracep->chgCData(oldp+662,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[7]),5);
            tracep->chgCData(oldp+663,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[8]),5);
            tracep->chgCData(oldp+664,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[9]),5);
            tracep->chgCData(oldp+665,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[10]),5);
            tracep->chgCData(oldp+666,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[11]),5);
            tracep->chgCData(oldp+667,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[12]),5);
            tracep->chgCData(oldp+668,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[13]),5);
            tracep->chgCData(oldp+669,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[14]),5);
            tracep->chgCData(oldp+670,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[15]),5);
            tracep->chgCData(oldp+671,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[16]),5);
            tracep->chgCData(oldp+672,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[17]),5);
            tracep->chgCData(oldp+673,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[18]),5);
            tracep->chgQData(oldp+674,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+676,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+678,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+680,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+682,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[4]),64);
            tracep->chgQData(oldp+684,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[5]),64);
            tracep->chgQData(oldp+686,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[6]),64);
            tracep->chgQData(oldp+688,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[7]),64);
            tracep->chgQData(oldp+690,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[8]),64);
            tracep->chgQData(oldp+692,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[9]),64);
            tracep->chgQData(oldp+694,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[10]),64);
            tracep->chgQData(oldp+696,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[11]),64);
            tracep->chgQData(oldp+698,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[12]),64);
            tracep->chgQData(oldp+700,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[13]),64);
            tracep->chgQData(oldp+702,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[14]),64);
            tracep->chgQData(oldp+704,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[15]),64);
            tracep->chgQData(oldp+706,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[16]),64);
            tracep->chgQData(oldp+708,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[17]),64);
            tracep->chgQData(oldp+710,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[18]),64);
            tracep->chgQData(oldp+712,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+714,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__hit));
            tracep->chgWData(oldp+715,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__csr_value_write____pinNumber4),201);
            tracep->chgWData(oldp+722,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_value_write__DOT__i0__DOT__pair_list[0]),67);
            tracep->chgWData(oldp+725,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_value_write__DOT__i0__DOT__pair_list[1]),67);
            tracep->chgWData(oldp+728,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_value_write__DOT__i0__DOT__pair_list[2]),67);
            tracep->chgCData(oldp+731,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_value_write__DOT__i0__DOT__key_list[0]),3);
            tracep->chgCData(oldp+732,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_value_write__DOT__i0__DOT__key_list[1]),3);
            tracep->chgCData(oldp+733,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_value_write__DOT__i0__DOT__key_list[2]),3);
            tracep->chgQData(oldp+734,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_value_write__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+736,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_value_write__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+738,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_value_write__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+740,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_value_write__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+742,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_value_write__DOT__i0__DOT__hit));
            tracep->chgBit(oldp+743,((0x200U == (0xffffU 
                                                 & (IData)(
                                                           (vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem 
                                                            >> 0x10U))))));
            tracep->chgQData(oldp+744,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[0]),64);
            tracep->chgQData(oldp+746,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[1]),64);
            tracep->chgQData(oldp+748,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[2]),64);
            tracep->chgQData(oldp+750,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[3]),64);
            tracep->chgQData(oldp+752,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[4]),64);
            tracep->chgQData(oldp+754,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[5]),64);
            tracep->chgQData(oldp+756,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[6]),64);
            tracep->chgQData(oldp+758,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[7]),64);
            tracep->chgQData(oldp+760,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[8]),64);
            tracep->chgQData(oldp+762,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[9]),64);
            tracep->chgQData(oldp+764,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[10]),64);
            tracep->chgQData(oldp+766,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[11]),64);
            tracep->chgQData(oldp+768,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[12]),64);
            tracep->chgQData(oldp+770,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[13]),64);
            tracep->chgQData(oldp+772,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[14]),64);
            tracep->chgQData(oldp+774,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[15]),64);
            tracep->chgQData(oldp+776,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[16]),64);
            tracep->chgQData(oldp+778,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[17]),64);
            tracep->chgQData(oldp+780,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[18]),64);
            tracep->chgQData(oldp+782,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[19]),64);
            tracep->chgQData(oldp+784,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[20]),64);
            tracep->chgQData(oldp+786,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[21]),64);
            tracep->chgQData(oldp+788,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[22]),64);
            tracep->chgQData(oldp+790,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[23]),64);
            tracep->chgQData(oldp+792,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[24]),64);
            tracep->chgQData(oldp+794,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[25]),64);
            tracep->chgQData(oldp+796,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[26]),64);
            tracep->chgQData(oldp+798,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[27]),64);
            tracep->chgQData(oldp+800,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[28]),64);
            tracep->chgQData(oldp+802,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[29]),64);
            tracep->chgQData(oldp+804,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[30]),64);
            tracep->chgQData(oldp+806,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[31]),64);
            tracep->chgQData(oldp+808,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[0]),64);
            tracep->chgQData(oldp+810,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[1]),64);
            tracep->chgQData(oldp+812,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[2]),64);
            tracep->chgQData(oldp+814,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[3]),64);
            tracep->chgQData(oldp+816,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[4]),64);
            tracep->chgQData(oldp+818,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[5]),64);
            tracep->chgQData(oldp+820,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[6]),64);
            tracep->chgQData(oldp+822,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[7]),64);
            tracep->chgQData(oldp+824,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[8]),64);
            tracep->chgQData(oldp+826,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[9]),64);
            tracep->chgQData(oldp+828,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[10]),64);
            tracep->chgQData(oldp+830,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[11]),64);
            tracep->chgQData(oldp+832,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[12]),64);
            tracep->chgQData(oldp+834,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[13]),64);
            tracep->chgQData(oldp+836,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[14]),64);
            tracep->chgQData(oldp+838,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[15]),64);
            tracep->chgQData(oldp+840,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[16]),64);
            tracep->chgQData(oldp+842,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[17]),64);
            tracep->chgQData(oldp+844,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[18]),64);
            tracep->chgQData(oldp+846,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[19]),64);
            tracep->chgQData(oldp+848,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[20]),64);
            tracep->chgQData(oldp+850,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[21]),64);
            tracep->chgQData(oldp+852,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[22]),64);
            tracep->chgQData(oldp+854,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[23]),64);
            tracep->chgQData(oldp+856,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[24]),64);
            tracep->chgQData(oldp+858,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[25]),64);
            tracep->chgQData(oldp+860,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[26]),64);
            tracep->chgQData(oldp+862,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[27]),64);
            tracep->chgQData(oldp+864,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[28]),64);
            tracep->chgQData(oldp+866,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[29]),64);
            tracep->chgQData(oldp+868,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[30]),64);
            tracep->chgQData(oldp+870,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[31]),64);
            tracep->chgQData(oldp+872,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mstatus_reg),64);
            tracep->chgQData(oldp+874,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mepc_reg),64);
            tracep->chgQData(oldp+876,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mtvec_reg),64);
            tracep->chgQData(oldp+878,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mcause_reg),64);
            tracep->chgQData(oldp+880,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mie_reg),64);
            tracep->chgQData(oldp+882,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mip_reg),64);
            tracep->chgQData(oldp+884,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mscratch_reg),64);
            tracep->chgQData(oldp+886,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mstatus_latch),64);
            tracep->chgQData(oldp+888,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mepc_latch),64);
            tracep->chgQData(oldp+890,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mtvec_latch),64);
            tracep->chgQData(oldp+892,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mcause_latch),64);
            tracep->chgQData(oldp+894,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mie_latch),64);
            tracep->chgQData(oldp+896,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mip_latch),64);
            tracep->chgQData(oldp+898,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mscratch_latch),64);
            tracep->chgQData(oldp+900,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mepc_timeint_reg),64);
            tracep->chgQData(oldp+902,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mcause_timeint_reg),64);
            tracep->chgQData(oldp+904,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__pc_wb_reg),64);
            tracep->chgIData(oldp+906,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__inst_wb_reg),32);
            tracep->chgWData(oldp+907,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_imm____pinNumber4),335);
            tracep->chgWData(oldp+918,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__pair_list[0]),67);
            tracep->chgWData(oldp+921,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__pair_list[1]),67);
            tracep->chgWData(oldp+924,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__pair_list[2]),67);
            tracep->chgWData(oldp+927,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__pair_list[3]),67);
            tracep->chgWData(oldp+930,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__pair_list[4]),67);
            tracep->chgCData(oldp+933,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__key_list[0]),3);
            tracep->chgCData(oldp+934,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__key_list[1]),3);
            tracep->chgCData(oldp+935,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__key_list[2]),3);
            tracep->chgCData(oldp+936,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__key_list[3]),3);
            tracep->chgCData(oldp+937,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__key_list[4]),3);
            tracep->chgQData(oldp+938,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+940,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+942,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+944,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+946,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__data_list[4]),64);
            tracep->chgQData(oldp+948,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+950,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__hit));
            tracep->chgWData(oldp+951,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4),476);
            tracep->chgWData(oldp+966,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__pair_list[0]),68);
            tracep->chgWData(oldp+969,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__pair_list[1]),68);
            tracep->chgWData(oldp+972,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__pair_list[2]),68);
            tracep->chgWData(oldp+975,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__pair_list[3]),68);
            tracep->chgWData(oldp+978,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__pair_list[4]),68);
            tracep->chgWData(oldp+981,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__pair_list[5]),68);
            tracep->chgWData(oldp+984,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__pair_list[6]),68);
            tracep->chgCData(oldp+987,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__key_list[0]),4);
            tracep->chgCData(oldp+988,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__key_list[1]),4);
            tracep->chgCData(oldp+989,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__key_list[2]),4);
            tracep->chgCData(oldp+990,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__key_list[3]),4);
            tracep->chgCData(oldp+991,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__key_list[4]),4);
            tracep->chgCData(oldp+992,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__key_list[5]),4);
            tracep->chgCData(oldp+993,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__key_list[6]),4);
            tracep->chgQData(oldp+994,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+996,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+998,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+1000,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+1002,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__data_list[4]),64);
            tracep->chgQData(oldp+1004,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__data_list[5]),64);
            tracep->chgQData(oldp+1006,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__data_list[6]),64);
            tracep->chgQData(oldp+1008,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+1010,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__hit));
            tracep->chgWData(oldp+1011,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_value0____pinNumber4),136);
            tracep->chgWData(oldp+1016,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_value0__DOT__i0__DOT__pair_list[0]),68);
            tracep->chgWData(oldp+1019,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_value0__DOT__i0__DOT__pair_list[1]),68);
            tracep->chgCData(oldp+1022,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_value0__DOT__i0__DOT__key_list[0]),4);
            tracep->chgCData(oldp+1023,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_value0__DOT__i0__DOT__key_list[1]),4);
            tracep->chgQData(oldp+1024,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_value0__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+1026,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_value0__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+1028,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_value0__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+1030,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_value0__DOT__i0__DOT__hit));
            tracep->chgQData(oldp+1031,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__operation_a_forward),64);
            tracep->chgQData(oldp+1033,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__operation_b_forward),64);
            tracep->chgBit(oldp+1035,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_en));
            tracep->chgQData(oldp+1036,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__pc_branch_addr),64);
            tracep->chgWData(oldp+1038,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_c_mux____pinNumber4),264);
            tracep->chgWData(oldp+1047,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__pair_list[0]),66);
            tracep->chgWData(oldp+1050,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__pair_list[1]),66);
            tracep->chgWData(oldp+1053,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__pair_list[2]),66);
            tracep->chgWData(oldp+1056,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__pair_list[3]),66);
            tracep->chgCData(oldp+1059,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__key_list[0]),2);
            tracep->chgCData(oldp+1060,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__key_list[1]),2);
            tracep->chgCData(oldp+1061,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__key_list[2]),2);
            tracep->chgCData(oldp+1062,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__key_list[3]),2);
            tracep->chgQData(oldp+1063,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+1065,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+1067,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+1069,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+1071,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+1073,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__hit));
            tracep->chgWData(oldp+1074,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_d_mux____pinNumber4),264);
            tracep->chgWData(oldp+1083,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__pair_list[0]),66);
            tracep->chgWData(oldp+1086,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__pair_list[1]),66);
            tracep->chgWData(oldp+1089,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__pair_list[2]),66);
            tracep->chgWData(oldp+1092,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__pair_list[3]),66);
            tracep->chgCData(oldp+1095,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__key_list[0]),2);
            tracep->chgCData(oldp+1096,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__key_list[1]),2);
            tracep->chgCData(oldp+1097,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__key_list[2]),2);
            tracep->chgCData(oldp+1098,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__key_list[3]),2);
            tracep->chgQData(oldp+1099,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+1101,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+1103,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+1105,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+1107,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+1109,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__hit));
            tracep->chgIData(oldp+1110,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__branch_test____pinNumber4),24);
            tracep->chgCData(oldp+1111,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__pair_list[0]),4);
            tracep->chgCData(oldp+1112,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__pair_list[1]),4);
            tracep->chgCData(oldp+1113,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__pair_list[2]),4);
            tracep->chgCData(oldp+1114,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__pair_list[3]),4);
            tracep->chgCData(oldp+1115,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__pair_list[4]),4);
            tracep->chgCData(oldp+1116,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__pair_list[5]),4);
            tracep->chgCData(oldp+1117,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__key_list[0]),3);
            tracep->chgCData(oldp+1118,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__key_list[1]),3);
            tracep->chgCData(oldp+1119,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__key_list[2]),3);
            tracep->chgCData(oldp+1120,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__key_list[3]),3);
            tracep->chgCData(oldp+1121,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__key_list[4]),3);
            tracep->chgCData(oldp+1122,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__key_list[5]),3);
            tracep->chgBit(oldp+1123,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__data_list[0]));
            tracep->chgBit(oldp+1124,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__data_list[1]));
            tracep->chgBit(oldp+1125,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__data_list[2]));
            tracep->chgBit(oldp+1126,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__data_list[3]));
            tracep->chgBit(oldp+1127,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__data_list[4]));
            tracep->chgBit(oldp+1128,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__data_list[5]));
            tracep->chgBit(oldp+1129,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__lut_out));
            tracep->chgBit(oldp+1130,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__hit));
            tracep->chgQData(oldp+1131,(vlSelf->SimTop__DOT__clint__DOT__mtime),64);
            tracep->chgQData(oldp+1133,(vlSelf->SimTop__DOT__clint__DOT__mtimecmp),64);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgBit(oldp+1135,(vlSelf->SimTop__DOT__u_cpu__DOT__cmt_wen));
            tracep->chgCData(oldp+1136,(vlSelf->SimTop__DOT__u_cpu__DOT__cmt_wdest),8);
            tracep->chgQData(oldp+1137,(vlSelf->SimTop__DOT__u_cpu__DOT__cmt_wdata),64);
            tracep->chgQData(oldp+1139,(vlSelf->SimTop__DOT__u_cpu__DOT__cmt_pc),64);
            tracep->chgIData(oldp+1141,(vlSelf->SimTop__DOT__u_cpu__DOT__cmt_inst),32);
            tracep->chgBit(oldp+1142,(vlSelf->SimTop__DOT__u_cpu__DOT__cmt_valid));
            tracep->chgBit(oldp+1143,(vlSelf->SimTop__DOT__u_cpu__DOT__cmt_skip));
            tracep->chgBit(oldp+1144,(vlSelf->SimTop__DOT__u_cpu__DOT__trap));
            tracep->chgCData(oldp+1145,(vlSelf->SimTop__DOT__u_cpu__DOT__trap_code),8);
            tracep->chgQData(oldp+1146,(vlSelf->SimTop__DOT__u_cpu__DOT__cycleCnt),64);
            tracep->chgQData(oldp+1148,(vlSelf->SimTop__DOT__u_cpu__DOT__instrCnt),64);
            tracep->chgQData(oldp+1150,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[0]),64);
            tracep->chgQData(oldp+1152,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[1]),64);
            tracep->chgQData(oldp+1154,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[2]),64);
            tracep->chgQData(oldp+1156,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[3]),64);
            tracep->chgQData(oldp+1158,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[4]),64);
            tracep->chgQData(oldp+1160,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[5]),64);
            tracep->chgQData(oldp+1162,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[6]),64);
            tracep->chgQData(oldp+1164,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[7]),64);
            tracep->chgQData(oldp+1166,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[8]),64);
            tracep->chgQData(oldp+1168,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[9]),64);
            tracep->chgQData(oldp+1170,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[10]),64);
            tracep->chgQData(oldp+1172,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[11]),64);
            tracep->chgQData(oldp+1174,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[12]),64);
            tracep->chgQData(oldp+1176,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[13]),64);
            tracep->chgQData(oldp+1178,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[14]),64);
            tracep->chgQData(oldp+1180,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[15]),64);
            tracep->chgQData(oldp+1182,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[16]),64);
            tracep->chgQData(oldp+1184,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[17]),64);
            tracep->chgQData(oldp+1186,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[18]),64);
            tracep->chgQData(oldp+1188,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[19]),64);
            tracep->chgQData(oldp+1190,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[20]),64);
            tracep->chgQData(oldp+1192,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[21]),64);
            tracep->chgQData(oldp+1194,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[22]),64);
            tracep->chgQData(oldp+1196,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[23]),64);
            tracep->chgQData(oldp+1198,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[24]),64);
            tracep->chgQData(oldp+1200,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[25]),64);
            tracep->chgQData(oldp+1202,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[26]),64);
            tracep->chgQData(oldp+1204,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[27]),64);
            tracep->chgQData(oldp+1206,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[28]),64);
            tracep->chgQData(oldp+1208,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[29]),64);
            tracep->chgQData(oldp+1210,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[30]),64);
            tracep->chgQData(oldp+1212,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[31]),64);
            tracep->chgQData(oldp+1214,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                        [0U]),64);
            tracep->chgQData(oldp+1216,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                        [1U]),64);
            tracep->chgQData(oldp+1218,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                        [2U]),64);
            tracep->chgQData(oldp+1220,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                        [3U]),64);
            tracep->chgQData(oldp+1222,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                        [4U]),64);
            tracep->chgQData(oldp+1224,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                        [5U]),64);
            tracep->chgQData(oldp+1226,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                        [6U]),64);
            tracep->chgQData(oldp+1228,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                        [7U]),64);
            tracep->chgQData(oldp+1230,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                        [8U]),64);
            tracep->chgQData(oldp+1232,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                        [9U]),64);
            tracep->chgQData(oldp+1234,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                        [0xaU]),64);
            tracep->chgQData(oldp+1236,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                        [0xbU]),64);
            tracep->chgQData(oldp+1238,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                        [0xcU]),64);
            tracep->chgQData(oldp+1240,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                        [0xdU]),64);
            tracep->chgQData(oldp+1242,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                        [0xeU]),64);
            tracep->chgQData(oldp+1244,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                        [0xfU]),64);
            tracep->chgQData(oldp+1246,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                        [0x10U]),64);
            tracep->chgQData(oldp+1248,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                        [0x11U]),64);
            tracep->chgQData(oldp+1250,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                        [0x12U]),64);
            tracep->chgQData(oldp+1252,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                        [0x13U]),64);
            tracep->chgQData(oldp+1254,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                        [0x14U]),64);
            tracep->chgQData(oldp+1256,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                        [0x15U]),64);
            tracep->chgQData(oldp+1258,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                        [0x16U]),64);
            tracep->chgQData(oldp+1260,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                        [0x17U]),64);
            tracep->chgQData(oldp+1262,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                        [0x18U]),64);
            tracep->chgQData(oldp+1264,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                        [0x19U]),64);
            tracep->chgQData(oldp+1266,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                        [0x1aU]),64);
            tracep->chgQData(oldp+1268,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                        [0x1bU]),64);
            tracep->chgQData(oldp+1270,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                        [0x1cU]),64);
            tracep->chgQData(oldp+1272,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                        [0x1dU]),64);
            tracep->chgQData(oldp+1274,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                        [0x1eU]),64);
            tracep->chgQData(oldp+1276,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                        [0x1fU]),64);
            tracep->chgCData(oldp+1278,((7U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__trap_code))),3);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
            tracep->chgBit(oldp+1279,(vlSelf->SimTop__DOT__axi_rw__DOT__trans_done));
            tracep->chgBit(oldp+1280,(vlSelf->SimTop__DOT__axi_rw__DOT__r_hs));
            tracep->chgBit(oldp+1281,(vlSelf->SimTop__DOT__axi_rw__DOT__w_hs));
            tracep->chgBit(oldp+1282,(vlSelf->SimTop__DOT__axi_rw__DOT__b_hs));
            tracep->chgBit(oldp+1283,(vlSelf->SimTop__DOT__axi_rw__DOT__r_done));
        }
        tracep->chgBit(oldp+1284,(vlSelf->clock));
        tracep->chgBit(oldp+1285,(vlSelf->reset));
        tracep->chgQData(oldp+1286,(vlSelf->io_logCtrl_log_begin),64);
        tracep->chgQData(oldp+1288,(vlSelf->io_logCtrl_log_end),64);
        tracep->chgQData(oldp+1290,(vlSelf->io_logCtrl_log_level),64);
        tracep->chgBit(oldp+1292,(vlSelf->io_perfInfo_clean));
        tracep->chgBit(oldp+1293,(vlSelf->io_perfInfo_dump));
        tracep->chgBit(oldp+1294,(vlSelf->io_uart_out_valid));
        tracep->chgCData(oldp+1295,(vlSelf->io_uart_out_ch),8);
        tracep->chgBit(oldp+1296,(vlSelf->io_uart_in_valid));
        tracep->chgCData(oldp+1297,(vlSelf->io_uart_in_ch),8);
        tracep->chgBit(oldp+1298,(vlSelf->io_memAXI_0_aw_ready));
        tracep->chgBit(oldp+1299,(vlSelf->io_memAXI_0_aw_valid));
        tracep->chgIData(oldp+1300,(vlSelf->io_memAXI_0_aw_bits_addr),32);
        tracep->chgCData(oldp+1301,(vlSelf->io_memAXI_0_aw_bits_prot),3);
        tracep->chgCData(oldp+1302,(vlSelf->io_memAXI_0_aw_bits_id),4);
        tracep->chgBit(oldp+1303,(vlSelf->io_memAXI_0_aw_bits_user));
        tracep->chgCData(oldp+1304,(vlSelf->io_memAXI_0_aw_bits_len),8);
        tracep->chgCData(oldp+1305,(vlSelf->io_memAXI_0_aw_bits_size),3);
        tracep->chgCData(oldp+1306,(vlSelf->io_memAXI_0_aw_bits_burst),2);
        tracep->chgBit(oldp+1307,(vlSelf->io_memAXI_0_aw_bits_lock));
        tracep->chgCData(oldp+1308,(vlSelf->io_memAXI_0_aw_bits_cache),4);
        tracep->chgCData(oldp+1309,(vlSelf->io_memAXI_0_aw_bits_qos),4);
        tracep->chgBit(oldp+1310,(vlSelf->io_memAXI_0_w_ready));
        tracep->chgBit(oldp+1311,(vlSelf->io_memAXI_0_w_valid));
        tracep->chgQData(oldp+1312,(vlSelf->io_memAXI_0_w_bits_data[0]),64);
        tracep->chgQData(oldp+1314,(vlSelf->io_memAXI_0_w_bits_data[1]),64);
        tracep->chgQData(oldp+1316,(vlSelf->io_memAXI_0_w_bits_data[2]),64);
        tracep->chgQData(oldp+1318,(vlSelf->io_memAXI_0_w_bits_data[3]),64);
        tracep->chgCData(oldp+1320,(vlSelf->io_memAXI_0_w_bits_strb),8);
        tracep->chgBit(oldp+1321,(vlSelf->io_memAXI_0_w_bits_last));
        tracep->chgBit(oldp+1322,(vlSelf->io_memAXI_0_b_ready));
        tracep->chgBit(oldp+1323,(vlSelf->io_memAXI_0_b_valid));
        tracep->chgCData(oldp+1324,(vlSelf->io_memAXI_0_b_bits_resp),2);
        tracep->chgCData(oldp+1325,(vlSelf->io_memAXI_0_b_bits_id),4);
        tracep->chgBit(oldp+1326,(vlSelf->io_memAXI_0_b_bits_user));
        tracep->chgBit(oldp+1327,(vlSelf->io_memAXI_0_ar_ready));
        tracep->chgBit(oldp+1328,(vlSelf->io_memAXI_0_ar_valid));
        tracep->chgIData(oldp+1329,(vlSelf->io_memAXI_0_ar_bits_addr),32);
        tracep->chgCData(oldp+1330,(vlSelf->io_memAXI_0_ar_bits_prot),3);
        tracep->chgCData(oldp+1331,(vlSelf->io_memAXI_0_ar_bits_id),4);
        tracep->chgBit(oldp+1332,(vlSelf->io_memAXI_0_ar_bits_user));
        tracep->chgCData(oldp+1333,(vlSelf->io_memAXI_0_ar_bits_len),8);
        tracep->chgCData(oldp+1334,(vlSelf->io_memAXI_0_ar_bits_size),3);
        tracep->chgCData(oldp+1335,(vlSelf->io_memAXI_0_ar_bits_burst),2);
        tracep->chgBit(oldp+1336,(vlSelf->io_memAXI_0_ar_bits_lock));
        tracep->chgCData(oldp+1337,(vlSelf->io_memAXI_0_ar_bits_cache),4);
        tracep->chgCData(oldp+1338,(vlSelf->io_memAXI_0_ar_bits_qos),4);
        tracep->chgBit(oldp+1339,(vlSelf->io_memAXI_0_r_ready));
        tracep->chgBit(oldp+1340,(vlSelf->io_memAXI_0_r_valid));
        tracep->chgCData(oldp+1341,(vlSelf->io_memAXI_0_r_bits_resp),2);
        tracep->chgQData(oldp+1342,(vlSelf->io_memAXI_0_r_bits_data[0]),64);
        tracep->chgQData(oldp+1344,(vlSelf->io_memAXI_0_r_bits_data[1]),64);
        tracep->chgQData(oldp+1346,(vlSelf->io_memAXI_0_r_bits_data[2]),64);
        tracep->chgQData(oldp+1348,(vlSelf->io_memAXI_0_r_bits_data[3]),64);
        tracep->chgBit(oldp+1350,(vlSelf->io_memAXI_0_r_bits_last));
        tracep->chgCData(oldp+1351,(vlSelf->io_memAXI_0_r_bits_id),4);
        tracep->chgBit(oldp+1352,(vlSelf->io_memAXI_0_r_bits_user));
        tracep->chgQData(oldp+1353,(vlSelf->io_memAXI_0_r_bits_data
                                    [0U]),64);
        tracep->chgBit(oldp+1355,((1U & (~ (IData)(vlSelf->reset)))));
        VL_EXTEND_WQ(65,64, __Vtemp1002, vlSelf->io_memAXI_0_r_bits_data
                     [0U]);
        tracep->chgWData(oldp+1356,(__Vtemp1002),65);
        tracep->chgBit(oldp+1359,(((IData)(vlSelf->io_memAXI_0_aw_ready) 
                                   & (1U == (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__w_state)))));
        tracep->chgBit(oldp+1360,(((IData)(vlSelf->io_memAXI_0_ar_ready) 
                                   & (1U == (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__r_state)))));
        tracep->chgBit(oldp+1361,((((IData)(vlSelf->reset) 
                                    | ((IData)(vlSelf->SimTop__DOT__rw_req) 
                                       & (0U == (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__w_state)))) 
                                   | ((~ (IData)(vlSelf->SimTop__DOT__rw_req)) 
                                      & (0U == (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__r_state))))));
        tracep->chgBit(oldp+1362,(((0U != (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__len)) 
                                   & ((IData)(vlSelf->SimTop__DOT__axi_rw__DOT__w_hs) 
                                      | (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__r_hs)))));
        tracep->chgBit(oldp+1363,(((IData)(vlSelf->SimTop__DOT__axi_rw__DOT__trans_done) 
                                   | (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__rw_ready))));
        tracep->chgBit(oldp+1364,((1U & ((IData)(vlSelf->SimTop__DOT__rw_req)
                                          ? (IData)(vlSelf->io_memAXI_0_b_bits_resp)
                                          : (IData)(vlSelf->io_memAXI_0_r_bits_resp)))));
        __Vtemp1003[0U] = 0xffffffffU;
        __Vtemp1003[1U] = 0U;
        __Vtemp1003[2U] = 0U;
        __Vtemp1003[3U] = 0U;
        VL_EXTEND_WQ(65,64, __Vtemp1004, vlSelf->SimTop__DOT__rw_addr);
        VL_SHIFTL_WWI(128,128,6, __Vtemp1005, __Vtemp1003, 
                      (0x38U & (__Vtemp1004[0U] << 3U)));
        VL_EXTEND_WQ(65,64, __Vtemp1006, vlSelf->SimTop__DOT__rw_addr);
        tracep->chgQData(oldp+1365,(((vlSelf->io_memAXI_0_r_bits_data
                                      [0U] & (((QData)((IData)(
                                                               __Vtemp1005[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                __Vtemp1005[0U])))) 
                                     >> (0x38U & (__Vtemp1006[0U] 
                                                  << 3U)))),64);
        __Vtemp1007[0U] = 0xffffffffU;
        __Vtemp1007[1U] = 0U;
        __Vtemp1007[2U] = 0U;
        __Vtemp1007[3U] = 0U;
        VL_EXTEND_WQ(65,64, __Vtemp1008, vlSelf->SimTop__DOT__rw_addr);
        VL_SHIFTL_WWI(128,128,6, __Vtemp1009, __Vtemp1007, 
                      (0x38U & (__Vtemp1008[0U] << 3U)));
        VL_EXTEND_WQ(65,64, __Vtemp1010, vlSelf->SimTop__DOT__rw_addr);
        tracep->chgQData(oldp+1367,(((vlSelf->io_memAXI_0_r_bits_data
                                      [0U] & (((QData)((IData)(
                                                               __Vtemp1009[3U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                __Vtemp1009[2U])))) 
                                     << (0x3fU & (- 
                                                  (0x38U 
                                                   & (__Vtemp1010[0U] 
                                                      << 3U)))))),64);
    }
}

void VSimTop___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VSimTop___024root* const __restrict vlSelf = static_cast<VSimTop___024root*>(voidSelf);
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    }
}

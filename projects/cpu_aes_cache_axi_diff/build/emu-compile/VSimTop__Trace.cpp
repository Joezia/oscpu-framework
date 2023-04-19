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
    VlWide<3>/*95:0*/ __Vtemp1047;
    VlWide<4>/*127:0*/ __Vtemp1051;
    VlWide<4>/*127:0*/ __Vtemp1053;
    VlWide<4>/*127:0*/ __Vtemp1055;
    VlWide<3>/*95:0*/ __Vtemp1056;
    VlWide<3>/*95:0*/ __Vtemp1057;
    VlWide<3>/*95:0*/ __Vtemp1058;
    VlWide<3>/*95:0*/ __Vtemp1059;
    VlWide<3>/*95:0*/ __Vtemp1060;
    VlWide<3>/*95:0*/ __Vtemp1061;
    VlWide<3>/*95:0*/ __Vtemp1062;
    VlWide<4>/*127:0*/ __Vtemp1063;
    VlWide<3>/*95:0*/ __Vtemp1064;
    VlWide<4>/*127:0*/ __Vtemp1065;
    VlWide<4>/*127:0*/ __Vtemp1066;
    VlWide<3>/*95:0*/ __Vtemp1067;
    VlWide<4>/*127:0*/ __Vtemp1068;
    VlWide<4>/*127:0*/ __Vtemp1069;
    VlWide<3>/*95:0*/ __Vtemp1070;
    VlWide<4>/*127:0*/ __Vtemp1071;
    VlWide<4>/*127:0*/ __Vtemp1076;
    VlWide<3>/*95:0*/ __Vtemp1077;
    VlWide<3>/*95:0*/ __Vtemp1078;
    VlWide<4>/*127:0*/ __Vtemp1079;
    VlWide<3>/*95:0*/ __Vtemp1080;
    VlWide<4>/*127:0*/ __Vtemp1081;
    VlWide<3>/*95:0*/ __Vtemp1082;
    VlWide<4>/*127:0*/ __Vtemp1083;
    VlWide<3>/*95:0*/ __Vtemp1084;
    VlWide<4>/*127:0*/ __Vtemp1085;
    VlWide<3>/*95:0*/ __Vtemp1086;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
            tracep->chgCData(oldp+0,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__rcon[0]),8);
            tracep->chgCData(oldp+1,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__rcon[1]),8);
            tracep->chgCData(oldp+2,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__rcon[2]),8);
            tracep->chgCData(oldp+3,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__rcon[3]),8);
            tracep->chgCData(oldp+4,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__rcon[4]),8);
            tracep->chgCData(oldp+5,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__rcon[5]),8);
            tracep->chgCData(oldp+6,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__rcon[6]),8);
            tracep->chgCData(oldp+7,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__rcon[7]),8);
            tracep->chgCData(oldp+8,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__rcon[8]),8);
            tracep->chgCData(oldp+9,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__rcon[9]),8);
            tracep->chgCData(oldp+10,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__rcon[10]),8);
            tracep->chgCData(oldp+11,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__rcon[11]),8);
            tracep->chgCData(oldp+12,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__rcon[12]),8);
            tracep->chgCData(oldp+13,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__rcon[13]),8);
            tracep->chgCData(oldp+14,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__rcon[14]),8);
            tracep->chgCData(oldp+15,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__rcon[15]),8);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+16,((1U == (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__w_state))));
            VL_EXTEND_WQ(65,64, __Vtemp1047, vlSelf->SimTop__DOT__rw_addr);
            tracep->chgIData(oldp+17,((0xfffffff8U 
                                       & __Vtemp1047[0U])),32);
            tracep->chgBit(oldp+18,((2U == (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__w_state))));
            tracep->chgBit(oldp+19,((3U == (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__w_state))));
            tracep->chgBit(oldp+20,((1U == (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__r_state))));
            tracep->chgCData(oldp+21,(((1U == (IData)(vlSelf->SimTop__DOT__arbitrating__DOT__arb_state))
                                        ? 0U : (IData)(vlSelf->SimTop__DOT__icache_len))),8);
            tracep->chgBit(oldp+22,((2U == (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__r_state))));
            tracep->chgQData(oldp+23,((((((- (QData)((IData)(vlSelf->SimTop__DOT__u_icache__DOT__hit_0))) 
                                          & ((1U & (IData)(
                                                           (vlSelf->SimTop__DOT__u_cpu__DOT__pc 
                                                            >> 3U)))
                                              ? (((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__iram_0_data_read_128[3U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->SimTop__DOT__iram_0_data_read_128[2U])))
                                              : (((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__iram_0_data_read_128[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->SimTop__DOT__iram_0_data_read_128[0U]))))) 
                                         | ((- (QData)((IData)(vlSelf->SimTop__DOT__u_icache__DOT__hit_1))) 
                                            & ((1U 
                                                & (IData)(
                                                          (vlSelf->SimTop__DOT__u_cpu__DOT__pc 
                                                           >> 3U)))
                                                ? (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__iram_1_data_read_128[3U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->SimTop__DOT__iram_1_data_read_128[2U])))
                                                : (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__iram_1_data_read_128[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->SimTop__DOT__iram_1_data_read_128[0U])))))) 
                                        | ((- (QData)((IData)(vlSelf->SimTop__DOT__u_icache__DOT__hit_2))) 
                                           & ((1U & (IData)(
                                                            (vlSelf->SimTop__DOT__u_cpu__DOT__pc 
                                                             >> 3U)))
                                               ? (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__iram_2_data_read_128[3U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->SimTop__DOT__iram_2_data_read_128[2U])))
                                               : (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__iram_2_data_read_128[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->SimTop__DOT__iram_2_data_read_128[0U])))))) 
                                       | ((- (QData)((IData)(vlSelf->SimTop__DOT__u_icache__DOT__hit_3))) 
                                          & ((1U & (IData)(
                                                           (vlSelf->SimTop__DOT__u_cpu__DOT__pc 
                                                            >> 3U)))
                                              ? (((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__iram_3_data_read_128[3U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->SimTop__DOT__iram_3_data_read_128[2U])))
                                              : (((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__iram_3_data_read_128[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->SimTop__DOT__iram_3_data_read_128[0U]))))))),64);
            tracep->chgQData(oldp+25,((0xfffffffffffffff8ULL 
                                       & vlSelf->SimTop__DOT__u_cpu__DOT__pc)),64);
            tracep->chgCData(oldp+27,(vlSelf->SimTop__DOT__axi_rw__DOT__rw_resp),2);
            tracep->chgBit(oldp+28,(vlSelf->SimTop__DOT__mem_valid));
            tracep->chgBit(oldp+29,(vlSelf->SimTop__DOT__u_cpu__DOT__write_mem_en_mem));
            tracep->chgQData(oldp+30,((0xfffffffffffffff8ULL 
                                       & vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)),64);
            tracep->chgQData(oldp+32,(vlSelf->SimTop__DOT__mem_data_read),64);
            tracep->chgBit(oldp+34,(vlSelf->SimTop__DOT__icache_valid));
            tracep->chgQData(oldp+35,(vlSelf->SimTop__DOT__icache_addr),64);
            tracep->chgCData(oldp+37,(vlSelf->SimTop__DOT__icache_len),8);
            tracep->chgBit(oldp+38,(vlSelf->SimTop__DOT__icache_req));
            tracep->chgQData(oldp+39,(vlSelf->SimTop__DOT__icache_data_read),64);
            tracep->chgBit(oldp+41,(vlSelf->SimTop__DOT__icache_stall));
            tracep->chgBit(oldp+42,(vlSelf->SimTop__DOT__rw_valid));
            tracep->chgBit(oldp+43,(vlSelf->SimTop__DOT__axi_rw__DOT__rw_ready));
            tracep->chgBit(oldp+44,(vlSelf->SimTop__DOT__rw_req));
            tracep->chgQData(oldp+45,(vlSelf->SimTop__DOT__rw_addr),64);
            tracep->chgCData(oldp+47,(vlSelf->SimTop__DOT__arbitrating__DOT__arb_state),2);
            tracep->chgBit(oldp+48,(vlSelf->SimTop__DOT__arb_if_r_hs));
            tracep->chgBit(oldp+49,(vlSelf->SimTop__DOT__arb_if_trans_done));
            tracep->chgBit(oldp+50,(vlSelf->SimTop__DOT__arbitrating__DOT__zza_pulse_1));
            tracep->chgBit(oldp+51,(vlSelf->SimTop__DOT__axi_stall));
            tracep->chgBit(oldp+52,(((~ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__axi_stall_i)) 
                                     & ((0x7bU == vlSelf->SimTop__DOT__u_cpu__DOT__inst_wb) 
                                        | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__if_uart_wb)))));
            tracep->chgWData(oldp+53,(vlSelf->SimTop__DOT__iram_0_data_read_128),128);
            tracep->chgBit(oldp+57,(vlSelf->SimTop__DOT__iram_0_wen));
            if ((1U & (IData)((vlSelf->SimTop__DOT__u_icache__DOT__re_write_addr 
                               >> 3U)))) {
                __Vtemp1051[0U] = 0xffffffffU;
                __Vtemp1051[1U] = 0xffffffffU;
                __Vtemp1051[2U] = 0U;
                __Vtemp1051[3U] = 0U;
            } else {
                __Vtemp1051[0U] = 0U;
                __Vtemp1051[1U] = 0U;
                __Vtemp1051[2U] = 0xffffffffU;
                __Vtemp1051[3U] = 0xffffffffU;
            }
            tracep->chgWData(oldp+58,(__Vtemp1051),128);
            tracep->chgCData(oldp+62,(vlSelf->SimTop__DOT__iram_0_addr),6);
            VL_EXTEND_WQ(128,64, __Vtemp1053, vlSelf->SimTop__DOT__icache_data_read);
            if ((1U & (IData)((vlSelf->SimTop__DOT__u_icache__DOT__re_write_addr 
                               >> 3U)))) {
                __Vtemp1055[0U] = 0U;
                __Vtemp1055[1U] = 0U;
                __Vtemp1055[2U] = (IData)(vlSelf->SimTop__DOT__icache_data_read);
                __Vtemp1055[3U] = (IData)((vlSelf->SimTop__DOT__icache_data_read 
                                           >> 0x20U));
            } else {
                __Vtemp1055[0U] = __Vtemp1053[0U];
                __Vtemp1055[1U] = __Vtemp1053[1U];
                __Vtemp1055[2U] = __Vtemp1053[2U];
                __Vtemp1055[3U] = __Vtemp1053[3U];
            }
            tracep->chgWData(oldp+63,(__Vtemp1055),128);
            tracep->chgWData(oldp+67,(vlSelf->SimTop__DOT__iram_1_data_read_128),128);
            tracep->chgBit(oldp+71,(vlSelf->SimTop__DOT__iram_1_wen));
            tracep->chgCData(oldp+72,(vlSelf->SimTop__DOT__iram_1_addr),6);
            tracep->chgWData(oldp+73,(vlSelf->SimTop__DOT__iram_2_data_read_128),128);
            tracep->chgBit(oldp+77,(vlSelf->SimTop__DOT__iram_2_wen));
            tracep->chgCData(oldp+78,(vlSelf->SimTop__DOT__iram_2_addr),6);
            tracep->chgWData(oldp+79,(vlSelf->SimTop__DOT__iram_3_data_read_128),128);
            tracep->chgBit(oldp+83,(vlSelf->SimTop__DOT__iram_3_wen));
            tracep->chgCData(oldp+84,(vlSelf->SimTop__DOT__iram_3_addr),6);
            tracep->chgBit(oldp+85,(vlSelf->SimTop__DOT__u_cpu__DOT__clint_wen));
            tracep->chgBit(oldp+86,(((0x200U == (0xffffU 
                                                 & (IData)(
                                                           (vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem 
                                                            >> 0x10U)))) 
                                     & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__read_mem_en_mem))));
            tracep->chgQData(oldp+87,(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem),64);
            tracep->chgQData(oldp+89,(vlSelf->SimTop__DOT__clint_data_read),64);
            tracep->chgBit(oldp+91,((vlSelf->SimTop__DOT__clint__DOT__mtime 
                                     >= vlSelf->SimTop__DOT__clint__DOT__mtimecmp)));
            VL_EXTEND_WQ(65,64, __Vtemp1056, vlSelf->SimTop__DOT__rw_addr);
            tracep->chgWData(oldp+92,(__Vtemp1056),65);
            tracep->chgBit(oldp+95,(((IData)(vlSelf->SimTop__DOT__rw_valid) 
                                     & (IData)(vlSelf->SimTop__DOT__rw_req))));
            tracep->chgBit(oldp+96,(((IData)(vlSelf->SimTop__DOT__rw_valid) 
                                     & (~ (IData)(vlSelf->SimTop__DOT__rw_req)))));
            tracep->chgCData(oldp+97,(vlSelf->SimTop__DOT__axi_rw__DOT__w_state),2);
            tracep->chgCData(oldp+98,(vlSelf->SimTop__DOT__axi_rw__DOT__r_state),2);
            tracep->chgBit(oldp+99,((0U == (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__w_state))));
            tracep->chgBit(oldp+100,((0U == (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__r_state))));
            VL_EXTEND_WQ(65,64, __Vtemp1057, vlSelf->SimTop__DOT__rw_addr);
            tracep->chgBit(oldp+101,((0U == (7U & __Vtemp1057[0U]))));
            VL_EXTEND_WQ(65,64, __Vtemp1058, vlSelf->SimTop__DOT__rw_addr);
            tracep->chgCData(oldp+102,((7U & __Vtemp1058[0U])),4);
            VL_EXTEND_WQ(65,64, __Vtemp1059, vlSelf->SimTop__DOT__rw_addr);
            tracep->chgCData(oldp+103,((0xfU & ((IData)(3U) 
                                                + (7U 
                                                   & __Vtemp1059[0U])))),4);
            VL_EXTEND_WQ(65,64, __Vtemp1060, vlSelf->SimTop__DOT__rw_addr);
            tracep->chgBit(oldp+104,((1U & (((IData)(3U) 
                                             + (7U 
                                                & __Vtemp1060[0U])) 
                                            >> 3U))));
            tracep->chgCData(oldp+105,(vlSelf->SimTop__DOT__axi_rw__DOT__len),8);
            VL_EXTEND_WQ(65,64, __Vtemp1061, vlSelf->SimTop__DOT__rw_addr);
            tracep->chgCData(oldp+106,((0x38U & (__Vtemp1061[0U] 
                                                 << 3U))),6);
            VL_EXTEND_WQ(65,64, __Vtemp1062, vlSelf->SimTop__DOT__rw_addr);
            tracep->chgCData(oldp+107,((0x3fU & (- 
                                                 (0x38U 
                                                  & (__Vtemp1062[0U] 
                                                     << 3U))))),6);
            __Vtemp1063[0U] = 0xffffffffU;
            __Vtemp1063[1U] = 0U;
            __Vtemp1063[2U] = 0U;
            __Vtemp1063[3U] = 0U;
            VL_EXTEND_WQ(65,64, __Vtemp1064, vlSelf->SimTop__DOT__rw_addr);
            VL_SHIFTL_WWI(128,128,6, __Vtemp1065, __Vtemp1063, 
                          (0x38U & (__Vtemp1064[0U] 
                                    << 3U)));
            tracep->chgWData(oldp+108,(__Vtemp1065),128);
            __Vtemp1066[0U] = 0xffffffffU;
            __Vtemp1066[1U] = 0U;
            __Vtemp1066[2U] = 0U;
            __Vtemp1066[3U] = 0U;
            VL_EXTEND_WQ(65,64, __Vtemp1067, vlSelf->SimTop__DOT__rw_addr);
            VL_SHIFTL_WWI(128,128,6, __Vtemp1068, __Vtemp1066, 
                          (0x38U & (__Vtemp1067[0U] 
                                    << 3U)));
            tracep->chgQData(oldp+112,((((QData)((IData)(
                                                         __Vtemp1068[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          __Vtemp1068[0U])))),64);
            __Vtemp1069[0U] = 0xffffffffU;
            __Vtemp1069[1U] = 0U;
            __Vtemp1069[2U] = 0U;
            __Vtemp1069[3U] = 0U;
            VL_EXTEND_WQ(65,64, __Vtemp1070, vlSelf->SimTop__DOT__rw_addr);
            VL_SHIFTL_WWI(128,128,6, __Vtemp1071, __Vtemp1069, 
                          (0x38U & (__Vtemp1070[0U] 
                                    << 3U)));
            tracep->chgQData(oldp+114,((((QData)((IData)(
                                                         __Vtemp1071[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          __Vtemp1071[2U])))),64);
            tracep->chgBit(oldp+116,((0U == (IData)(vlSelf->SimTop__DOT__arbitrating__DOT__arb_state))));
            tracep->chgBit(oldp+117,((1U == (IData)(vlSelf->SimTop__DOT__arbitrating__DOT__arb_state))));
            tracep->chgBit(oldp+118,((2U == (IData)(vlSelf->SimTop__DOT__arbitrating__DOT__arb_state))));
            tracep->chgBit(oldp+119,(vlSelf->SimTop__DOT__arbitrating__DOT__situation_if_valid));
            tracep->chgBit(oldp+120,(vlSelf->SimTop__DOT__arbitrating__DOT__zza_pulse_3));
            tracep->chgCData(oldp+121,(vlSelf->SimTop__DOT__arbitrating__DOT__zza_count),2);
            tracep->chgBit(oldp+122,(vlSelf->SimTop__DOT__arbitrating__DOT__zza_pulse));
            tracep->chgBit(oldp+123,(((0U == (IData)(vlSelf->SimTop__DOT__arbitrating__DOT__arb_state))
                                       ? 0U : (1U & 
                                               ((1U 
                                                 == (IData)(vlSelf->SimTop__DOT__arbitrating__DOT__arb_state))
                                                 ? (IData)(vlSelf->SimTop__DOT__mem_valid)
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelf->SimTop__DOT__arbitrating__DOT__arb_state))
                                                  ? (IData)(vlSelf->SimTop__DOT__icache_valid)
                                                  : 0U))))));
            tracep->chgWData(oldp+124,(vlSelf->SimTop__DOT__u_icache__DOT__valid_0),128);
            tracep->chgWData(oldp+128,(vlSelf->SimTop__DOT__u_icache__DOT__valid_1),128);
            tracep->chgWData(oldp+132,(vlSelf->SimTop__DOT__u_icache__DOT__valid_2),128);
            tracep->chgWData(oldp+136,(vlSelf->SimTop__DOT__u_icache__DOT__valid_3),128);
            tracep->chgCData(oldp+140,(vlSelf->SimTop__DOT__u_icache__DOT__iram_sel),2);
            tracep->chgCData(oldp+141,((0x7fU & (IData)(
                                                        (vlSelf->SimTop__DOT__u_cpu__DOT__pc 
                                                         >> 3U)))),7);
            tracep->chgQData(oldp+142,((vlSelf->SimTop__DOT__u_cpu__DOT__pc 
                                        >> 0xaU)),54);
            tracep->chgBit(oldp+144,(vlSelf->SimTop__DOT__u_icache__DOT__hit_0));
            tracep->chgBit(oldp+145,(vlSelf->SimTop__DOT__u_icache__DOT__hit_1));
            tracep->chgBit(oldp+146,(vlSelf->SimTop__DOT__u_icache__DOT__hit_2));
            tracep->chgBit(oldp+147,(vlSelf->SimTop__DOT__u_icache__DOT__hit_3));
            tracep->chgCData(oldp+148,((((IData)(vlSelf->SimTop__DOT__u_icache__DOT__hit_3) 
                                         << 3U) | (
                                                   ((IData)(vlSelf->SimTop__DOT__u_icache__DOT__hit_2) 
                                                    << 2U) 
                                                   | (((IData)(vlSelf->SimTop__DOT__u_icache__DOT__hit_1) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->SimTop__DOT__u_icache__DOT__hit_0))))),4);
            tracep->chgBit(oldp+149,(vlSelf->SimTop__DOT__u_icache__DOT__hit));
            tracep->chgCData(oldp+150,(vlSelf->SimTop__DOT__u_icache__DOT__icache_state),2);
            tracep->chgBit(oldp+151,((0U == (IData)(vlSelf->SimTop__DOT__u_icache__DOT__icache_state))));
            tracep->chgBit(oldp+152,((1U == (IData)(vlSelf->SimTop__DOT__u_icache__DOT__icache_state))));
            tracep->chgBit(oldp+153,((2U == (IData)(vlSelf->SimTop__DOT__u_icache__DOT__icache_state))));
            tracep->chgQData(oldp+154,(vlSelf->SimTop__DOT__u_icache__DOT__addr_icache_read),64);
            tracep->chgCData(oldp+156,(vlSelf->SimTop__DOT__u_icache__DOT__re_write_state),2);
            tracep->chgBit(oldp+157,((0U == (IData)(vlSelf->SimTop__DOT__u_icache__DOT__re_write_state))));
            tracep->chgBit(oldp+158,((1U == (IData)(vlSelf->SimTop__DOT__u_icache__DOT__re_write_state))));
            tracep->chgQData(oldp+159,(vlSelf->SimTop__DOT__u_icache__DOT__re_write_addr),64);
            tracep->chgBit(oldp+161,(vlSelf->SimTop__DOT__u_icache__DOT__icache_valid_pre));
            tracep->chgBit(oldp+162,(((1U == (IData)(vlSelf->SimTop__DOT__u_icache__DOT__re_write_state)) 
                                      & (IData)(vlSelf->SimTop__DOT__arb_if_trans_done))));
            tracep->chgBit(oldp+163,(vlSelf->SimTop__DOT__u_icache__DOT__icache_stall_pre));
            tracep->chgBit(oldp+164,((1U & (~ (IData)(vlSelf->SimTop__DOT__iram_0_wen)))));
            __Vtemp1076[0U] = (~ ((1U & (IData)((vlSelf->SimTop__DOT__u_icache__DOT__re_write_addr 
                                                 >> 3U)))
                                   ? 0xffffffffU : 0U));
            __Vtemp1076[1U] = (~ ((1U & (IData)((vlSelf->SimTop__DOT__u_icache__DOT__re_write_addr 
                                                 >> 3U)))
                                   ? 0xffffffffU : 0U));
            __Vtemp1076[2U] = (~ ((1U & (IData)((vlSelf->SimTop__DOT__u_icache__DOT__re_write_addr 
                                                 >> 3U)))
                                   ? 0U : 0xffffffffU));
            __Vtemp1076[3U] = (~ ((1U & (IData)((vlSelf->SimTop__DOT__u_icache__DOT__re_write_addr 
                                                 >> 3U)))
                                   ? 0U : 0xffffffffU));
            tracep->chgWData(oldp+165,(__Vtemp1076),128);
            tracep->chgBit(oldp+169,((1U & (~ (IData)(vlSelf->SimTop__DOT__iram_1_wen)))));
            tracep->chgBit(oldp+170,((1U & (~ (IData)(vlSelf->SimTop__DOT__iram_2_wen)))));
            tracep->chgBit(oldp+171,((1U & (~ (IData)(vlSelf->SimTop__DOT__iram_3_wen)))));
            tracep->chgQData(oldp+172,(vlSelf->SimTop__DOT__u_cpu__DOT__pc_id),64);
            tracep->chgQData(oldp+174,(vlSelf->SimTop__DOT__u_cpu__DOT__pc_ex),64);
            tracep->chgQData(oldp+176,(vlSelf->SimTop__DOT__u_cpu__DOT__pc_mem),64);
            tracep->chgQData(oldp+178,(vlSelf->SimTop__DOT__u_cpu__DOT__pc_wb),64);
            tracep->chgIData(oldp+180,(vlSelf->SimTop__DOT__u_cpu__DOT__inst_id),32);
            tracep->chgIData(oldp+181,(vlSelf->SimTop__DOT__u_cpu__DOT__inst_if),32);
            tracep->chgIData(oldp+182,(vlSelf->SimTop__DOT__u_cpu__DOT__inst_ex),32);
            tracep->chgIData(oldp+183,(vlSelf->SimTop__DOT__u_cpu__DOT__inst_mem),32);
            tracep->chgIData(oldp+184,(vlSelf->SimTop__DOT__u_cpu__DOT__inst_wb),32);
            tracep->chgCData(oldp+185,(vlSelf->SimTop__DOT__u_cpu__DOT__optype),3);
            tracep->chgBit(oldp+186,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_op_id));
            tracep->chgBit(oldp+187,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_op_ex));
            tracep->chgBit(oldp+188,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_op_mem));
            tracep->chgBit(oldp+189,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_jalr));
            tracep->chgBit(oldp+190,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_regimm_ex));
            tracep->chgBit(oldp+191,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_regimm_mem));
            tracep->chgBit(oldp+192,(vlSelf->SimTop__DOT__u_cpu__DOT__reg1_ren));
            tracep->chgBit(oldp+193,(((((((((((((((
                                                   ((((((((((((((((((((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_aes64ds) 
                                                                        | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_aes64dsm)) 
                                                                       | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_aes64es)) 
                                                                      | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_aes64esm)) 
                                                                     | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_aes64ks2)) 
                                                                    | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_xor)) 
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
            tracep->chgBit(oldp+194,(vlSelf->SimTop__DOT__u_cpu__DOT__csr_ren));
            tracep->chgBit(oldp+195,(((((((((((((((
                                                   ((((((((((((((((((((((((((((((((((((((((((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_aes64ds) 
                                                                                | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_aes64dsm)) 
                                                                                | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_aes64es)) 
                                                                                | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_aes64im)) 
                                                                                | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_aes64esm)) 
                                                                                | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_aes64ks2)) 
                                                                                | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_aes64ks1i)) 
                                                                                | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrc)) 
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
            tracep->chgBit(oldp+196,(((((((((((((((
                                                   ((((((((((((((((((((((((((((((((((((((((((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_aes64ds) 
                                                                                | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_aes64dsm)) 
                                                                                | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_aes64es)) 
                                                                                | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_aes64im)) 
                                                                                | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_aes64esm)) 
                                                                                | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_aes64ks2)) 
                                                                                | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_aes64ks1i)) 
                                                                                | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrc)) 
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
            tracep->chgBit(oldp+197,(vlSelf->SimTop__DOT__u_cpu__DOT__wen_ex));
            tracep->chgBit(oldp+198,(vlSelf->SimTop__DOT__u_cpu__DOT__wen_mem));
            tracep->chgBit(oldp+199,(vlSelf->SimTop__DOT__u_cpu__DOT__wen_wb));
            tracep->chgBit(oldp+200,(((((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrc) 
                                          | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrs)) 
                                         | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrci)) 
                                        | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrsi)) 
                                       | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrwi)) 
                                      | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrw))));
            tracep->chgBit(oldp+201,(vlSelf->SimTop__DOT__u_cpu__DOT__csr_wen_ex));
            tracep->chgBit(oldp+202,(vlSelf->SimTop__DOT__u_cpu__DOT__csr_wen_mem));
            tracep->chgBit(oldp+203,(vlSelf->SimTop__DOT__u_cpu__DOT__csr_wen_wb));
            tracep->chgCData(oldp+204,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_id),5);
            tracep->chgCData(oldp+205,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_ex),5);
            tracep->chgCData(oldp+206,(vlSelf->SimTop__DOT__u_cpu__DOT__csr_alu_op_id),3);
            tracep->chgCData(oldp+207,(vlSelf->SimTop__DOT__u_cpu__DOT__csr_alu_op_ex),3);
            tracep->chgBit(oldp+208,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lui));
            tracep->chgBit(oldp+209,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_only_imm_ex));
            tracep->chgBit(oldp+210,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_auipc) 
                                       | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_jal)) 
                                      | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_jalr))));
            tracep->chgBit(oldp+211,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_pc_reg1_ex));
            tracep->chgBit(oldp+212,(((((((((((((((
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
            tracep->chgBit(oldp+213,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_imm_reg2_ex));
            tracep->chgBit(oldp+214,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrwi) 
                                       | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrci)) 
                                      | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrsi))));
            tracep->chgBit(oldp+215,(vlSelf->SimTop__DOT__u_cpu__DOT__csr_if_zimm_ex));
            tracep->chgCData(oldp+216,((0x1fU & (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                                 >> 7U))),5);
            tracep->chgCData(oldp+217,(vlSelf->SimTop__DOT__u_cpu__DOT__rd_ex),5);
            tracep->chgCData(oldp+218,(vlSelf->SimTop__DOT__u_cpu__DOT__rd_mem),5);
            tracep->chgCData(oldp+219,(vlSelf->SimTop__DOT__u_cpu__DOT__rd_wb),5);
            tracep->chgSData(oldp+220,((vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                        >> 0x14U)),12);
            tracep->chgSData(oldp+221,(vlSelf->SimTop__DOT__u_cpu__DOT__csr_ex),12);
            tracep->chgSData(oldp+222,(vlSelf->SimTop__DOT__u_cpu__DOT__csr_mem),12);
            tracep->chgSData(oldp+223,(vlSelf->SimTop__DOT__u_cpu__DOT__csr_wb),12);
            tracep->chgCData(oldp+224,((0x1fU & (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                                 >> 0xfU))),5);
            tracep->chgCData(oldp+225,(vlSelf->SimTop__DOT__u_cpu__DOT__zimm_ex),5);
            tracep->chgCData(oldp+226,(vlSelf->SimTop__DOT__u_cpu__DOT__rs1_ex),5);
            tracep->chgCData(oldp+227,((0x1fU & (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                                 >> 0x14U))),5);
            tracep->chgCData(oldp+228,(vlSelf->SimTop__DOT__u_cpu__DOT__rs2_ex),5);
            tracep->chgCData(oldp+229,(vlSelf->SimTop__DOT__u_cpu__DOT__rs2_mem),5);
            tracep->chgBit(oldp+230,((((((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lb) 
                                           | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lbu)) 
                                          | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lwu)) 
                                         | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lw)) 
                                        | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_ld)) 
                                       | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lh)) 
                                      | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lhu))));
            tracep->chgBit(oldp+231,(vlSelf->SimTop__DOT__u_cpu__DOT__read_mem_en_ex));
            tracep->chgBit(oldp+232,(vlSelf->SimTop__DOT__u_cpu__DOT__read_mem_en_mem));
            tracep->chgBit(oldp+233,(vlSelf->SimTop__DOT__u_cpu__DOT__read_mem_en_wb));
            tracep->chgBit(oldp+234,(((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sd) 
                                        | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sb)) 
                                       | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sw)) 
                                      | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sh))));
            tracep->chgBit(oldp+235,(vlSelf->SimTop__DOT__u_cpu__DOT__write_mem_en_ex));
            tracep->chgBit(oldp+236,(vlSelf->SimTop__DOT__u_cpu__DOT__write_mem_en_wb));
            tracep->chgCData(oldp+237,(vlSelf->SimTop__DOT__u_cpu__DOT__mem_ctrl_id),4);
            tracep->chgCData(oldp+238,(vlSelf->SimTop__DOT__u_cpu__DOT__mem_ctrl_ex),4);
            tracep->chgCData(oldp+239,(vlSelf->SimTop__DOT__u_cpu__DOT__mem_ctrl_mem),4);
            tracep->chgCData(oldp+240,(vlSelf->SimTop__DOT__u_cpu__DOT__value_width_ctrl_id),4);
            tracep->chgCData(oldp+241,(vlSelf->SimTop__DOT__u_cpu__DOT__value_width_ctrl_ex),4);
            tracep->chgCData(oldp+242,(vlSelf->SimTop__DOT__u_cpu__DOT__branch_type_id),3);
            tracep->chgCData(oldp+243,(vlSelf->SimTop__DOT__u_cpu__DOT__branch_type_ex),3);
            tracep->chgCData(oldp+244,(vlSelf->SimTop__DOT__u_cpu__DOT__branch_type_mem),3);
            tracep->chgCData(oldp+245,(vlSelf->SimTop__DOT__u_cpu__DOT__branch_type_wb),3);
            tracep->chgBit(oldp+246,(((((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_divw) 
                                          | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_divuw)) 
                                         | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_remw)) 
                                        | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_remuw)) 
                                       | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_srliw)) 
                                      | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_srlw))));
            tracep->chgBit(oldp+247,(vlSelf->SimTop__DOT__u_cpu__DOT__operator_a_w_ex));
            tracep->chgBit(oldp+248,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sraiw) 
                                      | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sraw))));
            tracep->chgBit(oldp+249,(vlSelf->SimTop__DOT__u_cpu__DOT__operator_a_w_s_ex));
            tracep->chgBit(oldp+250,(((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_divw) 
                                        | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_divuw)) 
                                       | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_remw)) 
                                      | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_remuw))));
            tracep->chgBit(oldp+251,(vlSelf->SimTop__DOT__u_cpu__DOT__operator_b_w_ex));
            tracep->chgBit(oldp+252,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sll) 
                                       | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sra)) 
                                      | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_srl))));
            tracep->chgBit(oldp+253,(vlSelf->SimTop__DOT__u_cpu__DOT__if_inst_sll_ex));
            tracep->chgBit(oldp+254,((0x73U == vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)));
            tracep->chgBit(oldp+255,(vlSelf->SimTop__DOT__u_cpu__DOT__environment_call_ex));
            tracep->chgBit(oldp+256,(vlSelf->SimTop__DOT__u_cpu__DOT__environment_call_mem));
            tracep->chgBit(oldp+257,(vlSelf->SimTop__DOT__u_cpu__DOT__environment_call_wb));
            tracep->chgBit(oldp+258,((0x30200073U == vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)));
            tracep->chgBit(oldp+259,(vlSelf->SimTop__DOT__u_cpu__DOT__m_mode_return_ex));
            tracep->chgBit(oldp+260,(vlSelf->SimTop__DOT__u_cpu__DOT__m_mode_return_mem));
            tracep->chgBit(oldp+261,(vlSelf->SimTop__DOT__u_cpu__DOT__m_mode_return_wb));
            tracep->chgBit(oldp+262,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_aes64ds));
            tracep->chgBit(oldp+263,(vlSelf->SimTop__DOT__u_cpu__DOT__if_inst_aes64ds_ex));
            tracep->chgBit(oldp+264,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_aes64dsm));
            tracep->chgBit(oldp+265,(vlSelf->SimTop__DOT__u_cpu__DOT__if_inst_aes64dsm_ex));
            tracep->chgBit(oldp+266,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_aes64es));
            tracep->chgBit(oldp+267,(vlSelf->SimTop__DOT__u_cpu__DOT__if_inst_aes64es_ex));
            tracep->chgBit(oldp+268,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_aes64esm));
            tracep->chgBit(oldp+269,(vlSelf->SimTop__DOT__u_cpu__DOT__if_inst_aes64esm_ex));
            tracep->chgBit(oldp+270,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_aes64im));
            tracep->chgBit(oldp+271,(vlSelf->SimTop__DOT__u_cpu__DOT__if_inst_aes64im_ex));
            tracep->chgBit(oldp+272,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_aes64ks1i));
            tracep->chgBit(oldp+273,(vlSelf->SimTop__DOT__u_cpu__DOT__if_inst_aes64ks1i_ex));
            tracep->chgBit(oldp+274,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_aes64ks2));
            tracep->chgBit(oldp+275,(vlSelf->SimTop__DOT__u_cpu__DOT__if_inst_aes64ks2_ex));
            tracep->chgCData(oldp+276,((0xfU & (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                                >> 0x14U))),4);
            tracep->chgCData(oldp+277,(vlSelf->SimTop__DOT__u_cpu__DOT__ks1i_rnum_ex),4);
            tracep->chgBit(oldp+278,(vlSelf->SimTop__DOT__u_cpu__DOT__ebreak_ex));
            tracep->chgBit(oldp+279,(vlSelf->SimTop__DOT__u_cpu__DOT__ebreak_mem));
            tracep->chgBit(oldp+280,(vlSelf->SimTop__DOT__u_cpu__DOT__ebreak_wb));
            tracep->chgQData(oldp+281,(vlSelf->SimTop__DOT__u_cpu__DOT__csr_value_writeback_mem),64);
            tracep->chgQData(oldp+283,(vlSelf->SimTop__DOT__u_cpu__DOT__csr_value_writeback_wb),64);
            tracep->chgBit(oldp+285,((((0xaU == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_ex)) 
                                       & (~ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_valid))) 
                                      | ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_ready) 
                                         & (2U != (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__div_state))))));
            tracep->chgQData(oldp+286,(vlSelf->SimTop__DOT__u_cpu__DOT__read_mem_value),64);
            tracep->chgBit(oldp+288,(vlSelf->SimTop__DOT__u_cpu__DOT__if_clint_mem));
            tracep->chgBit(oldp+289,(vlSelf->SimTop__DOT__u_cpu__DOT__if_clint_wb));
            tracep->chgBit(oldp+290,(vlSelf->SimTop__DOT__u_cpu__DOT__if_uart_mem));
            tracep->chgBit(oldp+291,(vlSelf->SimTop__DOT__u_cpu__DOT__if_uart_wb));
            tracep->chgQData(oldp+292,(vlSelf->SimTop__DOT__u_cpu__DOT__pc),64);
            tracep->chgQData(oldp+294,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_ex),64);
            tracep->chgQData(oldp+296,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_mem),64);
            tracep->chgQData(oldp+298,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_wb),64);
            tracep->chgQData(oldp+300,(vlSelf->SimTop__DOT__u_cpu__DOT__reg1_value_ex),64);
            tracep->chgQData(oldp+302,(vlSelf->SimTop__DOT__u_cpu__DOT__reg2_value_ex),64);
            tracep->chgQData(oldp+304,(vlSelf->SimTop__DOT__u_cpu__DOT__reg2_value_mem),64);
            tracep->chgQData(oldp+306,(vlSelf->SimTop__DOT__u_cpu__DOT__csr_value_ex),64);
            tracep->chgQData(oldp+308,(vlSelf->SimTop__DOT__u_cpu__DOT__reg_write_value_wb),64);
            tracep->chgBit(oldp+310,(vlSelf->SimTop__DOT__u_cpu__DOT__m_time_interrupt));
            tracep->chgBit(oldp+311,(vlSelf->SimTop__DOT__u_cpu__DOT__m_time_interrupt_trigger));
            tracep->chgQData(oldp+312,(vlSelf->SimTop__DOT__u_cpu__DOT__imm_id),64);
            tracep->chgQData(oldp+314,(vlSelf->SimTop__DOT__u_cpu__DOT__imm_ex),64);
            tracep->chgQData(oldp+316,(vlSelf->SimTop__DOT__u_cpu__DOT__sext_read_mem_value_mem),64);
            tracep->chgQData(oldp+318,(vlSelf->SimTop__DOT__u_cpu__DOT__sext_read_mem_value_wb),64);
            tracep->chgQData(oldp+320,(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_wb),64);
            tracep->chgBit(oldp+322,(vlSelf->SimTop__DOT__u_cpu__DOT__pipeline_stall_ex));
            tracep->chgBit(oldp+323,(vlSelf->SimTop__DOT__u_cpu__DOT__pipeline_stall_mem));
            tracep->chgBit(oldp+324,(vlSelf->SimTop__DOT__u_cpu__DOT__pipeline_stall_wb));
            tracep->chgQData(oldp+325,(vlSelf->SimTop__DOT__u_cpu__DOT__reg_write_value_mem),64);
            tracep->chgBit(oldp+327,(vlSelf->SimTop__DOT__u_cpu__DOT__axi_stall_i));
            tracep->chgBit(oldp+328,(vlSelf->SimTop__DOT__u_cpu__DOT__device_stall));
            tracep->chgBit(oldp+329,(vlSelf->SimTop__DOT__u_cpu__DOT__inst_valid_3));
            tracep->chgBit(oldp+330,((((((0x7bU == vlSelf->SimTop__DOT__u_cpu__DOT__inst_wb) 
                                         | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__m_time_interrupt)) 
                                        | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__if_clint_wb)) 
                                       | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__if_uart_wb)) 
                                      | (0xb00U == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__csr_wb)))));
            tracep->chgCData(oldp+331,((0x7fU & vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)),7);
            tracep->chgCData(oldp+332,((7U & (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                              >> 0xcU))),3);
            tracep->chgBit(oldp+333,((0U == vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)));
            tracep->chgBit(oldp+334,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrc));
            tracep->chgBit(oldp+335,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrci));
            tracep->chgBit(oldp+336,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrs));
            tracep->chgBit(oldp+337,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrsi));
            tracep->chgBit(oldp+338,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrw));
            tracep->chgBit(oldp+339,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrwi));
            tracep->chgBit(oldp+340,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_addi));
            tracep->chgBit(oldp+341,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_xor));
            tracep->chgBit(oldp+342,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_xori));
            tracep->chgBit(oldp+343,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_ori));
            tracep->chgBit(oldp+344,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_addiw));
            tracep->chgBit(oldp+345,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_addw));
            tracep->chgBit(oldp+346,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_subw));
            tracep->chgBit(oldp+347,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_mul));
            tracep->chgBit(oldp+348,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_mulw));
            tracep->chgBit(oldp+349,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_divw));
            tracep->chgBit(oldp+350,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_divuw));
            tracep->chgBit(oldp+351,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_remw));
            tracep->chgBit(oldp+352,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_remuw));
            tracep->chgBit(oldp+353,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sub));
            tracep->chgBit(oldp+354,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_add));
            tracep->chgBit(oldp+355,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sll));
            tracep->chgBit(oldp+356,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_slli));
            tracep->chgBit(oldp+357,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_slliw));
            tracep->chgBit(oldp+358,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_srli));
            tracep->chgBit(oldp+359,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_srliw));
            tracep->chgBit(oldp+360,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_andi));
            tracep->chgBit(oldp+361,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_and));
            tracep->chgBit(oldp+362,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_or));
            tracep->chgBit(oldp+363,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_srai));
            tracep->chgBit(oldp+364,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sraiw));
            tracep->chgBit(oldp+365,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sra));
            tracep->chgBit(oldp+366,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sraw));
            tracep->chgBit(oldp+367,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_srl));
            tracep->chgBit(oldp+368,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_srlw));
            tracep->chgBit(oldp+369,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sllw));
            tracep->chgBit(oldp+370,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_auipc));
            tracep->chgBit(oldp+371,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_jal));
            tracep->chgBit(oldp+372,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_slti));
            tracep->chgBit(oldp+373,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sltiu));
            tracep->chgBit(oldp+374,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sltu));
            tracep->chgBit(oldp+375,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_slt));
            tracep->chgBit(oldp+376,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_beq));
            tracep->chgBit(oldp+377,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_bne));
            tracep->chgBit(oldp+378,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_bge));
            tracep->chgBit(oldp+379,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_bgeu));
            tracep->chgBit(oldp+380,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_blt));
            tracep->chgBit(oldp+381,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_bltu));
            tracep->chgBit(oldp+382,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sd));
            tracep->chgBit(oldp+383,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sw));
            tracep->chgBit(oldp+384,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sh));
            tracep->chgBit(oldp+385,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sb));
            tracep->chgBit(oldp+386,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lb));
            tracep->chgBit(oldp+387,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lbu));
            tracep->chgBit(oldp+388,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lhu));
            tracep->chgBit(oldp+389,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lw));
            tracep->chgBit(oldp+390,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lwu));
            tracep->chgBit(oldp+391,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lh));
            tracep->chgBit(oldp+392,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_ld));
            tracep->chgBit(oldp+393,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_ebreak));
            tracep->chgBit(oldp+394,((0x6bU == vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)));
            tracep->chgBit(oldp+395,((0x7bU == vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)));
            tracep->chgBit(oldp+396,(((((((((((((((
                                                   ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0U 
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
                                             | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_srliw)) 
                                            | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_aes64ds)) 
                                           | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_aes64dsm)) 
                                          | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_aes64es)) 
                                         | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_aes64im)) 
                                        | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_aes64esm)) 
                                       | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_aes64ks1i)) 
                                      | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_aes64ks2))));
            tracep->chgBit(oldp+397,((0xaU == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_ex))));
            tracep->chgBit(oldp+398,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_valid));
            tracep->chgQData(oldp+399,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__mul_result[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__mul_result[0U])))),64);
            tracep->chgBit(oldp+401,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_ready));
            tracep->chgBit(oldp+402,((2U == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__div_state))));
            tracep->chgBit(oldp+403,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_s_or_u));
            tracep->chgQData(oldp+404,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_value),64);
            tracep->chgQData(oldp+406,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__rem_value),64);
            tracep->chgBit(oldp+408,((((((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__if_inst_aes64es_ex) 
                                           | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__if_inst_aes64esm_ex)) 
                                          | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__if_inst_aes64ds_ex)) 
                                         | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__if_inst_aes64dsm_ex)) 
                                        | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__if_inst_aes64im_ex)) 
                                       | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__if_inst_aes64ks1i_ex)) 
                                      | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__if_inst_aes64ks2_ex))));
            tracep->chgWData(oldp+409,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__forward_a_mux____pinNumber4),198);
            tracep->chgWData(oldp+416,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__pair_list[0]),66);
            tracep->chgWData(oldp+419,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__pair_list[1]),66);
            tracep->chgWData(oldp+422,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__pair_list[2]),66);
            tracep->chgCData(oldp+425,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__key_list[0]),2);
            tracep->chgCData(oldp+426,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__key_list[1]),2);
            tracep->chgCData(oldp+427,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__key_list[2]),2);
            tracep->chgQData(oldp+428,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+430,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+432,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__data_list[2]),64);
            tracep->chgWData(oldp+434,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__forward_b_mux____pinNumber4),198);
            tracep->chgWData(oldp+441,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__pair_list[0]),66);
            tracep->chgWData(oldp+444,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__pair_list[1]),66);
            tracep->chgWData(oldp+447,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__pair_list[2]),66);
            tracep->chgCData(oldp+450,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__key_list[0]),2);
            tracep->chgCData(oldp+451,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__key_list[1]),2);
            tracep->chgCData(oldp+452,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__key_list[2]),2);
            tracep->chgQData(oldp+453,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+455,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+457,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__data_list[2]),64);
            tracep->chgBit(oldp+459,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__mul_calculating));
            tracep->chgWData(oldp+460,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__multiplcand),128);
            tracep->chgQData(oldp+464,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__multipler),64);
            tracep->chgWData(oldp+466,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__mul_result_partial),128);
            tracep->chgWData(oldp+470,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__mul_result),128);
            tracep->chgCData(oldp+474,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__mul_result_cnt),7);
            tracep->chgCData(oldp+475,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__div_state),2);
            tracep->chgCData(oldp+476,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__div_cnt),7);
            tracep->chgWData(oldp+477,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__dividend_abs),128);
            tracep->chgWData(oldp+481,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__divisor_abs),65);
            tracep->chgQData(oldp+484,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__quotient_abs),64);
            tracep->chgBit(oldp+486,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__quotient_sign));
            tracep->chgBit(oldp+487,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__remainder_sign));
            tracep->chgWData(oldp+488,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__diff_temp),65);
            tracep->chgBit(oldp+491,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__diff_neg));
            tracep->chgBit(oldp+492,((0xaU != (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__ks1i_rnum_ex))));
            tracep->chgCData(oldp+493,(((0xaU != (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__ks1i_rnum_ex))
                                         ? vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__rcon
                                        [vlSelf->SimTop__DOT__u_cpu__DOT__ks1i_rnum_ex]
                                         : 0U)),8);
            tracep->chgBit(oldp+494,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__mix));
            tracep->chgBit(oldp+495,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__if_inst_aes64es_ex) 
                                      | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__if_inst_aes64esm_ex))));
            tracep->chgBit(oldp+496,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__if_inst_aes64ds_ex) 
                                      | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__if_inst_aes64dsm_ex))));
            tracep->chgBit(oldp+497,((0x200U == (0xffffU 
                                                 & (IData)(
                                                           (vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem 
                                                            >> 0x10U))))));
            tracep->chgBit(oldp+498,((0xa10003f8U == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem))));
            tracep->chgQData(oldp+499,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf_tmp[0]),64);
            tracep->chgQData(oldp+501,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf_tmp[1]),64);
            tracep->chgQData(oldp+503,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf_tmp[2]),64);
            tracep->chgQData(oldp+505,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf_tmp[3]),64);
            tracep->chgQData(oldp+507,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf_tmp[4]),64);
            tracep->chgQData(oldp+509,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf_tmp[5]),64);
            tracep->chgQData(oldp+511,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf_tmp[6]),64);
            tracep->chgQData(oldp+513,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf_tmp[7]),64);
            tracep->chgQData(oldp+515,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf_tmp[8]),64);
            tracep->chgQData(oldp+517,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf_tmp[9]),64);
            tracep->chgQData(oldp+519,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf_tmp[10]),64);
            tracep->chgQData(oldp+521,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf_tmp[11]),64);
            tracep->chgQData(oldp+523,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf_tmp[12]),64);
            tracep->chgQData(oldp+525,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf_tmp[13]),64);
            tracep->chgQData(oldp+527,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf_tmp[14]),64);
            tracep->chgQData(oldp+529,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf_tmp[15]),64);
            tracep->chgQData(oldp+531,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf_tmp[16]),64);
            tracep->chgQData(oldp+533,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf_tmp[17]),64);
            tracep->chgQData(oldp+535,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf_tmp[18]),64);
            tracep->chgQData(oldp+537,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf_tmp[19]),64);
            tracep->chgQData(oldp+539,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf_tmp[20]),64);
            tracep->chgQData(oldp+541,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf_tmp[21]),64);
            tracep->chgQData(oldp+543,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf_tmp[22]),64);
            tracep->chgQData(oldp+545,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf_tmp[23]),64);
            tracep->chgQData(oldp+547,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf_tmp[24]),64);
            tracep->chgQData(oldp+549,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf_tmp[25]),64);
            tracep->chgQData(oldp+551,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf_tmp[26]),64);
            tracep->chgQData(oldp+553,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf_tmp[27]),64);
            tracep->chgQData(oldp+555,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf_tmp[28]),64);
            tracep->chgQData(oldp+557,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf_tmp[29]),64);
            tracep->chgQData(oldp+559,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf_tmp[30]),64);
            tracep->chgQData(oldp+561,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf_tmp[31]),64);
            tracep->chgQData(oldp+563,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mstatus_reg),64);
            tracep->chgQData(oldp+565,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mepc_reg),64);
            tracep->chgQData(oldp+567,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mtvec_reg),64);
            tracep->chgQData(oldp+569,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mcause_reg),64);
            tracep->chgQData(oldp+571,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mie_reg),64);
            tracep->chgQData(oldp+573,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mip_reg),64);
            tracep->chgQData(oldp+575,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mscratch_reg),64);
            tracep->chgQData(oldp+577,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mstatus_latch),64);
            tracep->chgQData(oldp+579,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mepc_latch),64);
            tracep->chgQData(oldp+581,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mtvec_latch),64);
            tracep->chgQData(oldp+583,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mcause_latch),64);
            tracep->chgQData(oldp+585,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mie_latch),64);
            tracep->chgQData(oldp+587,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mip_latch),64);
            tracep->chgQData(oldp+589,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mscratch_latch),64);
            tracep->chgQData(oldp+591,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mepc_timeint_reg),64);
            tracep->chgQData(oldp+593,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mcause_timeint_reg),64);
            tracep->chgQData(oldp+595,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__pc_wb_reg),64);
            tracep->chgIData(oldp+597,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__inst_wb_reg),32);
            tracep->chgWData(oldp+598,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_imm____pinNumber4),335);
            tracep->chgWData(oldp+609,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__pair_list[0]),67);
            tracep->chgWData(oldp+612,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__pair_list[1]),67);
            tracep->chgWData(oldp+615,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__pair_list[2]),67);
            tracep->chgWData(oldp+618,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__pair_list[3]),67);
            tracep->chgWData(oldp+621,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__pair_list[4]),67);
            tracep->chgCData(oldp+624,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__key_list[0]),3);
            tracep->chgCData(oldp+625,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__key_list[1]),3);
            tracep->chgCData(oldp+626,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__key_list[2]),3);
            tracep->chgCData(oldp+627,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__key_list[3]),3);
            tracep->chgCData(oldp+628,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__key_list[4]),3);
            tracep->chgQData(oldp+629,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+631,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+633,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+635,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+637,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__data_list[4]),64);
            tracep->chgQData(oldp+639,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+641,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__hit));
            tracep->chgWData(oldp+642,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4),476);
            tracep->chgWData(oldp+657,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__pair_list[0]),68);
            tracep->chgWData(oldp+660,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__pair_list[1]),68);
            tracep->chgWData(oldp+663,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__pair_list[2]),68);
            tracep->chgWData(oldp+666,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__pair_list[3]),68);
            tracep->chgWData(oldp+669,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__pair_list[4]),68);
            tracep->chgWData(oldp+672,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__pair_list[5]),68);
            tracep->chgWData(oldp+675,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__pair_list[6]),68);
            tracep->chgCData(oldp+678,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__key_list[0]),4);
            tracep->chgCData(oldp+679,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__key_list[1]),4);
            tracep->chgCData(oldp+680,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__key_list[2]),4);
            tracep->chgCData(oldp+681,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__key_list[3]),4);
            tracep->chgCData(oldp+682,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__key_list[4]),4);
            tracep->chgCData(oldp+683,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__key_list[5]),4);
            tracep->chgCData(oldp+684,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__key_list[6]),4);
            tracep->chgQData(oldp+685,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+687,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+689,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+691,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+693,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__data_list[4]),64);
            tracep->chgQData(oldp+695,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__data_list[5]),64);
            tracep->chgQData(oldp+697,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__data_list[6]),64);
            tracep->chgQData(oldp+699,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+701,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__hit));
            tracep->chgQData(oldp+702,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__pc_branch_addr),64);
            tracep->chgQData(oldp+704,(vlSelf->SimTop__DOT__clint__DOT__mtime),64);
            tracep->chgQData(oldp+706,(vlSelf->SimTop__DOT__clint__DOT__mtimecmp),64);
        }
        if (VL_UNLIKELY((vlSelf->__Vm_traceActivity
                         [1U] | vlSelf->__Vm_traceActivity
                         [3U]))) {
            tracep->chgBit(oldp+708,(((0U != (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__len)) 
                                      & ((IData)(vlSelf->SimTop__DOT__axi_rw__DOT__w_hs) 
                                         | (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__r_hs)))));
            tracep->chgBit(oldp+709,(((IData)(vlSelf->SimTop__DOT__axi_rw__DOT__trans_done) 
                                      | (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__rw_ready))));
            tracep->chgQData(oldp+710,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__csr_ren) 
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
            tracep->chgQData(oldp+712,(((((((- (QData)((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__if_inst_aes64ks1i_ex))) 
                                            & (((QData)((IData)(
                                                                ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__e_sbout) 
                                                                 ^ 
                                                                 ((0xaU 
                                                                   != (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__ks1i_rnum_ex))
                                                                   ? 
                                                                  vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__rcon
                                                                  [vlSelf->SimTop__DOT__u_cpu__DOT__ks1i_rnum_ex]
                                                                   : 0U)))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__e_sbout) 
                                                                  ^ 
                                                                  ((0xaU 
                                                                    != (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__ks1i_rnum_ex))
                                                                    ? 
                                                                   vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__rcon
                                                                   [vlSelf->SimTop__DOT__u_cpu__DOT__ks1i_rnum_ex]
                                                                    : 0U)))))) 
                                           | ((- (QData)((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__if_inst_aes64ks2_ex))) 
                                              & (((QData)((IData)(
                                                                  (((IData)(
                                                                            (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                                                                             >> 0x20U)) 
                                                                    ^ (IData)(
                                                                              (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b 
                                                                               >> 0x20U))) 
                                                                   ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b)))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   ((IData)(
                                                                            (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                                                                             >> 0x20U)) 
                                                                    ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b))))))) 
                                          | ((- (QData)((IData)(
                                                                ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__if_inst_aes64es_ex) 
                                                                 | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__if_inst_aes64esm_ex))))) 
                                             & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__mix)
                                                 ? 
                                                (((QData)((IData)(
                                                                  (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e1__DOT__mix_out_3) 
                                                                    << 0x18U) 
                                                                   | (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e1__DOT__mix_out_2) 
                                                                       << 0x10U) 
                                                                      | (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e1__DOT__mix_out_1) 
                                                                          << 8U) 
                                                                         | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e1__DOT__mix_out_0)))))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e0__DOT__mix_out_3) 
                                                                     << 0x18U) 
                                                                    | (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e0__DOT__mix_out_2) 
                                                                        << 0x10U) 
                                                                       | (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e0__DOT__mix_out_1) 
                                                                           << 8U) 
                                                                          | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e0__DOT__mix_out_0)))))))
                                                 : vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__e_sbout))) 
                                         | ((- (QData)((IData)(
                                                               ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__if_inst_aes64ds_ex) 
                                                                | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__if_inst_aes64dsm_ex))))) 
                                            & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__mix)
                                                ? (
                                                   ((QData)((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__mix_dec_o1)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__mix_dec_o0)))
                                                : vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__d_sbout))) 
                                        | ((- (QData)((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__if_inst_aes64im_ex))) 
                                           & (((QData)((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__mix_dec_o1)) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__mix_dec_o0)))))),64);
            tracep->chgCData(oldp+714,((0xffU & ((0xaU 
                                                  != (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__ks1i_rnum_ex))
                                                  ? (IData)(
                                                            (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                                                             >> 0x20U))
                                                  : (IData)(
                                                            (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                                                             >> 0x38U))))),8);
            tracep->chgCData(oldp+715,((0xffU & ((0xaU 
                                                  != (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__ks1i_rnum_ex))
                                                  ? (IData)(
                                                            (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                                                             >> 0x38U))
                                                  : (IData)(
                                                            (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                                                             >> 0x30U))))),8);
            tracep->chgCData(oldp+716,((0xffU & ((0xaU 
                                                  != (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__ks1i_rnum_ex))
                                                  ? (IData)(
                                                            (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                                                             >> 0x30U))
                                                  : (IData)(
                                                            (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                                                             >> 0x28U))))),8);
            tracep->chgCData(oldp+717,((0xffU & ((0xaU 
                                                  != (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__ks1i_rnum_ex))
                                                  ? (IData)(
                                                            (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                                                             >> 0x28U))
                                                  : (IData)(
                                                            (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                                                             >> 0x20U))))),8);
            tracep->chgIData(oldp+718,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__e_sbout) 
                                        ^ ((0xaU != (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__ks1i_rnum_ex))
                                            ? vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__rcon
                                           [vlSelf->SimTop__DOT__u_cpu__DOT__ks1i_rnum_ex]
                                            : 0U))),32);
            tracep->chgQData(oldp+719,((((QData)((IData)(
                                                         ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__e_sbout) 
                                                          ^ 
                                                          ((0xaU 
                                                            != (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__ks1i_rnum_ex))
                                                            ? 
                                                           vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__rcon
                                                           [vlSelf->SimTop__DOT__u_cpu__DOT__ks1i_rnum_ex]
                                                            : 0U)))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__e_sbout) 
                                                           ^ 
                                                           ((0xaU 
                                                             != (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__ks1i_rnum_ex))
                                                             ? 
                                                            vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__rcon
                                                            [vlSelf->SimTop__DOT__u_cpu__DOT__ks1i_rnum_ex]
                                                             : 0U)))))),64);
            tracep->chgQData(oldp+721,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__mix)
                                         ? (((QData)((IData)(
                                                             (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e1__DOT__mix_out_3) 
                                                               << 0x18U) 
                                                              | (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e1__DOT__mix_out_2) 
                                                                  << 0x10U) 
                                                                 | (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e1__DOT__mix_out_1) 
                                                                     << 8U) 
                                                                    | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e1__DOT__mix_out_0)))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e0__DOT__mix_out_3) 
                                                                << 0x18U) 
                                                               | (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e0__DOT__mix_out_2) 
                                                                   << 0x10U) 
                                                                  | (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e0__DOT__mix_out_1) 
                                                                      << 8U) 
                                                                     | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e0__DOT__mix_out_0)))))))
                                         : vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__e_sbout)),64);
            tracep->chgQData(oldp+723,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__mix)
                                         ? (((QData)((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__mix_dec_o1)) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__mix_dec_o0)))
                                         : vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__d_sbout)),64);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgBit(oldp+725,(vlSelf->SimTop__DOT__u_cpu__DOT__cmt_wen));
            tracep->chgCData(oldp+726,(vlSelf->SimTop__DOT__u_cpu__DOT__cmt_wdest),8);
            tracep->chgQData(oldp+727,(vlSelf->SimTop__DOT__u_cpu__DOT__cmt_wdata),64);
            tracep->chgQData(oldp+729,(vlSelf->SimTop__DOT__u_cpu__DOT__cmt_pc),64);
            tracep->chgIData(oldp+731,(vlSelf->SimTop__DOT__u_cpu__DOT__cmt_inst),32);
            tracep->chgBit(oldp+732,(vlSelf->SimTop__DOT__u_cpu__DOT__cmt_valid));
            tracep->chgBit(oldp+733,(vlSelf->SimTop__DOT__u_cpu__DOT__cmt_skip));
            tracep->chgBit(oldp+734,(vlSelf->SimTop__DOT__u_cpu__DOT__trap));
            tracep->chgCData(oldp+735,(vlSelf->SimTop__DOT__u_cpu__DOT__trap_code),8);
            tracep->chgQData(oldp+736,(vlSelf->SimTop__DOT__u_cpu__DOT__cycleCnt),64);
            tracep->chgQData(oldp+738,(vlSelf->SimTop__DOT__u_cpu__DOT__instrCnt),64);
            tracep->chgQData(oldp+740,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[0]),64);
            tracep->chgQData(oldp+742,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[1]),64);
            tracep->chgQData(oldp+744,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[2]),64);
            tracep->chgQData(oldp+746,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[3]),64);
            tracep->chgQData(oldp+748,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[4]),64);
            tracep->chgQData(oldp+750,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[5]),64);
            tracep->chgQData(oldp+752,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[6]),64);
            tracep->chgQData(oldp+754,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[7]),64);
            tracep->chgQData(oldp+756,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[8]),64);
            tracep->chgQData(oldp+758,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[9]),64);
            tracep->chgQData(oldp+760,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[10]),64);
            tracep->chgQData(oldp+762,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[11]),64);
            tracep->chgQData(oldp+764,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[12]),64);
            tracep->chgQData(oldp+766,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[13]),64);
            tracep->chgQData(oldp+768,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[14]),64);
            tracep->chgQData(oldp+770,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[15]),64);
            tracep->chgQData(oldp+772,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[16]),64);
            tracep->chgQData(oldp+774,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[17]),64);
            tracep->chgQData(oldp+776,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[18]),64);
            tracep->chgQData(oldp+778,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[19]),64);
            tracep->chgQData(oldp+780,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[20]),64);
            tracep->chgQData(oldp+782,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[21]),64);
            tracep->chgQData(oldp+784,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[22]),64);
            tracep->chgQData(oldp+786,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[23]),64);
            tracep->chgQData(oldp+788,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[24]),64);
            tracep->chgQData(oldp+790,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[25]),64);
            tracep->chgQData(oldp+792,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[26]),64);
            tracep->chgQData(oldp+794,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[27]),64);
            tracep->chgQData(oldp+796,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[28]),64);
            tracep->chgQData(oldp+798,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[29]),64);
            tracep->chgQData(oldp+800,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[30]),64);
            tracep->chgQData(oldp+802,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[31]),64);
            tracep->chgQData(oldp+804,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                       [0U]),64);
            tracep->chgQData(oldp+806,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                       [1U]),64);
            tracep->chgQData(oldp+808,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                       [2U]),64);
            tracep->chgQData(oldp+810,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                       [3U]),64);
            tracep->chgQData(oldp+812,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                       [4U]),64);
            tracep->chgQData(oldp+814,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                       [5U]),64);
            tracep->chgQData(oldp+816,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                       [6U]),64);
            tracep->chgQData(oldp+818,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                       [7U]),64);
            tracep->chgQData(oldp+820,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                       [8U]),64);
            tracep->chgQData(oldp+822,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                       [9U]),64);
            tracep->chgQData(oldp+824,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                       [0xaU]),64);
            tracep->chgQData(oldp+826,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                       [0xbU]),64);
            tracep->chgQData(oldp+828,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                       [0xcU]),64);
            tracep->chgQData(oldp+830,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                       [0xdU]),64);
            tracep->chgQData(oldp+832,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                       [0xeU]),64);
            tracep->chgQData(oldp+834,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                       [0xfU]),64);
            tracep->chgQData(oldp+836,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                       [0x10U]),64);
            tracep->chgQData(oldp+838,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                       [0x11U]),64);
            tracep->chgQData(oldp+840,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                       [0x12U]),64);
            tracep->chgQData(oldp+842,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                       [0x13U]),64);
            tracep->chgQData(oldp+844,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                       [0x14U]),64);
            tracep->chgQData(oldp+846,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                       [0x15U]),64);
            tracep->chgQData(oldp+848,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                       [0x16U]),64);
            tracep->chgQData(oldp+850,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                       [0x17U]),64);
            tracep->chgQData(oldp+852,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                       [0x18U]),64);
            tracep->chgQData(oldp+854,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                       [0x19U]),64);
            tracep->chgQData(oldp+856,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                       [0x1aU]),64);
            tracep->chgQData(oldp+858,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                       [0x1bU]),64);
            tracep->chgQData(oldp+860,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                       [0x1cU]),64);
            tracep->chgQData(oldp+862,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                       [0x1dU]),64);
            tracep->chgQData(oldp+864,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                       [0x1eU]),64);
            tracep->chgQData(oldp+866,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                       [0x1fU]),64);
            tracep->chgCData(oldp+868,((7U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__trap_code))),3);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
            tracep->chgQData(oldp+869,(vlSelf->SimTop__DOT__u_cpu__DOT__reg2_to_mem_forward),64);
            tracep->chgCData(oldp+871,(vlSelf->SimTop__DOT__mem_write_mask_axi),8);
            tracep->chgBit(oldp+872,(vlSelf->SimTop__DOT__axi_rw__DOT__trans_done));
            tracep->chgBit(oldp+873,(vlSelf->SimTop__DOT__axi_rw__DOT__r_hs));
            tracep->chgCData(oldp+874,((0xffU & (IData)(
                                                        vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr
                                                        [0xaU]))),8);
            tracep->chgQData(oldp+875,(vlSelf->SimTop__DOT__u_cpu__DOT__memory__DOT__value_writen_to_mem),64);
            VL_EXTEND_WQ(65,64, __Vtemp1077, vlSelf->SimTop__DOT__u_cpu__DOT__reg2_to_mem_forward);
            tracep->chgWData(oldp+877,(__Vtemp1077),65);
            tracep->chgBit(oldp+880,(vlSelf->SimTop__DOT__axi_rw__DOT__w_hs));
            tracep->chgBit(oldp+881,(vlSelf->SimTop__DOT__axi_rw__DOT__b_hs));
            tracep->chgBit(oldp+882,(vlSelf->SimTop__DOT__axi_rw__DOT__r_done));
            tracep->chgQData(oldp+883,(vlSelf->SimTop__DOT__u_cpu__DOT__reg2_value_forwardb_ex),64);
            tracep->chgQData(oldp+885,(vlSelf->SimTop__DOT__u_cpu__DOT__csr_value_writeback_ex),64);
            tracep->chgQData(oldp+887,(vlSelf->SimTop__DOT__u_cpu__DOT__mem_write_mask),64);
            tracep->chgQData(oldp+889,(vlSelf->SimTop__DOT__u_cpu__DOT__npc),64);
            tracep->chgQData(oldp+891,(vlSelf->SimTop__DOT__u_cpu__DOT__reg1_value_id),64);
            tracep->chgQData(oldp+893,(vlSelf->SimTop__DOT__u_cpu__DOT__reg2_value_id),64);
            tracep->chgQData(oldp+895,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[0]),64);
            tracep->chgQData(oldp+897,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[1]),64);
            tracep->chgQData(oldp+899,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[2]),64);
            tracep->chgQData(oldp+901,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[3]),64);
            tracep->chgQData(oldp+903,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[4]),64);
            tracep->chgQData(oldp+905,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[5]),64);
            tracep->chgQData(oldp+907,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[6]),64);
            tracep->chgQData(oldp+909,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[7]),64);
            tracep->chgQData(oldp+911,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[8]),64);
            tracep->chgQData(oldp+913,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[9]),64);
            tracep->chgQData(oldp+915,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[10]),64);
            tracep->chgQData(oldp+917,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[11]),64);
            tracep->chgQData(oldp+919,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[12]),64);
            tracep->chgQData(oldp+921,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[13]),64);
            tracep->chgQData(oldp+923,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[14]),64);
            tracep->chgQData(oldp+925,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[15]),64);
            tracep->chgQData(oldp+927,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[16]),64);
            tracep->chgQData(oldp+929,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[17]),64);
            tracep->chgQData(oldp+931,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[18]),64);
            tracep->chgQData(oldp+933,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[19]),64);
            tracep->chgQData(oldp+935,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[20]),64);
            tracep->chgQData(oldp+937,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[21]),64);
            tracep->chgQData(oldp+939,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[22]),64);
            tracep->chgQData(oldp+941,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[23]),64);
            tracep->chgQData(oldp+943,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[24]),64);
            tracep->chgQData(oldp+945,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[25]),64);
            tracep->chgQData(oldp+947,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[26]),64);
            tracep->chgQData(oldp+949,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[27]),64);
            tracep->chgQData(oldp+951,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[28]),64);
            tracep->chgQData(oldp+953,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[29]),64);
            tracep->chgQData(oldp+955,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[30]),64);
            tracep->chgQData(oldp+957,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[31]),64);
            tracep->chgQData(oldp+959,(vlSelf->SimTop__DOT__u_cpu__DOT__value),64);
            tracep->chgQData(oldp+961,(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_ex),64);
            tracep->chgBit(oldp+963,(vlSelf->SimTop__DOT__u_cpu__DOT__IF_Flush));
            tracep->chgCData(oldp+964,(vlSelf->SimTop__DOT__u_cpu__DOT__Forward_a),2);
            tracep->chgCData(oldp+965,(vlSelf->SimTop__DOT__u_cpu__DOT__Forward_b),2);
            tracep->chgCData(oldp+966,(vlSelf->SimTop__DOT__u_cpu__DOT__Forward_c),2);
            tracep->chgCData(oldp+967,(vlSelf->SimTop__DOT__u_cpu__DOT__Forward_d),2);
            tracep->chgBit(oldp+968,(vlSelf->SimTop__DOT__u_cpu__DOT__pipeline_stall));
            tracep->chgQData(oldp+969,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mstatus),64);
            tracep->chgQData(oldp+971,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mepc),64);
            tracep->chgQData(oldp+973,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mtvec),64);
            tracep->chgQData(oldp+975,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mcause),64);
            tracep->chgQData(oldp+977,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mie),64);
            tracep->chgQData(oldp+979,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mip),64);
            tracep->chgQData(oldp+981,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mscratch),64);
            tracep->chgQData(oldp+983,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__reg1_forwarda),64);
            tracep->chgQData(oldp+985,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a0),64);
            tracep->chgQData(oldp+987,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b0),64);
            tracep->chgQData(oldp+989,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a),64);
            tracep->chgQData(oldp+991,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b),64);
            tracep->chgQData(oldp+993,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_operation_a),64);
            tracep->chgQData(oldp+995,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+997,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__hit));
            tracep->chgQData(oldp+998,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+1000,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__hit));
            tracep->chgIData(oldp+1001,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__row_0),32);
            tracep->chgIData(oldp+1002,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__row_1),32);
            tracep->chgIData(oldp+1003,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__row_2),32);
            tracep->chgIData(oldp+1004,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__row_3),32);
            tracep->chgIData(oldp+1005,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__fsh_1),32);
            tracep->chgIData(oldp+1006,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__fsh_2),32);
            tracep->chgIData(oldp+1007,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__fsh_3),32);
            tracep->chgIData(oldp+1008,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__ish_1),32);
            tracep->chgIData(oldp+1009,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__ish_2),32);
            tracep->chgIData(oldp+1010,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__ish_3),32);
            tracep->chgIData(oldp+1011,(((0xff000000U 
                                          & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__fsh_3 
                                             << 8U)) 
                                         | ((0xff0000U 
                                             & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__fsh_2) 
                                            | ((0xff00U 
                                                & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__fsh_1 
                                                   >> 8U)) 
                                               | (0xffU 
                                                  & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__row_0 
                                                     >> 0x10U)))))),32);
            tracep->chgIData(oldp+1012,(((0xff000000U 
                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__fsh_3) 
                                         | ((0xff0000U 
                                             & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__fsh_2 
                                                >> 8U)) 
                                            | ((0xff00U 
                                                & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__fsh_1 
                                                   >> 0x10U)) 
                                               | (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__row_0 
                                                  >> 0x18U))))),32);
            tracep->chgIData(oldp+1013,(((0xff000000U 
                                          & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__ish_3 
                                             << 8U)) 
                                         | ((0xff0000U 
                                             & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__ish_2) 
                                            | ((0xff00U 
                                                & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__ish_1 
                                                   >> 8U)) 
                                               | (0xffU 
                                                  & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__row_0 
                                                     >> 0x10U)))))),32);
            tracep->chgIData(oldp+1014,(((0xff000000U 
                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__ish_3) 
                                         | ((0xff0000U 
                                             & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__ish_2 
                                                >> 8U)) 
                                            | ((0xff00U 
                                                & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__ish_1 
                                                   >> 0x10U)) 
                                               | (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__row_0 
                                                  >> 0x18U))))),32);
            tracep->chgQData(oldp+1015,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__shiftrows_enc),64);
            tracep->chgQData(oldp+1017,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__shiftrows_dec),64);
            tracep->chgCData(oldp+1019,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in[0]),8);
            tracep->chgCData(oldp+1020,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in[1]),8);
            tracep->chgCData(oldp+1021,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in[2]),8);
            tracep->chgCData(oldp+1022,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in[3]),8);
            tracep->chgCData(oldp+1023,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in[4]),8);
            tracep->chgCData(oldp+1024,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in[5]),8);
            tracep->chgCData(oldp+1025,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in[6]),8);
            tracep->chgCData(oldp+1026,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in[7]),8);
            tracep->chgCData(oldp+1027,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_out[0]),8);
            tracep->chgCData(oldp+1028,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_out[1]),8);
            tracep->chgCData(oldp+1029,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_out[2]),8);
            tracep->chgCData(oldp+1030,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_out[3]),8);
            tracep->chgCData(oldp+1031,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_out[4]),8);
            tracep->chgCData(oldp+1032,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_out[5]),8);
            tracep->chgCData(oldp+1033,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_out[6]),8);
            tracep->chgCData(oldp+1034,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_out[7]),8);
            tracep->chgCData(oldp+1035,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in[0]),8);
            tracep->chgCData(oldp+1036,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in[1]),8);
            tracep->chgCData(oldp+1037,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in[2]),8);
            tracep->chgCData(oldp+1038,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in[3]),8);
            tracep->chgCData(oldp+1039,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in[4]),8);
            tracep->chgCData(oldp+1040,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in[5]),8);
            tracep->chgCData(oldp+1041,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in[6]),8);
            tracep->chgCData(oldp+1042,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in[7]),8);
            tracep->chgCData(oldp+1043,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_out[0]),8);
            tracep->chgCData(oldp+1044,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_out[1]),8);
            tracep->chgCData(oldp+1045,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_out[2]),8);
            tracep->chgCData(oldp+1046,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_out[3]),8);
            tracep->chgCData(oldp+1047,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_out[4]),8);
            tracep->chgCData(oldp+1048,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_out[5]),8);
            tracep->chgCData(oldp+1049,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_out[6]),8);
            tracep->chgCData(oldp+1050,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_out[7]),8);
            tracep->chgQData(oldp+1051,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__d_sbout),64);
            tracep->chgQData(oldp+1053,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__e_sbout),64);
            tracep->chgIData(oldp+1055,((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__e_sbout)),32);
            tracep->chgIData(oldp+1056,((IData)((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__e_sbout 
                                                 >> 0x20U))),32);
            tracep->chgIData(oldp+1057,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__mix_dec_i0),32);
            tracep->chgIData(oldp+1058,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__mix_dec_i1),32);
            tracep->chgIData(oldp+1059,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e0__DOT__mix_out_3) 
                                          << 0x18U) 
                                         | (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e0__DOT__mix_out_2) 
                                             << 0x10U) 
                                            | (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e0__DOT__mix_out_1) 
                                                << 8U) 
                                               | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e0__DOT__mix_out_0))))),32);
            tracep->chgIData(oldp+1060,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e1__DOT__mix_out_3) 
                                          << 0x18U) 
                                         | (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e1__DOT__mix_out_2) 
                                             << 0x10U) 
                                            | (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e1__DOT__mix_out_1) 
                                                << 8U) 
                                               | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e1__DOT__mix_out_0))))),32);
            tracep->chgIData(oldp+1061,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__mix_dec_o0),32);
            tracep->chgIData(oldp+1062,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__mix_dec_o1),32);
            tracep->chgQData(oldp+1063,((((QData)((IData)(
                                                          (((IData)(
                                                                    (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                                                                     >> 0x20U)) 
                                                            ^ (IData)(
                                                                      (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b 
                                                                       >> 0x20U))) 
                                                           ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b)))) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           ((IData)(
                                                                    (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                                                                     >> 0x20U)) 
                                                            ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b)))))),64);
            tracep->chgQData(oldp+1065,((((QData)((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__mix_dec_o1)) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__mix_dec_o0)))),64);
            tracep->chgCData(oldp+1067,((0xffU & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__e_sbout))),8);
            tracep->chgCData(oldp+1068,((0xffU & (IData)(
                                                         (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__e_sbout 
                                                          >> 8U)))),8);
            tracep->chgCData(oldp+1069,((0xffU & (IData)(
                                                         (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__e_sbout 
                                                          >> 0x10U)))),8);
            tracep->chgCData(oldp+1070,((0xffU & (IData)(
                                                         (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__e_sbout 
                                                          >> 0x18U)))),8);
            tracep->chgIData(oldp+1071,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e0__DOT__mix_in_3),32);
            tracep->chgIData(oldp+1072,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e0__DOT__mix_in_2),32);
            tracep->chgIData(oldp+1073,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e0__DOT__mix_in_1),32);
            tracep->chgIData(oldp+1074,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e0__DOT__mix_in_0),32);
            tracep->chgCData(oldp+1075,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e0__DOT__mix_out_3),8);
            tracep->chgCData(oldp+1076,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e0__DOT__mix_out_2),8);
            tracep->chgCData(oldp+1077,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e0__DOT__mix_out_1),8);
            tracep->chgCData(oldp+1078,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e0__DOT__mix_out_0),8);
            tracep->chgCData(oldp+1079,((0xffU & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e0__DOT__mix_in_0)),8);
            tracep->chgCData(oldp+1080,((0xffU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e0__DOT__mix_in_0 
                                                  >> 8U))),8);
            tracep->chgCData(oldp+1081,((0xffU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e0__DOT__mix_in_0 
                                                  >> 0x10U))),8);
            tracep->chgCData(oldp+1082,((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e0__DOT__mix_in_0 
                                         >> 0x18U)),8);
            tracep->chgCData(oldp+1083,((0xffU & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e0__DOT__mix_in_1)),8);
            tracep->chgCData(oldp+1084,((0xffU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e0__DOT__mix_in_1 
                                                  >> 8U))),8);
            tracep->chgCData(oldp+1085,((0xffU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e0__DOT__mix_in_1 
                                                  >> 0x10U))),8);
            tracep->chgCData(oldp+1086,((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e0__DOT__mix_in_1 
                                         >> 0x18U)),8);
            tracep->chgCData(oldp+1087,((0xffU & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e0__DOT__mix_in_2)),8);
            tracep->chgCData(oldp+1088,((0xffU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e0__DOT__mix_in_2 
                                                  >> 8U))),8);
            tracep->chgCData(oldp+1089,((0xffU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e0__DOT__mix_in_2 
                                                  >> 0x10U))),8);
            tracep->chgCData(oldp+1090,((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e0__DOT__mix_in_2 
                                         >> 0x18U)),8);
            tracep->chgCData(oldp+1091,((0xffU & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e0__DOT__mix_in_3)),8);
            tracep->chgCData(oldp+1092,((0xffU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e0__DOT__mix_in_3 
                                                  >> 8U))),8);
            tracep->chgCData(oldp+1093,((0xffU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e0__DOT__mix_in_3 
                                                  >> 0x10U))),8);
            tracep->chgCData(oldp+1094,((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e0__DOT__mix_in_3 
                                         >> 0x18U)),8);
            tracep->chgCData(oldp+1095,((0xffU & (IData)(
                                                         (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__e_sbout 
                                                          >> 0x20U)))),8);
            tracep->chgCData(oldp+1096,((0xffU & (IData)(
                                                         (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__e_sbout 
                                                          >> 0x28U)))),8);
            tracep->chgCData(oldp+1097,((0xffU & (IData)(
                                                         (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__e_sbout 
                                                          >> 0x30U)))),8);
            tracep->chgCData(oldp+1098,((0xffU & (IData)(
                                                         (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__e_sbout 
                                                          >> 0x38U)))),8);
            tracep->chgIData(oldp+1099,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e1__DOT__mix_in_3),32);
            tracep->chgIData(oldp+1100,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e1__DOT__mix_in_2),32);
            tracep->chgIData(oldp+1101,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e1__DOT__mix_in_1),32);
            tracep->chgIData(oldp+1102,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e1__DOT__mix_in_0),32);
            tracep->chgCData(oldp+1103,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e1__DOT__mix_out_3),8);
            tracep->chgCData(oldp+1104,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e1__DOT__mix_out_2),8);
            tracep->chgCData(oldp+1105,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e1__DOT__mix_out_1),8);
            tracep->chgCData(oldp+1106,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e1__DOT__mix_out_0),8);
            tracep->chgCData(oldp+1107,((0xffU & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e1__DOT__mix_in_0)),8);
            tracep->chgCData(oldp+1108,((0xffU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e1__DOT__mix_in_0 
                                                  >> 8U))),8);
            tracep->chgCData(oldp+1109,((0xffU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e1__DOT__mix_in_0 
                                                  >> 0x10U))),8);
            tracep->chgCData(oldp+1110,((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e1__DOT__mix_in_0 
                                         >> 0x18U)),8);
            tracep->chgCData(oldp+1111,((0xffU & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e1__DOT__mix_in_1)),8);
            tracep->chgCData(oldp+1112,((0xffU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e1__DOT__mix_in_1 
                                                  >> 8U))),8);
            tracep->chgCData(oldp+1113,((0xffU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e1__DOT__mix_in_1 
                                                  >> 0x10U))),8);
            tracep->chgCData(oldp+1114,((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e1__DOT__mix_in_1 
                                         >> 0x18U)),8);
            tracep->chgCData(oldp+1115,((0xffU & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e1__DOT__mix_in_2)),8);
            tracep->chgCData(oldp+1116,((0xffU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e1__DOT__mix_in_2 
                                                  >> 8U))),8);
            tracep->chgCData(oldp+1117,((0xffU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e1__DOT__mix_in_2 
                                                  >> 0x10U))),8);
            tracep->chgCData(oldp+1118,((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e1__DOT__mix_in_2 
                                         >> 0x18U)),8);
            tracep->chgCData(oldp+1119,((0xffU & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e1__DOT__mix_in_3)),8);
            tracep->chgCData(oldp+1120,((0xffU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e1__DOT__mix_in_3 
                                                  >> 8U))),8);
            tracep->chgCData(oldp+1121,((0xffU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e1__DOT__mix_in_3 
                                                  >> 0x10U))),8);
            tracep->chgCData(oldp+1122,((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e1__DOT__mix_in_3 
                                         >> 0x18U)),8);
            tracep->chgCData(oldp+1123,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT____Vcellout__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__fx),8);
            tracep->chgCData(oldp+1124,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                        [0U]),8);
            tracep->chgIData(oldp+1125,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t1),21);
            tracep->chgIData(oldp+1126,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t2),18);
            tracep->chgBit(oldp+1127,((1U & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                       [0U])));
            tracep->chgBit(oldp+1128,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__top__DOT__y1));
            tracep->chgBit(oldp+1129,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__top__DOT__y2));
            tracep->chgBit(oldp+1130,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__top__DOT__y3));
            tracep->chgBit(oldp+1131,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__top__DOT__y4));
            tracep->chgBit(oldp+1132,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__top__DOT__t0));
            tracep->chgBit(oldp+1133,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__top__DOT__y5));
            tracep->chgBit(oldp+1134,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__top__DOT__t1));
            tracep->chgBit(oldp+1135,((1U & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                             [0U] ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__top__DOT__y5)))));
            tracep->chgBit(oldp+1136,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__top__DOT__y7));
            tracep->chgBit(oldp+1137,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__top__DOT__y8));
            tracep->chgBit(oldp+1138,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__top__DOT__t2));
            tracep->chgBit(oldp+1139,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__top__DOT__t3));
            tracep->chgBit(oldp+1140,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__top__DOT__y3) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__top__DOT__y4))));
            tracep->chgBit(oldp+1141,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__top__DOT__y5) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__top__DOT__t2))));
            tracep->chgBit(oldp+1142,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__top__DOT__t0) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__top__DOT__t2))));
            tracep->chgBit(oldp+1143,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__top__DOT__y12));
            tracep->chgBit(oldp+1144,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__top__DOT__y13));
            tracep->chgBit(oldp+1145,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                              [0U] 
                                              >> 4U) 
                                             ^ vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                             [0U]))));
            tracep->chgBit(oldp+1146,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__top__DOT__y14));
            tracep->chgBit(oldp+1147,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__top__DOT__y15));
            tracep->chgBit(oldp+1148,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                              [0U] 
                                              >> 1U) 
                                             ^ vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                             [0U]))));
            tracep->chgBit(oldp+1149,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__top__DOT__y16));
            tracep->chgBit(oldp+1150,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__top__DOT__y2) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__top__DOT__y16))));
            tracep->chgBit(oldp+1151,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__top__DOT__y2) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__top__DOT__y8))));
            tracep->chgBit(oldp+1152,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__top__DOT__y15) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__top__DOT__y13))));
            tracep->chgBit(oldp+1153,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__top__DOT__y1) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__top__DOT__t3))));
            tracep->chgBit(oldp+1154,((1U & VL_REDXOR_32(
                                                         (0x1008U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1155,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1));
            tracep->chgBit(oldp+1156,((IData)((0x20040U 
                                               == (0x20040U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1157,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t1 
                                              >> 0xaU) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1)))));
            tracep->chgBit(oldp+1158,((0x4001U == (0x4001U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t1))));
            tracep->chgBit(oldp+1159,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t1 
                                               >> 0xeU) 
                                              & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t1) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1)))));
            tracep->chgBit(oldp+1160,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6));
            tracep->chgBit(oldp+1161,((IData)((0x10080U 
                                               == (0x10080U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1162,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t1 
                                               >> 3U) 
                                              ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t1 
                                                 >> 0xcU)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6)))));
            tracep->chgBit(oldp+1163,((IData)((0xa000U 
                                               == (0xa000U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1164,((1U & ((0xa000U 
                                              == (0xa000U 
                                                  & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t1)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6)))));
            tracep->chgBit(oldp+1165,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t11));
            tracep->chgBit(oldp+1166,((IData)((0x100010U 
                                               == (0x100010U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1167,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t13));
            tracep->chgBit(oldp+1168,((IData)((0x104U 
                                               == (0x104U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1169,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t15));
            tracep->chgBit(oldp+1170,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t1 
                                               >> 0xaU) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1)) 
                                             ^ (0x20040U 
                                                == 
                                                (0x20040U 
                                                 & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t1))))));
            tracep->chgBit(oldp+1171,((1U & ((((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t1 
                                                >> 0xeU) 
                                               & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t1) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1)) 
                                             ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t1 
                                                >> 0x12U)))));
            tracep->chgBit(oldp+1172,((1U & ((((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t1 
                                                >> 3U) 
                                               ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t1 
                                                  >> 0xcU)) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6)) 
                                             ^ (0x10080U 
                                                == 
                                                (0x10080U 
                                                 & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t1))))));
            tracep->chgBit(oldp+1173,((1U & (((0xa000U 
                                               == (0xa000U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t1)) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t15)))));
            tracep->chgBit(oldp+1174,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t20));
            tracep->chgBit(oldp+1175,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21));
            tracep->chgBit(oldp+1176,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t22));
            tracep->chgBit(oldp+1177,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23));
            tracep->chgBit(oldp+1178,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t24));
            tracep->chgBit(oldp+1179,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25));
            tracep->chgBit(oldp+1180,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+1181,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t27));
            tracep->chgBit(oldp+1182,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+1183,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23) 
                                        ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25)) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t27))));
            tracep->chgBit(oldp+1184,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21) 
                                        ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25)) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t24))));
            tracep->chgBit(oldp+1185,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t20) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23))));
            tracep->chgBit(oldp+1186,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t27) 
                                       & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t20) 
                                          & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23)))));
            tracep->chgBit(oldp+1187,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t27) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+1188,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t22))));
            tracep->chgBit(oldp+1189,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t24) 
                                       & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21) 
                                          & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t22)))));
            tracep->chgBit(oldp+1190,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t24) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+1191,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t37));
            tracep->chgBit(oldp+1192,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t38));
            tracep->chgBit(oldp+1193,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t39));
            tracep->chgBit(oldp+1194,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t40));
            tracep->chgBit(oldp+1195,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t41));
            tracep->chgBit(oldp+1196,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t42));
            tracep->chgBit(oldp+1197,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t43));
            tracep->chgBit(oldp+1198,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t44));
            tracep->chgBit(oldp+1199,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t45));
            tracep->chgBit(oldp+1200,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__out__DOT__t0));
            tracep->chgBit(oldp+1201,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1));
            tracep->chgBit(oldp+1202,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__out__DOT__t2));
            tracep->chgBit(oldp+1203,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__out__DOT__t3));
            tracep->chgBit(oldp+1204,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__out__DOT__t4));
            tracep->chgBit(oldp+1205,((1U & VL_REDXOR_32(
                                                         (0x20800U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t2)))));
            tracep->chgBit(oldp+1206,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__out__DOT__t6));
            tracep->chgBit(oldp+1207,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__out__DOT__t7));
            tracep->chgBit(oldp+1208,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__out__DOT__t8));
            tracep->chgBit(oldp+1209,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__out__DOT__t9));
            tracep->chgBit(oldp+1210,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__out__DOT__t10));
            tracep->chgBit(oldp+1211,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__out__DOT__t11));
            tracep->chgBit(oldp+1212,((1U & VL_REDXOR_32(
                                                         (0x10002U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t2)))));
            tracep->chgBit(oldp+1213,((1U & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t2 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__out__DOT__t0)))));
            tracep->chgBit(oldp+1214,((1U & VL_REDXOR_32(
                                                         (0x804U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t2)))));
            tracep->chgBit(oldp+1215,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 5U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1)))));
            tracep->chgBit(oldp+1216,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 6U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__out__DOT__t0)))));
            tracep->chgBit(oldp+1217,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 7U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1)))));
            tracep->chgBit(oldp+1218,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 8U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__out__DOT__t8)))));
            tracep->chgBit(oldp+1219,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 0xdU) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__out__DOT__t4)))));
            tracep->chgBit(oldp+1220,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__out__DOT__t0) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1))));
            tracep->chgBit(oldp+1221,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__out__DOT__t7))));
            tracep->chgBit(oldp+1222,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__out__DOT__t3) 
                                             ^ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t2 
                                                 >> 0x10U) 
                                                ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t2 
                                                   >> 1U))))));
            tracep->chgBit(oldp+1223,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t2 
                                               >> 8U) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__out__DOT__t8)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__out__DOT__t2)))));
            tracep->chgBit(oldp+1224,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t2 
                                               >> 5U) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__out__DOT__t9)))));
            tracep->chgBit(oldp+1225,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__out__DOT__t6) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__out__DOT__t10))));
            tracep->chgBit(oldp+1226,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__out__DOT__t7) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__out__DOT__t9))));
            tracep->chgBit(oldp+1227,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__out__DOT__t8) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__out__DOT__t10))));
            tracep->chgBit(oldp+1228,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__out__DOT__t11) 
                                             ^ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t2 
                                                 >> 2U) 
                                                ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t2 
                                                   >> 0xbU))))));
            tracep->chgBit(oldp+1229,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__out__DOT__t11) 
                                             ^ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t2 
                                                 >> 7U) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1))))));
            tracep->chgCData(oldp+1230,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT____Vcellout__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__fx),8);
            tracep->chgCData(oldp+1231,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                        [0U]),8);
            tracep->chgIData(oldp+1232,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1),21);
            tracep->chgIData(oldp+1233,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2),18);
            tracep->chgBit(oldp+1234,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y17));
            tracep->chgBit(oldp+1235,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y16));
            tracep->chgBit(oldp+1236,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y2));
            tracep->chgBit(oldp+1237,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y1));
            tracep->chgBit(oldp+1238,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y18));
            tracep->chgBit(oldp+1239,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t0));
            tracep->chgBit(oldp+1240,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y6));
            tracep->chgBit(oldp+1241,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y14));
            tracep->chgBit(oldp+1242,((1U & (~ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                [0U] 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y1))))));
            tracep->chgBit(oldp+1243,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y8));
            tracep->chgBit(oldp+1244,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y2) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t0))));
            tracep->chgBit(oldp+1245,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y1) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t0))));
            tracep->chgBit(oldp+1246,((1U & (~ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                 [0U] 
                                                 >> 5U) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y1))))));
            tracep->chgBit(oldp+1247,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t1));
            tracep->chgBit(oldp+1248,((1U & (~ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                 [0U] 
                                                 >> 5U) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y14))))));
            tracep->chgBit(oldp+1249,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y18) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t1))));
            tracep->chgBit(oldp+1250,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                              [0U] 
                                              >> 3U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y6)))));
            tracep->chgBit(oldp+1251,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t2));
            tracep->chgBit(oldp+1252,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t3));
            tracep->chgBit(oldp+1253,((1U & (~ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                 [0U] 
                                                 >> 5U) 
                                                ^ (
                                                   vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                   [0U] 
                                                   >> 3U))))));
            tracep->chgBit(oldp+1254,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y16) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t2))));
            tracep->chgBit(oldp+1255,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t1) 
                                             ^ (~ (
                                                   (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                    [0U] 
                                                    >> 5U) 
                                                   ^ 
                                                   (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                    [0U] 
                                                    >> 3U)))))));
            tracep->chgBit(oldp+1256,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y20));
            tracep->chgBit(oldp+1257,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y8) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y20))));
            tracep->chgBit(oldp+1258,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y8) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t3))));
            tracep->chgBit(oldp+1259,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                              [0U] 
                                              >> 7U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t2)))));
            tracep->chgBit(oldp+1260,((1U & VL_REDXOR_32(
                                                         (0x1008U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1261,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1));
            tracep->chgBit(oldp+1262,((IData)((0x20040U 
                                               == (0x20040U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1263,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                              >> 0xaU) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1)))));
            tracep->chgBit(oldp+1264,((0x4001U == (0x4001U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1))));
            tracep->chgBit(oldp+1265,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                               >> 0xeU) 
                                              & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1)))));
            tracep->chgBit(oldp+1266,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6));
            tracep->chgBit(oldp+1267,((IData)((0x10080U 
                                               == (0x10080U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1268,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                               >> 3U) 
                                              ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                 >> 0xcU)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6)))));
            tracep->chgBit(oldp+1269,((IData)((0xa000U 
                                               == (0xa000U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1270,((1U & ((0xa000U 
                                              == (0xa000U 
                                                  & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6)))));
            tracep->chgBit(oldp+1271,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t11));
            tracep->chgBit(oldp+1272,((IData)((0x100010U 
                                               == (0x100010U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1273,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t13));
            tracep->chgBit(oldp+1274,((IData)((0x104U 
                                               == (0x104U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1275,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t15));
            tracep->chgBit(oldp+1276,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                               >> 0xaU) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1)) 
                                             ^ (0x20040U 
                                                == 
                                                (0x20040U 
                                                 & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1))))));
            tracep->chgBit(oldp+1277,((1U & ((((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                >> 0xeU) 
                                               & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1)) 
                                             ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                >> 0x12U)))));
            tracep->chgBit(oldp+1278,((1U & ((((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                >> 3U) 
                                               ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                  >> 0xcU)) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6)) 
                                             ^ (0x10080U 
                                                == 
                                                (0x10080U 
                                                 & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1))))));
            tracep->chgBit(oldp+1279,((1U & (((0xa000U 
                                               == (0xa000U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t15)))));
            tracep->chgBit(oldp+1280,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t20));
            tracep->chgBit(oldp+1281,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21));
            tracep->chgBit(oldp+1282,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t22));
            tracep->chgBit(oldp+1283,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23));
            tracep->chgBit(oldp+1284,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t24));
            tracep->chgBit(oldp+1285,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25));
            tracep->chgBit(oldp+1286,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+1287,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t27));
            tracep->chgBit(oldp+1288,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+1289,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23) 
                                        ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25)) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t27))));
            tracep->chgBit(oldp+1290,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21) 
                                        ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25)) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t24))));
            tracep->chgBit(oldp+1291,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t20) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23))));
            tracep->chgBit(oldp+1292,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t27) 
                                       & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t20) 
                                          & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23)))));
            tracep->chgBit(oldp+1293,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t27) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+1294,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t22))));
            tracep->chgBit(oldp+1295,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t24) 
                                       & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21) 
                                          & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t22)))));
            tracep->chgBit(oldp+1296,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t24) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+1297,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t37));
            tracep->chgBit(oldp+1298,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t38));
            tracep->chgBit(oldp+1299,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t39));
            tracep->chgBit(oldp+1300,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t40));
            tracep->chgBit(oldp+1301,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t41));
            tracep->chgBit(oldp+1302,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t42));
            tracep->chgBit(oldp+1303,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t43));
            tracep->chgBit(oldp+1304,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t44));
            tracep->chgBit(oldp+1305,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t45));
            tracep->chgBit(oldp+1306,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t0));
            tracep->chgBit(oldp+1307,((1U & VL_REDXOR_32(
                                                         (0x300U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+1308,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t2));
            tracep->chgBit(oldp+1309,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t3));
            tracep->chgBit(oldp+1310,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t4));
            tracep->chgBit(oldp+1311,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t5));
            tracep->chgBit(oldp+1312,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6));
            tracep->chgBit(oldp+1313,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t7));
            tracep->chgBit(oldp+1314,((1U & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                             ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                                >> 3U)))));
            tracep->chgBit(oldp+1315,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t9));
            tracep->chgBit(oldp+1316,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t10));
            tracep->chgBit(oldp+1317,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t11));
            tracep->chgBit(oldp+1318,((1U & VL_REDXOR_32(
                                                         (0x14000U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+1319,((1U & VL_REDXOR_32(
                                                         (0x20002U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+1320,((1U & VL_REDXOR_32(
                                                         (0x21000U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+1321,((1U & VL_REDXOR_32(
                                                         (0x210U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+1322,((1U & VL_REDXOR_32(
                                                         (0x880U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+1323,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                              >> 8U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t2)))));
            tracep->chgBit(oldp+1324,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                              >> 0xdU) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t5)))));
            tracep->chgBit(oldp+1325,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t2) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t3))));
            tracep->chgBit(oldp+1326,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t4) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6))));
            tracep->chgBit(oldp+1327,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t22));
            tracep->chgBit(oldp+1328,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t23));
            tracep->chgBit(oldp+1329,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t5) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t7))));
            tracep->chgBit(oldp+1330,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t10))));
            tracep->chgBit(oldp+1331,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t9) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t11))));
            tracep->chgBit(oldp+1332,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t10) 
                                             ^ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                                 >> 0xdU) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t5))))));
            tracep->chgBit(oldp+1333,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t11) 
                                       ^ ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6) 
                                          ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t10)))));
            tracep->chgBit(oldp+1334,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                               >> 4U) 
                                              ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                                 >> 9U)) 
                                             ^ ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t4) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6))))));
            tracep->chgCData(oldp+1335,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT____Vcellout__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__fx),8);
            tracep->chgCData(oldp+1336,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                        [1U]),8);
            tracep->chgIData(oldp+1337,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t1),21);
            tracep->chgIData(oldp+1338,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t2),18);
            tracep->chgBit(oldp+1339,((1U & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                       [1U])));
            tracep->chgBit(oldp+1340,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__top__DOT__y1));
            tracep->chgBit(oldp+1341,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__top__DOT__y2));
            tracep->chgBit(oldp+1342,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__top__DOT__y3));
            tracep->chgBit(oldp+1343,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__top__DOT__y4));
            tracep->chgBit(oldp+1344,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__top__DOT__t0));
            tracep->chgBit(oldp+1345,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__top__DOT__y5));
            tracep->chgBit(oldp+1346,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__top__DOT__t1));
            tracep->chgBit(oldp+1347,((1U & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                             [1U] ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__top__DOT__y5)))));
            tracep->chgBit(oldp+1348,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__top__DOT__y7));
            tracep->chgBit(oldp+1349,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__top__DOT__y8));
            tracep->chgBit(oldp+1350,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__top__DOT__t2));
            tracep->chgBit(oldp+1351,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__top__DOT__t3));
            tracep->chgBit(oldp+1352,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__top__DOT__y3) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__top__DOT__y4))));
            tracep->chgBit(oldp+1353,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__top__DOT__y5) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__top__DOT__t2))));
            tracep->chgBit(oldp+1354,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__top__DOT__t0) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__top__DOT__t2))));
            tracep->chgBit(oldp+1355,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__top__DOT__y12));
            tracep->chgBit(oldp+1356,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__top__DOT__y13));
            tracep->chgBit(oldp+1357,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                              [1U] 
                                              >> 4U) 
                                             ^ vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                             [1U]))));
            tracep->chgBit(oldp+1358,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__top__DOT__y14));
            tracep->chgBit(oldp+1359,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__top__DOT__y15));
            tracep->chgBit(oldp+1360,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                              [1U] 
                                              >> 1U) 
                                             ^ vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                             [1U]))));
            tracep->chgBit(oldp+1361,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__top__DOT__y16));
            tracep->chgBit(oldp+1362,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__top__DOT__y2) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__top__DOT__y16))));
            tracep->chgBit(oldp+1363,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__top__DOT__y2) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__top__DOT__y8))));
            tracep->chgBit(oldp+1364,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__top__DOT__y15) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__top__DOT__y13))));
            tracep->chgBit(oldp+1365,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__top__DOT__y1) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__top__DOT__t3))));
            tracep->chgBit(oldp+1366,((1U & VL_REDXOR_32(
                                                         (0x1008U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1367,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1));
            tracep->chgBit(oldp+1368,((IData)((0x20040U 
                                               == (0x20040U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1369,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t1 
                                              >> 0xaU) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1)))));
            tracep->chgBit(oldp+1370,((0x4001U == (0x4001U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t1))));
            tracep->chgBit(oldp+1371,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t1 
                                               >> 0xeU) 
                                              & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t1) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1)))));
            tracep->chgBit(oldp+1372,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6));
            tracep->chgBit(oldp+1373,((IData)((0x10080U 
                                               == (0x10080U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1374,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t1 
                                               >> 3U) 
                                              ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t1 
                                                 >> 0xcU)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6)))));
            tracep->chgBit(oldp+1375,((IData)((0xa000U 
                                               == (0xa000U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1376,((1U & ((0xa000U 
                                              == (0xa000U 
                                                  & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t1)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6)))));
            tracep->chgBit(oldp+1377,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t11));
            tracep->chgBit(oldp+1378,((IData)((0x100010U 
                                               == (0x100010U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1379,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t13));
            tracep->chgBit(oldp+1380,((IData)((0x104U 
                                               == (0x104U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1381,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t15));
            tracep->chgBit(oldp+1382,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t1 
                                               >> 0xaU) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1)) 
                                             ^ (0x20040U 
                                                == 
                                                (0x20040U 
                                                 & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t1))))));
            tracep->chgBit(oldp+1383,((1U & ((((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t1 
                                                >> 0xeU) 
                                               & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t1) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1)) 
                                             ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t1 
                                                >> 0x12U)))));
            tracep->chgBit(oldp+1384,((1U & ((((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t1 
                                                >> 3U) 
                                               ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t1 
                                                  >> 0xcU)) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6)) 
                                             ^ (0x10080U 
                                                == 
                                                (0x10080U 
                                                 & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t1))))));
            tracep->chgBit(oldp+1385,((1U & (((0xa000U 
                                               == (0xa000U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t1)) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t15)))));
            tracep->chgBit(oldp+1386,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t20));
            tracep->chgBit(oldp+1387,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21));
            tracep->chgBit(oldp+1388,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t22));
            tracep->chgBit(oldp+1389,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23));
            tracep->chgBit(oldp+1390,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t24));
            tracep->chgBit(oldp+1391,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25));
            tracep->chgBit(oldp+1392,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+1393,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t27));
            tracep->chgBit(oldp+1394,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+1395,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23) 
                                        ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25)) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t27))));
            tracep->chgBit(oldp+1396,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21) 
                                        ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25)) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t24))));
            tracep->chgBit(oldp+1397,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t20) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23))));
            tracep->chgBit(oldp+1398,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t27) 
                                       & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t20) 
                                          & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23)))));
            tracep->chgBit(oldp+1399,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t27) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+1400,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t22))));
            tracep->chgBit(oldp+1401,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t24) 
                                       & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21) 
                                          & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t22)))));
            tracep->chgBit(oldp+1402,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t24) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+1403,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t37));
            tracep->chgBit(oldp+1404,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t38));
            tracep->chgBit(oldp+1405,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t39));
            tracep->chgBit(oldp+1406,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t40));
            tracep->chgBit(oldp+1407,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t41));
            tracep->chgBit(oldp+1408,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t42));
            tracep->chgBit(oldp+1409,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t43));
            tracep->chgBit(oldp+1410,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t44));
            tracep->chgBit(oldp+1411,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t45));
            tracep->chgBit(oldp+1412,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__out__DOT__t0));
            tracep->chgBit(oldp+1413,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1));
            tracep->chgBit(oldp+1414,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__out__DOT__t2));
            tracep->chgBit(oldp+1415,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__out__DOT__t3));
            tracep->chgBit(oldp+1416,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__out__DOT__t4));
            tracep->chgBit(oldp+1417,((1U & VL_REDXOR_32(
                                                         (0x20800U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t2)))));
            tracep->chgBit(oldp+1418,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__out__DOT__t6));
            tracep->chgBit(oldp+1419,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__out__DOT__t7));
            tracep->chgBit(oldp+1420,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__out__DOT__t8));
            tracep->chgBit(oldp+1421,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__out__DOT__t9));
            tracep->chgBit(oldp+1422,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__out__DOT__t10));
            tracep->chgBit(oldp+1423,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__out__DOT__t11));
            tracep->chgBit(oldp+1424,((1U & VL_REDXOR_32(
                                                         (0x10002U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t2)))));
            tracep->chgBit(oldp+1425,((1U & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t2 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__out__DOT__t0)))));
            tracep->chgBit(oldp+1426,((1U & VL_REDXOR_32(
                                                         (0x804U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t2)))));
            tracep->chgBit(oldp+1427,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 5U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1)))));
            tracep->chgBit(oldp+1428,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 6U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__out__DOT__t0)))));
            tracep->chgBit(oldp+1429,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 7U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1)))));
            tracep->chgBit(oldp+1430,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 8U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__out__DOT__t8)))));
            tracep->chgBit(oldp+1431,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 0xdU) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__out__DOT__t4)))));
            tracep->chgBit(oldp+1432,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__out__DOT__t0) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1))));
            tracep->chgBit(oldp+1433,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__out__DOT__t7))));
            tracep->chgBit(oldp+1434,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__out__DOT__t3) 
                                             ^ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t2 
                                                 >> 0x10U) 
                                                ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t2 
                                                   >> 1U))))));
            tracep->chgBit(oldp+1435,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t2 
                                               >> 8U) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__out__DOT__t8)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__out__DOT__t2)))));
            tracep->chgBit(oldp+1436,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t2 
                                               >> 5U) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__out__DOT__t9)))));
            tracep->chgBit(oldp+1437,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__out__DOT__t6) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__out__DOT__t10))));
            tracep->chgBit(oldp+1438,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__out__DOT__t7) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__out__DOT__t9))));
            tracep->chgBit(oldp+1439,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__out__DOT__t8) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__out__DOT__t10))));
            tracep->chgBit(oldp+1440,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__out__DOT__t11) 
                                             ^ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t2 
                                                 >> 2U) 
                                                ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t2 
                                                   >> 0xbU))))));
            tracep->chgBit(oldp+1441,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__out__DOT__t11) 
                                             ^ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t2 
                                                 >> 7U) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1))))));
            tracep->chgCData(oldp+1442,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT____Vcellout__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__fx),8);
            tracep->chgCData(oldp+1443,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                        [1U]),8);
            tracep->chgIData(oldp+1444,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1),21);
            tracep->chgIData(oldp+1445,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2),18);
            tracep->chgBit(oldp+1446,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y17));
            tracep->chgBit(oldp+1447,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y16));
            tracep->chgBit(oldp+1448,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y2));
            tracep->chgBit(oldp+1449,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y1));
            tracep->chgBit(oldp+1450,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y18));
            tracep->chgBit(oldp+1451,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t0));
            tracep->chgBit(oldp+1452,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y6));
            tracep->chgBit(oldp+1453,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y14));
            tracep->chgBit(oldp+1454,((1U & (~ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                [1U] 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y1))))));
            tracep->chgBit(oldp+1455,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y8));
            tracep->chgBit(oldp+1456,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y2) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t0))));
            tracep->chgBit(oldp+1457,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y1) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t0))));
            tracep->chgBit(oldp+1458,((1U & (~ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                 [1U] 
                                                 >> 5U) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y1))))));
            tracep->chgBit(oldp+1459,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t1));
            tracep->chgBit(oldp+1460,((1U & (~ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                 [1U] 
                                                 >> 5U) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y14))))));
            tracep->chgBit(oldp+1461,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y18) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t1))));
            tracep->chgBit(oldp+1462,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                              [1U] 
                                              >> 3U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y6)))));
            tracep->chgBit(oldp+1463,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t2));
            tracep->chgBit(oldp+1464,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t3));
            tracep->chgBit(oldp+1465,((1U & (~ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                 [1U] 
                                                 >> 5U) 
                                                ^ (
                                                   vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                   [1U] 
                                                   >> 3U))))));
            tracep->chgBit(oldp+1466,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y16) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t2))));
            tracep->chgBit(oldp+1467,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t1) 
                                             ^ (~ (
                                                   (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                    [1U] 
                                                    >> 5U) 
                                                   ^ 
                                                   (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                    [1U] 
                                                    >> 3U)))))));
            tracep->chgBit(oldp+1468,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y20));
            tracep->chgBit(oldp+1469,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y8) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y20))));
            tracep->chgBit(oldp+1470,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y8) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t3))));
            tracep->chgBit(oldp+1471,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                              [1U] 
                                              >> 7U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t2)))));
            tracep->chgBit(oldp+1472,((1U & VL_REDXOR_32(
                                                         (0x1008U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1473,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1));
            tracep->chgBit(oldp+1474,((IData)((0x20040U 
                                               == (0x20040U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1475,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                              >> 0xaU) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1)))));
            tracep->chgBit(oldp+1476,((0x4001U == (0x4001U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1))));
            tracep->chgBit(oldp+1477,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                               >> 0xeU) 
                                              & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1)))));
            tracep->chgBit(oldp+1478,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6));
            tracep->chgBit(oldp+1479,((IData)((0x10080U 
                                               == (0x10080U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1480,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                               >> 3U) 
                                              ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                 >> 0xcU)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6)))));
            tracep->chgBit(oldp+1481,((IData)((0xa000U 
                                               == (0xa000U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1482,((1U & ((0xa000U 
                                              == (0xa000U 
                                                  & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6)))));
            tracep->chgBit(oldp+1483,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t11));
            tracep->chgBit(oldp+1484,((IData)((0x100010U 
                                               == (0x100010U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1485,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t13));
            tracep->chgBit(oldp+1486,((IData)((0x104U 
                                               == (0x104U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1487,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t15));
            tracep->chgBit(oldp+1488,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                               >> 0xaU) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1)) 
                                             ^ (0x20040U 
                                                == 
                                                (0x20040U 
                                                 & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1))))));
            tracep->chgBit(oldp+1489,((1U & ((((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                >> 0xeU) 
                                               & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1)) 
                                             ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                >> 0x12U)))));
            tracep->chgBit(oldp+1490,((1U & ((((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                >> 3U) 
                                               ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                  >> 0xcU)) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6)) 
                                             ^ (0x10080U 
                                                == 
                                                (0x10080U 
                                                 & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1))))));
            tracep->chgBit(oldp+1491,((1U & (((0xa000U 
                                               == (0xa000U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t15)))));
            tracep->chgBit(oldp+1492,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t20));
            tracep->chgBit(oldp+1493,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21));
            tracep->chgBit(oldp+1494,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t22));
            tracep->chgBit(oldp+1495,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23));
            tracep->chgBit(oldp+1496,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t24));
            tracep->chgBit(oldp+1497,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25));
            tracep->chgBit(oldp+1498,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+1499,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t27));
            tracep->chgBit(oldp+1500,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+1501,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23) 
                                        ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25)) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t27))));
            tracep->chgBit(oldp+1502,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21) 
                                        ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25)) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t24))));
            tracep->chgBit(oldp+1503,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t20) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23))));
            tracep->chgBit(oldp+1504,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t27) 
                                       & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t20) 
                                          & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23)))));
            tracep->chgBit(oldp+1505,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t27) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+1506,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t22))));
            tracep->chgBit(oldp+1507,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t24) 
                                       & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21) 
                                          & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t22)))));
            tracep->chgBit(oldp+1508,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t24) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+1509,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t37));
            tracep->chgBit(oldp+1510,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t38));
            tracep->chgBit(oldp+1511,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t39));
            tracep->chgBit(oldp+1512,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t40));
            tracep->chgBit(oldp+1513,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t41));
            tracep->chgBit(oldp+1514,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t42));
            tracep->chgBit(oldp+1515,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t43));
            tracep->chgBit(oldp+1516,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t44));
            tracep->chgBit(oldp+1517,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t45));
            tracep->chgBit(oldp+1518,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t0));
            tracep->chgBit(oldp+1519,((1U & VL_REDXOR_32(
                                                         (0x300U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+1520,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t2));
            tracep->chgBit(oldp+1521,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t3));
            tracep->chgBit(oldp+1522,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t4));
            tracep->chgBit(oldp+1523,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t5));
            tracep->chgBit(oldp+1524,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6));
            tracep->chgBit(oldp+1525,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t7));
            tracep->chgBit(oldp+1526,((1U & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                             ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                                >> 3U)))));
            tracep->chgBit(oldp+1527,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t9));
            tracep->chgBit(oldp+1528,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t10));
            tracep->chgBit(oldp+1529,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t11));
            tracep->chgBit(oldp+1530,((1U & VL_REDXOR_32(
                                                         (0x14000U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+1531,((1U & VL_REDXOR_32(
                                                         (0x20002U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+1532,((1U & VL_REDXOR_32(
                                                         (0x21000U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+1533,((1U & VL_REDXOR_32(
                                                         (0x210U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+1534,((1U & VL_REDXOR_32(
                                                         (0x880U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+1535,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                              >> 8U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t2)))));
            tracep->chgBit(oldp+1536,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                              >> 0xdU) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t5)))));
            tracep->chgBit(oldp+1537,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t2) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t3))));
            tracep->chgBit(oldp+1538,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t4) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6))));
            tracep->chgBit(oldp+1539,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t22));
            tracep->chgBit(oldp+1540,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t23));
            tracep->chgBit(oldp+1541,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t5) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t7))));
            tracep->chgBit(oldp+1542,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t10))));
            tracep->chgBit(oldp+1543,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t9) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t11))));
            tracep->chgBit(oldp+1544,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t10) 
                                             ^ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                                 >> 0xdU) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t5))))));
            tracep->chgBit(oldp+1545,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t11) 
                                       ^ ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6) 
                                          ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t10)))));
            tracep->chgBit(oldp+1546,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                               >> 4U) 
                                              ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                                 >> 9U)) 
                                             ^ ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t4) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6))))));
            tracep->chgCData(oldp+1547,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT____Vcellout__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__fx),8);
            tracep->chgCData(oldp+1548,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                        [2U]),8);
            tracep->chgIData(oldp+1549,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t1),21);
            tracep->chgIData(oldp+1550,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t2),18);
            tracep->chgBit(oldp+1551,((1U & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                       [2U])));
            tracep->chgBit(oldp+1552,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__top__DOT__y1));
            tracep->chgBit(oldp+1553,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__top__DOT__y2));
            tracep->chgBit(oldp+1554,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__top__DOT__y3));
            tracep->chgBit(oldp+1555,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__top__DOT__y4));
            tracep->chgBit(oldp+1556,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__top__DOT__t0));
            tracep->chgBit(oldp+1557,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__top__DOT__y5));
            tracep->chgBit(oldp+1558,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__top__DOT__t1));
            tracep->chgBit(oldp+1559,((1U & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                             [2U] ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__top__DOT__y5)))));
            tracep->chgBit(oldp+1560,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__top__DOT__y7));
            tracep->chgBit(oldp+1561,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__top__DOT__y8));
            tracep->chgBit(oldp+1562,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__top__DOT__t2));
            tracep->chgBit(oldp+1563,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__top__DOT__t3));
            tracep->chgBit(oldp+1564,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__top__DOT__y3) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__top__DOT__y4))));
            tracep->chgBit(oldp+1565,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__top__DOT__y5) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__top__DOT__t2))));
            tracep->chgBit(oldp+1566,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__top__DOT__t0) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__top__DOT__t2))));
            tracep->chgBit(oldp+1567,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__top__DOT__y12));
            tracep->chgBit(oldp+1568,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__top__DOT__y13));
            tracep->chgBit(oldp+1569,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                              [2U] 
                                              >> 4U) 
                                             ^ vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                             [2U]))));
            tracep->chgBit(oldp+1570,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__top__DOT__y14));
            tracep->chgBit(oldp+1571,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__top__DOT__y15));
            tracep->chgBit(oldp+1572,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                              [2U] 
                                              >> 1U) 
                                             ^ vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                             [2U]))));
            tracep->chgBit(oldp+1573,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__top__DOT__y16));
            tracep->chgBit(oldp+1574,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__top__DOT__y2) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__top__DOT__y16))));
            tracep->chgBit(oldp+1575,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__top__DOT__y2) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__top__DOT__y8))));
            tracep->chgBit(oldp+1576,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__top__DOT__y15) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__top__DOT__y13))));
            tracep->chgBit(oldp+1577,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__top__DOT__y1) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__top__DOT__t3))));
            tracep->chgBit(oldp+1578,((1U & VL_REDXOR_32(
                                                         (0x1008U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1579,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1));
            tracep->chgBit(oldp+1580,((IData)((0x20040U 
                                               == (0x20040U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1581,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t1 
                                              >> 0xaU) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1)))));
            tracep->chgBit(oldp+1582,((0x4001U == (0x4001U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t1))));
            tracep->chgBit(oldp+1583,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t1 
                                               >> 0xeU) 
                                              & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t1) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1)))));
            tracep->chgBit(oldp+1584,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6));
            tracep->chgBit(oldp+1585,((IData)((0x10080U 
                                               == (0x10080U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1586,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t1 
                                               >> 3U) 
                                              ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t1 
                                                 >> 0xcU)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6)))));
            tracep->chgBit(oldp+1587,((IData)((0xa000U 
                                               == (0xa000U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1588,((1U & ((0xa000U 
                                              == (0xa000U 
                                                  & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t1)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6)))));
            tracep->chgBit(oldp+1589,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t11));
            tracep->chgBit(oldp+1590,((IData)((0x100010U 
                                               == (0x100010U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1591,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t13));
            tracep->chgBit(oldp+1592,((IData)((0x104U 
                                               == (0x104U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1593,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t15));
            tracep->chgBit(oldp+1594,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t1 
                                               >> 0xaU) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1)) 
                                             ^ (0x20040U 
                                                == 
                                                (0x20040U 
                                                 & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t1))))));
            tracep->chgBit(oldp+1595,((1U & ((((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t1 
                                                >> 0xeU) 
                                               & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t1) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1)) 
                                             ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t1 
                                                >> 0x12U)))));
            tracep->chgBit(oldp+1596,((1U & ((((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t1 
                                                >> 3U) 
                                               ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t1 
                                                  >> 0xcU)) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6)) 
                                             ^ (0x10080U 
                                                == 
                                                (0x10080U 
                                                 & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t1))))));
            tracep->chgBit(oldp+1597,((1U & (((0xa000U 
                                               == (0xa000U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t1)) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t15)))));
            tracep->chgBit(oldp+1598,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t20));
            tracep->chgBit(oldp+1599,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21));
            tracep->chgBit(oldp+1600,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t22));
            tracep->chgBit(oldp+1601,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23));
            tracep->chgBit(oldp+1602,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t24));
            tracep->chgBit(oldp+1603,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25));
            tracep->chgBit(oldp+1604,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+1605,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t27));
            tracep->chgBit(oldp+1606,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+1607,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23) 
                                        ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25)) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t27))));
            tracep->chgBit(oldp+1608,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21) 
                                        ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25)) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t24))));
            tracep->chgBit(oldp+1609,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t20) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23))));
            tracep->chgBit(oldp+1610,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t27) 
                                       & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t20) 
                                          & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23)))));
            tracep->chgBit(oldp+1611,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t27) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+1612,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t22))));
            tracep->chgBit(oldp+1613,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t24) 
                                       & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21) 
                                          & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t22)))));
            tracep->chgBit(oldp+1614,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t24) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+1615,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t37));
            tracep->chgBit(oldp+1616,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t38));
            tracep->chgBit(oldp+1617,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t39));
            tracep->chgBit(oldp+1618,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t40));
            tracep->chgBit(oldp+1619,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t41));
            tracep->chgBit(oldp+1620,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t42));
            tracep->chgBit(oldp+1621,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t43));
            tracep->chgBit(oldp+1622,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t44));
            tracep->chgBit(oldp+1623,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t45));
            tracep->chgBit(oldp+1624,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__out__DOT__t0));
            tracep->chgBit(oldp+1625,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1));
            tracep->chgBit(oldp+1626,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__out__DOT__t2));
            tracep->chgBit(oldp+1627,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__out__DOT__t3));
            tracep->chgBit(oldp+1628,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__out__DOT__t4));
            tracep->chgBit(oldp+1629,((1U & VL_REDXOR_32(
                                                         (0x20800U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t2)))));
            tracep->chgBit(oldp+1630,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__out__DOT__t6));
            tracep->chgBit(oldp+1631,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__out__DOT__t7));
            tracep->chgBit(oldp+1632,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__out__DOT__t8));
            tracep->chgBit(oldp+1633,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__out__DOT__t9));
            tracep->chgBit(oldp+1634,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__out__DOT__t10));
            tracep->chgBit(oldp+1635,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__out__DOT__t11));
            tracep->chgBit(oldp+1636,((1U & VL_REDXOR_32(
                                                         (0x10002U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t2)))));
            tracep->chgBit(oldp+1637,((1U & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t2 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__out__DOT__t0)))));
            tracep->chgBit(oldp+1638,((1U & VL_REDXOR_32(
                                                         (0x804U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t2)))));
            tracep->chgBit(oldp+1639,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 5U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1)))));
            tracep->chgBit(oldp+1640,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 6U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__out__DOT__t0)))));
            tracep->chgBit(oldp+1641,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 7U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1)))));
            tracep->chgBit(oldp+1642,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 8U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__out__DOT__t8)))));
            tracep->chgBit(oldp+1643,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 0xdU) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__out__DOT__t4)))));
            tracep->chgBit(oldp+1644,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__out__DOT__t0) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1))));
            tracep->chgBit(oldp+1645,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__out__DOT__t7))));
            tracep->chgBit(oldp+1646,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__out__DOT__t3) 
                                             ^ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t2 
                                                 >> 0x10U) 
                                                ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t2 
                                                   >> 1U))))));
            tracep->chgBit(oldp+1647,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t2 
                                               >> 8U) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__out__DOT__t8)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__out__DOT__t2)))));
            tracep->chgBit(oldp+1648,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t2 
                                               >> 5U) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__out__DOT__t9)))));
            tracep->chgBit(oldp+1649,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__out__DOT__t6) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__out__DOT__t10))));
            tracep->chgBit(oldp+1650,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__out__DOT__t7) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__out__DOT__t9))));
            tracep->chgBit(oldp+1651,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__out__DOT__t8) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__out__DOT__t10))));
            tracep->chgBit(oldp+1652,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__out__DOT__t11) 
                                             ^ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t2 
                                                 >> 2U) 
                                                ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t2 
                                                   >> 0xbU))))));
            tracep->chgBit(oldp+1653,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__out__DOT__t11) 
                                             ^ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t2 
                                                 >> 7U) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1))))));
            tracep->chgCData(oldp+1654,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT____Vcellout__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__fx),8);
            tracep->chgCData(oldp+1655,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                        [2U]),8);
            tracep->chgIData(oldp+1656,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1),21);
            tracep->chgIData(oldp+1657,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2),18);
            tracep->chgBit(oldp+1658,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y17));
            tracep->chgBit(oldp+1659,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y16));
            tracep->chgBit(oldp+1660,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y2));
            tracep->chgBit(oldp+1661,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y1));
            tracep->chgBit(oldp+1662,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y18));
            tracep->chgBit(oldp+1663,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t0));
            tracep->chgBit(oldp+1664,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y6));
            tracep->chgBit(oldp+1665,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y14));
            tracep->chgBit(oldp+1666,((1U & (~ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                [2U] 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y1))))));
            tracep->chgBit(oldp+1667,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y8));
            tracep->chgBit(oldp+1668,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y2) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t0))));
            tracep->chgBit(oldp+1669,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y1) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t0))));
            tracep->chgBit(oldp+1670,((1U & (~ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                 [2U] 
                                                 >> 5U) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y1))))));
            tracep->chgBit(oldp+1671,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t1));
            tracep->chgBit(oldp+1672,((1U & (~ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                 [2U] 
                                                 >> 5U) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y14))))));
            tracep->chgBit(oldp+1673,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y18) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t1))));
            tracep->chgBit(oldp+1674,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                              [2U] 
                                              >> 3U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y6)))));
            tracep->chgBit(oldp+1675,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t2));
            tracep->chgBit(oldp+1676,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t3));
            tracep->chgBit(oldp+1677,((1U & (~ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                 [2U] 
                                                 >> 5U) 
                                                ^ (
                                                   vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                   [2U] 
                                                   >> 3U))))));
            tracep->chgBit(oldp+1678,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y16) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t2))));
            tracep->chgBit(oldp+1679,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t1) 
                                             ^ (~ (
                                                   (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                    [2U] 
                                                    >> 5U) 
                                                   ^ 
                                                   (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                    [2U] 
                                                    >> 3U)))))));
            tracep->chgBit(oldp+1680,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y20));
            tracep->chgBit(oldp+1681,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y8) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y20))));
            tracep->chgBit(oldp+1682,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y8) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t3))));
            tracep->chgBit(oldp+1683,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                              [2U] 
                                              >> 7U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t2)))));
            tracep->chgBit(oldp+1684,((1U & VL_REDXOR_32(
                                                         (0x1008U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1685,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1));
            tracep->chgBit(oldp+1686,((IData)((0x20040U 
                                               == (0x20040U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1687,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                              >> 0xaU) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1)))));
            tracep->chgBit(oldp+1688,((0x4001U == (0x4001U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1))));
            tracep->chgBit(oldp+1689,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                               >> 0xeU) 
                                              & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1)))));
            tracep->chgBit(oldp+1690,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6));
            tracep->chgBit(oldp+1691,((IData)((0x10080U 
                                               == (0x10080U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1692,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                               >> 3U) 
                                              ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                 >> 0xcU)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6)))));
            tracep->chgBit(oldp+1693,((IData)((0xa000U 
                                               == (0xa000U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1694,((1U & ((0xa000U 
                                              == (0xa000U 
                                                  & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6)))));
            tracep->chgBit(oldp+1695,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t11));
            tracep->chgBit(oldp+1696,((IData)((0x100010U 
                                               == (0x100010U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1697,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t13));
            tracep->chgBit(oldp+1698,((IData)((0x104U 
                                               == (0x104U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1699,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t15));
            tracep->chgBit(oldp+1700,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                               >> 0xaU) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1)) 
                                             ^ (0x20040U 
                                                == 
                                                (0x20040U 
                                                 & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1))))));
            tracep->chgBit(oldp+1701,((1U & ((((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                >> 0xeU) 
                                               & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1)) 
                                             ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                >> 0x12U)))));
            tracep->chgBit(oldp+1702,((1U & ((((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                >> 3U) 
                                               ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                  >> 0xcU)) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6)) 
                                             ^ (0x10080U 
                                                == 
                                                (0x10080U 
                                                 & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1))))));
            tracep->chgBit(oldp+1703,((1U & (((0xa000U 
                                               == (0xa000U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t15)))));
            tracep->chgBit(oldp+1704,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t20));
            tracep->chgBit(oldp+1705,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21));
            tracep->chgBit(oldp+1706,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t22));
            tracep->chgBit(oldp+1707,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23));
            tracep->chgBit(oldp+1708,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t24));
            tracep->chgBit(oldp+1709,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25));
            tracep->chgBit(oldp+1710,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+1711,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t27));
            tracep->chgBit(oldp+1712,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+1713,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23) 
                                        ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25)) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t27))));
            tracep->chgBit(oldp+1714,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21) 
                                        ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25)) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t24))));
            tracep->chgBit(oldp+1715,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t20) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23))));
            tracep->chgBit(oldp+1716,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t27) 
                                       & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t20) 
                                          & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23)))));
            tracep->chgBit(oldp+1717,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t27) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+1718,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t22))));
            tracep->chgBit(oldp+1719,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t24) 
                                       & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21) 
                                          & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t22)))));
            tracep->chgBit(oldp+1720,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t24) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+1721,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t37));
            tracep->chgBit(oldp+1722,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t38));
            tracep->chgBit(oldp+1723,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t39));
            tracep->chgBit(oldp+1724,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t40));
            tracep->chgBit(oldp+1725,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t41));
            tracep->chgBit(oldp+1726,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t42));
            tracep->chgBit(oldp+1727,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t43));
            tracep->chgBit(oldp+1728,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t44));
            tracep->chgBit(oldp+1729,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t45));
            tracep->chgBit(oldp+1730,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t0));
            tracep->chgBit(oldp+1731,((1U & VL_REDXOR_32(
                                                         (0x300U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+1732,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t2));
            tracep->chgBit(oldp+1733,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t3));
            tracep->chgBit(oldp+1734,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t4));
            tracep->chgBit(oldp+1735,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t5));
            tracep->chgBit(oldp+1736,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6));
            tracep->chgBit(oldp+1737,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t7));
            tracep->chgBit(oldp+1738,((1U & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                             ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                                >> 3U)))));
            tracep->chgBit(oldp+1739,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t9));
            tracep->chgBit(oldp+1740,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t10));
            tracep->chgBit(oldp+1741,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t11));
            tracep->chgBit(oldp+1742,((1U & VL_REDXOR_32(
                                                         (0x14000U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+1743,((1U & VL_REDXOR_32(
                                                         (0x20002U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+1744,((1U & VL_REDXOR_32(
                                                         (0x21000U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+1745,((1U & VL_REDXOR_32(
                                                         (0x210U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+1746,((1U & VL_REDXOR_32(
                                                         (0x880U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+1747,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                              >> 8U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t2)))));
            tracep->chgBit(oldp+1748,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                              >> 0xdU) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t5)))));
            tracep->chgBit(oldp+1749,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t2) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t3))));
            tracep->chgBit(oldp+1750,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t4) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6))));
            tracep->chgBit(oldp+1751,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t22));
            tracep->chgBit(oldp+1752,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t23));
            tracep->chgBit(oldp+1753,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t5) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t7))));
            tracep->chgBit(oldp+1754,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t10))));
            tracep->chgBit(oldp+1755,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t9) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t11))));
            tracep->chgBit(oldp+1756,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t10) 
                                             ^ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                                 >> 0xdU) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t5))))));
            tracep->chgBit(oldp+1757,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t11) 
                                       ^ ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6) 
                                          ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t10)))));
            tracep->chgBit(oldp+1758,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                               >> 4U) 
                                              ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                                 >> 9U)) 
                                             ^ ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t4) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6))))));
            tracep->chgCData(oldp+1759,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT____Vcellout__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__fx),8);
            tracep->chgCData(oldp+1760,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                        [3U]),8);
            tracep->chgIData(oldp+1761,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t1),21);
            tracep->chgIData(oldp+1762,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t2),18);
            tracep->chgBit(oldp+1763,((1U & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                       [3U])));
            tracep->chgBit(oldp+1764,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__top__DOT__y1));
            tracep->chgBit(oldp+1765,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__top__DOT__y2));
            tracep->chgBit(oldp+1766,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__top__DOT__y3));
            tracep->chgBit(oldp+1767,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__top__DOT__y4));
            tracep->chgBit(oldp+1768,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__top__DOT__t0));
            tracep->chgBit(oldp+1769,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__top__DOT__y5));
            tracep->chgBit(oldp+1770,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__top__DOT__t1));
            tracep->chgBit(oldp+1771,((1U & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                             [3U] ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__top__DOT__y5)))));
            tracep->chgBit(oldp+1772,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__top__DOT__y7));
            tracep->chgBit(oldp+1773,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__top__DOT__y8));
            tracep->chgBit(oldp+1774,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__top__DOT__t2));
            tracep->chgBit(oldp+1775,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__top__DOT__t3));
            tracep->chgBit(oldp+1776,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__top__DOT__y3) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__top__DOT__y4))));
            tracep->chgBit(oldp+1777,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__top__DOT__y5) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__top__DOT__t2))));
            tracep->chgBit(oldp+1778,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__top__DOT__t0) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__top__DOT__t2))));
            tracep->chgBit(oldp+1779,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__top__DOT__y12));
            tracep->chgBit(oldp+1780,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__top__DOT__y13));
            tracep->chgBit(oldp+1781,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                              [3U] 
                                              >> 4U) 
                                             ^ vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                             [3U]))));
            tracep->chgBit(oldp+1782,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__top__DOT__y14));
            tracep->chgBit(oldp+1783,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__top__DOT__y15));
            tracep->chgBit(oldp+1784,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                              [3U] 
                                              >> 1U) 
                                             ^ vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                             [3U]))));
            tracep->chgBit(oldp+1785,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__top__DOT__y16));
            tracep->chgBit(oldp+1786,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__top__DOT__y2) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__top__DOT__y16))));
            tracep->chgBit(oldp+1787,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__top__DOT__y2) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__top__DOT__y8))));
            tracep->chgBit(oldp+1788,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__top__DOT__y15) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__top__DOT__y13))));
            tracep->chgBit(oldp+1789,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__top__DOT__y1) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__top__DOT__t3))));
            tracep->chgBit(oldp+1790,((1U & VL_REDXOR_32(
                                                         (0x1008U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1791,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1));
            tracep->chgBit(oldp+1792,((IData)((0x20040U 
                                               == (0x20040U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1793,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t1 
                                              >> 0xaU) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1)))));
            tracep->chgBit(oldp+1794,((0x4001U == (0x4001U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t1))));
            tracep->chgBit(oldp+1795,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t1 
                                               >> 0xeU) 
                                              & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t1) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1)))));
            tracep->chgBit(oldp+1796,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6));
            tracep->chgBit(oldp+1797,((IData)((0x10080U 
                                               == (0x10080U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1798,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t1 
                                               >> 3U) 
                                              ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t1 
                                                 >> 0xcU)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6)))));
            tracep->chgBit(oldp+1799,((IData)((0xa000U 
                                               == (0xa000U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1800,((1U & ((0xa000U 
                                              == (0xa000U 
                                                  & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t1)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6)))));
            tracep->chgBit(oldp+1801,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t11));
            tracep->chgBit(oldp+1802,((IData)((0x100010U 
                                               == (0x100010U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1803,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t13));
            tracep->chgBit(oldp+1804,((IData)((0x104U 
                                               == (0x104U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1805,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t15));
            tracep->chgBit(oldp+1806,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t1 
                                               >> 0xaU) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1)) 
                                             ^ (0x20040U 
                                                == 
                                                (0x20040U 
                                                 & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t1))))));
            tracep->chgBit(oldp+1807,((1U & ((((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t1 
                                                >> 0xeU) 
                                               & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t1) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1)) 
                                             ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t1 
                                                >> 0x12U)))));
            tracep->chgBit(oldp+1808,((1U & ((((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t1 
                                                >> 3U) 
                                               ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t1 
                                                  >> 0xcU)) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6)) 
                                             ^ (0x10080U 
                                                == 
                                                (0x10080U 
                                                 & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t1))))));
            tracep->chgBit(oldp+1809,((1U & (((0xa000U 
                                               == (0xa000U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t1)) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t15)))));
            tracep->chgBit(oldp+1810,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t20));
            tracep->chgBit(oldp+1811,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21));
            tracep->chgBit(oldp+1812,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t22));
            tracep->chgBit(oldp+1813,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23));
            tracep->chgBit(oldp+1814,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t24));
            tracep->chgBit(oldp+1815,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25));
            tracep->chgBit(oldp+1816,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+1817,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t27));
            tracep->chgBit(oldp+1818,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+1819,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23) 
                                        ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25)) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t27))));
            tracep->chgBit(oldp+1820,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21) 
                                        ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25)) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t24))));
            tracep->chgBit(oldp+1821,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t20) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23))));
            tracep->chgBit(oldp+1822,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t27) 
                                       & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t20) 
                                          & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23)))));
            tracep->chgBit(oldp+1823,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t27) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+1824,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t22))));
            tracep->chgBit(oldp+1825,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t24) 
                                       & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21) 
                                          & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t22)))));
            tracep->chgBit(oldp+1826,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t24) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+1827,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t37));
            tracep->chgBit(oldp+1828,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t38));
            tracep->chgBit(oldp+1829,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t39));
            tracep->chgBit(oldp+1830,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t40));
            tracep->chgBit(oldp+1831,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t41));
            tracep->chgBit(oldp+1832,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t42));
            tracep->chgBit(oldp+1833,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t43));
            tracep->chgBit(oldp+1834,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t44));
            tracep->chgBit(oldp+1835,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t45));
            tracep->chgBit(oldp+1836,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__out__DOT__t0));
            tracep->chgBit(oldp+1837,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1));
            tracep->chgBit(oldp+1838,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__out__DOT__t2));
            tracep->chgBit(oldp+1839,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__out__DOT__t3));
            tracep->chgBit(oldp+1840,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__out__DOT__t4));
            tracep->chgBit(oldp+1841,((1U & VL_REDXOR_32(
                                                         (0x20800U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t2)))));
            tracep->chgBit(oldp+1842,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__out__DOT__t6));
            tracep->chgBit(oldp+1843,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__out__DOT__t7));
            tracep->chgBit(oldp+1844,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__out__DOT__t8));
            tracep->chgBit(oldp+1845,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__out__DOT__t9));
            tracep->chgBit(oldp+1846,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__out__DOT__t10));
            tracep->chgBit(oldp+1847,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__out__DOT__t11));
            tracep->chgBit(oldp+1848,((1U & VL_REDXOR_32(
                                                         (0x10002U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t2)))));
            tracep->chgBit(oldp+1849,((1U & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t2 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__out__DOT__t0)))));
            tracep->chgBit(oldp+1850,((1U & VL_REDXOR_32(
                                                         (0x804U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t2)))));
            tracep->chgBit(oldp+1851,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 5U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1)))));
            tracep->chgBit(oldp+1852,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 6U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__out__DOT__t0)))));
            tracep->chgBit(oldp+1853,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 7U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1)))));
            tracep->chgBit(oldp+1854,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 8U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__out__DOT__t8)))));
            tracep->chgBit(oldp+1855,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 0xdU) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__out__DOT__t4)))));
            tracep->chgBit(oldp+1856,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__out__DOT__t0) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1))));
            tracep->chgBit(oldp+1857,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__out__DOT__t7))));
            tracep->chgBit(oldp+1858,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__out__DOT__t3) 
                                             ^ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t2 
                                                 >> 0x10U) 
                                                ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t2 
                                                   >> 1U))))));
            tracep->chgBit(oldp+1859,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t2 
                                               >> 8U) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__out__DOT__t8)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__out__DOT__t2)))));
            tracep->chgBit(oldp+1860,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t2 
                                               >> 5U) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__out__DOT__t9)))));
            tracep->chgBit(oldp+1861,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__out__DOT__t6) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__out__DOT__t10))));
            tracep->chgBit(oldp+1862,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__out__DOT__t7) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__out__DOT__t9))));
            tracep->chgBit(oldp+1863,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__out__DOT__t8) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__out__DOT__t10))));
            tracep->chgBit(oldp+1864,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__out__DOT__t11) 
                                             ^ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t2 
                                                 >> 2U) 
                                                ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t2 
                                                   >> 0xbU))))));
            tracep->chgBit(oldp+1865,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__out__DOT__t11) 
                                             ^ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t2 
                                                 >> 7U) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1))))));
            tracep->chgCData(oldp+1866,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT____Vcellout__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__fx),8);
            tracep->chgCData(oldp+1867,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                        [3U]),8);
            tracep->chgIData(oldp+1868,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1),21);
            tracep->chgIData(oldp+1869,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2),18);
            tracep->chgBit(oldp+1870,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y17));
            tracep->chgBit(oldp+1871,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y16));
            tracep->chgBit(oldp+1872,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y2));
            tracep->chgBit(oldp+1873,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y1));
            tracep->chgBit(oldp+1874,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y18));
            tracep->chgBit(oldp+1875,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t0));
            tracep->chgBit(oldp+1876,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y6));
            tracep->chgBit(oldp+1877,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y14));
            tracep->chgBit(oldp+1878,((1U & (~ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                [3U] 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y1))))));
            tracep->chgBit(oldp+1879,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y8));
            tracep->chgBit(oldp+1880,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y2) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t0))));
            tracep->chgBit(oldp+1881,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y1) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t0))));
            tracep->chgBit(oldp+1882,((1U & (~ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                 [3U] 
                                                 >> 5U) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y1))))));
            tracep->chgBit(oldp+1883,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t1));
            tracep->chgBit(oldp+1884,((1U & (~ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                 [3U] 
                                                 >> 5U) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y14))))));
            tracep->chgBit(oldp+1885,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y18) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t1))));
            tracep->chgBit(oldp+1886,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                              [3U] 
                                              >> 3U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y6)))));
            tracep->chgBit(oldp+1887,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t2));
            tracep->chgBit(oldp+1888,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t3));
            tracep->chgBit(oldp+1889,((1U & (~ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                 [3U] 
                                                 >> 5U) 
                                                ^ (
                                                   vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                   [3U] 
                                                   >> 3U))))));
            tracep->chgBit(oldp+1890,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y16) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t2))));
            tracep->chgBit(oldp+1891,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t1) 
                                             ^ (~ (
                                                   (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                    [3U] 
                                                    >> 5U) 
                                                   ^ 
                                                   (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                    [3U] 
                                                    >> 3U)))))));
            tracep->chgBit(oldp+1892,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y20));
            tracep->chgBit(oldp+1893,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y8) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y20))));
            tracep->chgBit(oldp+1894,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y8) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t3))));
            tracep->chgBit(oldp+1895,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                              [3U] 
                                              >> 7U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t2)))));
            tracep->chgBit(oldp+1896,((1U & VL_REDXOR_32(
                                                         (0x1008U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1897,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1));
            tracep->chgBit(oldp+1898,((IData)((0x20040U 
                                               == (0x20040U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1899,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                              >> 0xaU) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1)))));
            tracep->chgBit(oldp+1900,((0x4001U == (0x4001U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1))));
            tracep->chgBit(oldp+1901,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                               >> 0xeU) 
                                              & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1)))));
            tracep->chgBit(oldp+1902,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6));
            tracep->chgBit(oldp+1903,((IData)((0x10080U 
                                               == (0x10080U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1904,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                               >> 3U) 
                                              ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                 >> 0xcU)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6)))));
            tracep->chgBit(oldp+1905,((IData)((0xa000U 
                                               == (0xa000U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1906,((1U & ((0xa000U 
                                              == (0xa000U 
                                                  & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6)))));
            tracep->chgBit(oldp+1907,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t11));
            tracep->chgBit(oldp+1908,((IData)((0x100010U 
                                               == (0x100010U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1909,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t13));
            tracep->chgBit(oldp+1910,((IData)((0x104U 
                                               == (0x104U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1911,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t15));
            tracep->chgBit(oldp+1912,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                               >> 0xaU) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1)) 
                                             ^ (0x20040U 
                                                == 
                                                (0x20040U 
                                                 & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1))))));
            tracep->chgBit(oldp+1913,((1U & ((((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                >> 0xeU) 
                                               & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1)) 
                                             ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                >> 0x12U)))));
            tracep->chgBit(oldp+1914,((1U & ((((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                >> 3U) 
                                               ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                  >> 0xcU)) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6)) 
                                             ^ (0x10080U 
                                                == 
                                                (0x10080U 
                                                 & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1))))));
            tracep->chgBit(oldp+1915,((1U & (((0xa000U 
                                               == (0xa000U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t15)))));
            tracep->chgBit(oldp+1916,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t20));
            tracep->chgBit(oldp+1917,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21));
            tracep->chgBit(oldp+1918,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t22));
            tracep->chgBit(oldp+1919,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23));
            tracep->chgBit(oldp+1920,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t24));
            tracep->chgBit(oldp+1921,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25));
            tracep->chgBit(oldp+1922,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+1923,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t27));
            tracep->chgBit(oldp+1924,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+1925,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23) 
                                        ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25)) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t27))));
            tracep->chgBit(oldp+1926,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21) 
                                        ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25)) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t24))));
            tracep->chgBit(oldp+1927,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t20) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23))));
            tracep->chgBit(oldp+1928,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t27) 
                                       & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t20) 
                                          & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23)))));
            tracep->chgBit(oldp+1929,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t27) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+1930,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t22))));
            tracep->chgBit(oldp+1931,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t24) 
                                       & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21) 
                                          & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t22)))));
            tracep->chgBit(oldp+1932,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t24) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+1933,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t37));
            tracep->chgBit(oldp+1934,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t38));
            tracep->chgBit(oldp+1935,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t39));
            tracep->chgBit(oldp+1936,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t40));
            tracep->chgBit(oldp+1937,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t41));
            tracep->chgBit(oldp+1938,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t42));
            tracep->chgBit(oldp+1939,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t43));
            tracep->chgBit(oldp+1940,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t44));
            tracep->chgBit(oldp+1941,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t45));
            tracep->chgBit(oldp+1942,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t0));
            tracep->chgBit(oldp+1943,((1U & VL_REDXOR_32(
                                                         (0x300U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+1944,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t2));
            tracep->chgBit(oldp+1945,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t3));
            tracep->chgBit(oldp+1946,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t4));
            tracep->chgBit(oldp+1947,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t5));
            tracep->chgBit(oldp+1948,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6));
            tracep->chgBit(oldp+1949,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t7));
            tracep->chgBit(oldp+1950,((1U & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                             ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                                >> 3U)))));
            tracep->chgBit(oldp+1951,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t9));
            tracep->chgBit(oldp+1952,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t10));
            tracep->chgBit(oldp+1953,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t11));
            tracep->chgBit(oldp+1954,((1U & VL_REDXOR_32(
                                                         (0x14000U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+1955,((1U & VL_REDXOR_32(
                                                         (0x20002U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+1956,((1U & VL_REDXOR_32(
                                                         (0x21000U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+1957,((1U & VL_REDXOR_32(
                                                         (0x210U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+1958,((1U & VL_REDXOR_32(
                                                         (0x880U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+1959,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                              >> 8U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t2)))));
            tracep->chgBit(oldp+1960,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                              >> 0xdU) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t5)))));
            tracep->chgBit(oldp+1961,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t2) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t3))));
            tracep->chgBit(oldp+1962,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t4) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6))));
            tracep->chgBit(oldp+1963,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t22));
            tracep->chgBit(oldp+1964,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t23));
            tracep->chgBit(oldp+1965,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t5) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t7))));
            tracep->chgBit(oldp+1966,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t10))));
            tracep->chgBit(oldp+1967,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t9) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t11))));
            tracep->chgBit(oldp+1968,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t10) 
                                             ^ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                                 >> 0xdU) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t5))))));
            tracep->chgBit(oldp+1969,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t11) 
                                       ^ ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6) 
                                          ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t10)))));
            tracep->chgBit(oldp+1970,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                               >> 4U) 
                                              ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                                 >> 9U)) 
                                             ^ ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t4) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6))))));
            tracep->chgCData(oldp+1971,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT____Vcellout__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__fx),8);
            tracep->chgCData(oldp+1972,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                        [4U]),8);
            tracep->chgIData(oldp+1973,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t1),21);
            tracep->chgIData(oldp+1974,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t2),18);
            tracep->chgBit(oldp+1975,((1U & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                       [4U])));
            tracep->chgBit(oldp+1976,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__top__DOT__y1));
            tracep->chgBit(oldp+1977,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__top__DOT__y2));
            tracep->chgBit(oldp+1978,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__top__DOT__y3));
            tracep->chgBit(oldp+1979,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__top__DOT__y4));
            tracep->chgBit(oldp+1980,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__top__DOT__t0));
            tracep->chgBit(oldp+1981,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__top__DOT__y5));
            tracep->chgBit(oldp+1982,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__top__DOT__t1));
            tracep->chgBit(oldp+1983,((1U & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                             [4U] ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__top__DOT__y5)))));
            tracep->chgBit(oldp+1984,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__top__DOT__y7));
            tracep->chgBit(oldp+1985,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__top__DOT__y8));
            tracep->chgBit(oldp+1986,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__top__DOT__t2));
            tracep->chgBit(oldp+1987,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__top__DOT__t3));
            tracep->chgBit(oldp+1988,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__top__DOT__y3) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__top__DOT__y4))));
            tracep->chgBit(oldp+1989,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__top__DOT__y5) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__top__DOT__t2))));
            tracep->chgBit(oldp+1990,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__top__DOT__t0) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__top__DOT__t2))));
            tracep->chgBit(oldp+1991,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__top__DOT__y12));
            tracep->chgBit(oldp+1992,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__top__DOT__y13));
            tracep->chgBit(oldp+1993,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                              [4U] 
                                              >> 4U) 
                                             ^ vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                             [4U]))));
            tracep->chgBit(oldp+1994,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__top__DOT__y14));
            tracep->chgBit(oldp+1995,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__top__DOT__y15));
            tracep->chgBit(oldp+1996,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                              [4U] 
                                              >> 1U) 
                                             ^ vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                             [4U]))));
            tracep->chgBit(oldp+1997,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__top__DOT__y16));
            tracep->chgBit(oldp+1998,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__top__DOT__y2) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__top__DOT__y16))));
            tracep->chgBit(oldp+1999,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__top__DOT__y2) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__top__DOT__y8))));
            tracep->chgBit(oldp+2000,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__top__DOT__y15) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__top__DOT__y13))));
            tracep->chgBit(oldp+2001,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__top__DOT__y1) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__top__DOT__t3))));
            tracep->chgBit(oldp+2002,((1U & VL_REDXOR_32(
                                                         (0x1008U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2003,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1));
            tracep->chgBit(oldp+2004,((IData)((0x20040U 
                                               == (0x20040U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2005,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t1 
                                              >> 0xaU) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1)))));
            tracep->chgBit(oldp+2006,((0x4001U == (0x4001U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t1))));
            tracep->chgBit(oldp+2007,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t1 
                                               >> 0xeU) 
                                              & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t1) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1)))));
            tracep->chgBit(oldp+2008,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6));
            tracep->chgBit(oldp+2009,((IData)((0x10080U 
                                               == (0x10080U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2010,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t1 
                                               >> 3U) 
                                              ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t1 
                                                 >> 0xcU)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6)))));
            tracep->chgBit(oldp+2011,((IData)((0xa000U 
                                               == (0xa000U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2012,((1U & ((0xa000U 
                                              == (0xa000U 
                                                  & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t1)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6)))));
            tracep->chgBit(oldp+2013,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t11));
            tracep->chgBit(oldp+2014,((IData)((0x100010U 
                                               == (0x100010U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2015,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t13));
            tracep->chgBit(oldp+2016,((IData)((0x104U 
                                               == (0x104U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2017,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t15));
            tracep->chgBit(oldp+2018,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t1 
                                               >> 0xaU) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1)) 
                                             ^ (0x20040U 
                                                == 
                                                (0x20040U 
                                                 & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t1))))));
            tracep->chgBit(oldp+2019,((1U & ((((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t1 
                                                >> 0xeU) 
                                               & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t1) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1)) 
                                             ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t1 
                                                >> 0x12U)))));
            tracep->chgBit(oldp+2020,((1U & ((((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t1 
                                                >> 3U) 
                                               ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t1 
                                                  >> 0xcU)) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6)) 
                                             ^ (0x10080U 
                                                == 
                                                (0x10080U 
                                                 & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t1))))));
            tracep->chgBit(oldp+2021,((1U & (((0xa000U 
                                               == (0xa000U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t1)) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t15)))));
            tracep->chgBit(oldp+2022,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t20));
            tracep->chgBit(oldp+2023,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21));
            tracep->chgBit(oldp+2024,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t22));
            tracep->chgBit(oldp+2025,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23));
            tracep->chgBit(oldp+2026,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t24));
            tracep->chgBit(oldp+2027,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25));
            tracep->chgBit(oldp+2028,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+2029,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t27));
            tracep->chgBit(oldp+2030,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+2031,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23) 
                                        ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25)) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t27))));
            tracep->chgBit(oldp+2032,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21) 
                                        ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25)) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t24))));
            tracep->chgBit(oldp+2033,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t20) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23))));
            tracep->chgBit(oldp+2034,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t27) 
                                       & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t20) 
                                          & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23)))));
            tracep->chgBit(oldp+2035,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t27) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+2036,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t22))));
            tracep->chgBit(oldp+2037,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t24) 
                                       & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21) 
                                          & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t22)))));
            tracep->chgBit(oldp+2038,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t24) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+2039,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t37));
            tracep->chgBit(oldp+2040,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t38));
            tracep->chgBit(oldp+2041,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t39));
            tracep->chgBit(oldp+2042,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t40));
            tracep->chgBit(oldp+2043,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t41));
            tracep->chgBit(oldp+2044,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t42));
            tracep->chgBit(oldp+2045,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t43));
            tracep->chgBit(oldp+2046,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t44));
            tracep->chgBit(oldp+2047,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t45));
            tracep->chgBit(oldp+2048,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__out__DOT__t0));
            tracep->chgBit(oldp+2049,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1));
            tracep->chgBit(oldp+2050,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__out__DOT__t2));
            tracep->chgBit(oldp+2051,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__out__DOT__t3));
            tracep->chgBit(oldp+2052,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__out__DOT__t4));
            tracep->chgBit(oldp+2053,((1U & VL_REDXOR_32(
                                                         (0x20800U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t2)))));
            tracep->chgBit(oldp+2054,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__out__DOT__t6));
            tracep->chgBit(oldp+2055,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__out__DOT__t7));
            tracep->chgBit(oldp+2056,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__out__DOT__t8));
            tracep->chgBit(oldp+2057,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__out__DOT__t9));
            tracep->chgBit(oldp+2058,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__out__DOT__t10));
            tracep->chgBit(oldp+2059,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__out__DOT__t11));
            tracep->chgBit(oldp+2060,((1U & VL_REDXOR_32(
                                                         (0x10002U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t2)))));
            tracep->chgBit(oldp+2061,((1U & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t2 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__out__DOT__t0)))));
            tracep->chgBit(oldp+2062,((1U & VL_REDXOR_32(
                                                         (0x804U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t2)))));
            tracep->chgBit(oldp+2063,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 5U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1)))));
            tracep->chgBit(oldp+2064,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 6U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__out__DOT__t0)))));
            tracep->chgBit(oldp+2065,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 7U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1)))));
            tracep->chgBit(oldp+2066,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 8U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__out__DOT__t8)))));
            tracep->chgBit(oldp+2067,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 0xdU) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__out__DOT__t4)))));
            tracep->chgBit(oldp+2068,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__out__DOT__t0) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1))));
            tracep->chgBit(oldp+2069,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__out__DOT__t7))));
            tracep->chgBit(oldp+2070,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__out__DOT__t3) 
                                             ^ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t2 
                                                 >> 0x10U) 
                                                ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t2 
                                                   >> 1U))))));
            tracep->chgBit(oldp+2071,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t2 
                                               >> 8U) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__out__DOT__t8)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__out__DOT__t2)))));
            tracep->chgBit(oldp+2072,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t2 
                                               >> 5U) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__out__DOT__t9)))));
            tracep->chgBit(oldp+2073,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__out__DOT__t6) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__out__DOT__t10))));
            tracep->chgBit(oldp+2074,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__out__DOT__t7) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__out__DOT__t9))));
            tracep->chgBit(oldp+2075,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__out__DOT__t8) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__out__DOT__t10))));
            tracep->chgBit(oldp+2076,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__out__DOT__t11) 
                                             ^ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t2 
                                                 >> 2U) 
                                                ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t2 
                                                   >> 0xbU))))));
            tracep->chgBit(oldp+2077,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__out__DOT__t11) 
                                             ^ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t2 
                                                 >> 7U) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1))))));
            tracep->chgCData(oldp+2078,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT____Vcellout__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__fx),8);
            tracep->chgCData(oldp+2079,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                        [4U]),8);
            tracep->chgIData(oldp+2080,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1),21);
            tracep->chgIData(oldp+2081,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2),18);
            tracep->chgBit(oldp+2082,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y17));
            tracep->chgBit(oldp+2083,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y16));
            tracep->chgBit(oldp+2084,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y2));
            tracep->chgBit(oldp+2085,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y1));
            tracep->chgBit(oldp+2086,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y18));
            tracep->chgBit(oldp+2087,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t0));
            tracep->chgBit(oldp+2088,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y6));
            tracep->chgBit(oldp+2089,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y14));
            tracep->chgBit(oldp+2090,((1U & (~ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                [4U] 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y1))))));
            tracep->chgBit(oldp+2091,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y8));
            tracep->chgBit(oldp+2092,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y2) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t0))));
            tracep->chgBit(oldp+2093,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y1) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t0))));
            tracep->chgBit(oldp+2094,((1U & (~ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                 [4U] 
                                                 >> 5U) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y1))))));
            tracep->chgBit(oldp+2095,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t1));
            tracep->chgBit(oldp+2096,((1U & (~ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                 [4U] 
                                                 >> 5U) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y14))))));
            tracep->chgBit(oldp+2097,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y18) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t1))));
            tracep->chgBit(oldp+2098,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                              [4U] 
                                              >> 3U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y6)))));
            tracep->chgBit(oldp+2099,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t2));
            tracep->chgBit(oldp+2100,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t3));
            tracep->chgBit(oldp+2101,((1U & (~ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                 [4U] 
                                                 >> 5U) 
                                                ^ (
                                                   vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                   [4U] 
                                                   >> 3U))))));
            tracep->chgBit(oldp+2102,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y16) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t2))));
            tracep->chgBit(oldp+2103,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t1) 
                                             ^ (~ (
                                                   (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                    [4U] 
                                                    >> 5U) 
                                                   ^ 
                                                   (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                    [4U] 
                                                    >> 3U)))))));
            tracep->chgBit(oldp+2104,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y20));
            tracep->chgBit(oldp+2105,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y8) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y20))));
            tracep->chgBit(oldp+2106,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y8) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t3))));
            tracep->chgBit(oldp+2107,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                              [4U] 
                                              >> 7U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t2)))));
            tracep->chgBit(oldp+2108,((1U & VL_REDXOR_32(
                                                         (0x1008U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2109,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1));
            tracep->chgBit(oldp+2110,((IData)((0x20040U 
                                               == (0x20040U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2111,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                              >> 0xaU) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1)))));
            tracep->chgBit(oldp+2112,((0x4001U == (0x4001U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1))));
            tracep->chgBit(oldp+2113,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                               >> 0xeU) 
                                              & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1)))));
            tracep->chgBit(oldp+2114,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6));
            tracep->chgBit(oldp+2115,((IData)((0x10080U 
                                               == (0x10080U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2116,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                               >> 3U) 
                                              ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                 >> 0xcU)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6)))));
            tracep->chgBit(oldp+2117,((IData)((0xa000U 
                                               == (0xa000U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2118,((1U & ((0xa000U 
                                              == (0xa000U 
                                                  & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6)))));
            tracep->chgBit(oldp+2119,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t11));
            tracep->chgBit(oldp+2120,((IData)((0x100010U 
                                               == (0x100010U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2121,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t13));
            tracep->chgBit(oldp+2122,((IData)((0x104U 
                                               == (0x104U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2123,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t15));
            tracep->chgBit(oldp+2124,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                               >> 0xaU) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1)) 
                                             ^ (0x20040U 
                                                == 
                                                (0x20040U 
                                                 & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1))))));
            tracep->chgBit(oldp+2125,((1U & ((((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                >> 0xeU) 
                                               & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1)) 
                                             ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                >> 0x12U)))));
            tracep->chgBit(oldp+2126,((1U & ((((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                >> 3U) 
                                               ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                  >> 0xcU)) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6)) 
                                             ^ (0x10080U 
                                                == 
                                                (0x10080U 
                                                 & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1))))));
            tracep->chgBit(oldp+2127,((1U & (((0xa000U 
                                               == (0xa000U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t15)))));
            tracep->chgBit(oldp+2128,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t20));
            tracep->chgBit(oldp+2129,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21));
            tracep->chgBit(oldp+2130,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t22));
            tracep->chgBit(oldp+2131,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23));
            tracep->chgBit(oldp+2132,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t24));
            tracep->chgBit(oldp+2133,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25));
            tracep->chgBit(oldp+2134,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+2135,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t27));
            tracep->chgBit(oldp+2136,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+2137,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23) 
                                        ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25)) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t27))));
            tracep->chgBit(oldp+2138,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21) 
                                        ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25)) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t24))));
            tracep->chgBit(oldp+2139,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t20) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23))));
            tracep->chgBit(oldp+2140,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t27) 
                                       & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t20) 
                                          & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23)))));
            tracep->chgBit(oldp+2141,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t27) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+2142,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t22))));
            tracep->chgBit(oldp+2143,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t24) 
                                       & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21) 
                                          & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t22)))));
            tracep->chgBit(oldp+2144,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t24) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+2145,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t37));
            tracep->chgBit(oldp+2146,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t38));
            tracep->chgBit(oldp+2147,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t39));
            tracep->chgBit(oldp+2148,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t40));
            tracep->chgBit(oldp+2149,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t41));
            tracep->chgBit(oldp+2150,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t42));
            tracep->chgBit(oldp+2151,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t43));
            tracep->chgBit(oldp+2152,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t44));
            tracep->chgBit(oldp+2153,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t45));
            tracep->chgBit(oldp+2154,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t0));
            tracep->chgBit(oldp+2155,((1U & VL_REDXOR_32(
                                                         (0x300U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+2156,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t2));
            tracep->chgBit(oldp+2157,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t3));
            tracep->chgBit(oldp+2158,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t4));
            tracep->chgBit(oldp+2159,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t5));
            tracep->chgBit(oldp+2160,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6));
            tracep->chgBit(oldp+2161,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t7));
            tracep->chgBit(oldp+2162,((1U & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                             ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                                >> 3U)))));
            tracep->chgBit(oldp+2163,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t9));
            tracep->chgBit(oldp+2164,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t10));
            tracep->chgBit(oldp+2165,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t11));
            tracep->chgBit(oldp+2166,((1U & VL_REDXOR_32(
                                                         (0x14000U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+2167,((1U & VL_REDXOR_32(
                                                         (0x20002U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+2168,((1U & VL_REDXOR_32(
                                                         (0x21000U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+2169,((1U & VL_REDXOR_32(
                                                         (0x210U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+2170,((1U & VL_REDXOR_32(
                                                         (0x880U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+2171,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                              >> 8U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t2)))));
            tracep->chgBit(oldp+2172,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                              >> 0xdU) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t5)))));
            tracep->chgBit(oldp+2173,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t2) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t3))));
            tracep->chgBit(oldp+2174,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t4) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6))));
            tracep->chgBit(oldp+2175,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t22));
            tracep->chgBit(oldp+2176,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t23));
            tracep->chgBit(oldp+2177,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t5) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t7))));
            tracep->chgBit(oldp+2178,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t10))));
            tracep->chgBit(oldp+2179,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t9) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t11))));
            tracep->chgBit(oldp+2180,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t10) 
                                             ^ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                                 >> 0xdU) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t5))))));
            tracep->chgBit(oldp+2181,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t11) 
                                       ^ ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6) 
                                          ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t10)))));
            tracep->chgBit(oldp+2182,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                               >> 4U) 
                                              ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                                 >> 9U)) 
                                             ^ ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t4) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6))))));
            tracep->chgCData(oldp+2183,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT____Vcellout__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__fx),8);
            tracep->chgCData(oldp+2184,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                        [5U]),8);
            tracep->chgIData(oldp+2185,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t1),21);
            tracep->chgIData(oldp+2186,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t2),18);
            tracep->chgBit(oldp+2187,((1U & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                       [5U])));
            tracep->chgBit(oldp+2188,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__top__DOT__y1));
            tracep->chgBit(oldp+2189,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__top__DOT__y2));
            tracep->chgBit(oldp+2190,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__top__DOT__y3));
            tracep->chgBit(oldp+2191,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__top__DOT__y4));
            tracep->chgBit(oldp+2192,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__top__DOT__t0));
            tracep->chgBit(oldp+2193,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__top__DOT__y5));
            tracep->chgBit(oldp+2194,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__top__DOT__t1));
            tracep->chgBit(oldp+2195,((1U & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                             [5U] ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__top__DOT__y5)))));
            tracep->chgBit(oldp+2196,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__top__DOT__y7));
            tracep->chgBit(oldp+2197,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__top__DOT__y8));
            tracep->chgBit(oldp+2198,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__top__DOT__t2));
            tracep->chgBit(oldp+2199,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__top__DOT__t3));
            tracep->chgBit(oldp+2200,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__top__DOT__y3) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__top__DOT__y4))));
            tracep->chgBit(oldp+2201,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__top__DOT__y5) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__top__DOT__t2))));
            tracep->chgBit(oldp+2202,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__top__DOT__t0) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__top__DOT__t2))));
            tracep->chgBit(oldp+2203,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__top__DOT__y12));
            tracep->chgBit(oldp+2204,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__top__DOT__y13));
            tracep->chgBit(oldp+2205,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                              [5U] 
                                              >> 4U) 
                                             ^ vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                             [5U]))));
            tracep->chgBit(oldp+2206,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__top__DOT__y14));
            tracep->chgBit(oldp+2207,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__top__DOT__y15));
            tracep->chgBit(oldp+2208,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                              [5U] 
                                              >> 1U) 
                                             ^ vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                             [5U]))));
            tracep->chgBit(oldp+2209,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__top__DOT__y16));
            tracep->chgBit(oldp+2210,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__top__DOT__y2) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__top__DOT__y16))));
            tracep->chgBit(oldp+2211,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__top__DOT__y2) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__top__DOT__y8))));
            tracep->chgBit(oldp+2212,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__top__DOT__y15) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__top__DOT__y13))));
            tracep->chgBit(oldp+2213,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__top__DOT__y1) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__top__DOT__t3))));
            tracep->chgBit(oldp+2214,((1U & VL_REDXOR_32(
                                                         (0x1008U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2215,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1));
            tracep->chgBit(oldp+2216,((IData)((0x20040U 
                                               == (0x20040U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2217,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t1 
                                              >> 0xaU) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1)))));
            tracep->chgBit(oldp+2218,((0x4001U == (0x4001U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t1))));
            tracep->chgBit(oldp+2219,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t1 
                                               >> 0xeU) 
                                              & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t1) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1)))));
            tracep->chgBit(oldp+2220,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6));
            tracep->chgBit(oldp+2221,((IData)((0x10080U 
                                               == (0x10080U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2222,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t1 
                                               >> 3U) 
                                              ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t1 
                                                 >> 0xcU)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6)))));
            tracep->chgBit(oldp+2223,((IData)((0xa000U 
                                               == (0xa000U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2224,((1U & ((0xa000U 
                                              == (0xa000U 
                                                  & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t1)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6)))));
            tracep->chgBit(oldp+2225,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t11));
            tracep->chgBit(oldp+2226,((IData)((0x100010U 
                                               == (0x100010U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2227,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t13));
            tracep->chgBit(oldp+2228,((IData)((0x104U 
                                               == (0x104U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2229,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t15));
            tracep->chgBit(oldp+2230,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t1 
                                               >> 0xaU) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1)) 
                                             ^ (0x20040U 
                                                == 
                                                (0x20040U 
                                                 & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t1))))));
            tracep->chgBit(oldp+2231,((1U & ((((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t1 
                                                >> 0xeU) 
                                               & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t1) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1)) 
                                             ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t1 
                                                >> 0x12U)))));
            tracep->chgBit(oldp+2232,((1U & ((((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t1 
                                                >> 3U) 
                                               ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t1 
                                                  >> 0xcU)) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6)) 
                                             ^ (0x10080U 
                                                == 
                                                (0x10080U 
                                                 & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t1))))));
            tracep->chgBit(oldp+2233,((1U & (((0xa000U 
                                               == (0xa000U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t1)) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t15)))));
            tracep->chgBit(oldp+2234,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t20));
            tracep->chgBit(oldp+2235,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21));
            tracep->chgBit(oldp+2236,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t22));
            tracep->chgBit(oldp+2237,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23));
            tracep->chgBit(oldp+2238,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t24));
            tracep->chgBit(oldp+2239,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25));
            tracep->chgBit(oldp+2240,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+2241,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t27));
            tracep->chgBit(oldp+2242,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+2243,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23) 
                                        ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25)) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t27))));
            tracep->chgBit(oldp+2244,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21) 
                                        ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25)) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t24))));
            tracep->chgBit(oldp+2245,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t20) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23))));
            tracep->chgBit(oldp+2246,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t27) 
                                       & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t20) 
                                          & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23)))));
            tracep->chgBit(oldp+2247,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t27) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+2248,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t22))));
            tracep->chgBit(oldp+2249,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t24) 
                                       & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21) 
                                          & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t22)))));
            tracep->chgBit(oldp+2250,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t24) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+2251,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t37));
            tracep->chgBit(oldp+2252,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t38));
            tracep->chgBit(oldp+2253,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t39));
            tracep->chgBit(oldp+2254,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t40));
            tracep->chgBit(oldp+2255,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t41));
            tracep->chgBit(oldp+2256,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t42));
            tracep->chgBit(oldp+2257,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t43));
            tracep->chgBit(oldp+2258,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t44));
            tracep->chgBit(oldp+2259,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t45));
            tracep->chgBit(oldp+2260,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__out__DOT__t0));
            tracep->chgBit(oldp+2261,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1));
            tracep->chgBit(oldp+2262,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__out__DOT__t2));
            tracep->chgBit(oldp+2263,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__out__DOT__t3));
            tracep->chgBit(oldp+2264,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__out__DOT__t4));
            tracep->chgBit(oldp+2265,((1U & VL_REDXOR_32(
                                                         (0x20800U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t2)))));
            tracep->chgBit(oldp+2266,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__out__DOT__t6));
            tracep->chgBit(oldp+2267,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__out__DOT__t7));
            tracep->chgBit(oldp+2268,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__out__DOT__t8));
            tracep->chgBit(oldp+2269,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__out__DOT__t9));
            tracep->chgBit(oldp+2270,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__out__DOT__t10));
            tracep->chgBit(oldp+2271,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__out__DOT__t11));
            tracep->chgBit(oldp+2272,((1U & VL_REDXOR_32(
                                                         (0x10002U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t2)))));
            tracep->chgBit(oldp+2273,((1U & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t2 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__out__DOT__t0)))));
            tracep->chgBit(oldp+2274,((1U & VL_REDXOR_32(
                                                         (0x804U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t2)))));
            tracep->chgBit(oldp+2275,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 5U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1)))));
            tracep->chgBit(oldp+2276,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 6U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__out__DOT__t0)))));
            tracep->chgBit(oldp+2277,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 7U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1)))));
            tracep->chgBit(oldp+2278,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 8U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__out__DOT__t8)))));
            tracep->chgBit(oldp+2279,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 0xdU) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__out__DOT__t4)))));
            tracep->chgBit(oldp+2280,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__out__DOT__t0) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1))));
            tracep->chgBit(oldp+2281,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__out__DOT__t7))));
            tracep->chgBit(oldp+2282,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__out__DOT__t3) 
                                             ^ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t2 
                                                 >> 0x10U) 
                                                ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t2 
                                                   >> 1U))))));
            tracep->chgBit(oldp+2283,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t2 
                                               >> 8U) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__out__DOT__t8)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__out__DOT__t2)))));
            tracep->chgBit(oldp+2284,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t2 
                                               >> 5U) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__out__DOT__t9)))));
            tracep->chgBit(oldp+2285,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__out__DOT__t6) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__out__DOT__t10))));
            tracep->chgBit(oldp+2286,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__out__DOT__t7) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__out__DOT__t9))));
            tracep->chgBit(oldp+2287,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__out__DOT__t8) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__out__DOT__t10))));
            tracep->chgBit(oldp+2288,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__out__DOT__t11) 
                                             ^ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t2 
                                                 >> 2U) 
                                                ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t2 
                                                   >> 0xbU))))));
            tracep->chgBit(oldp+2289,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__out__DOT__t11) 
                                             ^ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t2 
                                                 >> 7U) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1))))));
            tracep->chgCData(oldp+2290,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT____Vcellout__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__fx),8);
            tracep->chgCData(oldp+2291,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                        [5U]),8);
            tracep->chgIData(oldp+2292,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1),21);
            tracep->chgIData(oldp+2293,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2),18);
            tracep->chgBit(oldp+2294,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y17));
            tracep->chgBit(oldp+2295,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y16));
            tracep->chgBit(oldp+2296,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y2));
            tracep->chgBit(oldp+2297,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y1));
            tracep->chgBit(oldp+2298,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y18));
            tracep->chgBit(oldp+2299,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t0));
            tracep->chgBit(oldp+2300,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y6));
            tracep->chgBit(oldp+2301,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y14));
            tracep->chgBit(oldp+2302,((1U & (~ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                [5U] 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y1))))));
            tracep->chgBit(oldp+2303,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y8));
            tracep->chgBit(oldp+2304,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y2) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t0))));
            tracep->chgBit(oldp+2305,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y1) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t0))));
            tracep->chgBit(oldp+2306,((1U & (~ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                 [5U] 
                                                 >> 5U) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y1))))));
            tracep->chgBit(oldp+2307,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t1));
            tracep->chgBit(oldp+2308,((1U & (~ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                 [5U] 
                                                 >> 5U) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y14))))));
            tracep->chgBit(oldp+2309,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y18) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t1))));
            tracep->chgBit(oldp+2310,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                              [5U] 
                                              >> 3U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y6)))));
            tracep->chgBit(oldp+2311,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t2));
            tracep->chgBit(oldp+2312,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t3));
            tracep->chgBit(oldp+2313,((1U & (~ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                 [5U] 
                                                 >> 5U) 
                                                ^ (
                                                   vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                   [5U] 
                                                   >> 3U))))));
            tracep->chgBit(oldp+2314,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y16) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t2))));
            tracep->chgBit(oldp+2315,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t1) 
                                             ^ (~ (
                                                   (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                    [5U] 
                                                    >> 5U) 
                                                   ^ 
                                                   (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                    [5U] 
                                                    >> 3U)))))));
            tracep->chgBit(oldp+2316,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y20));
            tracep->chgBit(oldp+2317,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y8) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y20))));
            tracep->chgBit(oldp+2318,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y8) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t3))));
            tracep->chgBit(oldp+2319,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                              [5U] 
                                              >> 7U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t2)))));
            tracep->chgBit(oldp+2320,((1U & VL_REDXOR_32(
                                                         (0x1008U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2321,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1));
            tracep->chgBit(oldp+2322,((IData)((0x20040U 
                                               == (0x20040U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2323,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                              >> 0xaU) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1)))));
            tracep->chgBit(oldp+2324,((0x4001U == (0x4001U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1))));
            tracep->chgBit(oldp+2325,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                               >> 0xeU) 
                                              & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1)))));
            tracep->chgBit(oldp+2326,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6));
            tracep->chgBit(oldp+2327,((IData)((0x10080U 
                                               == (0x10080U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2328,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                               >> 3U) 
                                              ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                 >> 0xcU)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6)))));
            tracep->chgBit(oldp+2329,((IData)((0xa000U 
                                               == (0xa000U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2330,((1U & ((0xa000U 
                                              == (0xa000U 
                                                  & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6)))));
            tracep->chgBit(oldp+2331,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t11));
            tracep->chgBit(oldp+2332,((IData)((0x100010U 
                                               == (0x100010U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2333,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t13));
            tracep->chgBit(oldp+2334,((IData)((0x104U 
                                               == (0x104U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2335,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t15));
            tracep->chgBit(oldp+2336,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                               >> 0xaU) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1)) 
                                             ^ (0x20040U 
                                                == 
                                                (0x20040U 
                                                 & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1))))));
            tracep->chgBit(oldp+2337,((1U & ((((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                >> 0xeU) 
                                               & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1)) 
                                             ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                >> 0x12U)))));
            tracep->chgBit(oldp+2338,((1U & ((((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                >> 3U) 
                                               ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                  >> 0xcU)) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6)) 
                                             ^ (0x10080U 
                                                == 
                                                (0x10080U 
                                                 & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1))))));
            tracep->chgBit(oldp+2339,((1U & (((0xa000U 
                                               == (0xa000U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t15)))));
            tracep->chgBit(oldp+2340,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t20));
            tracep->chgBit(oldp+2341,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21));
            tracep->chgBit(oldp+2342,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t22));
            tracep->chgBit(oldp+2343,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23));
            tracep->chgBit(oldp+2344,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t24));
            tracep->chgBit(oldp+2345,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25));
            tracep->chgBit(oldp+2346,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+2347,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t27));
            tracep->chgBit(oldp+2348,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+2349,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23) 
                                        ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25)) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t27))));
            tracep->chgBit(oldp+2350,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21) 
                                        ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25)) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t24))));
            tracep->chgBit(oldp+2351,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t20) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23))));
            tracep->chgBit(oldp+2352,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t27) 
                                       & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t20) 
                                          & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23)))));
            tracep->chgBit(oldp+2353,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t27) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+2354,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t22))));
            tracep->chgBit(oldp+2355,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t24) 
                                       & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21) 
                                          & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t22)))));
            tracep->chgBit(oldp+2356,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t24) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+2357,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t37));
            tracep->chgBit(oldp+2358,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t38));
            tracep->chgBit(oldp+2359,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t39));
            tracep->chgBit(oldp+2360,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t40));
            tracep->chgBit(oldp+2361,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t41));
            tracep->chgBit(oldp+2362,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t42));
            tracep->chgBit(oldp+2363,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t43));
            tracep->chgBit(oldp+2364,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t44));
            tracep->chgBit(oldp+2365,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t45));
            tracep->chgBit(oldp+2366,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t0));
            tracep->chgBit(oldp+2367,((1U & VL_REDXOR_32(
                                                         (0x300U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+2368,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t2));
            tracep->chgBit(oldp+2369,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t3));
            tracep->chgBit(oldp+2370,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t4));
            tracep->chgBit(oldp+2371,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t5));
            tracep->chgBit(oldp+2372,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6));
            tracep->chgBit(oldp+2373,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t7));
            tracep->chgBit(oldp+2374,((1U & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                             ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                                >> 3U)))));
            tracep->chgBit(oldp+2375,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t9));
            tracep->chgBit(oldp+2376,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t10));
            tracep->chgBit(oldp+2377,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t11));
            tracep->chgBit(oldp+2378,((1U & VL_REDXOR_32(
                                                         (0x14000U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+2379,((1U & VL_REDXOR_32(
                                                         (0x20002U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+2380,((1U & VL_REDXOR_32(
                                                         (0x21000U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+2381,((1U & VL_REDXOR_32(
                                                         (0x210U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+2382,((1U & VL_REDXOR_32(
                                                         (0x880U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+2383,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                              >> 8U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t2)))));
            tracep->chgBit(oldp+2384,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                              >> 0xdU) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t5)))));
            tracep->chgBit(oldp+2385,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t2) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t3))));
            tracep->chgBit(oldp+2386,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t4) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6))));
            tracep->chgBit(oldp+2387,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t22));
            tracep->chgBit(oldp+2388,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t23));
            tracep->chgBit(oldp+2389,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t5) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t7))));
            tracep->chgBit(oldp+2390,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t10))));
            tracep->chgBit(oldp+2391,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t9) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t11))));
            tracep->chgBit(oldp+2392,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t10) 
                                             ^ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                                 >> 0xdU) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t5))))));
            tracep->chgBit(oldp+2393,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t11) 
                                       ^ ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6) 
                                          ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t10)))));
            tracep->chgBit(oldp+2394,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                               >> 4U) 
                                              ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                                 >> 9U)) 
                                             ^ ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t4) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6))))));
            tracep->chgCData(oldp+2395,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT____Vcellout__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__fx),8);
            tracep->chgCData(oldp+2396,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                        [6U]),8);
            tracep->chgIData(oldp+2397,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t1),21);
            tracep->chgIData(oldp+2398,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t2),18);
            tracep->chgBit(oldp+2399,((1U & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                       [6U])));
            tracep->chgBit(oldp+2400,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__top__DOT__y1));
            tracep->chgBit(oldp+2401,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__top__DOT__y2));
            tracep->chgBit(oldp+2402,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__top__DOT__y3));
            tracep->chgBit(oldp+2403,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__top__DOT__y4));
            tracep->chgBit(oldp+2404,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__top__DOT__t0));
            tracep->chgBit(oldp+2405,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__top__DOT__y5));
            tracep->chgBit(oldp+2406,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__top__DOT__t1));
            tracep->chgBit(oldp+2407,((1U & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                             [6U] ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__top__DOT__y5)))));
            tracep->chgBit(oldp+2408,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__top__DOT__y7));
            tracep->chgBit(oldp+2409,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__top__DOT__y8));
            tracep->chgBit(oldp+2410,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__top__DOT__t2));
            tracep->chgBit(oldp+2411,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__top__DOT__t3));
            tracep->chgBit(oldp+2412,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__top__DOT__y3) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__top__DOT__y4))));
            tracep->chgBit(oldp+2413,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__top__DOT__y5) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__top__DOT__t2))));
            tracep->chgBit(oldp+2414,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__top__DOT__t0) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__top__DOT__t2))));
            tracep->chgBit(oldp+2415,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__top__DOT__y12));
            tracep->chgBit(oldp+2416,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__top__DOT__y13));
            tracep->chgBit(oldp+2417,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                              [6U] 
                                              >> 4U) 
                                             ^ vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                             [6U]))));
            tracep->chgBit(oldp+2418,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__top__DOT__y14));
            tracep->chgBit(oldp+2419,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__top__DOT__y15));
            tracep->chgBit(oldp+2420,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                              [6U] 
                                              >> 1U) 
                                             ^ vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                             [6U]))));
            tracep->chgBit(oldp+2421,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__top__DOT__y16));
            tracep->chgBit(oldp+2422,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__top__DOT__y2) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__top__DOT__y16))));
            tracep->chgBit(oldp+2423,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__top__DOT__y2) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__top__DOT__y8))));
            tracep->chgBit(oldp+2424,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__top__DOT__y15) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__top__DOT__y13))));
            tracep->chgBit(oldp+2425,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__top__DOT__y1) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__top__DOT__t3))));
            tracep->chgBit(oldp+2426,((1U & VL_REDXOR_32(
                                                         (0x1008U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2427,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1));
            tracep->chgBit(oldp+2428,((IData)((0x20040U 
                                               == (0x20040U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2429,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t1 
                                              >> 0xaU) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1)))));
            tracep->chgBit(oldp+2430,((0x4001U == (0x4001U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t1))));
            tracep->chgBit(oldp+2431,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t1 
                                               >> 0xeU) 
                                              & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t1) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1)))));
            tracep->chgBit(oldp+2432,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6));
            tracep->chgBit(oldp+2433,((IData)((0x10080U 
                                               == (0x10080U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2434,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t1 
                                               >> 3U) 
                                              ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t1 
                                                 >> 0xcU)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6)))));
            tracep->chgBit(oldp+2435,((IData)((0xa000U 
                                               == (0xa000U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2436,((1U & ((0xa000U 
                                              == (0xa000U 
                                                  & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t1)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6)))));
            tracep->chgBit(oldp+2437,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t11));
            tracep->chgBit(oldp+2438,((IData)((0x100010U 
                                               == (0x100010U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2439,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t13));
            tracep->chgBit(oldp+2440,((IData)((0x104U 
                                               == (0x104U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2441,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t15));
            tracep->chgBit(oldp+2442,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t1 
                                               >> 0xaU) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1)) 
                                             ^ (0x20040U 
                                                == 
                                                (0x20040U 
                                                 & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t1))))));
            tracep->chgBit(oldp+2443,((1U & ((((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t1 
                                                >> 0xeU) 
                                               & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t1) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1)) 
                                             ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t1 
                                                >> 0x12U)))));
            tracep->chgBit(oldp+2444,((1U & ((((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t1 
                                                >> 3U) 
                                               ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t1 
                                                  >> 0xcU)) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6)) 
                                             ^ (0x10080U 
                                                == 
                                                (0x10080U 
                                                 & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t1))))));
            tracep->chgBit(oldp+2445,((1U & (((0xa000U 
                                               == (0xa000U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t1)) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t15)))));
            tracep->chgBit(oldp+2446,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t20));
            tracep->chgBit(oldp+2447,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21));
            tracep->chgBit(oldp+2448,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t22));
            tracep->chgBit(oldp+2449,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23));
            tracep->chgBit(oldp+2450,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t24));
            tracep->chgBit(oldp+2451,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25));
            tracep->chgBit(oldp+2452,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+2453,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t27));
            tracep->chgBit(oldp+2454,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+2455,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23) 
                                        ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25)) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t27))));
            tracep->chgBit(oldp+2456,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21) 
                                        ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25)) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t24))));
            tracep->chgBit(oldp+2457,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t20) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23))));
            tracep->chgBit(oldp+2458,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t27) 
                                       & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t20) 
                                          & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23)))));
            tracep->chgBit(oldp+2459,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t27) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+2460,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t22))));
            tracep->chgBit(oldp+2461,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t24) 
                                       & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21) 
                                          & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t22)))));
            tracep->chgBit(oldp+2462,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t24) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+2463,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t37));
            tracep->chgBit(oldp+2464,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t38));
            tracep->chgBit(oldp+2465,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t39));
            tracep->chgBit(oldp+2466,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t40));
            tracep->chgBit(oldp+2467,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t41));
            tracep->chgBit(oldp+2468,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t42));
            tracep->chgBit(oldp+2469,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t43));
            tracep->chgBit(oldp+2470,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t44));
            tracep->chgBit(oldp+2471,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t45));
            tracep->chgBit(oldp+2472,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__out__DOT__t0));
            tracep->chgBit(oldp+2473,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1));
            tracep->chgBit(oldp+2474,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__out__DOT__t2));
            tracep->chgBit(oldp+2475,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__out__DOT__t3));
            tracep->chgBit(oldp+2476,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__out__DOT__t4));
            tracep->chgBit(oldp+2477,((1U & VL_REDXOR_32(
                                                         (0x20800U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t2)))));
            tracep->chgBit(oldp+2478,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__out__DOT__t6));
            tracep->chgBit(oldp+2479,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__out__DOT__t7));
            tracep->chgBit(oldp+2480,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__out__DOT__t8));
            tracep->chgBit(oldp+2481,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__out__DOT__t9));
            tracep->chgBit(oldp+2482,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__out__DOT__t10));
            tracep->chgBit(oldp+2483,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__out__DOT__t11));
            tracep->chgBit(oldp+2484,((1U & VL_REDXOR_32(
                                                         (0x10002U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t2)))));
            tracep->chgBit(oldp+2485,((1U & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t2 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__out__DOT__t0)))));
            tracep->chgBit(oldp+2486,((1U & VL_REDXOR_32(
                                                         (0x804U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t2)))));
            tracep->chgBit(oldp+2487,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 5U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1)))));
            tracep->chgBit(oldp+2488,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 6U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__out__DOT__t0)))));
            tracep->chgBit(oldp+2489,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 7U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1)))));
            tracep->chgBit(oldp+2490,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 8U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__out__DOT__t8)))));
            tracep->chgBit(oldp+2491,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 0xdU) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__out__DOT__t4)))));
            tracep->chgBit(oldp+2492,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__out__DOT__t0) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1))));
            tracep->chgBit(oldp+2493,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__out__DOT__t7))));
            tracep->chgBit(oldp+2494,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__out__DOT__t3) 
                                             ^ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t2 
                                                 >> 0x10U) 
                                                ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t2 
                                                   >> 1U))))));
            tracep->chgBit(oldp+2495,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t2 
                                               >> 8U) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__out__DOT__t8)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__out__DOT__t2)))));
            tracep->chgBit(oldp+2496,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t2 
                                               >> 5U) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__out__DOT__t9)))));
            tracep->chgBit(oldp+2497,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__out__DOT__t6) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__out__DOT__t10))));
            tracep->chgBit(oldp+2498,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__out__DOT__t7) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__out__DOT__t9))));
            tracep->chgBit(oldp+2499,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__out__DOT__t8) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__out__DOT__t10))));
            tracep->chgBit(oldp+2500,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__out__DOT__t11) 
                                             ^ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t2 
                                                 >> 2U) 
                                                ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t2 
                                                   >> 0xbU))))));
            tracep->chgBit(oldp+2501,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__out__DOT__t11) 
                                             ^ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t2 
                                                 >> 7U) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1))))));
            tracep->chgCData(oldp+2502,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT____Vcellout__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__fx),8);
            tracep->chgCData(oldp+2503,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                        [6U]),8);
            tracep->chgIData(oldp+2504,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1),21);
            tracep->chgIData(oldp+2505,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2),18);
            tracep->chgBit(oldp+2506,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y17));
            tracep->chgBit(oldp+2507,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y16));
            tracep->chgBit(oldp+2508,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y2));
            tracep->chgBit(oldp+2509,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y1));
            tracep->chgBit(oldp+2510,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y18));
            tracep->chgBit(oldp+2511,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t0));
            tracep->chgBit(oldp+2512,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y6));
            tracep->chgBit(oldp+2513,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y14));
            tracep->chgBit(oldp+2514,((1U & (~ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                [6U] 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y1))))));
            tracep->chgBit(oldp+2515,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y8));
            tracep->chgBit(oldp+2516,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y2) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t0))));
            tracep->chgBit(oldp+2517,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y1) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t0))));
            tracep->chgBit(oldp+2518,((1U & (~ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                 [6U] 
                                                 >> 5U) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y1))))));
            tracep->chgBit(oldp+2519,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t1));
            tracep->chgBit(oldp+2520,((1U & (~ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                 [6U] 
                                                 >> 5U) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y14))))));
            tracep->chgBit(oldp+2521,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y18) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t1))));
            tracep->chgBit(oldp+2522,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                              [6U] 
                                              >> 3U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y6)))));
            tracep->chgBit(oldp+2523,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t2));
            tracep->chgBit(oldp+2524,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t3));
            tracep->chgBit(oldp+2525,((1U & (~ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                 [6U] 
                                                 >> 5U) 
                                                ^ (
                                                   vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                   [6U] 
                                                   >> 3U))))));
            tracep->chgBit(oldp+2526,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y16) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t2))));
            tracep->chgBit(oldp+2527,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t1) 
                                             ^ (~ (
                                                   (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                    [6U] 
                                                    >> 5U) 
                                                   ^ 
                                                   (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                    [6U] 
                                                    >> 3U)))))));
            tracep->chgBit(oldp+2528,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y20));
            tracep->chgBit(oldp+2529,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y8) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y20))));
            tracep->chgBit(oldp+2530,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y8) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t3))));
            tracep->chgBit(oldp+2531,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                              [6U] 
                                              >> 7U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t2)))));
            tracep->chgBit(oldp+2532,((1U & VL_REDXOR_32(
                                                         (0x1008U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2533,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1));
            tracep->chgBit(oldp+2534,((IData)((0x20040U 
                                               == (0x20040U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2535,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                              >> 0xaU) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1)))));
            tracep->chgBit(oldp+2536,((0x4001U == (0x4001U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1))));
            tracep->chgBit(oldp+2537,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                               >> 0xeU) 
                                              & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1)))));
            tracep->chgBit(oldp+2538,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6));
            tracep->chgBit(oldp+2539,((IData)((0x10080U 
                                               == (0x10080U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2540,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                               >> 3U) 
                                              ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                 >> 0xcU)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6)))));
            tracep->chgBit(oldp+2541,((IData)((0xa000U 
                                               == (0xa000U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2542,((1U & ((0xa000U 
                                              == (0xa000U 
                                                  & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6)))));
            tracep->chgBit(oldp+2543,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t11));
            tracep->chgBit(oldp+2544,((IData)((0x100010U 
                                               == (0x100010U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2545,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t13));
            tracep->chgBit(oldp+2546,((IData)((0x104U 
                                               == (0x104U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2547,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t15));
            tracep->chgBit(oldp+2548,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                               >> 0xaU) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1)) 
                                             ^ (0x20040U 
                                                == 
                                                (0x20040U 
                                                 & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1))))));
            tracep->chgBit(oldp+2549,((1U & ((((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                >> 0xeU) 
                                               & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1)) 
                                             ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                >> 0x12U)))));
            tracep->chgBit(oldp+2550,((1U & ((((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                >> 3U) 
                                               ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                  >> 0xcU)) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6)) 
                                             ^ (0x10080U 
                                                == 
                                                (0x10080U 
                                                 & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1))))));
            tracep->chgBit(oldp+2551,((1U & (((0xa000U 
                                               == (0xa000U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t15)))));
            tracep->chgBit(oldp+2552,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t20));
            tracep->chgBit(oldp+2553,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21));
            tracep->chgBit(oldp+2554,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t22));
            tracep->chgBit(oldp+2555,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23));
            tracep->chgBit(oldp+2556,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t24));
            tracep->chgBit(oldp+2557,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25));
            tracep->chgBit(oldp+2558,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+2559,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t27));
            tracep->chgBit(oldp+2560,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+2561,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23) 
                                        ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25)) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t27))));
            tracep->chgBit(oldp+2562,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21) 
                                        ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25)) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t24))));
            tracep->chgBit(oldp+2563,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t20) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23))));
            tracep->chgBit(oldp+2564,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t27) 
                                       & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t20) 
                                          & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23)))));
            tracep->chgBit(oldp+2565,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t27) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+2566,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t22))));
            tracep->chgBit(oldp+2567,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t24) 
                                       & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21) 
                                          & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t22)))));
            tracep->chgBit(oldp+2568,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t24) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+2569,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t37));
            tracep->chgBit(oldp+2570,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t38));
            tracep->chgBit(oldp+2571,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t39));
            tracep->chgBit(oldp+2572,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t40));
            tracep->chgBit(oldp+2573,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t41));
            tracep->chgBit(oldp+2574,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t42));
            tracep->chgBit(oldp+2575,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t43));
            tracep->chgBit(oldp+2576,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t44));
            tracep->chgBit(oldp+2577,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t45));
            tracep->chgBit(oldp+2578,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t0));
            tracep->chgBit(oldp+2579,((1U & VL_REDXOR_32(
                                                         (0x300U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+2580,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t2));
            tracep->chgBit(oldp+2581,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t3));
            tracep->chgBit(oldp+2582,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t4));
            tracep->chgBit(oldp+2583,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t5));
            tracep->chgBit(oldp+2584,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6));
            tracep->chgBit(oldp+2585,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t7));
            tracep->chgBit(oldp+2586,((1U & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                             ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                                >> 3U)))));
            tracep->chgBit(oldp+2587,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t9));
            tracep->chgBit(oldp+2588,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t10));
            tracep->chgBit(oldp+2589,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t11));
            tracep->chgBit(oldp+2590,((1U & VL_REDXOR_32(
                                                         (0x14000U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+2591,((1U & VL_REDXOR_32(
                                                         (0x20002U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+2592,((1U & VL_REDXOR_32(
                                                         (0x21000U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+2593,((1U & VL_REDXOR_32(
                                                         (0x210U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+2594,((1U & VL_REDXOR_32(
                                                         (0x880U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+2595,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                              >> 8U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t2)))));
            tracep->chgBit(oldp+2596,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                              >> 0xdU) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t5)))));
            tracep->chgBit(oldp+2597,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t2) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t3))));
            tracep->chgBit(oldp+2598,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t4) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6))));
            tracep->chgBit(oldp+2599,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t22));
            tracep->chgBit(oldp+2600,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t23));
            tracep->chgBit(oldp+2601,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t5) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t7))));
            tracep->chgBit(oldp+2602,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t10))));
            tracep->chgBit(oldp+2603,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t9) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t11))));
            tracep->chgBit(oldp+2604,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t10) 
                                             ^ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                                 >> 0xdU) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t5))))));
            tracep->chgBit(oldp+2605,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t11) 
                                       ^ ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6) 
                                          ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t10)))));
            tracep->chgBit(oldp+2606,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                               >> 4U) 
                                              ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                                 >> 9U)) 
                                             ^ ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t4) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6))))));
            tracep->chgCData(oldp+2607,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT____Vcellout__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__fx),8);
            tracep->chgCData(oldp+2608,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                        [7U]),8);
            tracep->chgIData(oldp+2609,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t1),21);
            tracep->chgIData(oldp+2610,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t2),18);
            tracep->chgBit(oldp+2611,((1U & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                       [7U])));
            tracep->chgBit(oldp+2612,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__top__DOT__y1));
            tracep->chgBit(oldp+2613,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__top__DOT__y2));
            tracep->chgBit(oldp+2614,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__top__DOT__y3));
            tracep->chgBit(oldp+2615,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__top__DOT__y4));
            tracep->chgBit(oldp+2616,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__top__DOT__t0));
            tracep->chgBit(oldp+2617,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__top__DOT__y5));
            tracep->chgBit(oldp+2618,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__top__DOT__t1));
            tracep->chgBit(oldp+2619,((1U & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                             [7U] ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__top__DOT__y5)))));
            tracep->chgBit(oldp+2620,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__top__DOT__y7));
            tracep->chgBit(oldp+2621,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__top__DOT__y8));
            tracep->chgBit(oldp+2622,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__top__DOT__t2));
            tracep->chgBit(oldp+2623,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__top__DOT__t3));
            tracep->chgBit(oldp+2624,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__top__DOT__y3) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__top__DOT__y4))));
            tracep->chgBit(oldp+2625,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__top__DOT__y5) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__top__DOT__t2))));
            tracep->chgBit(oldp+2626,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__top__DOT__t0) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__top__DOT__t2))));
            tracep->chgBit(oldp+2627,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__top__DOT__y12));
            tracep->chgBit(oldp+2628,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__top__DOT__y13));
            tracep->chgBit(oldp+2629,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                              [7U] 
                                              >> 4U) 
                                             ^ vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                             [7U]))));
            tracep->chgBit(oldp+2630,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__top__DOT__y14));
            tracep->chgBit(oldp+2631,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__top__DOT__y15));
            tracep->chgBit(oldp+2632,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                              [7U] 
                                              >> 1U) 
                                             ^ vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                             [7U]))));
            tracep->chgBit(oldp+2633,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__top__DOT__y16));
            tracep->chgBit(oldp+2634,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__top__DOT__y2) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__top__DOT__y16))));
            tracep->chgBit(oldp+2635,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__top__DOT__y2) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__top__DOT__y8))));
            tracep->chgBit(oldp+2636,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__top__DOT__y15) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__top__DOT__y13))));
            tracep->chgBit(oldp+2637,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__top__DOT__y1) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__top__DOT__t3))));
            tracep->chgBit(oldp+2638,((1U & VL_REDXOR_32(
                                                         (0x1008U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2639,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1));
            tracep->chgBit(oldp+2640,((IData)((0x20040U 
                                               == (0x20040U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2641,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t1 
                                              >> 0xaU) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1)))));
            tracep->chgBit(oldp+2642,((0x4001U == (0x4001U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t1))));
            tracep->chgBit(oldp+2643,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t1 
                                               >> 0xeU) 
                                              & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t1) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1)))));
            tracep->chgBit(oldp+2644,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6));
            tracep->chgBit(oldp+2645,((IData)((0x10080U 
                                               == (0x10080U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2646,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t1 
                                               >> 3U) 
                                              ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t1 
                                                 >> 0xcU)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6)))));
            tracep->chgBit(oldp+2647,((IData)((0xa000U 
                                               == (0xa000U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2648,((1U & ((0xa000U 
                                              == (0xa000U 
                                                  & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t1)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6)))));
            tracep->chgBit(oldp+2649,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t11));
            tracep->chgBit(oldp+2650,((IData)((0x100010U 
                                               == (0x100010U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2651,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t13));
            tracep->chgBit(oldp+2652,((IData)((0x104U 
                                               == (0x104U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2653,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t15));
            tracep->chgBit(oldp+2654,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t1 
                                               >> 0xaU) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1)) 
                                             ^ (0x20040U 
                                                == 
                                                (0x20040U 
                                                 & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t1))))));
            tracep->chgBit(oldp+2655,((1U & ((((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t1 
                                                >> 0xeU) 
                                               & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t1) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1)) 
                                             ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t1 
                                                >> 0x12U)))));
            tracep->chgBit(oldp+2656,((1U & ((((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t1 
                                                >> 3U) 
                                               ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t1 
                                                  >> 0xcU)) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6)) 
                                             ^ (0x10080U 
                                                == 
                                                (0x10080U 
                                                 & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t1))))));
            tracep->chgBit(oldp+2657,((1U & (((0xa000U 
                                               == (0xa000U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t1)) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t15)))));
            tracep->chgBit(oldp+2658,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t20));
            tracep->chgBit(oldp+2659,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21));
            tracep->chgBit(oldp+2660,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t22));
            tracep->chgBit(oldp+2661,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23));
            tracep->chgBit(oldp+2662,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t24));
            tracep->chgBit(oldp+2663,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25));
            tracep->chgBit(oldp+2664,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+2665,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t27));
            tracep->chgBit(oldp+2666,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+2667,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23) 
                                        ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25)) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t27))));
            tracep->chgBit(oldp+2668,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21) 
                                        ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25)) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t24))));
            tracep->chgBit(oldp+2669,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t20) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23))));
            tracep->chgBit(oldp+2670,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t27) 
                                       & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t20) 
                                          & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23)))));
            tracep->chgBit(oldp+2671,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t27) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+2672,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t22))));
            tracep->chgBit(oldp+2673,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t24) 
                                       & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21) 
                                          & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t22)))));
            tracep->chgBit(oldp+2674,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t24) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+2675,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t37));
            tracep->chgBit(oldp+2676,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t38));
            tracep->chgBit(oldp+2677,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t39));
            tracep->chgBit(oldp+2678,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t40));
            tracep->chgBit(oldp+2679,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t41));
            tracep->chgBit(oldp+2680,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t42));
            tracep->chgBit(oldp+2681,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t43));
            tracep->chgBit(oldp+2682,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t44));
            tracep->chgBit(oldp+2683,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t45));
            tracep->chgBit(oldp+2684,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__out__DOT__t0));
            tracep->chgBit(oldp+2685,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1));
            tracep->chgBit(oldp+2686,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__out__DOT__t2));
            tracep->chgBit(oldp+2687,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__out__DOT__t3));
            tracep->chgBit(oldp+2688,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__out__DOT__t4));
            tracep->chgBit(oldp+2689,((1U & VL_REDXOR_32(
                                                         (0x20800U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t2)))));
            tracep->chgBit(oldp+2690,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__out__DOT__t6));
            tracep->chgBit(oldp+2691,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__out__DOT__t7));
            tracep->chgBit(oldp+2692,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__out__DOT__t8));
            tracep->chgBit(oldp+2693,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__out__DOT__t9));
            tracep->chgBit(oldp+2694,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__out__DOT__t10));
            tracep->chgBit(oldp+2695,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__out__DOT__t11));
            tracep->chgBit(oldp+2696,((1U & VL_REDXOR_32(
                                                         (0x10002U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t2)))));
            tracep->chgBit(oldp+2697,((1U & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t2 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__out__DOT__t0)))));
            tracep->chgBit(oldp+2698,((1U & VL_REDXOR_32(
                                                         (0x804U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t2)))));
            tracep->chgBit(oldp+2699,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 5U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1)))));
            tracep->chgBit(oldp+2700,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 6U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__out__DOT__t0)))));
            tracep->chgBit(oldp+2701,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 7U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1)))));
            tracep->chgBit(oldp+2702,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 8U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__out__DOT__t8)))));
            tracep->chgBit(oldp+2703,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 0xdU) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__out__DOT__t4)))));
            tracep->chgBit(oldp+2704,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__out__DOT__t0) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1))));
            tracep->chgBit(oldp+2705,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__out__DOT__t7))));
            tracep->chgBit(oldp+2706,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__out__DOT__t3) 
                                             ^ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t2 
                                                 >> 0x10U) 
                                                ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t2 
                                                   >> 1U))))));
            tracep->chgBit(oldp+2707,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t2 
                                               >> 8U) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__out__DOT__t8)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__out__DOT__t2)))));
            tracep->chgBit(oldp+2708,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t2 
                                               >> 5U) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__out__DOT__t9)))));
            tracep->chgBit(oldp+2709,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__out__DOT__t6) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__out__DOT__t10))));
            tracep->chgBit(oldp+2710,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__out__DOT__t7) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__out__DOT__t9))));
            tracep->chgBit(oldp+2711,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__out__DOT__t8) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__out__DOT__t10))));
            tracep->chgBit(oldp+2712,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__out__DOT__t11) 
                                             ^ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t2 
                                                 >> 2U) 
                                                ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t2 
                                                   >> 0xbU))))));
            tracep->chgBit(oldp+2713,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__out__DOT__t11) 
                                             ^ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t2 
                                                 >> 7U) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1))))));
            tracep->chgCData(oldp+2714,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT____Vcellout__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__fx),8);
            tracep->chgCData(oldp+2715,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                        [7U]),8);
            tracep->chgIData(oldp+2716,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1),21);
            tracep->chgIData(oldp+2717,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2),18);
            tracep->chgBit(oldp+2718,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y17));
            tracep->chgBit(oldp+2719,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y16));
            tracep->chgBit(oldp+2720,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y2));
            tracep->chgBit(oldp+2721,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y1));
            tracep->chgBit(oldp+2722,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y18));
            tracep->chgBit(oldp+2723,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t0));
            tracep->chgBit(oldp+2724,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y6));
            tracep->chgBit(oldp+2725,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y14));
            tracep->chgBit(oldp+2726,((1U & (~ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                [7U] 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y1))))));
            tracep->chgBit(oldp+2727,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y8));
            tracep->chgBit(oldp+2728,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y2) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t0))));
            tracep->chgBit(oldp+2729,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y1) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t0))));
            tracep->chgBit(oldp+2730,((1U & (~ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                 [7U] 
                                                 >> 5U) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y1))))));
            tracep->chgBit(oldp+2731,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t1));
            tracep->chgBit(oldp+2732,((1U & (~ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                 [7U] 
                                                 >> 5U) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y14))))));
            tracep->chgBit(oldp+2733,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y18) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t1))));
            tracep->chgBit(oldp+2734,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                              [7U] 
                                              >> 3U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y6)))));
            tracep->chgBit(oldp+2735,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t2));
            tracep->chgBit(oldp+2736,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t3));
            tracep->chgBit(oldp+2737,((1U & (~ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                 [7U] 
                                                 >> 5U) 
                                                ^ (
                                                   vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                   [7U] 
                                                   >> 3U))))));
            tracep->chgBit(oldp+2738,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y16) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t2))));
            tracep->chgBit(oldp+2739,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t1) 
                                             ^ (~ (
                                                   (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                    [7U] 
                                                    >> 5U) 
                                                   ^ 
                                                   (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                    [7U] 
                                                    >> 3U)))))));
            tracep->chgBit(oldp+2740,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y20));
            tracep->chgBit(oldp+2741,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y8) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y20))));
            tracep->chgBit(oldp+2742,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y8) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t3))));
            tracep->chgBit(oldp+2743,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                              [7U] 
                                              >> 7U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t2)))));
            tracep->chgBit(oldp+2744,((1U & VL_REDXOR_32(
                                                         (0x1008U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2745,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1));
            tracep->chgBit(oldp+2746,((IData)((0x20040U 
                                               == (0x20040U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2747,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                              >> 0xaU) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1)))));
            tracep->chgBit(oldp+2748,((0x4001U == (0x4001U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1))));
            tracep->chgBit(oldp+2749,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                               >> 0xeU) 
                                              & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1)))));
            tracep->chgBit(oldp+2750,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6));
            tracep->chgBit(oldp+2751,((IData)((0x10080U 
                                               == (0x10080U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2752,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                               >> 3U) 
                                              ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                 >> 0xcU)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6)))));
            tracep->chgBit(oldp+2753,((IData)((0xa000U 
                                               == (0xa000U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2754,((1U & ((0xa000U 
                                              == (0xa000U 
                                                  & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6)))));
            tracep->chgBit(oldp+2755,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t11));
            tracep->chgBit(oldp+2756,((IData)((0x100010U 
                                               == (0x100010U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2757,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t13));
            tracep->chgBit(oldp+2758,((IData)((0x104U 
                                               == (0x104U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2759,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t15));
            tracep->chgBit(oldp+2760,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                               >> 0xaU) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1)) 
                                             ^ (0x20040U 
                                                == 
                                                (0x20040U 
                                                 & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1))))));
            tracep->chgBit(oldp+2761,((1U & ((((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                >> 0xeU) 
                                               & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1)) 
                                             ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                >> 0x12U)))));
            tracep->chgBit(oldp+2762,((1U & ((((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                >> 3U) 
                                               ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                  >> 0xcU)) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6)) 
                                             ^ (0x10080U 
                                                == 
                                                (0x10080U 
                                                 & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1))))));
            tracep->chgBit(oldp+2763,((1U & (((0xa000U 
                                               == (0xa000U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t15)))));
            tracep->chgBit(oldp+2764,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t20));
            tracep->chgBit(oldp+2765,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21));
            tracep->chgBit(oldp+2766,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t22));
            tracep->chgBit(oldp+2767,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23));
            tracep->chgBit(oldp+2768,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t24));
            tracep->chgBit(oldp+2769,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25));
            tracep->chgBit(oldp+2770,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+2771,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t27));
            tracep->chgBit(oldp+2772,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+2773,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23) 
                                        ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25)) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t27))));
            tracep->chgBit(oldp+2774,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21) 
                                        ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25)) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t24))));
            tracep->chgBit(oldp+2775,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t20) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23))));
            tracep->chgBit(oldp+2776,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t27) 
                                       & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t20) 
                                          & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23)))));
            tracep->chgBit(oldp+2777,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t27) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+2778,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t22))));
            tracep->chgBit(oldp+2779,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t24) 
                                       & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21) 
                                          & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t22)))));
            tracep->chgBit(oldp+2780,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t24) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+2781,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t37));
            tracep->chgBit(oldp+2782,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t38));
            tracep->chgBit(oldp+2783,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t39));
            tracep->chgBit(oldp+2784,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t40));
            tracep->chgBit(oldp+2785,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t41));
            tracep->chgBit(oldp+2786,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t42));
            tracep->chgBit(oldp+2787,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t43));
            tracep->chgBit(oldp+2788,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t44));
            tracep->chgBit(oldp+2789,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t45));
            tracep->chgBit(oldp+2790,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t0));
            tracep->chgBit(oldp+2791,((1U & VL_REDXOR_32(
                                                         (0x300U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+2792,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t2));
            tracep->chgBit(oldp+2793,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t3));
            tracep->chgBit(oldp+2794,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t4));
            tracep->chgBit(oldp+2795,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t5));
            tracep->chgBit(oldp+2796,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6));
            tracep->chgBit(oldp+2797,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t7));
            tracep->chgBit(oldp+2798,((1U & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                             ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                                >> 3U)))));
            tracep->chgBit(oldp+2799,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t9));
            tracep->chgBit(oldp+2800,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t10));
            tracep->chgBit(oldp+2801,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t11));
            tracep->chgBit(oldp+2802,((1U & VL_REDXOR_32(
                                                         (0x14000U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+2803,((1U & VL_REDXOR_32(
                                                         (0x20002U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+2804,((1U & VL_REDXOR_32(
                                                         (0x21000U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+2805,((1U & VL_REDXOR_32(
                                                         (0x210U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+2806,((1U & VL_REDXOR_32(
                                                         (0x880U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+2807,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                              >> 8U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t2)))));
            tracep->chgBit(oldp+2808,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                              >> 0xdU) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t5)))));
            tracep->chgBit(oldp+2809,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t2) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t3))));
            tracep->chgBit(oldp+2810,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t4) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6))));
            tracep->chgBit(oldp+2811,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t22));
            tracep->chgBit(oldp+2812,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t23));
            tracep->chgBit(oldp+2813,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t5) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t7))));
            tracep->chgBit(oldp+2814,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t10))));
            tracep->chgBit(oldp+2815,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t9) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t11))));
            tracep->chgBit(oldp+2816,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t10) 
                                             ^ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                                 >> 0xdU) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t5))))));
            tracep->chgBit(oldp+2817,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t11) 
                                       ^ ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6) 
                                          ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t10)))));
            tracep->chgBit(oldp+2818,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                               >> 4U) 
                                              ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                                 >> 9U)) 
                                             ^ ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t4) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6))))));
            tracep->chgCData(oldp+2819,((0xffU & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__mix_dec_i0)),8);
            tracep->chgCData(oldp+2820,((0xffU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__mix_dec_i0 
                                                  >> 8U))),8);
            tracep->chgCData(oldp+2821,((0xffU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__mix_dec_i0 
                                                  >> 0x10U))),8);
            tracep->chgCData(oldp+2822,((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__mix_dec_i0 
                                         >> 0x18U)),8);
            tracep->chgIData(oldp+2823,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d0__DOT__mix_in_3),32);
            tracep->chgIData(oldp+2824,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d0__DOT__mix_in_2),32);
            tracep->chgIData(oldp+2825,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d0__DOT__mix_in_1),32);
            tracep->chgIData(oldp+2826,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d0__DOT__mix_in_0),32);
            tracep->chgCData(oldp+2827,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d0__DOT__mix_out_3),8);
            tracep->chgCData(oldp+2828,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d0__DOT__mix_out_2),8);
            tracep->chgCData(oldp+2829,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d0__DOT__mix_out_1),8);
            tracep->chgCData(oldp+2830,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d0__DOT__mix_out_0),8);
            tracep->chgCData(oldp+2831,((0xffU & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d0__DOT__mix_in_0)),8);
            tracep->chgCData(oldp+2832,((0xffU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d0__DOT__mix_in_0 
                                                  >> 8U))),8);
            tracep->chgCData(oldp+2833,((0xffU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d0__DOT__mix_in_0 
                                                  >> 0x10U))),8);
            tracep->chgCData(oldp+2834,((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d0__DOT__mix_in_0 
                                         >> 0x18U)),8);
            tracep->chgCData(oldp+2835,((0xffU & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d0__DOT__mix_in_1)),8);
            tracep->chgCData(oldp+2836,((0xffU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d0__DOT__mix_in_1 
                                                  >> 8U))),8);
            tracep->chgCData(oldp+2837,((0xffU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d0__DOT__mix_in_1 
                                                  >> 0x10U))),8);
            tracep->chgCData(oldp+2838,((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d0__DOT__mix_in_1 
                                         >> 0x18U)),8);
            tracep->chgCData(oldp+2839,((0xffU & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d0__DOT__mix_in_2)),8);
            tracep->chgCData(oldp+2840,((0xffU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d0__DOT__mix_in_2 
                                                  >> 8U))),8);
            tracep->chgCData(oldp+2841,((0xffU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d0__DOT__mix_in_2 
                                                  >> 0x10U))),8);
            tracep->chgCData(oldp+2842,((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d0__DOT__mix_in_2 
                                         >> 0x18U)),8);
            tracep->chgCData(oldp+2843,((0xffU & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d0__DOT__mix_in_3)),8);
            tracep->chgCData(oldp+2844,((0xffU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d0__DOT__mix_in_3 
                                                  >> 8U))),8);
            tracep->chgCData(oldp+2845,((0xffU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d0__DOT__mix_in_3 
                                                  >> 0x10U))),8);
            tracep->chgCData(oldp+2846,((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d0__DOT__mix_in_3 
                                         >> 0x18U)),8);
            tracep->chgCData(oldp+2847,((0xffU & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__mix_dec_i1)),8);
            tracep->chgCData(oldp+2848,((0xffU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__mix_dec_i1 
                                                  >> 8U))),8);
            tracep->chgCData(oldp+2849,((0xffU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__mix_dec_i1 
                                                  >> 0x10U))),8);
            tracep->chgCData(oldp+2850,((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__mix_dec_i1 
                                         >> 0x18U)),8);
            tracep->chgIData(oldp+2851,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d1__DOT__mix_in_3),32);
            tracep->chgIData(oldp+2852,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d1__DOT__mix_in_2),32);
            tracep->chgIData(oldp+2853,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d1__DOT__mix_in_1),32);
            tracep->chgIData(oldp+2854,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d1__DOT__mix_in_0),32);
            tracep->chgCData(oldp+2855,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d1__DOT__mix_out_3),8);
            tracep->chgCData(oldp+2856,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d1__DOT__mix_out_2),8);
            tracep->chgCData(oldp+2857,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d1__DOT__mix_out_1),8);
            tracep->chgCData(oldp+2858,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d1__DOT__mix_out_0),8);
            tracep->chgCData(oldp+2859,((0xffU & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d1__DOT__mix_in_0)),8);
            tracep->chgCData(oldp+2860,((0xffU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d1__DOT__mix_in_0 
                                                  >> 8U))),8);
            tracep->chgCData(oldp+2861,((0xffU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d1__DOT__mix_in_0 
                                                  >> 0x10U))),8);
            tracep->chgCData(oldp+2862,((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d1__DOT__mix_in_0 
                                         >> 0x18U)),8);
            tracep->chgCData(oldp+2863,((0xffU & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d1__DOT__mix_in_1)),8);
            tracep->chgCData(oldp+2864,((0xffU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d1__DOT__mix_in_1 
                                                  >> 8U))),8);
            tracep->chgCData(oldp+2865,((0xffU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d1__DOT__mix_in_1 
                                                  >> 0x10U))),8);
            tracep->chgCData(oldp+2866,((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d1__DOT__mix_in_1 
                                         >> 0x18U)),8);
            tracep->chgCData(oldp+2867,((0xffU & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d1__DOT__mix_in_2)),8);
            tracep->chgCData(oldp+2868,((0xffU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d1__DOT__mix_in_2 
                                                  >> 8U))),8);
            tracep->chgCData(oldp+2869,((0xffU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d1__DOT__mix_in_2 
                                                  >> 0x10U))),8);
            tracep->chgCData(oldp+2870,((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d1__DOT__mix_in_2 
                                         >> 0x18U)),8);
            tracep->chgCData(oldp+2871,((0xffU & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d1__DOT__mix_in_3)),8);
            tracep->chgCData(oldp+2872,((0xffU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d1__DOT__mix_in_3 
                                                  >> 8U))),8);
            tracep->chgCData(oldp+2873,((0xffU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d1__DOT__mix_in_3 
                                                  >> 0x10U))),8);
            tracep->chgCData(oldp+2874,((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d1__DOT__mix_in_3 
                                         >> 0x18U)),8);
            tracep->chgWData(oldp+2875,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4),1380);
            tracep->chgWData(oldp+2919,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[0]),69);
            tracep->chgWData(oldp+2922,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[1]),69);
            tracep->chgWData(oldp+2925,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[2]),69);
            tracep->chgWData(oldp+2928,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[3]),69);
            tracep->chgWData(oldp+2931,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[4]),69);
            tracep->chgWData(oldp+2934,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[5]),69);
            tracep->chgWData(oldp+2937,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[6]),69);
            tracep->chgWData(oldp+2940,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[7]),69);
            tracep->chgWData(oldp+2943,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[8]),69);
            tracep->chgWData(oldp+2946,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[9]),69);
            tracep->chgWData(oldp+2949,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[10]),69);
            tracep->chgWData(oldp+2952,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[11]),69);
            tracep->chgWData(oldp+2955,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[12]),69);
            tracep->chgWData(oldp+2958,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[13]),69);
            tracep->chgWData(oldp+2961,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[14]),69);
            tracep->chgWData(oldp+2964,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[15]),69);
            tracep->chgWData(oldp+2967,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[16]),69);
            tracep->chgWData(oldp+2970,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[17]),69);
            tracep->chgWData(oldp+2973,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[18]),69);
            tracep->chgWData(oldp+2976,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[19]),69);
            tracep->chgCData(oldp+2979,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[0]),5);
            tracep->chgCData(oldp+2980,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[1]),5);
            tracep->chgCData(oldp+2981,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[2]),5);
            tracep->chgCData(oldp+2982,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[3]),5);
            tracep->chgCData(oldp+2983,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[4]),5);
            tracep->chgCData(oldp+2984,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[5]),5);
            tracep->chgCData(oldp+2985,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[6]),5);
            tracep->chgCData(oldp+2986,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[7]),5);
            tracep->chgCData(oldp+2987,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[8]),5);
            tracep->chgCData(oldp+2988,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[9]),5);
            tracep->chgCData(oldp+2989,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[10]),5);
            tracep->chgCData(oldp+2990,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[11]),5);
            tracep->chgCData(oldp+2991,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[12]),5);
            tracep->chgCData(oldp+2992,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[13]),5);
            tracep->chgCData(oldp+2993,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[14]),5);
            tracep->chgCData(oldp+2994,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[15]),5);
            tracep->chgCData(oldp+2995,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[16]),5);
            tracep->chgCData(oldp+2996,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[17]),5);
            tracep->chgCData(oldp+2997,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[18]),5);
            tracep->chgCData(oldp+2998,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[19]),5);
            tracep->chgQData(oldp+2999,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+3001,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+3003,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+3005,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+3007,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[4]),64);
            tracep->chgQData(oldp+3009,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[5]),64);
            tracep->chgQData(oldp+3011,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[6]),64);
            tracep->chgQData(oldp+3013,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[7]),64);
            tracep->chgQData(oldp+3015,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[8]),64);
            tracep->chgQData(oldp+3017,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[9]),64);
            tracep->chgQData(oldp+3019,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[10]),64);
            tracep->chgQData(oldp+3021,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[11]),64);
            tracep->chgQData(oldp+3023,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[12]),64);
            tracep->chgQData(oldp+3025,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[13]),64);
            tracep->chgQData(oldp+3027,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[14]),64);
            tracep->chgQData(oldp+3029,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[15]),64);
            tracep->chgQData(oldp+3031,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[16]),64);
            tracep->chgQData(oldp+3033,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[17]),64);
            tracep->chgQData(oldp+3035,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[18]),64);
            tracep->chgQData(oldp+3037,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[19]),64);
            tracep->chgQData(oldp+3039,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+3041,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__hit));
            tracep->chgWData(oldp+3042,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__csr_value_write____pinNumber4),201);
            tracep->chgWData(oldp+3049,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_value_write__DOT__i0__DOT__pair_list[0]),67);
            tracep->chgWData(oldp+3052,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_value_write__DOT__i0__DOT__pair_list[1]),67);
            tracep->chgWData(oldp+3055,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_value_write__DOT__i0__DOT__pair_list[2]),67);
            tracep->chgCData(oldp+3058,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_value_write__DOT__i0__DOT__key_list[0]),3);
            tracep->chgCData(oldp+3059,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_value_write__DOT__i0__DOT__key_list[1]),3);
            tracep->chgCData(oldp+3060,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_value_write__DOT__i0__DOT__key_list[2]),3);
            tracep->chgQData(oldp+3061,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_value_write__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+3063,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_value_write__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+3065,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_value_write__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+3067,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_value_write__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+3069,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_value_write__DOT__i0__DOT__hit));
            tracep->chgQData(oldp+3070,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[0]),64);
            tracep->chgQData(oldp+3072,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[1]),64);
            tracep->chgQData(oldp+3074,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[2]),64);
            tracep->chgQData(oldp+3076,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[3]),64);
            tracep->chgQData(oldp+3078,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[4]),64);
            tracep->chgQData(oldp+3080,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[5]),64);
            tracep->chgQData(oldp+3082,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[6]),64);
            tracep->chgQData(oldp+3084,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[7]),64);
            tracep->chgQData(oldp+3086,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[8]),64);
            tracep->chgQData(oldp+3088,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[9]),64);
            tracep->chgQData(oldp+3090,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[10]),64);
            tracep->chgQData(oldp+3092,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[11]),64);
            tracep->chgQData(oldp+3094,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[12]),64);
            tracep->chgQData(oldp+3096,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[13]),64);
            tracep->chgQData(oldp+3098,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[14]),64);
            tracep->chgQData(oldp+3100,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[15]),64);
            tracep->chgQData(oldp+3102,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[16]),64);
            tracep->chgQData(oldp+3104,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[17]),64);
            tracep->chgQData(oldp+3106,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[18]),64);
            tracep->chgQData(oldp+3108,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[19]),64);
            tracep->chgQData(oldp+3110,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[20]),64);
            tracep->chgQData(oldp+3112,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[21]),64);
            tracep->chgQData(oldp+3114,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[22]),64);
            tracep->chgQData(oldp+3116,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[23]),64);
            tracep->chgQData(oldp+3118,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[24]),64);
            tracep->chgQData(oldp+3120,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[25]),64);
            tracep->chgQData(oldp+3122,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[26]),64);
            tracep->chgQData(oldp+3124,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[27]),64);
            tracep->chgQData(oldp+3126,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[28]),64);
            tracep->chgQData(oldp+3128,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[29]),64);
            tracep->chgQData(oldp+3130,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[30]),64);
            tracep->chgQData(oldp+3132,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[31]),64);
            tracep->chgQData(oldp+3134,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[0]),64);
            tracep->chgQData(oldp+3136,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[1]),64);
            tracep->chgQData(oldp+3138,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[2]),64);
            tracep->chgQData(oldp+3140,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[3]),64);
            tracep->chgQData(oldp+3142,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[4]),64);
            tracep->chgQData(oldp+3144,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[5]),64);
            tracep->chgQData(oldp+3146,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[6]),64);
            tracep->chgQData(oldp+3148,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[7]),64);
            tracep->chgQData(oldp+3150,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[8]),64);
            tracep->chgQData(oldp+3152,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[9]),64);
            tracep->chgQData(oldp+3154,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[10]),64);
            tracep->chgQData(oldp+3156,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[11]),64);
            tracep->chgQData(oldp+3158,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[12]),64);
            tracep->chgQData(oldp+3160,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[13]),64);
            tracep->chgQData(oldp+3162,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[14]),64);
            tracep->chgQData(oldp+3164,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[15]),64);
            tracep->chgQData(oldp+3166,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[16]),64);
            tracep->chgQData(oldp+3168,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[17]),64);
            tracep->chgQData(oldp+3170,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[18]),64);
            tracep->chgQData(oldp+3172,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[19]),64);
            tracep->chgQData(oldp+3174,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[20]),64);
            tracep->chgQData(oldp+3176,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[21]),64);
            tracep->chgQData(oldp+3178,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[22]),64);
            tracep->chgQData(oldp+3180,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[23]),64);
            tracep->chgQData(oldp+3182,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[24]),64);
            tracep->chgQData(oldp+3184,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[25]),64);
            tracep->chgQData(oldp+3186,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[26]),64);
            tracep->chgQData(oldp+3188,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[27]),64);
            tracep->chgQData(oldp+3190,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[28]),64);
            tracep->chgQData(oldp+3192,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[29]),64);
            tracep->chgQData(oldp+3194,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[30]),64);
            tracep->chgQData(oldp+3196,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[31]),64);
            tracep->chgWData(oldp+3198,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_value0____pinNumber4),136);
            tracep->chgWData(oldp+3203,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_value0__DOT__i0__DOT__pair_list[0]),68);
            tracep->chgWData(oldp+3206,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_value0__DOT__i0__DOT__pair_list[1]),68);
            tracep->chgCData(oldp+3209,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_value0__DOT__i0__DOT__key_list[0]),4);
            tracep->chgCData(oldp+3210,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_value0__DOT__i0__DOT__key_list[1]),4);
            tracep->chgQData(oldp+3211,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_value0__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+3213,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_value0__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+3215,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_value0__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+3217,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_value0__DOT__i0__DOT__hit));
            tracep->chgQData(oldp+3218,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__operation_a_forward),64);
            tracep->chgQData(oldp+3220,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__operation_b_forward),64);
            tracep->chgBit(oldp+3222,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_en));
            tracep->chgWData(oldp+3223,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_c_mux____pinNumber4),264);
            tracep->chgWData(oldp+3232,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__pair_list[0]),66);
            tracep->chgWData(oldp+3235,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__pair_list[1]),66);
            tracep->chgWData(oldp+3238,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__pair_list[2]),66);
            tracep->chgWData(oldp+3241,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__pair_list[3]),66);
            tracep->chgCData(oldp+3244,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__key_list[0]),2);
            tracep->chgCData(oldp+3245,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__key_list[1]),2);
            tracep->chgCData(oldp+3246,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__key_list[2]),2);
            tracep->chgCData(oldp+3247,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__key_list[3]),2);
            tracep->chgQData(oldp+3248,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+3250,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+3252,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+3254,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+3256,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+3258,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__hit));
            tracep->chgWData(oldp+3259,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_d_mux____pinNumber4),264);
            tracep->chgWData(oldp+3268,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__pair_list[0]),66);
            tracep->chgWData(oldp+3271,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__pair_list[1]),66);
            tracep->chgWData(oldp+3274,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__pair_list[2]),66);
            tracep->chgWData(oldp+3277,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__pair_list[3]),66);
            tracep->chgCData(oldp+3280,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__key_list[0]),2);
            tracep->chgCData(oldp+3281,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__key_list[1]),2);
            tracep->chgCData(oldp+3282,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__key_list[2]),2);
            tracep->chgCData(oldp+3283,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__key_list[3]),2);
            tracep->chgQData(oldp+3284,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+3286,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+3288,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+3290,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+3292,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+3294,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__hit));
            tracep->chgIData(oldp+3295,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__branch_test____pinNumber4),24);
            tracep->chgCData(oldp+3296,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__pair_list[0]),4);
            tracep->chgCData(oldp+3297,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__pair_list[1]),4);
            tracep->chgCData(oldp+3298,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__pair_list[2]),4);
            tracep->chgCData(oldp+3299,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__pair_list[3]),4);
            tracep->chgCData(oldp+3300,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__pair_list[4]),4);
            tracep->chgCData(oldp+3301,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__pair_list[5]),4);
            tracep->chgCData(oldp+3302,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__key_list[0]),3);
            tracep->chgCData(oldp+3303,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__key_list[1]),3);
            tracep->chgCData(oldp+3304,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__key_list[2]),3);
            tracep->chgCData(oldp+3305,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__key_list[3]),3);
            tracep->chgCData(oldp+3306,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__key_list[4]),3);
            tracep->chgCData(oldp+3307,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__key_list[5]),3);
            tracep->chgBit(oldp+3308,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__data_list[0]));
            tracep->chgBit(oldp+3309,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__data_list[1]));
            tracep->chgBit(oldp+3310,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__data_list[2]));
            tracep->chgBit(oldp+3311,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__data_list[3]));
            tracep->chgBit(oldp+3312,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__data_list[4]));
            tracep->chgBit(oldp+3313,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__data_list[5]));
            tracep->chgBit(oldp+3314,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__lut_out));
            tracep->chgBit(oldp+3315,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__hit));
        }
        tracep->chgBit(oldp+3316,(vlSelf->clock));
        tracep->chgBit(oldp+3317,(vlSelf->reset));
        tracep->chgQData(oldp+3318,(vlSelf->io_logCtrl_log_begin),64);
        tracep->chgQData(oldp+3320,(vlSelf->io_logCtrl_log_end),64);
        tracep->chgQData(oldp+3322,(vlSelf->io_logCtrl_log_level),64);
        tracep->chgBit(oldp+3324,(vlSelf->io_perfInfo_clean));
        tracep->chgBit(oldp+3325,(vlSelf->io_perfInfo_dump));
        tracep->chgBit(oldp+3326,(vlSelf->io_uart_out_valid));
        tracep->chgCData(oldp+3327,(vlSelf->io_uart_out_ch),8);
        tracep->chgBit(oldp+3328,(vlSelf->io_uart_in_valid));
        tracep->chgCData(oldp+3329,(vlSelf->io_uart_in_ch),8);
        tracep->chgBit(oldp+3330,(vlSelf->io_memAXI_0_aw_ready));
        tracep->chgBit(oldp+3331,(vlSelf->io_memAXI_0_aw_valid));
        tracep->chgIData(oldp+3332,(vlSelf->io_memAXI_0_aw_bits_addr),32);
        tracep->chgCData(oldp+3333,(vlSelf->io_memAXI_0_aw_bits_prot),3);
        tracep->chgCData(oldp+3334,(vlSelf->io_memAXI_0_aw_bits_id),4);
        tracep->chgBit(oldp+3335,(vlSelf->io_memAXI_0_aw_bits_user));
        tracep->chgCData(oldp+3336,(vlSelf->io_memAXI_0_aw_bits_len),8);
        tracep->chgCData(oldp+3337,(vlSelf->io_memAXI_0_aw_bits_size),3);
        tracep->chgCData(oldp+3338,(vlSelf->io_memAXI_0_aw_bits_burst),2);
        tracep->chgBit(oldp+3339,(vlSelf->io_memAXI_0_aw_bits_lock));
        tracep->chgCData(oldp+3340,(vlSelf->io_memAXI_0_aw_bits_cache),4);
        tracep->chgCData(oldp+3341,(vlSelf->io_memAXI_0_aw_bits_qos),4);
        tracep->chgBit(oldp+3342,(vlSelf->io_memAXI_0_w_ready));
        tracep->chgBit(oldp+3343,(vlSelf->io_memAXI_0_w_valid));
        tracep->chgQData(oldp+3344,(vlSelf->io_memAXI_0_w_bits_data[0]),64);
        tracep->chgQData(oldp+3346,(vlSelf->io_memAXI_0_w_bits_data[1]),64);
        tracep->chgQData(oldp+3348,(vlSelf->io_memAXI_0_w_bits_data[2]),64);
        tracep->chgQData(oldp+3350,(vlSelf->io_memAXI_0_w_bits_data[3]),64);
        tracep->chgCData(oldp+3352,(vlSelf->io_memAXI_0_w_bits_strb),8);
        tracep->chgBit(oldp+3353,(vlSelf->io_memAXI_0_w_bits_last));
        tracep->chgBit(oldp+3354,(vlSelf->io_memAXI_0_b_ready));
        tracep->chgBit(oldp+3355,(vlSelf->io_memAXI_0_b_valid));
        tracep->chgCData(oldp+3356,(vlSelf->io_memAXI_0_b_bits_resp),2);
        tracep->chgCData(oldp+3357,(vlSelf->io_memAXI_0_b_bits_id),4);
        tracep->chgBit(oldp+3358,(vlSelf->io_memAXI_0_b_bits_user));
        tracep->chgBit(oldp+3359,(vlSelf->io_memAXI_0_ar_ready));
        tracep->chgBit(oldp+3360,(vlSelf->io_memAXI_0_ar_valid));
        tracep->chgIData(oldp+3361,(vlSelf->io_memAXI_0_ar_bits_addr),32);
        tracep->chgCData(oldp+3362,(vlSelf->io_memAXI_0_ar_bits_prot),3);
        tracep->chgCData(oldp+3363,(vlSelf->io_memAXI_0_ar_bits_id),4);
        tracep->chgBit(oldp+3364,(vlSelf->io_memAXI_0_ar_bits_user));
        tracep->chgCData(oldp+3365,(vlSelf->io_memAXI_0_ar_bits_len),8);
        tracep->chgCData(oldp+3366,(vlSelf->io_memAXI_0_ar_bits_size),3);
        tracep->chgCData(oldp+3367,(vlSelf->io_memAXI_0_ar_bits_burst),2);
        tracep->chgBit(oldp+3368,(vlSelf->io_memAXI_0_ar_bits_lock));
        tracep->chgCData(oldp+3369,(vlSelf->io_memAXI_0_ar_bits_cache),4);
        tracep->chgCData(oldp+3370,(vlSelf->io_memAXI_0_ar_bits_qos),4);
        tracep->chgBit(oldp+3371,(vlSelf->io_memAXI_0_r_ready));
        tracep->chgBit(oldp+3372,(vlSelf->io_memAXI_0_r_valid));
        tracep->chgCData(oldp+3373,(vlSelf->io_memAXI_0_r_bits_resp),2);
        tracep->chgQData(oldp+3374,(vlSelf->io_memAXI_0_r_bits_data[0]),64);
        tracep->chgQData(oldp+3376,(vlSelf->io_memAXI_0_r_bits_data[1]),64);
        tracep->chgQData(oldp+3378,(vlSelf->io_memAXI_0_r_bits_data[2]),64);
        tracep->chgQData(oldp+3380,(vlSelf->io_memAXI_0_r_bits_data[3]),64);
        tracep->chgBit(oldp+3382,(vlSelf->io_memAXI_0_r_bits_last));
        tracep->chgCData(oldp+3383,(vlSelf->io_memAXI_0_r_bits_id),4);
        tracep->chgBit(oldp+3384,(vlSelf->io_memAXI_0_r_bits_user));
        tracep->chgQData(oldp+3385,(vlSelf->io_memAXI_0_r_bits_data
                                    [0U]),64);
        tracep->chgBit(oldp+3387,((1U & (~ (IData)(vlSelf->reset)))));
        VL_EXTEND_WQ(65,64, __Vtemp1078, vlSelf->io_memAXI_0_r_bits_data
                     [0U]);
        tracep->chgWData(oldp+3388,(__Vtemp1078),65);
        tracep->chgBit(oldp+3391,(((IData)(vlSelf->io_memAXI_0_aw_ready) 
                                   & (1U == (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__w_state)))));
        tracep->chgBit(oldp+3392,(((IData)(vlSelf->io_memAXI_0_ar_ready) 
                                   & (1U == (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__r_state)))));
        tracep->chgBit(oldp+3393,((((IData)(vlSelf->reset) 
                                    | ((IData)(vlSelf->SimTop__DOT__rw_req) 
                                       & (0U == (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__w_state)))) 
                                   | ((~ (IData)(vlSelf->SimTop__DOT__rw_req)) 
                                      & (0U == (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__r_state))))));
        tracep->chgBit(oldp+3394,((1U & ((IData)(vlSelf->SimTop__DOT__rw_req)
                                          ? (IData)(vlSelf->io_memAXI_0_b_bits_resp)
                                          : (IData)(vlSelf->io_memAXI_0_r_bits_resp)))));
        __Vtemp1079[0U] = 0xffffffffU;
        __Vtemp1079[1U] = 0U;
        __Vtemp1079[2U] = 0U;
        __Vtemp1079[3U] = 0U;
        VL_EXTEND_WQ(65,64, __Vtemp1080, vlSelf->SimTop__DOT__rw_addr);
        VL_SHIFTL_WWI(128,128,6, __Vtemp1081, __Vtemp1079, 
                      (0x38U & (__Vtemp1080[0U] << 3U)));
        VL_EXTEND_WQ(65,64, __Vtemp1082, vlSelf->SimTop__DOT__rw_addr);
        tracep->chgQData(oldp+3395,(((vlSelf->io_memAXI_0_r_bits_data
                                      [0U] & (((QData)((IData)(
                                                               __Vtemp1081[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                __Vtemp1081[0U])))) 
                                     >> (0x38U & (__Vtemp1082[0U] 
                                                  << 3U)))),64);
        __Vtemp1083[0U] = 0xffffffffU;
        __Vtemp1083[1U] = 0U;
        __Vtemp1083[2U] = 0U;
        __Vtemp1083[3U] = 0U;
        VL_EXTEND_WQ(65,64, __Vtemp1084, vlSelf->SimTop__DOT__rw_addr);
        VL_SHIFTL_WWI(128,128,6, __Vtemp1085, __Vtemp1083, 
                      (0x38U & (__Vtemp1084[0U] << 3U)));
        VL_EXTEND_WQ(65,64, __Vtemp1086, vlSelf->SimTop__DOT__rw_addr);
        tracep->chgQData(oldp+3397,(((vlSelf->io_memAXI_0_r_bits_data
                                      [0U] & (((QData)((IData)(
                                                               __Vtemp1085[3U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                __Vtemp1085[2U])))) 
                                     << (0x3fU & (- 
                                                  (0x38U 
                                                   & (__Vtemp1086[0U] 
                                                      << 3U)))))),64);
        tracep->chgBit(oldp+3399,(((~ (IData)(vlSelf->reset)) 
                                   & ((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__read_mem_en_wb) 
                                        & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__write_mem_en_mem)) 
                                       & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rs2_mem) 
                                          == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rd_wb))) 
                                      & (0U != (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rd_wb))))));
        tracep->chgBit(oldp+3400,((1U & ((IData)(vlSelf->reset) 
                                         | (~ (((vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                                 != vlSelf->SimTop__DOT__u_cpu__DOT__inst_ex) 
                                                & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__read_mem_en_ex)) 
                                               & (((0x1fU 
                                                    & (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                                       >> 0xfU)) 
                                                   == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rd_ex)) 
                                                  | ((0x1fU 
                                                      & (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                                         >> 0x14U)) 
                                                     == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rd_ex)))))))));
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

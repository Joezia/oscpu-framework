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
    VlWide<3>/*95:0*/ __Vtemp1065;
    VlWide<4>/*127:0*/ __Vtemp1069;
    VlWide<4>/*127:0*/ __Vtemp1071;
    VlWide<4>/*127:0*/ __Vtemp1073;
    VlWide<3>/*95:0*/ __Vtemp1074;
    VlWide<3>/*95:0*/ __Vtemp1075;
    VlWide<3>/*95:0*/ __Vtemp1076;
    VlWide<3>/*95:0*/ __Vtemp1077;
    VlWide<3>/*95:0*/ __Vtemp1078;
    VlWide<3>/*95:0*/ __Vtemp1079;
    VlWide<3>/*95:0*/ __Vtemp1080;
    VlWide<4>/*127:0*/ __Vtemp1081;
    VlWide<3>/*95:0*/ __Vtemp1082;
    VlWide<4>/*127:0*/ __Vtemp1083;
    VlWide<4>/*127:0*/ __Vtemp1084;
    VlWide<3>/*95:0*/ __Vtemp1085;
    VlWide<4>/*127:0*/ __Vtemp1086;
    VlWide<4>/*127:0*/ __Vtemp1087;
    VlWide<3>/*95:0*/ __Vtemp1088;
    VlWide<4>/*127:0*/ __Vtemp1089;
    VlWide<4>/*127:0*/ __Vtemp1094;
    VlWide<3>/*95:0*/ __Vtemp1095;
    VlWide<3>/*95:0*/ __Vtemp1096;
    VlWide<4>/*127:0*/ __Vtemp1097;
    VlWide<3>/*95:0*/ __Vtemp1098;
    VlWide<4>/*127:0*/ __Vtemp1099;
    VlWide<3>/*95:0*/ __Vtemp1100;
    VlWide<4>/*127:0*/ __Vtemp1101;
    VlWide<3>/*95:0*/ __Vtemp1102;
    VlWide<4>/*127:0*/ __Vtemp1103;
    VlWide<3>/*95:0*/ __Vtemp1104;
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
            VL_EXTEND_WQ(65,64, __Vtemp1065, vlSelf->SimTop__DOT__rw_addr);
            tracep->chgIData(oldp+17,((0xfffffff8U 
                                       & __Vtemp1065[0U])),32);
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
                __Vtemp1069[0U] = 0xffffffffU;
                __Vtemp1069[1U] = 0xffffffffU;
                __Vtemp1069[2U] = 0U;
                __Vtemp1069[3U] = 0U;
            } else {
                __Vtemp1069[0U] = 0U;
                __Vtemp1069[1U] = 0U;
                __Vtemp1069[2U] = 0xffffffffU;
                __Vtemp1069[3U] = 0xffffffffU;
            }
            tracep->chgWData(oldp+58,(__Vtemp1069),128);
            tracep->chgCData(oldp+62,(vlSelf->SimTop__DOT__iram_0_addr),6);
            VL_EXTEND_WQ(128,64, __Vtemp1071, vlSelf->SimTop__DOT__icache_data_read);
            if ((1U & (IData)((vlSelf->SimTop__DOT__u_icache__DOT__re_write_addr 
                               >> 3U)))) {
                __Vtemp1073[0U] = 0U;
                __Vtemp1073[1U] = 0U;
                __Vtemp1073[2U] = (IData)(vlSelf->SimTop__DOT__icache_data_read);
                __Vtemp1073[3U] = (IData)((vlSelf->SimTop__DOT__icache_data_read 
                                           >> 0x20U));
            } else {
                __Vtemp1073[0U] = __Vtemp1071[0U];
                __Vtemp1073[1U] = __Vtemp1071[1U];
                __Vtemp1073[2U] = __Vtemp1071[2U];
                __Vtemp1073[3U] = __Vtemp1071[3U];
            }
            tracep->chgWData(oldp+63,(__Vtemp1073),128);
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
            VL_EXTEND_WQ(65,64, __Vtemp1074, vlSelf->SimTop__DOT__rw_addr);
            tracep->chgWData(oldp+92,(__Vtemp1074),65);
            tracep->chgBit(oldp+95,(((IData)(vlSelf->SimTop__DOT__rw_valid) 
                                     & (IData)(vlSelf->SimTop__DOT__rw_req))));
            tracep->chgBit(oldp+96,(((IData)(vlSelf->SimTop__DOT__rw_valid) 
                                     & (~ (IData)(vlSelf->SimTop__DOT__rw_req)))));
            tracep->chgCData(oldp+97,(vlSelf->SimTop__DOT__axi_rw__DOT__w_state),2);
            tracep->chgCData(oldp+98,(vlSelf->SimTop__DOT__axi_rw__DOT__r_state),2);
            tracep->chgBit(oldp+99,((0U == (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__w_state))));
            tracep->chgBit(oldp+100,((0U == (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__r_state))));
            VL_EXTEND_WQ(65,64, __Vtemp1075, vlSelf->SimTop__DOT__rw_addr);
            tracep->chgBit(oldp+101,((0U == (7U & __Vtemp1075[0U]))));
            VL_EXTEND_WQ(65,64, __Vtemp1076, vlSelf->SimTop__DOT__rw_addr);
            tracep->chgCData(oldp+102,((7U & __Vtemp1076[0U])),4);
            VL_EXTEND_WQ(65,64, __Vtemp1077, vlSelf->SimTop__DOT__rw_addr);
            tracep->chgCData(oldp+103,((0xfU & ((IData)(3U) 
                                                + (7U 
                                                   & __Vtemp1077[0U])))),4);
            VL_EXTEND_WQ(65,64, __Vtemp1078, vlSelf->SimTop__DOT__rw_addr);
            tracep->chgBit(oldp+104,((1U & (((IData)(3U) 
                                             + (7U 
                                                & __Vtemp1078[0U])) 
                                            >> 3U))));
            tracep->chgCData(oldp+105,(vlSelf->SimTop__DOT__axi_rw__DOT__len),8);
            VL_EXTEND_WQ(65,64, __Vtemp1079, vlSelf->SimTop__DOT__rw_addr);
            tracep->chgCData(oldp+106,((0x38U & (__Vtemp1079[0U] 
                                                 << 3U))),6);
            VL_EXTEND_WQ(65,64, __Vtemp1080, vlSelf->SimTop__DOT__rw_addr);
            tracep->chgCData(oldp+107,((0x3fU & (- 
                                                 (0x38U 
                                                  & (__Vtemp1080[0U] 
                                                     << 3U))))),6);
            __Vtemp1081[0U] = 0xffffffffU;
            __Vtemp1081[1U] = 0U;
            __Vtemp1081[2U] = 0U;
            __Vtemp1081[3U] = 0U;
            VL_EXTEND_WQ(65,64, __Vtemp1082, vlSelf->SimTop__DOT__rw_addr);
            VL_SHIFTL_WWI(128,128,6, __Vtemp1083, __Vtemp1081, 
                          (0x38U & (__Vtemp1082[0U] 
                                    << 3U)));
            tracep->chgWData(oldp+108,(__Vtemp1083),128);
            __Vtemp1084[0U] = 0xffffffffU;
            __Vtemp1084[1U] = 0U;
            __Vtemp1084[2U] = 0U;
            __Vtemp1084[3U] = 0U;
            VL_EXTEND_WQ(65,64, __Vtemp1085, vlSelf->SimTop__DOT__rw_addr);
            VL_SHIFTL_WWI(128,128,6, __Vtemp1086, __Vtemp1084, 
                          (0x38U & (__Vtemp1085[0U] 
                                    << 3U)));
            tracep->chgQData(oldp+112,((((QData)((IData)(
                                                         __Vtemp1086[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          __Vtemp1086[0U])))),64);
            __Vtemp1087[0U] = 0xffffffffU;
            __Vtemp1087[1U] = 0U;
            __Vtemp1087[2U] = 0U;
            __Vtemp1087[3U] = 0U;
            VL_EXTEND_WQ(65,64, __Vtemp1088, vlSelf->SimTop__DOT__rw_addr);
            VL_SHIFTL_WWI(128,128,6, __Vtemp1089, __Vtemp1087, 
                          (0x38U & (__Vtemp1088[0U] 
                                    << 3U)));
            tracep->chgQData(oldp+114,((((QData)((IData)(
                                                         __Vtemp1089[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          __Vtemp1089[2U])))),64);
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
            __Vtemp1094[0U] = (~ ((1U & (IData)((vlSelf->SimTop__DOT__u_icache__DOT__re_write_addr 
                                                 >> 3U)))
                                   ? 0xffffffffU : 0U));
            __Vtemp1094[1U] = (~ ((1U & (IData)((vlSelf->SimTop__DOT__u_icache__DOT__re_write_addr 
                                                 >> 3U)))
                                   ? 0xffffffffU : 0U));
            __Vtemp1094[2U] = (~ ((1U & (IData)((vlSelf->SimTop__DOT__u_icache__DOT__re_write_addr 
                                                 >> 3U)))
                                   ? 0U : 0xffffffffU));
            __Vtemp1094[3U] = (~ ((1U & (IData)((vlSelf->SimTop__DOT__u_icache__DOT__re_write_addr 
                                                 >> 3U)))
                                   ? 0U : 0xffffffffU));
            tracep->chgWData(oldp+165,(__Vtemp1094),128);
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
                                                   (((((((((((((((((((((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_aes64ds) 
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
                                       | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_srlw)) 
                                      | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__oisa_cmov))));
            tracep->chgBit(oldp+194,(vlSelf->SimTop__DOT__u_cpu__DOT__csr_ren));
            tracep->chgBit(oldp+195,(((((((((((((((
                                                   ((((((((((((((((((((((((((((((((((((((((((((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_aes64ds) 
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
                                        | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_remuw)) 
                                       | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__oisa_seal)) 
                                      | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__oisa_unseal))));
            tracep->chgBit(oldp+196,(((((((((((((((
                                                   ((((((((((((((((((((((((((((((((((((((((((((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_aes64ds) 
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
                                        | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_srliw)) 
                                       | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__oisa_seal)) 
                                      | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__oisa_unseal))));
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
                                                   ((((((((((((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_slli) 
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
                                        | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sraiw)) 
                                       | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__oisa_seal)) 
                                      | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__oisa_unseal))));
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
            tracep->chgBit(oldp+278,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__oisa_cmov));
            tracep->chgBit(oldp+279,(vlSelf->SimTop__DOT__u_cpu__DOT__if_cmov_ex));
            tracep->chgBit(oldp+280,(vlSelf->SimTop__DOT__u_cpu__DOT__cmov_wen_mem));
            tracep->chgBit(oldp+281,(vlSelf->SimTop__DOT__u_cpu__DOT__cmov_wen_wb));
            tracep->chgBit(oldp+282,((((((8U == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__lb_isa_type)) 
                                         & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__lb_rs1_value) 
                                            | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__lb_rs2_value))) 
                                        | ((1U == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__lb_isa_type)) 
                                           & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__lb_rs1_value))) 
                                       | (3U == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__lb_isa_type))) 
                                      | ((4U == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__lb_isa_type)) 
                                         & (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__lb_rs1_value) 
                                             | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__lb_rs2_value)) 
                                            | (vlSelf->SimTop__DOT__u_cpu__DOT__oisa_u__DOT__lb 
                                               >> (0x1fU 
                                                   & (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                                      >> 7U))))))));
            tracep->chgBit(oldp+283,((((((((8U == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__lb_isa_type)) 
                                           | (1U == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__lb_isa_type))) 
                                          | (2U == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__lb_isa_type))) 
                                         | (3U == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__lb_isa_type))) 
                                        | (4U == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__lb_isa_type))) 
                                       | (6U == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__lb_isa_type))) 
                                      | (7U == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__lb_isa_type)))));
            tracep->chgCData(oldp+284,(vlSelf->SimTop__DOT__u_cpu__DOT__lb_isa_type),4);
            tracep->chgBit(oldp+285,(vlSelf->SimTop__DOT__u_cpu__DOT__lb_rs1_value));
            tracep->chgBit(oldp+286,(vlSelf->SimTop__DOT__u_cpu__DOT__lb_rs2_value));
            tracep->chgBit(oldp+287,((1U & (vlSelf->SimTop__DOT__u_cpu__DOT__oisa_u__DOT__lb 
                                            >> (0x1fU 
                                                & (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                                   >> 7U))))));
            tracep->chgBit(oldp+288,(vlSelf->SimTop__DOT__u_cpu__DOT__ebreak_ex));
            tracep->chgBit(oldp+289,(vlSelf->SimTop__DOT__u_cpu__DOT__ebreak_mem));
            tracep->chgBit(oldp+290,(vlSelf->SimTop__DOT__u_cpu__DOT__ebreak_wb));
            tracep->chgQData(oldp+291,(vlSelf->SimTop__DOT__u_cpu__DOT__csr_value_writeback_mem),64);
            tracep->chgQData(oldp+293,(vlSelf->SimTop__DOT__u_cpu__DOT__csr_value_writeback_wb),64);
            tracep->chgBit(oldp+295,((((0xaU == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_ex)) 
                                       & (~ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_valid))) 
                                      | ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_ready) 
                                         & (2U != (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__div_state))))));
            tracep->chgQData(oldp+296,(vlSelf->SimTop__DOT__u_cpu__DOT__read_mem_value),64);
            tracep->chgBit(oldp+298,(vlSelf->SimTop__DOT__u_cpu__DOT__if_clint_mem));
            tracep->chgBit(oldp+299,(vlSelf->SimTop__DOT__u_cpu__DOT__if_clint_wb));
            tracep->chgBit(oldp+300,(vlSelf->SimTop__DOT__u_cpu__DOT__if_uart_mem));
            tracep->chgBit(oldp+301,(vlSelf->SimTop__DOT__u_cpu__DOT__if_uart_wb));
            tracep->chgQData(oldp+302,(vlSelf->SimTop__DOT__u_cpu__DOT__pc),64);
            tracep->chgQData(oldp+304,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_ex),64);
            tracep->chgQData(oldp+306,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_mem),64);
            tracep->chgQData(oldp+308,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_wb),64);
            tracep->chgQData(oldp+310,(vlSelf->SimTop__DOT__u_cpu__DOT__reg1_value_ex),64);
            tracep->chgQData(oldp+312,(vlSelf->SimTop__DOT__u_cpu__DOT__reg2_value_ex),64);
            tracep->chgQData(oldp+314,(vlSelf->SimTop__DOT__u_cpu__DOT__reg2_value_mem),64);
            tracep->chgQData(oldp+316,(vlSelf->SimTop__DOT__u_cpu__DOT__csr_value_ex),64);
            tracep->chgQData(oldp+318,(vlSelf->SimTop__DOT__u_cpu__DOT__reg_write_value_wb),64);
            tracep->chgBit(oldp+320,(vlSelf->SimTop__DOT__u_cpu__DOT__m_time_interrupt));
            tracep->chgBit(oldp+321,(vlSelf->SimTop__DOT__u_cpu__DOT__m_time_interrupt_trigger));
            tracep->chgQData(oldp+322,(vlSelf->SimTop__DOT__u_cpu__DOT__imm_id),64);
            tracep->chgQData(oldp+324,(vlSelf->SimTop__DOT__u_cpu__DOT__imm_ex),64);
            tracep->chgQData(oldp+326,(vlSelf->SimTop__DOT__u_cpu__DOT__sext_read_mem_value_mem),64);
            tracep->chgQData(oldp+328,(vlSelf->SimTop__DOT__u_cpu__DOT__sext_read_mem_value_wb),64);
            tracep->chgQData(oldp+330,(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_wb),64);
            tracep->chgBit(oldp+332,(vlSelf->SimTop__DOT__u_cpu__DOT__pipeline_stall_ex));
            tracep->chgBit(oldp+333,(vlSelf->SimTop__DOT__u_cpu__DOT__pipeline_stall_mem));
            tracep->chgBit(oldp+334,(vlSelf->SimTop__DOT__u_cpu__DOT__pipeline_stall_wb));
            tracep->chgQData(oldp+335,(vlSelf->SimTop__DOT__u_cpu__DOT__reg_write_value_mem),64);
            tracep->chgBit(oldp+337,(vlSelf->SimTop__DOT__u_cpu__DOT__axi_stall_i));
            tracep->chgBit(oldp+338,(vlSelf->SimTop__DOT__u_cpu__DOT__device_stall));
            tracep->chgBit(oldp+339,(vlSelf->SimTop__DOT__u_cpu__DOT__inst_valid_3));
            tracep->chgBit(oldp+340,((((((0x7bU == vlSelf->SimTop__DOT__u_cpu__DOT__inst_wb) 
                                         | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__m_time_interrupt)) 
                                        | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__if_clint_wb)) 
                                       | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__if_uart_wb)) 
                                      | (0xb00U == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__csr_wb)))));
            tracep->chgCData(oldp+341,((0x7fU & vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)),7);
            tracep->chgCData(oldp+342,((7U & (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                              >> 0xcU))),3);
            tracep->chgBit(oldp+343,((0U == vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)));
            tracep->chgBit(oldp+344,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__oisa_seal));
            tracep->chgBit(oldp+345,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__oisa_unseal));
            tracep->chgBit(oldp+346,((IData)((0x8000003bU 
                                              == (0xfe00707fU 
                                                  & vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)))));
            tracep->chgBit(oldp+347,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrc));
            tracep->chgBit(oldp+348,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrci));
            tracep->chgBit(oldp+349,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrs));
            tracep->chgBit(oldp+350,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrsi));
            tracep->chgBit(oldp+351,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrw));
            tracep->chgBit(oldp+352,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrwi));
            tracep->chgBit(oldp+353,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_addi));
            tracep->chgBit(oldp+354,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_xor));
            tracep->chgBit(oldp+355,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_xori));
            tracep->chgBit(oldp+356,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_ori));
            tracep->chgBit(oldp+357,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_addiw));
            tracep->chgBit(oldp+358,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_addw));
            tracep->chgBit(oldp+359,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_subw));
            tracep->chgBit(oldp+360,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_mul));
            tracep->chgBit(oldp+361,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_mulw));
            tracep->chgBit(oldp+362,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_divw));
            tracep->chgBit(oldp+363,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_divuw));
            tracep->chgBit(oldp+364,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_remw));
            tracep->chgBit(oldp+365,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_remuw));
            tracep->chgBit(oldp+366,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sub));
            tracep->chgBit(oldp+367,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_add));
            tracep->chgBit(oldp+368,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sll));
            tracep->chgBit(oldp+369,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_slli));
            tracep->chgBit(oldp+370,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_slliw));
            tracep->chgBit(oldp+371,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_srli));
            tracep->chgBit(oldp+372,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_srliw));
            tracep->chgBit(oldp+373,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_andi));
            tracep->chgBit(oldp+374,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_and));
            tracep->chgBit(oldp+375,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_or));
            tracep->chgBit(oldp+376,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_srai));
            tracep->chgBit(oldp+377,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sraiw));
            tracep->chgBit(oldp+378,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sra));
            tracep->chgBit(oldp+379,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sraw));
            tracep->chgBit(oldp+380,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_srl));
            tracep->chgBit(oldp+381,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_srlw));
            tracep->chgBit(oldp+382,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sllw));
            tracep->chgBit(oldp+383,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_auipc));
            tracep->chgBit(oldp+384,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_jal));
            tracep->chgBit(oldp+385,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_slti));
            tracep->chgBit(oldp+386,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sltiu));
            tracep->chgBit(oldp+387,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sltu));
            tracep->chgBit(oldp+388,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_slt));
            tracep->chgBit(oldp+389,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_beq));
            tracep->chgBit(oldp+390,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_bne));
            tracep->chgBit(oldp+391,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_bge));
            tracep->chgBit(oldp+392,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_bgeu));
            tracep->chgBit(oldp+393,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_blt));
            tracep->chgBit(oldp+394,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_bltu));
            tracep->chgBit(oldp+395,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sd));
            tracep->chgBit(oldp+396,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sw));
            tracep->chgBit(oldp+397,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sh));
            tracep->chgBit(oldp+398,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sb));
            tracep->chgBit(oldp+399,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lb));
            tracep->chgBit(oldp+400,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lbu));
            tracep->chgBit(oldp+401,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lhu));
            tracep->chgBit(oldp+402,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lw));
            tracep->chgBit(oldp+403,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lwu));
            tracep->chgBit(oldp+404,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lh));
            tracep->chgBit(oldp+405,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_ld));
            tracep->chgBit(oldp+406,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_ebreak));
            tracep->chgBit(oldp+407,((0x6bU == vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)));
            tracep->chgBit(oldp+408,((0x7bU == vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)));
            tracep->chgBit(oldp+409,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__if_inst_correct));
            tracep->chgBit(oldp+410,((((5U == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__lb_isa_type)) 
                                       & ((vlSelf->SimTop__DOT__u_cpu__DOT__oisa_u__DOT__lb 
                                           >> (0x1fU 
                                               & (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                                  >> 0xfU))) 
                                          | (vlSelf->SimTop__DOT__u_cpu__DOT__oisa_u__DOT__lb 
                                             >> (0x1fU 
                                                 & (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                                    >> 0x14U))))) 
                                      | ((6U == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__lb_isa_type)) 
                                         & (vlSelf->SimTop__DOT__u_cpu__DOT__oisa_u__DOT__lb 
                                            >> (0x1fU 
                                                & (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                                   >> 0xfU)))))));
            tracep->chgIData(oldp+411,(vlSelf->SimTop__DOT__u_cpu__DOT__oisa_u__DOT__lb),32);
            tracep->chgBit(oldp+412,((0xaU == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_ex))));
            tracep->chgBit(oldp+413,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_valid));
            tracep->chgQData(oldp+414,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__mul_result[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__mul_result[0U])))),64);
            tracep->chgBit(oldp+416,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_ready));
            tracep->chgBit(oldp+417,((2U == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__div_state))));
            tracep->chgBit(oldp+418,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_s_or_u));
            tracep->chgQData(oldp+419,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_value),64);
            tracep->chgQData(oldp+421,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__rem_value),64);
            tracep->chgBit(oldp+423,((((((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__if_inst_aes64es_ex) 
                                           | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__if_inst_aes64esm_ex)) 
                                          | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__if_inst_aes64ds_ex)) 
                                         | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__if_inst_aes64dsm_ex)) 
                                        | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__if_inst_aes64im_ex)) 
                                       | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__if_inst_aes64ks1i_ex)) 
                                      | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__if_inst_aes64ks2_ex))));
            tracep->chgWData(oldp+424,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__forward_a_mux____pinNumber4),198);
            tracep->chgWData(oldp+431,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__pair_list[0]),66);
            tracep->chgWData(oldp+434,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__pair_list[1]),66);
            tracep->chgWData(oldp+437,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__pair_list[2]),66);
            tracep->chgCData(oldp+440,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__key_list[0]),2);
            tracep->chgCData(oldp+441,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__key_list[1]),2);
            tracep->chgCData(oldp+442,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__key_list[2]),2);
            tracep->chgQData(oldp+443,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+445,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+447,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__data_list[2]),64);
            tracep->chgWData(oldp+449,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__forward_b_mux____pinNumber4),198);
            tracep->chgWData(oldp+456,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__pair_list[0]),66);
            tracep->chgWData(oldp+459,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__pair_list[1]),66);
            tracep->chgWData(oldp+462,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__pair_list[2]),66);
            tracep->chgCData(oldp+465,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__key_list[0]),2);
            tracep->chgCData(oldp+466,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__key_list[1]),2);
            tracep->chgCData(oldp+467,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__key_list[2]),2);
            tracep->chgQData(oldp+468,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+470,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+472,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__data_list[2]),64);
            tracep->chgBit(oldp+474,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__mul_calculating));
            tracep->chgWData(oldp+475,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__multiplcand),128);
            tracep->chgQData(oldp+479,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__multipler),64);
            tracep->chgWData(oldp+481,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__mul_result_partial),128);
            tracep->chgWData(oldp+485,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__mul_result),128);
            tracep->chgCData(oldp+489,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__mul_result_cnt),7);
            tracep->chgCData(oldp+490,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__div_state),2);
            tracep->chgCData(oldp+491,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__div_cnt),7);
            tracep->chgWData(oldp+492,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__dividend_abs),128);
            tracep->chgWData(oldp+496,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__divisor_abs),65);
            tracep->chgQData(oldp+499,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__quotient_abs),64);
            tracep->chgBit(oldp+501,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__quotient_sign));
            tracep->chgBit(oldp+502,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__remainder_sign));
            tracep->chgWData(oldp+503,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__diff_temp),65);
            tracep->chgBit(oldp+506,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__diff_neg));
            tracep->chgBit(oldp+507,((0xaU != (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__ks1i_rnum_ex))));
            tracep->chgCData(oldp+508,(((0xaU != (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__ks1i_rnum_ex))
                                         ? vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__rcon
                                        [vlSelf->SimTop__DOT__u_cpu__DOT__ks1i_rnum_ex]
                                         : 0U)),8);
            tracep->chgBit(oldp+509,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__mix));
            tracep->chgBit(oldp+510,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__if_inst_aes64es_ex) 
                                      | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__if_inst_aes64esm_ex))));
            tracep->chgBit(oldp+511,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__if_inst_aes64ds_ex) 
                                      | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__if_inst_aes64dsm_ex))));
            tracep->chgBit(oldp+512,((0x200U == (0xffffU 
                                                 & (IData)(
                                                           (vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem 
                                                            >> 0x10U))))));
            tracep->chgBit(oldp+513,((0xa10003f8U == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem))));
            tracep->chgQData(oldp+514,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf_tmp[0]),64);
            tracep->chgQData(oldp+516,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf_tmp[1]),64);
            tracep->chgQData(oldp+518,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf_tmp[2]),64);
            tracep->chgQData(oldp+520,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf_tmp[3]),64);
            tracep->chgQData(oldp+522,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf_tmp[4]),64);
            tracep->chgQData(oldp+524,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf_tmp[5]),64);
            tracep->chgQData(oldp+526,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf_tmp[6]),64);
            tracep->chgQData(oldp+528,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf_tmp[7]),64);
            tracep->chgQData(oldp+530,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf_tmp[8]),64);
            tracep->chgQData(oldp+532,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf_tmp[9]),64);
            tracep->chgQData(oldp+534,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf_tmp[10]),64);
            tracep->chgQData(oldp+536,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf_tmp[11]),64);
            tracep->chgQData(oldp+538,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf_tmp[12]),64);
            tracep->chgQData(oldp+540,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf_tmp[13]),64);
            tracep->chgQData(oldp+542,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf_tmp[14]),64);
            tracep->chgQData(oldp+544,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf_tmp[15]),64);
            tracep->chgQData(oldp+546,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf_tmp[16]),64);
            tracep->chgQData(oldp+548,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf_tmp[17]),64);
            tracep->chgQData(oldp+550,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf_tmp[18]),64);
            tracep->chgQData(oldp+552,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf_tmp[19]),64);
            tracep->chgQData(oldp+554,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf_tmp[20]),64);
            tracep->chgQData(oldp+556,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf_tmp[21]),64);
            tracep->chgQData(oldp+558,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf_tmp[22]),64);
            tracep->chgQData(oldp+560,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf_tmp[23]),64);
            tracep->chgQData(oldp+562,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf_tmp[24]),64);
            tracep->chgQData(oldp+564,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf_tmp[25]),64);
            tracep->chgQData(oldp+566,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf_tmp[26]),64);
            tracep->chgQData(oldp+568,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf_tmp[27]),64);
            tracep->chgQData(oldp+570,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf_tmp[28]),64);
            tracep->chgQData(oldp+572,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf_tmp[29]),64);
            tracep->chgQData(oldp+574,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf_tmp[30]),64);
            tracep->chgQData(oldp+576,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf_tmp[31]),64);
            tracep->chgQData(oldp+578,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mstatus_reg),64);
            tracep->chgQData(oldp+580,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mepc_reg),64);
            tracep->chgQData(oldp+582,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mtvec_reg),64);
            tracep->chgQData(oldp+584,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mcause_reg),64);
            tracep->chgQData(oldp+586,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mie_reg),64);
            tracep->chgQData(oldp+588,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mip_reg),64);
            tracep->chgQData(oldp+590,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mscratch_reg),64);
            tracep->chgQData(oldp+592,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mstatus_latch),64);
            tracep->chgQData(oldp+594,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mepc_latch),64);
            tracep->chgQData(oldp+596,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mtvec_latch),64);
            tracep->chgQData(oldp+598,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mcause_latch),64);
            tracep->chgQData(oldp+600,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mie_latch),64);
            tracep->chgQData(oldp+602,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mip_latch),64);
            tracep->chgQData(oldp+604,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mscratch_latch),64);
            tracep->chgQData(oldp+606,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mepc_timeint_reg),64);
            tracep->chgQData(oldp+608,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mcause_timeint_reg),64);
            tracep->chgQData(oldp+610,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__pc_wb_reg),64);
            tracep->chgIData(oldp+612,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__inst_wb_reg),32);
            tracep->chgWData(oldp+613,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_imm____pinNumber4),335);
            tracep->chgWData(oldp+624,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__pair_list[0]),67);
            tracep->chgWData(oldp+627,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__pair_list[1]),67);
            tracep->chgWData(oldp+630,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__pair_list[2]),67);
            tracep->chgWData(oldp+633,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__pair_list[3]),67);
            tracep->chgWData(oldp+636,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__pair_list[4]),67);
            tracep->chgCData(oldp+639,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__key_list[0]),3);
            tracep->chgCData(oldp+640,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__key_list[1]),3);
            tracep->chgCData(oldp+641,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__key_list[2]),3);
            tracep->chgCData(oldp+642,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__key_list[3]),3);
            tracep->chgCData(oldp+643,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__key_list[4]),3);
            tracep->chgQData(oldp+644,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+646,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+648,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+650,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+652,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__data_list[4]),64);
            tracep->chgQData(oldp+654,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+656,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__hit));
            tracep->chgWData(oldp+657,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4),476);
            tracep->chgWData(oldp+672,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__pair_list[0]),68);
            tracep->chgWData(oldp+675,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__pair_list[1]),68);
            tracep->chgWData(oldp+678,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__pair_list[2]),68);
            tracep->chgWData(oldp+681,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__pair_list[3]),68);
            tracep->chgWData(oldp+684,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__pair_list[4]),68);
            tracep->chgWData(oldp+687,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__pair_list[5]),68);
            tracep->chgWData(oldp+690,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__pair_list[6]),68);
            tracep->chgCData(oldp+693,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__key_list[0]),4);
            tracep->chgCData(oldp+694,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__key_list[1]),4);
            tracep->chgCData(oldp+695,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__key_list[2]),4);
            tracep->chgCData(oldp+696,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__key_list[3]),4);
            tracep->chgCData(oldp+697,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__key_list[4]),4);
            tracep->chgCData(oldp+698,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__key_list[5]),4);
            tracep->chgCData(oldp+699,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__key_list[6]),4);
            tracep->chgQData(oldp+700,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+702,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+704,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+706,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+708,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__data_list[4]),64);
            tracep->chgQData(oldp+710,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__data_list[5]),64);
            tracep->chgQData(oldp+712,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__data_list[6]),64);
            tracep->chgQData(oldp+714,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+716,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__hit));
            tracep->chgQData(oldp+717,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__pc_branch_addr),64);
            tracep->chgQData(oldp+719,(vlSelf->SimTop__DOT__clint__DOT__mtime),64);
            tracep->chgQData(oldp+721,(vlSelf->SimTop__DOT__clint__DOT__mtimecmp),64);
        }
        if (VL_UNLIKELY((vlSelf->__Vm_traceActivity
                         [1U] | vlSelf->__Vm_traceActivity
                         [3U]))) {
            tracep->chgBit(oldp+723,(((0U != (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__len)) 
                                      & ((IData)(vlSelf->SimTop__DOT__axi_rw__DOT__w_hs) 
                                         | (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__r_hs)))));
            tracep->chgBit(oldp+724,(((IData)(vlSelf->SimTop__DOT__axi_rw__DOT__trans_done) 
                                      | (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__rw_ready))));
            tracep->chgBit(oldp+725,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__if_cmov_ex) 
                                      & (0ULL != vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a))));
            tracep->chgQData(oldp+726,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__csr_ren) 
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
            tracep->chgQData(oldp+728,(((((((- (QData)((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__if_inst_aes64ks1i_ex))) 
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
            tracep->chgCData(oldp+730,((0xffU & ((0xaU 
                                                  != (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__ks1i_rnum_ex))
                                                  ? (IData)(
                                                            (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                                                             >> 0x20U))
                                                  : (IData)(
                                                            (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                                                             >> 0x38U))))),8);
            tracep->chgCData(oldp+731,((0xffU & ((0xaU 
                                                  != (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__ks1i_rnum_ex))
                                                  ? (IData)(
                                                            (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                                                             >> 0x38U))
                                                  : (IData)(
                                                            (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                                                             >> 0x30U))))),8);
            tracep->chgCData(oldp+732,((0xffU & ((0xaU 
                                                  != (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__ks1i_rnum_ex))
                                                  ? (IData)(
                                                            (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                                                             >> 0x30U))
                                                  : (IData)(
                                                            (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                                                             >> 0x28U))))),8);
            tracep->chgCData(oldp+733,((0xffU & ((0xaU 
                                                  != (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__ks1i_rnum_ex))
                                                  ? (IData)(
                                                            (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                                                             >> 0x28U))
                                                  : (IData)(
                                                            (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                                                             >> 0x20U))))),8);
            tracep->chgIData(oldp+734,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__e_sbout) 
                                        ^ ((0xaU != (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__ks1i_rnum_ex))
                                            ? vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__rcon
                                           [vlSelf->SimTop__DOT__u_cpu__DOT__ks1i_rnum_ex]
                                            : 0U))),32);
            tracep->chgQData(oldp+735,((((QData)((IData)(
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
            tracep->chgQData(oldp+737,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__mix)
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
            tracep->chgQData(oldp+739,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__mix)
                                         ? (((QData)((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__mix_dec_o1)) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__mix_dec_o0)))
                                         : vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__d_sbout)),64);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgBit(oldp+741,(vlSelf->SimTop__DOT__u_cpu__DOT__cmt_wen));
            tracep->chgCData(oldp+742,(vlSelf->SimTop__DOT__u_cpu__DOT__cmt_wdest),8);
            tracep->chgQData(oldp+743,(vlSelf->SimTop__DOT__u_cpu__DOT__cmt_wdata),64);
            tracep->chgQData(oldp+745,(vlSelf->SimTop__DOT__u_cpu__DOT__cmt_pc),64);
            tracep->chgIData(oldp+747,(vlSelf->SimTop__DOT__u_cpu__DOT__cmt_inst),32);
            tracep->chgBit(oldp+748,(vlSelf->SimTop__DOT__u_cpu__DOT__cmt_valid));
            tracep->chgBit(oldp+749,(vlSelf->SimTop__DOT__u_cpu__DOT__cmt_skip));
            tracep->chgBit(oldp+750,(vlSelf->SimTop__DOT__u_cpu__DOT__trap));
            tracep->chgCData(oldp+751,(vlSelf->SimTop__DOT__u_cpu__DOT__trap_code),8);
            tracep->chgQData(oldp+752,(vlSelf->SimTop__DOT__u_cpu__DOT__cycleCnt),64);
            tracep->chgQData(oldp+754,(vlSelf->SimTop__DOT__u_cpu__DOT__instrCnt),64);
            tracep->chgQData(oldp+756,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[0]),64);
            tracep->chgQData(oldp+758,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[1]),64);
            tracep->chgQData(oldp+760,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[2]),64);
            tracep->chgQData(oldp+762,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[3]),64);
            tracep->chgQData(oldp+764,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[4]),64);
            tracep->chgQData(oldp+766,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[5]),64);
            tracep->chgQData(oldp+768,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[6]),64);
            tracep->chgQData(oldp+770,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[7]),64);
            tracep->chgQData(oldp+772,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[8]),64);
            tracep->chgQData(oldp+774,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[9]),64);
            tracep->chgQData(oldp+776,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[10]),64);
            tracep->chgQData(oldp+778,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[11]),64);
            tracep->chgQData(oldp+780,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[12]),64);
            tracep->chgQData(oldp+782,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[13]),64);
            tracep->chgQData(oldp+784,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[14]),64);
            tracep->chgQData(oldp+786,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[15]),64);
            tracep->chgQData(oldp+788,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[16]),64);
            tracep->chgQData(oldp+790,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[17]),64);
            tracep->chgQData(oldp+792,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[18]),64);
            tracep->chgQData(oldp+794,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[19]),64);
            tracep->chgQData(oldp+796,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[20]),64);
            tracep->chgQData(oldp+798,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[21]),64);
            tracep->chgQData(oldp+800,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[22]),64);
            tracep->chgQData(oldp+802,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[23]),64);
            tracep->chgQData(oldp+804,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[24]),64);
            tracep->chgQData(oldp+806,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[25]),64);
            tracep->chgQData(oldp+808,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[26]),64);
            tracep->chgQData(oldp+810,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[27]),64);
            tracep->chgQData(oldp+812,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[28]),64);
            tracep->chgQData(oldp+814,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[29]),64);
            tracep->chgQData(oldp+816,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[30]),64);
            tracep->chgQData(oldp+818,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[31]),64);
            tracep->chgQData(oldp+820,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                       [0U]),64);
            tracep->chgQData(oldp+822,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                       [1U]),64);
            tracep->chgQData(oldp+824,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                       [2U]),64);
            tracep->chgQData(oldp+826,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                       [3U]),64);
            tracep->chgQData(oldp+828,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                       [4U]),64);
            tracep->chgQData(oldp+830,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                       [5U]),64);
            tracep->chgQData(oldp+832,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                       [6U]),64);
            tracep->chgQData(oldp+834,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                       [7U]),64);
            tracep->chgQData(oldp+836,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                       [8U]),64);
            tracep->chgQData(oldp+838,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                       [9U]),64);
            tracep->chgQData(oldp+840,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                       [0xaU]),64);
            tracep->chgQData(oldp+842,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                       [0xbU]),64);
            tracep->chgQData(oldp+844,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                       [0xcU]),64);
            tracep->chgQData(oldp+846,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                       [0xdU]),64);
            tracep->chgQData(oldp+848,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                       [0xeU]),64);
            tracep->chgQData(oldp+850,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                       [0xfU]),64);
            tracep->chgQData(oldp+852,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                       [0x10U]),64);
            tracep->chgQData(oldp+854,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                       [0x11U]),64);
            tracep->chgQData(oldp+856,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                       [0x12U]),64);
            tracep->chgQData(oldp+858,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                       [0x13U]),64);
            tracep->chgQData(oldp+860,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                       [0x14U]),64);
            tracep->chgQData(oldp+862,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                       [0x15U]),64);
            tracep->chgQData(oldp+864,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                       [0x16U]),64);
            tracep->chgQData(oldp+866,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                       [0x17U]),64);
            tracep->chgQData(oldp+868,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                       [0x18U]),64);
            tracep->chgQData(oldp+870,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                       [0x19U]),64);
            tracep->chgQData(oldp+872,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                       [0x1aU]),64);
            tracep->chgQData(oldp+874,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                       [0x1bU]),64);
            tracep->chgQData(oldp+876,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                       [0x1cU]),64);
            tracep->chgQData(oldp+878,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                       [0x1dU]),64);
            tracep->chgQData(oldp+880,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                       [0x1eU]),64);
            tracep->chgQData(oldp+882,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                       [0x1fU]),64);
            tracep->chgCData(oldp+884,((7U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__trap_code))),3);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
            tracep->chgQData(oldp+885,(vlSelf->SimTop__DOT__u_cpu__DOT__reg2_to_mem_forward),64);
            tracep->chgCData(oldp+887,(vlSelf->SimTop__DOT__mem_write_mask_axi),8);
            tracep->chgBit(oldp+888,(vlSelf->SimTop__DOT__axi_rw__DOT__trans_done));
            tracep->chgBit(oldp+889,(vlSelf->SimTop__DOT__axi_rw__DOT__r_hs));
            tracep->chgCData(oldp+890,((0xffU & (IData)(
                                                        vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr
                                                        [0xaU]))),8);
            tracep->chgQData(oldp+891,(vlSelf->SimTop__DOT__u_cpu__DOT__memory__DOT__value_writen_to_mem),64);
            VL_EXTEND_WQ(65,64, __Vtemp1095, vlSelf->SimTop__DOT__u_cpu__DOT__reg2_to_mem_forward);
            tracep->chgWData(oldp+893,(__Vtemp1095),65);
            tracep->chgBit(oldp+896,(vlSelf->SimTop__DOT__axi_rw__DOT__w_hs));
            tracep->chgBit(oldp+897,(vlSelf->SimTop__DOT__axi_rw__DOT__b_hs));
            tracep->chgBit(oldp+898,(vlSelf->SimTop__DOT__axi_rw__DOT__r_done));
            tracep->chgQData(oldp+899,(vlSelf->SimTop__DOT__u_cpu__DOT__reg2_value_forwardb_ex),64);
            tracep->chgQData(oldp+901,(vlSelf->SimTop__DOT__u_cpu__DOT__csr_value_writeback_ex),64);
            tracep->chgQData(oldp+903,(vlSelf->SimTop__DOT__u_cpu__DOT__mem_write_mask),64);
            tracep->chgQData(oldp+905,(vlSelf->SimTop__DOT__u_cpu__DOT__npc),64);
            tracep->chgQData(oldp+907,(vlSelf->SimTop__DOT__u_cpu__DOT__reg1_value_id),64);
            tracep->chgQData(oldp+909,(vlSelf->SimTop__DOT__u_cpu__DOT__reg2_value_id),64);
            tracep->chgQData(oldp+911,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[0]),64);
            tracep->chgQData(oldp+913,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[1]),64);
            tracep->chgQData(oldp+915,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[2]),64);
            tracep->chgQData(oldp+917,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[3]),64);
            tracep->chgQData(oldp+919,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[4]),64);
            tracep->chgQData(oldp+921,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[5]),64);
            tracep->chgQData(oldp+923,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[6]),64);
            tracep->chgQData(oldp+925,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[7]),64);
            tracep->chgQData(oldp+927,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[8]),64);
            tracep->chgQData(oldp+929,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[9]),64);
            tracep->chgQData(oldp+931,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[10]),64);
            tracep->chgQData(oldp+933,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[11]),64);
            tracep->chgQData(oldp+935,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[12]),64);
            tracep->chgQData(oldp+937,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[13]),64);
            tracep->chgQData(oldp+939,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[14]),64);
            tracep->chgQData(oldp+941,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[15]),64);
            tracep->chgQData(oldp+943,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[16]),64);
            tracep->chgQData(oldp+945,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[17]),64);
            tracep->chgQData(oldp+947,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[18]),64);
            tracep->chgQData(oldp+949,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[19]),64);
            tracep->chgQData(oldp+951,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[20]),64);
            tracep->chgQData(oldp+953,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[21]),64);
            tracep->chgQData(oldp+955,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[22]),64);
            tracep->chgQData(oldp+957,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[23]),64);
            tracep->chgQData(oldp+959,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[24]),64);
            tracep->chgQData(oldp+961,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[25]),64);
            tracep->chgQData(oldp+963,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[26]),64);
            tracep->chgQData(oldp+965,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[27]),64);
            tracep->chgQData(oldp+967,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[28]),64);
            tracep->chgQData(oldp+969,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[29]),64);
            tracep->chgQData(oldp+971,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[30]),64);
            tracep->chgQData(oldp+973,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[31]),64);
            tracep->chgQData(oldp+975,(vlSelf->SimTop__DOT__u_cpu__DOT__value),64);
            tracep->chgQData(oldp+977,(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_ex),64);
            tracep->chgBit(oldp+979,(vlSelf->SimTop__DOT__u_cpu__DOT__IF_Flush));
            tracep->chgCData(oldp+980,(vlSelf->SimTop__DOT__u_cpu__DOT__Forward_a),2);
            tracep->chgCData(oldp+981,(vlSelf->SimTop__DOT__u_cpu__DOT__Forward_b),2);
            tracep->chgCData(oldp+982,(vlSelf->SimTop__DOT__u_cpu__DOT__Forward_c),2);
            tracep->chgCData(oldp+983,(vlSelf->SimTop__DOT__u_cpu__DOT__Forward_d),2);
            tracep->chgBit(oldp+984,(vlSelf->SimTop__DOT__u_cpu__DOT__pipeline_stall));
            tracep->chgQData(oldp+985,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mstatus),64);
            tracep->chgQData(oldp+987,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mepc),64);
            tracep->chgQData(oldp+989,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mtvec),64);
            tracep->chgQData(oldp+991,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mcause),64);
            tracep->chgQData(oldp+993,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mie),64);
            tracep->chgQData(oldp+995,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mip),64);
            tracep->chgQData(oldp+997,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mscratch),64);
            tracep->chgQData(oldp+999,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__reg1_forwarda),64);
            tracep->chgQData(oldp+1001,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a0),64);
            tracep->chgQData(oldp+1003,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b0),64);
            tracep->chgQData(oldp+1005,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a),64);
            tracep->chgQData(oldp+1007,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b),64);
            tracep->chgQData(oldp+1009,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_operation_a),64);
            tracep->chgQData(oldp+1011,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+1013,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__hit));
            tracep->chgQData(oldp+1014,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+1016,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__hit));
            tracep->chgIData(oldp+1017,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__row_0),32);
            tracep->chgIData(oldp+1018,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__row_1),32);
            tracep->chgIData(oldp+1019,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__row_2),32);
            tracep->chgIData(oldp+1020,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__row_3),32);
            tracep->chgIData(oldp+1021,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__fsh_1),32);
            tracep->chgIData(oldp+1022,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__fsh_2),32);
            tracep->chgIData(oldp+1023,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__fsh_3),32);
            tracep->chgIData(oldp+1024,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__ish_1),32);
            tracep->chgIData(oldp+1025,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__ish_2),32);
            tracep->chgIData(oldp+1026,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__ish_3),32);
            tracep->chgIData(oldp+1027,(((0xff000000U 
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
            tracep->chgIData(oldp+1028,(((0xff000000U 
                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__fsh_3) 
                                         | ((0xff0000U 
                                             & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__fsh_2 
                                                >> 8U)) 
                                            | ((0xff00U 
                                                & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__fsh_1 
                                                   >> 0x10U)) 
                                               | (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__row_0 
                                                  >> 0x18U))))),32);
            tracep->chgIData(oldp+1029,(((0xff000000U 
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
            tracep->chgIData(oldp+1030,(((0xff000000U 
                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__ish_3) 
                                         | ((0xff0000U 
                                             & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__ish_2 
                                                >> 8U)) 
                                            | ((0xff00U 
                                                & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__ish_1 
                                                   >> 0x10U)) 
                                               | (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__row_0 
                                                  >> 0x18U))))),32);
            tracep->chgQData(oldp+1031,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__shiftrows_enc),64);
            tracep->chgQData(oldp+1033,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__shiftrows_dec),64);
            tracep->chgCData(oldp+1035,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in[0]),8);
            tracep->chgCData(oldp+1036,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in[1]),8);
            tracep->chgCData(oldp+1037,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in[2]),8);
            tracep->chgCData(oldp+1038,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in[3]),8);
            tracep->chgCData(oldp+1039,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in[4]),8);
            tracep->chgCData(oldp+1040,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in[5]),8);
            tracep->chgCData(oldp+1041,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in[6]),8);
            tracep->chgCData(oldp+1042,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in[7]),8);
            tracep->chgCData(oldp+1043,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_out[0]),8);
            tracep->chgCData(oldp+1044,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_out[1]),8);
            tracep->chgCData(oldp+1045,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_out[2]),8);
            tracep->chgCData(oldp+1046,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_out[3]),8);
            tracep->chgCData(oldp+1047,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_out[4]),8);
            tracep->chgCData(oldp+1048,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_out[5]),8);
            tracep->chgCData(oldp+1049,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_out[6]),8);
            tracep->chgCData(oldp+1050,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_out[7]),8);
            tracep->chgCData(oldp+1051,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in[0]),8);
            tracep->chgCData(oldp+1052,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in[1]),8);
            tracep->chgCData(oldp+1053,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in[2]),8);
            tracep->chgCData(oldp+1054,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in[3]),8);
            tracep->chgCData(oldp+1055,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in[4]),8);
            tracep->chgCData(oldp+1056,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in[5]),8);
            tracep->chgCData(oldp+1057,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in[6]),8);
            tracep->chgCData(oldp+1058,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in[7]),8);
            tracep->chgCData(oldp+1059,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_out[0]),8);
            tracep->chgCData(oldp+1060,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_out[1]),8);
            tracep->chgCData(oldp+1061,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_out[2]),8);
            tracep->chgCData(oldp+1062,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_out[3]),8);
            tracep->chgCData(oldp+1063,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_out[4]),8);
            tracep->chgCData(oldp+1064,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_out[5]),8);
            tracep->chgCData(oldp+1065,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_out[6]),8);
            tracep->chgCData(oldp+1066,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_out[7]),8);
            tracep->chgQData(oldp+1067,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__d_sbout),64);
            tracep->chgQData(oldp+1069,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__e_sbout),64);
            tracep->chgIData(oldp+1071,((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__e_sbout)),32);
            tracep->chgIData(oldp+1072,((IData)((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__e_sbout 
                                                 >> 0x20U))),32);
            tracep->chgIData(oldp+1073,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__mix_dec_i0),32);
            tracep->chgIData(oldp+1074,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__mix_dec_i1),32);
            tracep->chgIData(oldp+1075,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e0__DOT__mix_out_3) 
                                          << 0x18U) 
                                         | (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e0__DOT__mix_out_2) 
                                             << 0x10U) 
                                            | (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e0__DOT__mix_out_1) 
                                                << 8U) 
                                               | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e0__DOT__mix_out_0))))),32);
            tracep->chgIData(oldp+1076,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e1__DOT__mix_out_3) 
                                          << 0x18U) 
                                         | (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e1__DOT__mix_out_2) 
                                             << 0x10U) 
                                            | (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e1__DOT__mix_out_1) 
                                                << 8U) 
                                               | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e1__DOT__mix_out_0))))),32);
            tracep->chgIData(oldp+1077,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__mix_dec_o0),32);
            tracep->chgIData(oldp+1078,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__mix_dec_o1),32);
            tracep->chgQData(oldp+1079,((((QData)((IData)(
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
            tracep->chgQData(oldp+1081,((((QData)((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__mix_dec_o1)) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__mix_dec_o0)))),64);
            tracep->chgCData(oldp+1083,((0xffU & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__e_sbout))),8);
            tracep->chgCData(oldp+1084,((0xffU & (IData)(
                                                         (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__e_sbout 
                                                          >> 8U)))),8);
            tracep->chgCData(oldp+1085,((0xffU & (IData)(
                                                         (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__e_sbout 
                                                          >> 0x10U)))),8);
            tracep->chgCData(oldp+1086,((0xffU & (IData)(
                                                         (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__e_sbout 
                                                          >> 0x18U)))),8);
            tracep->chgIData(oldp+1087,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e0__DOT__mix_in_3),32);
            tracep->chgIData(oldp+1088,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e0__DOT__mix_in_2),32);
            tracep->chgIData(oldp+1089,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e0__DOT__mix_in_1),32);
            tracep->chgIData(oldp+1090,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e0__DOT__mix_in_0),32);
            tracep->chgCData(oldp+1091,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e0__DOT__mix_out_3),8);
            tracep->chgCData(oldp+1092,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e0__DOT__mix_out_2),8);
            tracep->chgCData(oldp+1093,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e0__DOT__mix_out_1),8);
            tracep->chgCData(oldp+1094,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e0__DOT__mix_out_0),8);
            tracep->chgCData(oldp+1095,((0xffU & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e0__DOT__mix_in_0)),8);
            tracep->chgCData(oldp+1096,((0xffU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e0__DOT__mix_in_0 
                                                  >> 8U))),8);
            tracep->chgCData(oldp+1097,((0xffU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e0__DOT__mix_in_0 
                                                  >> 0x10U))),8);
            tracep->chgCData(oldp+1098,((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e0__DOT__mix_in_0 
                                         >> 0x18U)),8);
            tracep->chgCData(oldp+1099,((0xffU & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e0__DOT__mix_in_1)),8);
            tracep->chgCData(oldp+1100,((0xffU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e0__DOT__mix_in_1 
                                                  >> 8U))),8);
            tracep->chgCData(oldp+1101,((0xffU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e0__DOT__mix_in_1 
                                                  >> 0x10U))),8);
            tracep->chgCData(oldp+1102,((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e0__DOT__mix_in_1 
                                         >> 0x18U)),8);
            tracep->chgCData(oldp+1103,((0xffU & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e0__DOT__mix_in_2)),8);
            tracep->chgCData(oldp+1104,((0xffU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e0__DOT__mix_in_2 
                                                  >> 8U))),8);
            tracep->chgCData(oldp+1105,((0xffU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e0__DOT__mix_in_2 
                                                  >> 0x10U))),8);
            tracep->chgCData(oldp+1106,((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e0__DOT__mix_in_2 
                                         >> 0x18U)),8);
            tracep->chgCData(oldp+1107,((0xffU & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e0__DOT__mix_in_3)),8);
            tracep->chgCData(oldp+1108,((0xffU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e0__DOT__mix_in_3 
                                                  >> 8U))),8);
            tracep->chgCData(oldp+1109,((0xffU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e0__DOT__mix_in_3 
                                                  >> 0x10U))),8);
            tracep->chgCData(oldp+1110,((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e0__DOT__mix_in_3 
                                         >> 0x18U)),8);
            tracep->chgCData(oldp+1111,((0xffU & (IData)(
                                                         (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__e_sbout 
                                                          >> 0x20U)))),8);
            tracep->chgCData(oldp+1112,((0xffU & (IData)(
                                                         (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__e_sbout 
                                                          >> 0x28U)))),8);
            tracep->chgCData(oldp+1113,((0xffU & (IData)(
                                                         (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__e_sbout 
                                                          >> 0x30U)))),8);
            tracep->chgCData(oldp+1114,((0xffU & (IData)(
                                                         (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__e_sbout 
                                                          >> 0x38U)))),8);
            tracep->chgIData(oldp+1115,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e1__DOT__mix_in_3),32);
            tracep->chgIData(oldp+1116,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e1__DOT__mix_in_2),32);
            tracep->chgIData(oldp+1117,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e1__DOT__mix_in_1),32);
            tracep->chgIData(oldp+1118,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e1__DOT__mix_in_0),32);
            tracep->chgCData(oldp+1119,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e1__DOT__mix_out_3),8);
            tracep->chgCData(oldp+1120,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e1__DOT__mix_out_2),8);
            tracep->chgCData(oldp+1121,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e1__DOT__mix_out_1),8);
            tracep->chgCData(oldp+1122,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e1__DOT__mix_out_0),8);
            tracep->chgCData(oldp+1123,((0xffU & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e1__DOT__mix_in_0)),8);
            tracep->chgCData(oldp+1124,((0xffU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e1__DOT__mix_in_0 
                                                  >> 8U))),8);
            tracep->chgCData(oldp+1125,((0xffU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e1__DOT__mix_in_0 
                                                  >> 0x10U))),8);
            tracep->chgCData(oldp+1126,((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e1__DOT__mix_in_0 
                                         >> 0x18U)),8);
            tracep->chgCData(oldp+1127,((0xffU & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e1__DOT__mix_in_1)),8);
            tracep->chgCData(oldp+1128,((0xffU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e1__DOT__mix_in_1 
                                                  >> 8U))),8);
            tracep->chgCData(oldp+1129,((0xffU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e1__DOT__mix_in_1 
                                                  >> 0x10U))),8);
            tracep->chgCData(oldp+1130,((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e1__DOT__mix_in_1 
                                         >> 0x18U)),8);
            tracep->chgCData(oldp+1131,((0xffU & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e1__DOT__mix_in_2)),8);
            tracep->chgCData(oldp+1132,((0xffU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e1__DOT__mix_in_2 
                                                  >> 8U))),8);
            tracep->chgCData(oldp+1133,((0xffU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e1__DOT__mix_in_2 
                                                  >> 0x10U))),8);
            tracep->chgCData(oldp+1134,((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e1__DOT__mix_in_2 
                                         >> 0x18U)),8);
            tracep->chgCData(oldp+1135,((0xffU & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e1__DOT__mix_in_3)),8);
            tracep->chgCData(oldp+1136,((0xffU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e1__DOT__mix_in_3 
                                                  >> 8U))),8);
            tracep->chgCData(oldp+1137,((0xffU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e1__DOT__mix_in_3 
                                                  >> 0x10U))),8);
            tracep->chgCData(oldp+1138,((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e1__DOT__mix_in_3 
                                         >> 0x18U)),8);
            tracep->chgCData(oldp+1139,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT____Vcellout__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__fx),8);
            tracep->chgCData(oldp+1140,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                        [0U]),8);
            tracep->chgIData(oldp+1141,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t1),21);
            tracep->chgIData(oldp+1142,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t2),18);
            tracep->chgBit(oldp+1143,((1U & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                       [0U])));
            tracep->chgBit(oldp+1144,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__top__DOT__y1));
            tracep->chgBit(oldp+1145,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__top__DOT__y2));
            tracep->chgBit(oldp+1146,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__top__DOT__y3));
            tracep->chgBit(oldp+1147,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__top__DOT__y4));
            tracep->chgBit(oldp+1148,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__top__DOT__t0));
            tracep->chgBit(oldp+1149,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__top__DOT__y5));
            tracep->chgBit(oldp+1150,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__top__DOT__t1));
            tracep->chgBit(oldp+1151,((1U & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                             [0U] ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__top__DOT__y5)))));
            tracep->chgBit(oldp+1152,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__top__DOT__y7));
            tracep->chgBit(oldp+1153,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__top__DOT__y8));
            tracep->chgBit(oldp+1154,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__top__DOT__t2));
            tracep->chgBit(oldp+1155,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__top__DOT__t3));
            tracep->chgBit(oldp+1156,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__top__DOT__y3) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__top__DOT__y4))));
            tracep->chgBit(oldp+1157,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__top__DOT__y5) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__top__DOT__t2))));
            tracep->chgBit(oldp+1158,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__top__DOT__t0) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__top__DOT__t2))));
            tracep->chgBit(oldp+1159,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__top__DOT__y12));
            tracep->chgBit(oldp+1160,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__top__DOT__y13));
            tracep->chgBit(oldp+1161,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                              [0U] 
                                              >> 4U) 
                                             ^ vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                             [0U]))));
            tracep->chgBit(oldp+1162,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__top__DOT__y14));
            tracep->chgBit(oldp+1163,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__top__DOT__y15));
            tracep->chgBit(oldp+1164,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                              [0U] 
                                              >> 1U) 
                                             ^ vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                             [0U]))));
            tracep->chgBit(oldp+1165,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__top__DOT__y16));
            tracep->chgBit(oldp+1166,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__top__DOT__y2) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__top__DOT__y16))));
            tracep->chgBit(oldp+1167,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__top__DOT__y2) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__top__DOT__y8))));
            tracep->chgBit(oldp+1168,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__top__DOT__y15) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__top__DOT__y13))));
            tracep->chgBit(oldp+1169,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__top__DOT__y1) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__top__DOT__t3))));
            tracep->chgBit(oldp+1170,((1U & VL_REDXOR_32(
                                                         (0x1008U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1171,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1));
            tracep->chgBit(oldp+1172,((IData)((0x20040U 
                                               == (0x20040U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1173,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t1 
                                              >> 0xaU) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1)))));
            tracep->chgBit(oldp+1174,((0x4001U == (0x4001U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t1))));
            tracep->chgBit(oldp+1175,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t1 
                                               >> 0xeU) 
                                              & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t1) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1)))));
            tracep->chgBit(oldp+1176,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6));
            tracep->chgBit(oldp+1177,((IData)((0x10080U 
                                               == (0x10080U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1178,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t1 
                                               >> 3U) 
                                              ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t1 
                                                 >> 0xcU)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6)))));
            tracep->chgBit(oldp+1179,((IData)((0xa000U 
                                               == (0xa000U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1180,((1U & ((0xa000U 
                                              == (0xa000U 
                                                  & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t1)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6)))));
            tracep->chgBit(oldp+1181,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t11));
            tracep->chgBit(oldp+1182,((IData)((0x100010U 
                                               == (0x100010U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1183,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t13));
            tracep->chgBit(oldp+1184,((IData)((0x104U 
                                               == (0x104U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1185,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t15));
            tracep->chgBit(oldp+1186,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t1 
                                               >> 0xaU) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1)) 
                                             ^ (0x20040U 
                                                == 
                                                (0x20040U 
                                                 & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t1))))));
            tracep->chgBit(oldp+1187,((1U & ((((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t1 
                                                >> 0xeU) 
                                               & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t1) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1)) 
                                             ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t1 
                                                >> 0x12U)))));
            tracep->chgBit(oldp+1188,((1U & ((((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t1 
                                                >> 3U) 
                                               ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t1 
                                                  >> 0xcU)) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6)) 
                                             ^ (0x10080U 
                                                == 
                                                (0x10080U 
                                                 & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t1))))));
            tracep->chgBit(oldp+1189,((1U & (((0xa000U 
                                               == (0xa000U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t1)) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t15)))));
            tracep->chgBit(oldp+1190,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t20));
            tracep->chgBit(oldp+1191,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21));
            tracep->chgBit(oldp+1192,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t22));
            tracep->chgBit(oldp+1193,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23));
            tracep->chgBit(oldp+1194,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t24));
            tracep->chgBit(oldp+1195,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25));
            tracep->chgBit(oldp+1196,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+1197,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t27));
            tracep->chgBit(oldp+1198,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+1199,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23) 
                                        ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25)) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t27))));
            tracep->chgBit(oldp+1200,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21) 
                                        ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25)) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t24))));
            tracep->chgBit(oldp+1201,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t20) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23))));
            tracep->chgBit(oldp+1202,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t27) 
                                       & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t20) 
                                          & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23)))));
            tracep->chgBit(oldp+1203,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t27) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+1204,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t22))));
            tracep->chgBit(oldp+1205,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t24) 
                                       & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21) 
                                          & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t22)))));
            tracep->chgBit(oldp+1206,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t24) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+1207,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t37));
            tracep->chgBit(oldp+1208,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t38));
            tracep->chgBit(oldp+1209,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t39));
            tracep->chgBit(oldp+1210,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t40));
            tracep->chgBit(oldp+1211,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t41));
            tracep->chgBit(oldp+1212,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t42));
            tracep->chgBit(oldp+1213,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t43));
            tracep->chgBit(oldp+1214,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t44));
            tracep->chgBit(oldp+1215,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t45));
            tracep->chgBit(oldp+1216,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__out__DOT__t0));
            tracep->chgBit(oldp+1217,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1));
            tracep->chgBit(oldp+1218,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__out__DOT__t2));
            tracep->chgBit(oldp+1219,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__out__DOT__t3));
            tracep->chgBit(oldp+1220,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__out__DOT__t4));
            tracep->chgBit(oldp+1221,((1U & VL_REDXOR_32(
                                                         (0x20800U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t2)))));
            tracep->chgBit(oldp+1222,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__out__DOT__t6));
            tracep->chgBit(oldp+1223,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__out__DOT__t7));
            tracep->chgBit(oldp+1224,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__out__DOT__t8));
            tracep->chgBit(oldp+1225,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__out__DOT__t9));
            tracep->chgBit(oldp+1226,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__out__DOT__t10));
            tracep->chgBit(oldp+1227,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__out__DOT__t11));
            tracep->chgBit(oldp+1228,((1U & VL_REDXOR_32(
                                                         (0x10002U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t2)))));
            tracep->chgBit(oldp+1229,((1U & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t2 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__out__DOT__t0)))));
            tracep->chgBit(oldp+1230,((1U & VL_REDXOR_32(
                                                         (0x804U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t2)))));
            tracep->chgBit(oldp+1231,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 5U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1)))));
            tracep->chgBit(oldp+1232,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 6U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__out__DOT__t0)))));
            tracep->chgBit(oldp+1233,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 7U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1)))));
            tracep->chgBit(oldp+1234,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 8U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__out__DOT__t8)))));
            tracep->chgBit(oldp+1235,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 0xdU) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__out__DOT__t4)))));
            tracep->chgBit(oldp+1236,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__out__DOT__t0) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1))));
            tracep->chgBit(oldp+1237,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__out__DOT__t7))));
            tracep->chgBit(oldp+1238,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__out__DOT__t3) 
                                             ^ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t2 
                                                 >> 0x10U) 
                                                ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t2 
                                                   >> 1U))))));
            tracep->chgBit(oldp+1239,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t2 
                                               >> 8U) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__out__DOT__t8)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__out__DOT__t2)))));
            tracep->chgBit(oldp+1240,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t2 
                                               >> 5U) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__out__DOT__t9)))));
            tracep->chgBit(oldp+1241,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__out__DOT__t6) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__out__DOT__t10))));
            tracep->chgBit(oldp+1242,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__out__DOT__t7) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__out__DOT__t9))));
            tracep->chgBit(oldp+1243,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__out__DOT__t8) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__out__DOT__t10))));
            tracep->chgBit(oldp+1244,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__out__DOT__t11) 
                                             ^ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t2 
                                                 >> 2U) 
                                                ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t2 
                                                   >> 0xbU))))));
            tracep->chgBit(oldp+1245,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__out__DOT__t11) 
                                             ^ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t2 
                                                 >> 7U) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1))))));
            tracep->chgCData(oldp+1246,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT____Vcellout__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__fx),8);
            tracep->chgCData(oldp+1247,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                        [0U]),8);
            tracep->chgIData(oldp+1248,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1),21);
            tracep->chgIData(oldp+1249,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2),18);
            tracep->chgBit(oldp+1250,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y17));
            tracep->chgBit(oldp+1251,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y16));
            tracep->chgBit(oldp+1252,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y2));
            tracep->chgBit(oldp+1253,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y1));
            tracep->chgBit(oldp+1254,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y18));
            tracep->chgBit(oldp+1255,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t0));
            tracep->chgBit(oldp+1256,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y6));
            tracep->chgBit(oldp+1257,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y14));
            tracep->chgBit(oldp+1258,((1U & (~ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                [0U] 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y1))))));
            tracep->chgBit(oldp+1259,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y8));
            tracep->chgBit(oldp+1260,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y2) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t0))));
            tracep->chgBit(oldp+1261,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y1) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t0))));
            tracep->chgBit(oldp+1262,((1U & (~ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                 [0U] 
                                                 >> 5U) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y1))))));
            tracep->chgBit(oldp+1263,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t1));
            tracep->chgBit(oldp+1264,((1U & (~ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                 [0U] 
                                                 >> 5U) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y14))))));
            tracep->chgBit(oldp+1265,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y18) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t1))));
            tracep->chgBit(oldp+1266,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                              [0U] 
                                              >> 3U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y6)))));
            tracep->chgBit(oldp+1267,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t2));
            tracep->chgBit(oldp+1268,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t3));
            tracep->chgBit(oldp+1269,((1U & (~ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                 [0U] 
                                                 >> 5U) 
                                                ^ (
                                                   vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                   [0U] 
                                                   >> 3U))))));
            tracep->chgBit(oldp+1270,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y16) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t2))));
            tracep->chgBit(oldp+1271,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t1) 
                                             ^ (~ (
                                                   (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                    [0U] 
                                                    >> 5U) 
                                                   ^ 
                                                   (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                    [0U] 
                                                    >> 3U)))))));
            tracep->chgBit(oldp+1272,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y20));
            tracep->chgBit(oldp+1273,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y8) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y20))));
            tracep->chgBit(oldp+1274,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y8) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t3))));
            tracep->chgBit(oldp+1275,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                              [0U] 
                                              >> 7U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t2)))));
            tracep->chgBit(oldp+1276,((1U & VL_REDXOR_32(
                                                         (0x1008U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1277,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1));
            tracep->chgBit(oldp+1278,((IData)((0x20040U 
                                               == (0x20040U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1279,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                              >> 0xaU) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1)))));
            tracep->chgBit(oldp+1280,((0x4001U == (0x4001U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1))));
            tracep->chgBit(oldp+1281,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                               >> 0xeU) 
                                              & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1)))));
            tracep->chgBit(oldp+1282,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6));
            tracep->chgBit(oldp+1283,((IData)((0x10080U 
                                               == (0x10080U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1284,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                               >> 3U) 
                                              ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                 >> 0xcU)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6)))));
            tracep->chgBit(oldp+1285,((IData)((0xa000U 
                                               == (0xa000U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1286,((1U & ((0xa000U 
                                              == (0xa000U 
                                                  & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6)))));
            tracep->chgBit(oldp+1287,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t11));
            tracep->chgBit(oldp+1288,((IData)((0x100010U 
                                               == (0x100010U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1289,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t13));
            tracep->chgBit(oldp+1290,((IData)((0x104U 
                                               == (0x104U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1291,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t15));
            tracep->chgBit(oldp+1292,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                               >> 0xaU) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1)) 
                                             ^ (0x20040U 
                                                == 
                                                (0x20040U 
                                                 & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1))))));
            tracep->chgBit(oldp+1293,((1U & ((((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                >> 0xeU) 
                                               & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1)) 
                                             ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                >> 0x12U)))));
            tracep->chgBit(oldp+1294,((1U & ((((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                >> 3U) 
                                               ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                  >> 0xcU)) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6)) 
                                             ^ (0x10080U 
                                                == 
                                                (0x10080U 
                                                 & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1))))));
            tracep->chgBit(oldp+1295,((1U & (((0xa000U 
                                               == (0xa000U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t15)))));
            tracep->chgBit(oldp+1296,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t20));
            tracep->chgBit(oldp+1297,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21));
            tracep->chgBit(oldp+1298,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t22));
            tracep->chgBit(oldp+1299,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23));
            tracep->chgBit(oldp+1300,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t24));
            tracep->chgBit(oldp+1301,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25));
            tracep->chgBit(oldp+1302,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+1303,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t27));
            tracep->chgBit(oldp+1304,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+1305,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23) 
                                        ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25)) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t27))));
            tracep->chgBit(oldp+1306,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21) 
                                        ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25)) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t24))));
            tracep->chgBit(oldp+1307,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t20) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23))));
            tracep->chgBit(oldp+1308,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t27) 
                                       & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t20) 
                                          & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23)))));
            tracep->chgBit(oldp+1309,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t27) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+1310,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t22))));
            tracep->chgBit(oldp+1311,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t24) 
                                       & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21) 
                                          & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t22)))));
            tracep->chgBit(oldp+1312,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t24) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+1313,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t37));
            tracep->chgBit(oldp+1314,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t38));
            tracep->chgBit(oldp+1315,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t39));
            tracep->chgBit(oldp+1316,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t40));
            tracep->chgBit(oldp+1317,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t41));
            tracep->chgBit(oldp+1318,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t42));
            tracep->chgBit(oldp+1319,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t43));
            tracep->chgBit(oldp+1320,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t44));
            tracep->chgBit(oldp+1321,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t45));
            tracep->chgBit(oldp+1322,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t0));
            tracep->chgBit(oldp+1323,((1U & VL_REDXOR_32(
                                                         (0x300U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+1324,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t2));
            tracep->chgBit(oldp+1325,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t3));
            tracep->chgBit(oldp+1326,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t4));
            tracep->chgBit(oldp+1327,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t5));
            tracep->chgBit(oldp+1328,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6));
            tracep->chgBit(oldp+1329,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t7));
            tracep->chgBit(oldp+1330,((1U & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                             ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                                >> 3U)))));
            tracep->chgBit(oldp+1331,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t9));
            tracep->chgBit(oldp+1332,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t10));
            tracep->chgBit(oldp+1333,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t11));
            tracep->chgBit(oldp+1334,((1U & VL_REDXOR_32(
                                                         (0x14000U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+1335,((1U & VL_REDXOR_32(
                                                         (0x20002U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+1336,((1U & VL_REDXOR_32(
                                                         (0x21000U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+1337,((1U & VL_REDXOR_32(
                                                         (0x210U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+1338,((1U & VL_REDXOR_32(
                                                         (0x880U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+1339,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                              >> 8U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t2)))));
            tracep->chgBit(oldp+1340,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                              >> 0xdU) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t5)))));
            tracep->chgBit(oldp+1341,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t2) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t3))));
            tracep->chgBit(oldp+1342,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t4) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6))));
            tracep->chgBit(oldp+1343,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t22));
            tracep->chgBit(oldp+1344,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t23));
            tracep->chgBit(oldp+1345,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t5) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t7))));
            tracep->chgBit(oldp+1346,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t10))));
            tracep->chgBit(oldp+1347,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t9) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t11))));
            tracep->chgBit(oldp+1348,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t10) 
                                             ^ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                                 >> 0xdU) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t5))))));
            tracep->chgBit(oldp+1349,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t11) 
                                       ^ ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6) 
                                          ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t10)))));
            tracep->chgBit(oldp+1350,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                               >> 4U) 
                                              ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                                 >> 9U)) 
                                             ^ ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t4) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6))))));
            tracep->chgCData(oldp+1351,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT____Vcellout__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__fx),8);
            tracep->chgCData(oldp+1352,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                        [1U]),8);
            tracep->chgIData(oldp+1353,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t1),21);
            tracep->chgIData(oldp+1354,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t2),18);
            tracep->chgBit(oldp+1355,((1U & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                       [1U])));
            tracep->chgBit(oldp+1356,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__top__DOT__y1));
            tracep->chgBit(oldp+1357,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__top__DOT__y2));
            tracep->chgBit(oldp+1358,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__top__DOT__y3));
            tracep->chgBit(oldp+1359,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__top__DOT__y4));
            tracep->chgBit(oldp+1360,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__top__DOT__t0));
            tracep->chgBit(oldp+1361,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__top__DOT__y5));
            tracep->chgBit(oldp+1362,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__top__DOT__t1));
            tracep->chgBit(oldp+1363,((1U & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                             [1U] ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__top__DOT__y5)))));
            tracep->chgBit(oldp+1364,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__top__DOT__y7));
            tracep->chgBit(oldp+1365,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__top__DOT__y8));
            tracep->chgBit(oldp+1366,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__top__DOT__t2));
            tracep->chgBit(oldp+1367,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__top__DOT__t3));
            tracep->chgBit(oldp+1368,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__top__DOT__y3) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__top__DOT__y4))));
            tracep->chgBit(oldp+1369,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__top__DOT__y5) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__top__DOT__t2))));
            tracep->chgBit(oldp+1370,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__top__DOT__t0) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__top__DOT__t2))));
            tracep->chgBit(oldp+1371,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__top__DOT__y12));
            tracep->chgBit(oldp+1372,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__top__DOT__y13));
            tracep->chgBit(oldp+1373,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                              [1U] 
                                              >> 4U) 
                                             ^ vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                             [1U]))));
            tracep->chgBit(oldp+1374,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__top__DOT__y14));
            tracep->chgBit(oldp+1375,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__top__DOT__y15));
            tracep->chgBit(oldp+1376,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                              [1U] 
                                              >> 1U) 
                                             ^ vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                             [1U]))));
            tracep->chgBit(oldp+1377,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__top__DOT__y16));
            tracep->chgBit(oldp+1378,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__top__DOT__y2) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__top__DOT__y16))));
            tracep->chgBit(oldp+1379,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__top__DOT__y2) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__top__DOT__y8))));
            tracep->chgBit(oldp+1380,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__top__DOT__y15) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__top__DOT__y13))));
            tracep->chgBit(oldp+1381,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__top__DOT__y1) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__top__DOT__t3))));
            tracep->chgBit(oldp+1382,((1U & VL_REDXOR_32(
                                                         (0x1008U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1383,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1));
            tracep->chgBit(oldp+1384,((IData)((0x20040U 
                                               == (0x20040U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1385,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t1 
                                              >> 0xaU) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1)))));
            tracep->chgBit(oldp+1386,((0x4001U == (0x4001U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t1))));
            tracep->chgBit(oldp+1387,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t1 
                                               >> 0xeU) 
                                              & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t1) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1)))));
            tracep->chgBit(oldp+1388,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6));
            tracep->chgBit(oldp+1389,((IData)((0x10080U 
                                               == (0x10080U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1390,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t1 
                                               >> 3U) 
                                              ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t1 
                                                 >> 0xcU)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6)))));
            tracep->chgBit(oldp+1391,((IData)((0xa000U 
                                               == (0xa000U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1392,((1U & ((0xa000U 
                                              == (0xa000U 
                                                  & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t1)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6)))));
            tracep->chgBit(oldp+1393,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t11));
            tracep->chgBit(oldp+1394,((IData)((0x100010U 
                                               == (0x100010U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1395,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t13));
            tracep->chgBit(oldp+1396,((IData)((0x104U 
                                               == (0x104U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1397,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t15));
            tracep->chgBit(oldp+1398,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t1 
                                               >> 0xaU) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1)) 
                                             ^ (0x20040U 
                                                == 
                                                (0x20040U 
                                                 & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t1))))));
            tracep->chgBit(oldp+1399,((1U & ((((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t1 
                                                >> 0xeU) 
                                               & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t1) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1)) 
                                             ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t1 
                                                >> 0x12U)))));
            tracep->chgBit(oldp+1400,((1U & ((((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t1 
                                                >> 3U) 
                                               ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t1 
                                                  >> 0xcU)) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6)) 
                                             ^ (0x10080U 
                                                == 
                                                (0x10080U 
                                                 & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t1))))));
            tracep->chgBit(oldp+1401,((1U & (((0xa000U 
                                               == (0xa000U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t1)) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t15)))));
            tracep->chgBit(oldp+1402,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t20));
            tracep->chgBit(oldp+1403,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21));
            tracep->chgBit(oldp+1404,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t22));
            tracep->chgBit(oldp+1405,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23));
            tracep->chgBit(oldp+1406,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t24));
            tracep->chgBit(oldp+1407,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25));
            tracep->chgBit(oldp+1408,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+1409,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t27));
            tracep->chgBit(oldp+1410,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+1411,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23) 
                                        ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25)) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t27))));
            tracep->chgBit(oldp+1412,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21) 
                                        ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25)) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t24))));
            tracep->chgBit(oldp+1413,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t20) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23))));
            tracep->chgBit(oldp+1414,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t27) 
                                       & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t20) 
                                          & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23)))));
            tracep->chgBit(oldp+1415,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t27) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+1416,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t22))));
            tracep->chgBit(oldp+1417,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t24) 
                                       & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21) 
                                          & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t22)))));
            tracep->chgBit(oldp+1418,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t24) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+1419,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t37));
            tracep->chgBit(oldp+1420,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t38));
            tracep->chgBit(oldp+1421,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t39));
            tracep->chgBit(oldp+1422,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t40));
            tracep->chgBit(oldp+1423,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t41));
            tracep->chgBit(oldp+1424,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t42));
            tracep->chgBit(oldp+1425,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t43));
            tracep->chgBit(oldp+1426,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t44));
            tracep->chgBit(oldp+1427,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t45));
            tracep->chgBit(oldp+1428,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__out__DOT__t0));
            tracep->chgBit(oldp+1429,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1));
            tracep->chgBit(oldp+1430,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__out__DOT__t2));
            tracep->chgBit(oldp+1431,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__out__DOT__t3));
            tracep->chgBit(oldp+1432,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__out__DOT__t4));
            tracep->chgBit(oldp+1433,((1U & VL_REDXOR_32(
                                                         (0x20800U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t2)))));
            tracep->chgBit(oldp+1434,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__out__DOT__t6));
            tracep->chgBit(oldp+1435,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__out__DOT__t7));
            tracep->chgBit(oldp+1436,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__out__DOT__t8));
            tracep->chgBit(oldp+1437,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__out__DOT__t9));
            tracep->chgBit(oldp+1438,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__out__DOT__t10));
            tracep->chgBit(oldp+1439,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__out__DOT__t11));
            tracep->chgBit(oldp+1440,((1U & VL_REDXOR_32(
                                                         (0x10002U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t2)))));
            tracep->chgBit(oldp+1441,((1U & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t2 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__out__DOT__t0)))));
            tracep->chgBit(oldp+1442,((1U & VL_REDXOR_32(
                                                         (0x804U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t2)))));
            tracep->chgBit(oldp+1443,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 5U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1)))));
            tracep->chgBit(oldp+1444,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 6U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__out__DOT__t0)))));
            tracep->chgBit(oldp+1445,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 7U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1)))));
            tracep->chgBit(oldp+1446,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 8U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__out__DOT__t8)))));
            tracep->chgBit(oldp+1447,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 0xdU) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__out__DOT__t4)))));
            tracep->chgBit(oldp+1448,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__out__DOT__t0) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1))));
            tracep->chgBit(oldp+1449,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__out__DOT__t7))));
            tracep->chgBit(oldp+1450,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__out__DOT__t3) 
                                             ^ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t2 
                                                 >> 0x10U) 
                                                ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t2 
                                                   >> 1U))))));
            tracep->chgBit(oldp+1451,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t2 
                                               >> 8U) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__out__DOT__t8)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__out__DOT__t2)))));
            tracep->chgBit(oldp+1452,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t2 
                                               >> 5U) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__out__DOT__t9)))));
            tracep->chgBit(oldp+1453,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__out__DOT__t6) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__out__DOT__t10))));
            tracep->chgBit(oldp+1454,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__out__DOT__t7) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__out__DOT__t9))));
            tracep->chgBit(oldp+1455,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__out__DOT__t8) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__out__DOT__t10))));
            tracep->chgBit(oldp+1456,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__out__DOT__t11) 
                                             ^ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t2 
                                                 >> 2U) 
                                                ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t2 
                                                   >> 0xbU))))));
            tracep->chgBit(oldp+1457,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__out__DOT__t11) 
                                             ^ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t2 
                                                 >> 7U) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1))))));
            tracep->chgCData(oldp+1458,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT____Vcellout__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__fx),8);
            tracep->chgCData(oldp+1459,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                        [1U]),8);
            tracep->chgIData(oldp+1460,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1),21);
            tracep->chgIData(oldp+1461,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2),18);
            tracep->chgBit(oldp+1462,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y17));
            tracep->chgBit(oldp+1463,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y16));
            tracep->chgBit(oldp+1464,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y2));
            tracep->chgBit(oldp+1465,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y1));
            tracep->chgBit(oldp+1466,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y18));
            tracep->chgBit(oldp+1467,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t0));
            tracep->chgBit(oldp+1468,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y6));
            tracep->chgBit(oldp+1469,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y14));
            tracep->chgBit(oldp+1470,((1U & (~ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                [1U] 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y1))))));
            tracep->chgBit(oldp+1471,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y8));
            tracep->chgBit(oldp+1472,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y2) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t0))));
            tracep->chgBit(oldp+1473,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y1) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t0))));
            tracep->chgBit(oldp+1474,((1U & (~ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                 [1U] 
                                                 >> 5U) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y1))))));
            tracep->chgBit(oldp+1475,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t1));
            tracep->chgBit(oldp+1476,((1U & (~ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                 [1U] 
                                                 >> 5U) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y14))))));
            tracep->chgBit(oldp+1477,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y18) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t1))));
            tracep->chgBit(oldp+1478,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                              [1U] 
                                              >> 3U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y6)))));
            tracep->chgBit(oldp+1479,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t2));
            tracep->chgBit(oldp+1480,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t3));
            tracep->chgBit(oldp+1481,((1U & (~ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                 [1U] 
                                                 >> 5U) 
                                                ^ (
                                                   vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                   [1U] 
                                                   >> 3U))))));
            tracep->chgBit(oldp+1482,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y16) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t2))));
            tracep->chgBit(oldp+1483,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t1) 
                                             ^ (~ (
                                                   (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                    [1U] 
                                                    >> 5U) 
                                                   ^ 
                                                   (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                    [1U] 
                                                    >> 3U)))))));
            tracep->chgBit(oldp+1484,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y20));
            tracep->chgBit(oldp+1485,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y8) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y20))));
            tracep->chgBit(oldp+1486,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y8) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t3))));
            tracep->chgBit(oldp+1487,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                              [1U] 
                                              >> 7U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t2)))));
            tracep->chgBit(oldp+1488,((1U & VL_REDXOR_32(
                                                         (0x1008U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1489,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1));
            tracep->chgBit(oldp+1490,((IData)((0x20040U 
                                               == (0x20040U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1491,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                              >> 0xaU) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1)))));
            tracep->chgBit(oldp+1492,((0x4001U == (0x4001U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1))));
            tracep->chgBit(oldp+1493,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                               >> 0xeU) 
                                              & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1)))));
            tracep->chgBit(oldp+1494,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6));
            tracep->chgBit(oldp+1495,((IData)((0x10080U 
                                               == (0x10080U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1496,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                               >> 3U) 
                                              ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                 >> 0xcU)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6)))));
            tracep->chgBit(oldp+1497,((IData)((0xa000U 
                                               == (0xa000U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1498,((1U & ((0xa000U 
                                              == (0xa000U 
                                                  & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6)))));
            tracep->chgBit(oldp+1499,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t11));
            tracep->chgBit(oldp+1500,((IData)((0x100010U 
                                               == (0x100010U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1501,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t13));
            tracep->chgBit(oldp+1502,((IData)((0x104U 
                                               == (0x104U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1503,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t15));
            tracep->chgBit(oldp+1504,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                               >> 0xaU) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1)) 
                                             ^ (0x20040U 
                                                == 
                                                (0x20040U 
                                                 & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1))))));
            tracep->chgBit(oldp+1505,((1U & ((((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                >> 0xeU) 
                                               & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1)) 
                                             ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                >> 0x12U)))));
            tracep->chgBit(oldp+1506,((1U & ((((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                >> 3U) 
                                               ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                  >> 0xcU)) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6)) 
                                             ^ (0x10080U 
                                                == 
                                                (0x10080U 
                                                 & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1))))));
            tracep->chgBit(oldp+1507,((1U & (((0xa000U 
                                               == (0xa000U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t15)))));
            tracep->chgBit(oldp+1508,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t20));
            tracep->chgBit(oldp+1509,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21));
            tracep->chgBit(oldp+1510,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t22));
            tracep->chgBit(oldp+1511,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23));
            tracep->chgBit(oldp+1512,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t24));
            tracep->chgBit(oldp+1513,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25));
            tracep->chgBit(oldp+1514,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+1515,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t27));
            tracep->chgBit(oldp+1516,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+1517,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23) 
                                        ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25)) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t27))));
            tracep->chgBit(oldp+1518,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21) 
                                        ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25)) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t24))));
            tracep->chgBit(oldp+1519,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t20) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23))));
            tracep->chgBit(oldp+1520,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t27) 
                                       & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t20) 
                                          & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23)))));
            tracep->chgBit(oldp+1521,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t27) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+1522,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t22))));
            tracep->chgBit(oldp+1523,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t24) 
                                       & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21) 
                                          & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t22)))));
            tracep->chgBit(oldp+1524,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t24) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+1525,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t37));
            tracep->chgBit(oldp+1526,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t38));
            tracep->chgBit(oldp+1527,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t39));
            tracep->chgBit(oldp+1528,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t40));
            tracep->chgBit(oldp+1529,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t41));
            tracep->chgBit(oldp+1530,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t42));
            tracep->chgBit(oldp+1531,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t43));
            tracep->chgBit(oldp+1532,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t44));
            tracep->chgBit(oldp+1533,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t45));
            tracep->chgBit(oldp+1534,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t0));
            tracep->chgBit(oldp+1535,((1U & VL_REDXOR_32(
                                                         (0x300U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+1536,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t2));
            tracep->chgBit(oldp+1537,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t3));
            tracep->chgBit(oldp+1538,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t4));
            tracep->chgBit(oldp+1539,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t5));
            tracep->chgBit(oldp+1540,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6));
            tracep->chgBit(oldp+1541,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t7));
            tracep->chgBit(oldp+1542,((1U & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                             ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                                >> 3U)))));
            tracep->chgBit(oldp+1543,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t9));
            tracep->chgBit(oldp+1544,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t10));
            tracep->chgBit(oldp+1545,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t11));
            tracep->chgBit(oldp+1546,((1U & VL_REDXOR_32(
                                                         (0x14000U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+1547,((1U & VL_REDXOR_32(
                                                         (0x20002U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+1548,((1U & VL_REDXOR_32(
                                                         (0x21000U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+1549,((1U & VL_REDXOR_32(
                                                         (0x210U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+1550,((1U & VL_REDXOR_32(
                                                         (0x880U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+1551,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                              >> 8U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t2)))));
            tracep->chgBit(oldp+1552,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                              >> 0xdU) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t5)))));
            tracep->chgBit(oldp+1553,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t2) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t3))));
            tracep->chgBit(oldp+1554,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t4) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6))));
            tracep->chgBit(oldp+1555,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t22));
            tracep->chgBit(oldp+1556,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t23));
            tracep->chgBit(oldp+1557,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t5) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t7))));
            tracep->chgBit(oldp+1558,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t10))));
            tracep->chgBit(oldp+1559,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t9) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t11))));
            tracep->chgBit(oldp+1560,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t10) 
                                             ^ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                                 >> 0xdU) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t5))))));
            tracep->chgBit(oldp+1561,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t11) 
                                       ^ ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6) 
                                          ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t10)))));
            tracep->chgBit(oldp+1562,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                               >> 4U) 
                                              ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                                 >> 9U)) 
                                             ^ ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t4) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6))))));
            tracep->chgCData(oldp+1563,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT____Vcellout__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__fx),8);
            tracep->chgCData(oldp+1564,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                        [2U]),8);
            tracep->chgIData(oldp+1565,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t1),21);
            tracep->chgIData(oldp+1566,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t2),18);
            tracep->chgBit(oldp+1567,((1U & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                       [2U])));
            tracep->chgBit(oldp+1568,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__top__DOT__y1));
            tracep->chgBit(oldp+1569,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__top__DOT__y2));
            tracep->chgBit(oldp+1570,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__top__DOT__y3));
            tracep->chgBit(oldp+1571,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__top__DOT__y4));
            tracep->chgBit(oldp+1572,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__top__DOT__t0));
            tracep->chgBit(oldp+1573,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__top__DOT__y5));
            tracep->chgBit(oldp+1574,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__top__DOT__t1));
            tracep->chgBit(oldp+1575,((1U & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                             [2U] ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__top__DOT__y5)))));
            tracep->chgBit(oldp+1576,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__top__DOT__y7));
            tracep->chgBit(oldp+1577,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__top__DOT__y8));
            tracep->chgBit(oldp+1578,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__top__DOT__t2));
            tracep->chgBit(oldp+1579,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__top__DOT__t3));
            tracep->chgBit(oldp+1580,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__top__DOT__y3) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__top__DOT__y4))));
            tracep->chgBit(oldp+1581,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__top__DOT__y5) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__top__DOT__t2))));
            tracep->chgBit(oldp+1582,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__top__DOT__t0) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__top__DOT__t2))));
            tracep->chgBit(oldp+1583,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__top__DOT__y12));
            tracep->chgBit(oldp+1584,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__top__DOT__y13));
            tracep->chgBit(oldp+1585,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                              [2U] 
                                              >> 4U) 
                                             ^ vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                             [2U]))));
            tracep->chgBit(oldp+1586,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__top__DOT__y14));
            tracep->chgBit(oldp+1587,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__top__DOT__y15));
            tracep->chgBit(oldp+1588,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                              [2U] 
                                              >> 1U) 
                                             ^ vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                             [2U]))));
            tracep->chgBit(oldp+1589,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__top__DOT__y16));
            tracep->chgBit(oldp+1590,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__top__DOT__y2) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__top__DOT__y16))));
            tracep->chgBit(oldp+1591,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__top__DOT__y2) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__top__DOT__y8))));
            tracep->chgBit(oldp+1592,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__top__DOT__y15) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__top__DOT__y13))));
            tracep->chgBit(oldp+1593,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__top__DOT__y1) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__top__DOT__t3))));
            tracep->chgBit(oldp+1594,((1U & VL_REDXOR_32(
                                                         (0x1008U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1595,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1));
            tracep->chgBit(oldp+1596,((IData)((0x20040U 
                                               == (0x20040U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1597,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t1 
                                              >> 0xaU) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1)))));
            tracep->chgBit(oldp+1598,((0x4001U == (0x4001U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t1))));
            tracep->chgBit(oldp+1599,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t1 
                                               >> 0xeU) 
                                              & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t1) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1)))));
            tracep->chgBit(oldp+1600,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6));
            tracep->chgBit(oldp+1601,((IData)((0x10080U 
                                               == (0x10080U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1602,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t1 
                                               >> 3U) 
                                              ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t1 
                                                 >> 0xcU)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6)))));
            tracep->chgBit(oldp+1603,((IData)((0xa000U 
                                               == (0xa000U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1604,((1U & ((0xa000U 
                                              == (0xa000U 
                                                  & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t1)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6)))));
            tracep->chgBit(oldp+1605,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t11));
            tracep->chgBit(oldp+1606,((IData)((0x100010U 
                                               == (0x100010U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1607,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t13));
            tracep->chgBit(oldp+1608,((IData)((0x104U 
                                               == (0x104U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1609,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t15));
            tracep->chgBit(oldp+1610,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t1 
                                               >> 0xaU) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1)) 
                                             ^ (0x20040U 
                                                == 
                                                (0x20040U 
                                                 & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t1))))));
            tracep->chgBit(oldp+1611,((1U & ((((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t1 
                                                >> 0xeU) 
                                               & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t1) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1)) 
                                             ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t1 
                                                >> 0x12U)))));
            tracep->chgBit(oldp+1612,((1U & ((((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t1 
                                                >> 3U) 
                                               ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t1 
                                                  >> 0xcU)) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6)) 
                                             ^ (0x10080U 
                                                == 
                                                (0x10080U 
                                                 & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t1))))));
            tracep->chgBit(oldp+1613,((1U & (((0xa000U 
                                               == (0xa000U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t1)) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t15)))));
            tracep->chgBit(oldp+1614,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t20));
            tracep->chgBit(oldp+1615,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21));
            tracep->chgBit(oldp+1616,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t22));
            tracep->chgBit(oldp+1617,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23));
            tracep->chgBit(oldp+1618,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t24));
            tracep->chgBit(oldp+1619,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25));
            tracep->chgBit(oldp+1620,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+1621,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t27));
            tracep->chgBit(oldp+1622,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+1623,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23) 
                                        ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25)) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t27))));
            tracep->chgBit(oldp+1624,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21) 
                                        ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25)) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t24))));
            tracep->chgBit(oldp+1625,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t20) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23))));
            tracep->chgBit(oldp+1626,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t27) 
                                       & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t20) 
                                          & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23)))));
            tracep->chgBit(oldp+1627,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t27) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+1628,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t22))));
            tracep->chgBit(oldp+1629,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t24) 
                                       & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21) 
                                          & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t22)))));
            tracep->chgBit(oldp+1630,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t24) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+1631,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t37));
            tracep->chgBit(oldp+1632,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t38));
            tracep->chgBit(oldp+1633,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t39));
            tracep->chgBit(oldp+1634,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t40));
            tracep->chgBit(oldp+1635,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t41));
            tracep->chgBit(oldp+1636,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t42));
            tracep->chgBit(oldp+1637,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t43));
            tracep->chgBit(oldp+1638,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t44));
            tracep->chgBit(oldp+1639,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t45));
            tracep->chgBit(oldp+1640,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__out__DOT__t0));
            tracep->chgBit(oldp+1641,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1));
            tracep->chgBit(oldp+1642,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__out__DOT__t2));
            tracep->chgBit(oldp+1643,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__out__DOT__t3));
            tracep->chgBit(oldp+1644,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__out__DOT__t4));
            tracep->chgBit(oldp+1645,((1U & VL_REDXOR_32(
                                                         (0x20800U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t2)))));
            tracep->chgBit(oldp+1646,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__out__DOT__t6));
            tracep->chgBit(oldp+1647,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__out__DOT__t7));
            tracep->chgBit(oldp+1648,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__out__DOT__t8));
            tracep->chgBit(oldp+1649,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__out__DOT__t9));
            tracep->chgBit(oldp+1650,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__out__DOT__t10));
            tracep->chgBit(oldp+1651,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__out__DOT__t11));
            tracep->chgBit(oldp+1652,((1U & VL_REDXOR_32(
                                                         (0x10002U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t2)))));
            tracep->chgBit(oldp+1653,((1U & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t2 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__out__DOT__t0)))));
            tracep->chgBit(oldp+1654,((1U & VL_REDXOR_32(
                                                         (0x804U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t2)))));
            tracep->chgBit(oldp+1655,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 5U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1)))));
            tracep->chgBit(oldp+1656,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 6U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__out__DOT__t0)))));
            tracep->chgBit(oldp+1657,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 7U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1)))));
            tracep->chgBit(oldp+1658,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 8U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__out__DOT__t8)))));
            tracep->chgBit(oldp+1659,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 0xdU) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__out__DOT__t4)))));
            tracep->chgBit(oldp+1660,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__out__DOT__t0) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1))));
            tracep->chgBit(oldp+1661,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__out__DOT__t7))));
            tracep->chgBit(oldp+1662,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__out__DOT__t3) 
                                             ^ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t2 
                                                 >> 0x10U) 
                                                ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t2 
                                                   >> 1U))))));
            tracep->chgBit(oldp+1663,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t2 
                                               >> 8U) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__out__DOT__t8)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__out__DOT__t2)))));
            tracep->chgBit(oldp+1664,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t2 
                                               >> 5U) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__out__DOT__t9)))));
            tracep->chgBit(oldp+1665,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__out__DOT__t6) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__out__DOT__t10))));
            tracep->chgBit(oldp+1666,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__out__DOT__t7) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__out__DOT__t9))));
            tracep->chgBit(oldp+1667,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__out__DOT__t8) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__out__DOT__t10))));
            tracep->chgBit(oldp+1668,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__out__DOT__t11) 
                                             ^ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t2 
                                                 >> 2U) 
                                                ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t2 
                                                   >> 0xbU))))));
            tracep->chgBit(oldp+1669,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__out__DOT__t11) 
                                             ^ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t2 
                                                 >> 7U) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1))))));
            tracep->chgCData(oldp+1670,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT____Vcellout__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__fx),8);
            tracep->chgCData(oldp+1671,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                        [2U]),8);
            tracep->chgIData(oldp+1672,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1),21);
            tracep->chgIData(oldp+1673,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2),18);
            tracep->chgBit(oldp+1674,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y17));
            tracep->chgBit(oldp+1675,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y16));
            tracep->chgBit(oldp+1676,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y2));
            tracep->chgBit(oldp+1677,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y1));
            tracep->chgBit(oldp+1678,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y18));
            tracep->chgBit(oldp+1679,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t0));
            tracep->chgBit(oldp+1680,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y6));
            tracep->chgBit(oldp+1681,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y14));
            tracep->chgBit(oldp+1682,((1U & (~ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                [2U] 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y1))))));
            tracep->chgBit(oldp+1683,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y8));
            tracep->chgBit(oldp+1684,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y2) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t0))));
            tracep->chgBit(oldp+1685,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y1) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t0))));
            tracep->chgBit(oldp+1686,((1U & (~ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                 [2U] 
                                                 >> 5U) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y1))))));
            tracep->chgBit(oldp+1687,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t1));
            tracep->chgBit(oldp+1688,((1U & (~ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                 [2U] 
                                                 >> 5U) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y14))))));
            tracep->chgBit(oldp+1689,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y18) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t1))));
            tracep->chgBit(oldp+1690,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                              [2U] 
                                              >> 3U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y6)))));
            tracep->chgBit(oldp+1691,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t2));
            tracep->chgBit(oldp+1692,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t3));
            tracep->chgBit(oldp+1693,((1U & (~ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                 [2U] 
                                                 >> 5U) 
                                                ^ (
                                                   vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                   [2U] 
                                                   >> 3U))))));
            tracep->chgBit(oldp+1694,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y16) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t2))));
            tracep->chgBit(oldp+1695,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t1) 
                                             ^ (~ (
                                                   (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                    [2U] 
                                                    >> 5U) 
                                                   ^ 
                                                   (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                    [2U] 
                                                    >> 3U)))))));
            tracep->chgBit(oldp+1696,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y20));
            tracep->chgBit(oldp+1697,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y8) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y20))));
            tracep->chgBit(oldp+1698,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y8) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t3))));
            tracep->chgBit(oldp+1699,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                              [2U] 
                                              >> 7U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t2)))));
            tracep->chgBit(oldp+1700,((1U & VL_REDXOR_32(
                                                         (0x1008U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1701,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1));
            tracep->chgBit(oldp+1702,((IData)((0x20040U 
                                               == (0x20040U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1703,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                              >> 0xaU) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1)))));
            tracep->chgBit(oldp+1704,((0x4001U == (0x4001U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1))));
            tracep->chgBit(oldp+1705,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                               >> 0xeU) 
                                              & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1)))));
            tracep->chgBit(oldp+1706,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6));
            tracep->chgBit(oldp+1707,((IData)((0x10080U 
                                               == (0x10080U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1708,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                               >> 3U) 
                                              ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                 >> 0xcU)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6)))));
            tracep->chgBit(oldp+1709,((IData)((0xa000U 
                                               == (0xa000U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1710,((1U & ((0xa000U 
                                              == (0xa000U 
                                                  & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6)))));
            tracep->chgBit(oldp+1711,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t11));
            tracep->chgBit(oldp+1712,((IData)((0x100010U 
                                               == (0x100010U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1713,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t13));
            tracep->chgBit(oldp+1714,((IData)((0x104U 
                                               == (0x104U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1715,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t15));
            tracep->chgBit(oldp+1716,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                               >> 0xaU) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1)) 
                                             ^ (0x20040U 
                                                == 
                                                (0x20040U 
                                                 & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1))))));
            tracep->chgBit(oldp+1717,((1U & ((((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                >> 0xeU) 
                                               & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1)) 
                                             ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                >> 0x12U)))));
            tracep->chgBit(oldp+1718,((1U & ((((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                >> 3U) 
                                               ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                  >> 0xcU)) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6)) 
                                             ^ (0x10080U 
                                                == 
                                                (0x10080U 
                                                 & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1))))));
            tracep->chgBit(oldp+1719,((1U & (((0xa000U 
                                               == (0xa000U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t15)))));
            tracep->chgBit(oldp+1720,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t20));
            tracep->chgBit(oldp+1721,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21));
            tracep->chgBit(oldp+1722,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t22));
            tracep->chgBit(oldp+1723,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23));
            tracep->chgBit(oldp+1724,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t24));
            tracep->chgBit(oldp+1725,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25));
            tracep->chgBit(oldp+1726,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+1727,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t27));
            tracep->chgBit(oldp+1728,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+1729,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23) 
                                        ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25)) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t27))));
            tracep->chgBit(oldp+1730,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21) 
                                        ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25)) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t24))));
            tracep->chgBit(oldp+1731,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t20) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23))));
            tracep->chgBit(oldp+1732,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t27) 
                                       & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t20) 
                                          & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23)))));
            tracep->chgBit(oldp+1733,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t27) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+1734,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t22))));
            tracep->chgBit(oldp+1735,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t24) 
                                       & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21) 
                                          & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t22)))));
            tracep->chgBit(oldp+1736,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t24) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+1737,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t37));
            tracep->chgBit(oldp+1738,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t38));
            tracep->chgBit(oldp+1739,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t39));
            tracep->chgBit(oldp+1740,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t40));
            tracep->chgBit(oldp+1741,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t41));
            tracep->chgBit(oldp+1742,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t42));
            tracep->chgBit(oldp+1743,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t43));
            tracep->chgBit(oldp+1744,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t44));
            tracep->chgBit(oldp+1745,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t45));
            tracep->chgBit(oldp+1746,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t0));
            tracep->chgBit(oldp+1747,((1U & VL_REDXOR_32(
                                                         (0x300U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+1748,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t2));
            tracep->chgBit(oldp+1749,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t3));
            tracep->chgBit(oldp+1750,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t4));
            tracep->chgBit(oldp+1751,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t5));
            tracep->chgBit(oldp+1752,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6));
            tracep->chgBit(oldp+1753,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t7));
            tracep->chgBit(oldp+1754,((1U & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                             ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                                >> 3U)))));
            tracep->chgBit(oldp+1755,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t9));
            tracep->chgBit(oldp+1756,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t10));
            tracep->chgBit(oldp+1757,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t11));
            tracep->chgBit(oldp+1758,((1U & VL_REDXOR_32(
                                                         (0x14000U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+1759,((1U & VL_REDXOR_32(
                                                         (0x20002U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+1760,((1U & VL_REDXOR_32(
                                                         (0x21000U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+1761,((1U & VL_REDXOR_32(
                                                         (0x210U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+1762,((1U & VL_REDXOR_32(
                                                         (0x880U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+1763,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                              >> 8U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t2)))));
            tracep->chgBit(oldp+1764,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                              >> 0xdU) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t5)))));
            tracep->chgBit(oldp+1765,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t2) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t3))));
            tracep->chgBit(oldp+1766,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t4) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6))));
            tracep->chgBit(oldp+1767,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t22));
            tracep->chgBit(oldp+1768,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t23));
            tracep->chgBit(oldp+1769,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t5) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t7))));
            tracep->chgBit(oldp+1770,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t10))));
            tracep->chgBit(oldp+1771,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t9) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t11))));
            tracep->chgBit(oldp+1772,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t10) 
                                             ^ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                                 >> 0xdU) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t5))))));
            tracep->chgBit(oldp+1773,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t11) 
                                       ^ ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6) 
                                          ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t10)))));
            tracep->chgBit(oldp+1774,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                               >> 4U) 
                                              ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                                 >> 9U)) 
                                             ^ ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t4) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6))))));
            tracep->chgCData(oldp+1775,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT____Vcellout__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__fx),8);
            tracep->chgCData(oldp+1776,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                        [3U]),8);
            tracep->chgIData(oldp+1777,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t1),21);
            tracep->chgIData(oldp+1778,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t2),18);
            tracep->chgBit(oldp+1779,((1U & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                       [3U])));
            tracep->chgBit(oldp+1780,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__top__DOT__y1));
            tracep->chgBit(oldp+1781,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__top__DOT__y2));
            tracep->chgBit(oldp+1782,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__top__DOT__y3));
            tracep->chgBit(oldp+1783,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__top__DOT__y4));
            tracep->chgBit(oldp+1784,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__top__DOT__t0));
            tracep->chgBit(oldp+1785,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__top__DOT__y5));
            tracep->chgBit(oldp+1786,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__top__DOT__t1));
            tracep->chgBit(oldp+1787,((1U & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                             [3U] ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__top__DOT__y5)))));
            tracep->chgBit(oldp+1788,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__top__DOT__y7));
            tracep->chgBit(oldp+1789,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__top__DOT__y8));
            tracep->chgBit(oldp+1790,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__top__DOT__t2));
            tracep->chgBit(oldp+1791,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__top__DOT__t3));
            tracep->chgBit(oldp+1792,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__top__DOT__y3) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__top__DOT__y4))));
            tracep->chgBit(oldp+1793,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__top__DOT__y5) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__top__DOT__t2))));
            tracep->chgBit(oldp+1794,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__top__DOT__t0) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__top__DOT__t2))));
            tracep->chgBit(oldp+1795,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__top__DOT__y12));
            tracep->chgBit(oldp+1796,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__top__DOT__y13));
            tracep->chgBit(oldp+1797,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                              [3U] 
                                              >> 4U) 
                                             ^ vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                             [3U]))));
            tracep->chgBit(oldp+1798,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__top__DOT__y14));
            tracep->chgBit(oldp+1799,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__top__DOT__y15));
            tracep->chgBit(oldp+1800,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                              [3U] 
                                              >> 1U) 
                                             ^ vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                             [3U]))));
            tracep->chgBit(oldp+1801,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__top__DOT__y16));
            tracep->chgBit(oldp+1802,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__top__DOT__y2) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__top__DOT__y16))));
            tracep->chgBit(oldp+1803,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__top__DOT__y2) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__top__DOT__y8))));
            tracep->chgBit(oldp+1804,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__top__DOT__y15) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__top__DOT__y13))));
            tracep->chgBit(oldp+1805,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__top__DOT__y1) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__top__DOT__t3))));
            tracep->chgBit(oldp+1806,((1U & VL_REDXOR_32(
                                                         (0x1008U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1807,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1));
            tracep->chgBit(oldp+1808,((IData)((0x20040U 
                                               == (0x20040U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1809,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t1 
                                              >> 0xaU) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1)))));
            tracep->chgBit(oldp+1810,((0x4001U == (0x4001U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t1))));
            tracep->chgBit(oldp+1811,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t1 
                                               >> 0xeU) 
                                              & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t1) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1)))));
            tracep->chgBit(oldp+1812,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6));
            tracep->chgBit(oldp+1813,((IData)((0x10080U 
                                               == (0x10080U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1814,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t1 
                                               >> 3U) 
                                              ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t1 
                                                 >> 0xcU)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6)))));
            tracep->chgBit(oldp+1815,((IData)((0xa000U 
                                               == (0xa000U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1816,((1U & ((0xa000U 
                                              == (0xa000U 
                                                  & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t1)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6)))));
            tracep->chgBit(oldp+1817,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t11));
            tracep->chgBit(oldp+1818,((IData)((0x100010U 
                                               == (0x100010U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1819,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t13));
            tracep->chgBit(oldp+1820,((IData)((0x104U 
                                               == (0x104U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1821,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t15));
            tracep->chgBit(oldp+1822,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t1 
                                               >> 0xaU) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1)) 
                                             ^ (0x20040U 
                                                == 
                                                (0x20040U 
                                                 & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t1))))));
            tracep->chgBit(oldp+1823,((1U & ((((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t1 
                                                >> 0xeU) 
                                               & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t1) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1)) 
                                             ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t1 
                                                >> 0x12U)))));
            tracep->chgBit(oldp+1824,((1U & ((((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t1 
                                                >> 3U) 
                                               ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t1 
                                                  >> 0xcU)) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6)) 
                                             ^ (0x10080U 
                                                == 
                                                (0x10080U 
                                                 & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t1))))));
            tracep->chgBit(oldp+1825,((1U & (((0xa000U 
                                               == (0xa000U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t1)) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t15)))));
            tracep->chgBit(oldp+1826,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t20));
            tracep->chgBit(oldp+1827,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21));
            tracep->chgBit(oldp+1828,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t22));
            tracep->chgBit(oldp+1829,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23));
            tracep->chgBit(oldp+1830,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t24));
            tracep->chgBit(oldp+1831,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25));
            tracep->chgBit(oldp+1832,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+1833,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t27));
            tracep->chgBit(oldp+1834,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+1835,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23) 
                                        ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25)) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t27))));
            tracep->chgBit(oldp+1836,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21) 
                                        ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25)) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t24))));
            tracep->chgBit(oldp+1837,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t20) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23))));
            tracep->chgBit(oldp+1838,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t27) 
                                       & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t20) 
                                          & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23)))));
            tracep->chgBit(oldp+1839,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t27) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+1840,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t22))));
            tracep->chgBit(oldp+1841,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t24) 
                                       & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21) 
                                          & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t22)))));
            tracep->chgBit(oldp+1842,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t24) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+1843,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t37));
            tracep->chgBit(oldp+1844,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t38));
            tracep->chgBit(oldp+1845,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t39));
            tracep->chgBit(oldp+1846,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t40));
            tracep->chgBit(oldp+1847,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t41));
            tracep->chgBit(oldp+1848,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t42));
            tracep->chgBit(oldp+1849,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t43));
            tracep->chgBit(oldp+1850,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t44));
            tracep->chgBit(oldp+1851,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t45));
            tracep->chgBit(oldp+1852,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__out__DOT__t0));
            tracep->chgBit(oldp+1853,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1));
            tracep->chgBit(oldp+1854,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__out__DOT__t2));
            tracep->chgBit(oldp+1855,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__out__DOT__t3));
            tracep->chgBit(oldp+1856,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__out__DOT__t4));
            tracep->chgBit(oldp+1857,((1U & VL_REDXOR_32(
                                                         (0x20800U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t2)))));
            tracep->chgBit(oldp+1858,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__out__DOT__t6));
            tracep->chgBit(oldp+1859,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__out__DOT__t7));
            tracep->chgBit(oldp+1860,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__out__DOT__t8));
            tracep->chgBit(oldp+1861,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__out__DOT__t9));
            tracep->chgBit(oldp+1862,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__out__DOT__t10));
            tracep->chgBit(oldp+1863,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__out__DOT__t11));
            tracep->chgBit(oldp+1864,((1U & VL_REDXOR_32(
                                                         (0x10002U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t2)))));
            tracep->chgBit(oldp+1865,((1U & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t2 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__out__DOT__t0)))));
            tracep->chgBit(oldp+1866,((1U & VL_REDXOR_32(
                                                         (0x804U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t2)))));
            tracep->chgBit(oldp+1867,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 5U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1)))));
            tracep->chgBit(oldp+1868,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 6U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__out__DOT__t0)))));
            tracep->chgBit(oldp+1869,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 7U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1)))));
            tracep->chgBit(oldp+1870,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 8U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__out__DOT__t8)))));
            tracep->chgBit(oldp+1871,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 0xdU) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__out__DOT__t4)))));
            tracep->chgBit(oldp+1872,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__out__DOT__t0) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1))));
            tracep->chgBit(oldp+1873,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__out__DOT__t7))));
            tracep->chgBit(oldp+1874,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__out__DOT__t3) 
                                             ^ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t2 
                                                 >> 0x10U) 
                                                ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t2 
                                                   >> 1U))))));
            tracep->chgBit(oldp+1875,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t2 
                                               >> 8U) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__out__DOT__t8)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__out__DOT__t2)))));
            tracep->chgBit(oldp+1876,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t2 
                                               >> 5U) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__out__DOT__t9)))));
            tracep->chgBit(oldp+1877,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__out__DOT__t6) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__out__DOT__t10))));
            tracep->chgBit(oldp+1878,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__out__DOT__t7) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__out__DOT__t9))));
            tracep->chgBit(oldp+1879,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__out__DOT__t8) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__out__DOT__t10))));
            tracep->chgBit(oldp+1880,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__out__DOT__t11) 
                                             ^ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t2 
                                                 >> 2U) 
                                                ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t2 
                                                   >> 0xbU))))));
            tracep->chgBit(oldp+1881,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__out__DOT__t11) 
                                             ^ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t2 
                                                 >> 7U) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1))))));
            tracep->chgCData(oldp+1882,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT____Vcellout__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__fx),8);
            tracep->chgCData(oldp+1883,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                        [3U]),8);
            tracep->chgIData(oldp+1884,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1),21);
            tracep->chgIData(oldp+1885,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2),18);
            tracep->chgBit(oldp+1886,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y17));
            tracep->chgBit(oldp+1887,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y16));
            tracep->chgBit(oldp+1888,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y2));
            tracep->chgBit(oldp+1889,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y1));
            tracep->chgBit(oldp+1890,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y18));
            tracep->chgBit(oldp+1891,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t0));
            tracep->chgBit(oldp+1892,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y6));
            tracep->chgBit(oldp+1893,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y14));
            tracep->chgBit(oldp+1894,((1U & (~ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                [3U] 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y1))))));
            tracep->chgBit(oldp+1895,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y8));
            tracep->chgBit(oldp+1896,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y2) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t0))));
            tracep->chgBit(oldp+1897,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y1) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t0))));
            tracep->chgBit(oldp+1898,((1U & (~ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                 [3U] 
                                                 >> 5U) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y1))))));
            tracep->chgBit(oldp+1899,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t1));
            tracep->chgBit(oldp+1900,((1U & (~ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                 [3U] 
                                                 >> 5U) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y14))))));
            tracep->chgBit(oldp+1901,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y18) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t1))));
            tracep->chgBit(oldp+1902,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                              [3U] 
                                              >> 3U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y6)))));
            tracep->chgBit(oldp+1903,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t2));
            tracep->chgBit(oldp+1904,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t3));
            tracep->chgBit(oldp+1905,((1U & (~ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                 [3U] 
                                                 >> 5U) 
                                                ^ (
                                                   vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                   [3U] 
                                                   >> 3U))))));
            tracep->chgBit(oldp+1906,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y16) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t2))));
            tracep->chgBit(oldp+1907,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t1) 
                                             ^ (~ (
                                                   (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                    [3U] 
                                                    >> 5U) 
                                                   ^ 
                                                   (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                    [3U] 
                                                    >> 3U)))))));
            tracep->chgBit(oldp+1908,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y20));
            tracep->chgBit(oldp+1909,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y8) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y20))));
            tracep->chgBit(oldp+1910,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y8) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t3))));
            tracep->chgBit(oldp+1911,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                              [3U] 
                                              >> 7U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t2)))));
            tracep->chgBit(oldp+1912,((1U & VL_REDXOR_32(
                                                         (0x1008U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1913,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1));
            tracep->chgBit(oldp+1914,((IData)((0x20040U 
                                               == (0x20040U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1915,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                              >> 0xaU) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1)))));
            tracep->chgBit(oldp+1916,((0x4001U == (0x4001U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1))));
            tracep->chgBit(oldp+1917,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                               >> 0xeU) 
                                              & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1)))));
            tracep->chgBit(oldp+1918,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6));
            tracep->chgBit(oldp+1919,((IData)((0x10080U 
                                               == (0x10080U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1920,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                               >> 3U) 
                                              ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                 >> 0xcU)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6)))));
            tracep->chgBit(oldp+1921,((IData)((0xa000U 
                                               == (0xa000U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1922,((1U & ((0xa000U 
                                              == (0xa000U 
                                                  & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6)))));
            tracep->chgBit(oldp+1923,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t11));
            tracep->chgBit(oldp+1924,((IData)((0x100010U 
                                               == (0x100010U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1925,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t13));
            tracep->chgBit(oldp+1926,((IData)((0x104U 
                                               == (0x104U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1927,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t15));
            tracep->chgBit(oldp+1928,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                               >> 0xaU) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1)) 
                                             ^ (0x20040U 
                                                == 
                                                (0x20040U 
                                                 & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1))))));
            tracep->chgBit(oldp+1929,((1U & ((((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                >> 0xeU) 
                                               & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1)) 
                                             ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                >> 0x12U)))));
            tracep->chgBit(oldp+1930,((1U & ((((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                >> 3U) 
                                               ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                  >> 0xcU)) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6)) 
                                             ^ (0x10080U 
                                                == 
                                                (0x10080U 
                                                 & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1))))));
            tracep->chgBit(oldp+1931,((1U & (((0xa000U 
                                               == (0xa000U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t15)))));
            tracep->chgBit(oldp+1932,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t20));
            tracep->chgBit(oldp+1933,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21));
            tracep->chgBit(oldp+1934,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t22));
            tracep->chgBit(oldp+1935,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23));
            tracep->chgBit(oldp+1936,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t24));
            tracep->chgBit(oldp+1937,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25));
            tracep->chgBit(oldp+1938,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+1939,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t27));
            tracep->chgBit(oldp+1940,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+1941,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23) 
                                        ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25)) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t27))));
            tracep->chgBit(oldp+1942,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21) 
                                        ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25)) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t24))));
            tracep->chgBit(oldp+1943,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t20) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23))));
            tracep->chgBit(oldp+1944,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t27) 
                                       & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t20) 
                                          & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23)))));
            tracep->chgBit(oldp+1945,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t27) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+1946,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t22))));
            tracep->chgBit(oldp+1947,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t24) 
                                       & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21) 
                                          & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t22)))));
            tracep->chgBit(oldp+1948,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t24) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+1949,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t37));
            tracep->chgBit(oldp+1950,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t38));
            tracep->chgBit(oldp+1951,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t39));
            tracep->chgBit(oldp+1952,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t40));
            tracep->chgBit(oldp+1953,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t41));
            tracep->chgBit(oldp+1954,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t42));
            tracep->chgBit(oldp+1955,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t43));
            tracep->chgBit(oldp+1956,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t44));
            tracep->chgBit(oldp+1957,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t45));
            tracep->chgBit(oldp+1958,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t0));
            tracep->chgBit(oldp+1959,((1U & VL_REDXOR_32(
                                                         (0x300U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+1960,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t2));
            tracep->chgBit(oldp+1961,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t3));
            tracep->chgBit(oldp+1962,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t4));
            tracep->chgBit(oldp+1963,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t5));
            tracep->chgBit(oldp+1964,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6));
            tracep->chgBit(oldp+1965,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t7));
            tracep->chgBit(oldp+1966,((1U & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                             ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                                >> 3U)))));
            tracep->chgBit(oldp+1967,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t9));
            tracep->chgBit(oldp+1968,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t10));
            tracep->chgBit(oldp+1969,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t11));
            tracep->chgBit(oldp+1970,((1U & VL_REDXOR_32(
                                                         (0x14000U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+1971,((1U & VL_REDXOR_32(
                                                         (0x20002U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+1972,((1U & VL_REDXOR_32(
                                                         (0x21000U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+1973,((1U & VL_REDXOR_32(
                                                         (0x210U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+1974,((1U & VL_REDXOR_32(
                                                         (0x880U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+1975,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                              >> 8U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t2)))));
            tracep->chgBit(oldp+1976,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                              >> 0xdU) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t5)))));
            tracep->chgBit(oldp+1977,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t2) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t3))));
            tracep->chgBit(oldp+1978,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t4) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6))));
            tracep->chgBit(oldp+1979,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t22));
            tracep->chgBit(oldp+1980,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t23));
            tracep->chgBit(oldp+1981,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t5) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t7))));
            tracep->chgBit(oldp+1982,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t10))));
            tracep->chgBit(oldp+1983,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t9) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t11))));
            tracep->chgBit(oldp+1984,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t10) 
                                             ^ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                                 >> 0xdU) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t5))))));
            tracep->chgBit(oldp+1985,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t11) 
                                       ^ ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6) 
                                          ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t10)))));
            tracep->chgBit(oldp+1986,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                               >> 4U) 
                                              ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                                 >> 9U)) 
                                             ^ ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t4) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6))))));
            tracep->chgCData(oldp+1987,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT____Vcellout__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__fx),8);
            tracep->chgCData(oldp+1988,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                        [4U]),8);
            tracep->chgIData(oldp+1989,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t1),21);
            tracep->chgIData(oldp+1990,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t2),18);
            tracep->chgBit(oldp+1991,((1U & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                       [4U])));
            tracep->chgBit(oldp+1992,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__top__DOT__y1));
            tracep->chgBit(oldp+1993,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__top__DOT__y2));
            tracep->chgBit(oldp+1994,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__top__DOT__y3));
            tracep->chgBit(oldp+1995,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__top__DOT__y4));
            tracep->chgBit(oldp+1996,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__top__DOT__t0));
            tracep->chgBit(oldp+1997,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__top__DOT__y5));
            tracep->chgBit(oldp+1998,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__top__DOT__t1));
            tracep->chgBit(oldp+1999,((1U & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                             [4U] ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__top__DOT__y5)))));
            tracep->chgBit(oldp+2000,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__top__DOT__y7));
            tracep->chgBit(oldp+2001,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__top__DOT__y8));
            tracep->chgBit(oldp+2002,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__top__DOT__t2));
            tracep->chgBit(oldp+2003,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__top__DOT__t3));
            tracep->chgBit(oldp+2004,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__top__DOT__y3) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__top__DOT__y4))));
            tracep->chgBit(oldp+2005,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__top__DOT__y5) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__top__DOT__t2))));
            tracep->chgBit(oldp+2006,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__top__DOT__t0) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__top__DOT__t2))));
            tracep->chgBit(oldp+2007,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__top__DOT__y12));
            tracep->chgBit(oldp+2008,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__top__DOT__y13));
            tracep->chgBit(oldp+2009,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                              [4U] 
                                              >> 4U) 
                                             ^ vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                             [4U]))));
            tracep->chgBit(oldp+2010,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__top__DOT__y14));
            tracep->chgBit(oldp+2011,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__top__DOT__y15));
            tracep->chgBit(oldp+2012,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                              [4U] 
                                              >> 1U) 
                                             ^ vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                             [4U]))));
            tracep->chgBit(oldp+2013,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__top__DOT__y16));
            tracep->chgBit(oldp+2014,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__top__DOT__y2) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__top__DOT__y16))));
            tracep->chgBit(oldp+2015,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__top__DOT__y2) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__top__DOT__y8))));
            tracep->chgBit(oldp+2016,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__top__DOT__y15) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__top__DOT__y13))));
            tracep->chgBit(oldp+2017,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__top__DOT__y1) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__top__DOT__t3))));
            tracep->chgBit(oldp+2018,((1U & VL_REDXOR_32(
                                                         (0x1008U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2019,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1));
            tracep->chgBit(oldp+2020,((IData)((0x20040U 
                                               == (0x20040U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2021,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t1 
                                              >> 0xaU) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1)))));
            tracep->chgBit(oldp+2022,((0x4001U == (0x4001U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t1))));
            tracep->chgBit(oldp+2023,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t1 
                                               >> 0xeU) 
                                              & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t1) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1)))));
            tracep->chgBit(oldp+2024,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6));
            tracep->chgBit(oldp+2025,((IData)((0x10080U 
                                               == (0x10080U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2026,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t1 
                                               >> 3U) 
                                              ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t1 
                                                 >> 0xcU)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6)))));
            tracep->chgBit(oldp+2027,((IData)((0xa000U 
                                               == (0xa000U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2028,((1U & ((0xa000U 
                                              == (0xa000U 
                                                  & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t1)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6)))));
            tracep->chgBit(oldp+2029,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t11));
            tracep->chgBit(oldp+2030,((IData)((0x100010U 
                                               == (0x100010U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2031,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t13));
            tracep->chgBit(oldp+2032,((IData)((0x104U 
                                               == (0x104U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2033,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t15));
            tracep->chgBit(oldp+2034,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t1 
                                               >> 0xaU) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1)) 
                                             ^ (0x20040U 
                                                == 
                                                (0x20040U 
                                                 & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t1))))));
            tracep->chgBit(oldp+2035,((1U & ((((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t1 
                                                >> 0xeU) 
                                               & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t1) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1)) 
                                             ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t1 
                                                >> 0x12U)))));
            tracep->chgBit(oldp+2036,((1U & ((((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t1 
                                                >> 3U) 
                                               ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t1 
                                                  >> 0xcU)) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6)) 
                                             ^ (0x10080U 
                                                == 
                                                (0x10080U 
                                                 & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t1))))));
            tracep->chgBit(oldp+2037,((1U & (((0xa000U 
                                               == (0xa000U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t1)) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t15)))));
            tracep->chgBit(oldp+2038,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t20));
            tracep->chgBit(oldp+2039,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21));
            tracep->chgBit(oldp+2040,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t22));
            tracep->chgBit(oldp+2041,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23));
            tracep->chgBit(oldp+2042,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t24));
            tracep->chgBit(oldp+2043,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25));
            tracep->chgBit(oldp+2044,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+2045,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t27));
            tracep->chgBit(oldp+2046,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+2047,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23) 
                                        ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25)) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t27))));
            tracep->chgBit(oldp+2048,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21) 
                                        ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25)) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t24))));
            tracep->chgBit(oldp+2049,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t20) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23))));
            tracep->chgBit(oldp+2050,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t27) 
                                       & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t20) 
                                          & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23)))));
            tracep->chgBit(oldp+2051,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t27) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+2052,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t22))));
            tracep->chgBit(oldp+2053,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t24) 
                                       & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21) 
                                          & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t22)))));
            tracep->chgBit(oldp+2054,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t24) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+2055,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t37));
            tracep->chgBit(oldp+2056,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t38));
            tracep->chgBit(oldp+2057,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t39));
            tracep->chgBit(oldp+2058,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t40));
            tracep->chgBit(oldp+2059,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t41));
            tracep->chgBit(oldp+2060,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t42));
            tracep->chgBit(oldp+2061,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t43));
            tracep->chgBit(oldp+2062,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t44));
            tracep->chgBit(oldp+2063,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t45));
            tracep->chgBit(oldp+2064,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__out__DOT__t0));
            tracep->chgBit(oldp+2065,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1));
            tracep->chgBit(oldp+2066,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__out__DOT__t2));
            tracep->chgBit(oldp+2067,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__out__DOT__t3));
            tracep->chgBit(oldp+2068,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__out__DOT__t4));
            tracep->chgBit(oldp+2069,((1U & VL_REDXOR_32(
                                                         (0x20800U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t2)))));
            tracep->chgBit(oldp+2070,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__out__DOT__t6));
            tracep->chgBit(oldp+2071,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__out__DOT__t7));
            tracep->chgBit(oldp+2072,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__out__DOT__t8));
            tracep->chgBit(oldp+2073,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__out__DOT__t9));
            tracep->chgBit(oldp+2074,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__out__DOT__t10));
            tracep->chgBit(oldp+2075,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__out__DOT__t11));
            tracep->chgBit(oldp+2076,((1U & VL_REDXOR_32(
                                                         (0x10002U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t2)))));
            tracep->chgBit(oldp+2077,((1U & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t2 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__out__DOT__t0)))));
            tracep->chgBit(oldp+2078,((1U & VL_REDXOR_32(
                                                         (0x804U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t2)))));
            tracep->chgBit(oldp+2079,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 5U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1)))));
            tracep->chgBit(oldp+2080,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 6U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__out__DOT__t0)))));
            tracep->chgBit(oldp+2081,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 7U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1)))));
            tracep->chgBit(oldp+2082,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 8U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__out__DOT__t8)))));
            tracep->chgBit(oldp+2083,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 0xdU) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__out__DOT__t4)))));
            tracep->chgBit(oldp+2084,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__out__DOT__t0) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1))));
            tracep->chgBit(oldp+2085,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__out__DOT__t7))));
            tracep->chgBit(oldp+2086,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__out__DOT__t3) 
                                             ^ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t2 
                                                 >> 0x10U) 
                                                ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t2 
                                                   >> 1U))))));
            tracep->chgBit(oldp+2087,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t2 
                                               >> 8U) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__out__DOT__t8)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__out__DOT__t2)))));
            tracep->chgBit(oldp+2088,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t2 
                                               >> 5U) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__out__DOT__t9)))));
            tracep->chgBit(oldp+2089,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__out__DOT__t6) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__out__DOT__t10))));
            tracep->chgBit(oldp+2090,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__out__DOT__t7) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__out__DOT__t9))));
            tracep->chgBit(oldp+2091,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__out__DOT__t8) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__out__DOT__t10))));
            tracep->chgBit(oldp+2092,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__out__DOT__t11) 
                                             ^ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t2 
                                                 >> 2U) 
                                                ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t2 
                                                   >> 0xbU))))));
            tracep->chgBit(oldp+2093,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__out__DOT__t11) 
                                             ^ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t2 
                                                 >> 7U) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1))))));
            tracep->chgCData(oldp+2094,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT____Vcellout__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__fx),8);
            tracep->chgCData(oldp+2095,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                        [4U]),8);
            tracep->chgIData(oldp+2096,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1),21);
            tracep->chgIData(oldp+2097,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2),18);
            tracep->chgBit(oldp+2098,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y17));
            tracep->chgBit(oldp+2099,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y16));
            tracep->chgBit(oldp+2100,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y2));
            tracep->chgBit(oldp+2101,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y1));
            tracep->chgBit(oldp+2102,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y18));
            tracep->chgBit(oldp+2103,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t0));
            tracep->chgBit(oldp+2104,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y6));
            tracep->chgBit(oldp+2105,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y14));
            tracep->chgBit(oldp+2106,((1U & (~ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                [4U] 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y1))))));
            tracep->chgBit(oldp+2107,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y8));
            tracep->chgBit(oldp+2108,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y2) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t0))));
            tracep->chgBit(oldp+2109,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y1) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t0))));
            tracep->chgBit(oldp+2110,((1U & (~ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                 [4U] 
                                                 >> 5U) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y1))))));
            tracep->chgBit(oldp+2111,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t1));
            tracep->chgBit(oldp+2112,((1U & (~ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                 [4U] 
                                                 >> 5U) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y14))))));
            tracep->chgBit(oldp+2113,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y18) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t1))));
            tracep->chgBit(oldp+2114,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                              [4U] 
                                              >> 3U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y6)))));
            tracep->chgBit(oldp+2115,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t2));
            tracep->chgBit(oldp+2116,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t3));
            tracep->chgBit(oldp+2117,((1U & (~ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                 [4U] 
                                                 >> 5U) 
                                                ^ (
                                                   vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                   [4U] 
                                                   >> 3U))))));
            tracep->chgBit(oldp+2118,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y16) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t2))));
            tracep->chgBit(oldp+2119,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t1) 
                                             ^ (~ (
                                                   (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                    [4U] 
                                                    >> 5U) 
                                                   ^ 
                                                   (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                    [4U] 
                                                    >> 3U)))))));
            tracep->chgBit(oldp+2120,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y20));
            tracep->chgBit(oldp+2121,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y8) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y20))));
            tracep->chgBit(oldp+2122,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y8) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t3))));
            tracep->chgBit(oldp+2123,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                              [4U] 
                                              >> 7U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t2)))));
            tracep->chgBit(oldp+2124,((1U & VL_REDXOR_32(
                                                         (0x1008U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2125,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1));
            tracep->chgBit(oldp+2126,((IData)((0x20040U 
                                               == (0x20040U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2127,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                              >> 0xaU) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1)))));
            tracep->chgBit(oldp+2128,((0x4001U == (0x4001U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1))));
            tracep->chgBit(oldp+2129,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                               >> 0xeU) 
                                              & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1)))));
            tracep->chgBit(oldp+2130,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6));
            tracep->chgBit(oldp+2131,((IData)((0x10080U 
                                               == (0x10080U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2132,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                               >> 3U) 
                                              ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                 >> 0xcU)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6)))));
            tracep->chgBit(oldp+2133,((IData)((0xa000U 
                                               == (0xa000U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2134,((1U & ((0xa000U 
                                              == (0xa000U 
                                                  & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6)))));
            tracep->chgBit(oldp+2135,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t11));
            tracep->chgBit(oldp+2136,((IData)((0x100010U 
                                               == (0x100010U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2137,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t13));
            tracep->chgBit(oldp+2138,((IData)((0x104U 
                                               == (0x104U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2139,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t15));
            tracep->chgBit(oldp+2140,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                               >> 0xaU) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1)) 
                                             ^ (0x20040U 
                                                == 
                                                (0x20040U 
                                                 & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1))))));
            tracep->chgBit(oldp+2141,((1U & ((((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                >> 0xeU) 
                                               & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1)) 
                                             ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                >> 0x12U)))));
            tracep->chgBit(oldp+2142,((1U & ((((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                >> 3U) 
                                               ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                  >> 0xcU)) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6)) 
                                             ^ (0x10080U 
                                                == 
                                                (0x10080U 
                                                 & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1))))));
            tracep->chgBit(oldp+2143,((1U & (((0xa000U 
                                               == (0xa000U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t15)))));
            tracep->chgBit(oldp+2144,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t20));
            tracep->chgBit(oldp+2145,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21));
            tracep->chgBit(oldp+2146,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t22));
            tracep->chgBit(oldp+2147,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23));
            tracep->chgBit(oldp+2148,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t24));
            tracep->chgBit(oldp+2149,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25));
            tracep->chgBit(oldp+2150,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+2151,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t27));
            tracep->chgBit(oldp+2152,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+2153,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23) 
                                        ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25)) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t27))));
            tracep->chgBit(oldp+2154,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21) 
                                        ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25)) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t24))));
            tracep->chgBit(oldp+2155,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t20) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23))));
            tracep->chgBit(oldp+2156,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t27) 
                                       & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t20) 
                                          & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23)))));
            tracep->chgBit(oldp+2157,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t27) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+2158,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t22))));
            tracep->chgBit(oldp+2159,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t24) 
                                       & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21) 
                                          & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t22)))));
            tracep->chgBit(oldp+2160,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t24) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+2161,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t37));
            tracep->chgBit(oldp+2162,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t38));
            tracep->chgBit(oldp+2163,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t39));
            tracep->chgBit(oldp+2164,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t40));
            tracep->chgBit(oldp+2165,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t41));
            tracep->chgBit(oldp+2166,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t42));
            tracep->chgBit(oldp+2167,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t43));
            tracep->chgBit(oldp+2168,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t44));
            tracep->chgBit(oldp+2169,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t45));
            tracep->chgBit(oldp+2170,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t0));
            tracep->chgBit(oldp+2171,((1U & VL_REDXOR_32(
                                                         (0x300U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+2172,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t2));
            tracep->chgBit(oldp+2173,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t3));
            tracep->chgBit(oldp+2174,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t4));
            tracep->chgBit(oldp+2175,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t5));
            tracep->chgBit(oldp+2176,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6));
            tracep->chgBit(oldp+2177,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t7));
            tracep->chgBit(oldp+2178,((1U & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                             ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                                >> 3U)))));
            tracep->chgBit(oldp+2179,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t9));
            tracep->chgBit(oldp+2180,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t10));
            tracep->chgBit(oldp+2181,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t11));
            tracep->chgBit(oldp+2182,((1U & VL_REDXOR_32(
                                                         (0x14000U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+2183,((1U & VL_REDXOR_32(
                                                         (0x20002U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+2184,((1U & VL_REDXOR_32(
                                                         (0x21000U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+2185,((1U & VL_REDXOR_32(
                                                         (0x210U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+2186,((1U & VL_REDXOR_32(
                                                         (0x880U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+2187,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                              >> 8U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t2)))));
            tracep->chgBit(oldp+2188,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                              >> 0xdU) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t5)))));
            tracep->chgBit(oldp+2189,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t2) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t3))));
            tracep->chgBit(oldp+2190,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t4) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6))));
            tracep->chgBit(oldp+2191,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t22));
            tracep->chgBit(oldp+2192,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t23));
            tracep->chgBit(oldp+2193,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t5) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t7))));
            tracep->chgBit(oldp+2194,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t10))));
            tracep->chgBit(oldp+2195,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t9) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t11))));
            tracep->chgBit(oldp+2196,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t10) 
                                             ^ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                                 >> 0xdU) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t5))))));
            tracep->chgBit(oldp+2197,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t11) 
                                       ^ ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6) 
                                          ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t10)))));
            tracep->chgBit(oldp+2198,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                               >> 4U) 
                                              ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                                 >> 9U)) 
                                             ^ ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t4) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6))))));
            tracep->chgCData(oldp+2199,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT____Vcellout__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__fx),8);
            tracep->chgCData(oldp+2200,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                        [5U]),8);
            tracep->chgIData(oldp+2201,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t1),21);
            tracep->chgIData(oldp+2202,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t2),18);
            tracep->chgBit(oldp+2203,((1U & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                       [5U])));
            tracep->chgBit(oldp+2204,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__top__DOT__y1));
            tracep->chgBit(oldp+2205,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__top__DOT__y2));
            tracep->chgBit(oldp+2206,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__top__DOT__y3));
            tracep->chgBit(oldp+2207,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__top__DOT__y4));
            tracep->chgBit(oldp+2208,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__top__DOT__t0));
            tracep->chgBit(oldp+2209,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__top__DOT__y5));
            tracep->chgBit(oldp+2210,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__top__DOT__t1));
            tracep->chgBit(oldp+2211,((1U & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                             [5U] ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__top__DOT__y5)))));
            tracep->chgBit(oldp+2212,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__top__DOT__y7));
            tracep->chgBit(oldp+2213,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__top__DOT__y8));
            tracep->chgBit(oldp+2214,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__top__DOT__t2));
            tracep->chgBit(oldp+2215,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__top__DOT__t3));
            tracep->chgBit(oldp+2216,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__top__DOT__y3) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__top__DOT__y4))));
            tracep->chgBit(oldp+2217,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__top__DOT__y5) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__top__DOT__t2))));
            tracep->chgBit(oldp+2218,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__top__DOT__t0) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__top__DOT__t2))));
            tracep->chgBit(oldp+2219,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__top__DOT__y12));
            tracep->chgBit(oldp+2220,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__top__DOT__y13));
            tracep->chgBit(oldp+2221,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                              [5U] 
                                              >> 4U) 
                                             ^ vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                             [5U]))));
            tracep->chgBit(oldp+2222,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__top__DOT__y14));
            tracep->chgBit(oldp+2223,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__top__DOT__y15));
            tracep->chgBit(oldp+2224,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                              [5U] 
                                              >> 1U) 
                                             ^ vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                             [5U]))));
            tracep->chgBit(oldp+2225,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__top__DOT__y16));
            tracep->chgBit(oldp+2226,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__top__DOT__y2) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__top__DOT__y16))));
            tracep->chgBit(oldp+2227,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__top__DOT__y2) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__top__DOT__y8))));
            tracep->chgBit(oldp+2228,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__top__DOT__y15) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__top__DOT__y13))));
            tracep->chgBit(oldp+2229,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__top__DOT__y1) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__top__DOT__t3))));
            tracep->chgBit(oldp+2230,((1U & VL_REDXOR_32(
                                                         (0x1008U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2231,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1));
            tracep->chgBit(oldp+2232,((IData)((0x20040U 
                                               == (0x20040U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2233,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t1 
                                              >> 0xaU) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1)))));
            tracep->chgBit(oldp+2234,((0x4001U == (0x4001U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t1))));
            tracep->chgBit(oldp+2235,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t1 
                                               >> 0xeU) 
                                              & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t1) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1)))));
            tracep->chgBit(oldp+2236,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6));
            tracep->chgBit(oldp+2237,((IData)((0x10080U 
                                               == (0x10080U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2238,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t1 
                                               >> 3U) 
                                              ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t1 
                                                 >> 0xcU)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6)))));
            tracep->chgBit(oldp+2239,((IData)((0xa000U 
                                               == (0xa000U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2240,((1U & ((0xa000U 
                                              == (0xa000U 
                                                  & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t1)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6)))));
            tracep->chgBit(oldp+2241,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t11));
            tracep->chgBit(oldp+2242,((IData)((0x100010U 
                                               == (0x100010U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2243,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t13));
            tracep->chgBit(oldp+2244,((IData)((0x104U 
                                               == (0x104U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2245,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t15));
            tracep->chgBit(oldp+2246,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t1 
                                               >> 0xaU) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1)) 
                                             ^ (0x20040U 
                                                == 
                                                (0x20040U 
                                                 & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t1))))));
            tracep->chgBit(oldp+2247,((1U & ((((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t1 
                                                >> 0xeU) 
                                               & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t1) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1)) 
                                             ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t1 
                                                >> 0x12U)))));
            tracep->chgBit(oldp+2248,((1U & ((((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t1 
                                                >> 3U) 
                                               ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t1 
                                                  >> 0xcU)) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6)) 
                                             ^ (0x10080U 
                                                == 
                                                (0x10080U 
                                                 & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t1))))));
            tracep->chgBit(oldp+2249,((1U & (((0xa000U 
                                               == (0xa000U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t1)) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t15)))));
            tracep->chgBit(oldp+2250,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t20));
            tracep->chgBit(oldp+2251,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21));
            tracep->chgBit(oldp+2252,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t22));
            tracep->chgBit(oldp+2253,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23));
            tracep->chgBit(oldp+2254,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t24));
            tracep->chgBit(oldp+2255,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25));
            tracep->chgBit(oldp+2256,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+2257,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t27));
            tracep->chgBit(oldp+2258,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+2259,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23) 
                                        ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25)) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t27))));
            tracep->chgBit(oldp+2260,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21) 
                                        ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25)) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t24))));
            tracep->chgBit(oldp+2261,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t20) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23))));
            tracep->chgBit(oldp+2262,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t27) 
                                       & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t20) 
                                          & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23)))));
            tracep->chgBit(oldp+2263,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t27) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+2264,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t22))));
            tracep->chgBit(oldp+2265,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t24) 
                                       & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21) 
                                          & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t22)))));
            tracep->chgBit(oldp+2266,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t24) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+2267,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t37));
            tracep->chgBit(oldp+2268,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t38));
            tracep->chgBit(oldp+2269,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t39));
            tracep->chgBit(oldp+2270,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t40));
            tracep->chgBit(oldp+2271,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t41));
            tracep->chgBit(oldp+2272,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t42));
            tracep->chgBit(oldp+2273,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t43));
            tracep->chgBit(oldp+2274,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t44));
            tracep->chgBit(oldp+2275,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t45));
            tracep->chgBit(oldp+2276,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__out__DOT__t0));
            tracep->chgBit(oldp+2277,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1));
            tracep->chgBit(oldp+2278,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__out__DOT__t2));
            tracep->chgBit(oldp+2279,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__out__DOT__t3));
            tracep->chgBit(oldp+2280,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__out__DOT__t4));
            tracep->chgBit(oldp+2281,((1U & VL_REDXOR_32(
                                                         (0x20800U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t2)))));
            tracep->chgBit(oldp+2282,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__out__DOT__t6));
            tracep->chgBit(oldp+2283,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__out__DOT__t7));
            tracep->chgBit(oldp+2284,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__out__DOT__t8));
            tracep->chgBit(oldp+2285,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__out__DOT__t9));
            tracep->chgBit(oldp+2286,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__out__DOT__t10));
            tracep->chgBit(oldp+2287,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__out__DOT__t11));
            tracep->chgBit(oldp+2288,((1U & VL_REDXOR_32(
                                                         (0x10002U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t2)))));
            tracep->chgBit(oldp+2289,((1U & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t2 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__out__DOT__t0)))));
            tracep->chgBit(oldp+2290,((1U & VL_REDXOR_32(
                                                         (0x804U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t2)))));
            tracep->chgBit(oldp+2291,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 5U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1)))));
            tracep->chgBit(oldp+2292,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 6U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__out__DOT__t0)))));
            tracep->chgBit(oldp+2293,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 7U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1)))));
            tracep->chgBit(oldp+2294,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 8U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__out__DOT__t8)))));
            tracep->chgBit(oldp+2295,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 0xdU) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__out__DOT__t4)))));
            tracep->chgBit(oldp+2296,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__out__DOT__t0) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1))));
            tracep->chgBit(oldp+2297,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__out__DOT__t7))));
            tracep->chgBit(oldp+2298,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__out__DOT__t3) 
                                             ^ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t2 
                                                 >> 0x10U) 
                                                ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t2 
                                                   >> 1U))))));
            tracep->chgBit(oldp+2299,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t2 
                                               >> 8U) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__out__DOT__t8)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__out__DOT__t2)))));
            tracep->chgBit(oldp+2300,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t2 
                                               >> 5U) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__out__DOT__t9)))));
            tracep->chgBit(oldp+2301,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__out__DOT__t6) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__out__DOT__t10))));
            tracep->chgBit(oldp+2302,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__out__DOT__t7) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__out__DOT__t9))));
            tracep->chgBit(oldp+2303,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__out__DOT__t8) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__out__DOT__t10))));
            tracep->chgBit(oldp+2304,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__out__DOT__t11) 
                                             ^ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t2 
                                                 >> 2U) 
                                                ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t2 
                                                   >> 0xbU))))));
            tracep->chgBit(oldp+2305,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__out__DOT__t11) 
                                             ^ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t2 
                                                 >> 7U) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1))))));
            tracep->chgCData(oldp+2306,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT____Vcellout__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__fx),8);
            tracep->chgCData(oldp+2307,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                        [5U]),8);
            tracep->chgIData(oldp+2308,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1),21);
            tracep->chgIData(oldp+2309,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2),18);
            tracep->chgBit(oldp+2310,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y17));
            tracep->chgBit(oldp+2311,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y16));
            tracep->chgBit(oldp+2312,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y2));
            tracep->chgBit(oldp+2313,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y1));
            tracep->chgBit(oldp+2314,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y18));
            tracep->chgBit(oldp+2315,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t0));
            tracep->chgBit(oldp+2316,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y6));
            tracep->chgBit(oldp+2317,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y14));
            tracep->chgBit(oldp+2318,((1U & (~ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                [5U] 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y1))))));
            tracep->chgBit(oldp+2319,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y8));
            tracep->chgBit(oldp+2320,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y2) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t0))));
            tracep->chgBit(oldp+2321,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y1) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t0))));
            tracep->chgBit(oldp+2322,((1U & (~ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                 [5U] 
                                                 >> 5U) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y1))))));
            tracep->chgBit(oldp+2323,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t1));
            tracep->chgBit(oldp+2324,((1U & (~ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                 [5U] 
                                                 >> 5U) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y14))))));
            tracep->chgBit(oldp+2325,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y18) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t1))));
            tracep->chgBit(oldp+2326,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                              [5U] 
                                              >> 3U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y6)))));
            tracep->chgBit(oldp+2327,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t2));
            tracep->chgBit(oldp+2328,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t3));
            tracep->chgBit(oldp+2329,((1U & (~ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                 [5U] 
                                                 >> 5U) 
                                                ^ (
                                                   vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                   [5U] 
                                                   >> 3U))))));
            tracep->chgBit(oldp+2330,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y16) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t2))));
            tracep->chgBit(oldp+2331,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t1) 
                                             ^ (~ (
                                                   (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                    [5U] 
                                                    >> 5U) 
                                                   ^ 
                                                   (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                    [5U] 
                                                    >> 3U)))))));
            tracep->chgBit(oldp+2332,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y20));
            tracep->chgBit(oldp+2333,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y8) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y20))));
            tracep->chgBit(oldp+2334,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y8) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t3))));
            tracep->chgBit(oldp+2335,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                              [5U] 
                                              >> 7U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t2)))));
            tracep->chgBit(oldp+2336,((1U & VL_REDXOR_32(
                                                         (0x1008U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2337,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1));
            tracep->chgBit(oldp+2338,((IData)((0x20040U 
                                               == (0x20040U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2339,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                              >> 0xaU) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1)))));
            tracep->chgBit(oldp+2340,((0x4001U == (0x4001U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1))));
            tracep->chgBit(oldp+2341,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                               >> 0xeU) 
                                              & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1)))));
            tracep->chgBit(oldp+2342,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6));
            tracep->chgBit(oldp+2343,((IData)((0x10080U 
                                               == (0x10080U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2344,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                               >> 3U) 
                                              ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                 >> 0xcU)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6)))));
            tracep->chgBit(oldp+2345,((IData)((0xa000U 
                                               == (0xa000U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2346,((1U & ((0xa000U 
                                              == (0xa000U 
                                                  & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6)))));
            tracep->chgBit(oldp+2347,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t11));
            tracep->chgBit(oldp+2348,((IData)((0x100010U 
                                               == (0x100010U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2349,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t13));
            tracep->chgBit(oldp+2350,((IData)((0x104U 
                                               == (0x104U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2351,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t15));
            tracep->chgBit(oldp+2352,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                               >> 0xaU) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1)) 
                                             ^ (0x20040U 
                                                == 
                                                (0x20040U 
                                                 & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1))))));
            tracep->chgBit(oldp+2353,((1U & ((((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                >> 0xeU) 
                                               & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1)) 
                                             ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                >> 0x12U)))));
            tracep->chgBit(oldp+2354,((1U & ((((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                >> 3U) 
                                               ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                  >> 0xcU)) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6)) 
                                             ^ (0x10080U 
                                                == 
                                                (0x10080U 
                                                 & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1))))));
            tracep->chgBit(oldp+2355,((1U & (((0xa000U 
                                               == (0xa000U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t15)))));
            tracep->chgBit(oldp+2356,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t20));
            tracep->chgBit(oldp+2357,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21));
            tracep->chgBit(oldp+2358,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t22));
            tracep->chgBit(oldp+2359,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23));
            tracep->chgBit(oldp+2360,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t24));
            tracep->chgBit(oldp+2361,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25));
            tracep->chgBit(oldp+2362,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+2363,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t27));
            tracep->chgBit(oldp+2364,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+2365,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23) 
                                        ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25)) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t27))));
            tracep->chgBit(oldp+2366,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21) 
                                        ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25)) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t24))));
            tracep->chgBit(oldp+2367,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t20) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23))));
            tracep->chgBit(oldp+2368,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t27) 
                                       & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t20) 
                                          & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23)))));
            tracep->chgBit(oldp+2369,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t27) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+2370,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t22))));
            tracep->chgBit(oldp+2371,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t24) 
                                       & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21) 
                                          & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t22)))));
            tracep->chgBit(oldp+2372,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t24) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+2373,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t37));
            tracep->chgBit(oldp+2374,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t38));
            tracep->chgBit(oldp+2375,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t39));
            tracep->chgBit(oldp+2376,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t40));
            tracep->chgBit(oldp+2377,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t41));
            tracep->chgBit(oldp+2378,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t42));
            tracep->chgBit(oldp+2379,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t43));
            tracep->chgBit(oldp+2380,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t44));
            tracep->chgBit(oldp+2381,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t45));
            tracep->chgBit(oldp+2382,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t0));
            tracep->chgBit(oldp+2383,((1U & VL_REDXOR_32(
                                                         (0x300U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+2384,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t2));
            tracep->chgBit(oldp+2385,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t3));
            tracep->chgBit(oldp+2386,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t4));
            tracep->chgBit(oldp+2387,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t5));
            tracep->chgBit(oldp+2388,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6));
            tracep->chgBit(oldp+2389,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t7));
            tracep->chgBit(oldp+2390,((1U & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                             ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                                >> 3U)))));
            tracep->chgBit(oldp+2391,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t9));
            tracep->chgBit(oldp+2392,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t10));
            tracep->chgBit(oldp+2393,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t11));
            tracep->chgBit(oldp+2394,((1U & VL_REDXOR_32(
                                                         (0x14000U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+2395,((1U & VL_REDXOR_32(
                                                         (0x20002U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+2396,((1U & VL_REDXOR_32(
                                                         (0x21000U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+2397,((1U & VL_REDXOR_32(
                                                         (0x210U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+2398,((1U & VL_REDXOR_32(
                                                         (0x880U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+2399,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                              >> 8U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t2)))));
            tracep->chgBit(oldp+2400,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                              >> 0xdU) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t5)))));
            tracep->chgBit(oldp+2401,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t2) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t3))));
            tracep->chgBit(oldp+2402,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t4) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6))));
            tracep->chgBit(oldp+2403,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t22));
            tracep->chgBit(oldp+2404,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t23));
            tracep->chgBit(oldp+2405,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t5) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t7))));
            tracep->chgBit(oldp+2406,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t10))));
            tracep->chgBit(oldp+2407,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t9) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t11))));
            tracep->chgBit(oldp+2408,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t10) 
                                             ^ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                                 >> 0xdU) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t5))))));
            tracep->chgBit(oldp+2409,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t11) 
                                       ^ ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6) 
                                          ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t10)))));
            tracep->chgBit(oldp+2410,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                               >> 4U) 
                                              ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                                 >> 9U)) 
                                             ^ ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t4) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6))))));
            tracep->chgCData(oldp+2411,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT____Vcellout__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__fx),8);
            tracep->chgCData(oldp+2412,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                        [6U]),8);
            tracep->chgIData(oldp+2413,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t1),21);
            tracep->chgIData(oldp+2414,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t2),18);
            tracep->chgBit(oldp+2415,((1U & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                       [6U])));
            tracep->chgBit(oldp+2416,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__top__DOT__y1));
            tracep->chgBit(oldp+2417,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__top__DOT__y2));
            tracep->chgBit(oldp+2418,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__top__DOT__y3));
            tracep->chgBit(oldp+2419,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__top__DOT__y4));
            tracep->chgBit(oldp+2420,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__top__DOT__t0));
            tracep->chgBit(oldp+2421,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__top__DOT__y5));
            tracep->chgBit(oldp+2422,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__top__DOT__t1));
            tracep->chgBit(oldp+2423,((1U & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                             [6U] ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__top__DOT__y5)))));
            tracep->chgBit(oldp+2424,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__top__DOT__y7));
            tracep->chgBit(oldp+2425,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__top__DOT__y8));
            tracep->chgBit(oldp+2426,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__top__DOT__t2));
            tracep->chgBit(oldp+2427,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__top__DOT__t3));
            tracep->chgBit(oldp+2428,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__top__DOT__y3) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__top__DOT__y4))));
            tracep->chgBit(oldp+2429,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__top__DOT__y5) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__top__DOT__t2))));
            tracep->chgBit(oldp+2430,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__top__DOT__t0) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__top__DOT__t2))));
            tracep->chgBit(oldp+2431,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__top__DOT__y12));
            tracep->chgBit(oldp+2432,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__top__DOT__y13));
            tracep->chgBit(oldp+2433,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                              [6U] 
                                              >> 4U) 
                                             ^ vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                             [6U]))));
            tracep->chgBit(oldp+2434,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__top__DOT__y14));
            tracep->chgBit(oldp+2435,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__top__DOT__y15));
            tracep->chgBit(oldp+2436,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                              [6U] 
                                              >> 1U) 
                                             ^ vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                             [6U]))));
            tracep->chgBit(oldp+2437,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__top__DOT__y16));
            tracep->chgBit(oldp+2438,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__top__DOT__y2) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__top__DOT__y16))));
            tracep->chgBit(oldp+2439,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__top__DOT__y2) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__top__DOT__y8))));
            tracep->chgBit(oldp+2440,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__top__DOT__y15) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__top__DOT__y13))));
            tracep->chgBit(oldp+2441,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__top__DOT__y1) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__top__DOT__t3))));
            tracep->chgBit(oldp+2442,((1U & VL_REDXOR_32(
                                                         (0x1008U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2443,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1));
            tracep->chgBit(oldp+2444,((IData)((0x20040U 
                                               == (0x20040U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2445,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t1 
                                              >> 0xaU) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1)))));
            tracep->chgBit(oldp+2446,((0x4001U == (0x4001U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t1))));
            tracep->chgBit(oldp+2447,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t1 
                                               >> 0xeU) 
                                              & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t1) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1)))));
            tracep->chgBit(oldp+2448,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6));
            tracep->chgBit(oldp+2449,((IData)((0x10080U 
                                               == (0x10080U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2450,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t1 
                                               >> 3U) 
                                              ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t1 
                                                 >> 0xcU)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6)))));
            tracep->chgBit(oldp+2451,((IData)((0xa000U 
                                               == (0xa000U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2452,((1U & ((0xa000U 
                                              == (0xa000U 
                                                  & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t1)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6)))));
            tracep->chgBit(oldp+2453,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t11));
            tracep->chgBit(oldp+2454,((IData)((0x100010U 
                                               == (0x100010U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2455,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t13));
            tracep->chgBit(oldp+2456,((IData)((0x104U 
                                               == (0x104U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2457,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t15));
            tracep->chgBit(oldp+2458,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t1 
                                               >> 0xaU) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1)) 
                                             ^ (0x20040U 
                                                == 
                                                (0x20040U 
                                                 & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t1))))));
            tracep->chgBit(oldp+2459,((1U & ((((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t1 
                                                >> 0xeU) 
                                               & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t1) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1)) 
                                             ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t1 
                                                >> 0x12U)))));
            tracep->chgBit(oldp+2460,((1U & ((((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t1 
                                                >> 3U) 
                                               ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t1 
                                                  >> 0xcU)) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6)) 
                                             ^ (0x10080U 
                                                == 
                                                (0x10080U 
                                                 & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t1))))));
            tracep->chgBit(oldp+2461,((1U & (((0xa000U 
                                               == (0xa000U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t1)) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t15)))));
            tracep->chgBit(oldp+2462,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t20));
            tracep->chgBit(oldp+2463,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21));
            tracep->chgBit(oldp+2464,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t22));
            tracep->chgBit(oldp+2465,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23));
            tracep->chgBit(oldp+2466,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t24));
            tracep->chgBit(oldp+2467,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25));
            tracep->chgBit(oldp+2468,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+2469,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t27));
            tracep->chgBit(oldp+2470,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+2471,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23) 
                                        ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25)) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t27))));
            tracep->chgBit(oldp+2472,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21) 
                                        ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25)) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t24))));
            tracep->chgBit(oldp+2473,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t20) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23))));
            tracep->chgBit(oldp+2474,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t27) 
                                       & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t20) 
                                          & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23)))));
            tracep->chgBit(oldp+2475,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t27) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+2476,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t22))));
            tracep->chgBit(oldp+2477,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t24) 
                                       & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21) 
                                          & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t22)))));
            tracep->chgBit(oldp+2478,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t24) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+2479,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t37));
            tracep->chgBit(oldp+2480,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t38));
            tracep->chgBit(oldp+2481,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t39));
            tracep->chgBit(oldp+2482,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t40));
            tracep->chgBit(oldp+2483,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t41));
            tracep->chgBit(oldp+2484,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t42));
            tracep->chgBit(oldp+2485,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t43));
            tracep->chgBit(oldp+2486,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t44));
            tracep->chgBit(oldp+2487,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t45));
            tracep->chgBit(oldp+2488,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__out__DOT__t0));
            tracep->chgBit(oldp+2489,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1));
            tracep->chgBit(oldp+2490,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__out__DOT__t2));
            tracep->chgBit(oldp+2491,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__out__DOT__t3));
            tracep->chgBit(oldp+2492,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__out__DOT__t4));
            tracep->chgBit(oldp+2493,((1U & VL_REDXOR_32(
                                                         (0x20800U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t2)))));
            tracep->chgBit(oldp+2494,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__out__DOT__t6));
            tracep->chgBit(oldp+2495,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__out__DOT__t7));
            tracep->chgBit(oldp+2496,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__out__DOT__t8));
            tracep->chgBit(oldp+2497,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__out__DOT__t9));
            tracep->chgBit(oldp+2498,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__out__DOT__t10));
            tracep->chgBit(oldp+2499,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__out__DOT__t11));
            tracep->chgBit(oldp+2500,((1U & VL_REDXOR_32(
                                                         (0x10002U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t2)))));
            tracep->chgBit(oldp+2501,((1U & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t2 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__out__DOT__t0)))));
            tracep->chgBit(oldp+2502,((1U & VL_REDXOR_32(
                                                         (0x804U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t2)))));
            tracep->chgBit(oldp+2503,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 5U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1)))));
            tracep->chgBit(oldp+2504,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 6U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__out__DOT__t0)))));
            tracep->chgBit(oldp+2505,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 7U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1)))));
            tracep->chgBit(oldp+2506,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 8U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__out__DOT__t8)))));
            tracep->chgBit(oldp+2507,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 0xdU) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__out__DOT__t4)))));
            tracep->chgBit(oldp+2508,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__out__DOT__t0) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1))));
            tracep->chgBit(oldp+2509,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__out__DOT__t7))));
            tracep->chgBit(oldp+2510,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__out__DOT__t3) 
                                             ^ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t2 
                                                 >> 0x10U) 
                                                ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t2 
                                                   >> 1U))))));
            tracep->chgBit(oldp+2511,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t2 
                                               >> 8U) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__out__DOT__t8)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__out__DOT__t2)))));
            tracep->chgBit(oldp+2512,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t2 
                                               >> 5U) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__out__DOT__t9)))));
            tracep->chgBit(oldp+2513,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__out__DOT__t6) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__out__DOT__t10))));
            tracep->chgBit(oldp+2514,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__out__DOT__t7) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__out__DOT__t9))));
            tracep->chgBit(oldp+2515,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__out__DOT__t8) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__out__DOT__t10))));
            tracep->chgBit(oldp+2516,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__out__DOT__t11) 
                                             ^ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t2 
                                                 >> 2U) 
                                                ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t2 
                                                   >> 0xbU))))));
            tracep->chgBit(oldp+2517,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__out__DOT__t11) 
                                             ^ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t2 
                                                 >> 7U) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1))))));
            tracep->chgCData(oldp+2518,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT____Vcellout__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__fx),8);
            tracep->chgCData(oldp+2519,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                        [6U]),8);
            tracep->chgIData(oldp+2520,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1),21);
            tracep->chgIData(oldp+2521,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2),18);
            tracep->chgBit(oldp+2522,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y17));
            tracep->chgBit(oldp+2523,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y16));
            tracep->chgBit(oldp+2524,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y2));
            tracep->chgBit(oldp+2525,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y1));
            tracep->chgBit(oldp+2526,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y18));
            tracep->chgBit(oldp+2527,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t0));
            tracep->chgBit(oldp+2528,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y6));
            tracep->chgBit(oldp+2529,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y14));
            tracep->chgBit(oldp+2530,((1U & (~ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                [6U] 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y1))))));
            tracep->chgBit(oldp+2531,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y8));
            tracep->chgBit(oldp+2532,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y2) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t0))));
            tracep->chgBit(oldp+2533,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y1) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t0))));
            tracep->chgBit(oldp+2534,((1U & (~ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                 [6U] 
                                                 >> 5U) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y1))))));
            tracep->chgBit(oldp+2535,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t1));
            tracep->chgBit(oldp+2536,((1U & (~ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                 [6U] 
                                                 >> 5U) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y14))))));
            tracep->chgBit(oldp+2537,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y18) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t1))));
            tracep->chgBit(oldp+2538,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                              [6U] 
                                              >> 3U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y6)))));
            tracep->chgBit(oldp+2539,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t2));
            tracep->chgBit(oldp+2540,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t3));
            tracep->chgBit(oldp+2541,((1U & (~ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                 [6U] 
                                                 >> 5U) 
                                                ^ (
                                                   vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                   [6U] 
                                                   >> 3U))))));
            tracep->chgBit(oldp+2542,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y16) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t2))));
            tracep->chgBit(oldp+2543,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t1) 
                                             ^ (~ (
                                                   (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                    [6U] 
                                                    >> 5U) 
                                                   ^ 
                                                   (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                    [6U] 
                                                    >> 3U)))))));
            tracep->chgBit(oldp+2544,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y20));
            tracep->chgBit(oldp+2545,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y8) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y20))));
            tracep->chgBit(oldp+2546,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y8) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t3))));
            tracep->chgBit(oldp+2547,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                              [6U] 
                                              >> 7U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t2)))));
            tracep->chgBit(oldp+2548,((1U & VL_REDXOR_32(
                                                         (0x1008U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2549,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1));
            tracep->chgBit(oldp+2550,((IData)((0x20040U 
                                               == (0x20040U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2551,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                              >> 0xaU) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1)))));
            tracep->chgBit(oldp+2552,((0x4001U == (0x4001U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1))));
            tracep->chgBit(oldp+2553,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                               >> 0xeU) 
                                              & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1)))));
            tracep->chgBit(oldp+2554,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6));
            tracep->chgBit(oldp+2555,((IData)((0x10080U 
                                               == (0x10080U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2556,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                               >> 3U) 
                                              ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                 >> 0xcU)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6)))));
            tracep->chgBit(oldp+2557,((IData)((0xa000U 
                                               == (0xa000U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2558,((1U & ((0xa000U 
                                              == (0xa000U 
                                                  & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6)))));
            tracep->chgBit(oldp+2559,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t11));
            tracep->chgBit(oldp+2560,((IData)((0x100010U 
                                               == (0x100010U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2561,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t13));
            tracep->chgBit(oldp+2562,((IData)((0x104U 
                                               == (0x104U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2563,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t15));
            tracep->chgBit(oldp+2564,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                               >> 0xaU) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1)) 
                                             ^ (0x20040U 
                                                == 
                                                (0x20040U 
                                                 & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1))))));
            tracep->chgBit(oldp+2565,((1U & ((((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                >> 0xeU) 
                                               & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1)) 
                                             ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                >> 0x12U)))));
            tracep->chgBit(oldp+2566,((1U & ((((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                >> 3U) 
                                               ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                  >> 0xcU)) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6)) 
                                             ^ (0x10080U 
                                                == 
                                                (0x10080U 
                                                 & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1))))));
            tracep->chgBit(oldp+2567,((1U & (((0xa000U 
                                               == (0xa000U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t15)))));
            tracep->chgBit(oldp+2568,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t20));
            tracep->chgBit(oldp+2569,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21));
            tracep->chgBit(oldp+2570,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t22));
            tracep->chgBit(oldp+2571,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23));
            tracep->chgBit(oldp+2572,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t24));
            tracep->chgBit(oldp+2573,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25));
            tracep->chgBit(oldp+2574,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+2575,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t27));
            tracep->chgBit(oldp+2576,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+2577,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23) 
                                        ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25)) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t27))));
            tracep->chgBit(oldp+2578,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21) 
                                        ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25)) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t24))));
            tracep->chgBit(oldp+2579,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t20) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23))));
            tracep->chgBit(oldp+2580,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t27) 
                                       & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t20) 
                                          & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23)))));
            tracep->chgBit(oldp+2581,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t27) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+2582,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t22))));
            tracep->chgBit(oldp+2583,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t24) 
                                       & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21) 
                                          & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t22)))));
            tracep->chgBit(oldp+2584,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t24) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+2585,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t37));
            tracep->chgBit(oldp+2586,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t38));
            tracep->chgBit(oldp+2587,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t39));
            tracep->chgBit(oldp+2588,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t40));
            tracep->chgBit(oldp+2589,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t41));
            tracep->chgBit(oldp+2590,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t42));
            tracep->chgBit(oldp+2591,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t43));
            tracep->chgBit(oldp+2592,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t44));
            tracep->chgBit(oldp+2593,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t45));
            tracep->chgBit(oldp+2594,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t0));
            tracep->chgBit(oldp+2595,((1U & VL_REDXOR_32(
                                                         (0x300U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+2596,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t2));
            tracep->chgBit(oldp+2597,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t3));
            tracep->chgBit(oldp+2598,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t4));
            tracep->chgBit(oldp+2599,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t5));
            tracep->chgBit(oldp+2600,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6));
            tracep->chgBit(oldp+2601,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t7));
            tracep->chgBit(oldp+2602,((1U & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                             ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                                >> 3U)))));
            tracep->chgBit(oldp+2603,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t9));
            tracep->chgBit(oldp+2604,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t10));
            tracep->chgBit(oldp+2605,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t11));
            tracep->chgBit(oldp+2606,((1U & VL_REDXOR_32(
                                                         (0x14000U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+2607,((1U & VL_REDXOR_32(
                                                         (0x20002U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+2608,((1U & VL_REDXOR_32(
                                                         (0x21000U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+2609,((1U & VL_REDXOR_32(
                                                         (0x210U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+2610,((1U & VL_REDXOR_32(
                                                         (0x880U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+2611,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                              >> 8U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t2)))));
            tracep->chgBit(oldp+2612,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                              >> 0xdU) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t5)))));
            tracep->chgBit(oldp+2613,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t2) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t3))));
            tracep->chgBit(oldp+2614,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t4) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6))));
            tracep->chgBit(oldp+2615,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t22));
            tracep->chgBit(oldp+2616,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t23));
            tracep->chgBit(oldp+2617,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t5) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t7))));
            tracep->chgBit(oldp+2618,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t10))));
            tracep->chgBit(oldp+2619,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t9) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t11))));
            tracep->chgBit(oldp+2620,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t10) 
                                             ^ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                                 >> 0xdU) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t5))))));
            tracep->chgBit(oldp+2621,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t11) 
                                       ^ ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6) 
                                          ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t10)))));
            tracep->chgBit(oldp+2622,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                               >> 4U) 
                                              ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                                 >> 9U)) 
                                             ^ ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t4) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6))))));
            tracep->chgCData(oldp+2623,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT____Vcellout__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__fx),8);
            tracep->chgCData(oldp+2624,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                        [7U]),8);
            tracep->chgIData(oldp+2625,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t1),21);
            tracep->chgIData(oldp+2626,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t2),18);
            tracep->chgBit(oldp+2627,((1U & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                       [7U])));
            tracep->chgBit(oldp+2628,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__top__DOT__y1));
            tracep->chgBit(oldp+2629,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__top__DOT__y2));
            tracep->chgBit(oldp+2630,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__top__DOT__y3));
            tracep->chgBit(oldp+2631,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__top__DOT__y4));
            tracep->chgBit(oldp+2632,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__top__DOT__t0));
            tracep->chgBit(oldp+2633,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__top__DOT__y5));
            tracep->chgBit(oldp+2634,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__top__DOT__t1));
            tracep->chgBit(oldp+2635,((1U & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                             [7U] ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__top__DOT__y5)))));
            tracep->chgBit(oldp+2636,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__top__DOT__y7));
            tracep->chgBit(oldp+2637,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__top__DOT__y8));
            tracep->chgBit(oldp+2638,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__top__DOT__t2));
            tracep->chgBit(oldp+2639,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__top__DOT__t3));
            tracep->chgBit(oldp+2640,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__top__DOT__y3) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__top__DOT__y4))));
            tracep->chgBit(oldp+2641,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__top__DOT__y5) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__top__DOT__t2))));
            tracep->chgBit(oldp+2642,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__top__DOT__t0) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__top__DOT__t2))));
            tracep->chgBit(oldp+2643,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__top__DOT__y12));
            tracep->chgBit(oldp+2644,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__top__DOT__y13));
            tracep->chgBit(oldp+2645,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                              [7U] 
                                              >> 4U) 
                                             ^ vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                             [7U]))));
            tracep->chgBit(oldp+2646,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__top__DOT__y14));
            tracep->chgBit(oldp+2647,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__top__DOT__y15));
            tracep->chgBit(oldp+2648,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                              [7U] 
                                              >> 1U) 
                                             ^ vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                             [7U]))));
            tracep->chgBit(oldp+2649,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__top__DOT__y16));
            tracep->chgBit(oldp+2650,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__top__DOT__y2) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__top__DOT__y16))));
            tracep->chgBit(oldp+2651,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__top__DOT__y2) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__top__DOT__y8))));
            tracep->chgBit(oldp+2652,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__top__DOT__y15) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__top__DOT__y13))));
            tracep->chgBit(oldp+2653,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__top__DOT__y1) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__top__DOT__t3))));
            tracep->chgBit(oldp+2654,((1U & VL_REDXOR_32(
                                                         (0x1008U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2655,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1));
            tracep->chgBit(oldp+2656,((IData)((0x20040U 
                                               == (0x20040U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2657,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t1 
                                              >> 0xaU) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1)))));
            tracep->chgBit(oldp+2658,((0x4001U == (0x4001U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t1))));
            tracep->chgBit(oldp+2659,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t1 
                                               >> 0xeU) 
                                              & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t1) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1)))));
            tracep->chgBit(oldp+2660,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6));
            tracep->chgBit(oldp+2661,((IData)((0x10080U 
                                               == (0x10080U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2662,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t1 
                                               >> 3U) 
                                              ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t1 
                                                 >> 0xcU)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6)))));
            tracep->chgBit(oldp+2663,((IData)((0xa000U 
                                               == (0xa000U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2664,((1U & ((0xa000U 
                                              == (0xa000U 
                                                  & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t1)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6)))));
            tracep->chgBit(oldp+2665,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t11));
            tracep->chgBit(oldp+2666,((IData)((0x100010U 
                                               == (0x100010U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2667,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t13));
            tracep->chgBit(oldp+2668,((IData)((0x104U 
                                               == (0x104U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2669,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t15));
            tracep->chgBit(oldp+2670,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t1 
                                               >> 0xaU) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1)) 
                                             ^ (0x20040U 
                                                == 
                                                (0x20040U 
                                                 & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t1))))));
            tracep->chgBit(oldp+2671,((1U & ((((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t1 
                                                >> 0xeU) 
                                               & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t1) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1)) 
                                             ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t1 
                                                >> 0x12U)))));
            tracep->chgBit(oldp+2672,((1U & ((((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t1 
                                                >> 3U) 
                                               ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t1 
                                                  >> 0xcU)) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6)) 
                                             ^ (0x10080U 
                                                == 
                                                (0x10080U 
                                                 & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t1))))));
            tracep->chgBit(oldp+2673,((1U & (((0xa000U 
                                               == (0xa000U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t1)) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t15)))));
            tracep->chgBit(oldp+2674,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t20));
            tracep->chgBit(oldp+2675,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21));
            tracep->chgBit(oldp+2676,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t22));
            tracep->chgBit(oldp+2677,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23));
            tracep->chgBit(oldp+2678,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t24));
            tracep->chgBit(oldp+2679,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25));
            tracep->chgBit(oldp+2680,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+2681,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t27));
            tracep->chgBit(oldp+2682,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+2683,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23) 
                                        ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25)) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t27))));
            tracep->chgBit(oldp+2684,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21) 
                                        ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25)) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t24))));
            tracep->chgBit(oldp+2685,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t20) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23))));
            tracep->chgBit(oldp+2686,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t27) 
                                       & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t20) 
                                          & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23)))));
            tracep->chgBit(oldp+2687,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t27) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+2688,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t22))));
            tracep->chgBit(oldp+2689,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t24) 
                                       & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21) 
                                          & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t22)))));
            tracep->chgBit(oldp+2690,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t24) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+2691,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t37));
            tracep->chgBit(oldp+2692,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t38));
            tracep->chgBit(oldp+2693,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t39));
            tracep->chgBit(oldp+2694,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t40));
            tracep->chgBit(oldp+2695,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t41));
            tracep->chgBit(oldp+2696,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t42));
            tracep->chgBit(oldp+2697,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t43));
            tracep->chgBit(oldp+2698,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t44));
            tracep->chgBit(oldp+2699,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t45));
            tracep->chgBit(oldp+2700,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__out__DOT__t0));
            tracep->chgBit(oldp+2701,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1));
            tracep->chgBit(oldp+2702,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__out__DOT__t2));
            tracep->chgBit(oldp+2703,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__out__DOT__t3));
            tracep->chgBit(oldp+2704,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__out__DOT__t4));
            tracep->chgBit(oldp+2705,((1U & VL_REDXOR_32(
                                                         (0x20800U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t2)))));
            tracep->chgBit(oldp+2706,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__out__DOT__t6));
            tracep->chgBit(oldp+2707,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__out__DOT__t7));
            tracep->chgBit(oldp+2708,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__out__DOT__t8));
            tracep->chgBit(oldp+2709,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__out__DOT__t9));
            tracep->chgBit(oldp+2710,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__out__DOT__t10));
            tracep->chgBit(oldp+2711,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__out__DOT__t11));
            tracep->chgBit(oldp+2712,((1U & VL_REDXOR_32(
                                                         (0x10002U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t2)))));
            tracep->chgBit(oldp+2713,((1U & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t2 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__out__DOT__t0)))));
            tracep->chgBit(oldp+2714,((1U & VL_REDXOR_32(
                                                         (0x804U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t2)))));
            tracep->chgBit(oldp+2715,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 5U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1)))));
            tracep->chgBit(oldp+2716,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 6U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__out__DOT__t0)))));
            tracep->chgBit(oldp+2717,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 7U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1)))));
            tracep->chgBit(oldp+2718,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 8U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__out__DOT__t8)))));
            tracep->chgBit(oldp+2719,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 0xdU) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__out__DOT__t4)))));
            tracep->chgBit(oldp+2720,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__out__DOT__t0) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1))));
            tracep->chgBit(oldp+2721,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__out__DOT__t7))));
            tracep->chgBit(oldp+2722,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__out__DOT__t3) 
                                             ^ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t2 
                                                 >> 0x10U) 
                                                ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t2 
                                                   >> 1U))))));
            tracep->chgBit(oldp+2723,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t2 
                                               >> 8U) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__out__DOT__t8)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__out__DOT__t2)))));
            tracep->chgBit(oldp+2724,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t2 
                                               >> 5U) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__out__DOT__t9)))));
            tracep->chgBit(oldp+2725,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__out__DOT__t6) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__out__DOT__t10))));
            tracep->chgBit(oldp+2726,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__out__DOT__t7) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__out__DOT__t9))));
            tracep->chgBit(oldp+2727,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__out__DOT__t8) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__out__DOT__t10))));
            tracep->chgBit(oldp+2728,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__out__DOT__t11) 
                                             ^ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t2 
                                                 >> 2U) 
                                                ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t2 
                                                   >> 0xbU))))));
            tracep->chgBit(oldp+2729,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__out__DOT__t11) 
                                             ^ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t2 
                                                 >> 7U) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1))))));
            tracep->chgCData(oldp+2730,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT____Vcellout__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__fx),8);
            tracep->chgCData(oldp+2731,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                        [7U]),8);
            tracep->chgIData(oldp+2732,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1),21);
            tracep->chgIData(oldp+2733,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2),18);
            tracep->chgBit(oldp+2734,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y17));
            tracep->chgBit(oldp+2735,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y16));
            tracep->chgBit(oldp+2736,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y2));
            tracep->chgBit(oldp+2737,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y1));
            tracep->chgBit(oldp+2738,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y18));
            tracep->chgBit(oldp+2739,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t0));
            tracep->chgBit(oldp+2740,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y6));
            tracep->chgBit(oldp+2741,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y14));
            tracep->chgBit(oldp+2742,((1U & (~ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                [7U] 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y1))))));
            tracep->chgBit(oldp+2743,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y8));
            tracep->chgBit(oldp+2744,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y2) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t0))));
            tracep->chgBit(oldp+2745,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y1) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t0))));
            tracep->chgBit(oldp+2746,((1U & (~ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                 [7U] 
                                                 >> 5U) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y1))))));
            tracep->chgBit(oldp+2747,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t1));
            tracep->chgBit(oldp+2748,((1U & (~ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                 [7U] 
                                                 >> 5U) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y14))))));
            tracep->chgBit(oldp+2749,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y18) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t1))));
            tracep->chgBit(oldp+2750,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                              [7U] 
                                              >> 3U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y6)))));
            tracep->chgBit(oldp+2751,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t2));
            tracep->chgBit(oldp+2752,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t3));
            tracep->chgBit(oldp+2753,((1U & (~ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                 [7U] 
                                                 >> 5U) 
                                                ^ (
                                                   vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                   [7U] 
                                                   >> 3U))))));
            tracep->chgBit(oldp+2754,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y16) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t2))));
            tracep->chgBit(oldp+2755,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t1) 
                                             ^ (~ (
                                                   (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                    [7U] 
                                                    >> 5U) 
                                                   ^ 
                                                   (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                    [7U] 
                                                    >> 3U)))))));
            tracep->chgBit(oldp+2756,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y20));
            tracep->chgBit(oldp+2757,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y8) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y20))));
            tracep->chgBit(oldp+2758,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y8) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t3))));
            tracep->chgBit(oldp+2759,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                              [7U] 
                                              >> 7U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t2)))));
            tracep->chgBit(oldp+2760,((1U & VL_REDXOR_32(
                                                         (0x1008U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2761,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1));
            tracep->chgBit(oldp+2762,((IData)((0x20040U 
                                               == (0x20040U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2763,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                              >> 0xaU) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1)))));
            tracep->chgBit(oldp+2764,((0x4001U == (0x4001U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1))));
            tracep->chgBit(oldp+2765,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                               >> 0xeU) 
                                              & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1)))));
            tracep->chgBit(oldp+2766,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6));
            tracep->chgBit(oldp+2767,((IData)((0x10080U 
                                               == (0x10080U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2768,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                               >> 3U) 
                                              ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                 >> 0xcU)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6)))));
            tracep->chgBit(oldp+2769,((IData)((0xa000U 
                                               == (0xa000U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2770,((1U & ((0xa000U 
                                              == (0xa000U 
                                                  & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6)))));
            tracep->chgBit(oldp+2771,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t11));
            tracep->chgBit(oldp+2772,((IData)((0x100010U 
                                               == (0x100010U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2773,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t13));
            tracep->chgBit(oldp+2774,((IData)((0x104U 
                                               == (0x104U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2775,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t15));
            tracep->chgBit(oldp+2776,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                               >> 0xaU) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1)) 
                                             ^ (0x20040U 
                                                == 
                                                (0x20040U 
                                                 & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1))))));
            tracep->chgBit(oldp+2777,((1U & ((((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                >> 0xeU) 
                                               & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1)) 
                                             ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                >> 0x12U)))));
            tracep->chgBit(oldp+2778,((1U & ((((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                >> 3U) 
                                               ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                  >> 0xcU)) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6)) 
                                             ^ (0x10080U 
                                                == 
                                                (0x10080U 
                                                 & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1))))));
            tracep->chgBit(oldp+2779,((1U & (((0xa000U 
                                               == (0xa000U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t15)))));
            tracep->chgBit(oldp+2780,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t20));
            tracep->chgBit(oldp+2781,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21));
            tracep->chgBit(oldp+2782,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t22));
            tracep->chgBit(oldp+2783,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23));
            tracep->chgBit(oldp+2784,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t24));
            tracep->chgBit(oldp+2785,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25));
            tracep->chgBit(oldp+2786,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+2787,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t27));
            tracep->chgBit(oldp+2788,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+2789,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23) 
                                        ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25)) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t27))));
            tracep->chgBit(oldp+2790,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21) 
                                        ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25)) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t24))));
            tracep->chgBit(oldp+2791,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t20) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23))));
            tracep->chgBit(oldp+2792,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t27) 
                                       & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t20) 
                                          & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23)))));
            tracep->chgBit(oldp+2793,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t27) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+2794,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t22))));
            tracep->chgBit(oldp+2795,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t24) 
                                       & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21) 
                                          & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t22)))));
            tracep->chgBit(oldp+2796,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t24) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+2797,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t37));
            tracep->chgBit(oldp+2798,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t38));
            tracep->chgBit(oldp+2799,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t39));
            tracep->chgBit(oldp+2800,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t40));
            tracep->chgBit(oldp+2801,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t41));
            tracep->chgBit(oldp+2802,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t42));
            tracep->chgBit(oldp+2803,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t43));
            tracep->chgBit(oldp+2804,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t44));
            tracep->chgBit(oldp+2805,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t45));
            tracep->chgBit(oldp+2806,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t0));
            tracep->chgBit(oldp+2807,((1U & VL_REDXOR_32(
                                                         (0x300U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+2808,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t2));
            tracep->chgBit(oldp+2809,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t3));
            tracep->chgBit(oldp+2810,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t4));
            tracep->chgBit(oldp+2811,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t5));
            tracep->chgBit(oldp+2812,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6));
            tracep->chgBit(oldp+2813,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t7));
            tracep->chgBit(oldp+2814,((1U & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                             ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                                >> 3U)))));
            tracep->chgBit(oldp+2815,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t9));
            tracep->chgBit(oldp+2816,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t10));
            tracep->chgBit(oldp+2817,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t11));
            tracep->chgBit(oldp+2818,((1U & VL_REDXOR_32(
                                                         (0x14000U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+2819,((1U & VL_REDXOR_32(
                                                         (0x20002U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+2820,((1U & VL_REDXOR_32(
                                                         (0x21000U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+2821,((1U & VL_REDXOR_32(
                                                         (0x210U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+2822,((1U & VL_REDXOR_32(
                                                         (0x880U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+2823,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                              >> 8U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t2)))));
            tracep->chgBit(oldp+2824,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                              >> 0xdU) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t5)))));
            tracep->chgBit(oldp+2825,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t2) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t3))));
            tracep->chgBit(oldp+2826,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t4) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6))));
            tracep->chgBit(oldp+2827,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t22));
            tracep->chgBit(oldp+2828,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t23));
            tracep->chgBit(oldp+2829,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t5) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t7))));
            tracep->chgBit(oldp+2830,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t10))));
            tracep->chgBit(oldp+2831,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t9) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t11))));
            tracep->chgBit(oldp+2832,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t10) 
                                             ^ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                                 >> 0xdU) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t5))))));
            tracep->chgBit(oldp+2833,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t11) 
                                       ^ ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6) 
                                          ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t10)))));
            tracep->chgBit(oldp+2834,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                               >> 4U) 
                                              ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                                 >> 9U)) 
                                             ^ ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t4) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6))))));
            tracep->chgCData(oldp+2835,((0xffU & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__mix_dec_i0)),8);
            tracep->chgCData(oldp+2836,((0xffU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__mix_dec_i0 
                                                  >> 8U))),8);
            tracep->chgCData(oldp+2837,((0xffU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__mix_dec_i0 
                                                  >> 0x10U))),8);
            tracep->chgCData(oldp+2838,((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__mix_dec_i0 
                                         >> 0x18U)),8);
            tracep->chgIData(oldp+2839,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d0__DOT__mix_in_3),32);
            tracep->chgIData(oldp+2840,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d0__DOT__mix_in_2),32);
            tracep->chgIData(oldp+2841,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d0__DOT__mix_in_1),32);
            tracep->chgIData(oldp+2842,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d0__DOT__mix_in_0),32);
            tracep->chgCData(oldp+2843,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d0__DOT__mix_out_3),8);
            tracep->chgCData(oldp+2844,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d0__DOT__mix_out_2),8);
            tracep->chgCData(oldp+2845,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d0__DOT__mix_out_1),8);
            tracep->chgCData(oldp+2846,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d0__DOT__mix_out_0),8);
            tracep->chgCData(oldp+2847,((0xffU & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d0__DOT__mix_in_0)),8);
            tracep->chgCData(oldp+2848,((0xffU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d0__DOT__mix_in_0 
                                                  >> 8U))),8);
            tracep->chgCData(oldp+2849,((0xffU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d0__DOT__mix_in_0 
                                                  >> 0x10U))),8);
            tracep->chgCData(oldp+2850,((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d0__DOT__mix_in_0 
                                         >> 0x18U)),8);
            tracep->chgCData(oldp+2851,((0xffU & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d0__DOT__mix_in_1)),8);
            tracep->chgCData(oldp+2852,((0xffU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d0__DOT__mix_in_1 
                                                  >> 8U))),8);
            tracep->chgCData(oldp+2853,((0xffU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d0__DOT__mix_in_1 
                                                  >> 0x10U))),8);
            tracep->chgCData(oldp+2854,((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d0__DOT__mix_in_1 
                                         >> 0x18U)),8);
            tracep->chgCData(oldp+2855,((0xffU & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d0__DOT__mix_in_2)),8);
            tracep->chgCData(oldp+2856,((0xffU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d0__DOT__mix_in_2 
                                                  >> 8U))),8);
            tracep->chgCData(oldp+2857,((0xffU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d0__DOT__mix_in_2 
                                                  >> 0x10U))),8);
            tracep->chgCData(oldp+2858,((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d0__DOT__mix_in_2 
                                         >> 0x18U)),8);
            tracep->chgCData(oldp+2859,((0xffU & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d0__DOT__mix_in_3)),8);
            tracep->chgCData(oldp+2860,((0xffU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d0__DOT__mix_in_3 
                                                  >> 8U))),8);
            tracep->chgCData(oldp+2861,((0xffU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d0__DOT__mix_in_3 
                                                  >> 0x10U))),8);
            tracep->chgCData(oldp+2862,((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d0__DOT__mix_in_3 
                                         >> 0x18U)),8);
            tracep->chgCData(oldp+2863,((0xffU & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__mix_dec_i1)),8);
            tracep->chgCData(oldp+2864,((0xffU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__mix_dec_i1 
                                                  >> 8U))),8);
            tracep->chgCData(oldp+2865,((0xffU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__mix_dec_i1 
                                                  >> 0x10U))),8);
            tracep->chgCData(oldp+2866,((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__mix_dec_i1 
                                         >> 0x18U)),8);
            tracep->chgIData(oldp+2867,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d1__DOT__mix_in_3),32);
            tracep->chgIData(oldp+2868,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d1__DOT__mix_in_2),32);
            tracep->chgIData(oldp+2869,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d1__DOT__mix_in_1),32);
            tracep->chgIData(oldp+2870,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d1__DOT__mix_in_0),32);
            tracep->chgCData(oldp+2871,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d1__DOT__mix_out_3),8);
            tracep->chgCData(oldp+2872,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d1__DOT__mix_out_2),8);
            tracep->chgCData(oldp+2873,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d1__DOT__mix_out_1),8);
            tracep->chgCData(oldp+2874,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d1__DOT__mix_out_0),8);
            tracep->chgCData(oldp+2875,((0xffU & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d1__DOT__mix_in_0)),8);
            tracep->chgCData(oldp+2876,((0xffU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d1__DOT__mix_in_0 
                                                  >> 8U))),8);
            tracep->chgCData(oldp+2877,((0xffU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d1__DOT__mix_in_0 
                                                  >> 0x10U))),8);
            tracep->chgCData(oldp+2878,((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d1__DOT__mix_in_0 
                                         >> 0x18U)),8);
            tracep->chgCData(oldp+2879,((0xffU & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d1__DOT__mix_in_1)),8);
            tracep->chgCData(oldp+2880,((0xffU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d1__DOT__mix_in_1 
                                                  >> 8U))),8);
            tracep->chgCData(oldp+2881,((0xffU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d1__DOT__mix_in_1 
                                                  >> 0x10U))),8);
            tracep->chgCData(oldp+2882,((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d1__DOT__mix_in_1 
                                         >> 0x18U)),8);
            tracep->chgCData(oldp+2883,((0xffU & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d1__DOT__mix_in_2)),8);
            tracep->chgCData(oldp+2884,((0xffU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d1__DOT__mix_in_2 
                                                  >> 8U))),8);
            tracep->chgCData(oldp+2885,((0xffU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d1__DOT__mix_in_2 
                                                  >> 0x10U))),8);
            tracep->chgCData(oldp+2886,((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d1__DOT__mix_in_2 
                                         >> 0x18U)),8);
            tracep->chgCData(oldp+2887,((0xffU & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d1__DOT__mix_in_3)),8);
            tracep->chgCData(oldp+2888,((0xffU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d1__DOT__mix_in_3 
                                                  >> 8U))),8);
            tracep->chgCData(oldp+2889,((0xffU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d1__DOT__mix_in_3 
                                                  >> 0x10U))),8);
            tracep->chgCData(oldp+2890,((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d1__DOT__mix_in_3 
                                         >> 0x18U)),8);
            tracep->chgWData(oldp+2891,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4),1449);
            tracep->chgWData(oldp+2937,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[0]),69);
            tracep->chgWData(oldp+2940,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[1]),69);
            tracep->chgWData(oldp+2943,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[2]),69);
            tracep->chgWData(oldp+2946,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[3]),69);
            tracep->chgWData(oldp+2949,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[4]),69);
            tracep->chgWData(oldp+2952,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[5]),69);
            tracep->chgWData(oldp+2955,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[6]),69);
            tracep->chgWData(oldp+2958,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[7]),69);
            tracep->chgWData(oldp+2961,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[8]),69);
            tracep->chgWData(oldp+2964,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[9]),69);
            tracep->chgWData(oldp+2967,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[10]),69);
            tracep->chgWData(oldp+2970,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[11]),69);
            tracep->chgWData(oldp+2973,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[12]),69);
            tracep->chgWData(oldp+2976,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[13]),69);
            tracep->chgWData(oldp+2979,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[14]),69);
            tracep->chgWData(oldp+2982,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[15]),69);
            tracep->chgWData(oldp+2985,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[16]),69);
            tracep->chgWData(oldp+2988,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[17]),69);
            tracep->chgWData(oldp+2991,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[18]),69);
            tracep->chgWData(oldp+2994,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[19]),69);
            tracep->chgWData(oldp+2997,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[20]),69);
            tracep->chgCData(oldp+3000,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[0]),5);
            tracep->chgCData(oldp+3001,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[1]),5);
            tracep->chgCData(oldp+3002,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[2]),5);
            tracep->chgCData(oldp+3003,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[3]),5);
            tracep->chgCData(oldp+3004,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[4]),5);
            tracep->chgCData(oldp+3005,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[5]),5);
            tracep->chgCData(oldp+3006,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[6]),5);
            tracep->chgCData(oldp+3007,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[7]),5);
            tracep->chgCData(oldp+3008,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[8]),5);
            tracep->chgCData(oldp+3009,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[9]),5);
            tracep->chgCData(oldp+3010,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[10]),5);
            tracep->chgCData(oldp+3011,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[11]),5);
            tracep->chgCData(oldp+3012,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[12]),5);
            tracep->chgCData(oldp+3013,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[13]),5);
            tracep->chgCData(oldp+3014,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[14]),5);
            tracep->chgCData(oldp+3015,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[15]),5);
            tracep->chgCData(oldp+3016,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[16]),5);
            tracep->chgCData(oldp+3017,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[17]),5);
            tracep->chgCData(oldp+3018,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[18]),5);
            tracep->chgCData(oldp+3019,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[19]),5);
            tracep->chgCData(oldp+3020,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[20]),5);
            tracep->chgQData(oldp+3021,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+3023,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+3025,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+3027,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+3029,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[4]),64);
            tracep->chgQData(oldp+3031,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[5]),64);
            tracep->chgQData(oldp+3033,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[6]),64);
            tracep->chgQData(oldp+3035,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[7]),64);
            tracep->chgQData(oldp+3037,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[8]),64);
            tracep->chgQData(oldp+3039,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[9]),64);
            tracep->chgQData(oldp+3041,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[10]),64);
            tracep->chgQData(oldp+3043,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[11]),64);
            tracep->chgQData(oldp+3045,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[12]),64);
            tracep->chgQData(oldp+3047,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[13]),64);
            tracep->chgQData(oldp+3049,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[14]),64);
            tracep->chgQData(oldp+3051,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[15]),64);
            tracep->chgQData(oldp+3053,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[16]),64);
            tracep->chgQData(oldp+3055,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[17]),64);
            tracep->chgQData(oldp+3057,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[18]),64);
            tracep->chgQData(oldp+3059,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[19]),64);
            tracep->chgQData(oldp+3061,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[20]),64);
            tracep->chgQData(oldp+3063,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+3065,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__hit));
            tracep->chgWData(oldp+3066,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__csr_value_write____pinNumber4),201);
            tracep->chgWData(oldp+3073,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_value_write__DOT__i0__DOT__pair_list[0]),67);
            tracep->chgWData(oldp+3076,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_value_write__DOT__i0__DOT__pair_list[1]),67);
            tracep->chgWData(oldp+3079,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_value_write__DOT__i0__DOT__pair_list[2]),67);
            tracep->chgCData(oldp+3082,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_value_write__DOT__i0__DOT__key_list[0]),3);
            tracep->chgCData(oldp+3083,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_value_write__DOT__i0__DOT__key_list[1]),3);
            tracep->chgCData(oldp+3084,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_value_write__DOT__i0__DOT__key_list[2]),3);
            tracep->chgQData(oldp+3085,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_value_write__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+3087,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_value_write__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+3089,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_value_write__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+3091,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_value_write__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+3093,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_value_write__DOT__i0__DOT__hit));
            tracep->chgQData(oldp+3094,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[0]),64);
            tracep->chgQData(oldp+3096,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[1]),64);
            tracep->chgQData(oldp+3098,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[2]),64);
            tracep->chgQData(oldp+3100,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[3]),64);
            tracep->chgQData(oldp+3102,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[4]),64);
            tracep->chgQData(oldp+3104,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[5]),64);
            tracep->chgQData(oldp+3106,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[6]),64);
            tracep->chgQData(oldp+3108,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[7]),64);
            tracep->chgQData(oldp+3110,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[8]),64);
            tracep->chgQData(oldp+3112,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[9]),64);
            tracep->chgQData(oldp+3114,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[10]),64);
            tracep->chgQData(oldp+3116,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[11]),64);
            tracep->chgQData(oldp+3118,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[12]),64);
            tracep->chgQData(oldp+3120,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[13]),64);
            tracep->chgQData(oldp+3122,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[14]),64);
            tracep->chgQData(oldp+3124,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[15]),64);
            tracep->chgQData(oldp+3126,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[16]),64);
            tracep->chgQData(oldp+3128,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[17]),64);
            tracep->chgQData(oldp+3130,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[18]),64);
            tracep->chgQData(oldp+3132,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[19]),64);
            tracep->chgQData(oldp+3134,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[20]),64);
            tracep->chgQData(oldp+3136,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[21]),64);
            tracep->chgQData(oldp+3138,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[22]),64);
            tracep->chgQData(oldp+3140,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[23]),64);
            tracep->chgQData(oldp+3142,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[24]),64);
            tracep->chgQData(oldp+3144,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[25]),64);
            tracep->chgQData(oldp+3146,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[26]),64);
            tracep->chgQData(oldp+3148,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[27]),64);
            tracep->chgQData(oldp+3150,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[28]),64);
            tracep->chgQData(oldp+3152,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[29]),64);
            tracep->chgQData(oldp+3154,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[30]),64);
            tracep->chgQData(oldp+3156,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[31]),64);
            tracep->chgQData(oldp+3158,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[0]),64);
            tracep->chgQData(oldp+3160,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[1]),64);
            tracep->chgQData(oldp+3162,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[2]),64);
            tracep->chgQData(oldp+3164,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[3]),64);
            tracep->chgQData(oldp+3166,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[4]),64);
            tracep->chgQData(oldp+3168,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[5]),64);
            tracep->chgQData(oldp+3170,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[6]),64);
            tracep->chgQData(oldp+3172,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[7]),64);
            tracep->chgQData(oldp+3174,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[8]),64);
            tracep->chgQData(oldp+3176,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[9]),64);
            tracep->chgQData(oldp+3178,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[10]),64);
            tracep->chgQData(oldp+3180,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[11]),64);
            tracep->chgQData(oldp+3182,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[12]),64);
            tracep->chgQData(oldp+3184,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[13]),64);
            tracep->chgQData(oldp+3186,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[14]),64);
            tracep->chgQData(oldp+3188,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[15]),64);
            tracep->chgQData(oldp+3190,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[16]),64);
            tracep->chgQData(oldp+3192,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[17]),64);
            tracep->chgQData(oldp+3194,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[18]),64);
            tracep->chgQData(oldp+3196,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[19]),64);
            tracep->chgQData(oldp+3198,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[20]),64);
            tracep->chgQData(oldp+3200,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[21]),64);
            tracep->chgQData(oldp+3202,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[22]),64);
            tracep->chgQData(oldp+3204,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[23]),64);
            tracep->chgQData(oldp+3206,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[24]),64);
            tracep->chgQData(oldp+3208,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[25]),64);
            tracep->chgQData(oldp+3210,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[26]),64);
            tracep->chgQData(oldp+3212,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[27]),64);
            tracep->chgQData(oldp+3214,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[28]),64);
            tracep->chgQData(oldp+3216,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[29]),64);
            tracep->chgQData(oldp+3218,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[30]),64);
            tracep->chgQData(oldp+3220,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[31]),64);
            tracep->chgWData(oldp+3222,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_value0____pinNumber4),136);
            tracep->chgWData(oldp+3227,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_value0__DOT__i0__DOT__pair_list[0]),68);
            tracep->chgWData(oldp+3230,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_value0__DOT__i0__DOT__pair_list[1]),68);
            tracep->chgCData(oldp+3233,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_value0__DOT__i0__DOT__key_list[0]),4);
            tracep->chgCData(oldp+3234,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_value0__DOT__i0__DOT__key_list[1]),4);
            tracep->chgQData(oldp+3235,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_value0__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+3237,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_value0__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+3239,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_value0__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+3241,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_value0__DOT__i0__DOT__hit));
            tracep->chgQData(oldp+3242,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__operation_a_forward),64);
            tracep->chgQData(oldp+3244,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__operation_b_forward),64);
            tracep->chgBit(oldp+3246,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_en));
            tracep->chgWData(oldp+3247,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_c_mux____pinNumber4),264);
            tracep->chgWData(oldp+3256,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__pair_list[0]),66);
            tracep->chgWData(oldp+3259,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__pair_list[1]),66);
            tracep->chgWData(oldp+3262,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__pair_list[2]),66);
            tracep->chgWData(oldp+3265,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__pair_list[3]),66);
            tracep->chgCData(oldp+3268,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__key_list[0]),2);
            tracep->chgCData(oldp+3269,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__key_list[1]),2);
            tracep->chgCData(oldp+3270,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__key_list[2]),2);
            tracep->chgCData(oldp+3271,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__key_list[3]),2);
            tracep->chgQData(oldp+3272,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+3274,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+3276,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+3278,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+3280,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+3282,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__hit));
            tracep->chgWData(oldp+3283,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_d_mux____pinNumber4),264);
            tracep->chgWData(oldp+3292,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__pair_list[0]),66);
            tracep->chgWData(oldp+3295,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__pair_list[1]),66);
            tracep->chgWData(oldp+3298,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__pair_list[2]),66);
            tracep->chgWData(oldp+3301,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__pair_list[3]),66);
            tracep->chgCData(oldp+3304,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__key_list[0]),2);
            tracep->chgCData(oldp+3305,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__key_list[1]),2);
            tracep->chgCData(oldp+3306,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__key_list[2]),2);
            tracep->chgCData(oldp+3307,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__key_list[3]),2);
            tracep->chgQData(oldp+3308,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+3310,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+3312,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+3314,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+3316,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+3318,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__hit));
            tracep->chgIData(oldp+3319,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__branch_test____pinNumber4),24);
            tracep->chgCData(oldp+3320,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__pair_list[0]),4);
            tracep->chgCData(oldp+3321,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__pair_list[1]),4);
            tracep->chgCData(oldp+3322,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__pair_list[2]),4);
            tracep->chgCData(oldp+3323,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__pair_list[3]),4);
            tracep->chgCData(oldp+3324,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__pair_list[4]),4);
            tracep->chgCData(oldp+3325,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__pair_list[5]),4);
            tracep->chgCData(oldp+3326,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__key_list[0]),3);
            tracep->chgCData(oldp+3327,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__key_list[1]),3);
            tracep->chgCData(oldp+3328,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__key_list[2]),3);
            tracep->chgCData(oldp+3329,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__key_list[3]),3);
            tracep->chgCData(oldp+3330,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__key_list[4]),3);
            tracep->chgCData(oldp+3331,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__key_list[5]),3);
            tracep->chgBit(oldp+3332,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__data_list[0]));
            tracep->chgBit(oldp+3333,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__data_list[1]));
            tracep->chgBit(oldp+3334,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__data_list[2]));
            tracep->chgBit(oldp+3335,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__data_list[3]));
            tracep->chgBit(oldp+3336,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__data_list[4]));
            tracep->chgBit(oldp+3337,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__data_list[5]));
            tracep->chgBit(oldp+3338,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__lut_out));
            tracep->chgBit(oldp+3339,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__hit));
        }
        tracep->chgBit(oldp+3340,(vlSelf->clock));
        tracep->chgBit(oldp+3341,(vlSelf->reset));
        tracep->chgQData(oldp+3342,(vlSelf->io_logCtrl_log_begin),64);
        tracep->chgQData(oldp+3344,(vlSelf->io_logCtrl_log_end),64);
        tracep->chgQData(oldp+3346,(vlSelf->io_logCtrl_log_level),64);
        tracep->chgBit(oldp+3348,(vlSelf->io_perfInfo_clean));
        tracep->chgBit(oldp+3349,(vlSelf->io_perfInfo_dump));
        tracep->chgBit(oldp+3350,(vlSelf->io_uart_out_valid));
        tracep->chgCData(oldp+3351,(vlSelf->io_uart_out_ch),8);
        tracep->chgBit(oldp+3352,(vlSelf->io_uart_in_valid));
        tracep->chgCData(oldp+3353,(vlSelf->io_uart_in_ch),8);
        tracep->chgBit(oldp+3354,(vlSelf->io_memAXI_0_aw_ready));
        tracep->chgBit(oldp+3355,(vlSelf->io_memAXI_0_aw_valid));
        tracep->chgIData(oldp+3356,(vlSelf->io_memAXI_0_aw_bits_addr),32);
        tracep->chgCData(oldp+3357,(vlSelf->io_memAXI_0_aw_bits_prot),3);
        tracep->chgCData(oldp+3358,(vlSelf->io_memAXI_0_aw_bits_id),4);
        tracep->chgBit(oldp+3359,(vlSelf->io_memAXI_0_aw_bits_user));
        tracep->chgCData(oldp+3360,(vlSelf->io_memAXI_0_aw_bits_len),8);
        tracep->chgCData(oldp+3361,(vlSelf->io_memAXI_0_aw_bits_size),3);
        tracep->chgCData(oldp+3362,(vlSelf->io_memAXI_0_aw_bits_burst),2);
        tracep->chgBit(oldp+3363,(vlSelf->io_memAXI_0_aw_bits_lock));
        tracep->chgCData(oldp+3364,(vlSelf->io_memAXI_0_aw_bits_cache),4);
        tracep->chgCData(oldp+3365,(vlSelf->io_memAXI_0_aw_bits_qos),4);
        tracep->chgBit(oldp+3366,(vlSelf->io_memAXI_0_w_ready));
        tracep->chgBit(oldp+3367,(vlSelf->io_memAXI_0_w_valid));
        tracep->chgQData(oldp+3368,(vlSelf->io_memAXI_0_w_bits_data[0]),64);
        tracep->chgQData(oldp+3370,(vlSelf->io_memAXI_0_w_bits_data[1]),64);
        tracep->chgQData(oldp+3372,(vlSelf->io_memAXI_0_w_bits_data[2]),64);
        tracep->chgQData(oldp+3374,(vlSelf->io_memAXI_0_w_bits_data[3]),64);
        tracep->chgCData(oldp+3376,(vlSelf->io_memAXI_0_w_bits_strb),8);
        tracep->chgBit(oldp+3377,(vlSelf->io_memAXI_0_w_bits_last));
        tracep->chgBit(oldp+3378,(vlSelf->io_memAXI_0_b_ready));
        tracep->chgBit(oldp+3379,(vlSelf->io_memAXI_0_b_valid));
        tracep->chgCData(oldp+3380,(vlSelf->io_memAXI_0_b_bits_resp),2);
        tracep->chgCData(oldp+3381,(vlSelf->io_memAXI_0_b_bits_id),4);
        tracep->chgBit(oldp+3382,(vlSelf->io_memAXI_0_b_bits_user));
        tracep->chgBit(oldp+3383,(vlSelf->io_memAXI_0_ar_ready));
        tracep->chgBit(oldp+3384,(vlSelf->io_memAXI_0_ar_valid));
        tracep->chgIData(oldp+3385,(vlSelf->io_memAXI_0_ar_bits_addr),32);
        tracep->chgCData(oldp+3386,(vlSelf->io_memAXI_0_ar_bits_prot),3);
        tracep->chgCData(oldp+3387,(vlSelf->io_memAXI_0_ar_bits_id),4);
        tracep->chgBit(oldp+3388,(vlSelf->io_memAXI_0_ar_bits_user));
        tracep->chgCData(oldp+3389,(vlSelf->io_memAXI_0_ar_bits_len),8);
        tracep->chgCData(oldp+3390,(vlSelf->io_memAXI_0_ar_bits_size),3);
        tracep->chgCData(oldp+3391,(vlSelf->io_memAXI_0_ar_bits_burst),2);
        tracep->chgBit(oldp+3392,(vlSelf->io_memAXI_0_ar_bits_lock));
        tracep->chgCData(oldp+3393,(vlSelf->io_memAXI_0_ar_bits_cache),4);
        tracep->chgCData(oldp+3394,(vlSelf->io_memAXI_0_ar_bits_qos),4);
        tracep->chgBit(oldp+3395,(vlSelf->io_memAXI_0_r_ready));
        tracep->chgBit(oldp+3396,(vlSelf->io_memAXI_0_r_valid));
        tracep->chgCData(oldp+3397,(vlSelf->io_memAXI_0_r_bits_resp),2);
        tracep->chgQData(oldp+3398,(vlSelf->io_memAXI_0_r_bits_data[0]),64);
        tracep->chgQData(oldp+3400,(vlSelf->io_memAXI_0_r_bits_data[1]),64);
        tracep->chgQData(oldp+3402,(vlSelf->io_memAXI_0_r_bits_data[2]),64);
        tracep->chgQData(oldp+3404,(vlSelf->io_memAXI_0_r_bits_data[3]),64);
        tracep->chgBit(oldp+3406,(vlSelf->io_memAXI_0_r_bits_last));
        tracep->chgCData(oldp+3407,(vlSelf->io_memAXI_0_r_bits_id),4);
        tracep->chgBit(oldp+3408,(vlSelf->io_memAXI_0_r_bits_user));
        tracep->chgQData(oldp+3409,(vlSelf->io_memAXI_0_r_bits_data
                                    [0U]),64);
        tracep->chgBit(oldp+3411,((1U & (~ (IData)(vlSelf->reset)))));
        VL_EXTEND_WQ(65,64, __Vtemp1096, vlSelf->io_memAXI_0_r_bits_data
                     [0U]);
        tracep->chgWData(oldp+3412,(__Vtemp1096),65);
        tracep->chgBit(oldp+3415,(((IData)(vlSelf->io_memAXI_0_aw_ready) 
                                   & (1U == (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__w_state)))));
        tracep->chgBit(oldp+3416,(((IData)(vlSelf->io_memAXI_0_ar_ready) 
                                   & (1U == (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__r_state)))));
        tracep->chgBit(oldp+3417,((((IData)(vlSelf->reset) 
                                    | ((IData)(vlSelf->SimTop__DOT__rw_req) 
                                       & (0U == (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__w_state)))) 
                                   | ((~ (IData)(vlSelf->SimTop__DOT__rw_req)) 
                                      & (0U == (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__r_state))))));
        tracep->chgBit(oldp+3418,((1U & ((IData)(vlSelf->SimTop__DOT__rw_req)
                                          ? (IData)(vlSelf->io_memAXI_0_b_bits_resp)
                                          : (IData)(vlSelf->io_memAXI_0_r_bits_resp)))));
        __Vtemp1097[0U] = 0xffffffffU;
        __Vtemp1097[1U] = 0U;
        __Vtemp1097[2U] = 0U;
        __Vtemp1097[3U] = 0U;
        VL_EXTEND_WQ(65,64, __Vtemp1098, vlSelf->SimTop__DOT__rw_addr);
        VL_SHIFTL_WWI(128,128,6, __Vtemp1099, __Vtemp1097, 
                      (0x38U & (__Vtemp1098[0U] << 3U)));
        VL_EXTEND_WQ(65,64, __Vtemp1100, vlSelf->SimTop__DOT__rw_addr);
        tracep->chgQData(oldp+3419,(((vlSelf->io_memAXI_0_r_bits_data
                                      [0U] & (((QData)((IData)(
                                                               __Vtemp1099[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                __Vtemp1099[0U])))) 
                                     >> (0x38U & (__Vtemp1100[0U] 
                                                  << 3U)))),64);
        __Vtemp1101[0U] = 0xffffffffU;
        __Vtemp1101[1U] = 0U;
        __Vtemp1101[2U] = 0U;
        __Vtemp1101[3U] = 0U;
        VL_EXTEND_WQ(65,64, __Vtemp1102, vlSelf->SimTop__DOT__rw_addr);
        VL_SHIFTL_WWI(128,128,6, __Vtemp1103, __Vtemp1101, 
                      (0x38U & (__Vtemp1102[0U] << 3U)));
        VL_EXTEND_WQ(65,64, __Vtemp1104, vlSelf->SimTop__DOT__rw_addr);
        tracep->chgQData(oldp+3421,(((vlSelf->io_memAXI_0_r_bits_data
                                      [0U] & (((QData)((IData)(
                                                               __Vtemp1103[3U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                __Vtemp1103[2U])))) 
                                     << (0x3fU & (- 
                                                  (0x38U 
                                                   & (__Vtemp1104[0U] 
                                                      << 3U)))))),64);
        tracep->chgBit(oldp+3423,(((~ (IData)(vlSelf->reset)) 
                                   & ((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__read_mem_en_wb) 
                                        & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__write_mem_en_mem)) 
                                       & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rs2_mem) 
                                          == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rd_wb))) 
                                      & (0U != (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rd_wb))))));
        tracep->chgBit(oldp+3424,((1U & ((IData)(vlSelf->reset) 
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

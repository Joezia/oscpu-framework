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
    VlWide<3>/*95:0*/ __Vtemp1140;
    VlWide<4>/*127:0*/ __Vtemp1144;
    VlWide<4>/*127:0*/ __Vtemp1146;
    VlWide<4>/*127:0*/ __Vtemp1148;
    VlWide<3>/*95:0*/ __Vtemp1149;
    VlWide<3>/*95:0*/ __Vtemp1150;
    VlWide<3>/*95:0*/ __Vtemp1151;
    VlWide<3>/*95:0*/ __Vtemp1152;
    VlWide<3>/*95:0*/ __Vtemp1153;
    VlWide<3>/*95:0*/ __Vtemp1154;
    VlWide<3>/*95:0*/ __Vtemp1155;
    VlWide<3>/*95:0*/ __Vtemp1156;
    VlWide<4>/*127:0*/ __Vtemp1157;
    VlWide<3>/*95:0*/ __Vtemp1158;
    VlWide<4>/*127:0*/ __Vtemp1159;
    VlWide<4>/*127:0*/ __Vtemp1160;
    VlWide<3>/*95:0*/ __Vtemp1161;
    VlWide<4>/*127:0*/ __Vtemp1162;
    VlWide<4>/*127:0*/ __Vtemp1163;
    VlWide<3>/*95:0*/ __Vtemp1164;
    VlWide<4>/*127:0*/ __Vtemp1165;
    VlWide<4>/*127:0*/ __Vtemp1169;
    VlWide<4>/*127:0*/ __Vtemp1171;
    VlWide<4>/*127:0*/ __Vtemp1173;
    VlWide<4>/*127:0*/ __Vtemp1178;
    VlWide<4>/*127:0*/ __Vtemp1182;
    VlWide<4>/*127:0*/ __Vtemp1184;
    VlWide<4>/*127:0*/ __Vtemp1186;
    VlWide<4>/*127:0*/ __Vtemp1187;
    VlWide<3>/*95:0*/ __Vtemp1188;
    VlWide<4>/*127:0*/ __Vtemp1189;
    VlWide<3>/*95:0*/ __Vtemp1190;
    VlWide<4>/*127:0*/ __Vtemp1191;
    VlWide<3>/*95:0*/ __Vtemp1192;
    VlWide<4>/*127:0*/ __Vtemp1193;
    VlWide<3>/*95:0*/ __Vtemp1194;
    VlWide<4>/*127:0*/ __Vtemp1195;
    VlWide<3>/*95:0*/ __Vtemp1196;
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
            VL_EXTEND_WQ(65,64, __Vtemp1140, vlSelf->SimTop__DOT__rw_addr);
            tracep->chgIData(oldp+17,((0xfffffff8U 
                                       & __Vtemp1140[0U])),32);
            tracep->chgBit(oldp+18,((2U == (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__w_state))));
            tracep->chgQData(oldp+19,(vlSelf->SimTop__DOT__dcache_data_write),64);
            tracep->chgCData(oldp+21,(vlSelf->SimTop__DOT__dcache_mask),8);
            tracep->chgBit(oldp+22,((3U == (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__w_state))));
            tracep->chgBit(oldp+23,((1U == (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__r_state))));
            tracep->chgCData(oldp+24,(((1U == (IData)(vlSelf->SimTop__DOT__arbitrating__DOT__arb_state))
                                        ? 0U : (((- (IData)(
                                                            (2U 
                                                             == (IData)(vlSelf->SimTop__DOT__arbitrating__DOT__arb_state)))) 
                                                 & (IData)(vlSelf->SimTop__DOT__icache_len)) 
                                                | ((- (IData)(
                                                              (1U 
                                                               == (IData)(vlSelf->SimTop__DOT__arbitrating__DOT__arb_state)))) 
                                                   & (IData)(vlSelf->SimTop__DOT__dcache_len))))),8);
            tracep->chgBit(oldp+25,((2U == (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__r_state))));
            tracep->chgQData(oldp+26,((((((- (QData)((IData)(vlSelf->SimTop__DOT__u_icache__DOT__hit_0))) 
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
            tracep->chgQData(oldp+28,((0xfffffffffffffff8ULL 
                                       & vlSelf->SimTop__DOT__u_cpu__DOT__pc)),64);
            tracep->chgCData(oldp+30,(vlSelf->SimTop__DOT__axi_rw__DOT__rw_resp),2);
            tracep->chgBit(oldp+31,(vlSelf->SimTop__DOT__mem_valid));
            tracep->chgBit(oldp+32,(vlSelf->SimTop__DOT__u_cpu__DOT__write_mem_en_mem));
            tracep->chgQData(oldp+33,((0xfffffffffffffff8ULL 
                                       & vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)),64);
            tracep->chgQData(oldp+35,((((((- (QData)((IData)(vlSelf->SimTop__DOT__u_dcache__DOT__hit_0))) 
                                          & ((1U & (IData)(
                                                           (vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem 
                                                            >> 3U)))
                                              ? (((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__u_dcache__DOT__dram_0_data_read_128[3U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->SimTop__DOT__u_dcache__DOT__dram_0_data_read_128[2U])))
                                              : (((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__u_dcache__DOT__dram_0_data_read_128[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->SimTop__DOT__u_dcache__DOT__dram_0_data_read_128[0U]))))) 
                                         | ((- (QData)((IData)(vlSelf->SimTop__DOT__u_dcache__DOT__hit_1))) 
                                            & ((1U 
                                                & (IData)(
                                                          (vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem 
                                                           >> 3U)))
                                                ? (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__u_dcache__DOT__dram_1_data_read_128[3U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->SimTop__DOT__u_dcache__DOT__dram_1_data_read_128[2U])))
                                                : (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__u_dcache__DOT__dram_1_data_read_128[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->SimTop__DOT__u_dcache__DOT__dram_1_data_read_128[0U])))))) 
                                        | ((- (QData)((IData)(vlSelf->SimTop__DOT__u_dcache__DOT__hit_2))) 
                                           & ((1U & (IData)(
                                                            (vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem 
                                                             >> 3U)))
                                               ? (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__u_dcache__DOT__dram_2_data_read_128[3U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->SimTop__DOT__u_dcache__DOT__dram_2_data_read_128[2U])))
                                               : (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__u_dcache__DOT__dram_2_data_read_128[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->SimTop__DOT__u_dcache__DOT__dram_2_data_read_128[0U])))))) 
                                       | ((- (QData)((IData)(vlSelf->SimTop__DOT__u_dcache__DOT__hit_3))) 
                                          & ((1U & (IData)(
                                                           (vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem 
                                                            >> 3U)))
                                              ? (((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__u_dcache__DOT__dram_3_data_read_128[3U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->SimTop__DOT__u_dcache__DOT__dram_3_data_read_128[2U])))
                                              : (((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__u_dcache__DOT__dram_3_data_read_128[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->SimTop__DOT__u_dcache__DOT__dram_3_data_read_128[0U]))))))),64);
            tracep->chgBit(oldp+37,(vlSelf->SimTop__DOT__icache_valid));
            tracep->chgQData(oldp+38,(vlSelf->SimTop__DOT__icache_addr),64);
            tracep->chgCData(oldp+40,(vlSelf->SimTop__DOT__icache_len),8);
            tracep->chgBit(oldp+41,(vlSelf->SimTop__DOT__icache_req));
            tracep->chgQData(oldp+42,(vlSelf->SimTop__DOT__icache_data_read),64);
            tracep->chgBit(oldp+44,(vlSelf->SimTop__DOT__icache_stall));
            tracep->chgBit(oldp+45,(vlSelf->SimTop__DOT__dcache_valid));
            tracep->chgBit(oldp+46,(vlSelf->SimTop__DOT__dcache_req));
            tracep->chgQData(oldp+47,(vlSelf->SimTop__DOT__dcache_addr),64);
            tracep->chgCData(oldp+49,(vlSelf->SimTop__DOT__dcache_len),8);
            tracep->chgQData(oldp+50,(vlSelf->SimTop__DOT__dcache_data_read),64);
            tracep->chgBit(oldp+52,(((((IData)(vlSelf->SimTop__DOT__mem_valid) 
                                       & (1U != (IData)(vlSelf->SimTop__DOT__u_dcache__DOT__dcache_state))) 
                                      & (~ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__write_mem_en_mem))) 
                                     | (((IData)(vlSelf->SimTop__DOT__mem_valid) 
                                         & (5U != (IData)(vlSelf->SimTop__DOT__u_dcache__DOT__dcache_state))) 
                                        & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__write_mem_en_mem)))));
            tracep->chgBit(oldp+53,(vlSelf->SimTop__DOT__rw_valid));
            tracep->chgBit(oldp+54,(vlSelf->SimTop__DOT__axi_rw__DOT__rw_ready));
            tracep->chgBit(oldp+55,(vlSelf->SimTop__DOT__rw_req));
            tracep->chgQData(oldp+56,(vlSelf->SimTop__DOT__rw_addr),64);
            tracep->chgCData(oldp+58,((((- (IData)(
                                                   (2U 
                                                    == (IData)(vlSelf->SimTop__DOT__arbitrating__DOT__arb_state)))) 
                                        & (IData)(vlSelf->SimTop__DOT__icache_len)) 
                                       | ((- (IData)(
                                                     (1U 
                                                      == (IData)(vlSelf->SimTop__DOT__arbitrating__DOT__arb_state)))) 
                                          & (IData)(vlSelf->SimTop__DOT__dcache_len)))),8);
            tracep->chgCData(oldp+59,(vlSelf->SimTop__DOT__arbitrating__DOT__arb_state),2);
            tracep->chgBit(oldp+60,(vlSelf->SimTop__DOT__arb_if_r_hs));
            tracep->chgBit(oldp+61,(vlSelf->SimTop__DOT__arb_if_trans_done));
            tracep->chgBit(oldp+62,(vlSelf->SimTop__DOT__arb_mem_r_hs));
            tracep->chgBit(oldp+63,(vlSelf->SimTop__DOT__arb_mem_trans_done));
            tracep->chgBit(oldp+64,(vlSelf->SimTop__DOT__arbitrating__DOT__zza_pulse_1));
            tracep->chgBit(oldp+65,(vlSelf->SimTop__DOT__axi_stall));
            tracep->chgBit(oldp+66,(((~ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__axi_stall_i)) 
                                     & ((0x7bU == vlSelf->SimTop__DOT__u_cpu__DOT__inst_wb) 
                                        | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__if_uart_wb)))));
            tracep->chgWData(oldp+67,(vlSelf->SimTop__DOT__iram_0_data_read_128),128);
            tracep->chgBit(oldp+71,(vlSelf->SimTop__DOT__iram_0_wen));
            if ((1U & (IData)((vlSelf->SimTop__DOT__u_icache__DOT__re_write_addr 
                               >> 3U)))) {
                __Vtemp1144[0U] = 0xffffffffU;
                __Vtemp1144[1U] = 0xffffffffU;
                __Vtemp1144[2U] = 0U;
                __Vtemp1144[3U] = 0U;
            } else {
                __Vtemp1144[0U] = 0U;
                __Vtemp1144[1U] = 0U;
                __Vtemp1144[2U] = 0xffffffffU;
                __Vtemp1144[3U] = 0xffffffffU;
            }
            tracep->chgWData(oldp+72,(__Vtemp1144),128);
            tracep->chgCData(oldp+76,(vlSelf->SimTop__DOT__iram_0_addr),6);
            VL_EXTEND_WQ(128,64, __Vtemp1146, vlSelf->SimTop__DOT__icache_data_read);
            if ((1U & (IData)((vlSelf->SimTop__DOT__u_icache__DOT__re_write_addr 
                               >> 3U)))) {
                __Vtemp1148[0U] = 0U;
                __Vtemp1148[1U] = 0U;
                __Vtemp1148[2U] = (IData)(vlSelf->SimTop__DOT__icache_data_read);
                __Vtemp1148[3U] = (IData)((vlSelf->SimTop__DOT__icache_data_read 
                                           >> 0x20U));
            } else {
                __Vtemp1148[0U] = __Vtemp1146[0U];
                __Vtemp1148[1U] = __Vtemp1146[1U];
                __Vtemp1148[2U] = __Vtemp1146[2U];
                __Vtemp1148[3U] = __Vtemp1146[3U];
            }
            tracep->chgWData(oldp+77,(__Vtemp1148),128);
            tracep->chgWData(oldp+81,(vlSelf->SimTop__DOT__iram_1_data_read_128),128);
            tracep->chgBit(oldp+85,(vlSelf->SimTop__DOT__iram_1_wen));
            tracep->chgCData(oldp+86,(vlSelf->SimTop__DOT__iram_1_addr),6);
            tracep->chgWData(oldp+87,(vlSelf->SimTop__DOT__iram_2_data_read_128),128);
            tracep->chgBit(oldp+91,(vlSelf->SimTop__DOT__iram_2_wen));
            tracep->chgCData(oldp+92,(vlSelf->SimTop__DOT__iram_2_addr),6);
            tracep->chgWData(oldp+93,(vlSelf->SimTop__DOT__iram_3_data_read_128),128);
            tracep->chgBit(oldp+97,(vlSelf->SimTop__DOT__iram_3_wen));
            tracep->chgCData(oldp+98,(vlSelf->SimTop__DOT__iram_3_addr),6);
            tracep->chgBit(oldp+99,(vlSelf->SimTop__DOT__u_cpu__DOT__clint_wen));
            tracep->chgBit(oldp+100,(((0x200U == (0xffffU 
                                                  & (IData)(
                                                            (vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem 
                                                             >> 0x10U)))) 
                                      & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__read_mem_en_mem))));
            tracep->chgQData(oldp+101,(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem),64);
            tracep->chgQData(oldp+103,(vlSelf->SimTop__DOT__clint_data_read),64);
            tracep->chgBit(oldp+105,((vlSelf->SimTop__DOT__clint__DOT__mtime 
                                      >= vlSelf->SimTop__DOT__clint__DOT__mtimecmp)));
            VL_EXTEND_WQ(65,64, __Vtemp1149, vlSelf->SimTop__DOT__dcache_data_write);
            tracep->chgWData(oldp+106,(__Vtemp1149),65);
            VL_EXTEND_WQ(65,64, __Vtemp1150, vlSelf->SimTop__DOT__rw_addr);
            tracep->chgWData(oldp+109,(__Vtemp1150),65);
            tracep->chgBit(oldp+112,(((IData)(vlSelf->SimTop__DOT__rw_valid) 
                                      & (IData)(vlSelf->SimTop__DOT__rw_req))));
            tracep->chgBit(oldp+113,(((IData)(vlSelf->SimTop__DOT__rw_valid) 
                                      & (~ (IData)(vlSelf->SimTop__DOT__rw_req)))));
            tracep->chgCData(oldp+114,(vlSelf->SimTop__DOT__axi_rw__DOT__w_state),2);
            tracep->chgCData(oldp+115,(vlSelf->SimTop__DOT__axi_rw__DOT__r_state),2);
            tracep->chgBit(oldp+116,((0U == (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__w_state))));
            tracep->chgBit(oldp+117,((0U == (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__r_state))));
            VL_EXTEND_WQ(65,64, __Vtemp1151, vlSelf->SimTop__DOT__rw_addr);
            tracep->chgBit(oldp+118,((0U == (7U & __Vtemp1151[0U]))));
            VL_EXTEND_WQ(65,64, __Vtemp1152, vlSelf->SimTop__DOT__rw_addr);
            tracep->chgCData(oldp+119,((7U & __Vtemp1152[0U])),4);
            VL_EXTEND_WQ(65,64, __Vtemp1153, vlSelf->SimTop__DOT__rw_addr);
            tracep->chgCData(oldp+120,((0xfU & ((IData)(3U) 
                                                + (7U 
                                                   & __Vtemp1153[0U])))),4);
            VL_EXTEND_WQ(65,64, __Vtemp1154, vlSelf->SimTop__DOT__rw_addr);
            tracep->chgBit(oldp+121,((1U & (((IData)(3U) 
                                             + (7U 
                                                & __Vtemp1154[0U])) 
                                            >> 3U))));
            tracep->chgCData(oldp+122,(vlSelf->SimTop__DOT__axi_rw__DOT__len),8);
            VL_EXTEND_WQ(65,64, __Vtemp1155, vlSelf->SimTop__DOT__rw_addr);
            tracep->chgCData(oldp+123,((0x38U & (__Vtemp1155[0U] 
                                                 << 3U))),6);
            VL_EXTEND_WQ(65,64, __Vtemp1156, vlSelf->SimTop__DOT__rw_addr);
            tracep->chgCData(oldp+124,((0x3fU & (- 
                                                 (0x38U 
                                                  & (__Vtemp1156[0U] 
                                                     << 3U))))),6);
            __Vtemp1157[0U] = 0xffffffffU;
            __Vtemp1157[1U] = 0U;
            __Vtemp1157[2U] = 0U;
            __Vtemp1157[3U] = 0U;
            VL_EXTEND_WQ(65,64, __Vtemp1158, vlSelf->SimTop__DOT__rw_addr);
            VL_SHIFTL_WWI(128,128,6, __Vtemp1159, __Vtemp1157, 
                          (0x38U & (__Vtemp1158[0U] 
                                    << 3U)));
            tracep->chgWData(oldp+125,(__Vtemp1159),128);
            __Vtemp1160[0U] = 0xffffffffU;
            __Vtemp1160[1U] = 0U;
            __Vtemp1160[2U] = 0U;
            __Vtemp1160[3U] = 0U;
            VL_EXTEND_WQ(65,64, __Vtemp1161, vlSelf->SimTop__DOT__rw_addr);
            VL_SHIFTL_WWI(128,128,6, __Vtemp1162, __Vtemp1160, 
                          (0x38U & (__Vtemp1161[0U] 
                                    << 3U)));
            tracep->chgQData(oldp+129,((((QData)((IData)(
                                                         __Vtemp1162[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          __Vtemp1162[0U])))),64);
            __Vtemp1163[0U] = 0xffffffffU;
            __Vtemp1163[1U] = 0U;
            __Vtemp1163[2U] = 0U;
            __Vtemp1163[3U] = 0U;
            VL_EXTEND_WQ(65,64, __Vtemp1164, vlSelf->SimTop__DOT__rw_addr);
            VL_SHIFTL_WWI(128,128,6, __Vtemp1165, __Vtemp1163, 
                          (0x38U & (__Vtemp1164[0U] 
                                    << 3U)));
            tracep->chgQData(oldp+131,((((QData)((IData)(
                                                         __Vtemp1165[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          __Vtemp1165[2U])))),64);
            tracep->chgBit(oldp+133,((0U == (IData)(vlSelf->SimTop__DOT__arbitrating__DOT__arb_state))));
            tracep->chgBit(oldp+134,((1U == (IData)(vlSelf->SimTop__DOT__arbitrating__DOT__arb_state))));
            tracep->chgBit(oldp+135,((2U == (IData)(vlSelf->SimTop__DOT__arbitrating__DOT__arb_state))));
            tracep->chgBit(oldp+136,(vlSelf->SimTop__DOT__arbitrating__DOT__situation_if_valid));
            tracep->chgBit(oldp+137,(vlSelf->SimTop__DOT__arbitrating__DOT__zza_pulse_3));
            tracep->chgCData(oldp+138,(vlSelf->SimTop__DOT__arbitrating__DOT__zza_count),2);
            tracep->chgBit(oldp+139,(vlSelf->SimTop__DOT__arbitrating__DOT__zza_pulse));
            tracep->chgBit(oldp+140,(((0U == (IData)(vlSelf->SimTop__DOT__arbitrating__DOT__arb_state))
                                       ? 0U : (1U & 
                                               ((1U 
                                                 == (IData)(vlSelf->SimTop__DOT__arbitrating__DOT__arb_state))
                                                 ? (IData)(vlSelf->SimTop__DOT__dcache_valid)
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelf->SimTop__DOT__arbitrating__DOT__arb_state))
                                                  ? (IData)(vlSelf->SimTop__DOT__icache_valid)
                                                  : 0U))))));
            tracep->chgCData(oldp+141,((0x7fU & (IData)(
                                                        (vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem 
                                                         >> 3U)))),7);
            tracep->chgQData(oldp+142,((vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem 
                                        >> 0xaU)),54);
            tracep->chgWData(oldp+144,(vlSelf->SimTop__DOT__u_dcache__DOT__valid_0),128);
            tracep->chgWData(oldp+148,(vlSelf->SimTop__DOT__u_dcache__DOT__dirty_0),128);
            tracep->chgWData(oldp+152,(vlSelf->SimTop__DOT__u_dcache__DOT__valid_1),128);
            tracep->chgWData(oldp+156,(vlSelf->SimTop__DOT__u_dcache__DOT__dirty_1),128);
            tracep->chgWData(oldp+160,(vlSelf->SimTop__DOT__u_dcache__DOT__valid_2),128);
            tracep->chgWData(oldp+164,(vlSelf->SimTop__DOT__u_dcache__DOT__dirty_2),128);
            tracep->chgWData(oldp+168,(vlSelf->SimTop__DOT__u_dcache__DOT__valid_3),128);
            tracep->chgWData(oldp+172,(vlSelf->SimTop__DOT__u_dcache__DOT__dirty_3),128);
            tracep->chgCData(oldp+176,(vlSelf->SimTop__DOT__u_dcache__DOT__sel_dram),2);
            tracep->chgBit(oldp+177,(vlSelf->SimTop__DOT__u_dcache__DOT__hit_0));
            tracep->chgBit(oldp+178,(vlSelf->SimTop__DOT__u_dcache__DOT__hit_1));
            tracep->chgBit(oldp+179,(vlSelf->SimTop__DOT__u_dcache__DOT__hit_2));
            tracep->chgBit(oldp+180,(vlSelf->SimTop__DOT__u_dcache__DOT__hit_3));
            tracep->chgCData(oldp+181,((((IData)(vlSelf->SimTop__DOT__u_dcache__DOT__hit_3) 
                                         << 3U) | (
                                                   ((IData)(vlSelf->SimTop__DOT__u_dcache__DOT__hit_2) 
                                                    << 2U) 
                                                   | (((IData)(vlSelf->SimTop__DOT__u_dcache__DOT__hit_1) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->SimTop__DOT__u_dcache__DOT__hit_0))))),4);
            tracep->chgBit(oldp+182,(vlSelf->SimTop__DOT__u_dcache__DOT__hit));
            tracep->chgBit(oldp+183,((1U & (~ (IData)(vlSelf->SimTop__DOT__u_dcache__DOT__hit)))));
            tracep->chgBit(oldp+184,(vlSelf->SimTop__DOT__u_dcache__DOT__is_dirty[0]));
            tracep->chgBit(oldp+185,(vlSelf->SimTop__DOT__u_dcache__DOT__is_dirty[1]));
            tracep->chgBit(oldp+186,(vlSelf->SimTop__DOT__u_dcache__DOT__is_dirty[2]));
            tracep->chgBit(oldp+187,(vlSelf->SimTop__DOT__u_dcache__DOT__is_dirty[3]));
            tracep->chgQData(oldp+188,(vlSelf->SimTop__DOT__u_dcache__DOT__dcache_ram_addr),64);
            tracep->chgCData(oldp+190,(vlSelf->SimTop__DOT__u_dcache__DOT__dcache_state),3);
            tracep->chgCData(oldp+191,(vlSelf->SimTop__DOT__u_dcache__DOT__tmp_counter),2);
            tracep->chgBit(oldp+192,((0U == (IData)(vlSelf->SimTop__DOT__u_dcache__DOT__dcache_state))));
            tracep->chgBit(oldp+193,((1U == (IData)(vlSelf->SimTop__DOT__u_dcache__DOT__dcache_state))));
            tracep->chgBit(oldp+194,((3U == (IData)(vlSelf->SimTop__DOT__u_dcache__DOT__dcache_state))));
            tracep->chgBit(oldp+195,((4U == (IData)(vlSelf->SimTop__DOT__u_dcache__DOT__dcache_state))));
            tracep->chgBit(oldp+196,((5U == (IData)(vlSelf->SimTop__DOT__u_dcache__DOT__dcache_state))));
            tracep->chgWData(oldp+197,(vlSelf->SimTop__DOT__u_dcache__DOT__dram_0_data_read_128),128);
            tracep->chgWData(oldp+201,(vlSelf->SimTop__DOT__u_dcache__DOT__dram_1_data_read_128),128);
            tracep->chgWData(oldp+205,(vlSelf->SimTop__DOT__u_dcache__DOT__dram_2_data_read_128),128);
            tracep->chgWData(oldp+209,(vlSelf->SimTop__DOT__u_dcache__DOT__dram_3_data_read_128),128);
            tracep->chgBit(oldp+213,(((0U == (IData)(vlSelf->SimTop__DOT__u_dcache__DOT__sel_dram)) 
                                      & ((3U == (IData)(vlSelf->SimTop__DOT__u_dcache__DOT__dcache_state)) 
                                         & ((IData)(vlSelf->SimTop__DOT__arb_mem_r_hs) 
                                            | (IData)(vlSelf->SimTop__DOT__arb_mem_trans_done))))));
            tracep->chgBit(oldp+214,(((IData)(vlSelf->SimTop__DOT__u_dcache__DOT__hit_0) 
                                      & (5U == (IData)(vlSelf->SimTop__DOT__u_dcache__DOT__dcache_state)))));
            tracep->chgBit(oldp+215,(((1U == (IData)(vlSelf->SimTop__DOT__u_dcache__DOT__sel_dram)) 
                                      & ((3U == (IData)(vlSelf->SimTop__DOT__u_dcache__DOT__dcache_state)) 
                                         & ((IData)(vlSelf->SimTop__DOT__arb_mem_r_hs) 
                                            | (IData)(vlSelf->SimTop__DOT__arb_mem_trans_done))))));
            tracep->chgBit(oldp+216,(((IData)(vlSelf->SimTop__DOT__u_dcache__DOT__hit_1) 
                                      & (5U == (IData)(vlSelf->SimTop__DOT__u_dcache__DOT__dcache_state)))));
            tracep->chgBit(oldp+217,(((2U == (IData)(vlSelf->SimTop__DOT__u_dcache__DOT__sel_dram)) 
                                      & ((3U == (IData)(vlSelf->SimTop__DOT__u_dcache__DOT__dcache_state)) 
                                         & ((IData)(vlSelf->SimTop__DOT__arb_mem_r_hs) 
                                            | (IData)(vlSelf->SimTop__DOT__arb_mem_trans_done))))));
            tracep->chgBit(oldp+218,(((IData)(vlSelf->SimTop__DOT__u_dcache__DOT__hit_2) 
                                      & (5U == (IData)(vlSelf->SimTop__DOT__u_dcache__DOT__dcache_state)))));
            tracep->chgBit(oldp+219,(((3U == (IData)(vlSelf->SimTop__DOT__u_dcache__DOT__sel_dram)) 
                                      & ((3U == (IData)(vlSelf->SimTop__DOT__u_dcache__DOT__dcache_state)) 
                                         & ((IData)(vlSelf->SimTop__DOT__arb_mem_r_hs) 
                                            | (IData)(vlSelf->SimTop__DOT__arb_mem_trans_done))))));
            tracep->chgBit(oldp+220,(((IData)(vlSelf->SimTop__DOT__u_dcache__DOT__hit_3) 
                                      & (5U == (IData)(vlSelf->SimTop__DOT__u_dcache__DOT__dcache_state)))));
            tracep->chgBit(oldp+221,((1U & (~ (((0U 
                                                 == (IData)(vlSelf->SimTop__DOT__u_dcache__DOT__sel_dram)) 
                                                & ((3U 
                                                    == (IData)(vlSelf->SimTop__DOT__u_dcache__DOT__dcache_state)) 
                                                   & ((IData)(vlSelf->SimTop__DOT__arb_mem_r_hs) 
                                                      | (IData)(vlSelf->SimTop__DOT__arb_mem_trans_done)))) 
                                               | ((IData)(vlSelf->SimTop__DOT__u_dcache__DOT__hit_0) 
                                                  & (5U 
                                                     == (IData)(vlSelf->SimTop__DOT__u_dcache__DOT__dcache_state))))))));
            tracep->chgBit(oldp+222,((1U & (~ (((1U 
                                                 == (IData)(vlSelf->SimTop__DOT__u_dcache__DOT__sel_dram)) 
                                                & ((3U 
                                                    == (IData)(vlSelf->SimTop__DOT__u_dcache__DOT__dcache_state)) 
                                                   & ((IData)(vlSelf->SimTop__DOT__arb_mem_r_hs) 
                                                      | (IData)(vlSelf->SimTop__DOT__arb_mem_trans_done)))) 
                                               | ((IData)(vlSelf->SimTop__DOT__u_dcache__DOT__hit_1) 
                                                  & (5U 
                                                     == (IData)(vlSelf->SimTop__DOT__u_dcache__DOT__dcache_state))))))));
            tracep->chgBit(oldp+223,((1U & (~ (((2U 
                                                 == (IData)(vlSelf->SimTop__DOT__u_dcache__DOT__sel_dram)) 
                                                & ((3U 
                                                    == (IData)(vlSelf->SimTop__DOT__u_dcache__DOT__dcache_state)) 
                                                   & ((IData)(vlSelf->SimTop__DOT__arb_mem_r_hs) 
                                                      | (IData)(vlSelf->SimTop__DOT__arb_mem_trans_done)))) 
                                               | ((IData)(vlSelf->SimTop__DOT__u_dcache__DOT__hit_2) 
                                                  & (5U 
                                                     == (IData)(vlSelf->SimTop__DOT__u_dcache__DOT__dcache_state))))))));
            tracep->chgBit(oldp+224,((1U & (~ (((3U 
                                                 == (IData)(vlSelf->SimTop__DOT__u_dcache__DOT__sel_dram)) 
                                                & ((3U 
                                                    == (IData)(vlSelf->SimTop__DOT__u_dcache__DOT__dcache_state)) 
                                                   & ((IData)(vlSelf->SimTop__DOT__arb_mem_r_hs) 
                                                      | (IData)(vlSelf->SimTop__DOT__arb_mem_trans_done)))) 
                                               | ((IData)(vlSelf->SimTop__DOT__u_dcache__DOT__hit_3) 
                                                  & (5U 
                                                     == (IData)(vlSelf->SimTop__DOT__u_dcache__DOT__dcache_state))))))));
            if ((1U & (IData)((vlSelf->SimTop__DOT__u_dcache__DOT__dcache_ram_addr 
                               >> 3U)))) {
                __Vtemp1169[0U] = 0xffffffffU;
                __Vtemp1169[1U] = 0xffffffffU;
                __Vtemp1169[2U] = 0U;
                __Vtemp1169[3U] = 0U;
            } else {
                __Vtemp1169[0U] = 0U;
                __Vtemp1169[1U] = 0U;
                __Vtemp1169[2U] = 0xffffffffU;
                __Vtemp1169[3U] = 0xffffffffU;
            }
            tracep->chgWData(oldp+225,(__Vtemp1169),128);
            tracep->chgCData(oldp+229,(vlSelf->SimTop__DOT__u_dcache__DOT__dram_addr),6);
            VL_EXTEND_WQ(128,64, __Vtemp1171, vlSelf->SimTop__DOT__dcache_data_read);
            if ((1U & (IData)((vlSelf->SimTop__DOT__u_dcache__DOT__dcache_ram_addr 
                               >> 3U)))) {
                __Vtemp1173[0U] = 0U;
                __Vtemp1173[1U] = 0U;
                __Vtemp1173[2U] = (IData)(vlSelf->SimTop__DOT__dcache_data_read);
                __Vtemp1173[3U] = (IData)((vlSelf->SimTop__DOT__dcache_data_read 
                                           >> 0x20U));
            } else {
                __Vtemp1173[0U] = __Vtemp1171[0U];
                __Vtemp1173[1U] = __Vtemp1171[1U];
                __Vtemp1173[2U] = __Vtemp1171[2U];
                __Vtemp1173[3U] = __Vtemp1171[3U];
            }
            tracep->chgWData(oldp+230,(__Vtemp1173),128);
            tracep->chgBit(oldp+234,((((0U == (IData)(vlSelf->SimTop__DOT__u_dcache__DOT__sel_dram)) 
                                       & ((3U == (IData)(vlSelf->SimTop__DOT__u_dcache__DOT__dcache_state)) 
                                          & ((IData)(vlSelf->SimTop__DOT__arb_mem_r_hs) 
                                             | (IData)(vlSelf->SimTop__DOT__arb_mem_trans_done)))) 
                                      | ((IData)(vlSelf->SimTop__DOT__u_dcache__DOT__hit_0) 
                                         & (5U == (IData)(vlSelf->SimTop__DOT__u_dcache__DOT__dcache_state))))));
            tracep->chgBit(oldp+235,((((1U == (IData)(vlSelf->SimTop__DOT__u_dcache__DOT__sel_dram)) 
                                       & ((3U == (IData)(vlSelf->SimTop__DOT__u_dcache__DOT__dcache_state)) 
                                          & ((IData)(vlSelf->SimTop__DOT__arb_mem_r_hs) 
                                             | (IData)(vlSelf->SimTop__DOT__arb_mem_trans_done)))) 
                                      | ((IData)(vlSelf->SimTop__DOT__u_dcache__DOT__hit_1) 
                                         & (5U == (IData)(vlSelf->SimTop__DOT__u_dcache__DOT__dcache_state))))));
            tracep->chgBit(oldp+236,((((2U == (IData)(vlSelf->SimTop__DOT__u_dcache__DOT__sel_dram)) 
                                       & ((3U == (IData)(vlSelf->SimTop__DOT__u_dcache__DOT__dcache_state)) 
                                          & ((IData)(vlSelf->SimTop__DOT__arb_mem_r_hs) 
                                             | (IData)(vlSelf->SimTop__DOT__arb_mem_trans_done)))) 
                                      | ((IData)(vlSelf->SimTop__DOT__u_dcache__DOT__hit_2) 
                                         & (5U == (IData)(vlSelf->SimTop__DOT__u_dcache__DOT__dcache_state))))));
            tracep->chgBit(oldp+237,((((3U == (IData)(vlSelf->SimTop__DOT__u_dcache__DOT__sel_dram)) 
                                       & ((3U == (IData)(vlSelf->SimTop__DOT__u_dcache__DOT__dcache_state)) 
                                          & ((IData)(vlSelf->SimTop__DOT__arb_mem_r_hs) 
                                             | (IData)(vlSelf->SimTop__DOT__arb_mem_trans_done)))) 
                                      | ((IData)(vlSelf->SimTop__DOT__u_dcache__DOT__hit_3) 
                                         & (5U == (IData)(vlSelf->SimTop__DOT__u_dcache__DOT__dcache_state))))));
            tracep->chgWData(oldp+238,(vlSelf->SimTop__DOT__u_icache__DOT__valid_0),128);
            tracep->chgWData(oldp+242,(vlSelf->SimTop__DOT__u_icache__DOT__valid_1),128);
            tracep->chgWData(oldp+246,(vlSelf->SimTop__DOT__u_icache__DOT__valid_2),128);
            tracep->chgWData(oldp+250,(vlSelf->SimTop__DOT__u_icache__DOT__valid_3),128);
            tracep->chgCData(oldp+254,(vlSelf->SimTop__DOT__u_icache__DOT__iram_sel),2);
            tracep->chgCData(oldp+255,((0x7fU & (IData)(
                                                        (vlSelf->SimTop__DOT__u_cpu__DOT__pc 
                                                         >> 3U)))),7);
            tracep->chgQData(oldp+256,((vlSelf->SimTop__DOT__u_cpu__DOT__pc 
                                        >> 0xaU)),54);
            tracep->chgBit(oldp+258,(vlSelf->SimTop__DOT__u_icache__DOT__hit_0));
            tracep->chgBit(oldp+259,(vlSelf->SimTop__DOT__u_icache__DOT__hit_1));
            tracep->chgBit(oldp+260,(vlSelf->SimTop__DOT__u_icache__DOT__hit_2));
            tracep->chgBit(oldp+261,(vlSelf->SimTop__DOT__u_icache__DOT__hit_3));
            tracep->chgCData(oldp+262,((((IData)(vlSelf->SimTop__DOT__u_icache__DOT__hit_3) 
                                         << 3U) | (
                                                   ((IData)(vlSelf->SimTop__DOT__u_icache__DOT__hit_2) 
                                                    << 2U) 
                                                   | (((IData)(vlSelf->SimTop__DOT__u_icache__DOT__hit_1) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->SimTop__DOT__u_icache__DOT__hit_0))))),4);
            tracep->chgBit(oldp+263,(vlSelf->SimTop__DOT__u_icache__DOT__hit));
            tracep->chgCData(oldp+264,(vlSelf->SimTop__DOT__u_icache__DOT__icache_state),2);
            tracep->chgBit(oldp+265,((0U == (IData)(vlSelf->SimTop__DOT__u_icache__DOT__icache_state))));
            tracep->chgBit(oldp+266,((1U == (IData)(vlSelf->SimTop__DOT__u_icache__DOT__icache_state))));
            tracep->chgBit(oldp+267,((2U == (IData)(vlSelf->SimTop__DOT__u_icache__DOT__icache_state))));
            tracep->chgQData(oldp+268,(vlSelf->SimTop__DOT__u_icache__DOT__addr_icache_read),64);
            tracep->chgCData(oldp+270,(vlSelf->SimTop__DOT__u_icache__DOT__re_write_state),2);
            tracep->chgBit(oldp+271,((0U == (IData)(vlSelf->SimTop__DOT__u_icache__DOT__re_write_state))));
            tracep->chgBit(oldp+272,((1U == (IData)(vlSelf->SimTop__DOT__u_icache__DOT__re_write_state))));
            tracep->chgQData(oldp+273,(vlSelf->SimTop__DOT__u_icache__DOT__re_write_addr),64);
            tracep->chgBit(oldp+275,(vlSelf->SimTop__DOT__u_icache__DOT__icache_valid_pre));
            tracep->chgBit(oldp+276,(((1U == (IData)(vlSelf->SimTop__DOT__u_icache__DOT__re_write_state)) 
                                      & (IData)(vlSelf->SimTop__DOT__arb_if_trans_done))));
            tracep->chgBit(oldp+277,(vlSelf->SimTop__DOT__u_icache__DOT__icache_stall_pre));
            tracep->chgBit(oldp+278,((1U & (~ (IData)(vlSelf->SimTop__DOT__iram_0_wen)))));
            __Vtemp1178[0U] = (~ ((1U & (IData)((vlSelf->SimTop__DOT__u_icache__DOT__re_write_addr 
                                                 >> 3U)))
                                   ? 0xffffffffU : 0U));
            __Vtemp1178[1U] = (~ ((1U & (IData)((vlSelf->SimTop__DOT__u_icache__DOT__re_write_addr 
                                                 >> 3U)))
                                   ? 0xffffffffU : 0U));
            __Vtemp1178[2U] = (~ ((1U & (IData)((vlSelf->SimTop__DOT__u_icache__DOT__re_write_addr 
                                                 >> 3U)))
                                   ? 0U : 0xffffffffU));
            __Vtemp1178[3U] = (~ ((1U & (IData)((vlSelf->SimTop__DOT__u_icache__DOT__re_write_addr 
                                                 >> 3U)))
                                   ? 0U : 0xffffffffU));
            tracep->chgWData(oldp+279,(__Vtemp1178),128);
            tracep->chgBit(oldp+283,((1U & (~ (IData)(vlSelf->SimTop__DOT__iram_1_wen)))));
            tracep->chgBit(oldp+284,((1U & (~ (IData)(vlSelf->SimTop__DOT__iram_2_wen)))));
            tracep->chgBit(oldp+285,((1U & (~ (IData)(vlSelf->SimTop__DOT__iram_3_wen)))));
            tracep->chgQData(oldp+286,(vlSelf->SimTop__DOT__u_cpu__DOT__pc_id),64);
            tracep->chgQData(oldp+288,(vlSelf->SimTop__DOT__u_cpu__DOT__pc_ex),64);
            tracep->chgQData(oldp+290,(vlSelf->SimTop__DOT__u_cpu__DOT__pc_mem),64);
            tracep->chgQData(oldp+292,(vlSelf->SimTop__DOT__u_cpu__DOT__pc_wb),64);
            tracep->chgIData(oldp+294,(vlSelf->SimTop__DOT__u_cpu__DOT__inst_id),32);
            tracep->chgIData(oldp+295,(vlSelf->SimTop__DOT__u_cpu__DOT__inst_if),32);
            tracep->chgIData(oldp+296,(vlSelf->SimTop__DOT__u_cpu__DOT__inst_ex),32);
            tracep->chgIData(oldp+297,(vlSelf->SimTop__DOT__u_cpu__DOT__inst_mem),32);
            tracep->chgIData(oldp+298,(vlSelf->SimTop__DOT__u_cpu__DOT__inst_wb),32);
            tracep->chgCData(oldp+299,(vlSelf->SimTop__DOT__u_cpu__DOT__optype),3);
            tracep->chgBit(oldp+300,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_op_id));
            tracep->chgBit(oldp+301,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_op_ex));
            tracep->chgBit(oldp+302,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_op_mem));
            tracep->chgBit(oldp+303,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_jalr));
            tracep->chgBit(oldp+304,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_regimm_ex));
            tracep->chgBit(oldp+305,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_regimm_mem));
            tracep->chgBit(oldp+306,(vlSelf->SimTop__DOT__u_cpu__DOT__reg1_ren));
            tracep->chgBit(oldp+307,(((((((((((((((
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
            tracep->chgBit(oldp+308,(vlSelf->SimTop__DOT__u_cpu__DOT__csr_ren));
            tracep->chgBit(oldp+309,(((((((((((((((
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
            tracep->chgBit(oldp+310,(((((((((((((((
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
            tracep->chgBit(oldp+311,(vlSelf->SimTop__DOT__u_cpu__DOT__wen_ex));
            tracep->chgBit(oldp+312,(vlSelf->SimTop__DOT__u_cpu__DOT__wen_mem));
            tracep->chgBit(oldp+313,(vlSelf->SimTop__DOT__u_cpu__DOT__wen_wb));
            tracep->chgBit(oldp+314,(((((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrc) 
                                          | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrs)) 
                                         | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrci)) 
                                        | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrsi)) 
                                       | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrwi)) 
                                      | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrw))));
            tracep->chgBit(oldp+315,(vlSelf->SimTop__DOT__u_cpu__DOT__csr_wen_ex));
            tracep->chgBit(oldp+316,(vlSelf->SimTop__DOT__u_cpu__DOT__csr_wen_mem));
            tracep->chgBit(oldp+317,(vlSelf->SimTop__DOT__u_cpu__DOT__csr_wen_wb));
            tracep->chgCData(oldp+318,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_id),5);
            tracep->chgCData(oldp+319,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_ex),5);
            tracep->chgCData(oldp+320,(vlSelf->SimTop__DOT__u_cpu__DOT__csr_alu_op_id),3);
            tracep->chgCData(oldp+321,(vlSelf->SimTop__DOT__u_cpu__DOT__csr_alu_op_ex),3);
            tracep->chgBit(oldp+322,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lui));
            tracep->chgBit(oldp+323,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_only_imm_ex));
            tracep->chgBit(oldp+324,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_auipc) 
                                       | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_jal)) 
                                      | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_jalr))));
            tracep->chgBit(oldp+325,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_pc_reg1_ex));
            tracep->chgBit(oldp+326,(((((((((((((((
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
            tracep->chgBit(oldp+327,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_imm_reg2_ex));
            tracep->chgBit(oldp+328,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrwi) 
                                       | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrci)) 
                                      | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrsi))));
            tracep->chgBit(oldp+329,(vlSelf->SimTop__DOT__u_cpu__DOT__csr_if_zimm_ex));
            tracep->chgCData(oldp+330,((0x1fU & (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                                 >> 7U))),5);
            tracep->chgCData(oldp+331,(vlSelf->SimTop__DOT__u_cpu__DOT__rd_ex),5);
            tracep->chgCData(oldp+332,(vlSelf->SimTop__DOT__u_cpu__DOT__rd_mem),5);
            tracep->chgCData(oldp+333,(vlSelf->SimTop__DOT__u_cpu__DOT__rd_wb),5);
            tracep->chgSData(oldp+334,((vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                        >> 0x14U)),12);
            tracep->chgSData(oldp+335,(vlSelf->SimTop__DOT__u_cpu__DOT__csr_ex),12);
            tracep->chgSData(oldp+336,(vlSelf->SimTop__DOT__u_cpu__DOT__csr_mem),12);
            tracep->chgSData(oldp+337,(vlSelf->SimTop__DOT__u_cpu__DOT__csr_wb),12);
            tracep->chgCData(oldp+338,((0x1fU & (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                                 >> 0xfU))),5);
            tracep->chgCData(oldp+339,(vlSelf->SimTop__DOT__u_cpu__DOT__zimm_ex),5);
            tracep->chgCData(oldp+340,(vlSelf->SimTop__DOT__u_cpu__DOT__rs1_ex),5);
            tracep->chgCData(oldp+341,((0x1fU & (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                                 >> 0x14U))),5);
            tracep->chgCData(oldp+342,(vlSelf->SimTop__DOT__u_cpu__DOT__rs2_ex),5);
            tracep->chgCData(oldp+343,(vlSelf->SimTop__DOT__u_cpu__DOT__rs2_mem),5);
            tracep->chgBit(oldp+344,((((((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lb) 
                                           | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lbu)) 
                                          | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lwu)) 
                                         | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lw)) 
                                        | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_ld)) 
                                       | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lh)) 
                                      | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lhu))));
            tracep->chgBit(oldp+345,(vlSelf->SimTop__DOT__u_cpu__DOT__read_mem_en_ex));
            tracep->chgBit(oldp+346,(vlSelf->SimTop__DOT__u_cpu__DOT__read_mem_en_mem));
            tracep->chgBit(oldp+347,(vlSelf->SimTop__DOT__u_cpu__DOT__read_mem_en_wb));
            tracep->chgBit(oldp+348,(((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sd) 
                                        | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sb)) 
                                       | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sw)) 
                                      | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sh))));
            tracep->chgBit(oldp+349,(vlSelf->SimTop__DOT__u_cpu__DOT__write_mem_en_ex));
            tracep->chgBit(oldp+350,(vlSelf->SimTop__DOT__u_cpu__DOT__write_mem_en_wb));
            tracep->chgCData(oldp+351,(vlSelf->SimTop__DOT__u_cpu__DOT__mem_ctrl_id),4);
            tracep->chgCData(oldp+352,(vlSelf->SimTop__DOT__u_cpu__DOT__mem_ctrl_ex),4);
            tracep->chgCData(oldp+353,(vlSelf->SimTop__DOT__u_cpu__DOT__mem_ctrl_mem),4);
            tracep->chgCData(oldp+354,(vlSelf->SimTop__DOT__u_cpu__DOT__value_width_ctrl_id),4);
            tracep->chgCData(oldp+355,(vlSelf->SimTop__DOT__u_cpu__DOT__value_width_ctrl_ex),4);
            tracep->chgCData(oldp+356,(vlSelf->SimTop__DOT__u_cpu__DOT__branch_type_id),3);
            tracep->chgCData(oldp+357,(vlSelf->SimTop__DOT__u_cpu__DOT__branch_type_ex),3);
            tracep->chgCData(oldp+358,(vlSelf->SimTop__DOT__u_cpu__DOT__branch_type_mem),3);
            tracep->chgCData(oldp+359,(vlSelf->SimTop__DOT__u_cpu__DOT__branch_type_wb),3);
            tracep->chgBit(oldp+360,(((((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_divw) 
                                          | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_divuw)) 
                                         | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_remw)) 
                                        | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_remuw)) 
                                       | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_srliw)) 
                                      | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_srlw))));
            tracep->chgBit(oldp+361,(vlSelf->SimTop__DOT__u_cpu__DOT__operator_a_w_ex));
            tracep->chgBit(oldp+362,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sraiw) 
                                      | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sraw))));
            tracep->chgBit(oldp+363,(vlSelf->SimTop__DOT__u_cpu__DOT__operator_a_w_s_ex));
            tracep->chgBit(oldp+364,(((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_divw) 
                                        | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_divuw)) 
                                       | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_remw)) 
                                      | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_remuw))));
            tracep->chgBit(oldp+365,(vlSelf->SimTop__DOT__u_cpu__DOT__operator_b_w_ex));
            tracep->chgBit(oldp+366,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sll) 
                                       | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sra)) 
                                      | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_srl))));
            tracep->chgBit(oldp+367,(vlSelf->SimTop__DOT__u_cpu__DOT__if_inst_sll_ex));
            tracep->chgBit(oldp+368,((0x73U == vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)));
            tracep->chgBit(oldp+369,(vlSelf->SimTop__DOT__u_cpu__DOT__environment_call_ex));
            tracep->chgBit(oldp+370,(vlSelf->SimTop__DOT__u_cpu__DOT__environment_call_mem));
            tracep->chgBit(oldp+371,(vlSelf->SimTop__DOT__u_cpu__DOT__environment_call_wb));
            tracep->chgBit(oldp+372,((0x30200073U == vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)));
            tracep->chgBit(oldp+373,(vlSelf->SimTop__DOT__u_cpu__DOT__m_mode_return_ex));
            tracep->chgBit(oldp+374,(vlSelf->SimTop__DOT__u_cpu__DOT__m_mode_return_mem));
            tracep->chgBit(oldp+375,(vlSelf->SimTop__DOT__u_cpu__DOT__m_mode_return_wb));
            tracep->chgBit(oldp+376,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_aes64ds));
            tracep->chgBit(oldp+377,(vlSelf->SimTop__DOT__u_cpu__DOT__if_inst_aes64ds_ex));
            tracep->chgBit(oldp+378,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_aes64dsm));
            tracep->chgBit(oldp+379,(vlSelf->SimTop__DOT__u_cpu__DOT__if_inst_aes64dsm_ex));
            tracep->chgBit(oldp+380,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_aes64es));
            tracep->chgBit(oldp+381,(vlSelf->SimTop__DOT__u_cpu__DOT__if_inst_aes64es_ex));
            tracep->chgBit(oldp+382,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_aes64esm));
            tracep->chgBit(oldp+383,(vlSelf->SimTop__DOT__u_cpu__DOT__if_inst_aes64esm_ex));
            tracep->chgBit(oldp+384,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_aes64im));
            tracep->chgBit(oldp+385,(vlSelf->SimTop__DOT__u_cpu__DOT__if_inst_aes64im_ex));
            tracep->chgBit(oldp+386,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_aes64ks1i));
            tracep->chgBit(oldp+387,(vlSelf->SimTop__DOT__u_cpu__DOT__if_inst_aes64ks1i_ex));
            tracep->chgBit(oldp+388,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_aes64ks2));
            tracep->chgBit(oldp+389,(vlSelf->SimTop__DOT__u_cpu__DOT__if_inst_aes64ks2_ex));
            tracep->chgCData(oldp+390,((0xfU & (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                                >> 0x14U))),4);
            tracep->chgCData(oldp+391,(vlSelf->SimTop__DOT__u_cpu__DOT__ks1i_rnum_ex),4);
            tracep->chgBit(oldp+392,(vlSelf->SimTop__DOT__u_cpu__DOT__ebreak_ex));
            tracep->chgBit(oldp+393,(vlSelf->SimTop__DOT__u_cpu__DOT__ebreak_mem));
            tracep->chgBit(oldp+394,(vlSelf->SimTop__DOT__u_cpu__DOT__ebreak_wb));
            tracep->chgQData(oldp+395,(vlSelf->SimTop__DOT__u_cpu__DOT__csr_value_writeback_mem),64);
            tracep->chgQData(oldp+397,(vlSelf->SimTop__DOT__u_cpu__DOT__csr_value_writeback_wb),64);
            tracep->chgBit(oldp+399,((((0xaU == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_ex)) 
                                       & (~ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_valid))) 
                                      | ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_ready) 
                                         & (2U != (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__div_state))))));
            tracep->chgQData(oldp+400,(vlSelf->SimTop__DOT__u_cpu__DOT__read_mem_value),64);
            tracep->chgBit(oldp+402,(vlSelf->SimTop__DOT__u_cpu__DOT__if_clint_mem));
            tracep->chgBit(oldp+403,(vlSelf->SimTop__DOT__u_cpu__DOT__if_clint_wb));
            tracep->chgBit(oldp+404,(vlSelf->SimTop__DOT__u_cpu__DOT__if_uart_mem));
            tracep->chgBit(oldp+405,(vlSelf->SimTop__DOT__u_cpu__DOT__if_uart_wb));
            tracep->chgQData(oldp+406,(vlSelf->SimTop__DOT__u_cpu__DOT__pc),64);
            tracep->chgQData(oldp+408,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_ex),64);
            tracep->chgQData(oldp+410,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_mem),64);
            tracep->chgQData(oldp+412,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_wb),64);
            tracep->chgQData(oldp+414,(vlSelf->SimTop__DOT__u_cpu__DOT__reg1_value_ex),64);
            tracep->chgQData(oldp+416,(vlSelf->SimTop__DOT__u_cpu__DOT__reg2_value_ex),64);
            tracep->chgQData(oldp+418,(vlSelf->SimTop__DOT__u_cpu__DOT__reg2_value_mem),64);
            tracep->chgQData(oldp+420,(vlSelf->SimTop__DOT__u_cpu__DOT__csr_value_ex),64);
            tracep->chgQData(oldp+422,(vlSelf->SimTop__DOT__u_cpu__DOT__reg_write_value_wb),64);
            tracep->chgBit(oldp+424,(vlSelf->SimTop__DOT__u_cpu__DOT__m_time_interrupt));
            tracep->chgBit(oldp+425,(vlSelf->SimTop__DOT__u_cpu__DOT__m_time_interrupt_trigger));
            tracep->chgQData(oldp+426,(vlSelf->SimTop__DOT__u_cpu__DOT__imm_id),64);
            tracep->chgQData(oldp+428,(vlSelf->SimTop__DOT__u_cpu__DOT__imm_ex),64);
            tracep->chgQData(oldp+430,(vlSelf->SimTop__DOT__u_cpu__DOT__sext_read_mem_value_mem),64);
            tracep->chgQData(oldp+432,(vlSelf->SimTop__DOT__u_cpu__DOT__sext_read_mem_value_wb),64);
            tracep->chgQData(oldp+434,(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_wb),64);
            tracep->chgBit(oldp+436,(vlSelf->SimTop__DOT__u_cpu__DOT__pipeline_stall_ex));
            tracep->chgBit(oldp+437,(vlSelf->SimTop__DOT__u_cpu__DOT__pipeline_stall_mem));
            tracep->chgBit(oldp+438,(vlSelf->SimTop__DOT__u_cpu__DOT__pipeline_stall_wb));
            tracep->chgQData(oldp+439,(vlSelf->SimTop__DOT__u_cpu__DOT__reg_write_value_mem),64);
            tracep->chgBit(oldp+441,(vlSelf->SimTop__DOT__u_cpu__DOT__axi_stall_i));
            tracep->chgBit(oldp+442,(vlSelf->SimTop__DOT__u_cpu__DOT__peripheral_stall));
            tracep->chgBit(oldp+443,(vlSelf->SimTop__DOT__u_cpu__DOT__inst_valid_3));
            tracep->chgBit(oldp+444,((((((0x7bU == vlSelf->SimTop__DOT__u_cpu__DOT__inst_wb) 
                                         | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__m_time_interrupt)) 
                                        | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__if_clint_wb)) 
                                       | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__if_uart_wb)) 
                                      | (0xb00U == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__csr_wb)))));
            tracep->chgCData(oldp+445,((0x7fU & vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)),7);
            tracep->chgCData(oldp+446,((7U & (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                              >> 0xcU))),3);
            tracep->chgBit(oldp+447,((0U == vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)));
            tracep->chgBit(oldp+448,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrc));
            tracep->chgBit(oldp+449,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrci));
            tracep->chgBit(oldp+450,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrs));
            tracep->chgBit(oldp+451,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrsi));
            tracep->chgBit(oldp+452,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrw));
            tracep->chgBit(oldp+453,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrwi));
            tracep->chgBit(oldp+454,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_addi));
            tracep->chgBit(oldp+455,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_xor));
            tracep->chgBit(oldp+456,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_xori));
            tracep->chgBit(oldp+457,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_ori));
            tracep->chgBit(oldp+458,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_addiw));
            tracep->chgBit(oldp+459,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_addw));
            tracep->chgBit(oldp+460,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_subw));
            tracep->chgBit(oldp+461,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_mul));
            tracep->chgBit(oldp+462,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_mulw));
            tracep->chgBit(oldp+463,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_divw));
            tracep->chgBit(oldp+464,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_divuw));
            tracep->chgBit(oldp+465,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_remw));
            tracep->chgBit(oldp+466,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_remuw));
            tracep->chgBit(oldp+467,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sub));
            tracep->chgBit(oldp+468,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_add));
            tracep->chgBit(oldp+469,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sll));
            tracep->chgBit(oldp+470,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_slli));
            tracep->chgBit(oldp+471,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_slliw));
            tracep->chgBit(oldp+472,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_srli));
            tracep->chgBit(oldp+473,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_srliw));
            tracep->chgBit(oldp+474,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_andi));
            tracep->chgBit(oldp+475,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_and));
            tracep->chgBit(oldp+476,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_or));
            tracep->chgBit(oldp+477,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_srai));
            tracep->chgBit(oldp+478,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sraiw));
            tracep->chgBit(oldp+479,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sra));
            tracep->chgBit(oldp+480,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sraw));
            tracep->chgBit(oldp+481,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_srl));
            tracep->chgBit(oldp+482,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_srlw));
            tracep->chgBit(oldp+483,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sllw));
            tracep->chgBit(oldp+484,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_auipc));
            tracep->chgBit(oldp+485,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_jal));
            tracep->chgBit(oldp+486,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_slti));
            tracep->chgBit(oldp+487,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sltiu));
            tracep->chgBit(oldp+488,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sltu));
            tracep->chgBit(oldp+489,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_slt));
            tracep->chgBit(oldp+490,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_beq));
            tracep->chgBit(oldp+491,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_bne));
            tracep->chgBit(oldp+492,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_bge));
            tracep->chgBit(oldp+493,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_bgeu));
            tracep->chgBit(oldp+494,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_blt));
            tracep->chgBit(oldp+495,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_bltu));
            tracep->chgBit(oldp+496,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sd));
            tracep->chgBit(oldp+497,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sw));
            tracep->chgBit(oldp+498,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sh));
            tracep->chgBit(oldp+499,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sb));
            tracep->chgBit(oldp+500,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lb));
            tracep->chgBit(oldp+501,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lbu));
            tracep->chgBit(oldp+502,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lhu));
            tracep->chgBit(oldp+503,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lw));
            tracep->chgBit(oldp+504,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lwu));
            tracep->chgBit(oldp+505,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lh));
            tracep->chgBit(oldp+506,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_ld));
            tracep->chgBit(oldp+507,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_ebreak));
            tracep->chgBit(oldp+508,((0x6bU == vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)));
            tracep->chgBit(oldp+509,((0x7bU == vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)));
            tracep->chgBit(oldp+510,(((((((((((((((
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
            tracep->chgBit(oldp+511,((0xaU == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_ex))));
            tracep->chgBit(oldp+512,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_valid));
            tracep->chgQData(oldp+513,((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__mul_result[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__mul_result[0U])))),64);
            tracep->chgBit(oldp+515,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_ready));
            tracep->chgBit(oldp+516,((2U == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__div_state))));
            tracep->chgBit(oldp+517,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_s_or_u));
            tracep->chgQData(oldp+518,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_value),64);
            tracep->chgQData(oldp+520,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__rem_value),64);
            tracep->chgBit(oldp+522,((((((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__if_inst_aes64es_ex) 
                                           | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__if_inst_aes64esm_ex)) 
                                          | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__if_inst_aes64ds_ex)) 
                                         | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__if_inst_aes64dsm_ex)) 
                                        | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__if_inst_aes64im_ex)) 
                                       | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__if_inst_aes64ks1i_ex)) 
                                      | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__if_inst_aes64ks2_ex))));
            tracep->chgWData(oldp+523,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__forward_a_mux____pinNumber4),198);
            tracep->chgWData(oldp+530,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__pair_list[0]),66);
            tracep->chgWData(oldp+533,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__pair_list[1]),66);
            tracep->chgWData(oldp+536,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__pair_list[2]),66);
            tracep->chgCData(oldp+539,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__key_list[0]),2);
            tracep->chgCData(oldp+540,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__key_list[1]),2);
            tracep->chgCData(oldp+541,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__key_list[2]),2);
            tracep->chgQData(oldp+542,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+544,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+546,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__data_list[2]),64);
            tracep->chgWData(oldp+548,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__forward_b_mux____pinNumber4),198);
            tracep->chgWData(oldp+555,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__pair_list[0]),66);
            tracep->chgWData(oldp+558,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__pair_list[1]),66);
            tracep->chgWData(oldp+561,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__pair_list[2]),66);
            tracep->chgCData(oldp+564,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__key_list[0]),2);
            tracep->chgCData(oldp+565,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__key_list[1]),2);
            tracep->chgCData(oldp+566,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__key_list[2]),2);
            tracep->chgQData(oldp+567,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+569,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+571,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__data_list[2]),64);
            tracep->chgBit(oldp+573,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__mul_calculating));
            tracep->chgWData(oldp+574,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__multiplcand),128);
            tracep->chgQData(oldp+578,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__multipler),64);
            tracep->chgWData(oldp+580,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__mul_result_partial),128);
            tracep->chgWData(oldp+584,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__mul_result),128);
            tracep->chgCData(oldp+588,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__mul_result_cnt),7);
            tracep->chgCData(oldp+589,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__div_state),2);
            tracep->chgCData(oldp+590,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__div_cnt),7);
            tracep->chgWData(oldp+591,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__dividend_abs),128);
            tracep->chgWData(oldp+595,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__divisor_abs),65);
            tracep->chgQData(oldp+598,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__quotient_abs),64);
            tracep->chgBit(oldp+600,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__quotient_sign));
            tracep->chgBit(oldp+601,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__remainder_sign));
            tracep->chgWData(oldp+602,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__diff_temp),65);
            tracep->chgBit(oldp+605,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__diff_neg));
            tracep->chgBit(oldp+606,((0xaU != (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__ks1i_rnum_ex))));
            tracep->chgCData(oldp+607,(((0xaU != (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__ks1i_rnum_ex))
                                         ? vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__rcon
                                        [vlSelf->SimTop__DOT__u_cpu__DOT__ks1i_rnum_ex]
                                         : 0U)),8);
            tracep->chgBit(oldp+608,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__mix));
            tracep->chgBit(oldp+609,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__if_inst_aes64es_ex) 
                                      | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__if_inst_aes64esm_ex))));
            tracep->chgBit(oldp+610,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__if_inst_aes64ds_ex) 
                                      | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__if_inst_aes64dsm_ex))));
            tracep->chgBit(oldp+611,((0x200U == (0xffffU 
                                                 & (IData)(
                                                           (vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem 
                                                            >> 0x10U))))));
            tracep->chgBit(oldp+612,((0xa10003f8U == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem))));
            tracep->chgQData(oldp+613,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf_tmp[0]),64);
            tracep->chgQData(oldp+615,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf_tmp[1]),64);
            tracep->chgQData(oldp+617,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf_tmp[2]),64);
            tracep->chgQData(oldp+619,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf_tmp[3]),64);
            tracep->chgQData(oldp+621,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf_tmp[4]),64);
            tracep->chgQData(oldp+623,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf_tmp[5]),64);
            tracep->chgQData(oldp+625,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf_tmp[6]),64);
            tracep->chgQData(oldp+627,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf_tmp[7]),64);
            tracep->chgQData(oldp+629,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf_tmp[8]),64);
            tracep->chgQData(oldp+631,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf_tmp[9]),64);
            tracep->chgQData(oldp+633,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf_tmp[10]),64);
            tracep->chgQData(oldp+635,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf_tmp[11]),64);
            tracep->chgQData(oldp+637,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf_tmp[12]),64);
            tracep->chgQData(oldp+639,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf_tmp[13]),64);
            tracep->chgQData(oldp+641,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf_tmp[14]),64);
            tracep->chgQData(oldp+643,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf_tmp[15]),64);
            tracep->chgQData(oldp+645,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf_tmp[16]),64);
            tracep->chgQData(oldp+647,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf_tmp[17]),64);
            tracep->chgQData(oldp+649,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf_tmp[18]),64);
            tracep->chgQData(oldp+651,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf_tmp[19]),64);
            tracep->chgQData(oldp+653,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf_tmp[20]),64);
            tracep->chgQData(oldp+655,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf_tmp[21]),64);
            tracep->chgQData(oldp+657,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf_tmp[22]),64);
            tracep->chgQData(oldp+659,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf_tmp[23]),64);
            tracep->chgQData(oldp+661,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf_tmp[24]),64);
            tracep->chgQData(oldp+663,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf_tmp[25]),64);
            tracep->chgQData(oldp+665,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf_tmp[26]),64);
            tracep->chgQData(oldp+667,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf_tmp[27]),64);
            tracep->chgQData(oldp+669,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf_tmp[28]),64);
            tracep->chgQData(oldp+671,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf_tmp[29]),64);
            tracep->chgQData(oldp+673,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf_tmp[30]),64);
            tracep->chgQData(oldp+675,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf_tmp[31]),64);
            tracep->chgQData(oldp+677,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mstatus_reg),64);
            tracep->chgQData(oldp+679,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mepc_reg),64);
            tracep->chgQData(oldp+681,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mtvec_reg),64);
            tracep->chgQData(oldp+683,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mcause_reg),64);
            tracep->chgQData(oldp+685,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mie_reg),64);
            tracep->chgQData(oldp+687,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mip_reg),64);
            tracep->chgQData(oldp+689,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mscratch_reg),64);
            tracep->chgQData(oldp+691,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mstatus_latch),64);
            tracep->chgQData(oldp+693,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mepc_latch),64);
            tracep->chgQData(oldp+695,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mtvec_latch),64);
            tracep->chgQData(oldp+697,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mcause_latch),64);
            tracep->chgQData(oldp+699,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mie_latch),64);
            tracep->chgQData(oldp+701,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mip_latch),64);
            tracep->chgQData(oldp+703,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mscratch_latch),64);
            tracep->chgQData(oldp+705,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mepc_timeint_reg),64);
            tracep->chgQData(oldp+707,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mcause_timeint_reg),64);
            tracep->chgQData(oldp+709,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__pc_wb_reg),64);
            tracep->chgIData(oldp+711,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__inst_wb_reg),32);
            tracep->chgWData(oldp+712,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_imm____pinNumber4),335);
            tracep->chgWData(oldp+723,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__pair_list[0]),67);
            tracep->chgWData(oldp+726,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__pair_list[1]),67);
            tracep->chgWData(oldp+729,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__pair_list[2]),67);
            tracep->chgWData(oldp+732,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__pair_list[3]),67);
            tracep->chgWData(oldp+735,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__pair_list[4]),67);
            tracep->chgCData(oldp+738,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__key_list[0]),3);
            tracep->chgCData(oldp+739,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__key_list[1]),3);
            tracep->chgCData(oldp+740,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__key_list[2]),3);
            tracep->chgCData(oldp+741,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__key_list[3]),3);
            tracep->chgCData(oldp+742,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__key_list[4]),3);
            tracep->chgQData(oldp+743,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+745,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+747,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+749,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+751,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__data_list[4]),64);
            tracep->chgQData(oldp+753,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+755,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__hit));
            tracep->chgWData(oldp+756,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4),476);
            tracep->chgWData(oldp+771,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__pair_list[0]),68);
            tracep->chgWData(oldp+774,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__pair_list[1]),68);
            tracep->chgWData(oldp+777,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__pair_list[2]),68);
            tracep->chgWData(oldp+780,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__pair_list[3]),68);
            tracep->chgWData(oldp+783,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__pair_list[4]),68);
            tracep->chgWData(oldp+786,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__pair_list[5]),68);
            tracep->chgWData(oldp+789,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__pair_list[6]),68);
            tracep->chgCData(oldp+792,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__key_list[0]),4);
            tracep->chgCData(oldp+793,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__key_list[1]),4);
            tracep->chgCData(oldp+794,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__key_list[2]),4);
            tracep->chgCData(oldp+795,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__key_list[3]),4);
            tracep->chgCData(oldp+796,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__key_list[4]),4);
            tracep->chgCData(oldp+797,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__key_list[5]),4);
            tracep->chgCData(oldp+798,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__key_list[6]),4);
            tracep->chgQData(oldp+799,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+801,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+803,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+805,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+807,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__data_list[4]),64);
            tracep->chgQData(oldp+809,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__data_list[5]),64);
            tracep->chgQData(oldp+811,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__data_list[6]),64);
            tracep->chgQData(oldp+813,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+815,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__hit));
            tracep->chgQData(oldp+816,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__pc_branch_addr),64);
            tracep->chgQData(oldp+818,(vlSelf->SimTop__DOT__clint__DOT__mtime),64);
            tracep->chgQData(oldp+820,(vlSelf->SimTop__DOT__clint__DOT__mtimecmp),64);
        }
        if (VL_UNLIKELY((vlSelf->__Vm_traceActivity
                         [1U] | vlSelf->__Vm_traceActivity
                         [3U]))) {
            tracep->chgBit(oldp+822,(((0U != (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__len)) 
                                      & ((IData)(vlSelf->SimTop__DOT__axi_rw__DOT__w_hs) 
                                         | (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__r_hs)))));
            tracep->chgBit(oldp+823,(((IData)(vlSelf->SimTop__DOT__axi_rw__DOT__trans_done) 
                                      | (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__rw_ready))));
            if ((1U & (IData)((vlSelf->SimTop__DOT__u_dcache__DOT__dcache_ram_addr 
                               >> 3U)))) {
                __Vtemp1182[0U] = 0xffffffffU;
                __Vtemp1182[1U] = 0xffffffffU;
                __Vtemp1182[2U] = (IData)(vlSelf->SimTop__DOT__u_dcache__DOT__dram_mem_write_mask_i);
                __Vtemp1182[3U] = (IData)((vlSelf->SimTop__DOT__u_dcache__DOT__dram_mem_write_mask_i 
                                           >> 0x20U));
            } else {
                __Vtemp1182[0U] = (IData)(vlSelf->SimTop__DOT__u_dcache__DOT__dram_mem_write_mask_i);
                __Vtemp1182[1U] = (IData)((vlSelf->SimTop__DOT__u_dcache__DOT__dram_mem_write_mask_i 
                                           >> 0x20U));
                __Vtemp1182[2U] = 0xffffffffU;
                __Vtemp1182[3U] = 0xffffffffU;
            }
            tracep->chgWData(oldp+824,(__Vtemp1182),128);
            VL_EXTEND_WQ(128,64, __Vtemp1184, vlSelf->SimTop__DOT__u_cpu__DOT__reg2_to_mem_forward);
            if ((1U & (IData)((vlSelf->SimTop__DOT__u_dcache__DOT__dcache_ram_addr 
                               >> 3U)))) {
                __Vtemp1186[0U] = 0U;
                __Vtemp1186[1U] = 0U;
                __Vtemp1186[2U] = (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__reg2_to_mem_forward);
                __Vtemp1186[3U] = (IData)((vlSelf->SimTop__DOT__u_cpu__DOT__reg2_to_mem_forward 
                                           >> 0x20U));
            } else {
                __Vtemp1186[0U] = __Vtemp1184[0U];
                __Vtemp1186[1U] = __Vtemp1184[1U];
                __Vtemp1186[2U] = __Vtemp1184[2U];
                __Vtemp1186[3U] = __Vtemp1184[3U];
            }
            tracep->chgWData(oldp+828,(__Vtemp1186),128);
            tracep->chgQData(oldp+832,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__csr_ren) 
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
            tracep->chgQData(oldp+834,(((((((- (QData)((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__if_inst_aes64ks1i_ex))) 
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
            tracep->chgCData(oldp+836,((0xffU & ((0xaU 
                                                  != (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__ks1i_rnum_ex))
                                                  ? (IData)(
                                                            (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                                                             >> 0x20U))
                                                  : (IData)(
                                                            (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                                                             >> 0x38U))))),8);
            tracep->chgCData(oldp+837,((0xffU & ((0xaU 
                                                  != (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__ks1i_rnum_ex))
                                                  ? (IData)(
                                                            (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                                                             >> 0x38U))
                                                  : (IData)(
                                                            (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                                                             >> 0x30U))))),8);
            tracep->chgCData(oldp+838,((0xffU & ((0xaU 
                                                  != (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__ks1i_rnum_ex))
                                                  ? (IData)(
                                                            (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                                                             >> 0x30U))
                                                  : (IData)(
                                                            (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                                                             >> 0x28U))))),8);
            tracep->chgCData(oldp+839,((0xffU & ((0xaU 
                                                  != (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__ks1i_rnum_ex))
                                                  ? (IData)(
                                                            (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                                                             >> 0x28U))
                                                  : (IData)(
                                                            (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a 
                                                             >> 0x20U))))),8);
            tracep->chgIData(oldp+840,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__e_sbout) 
                                        ^ ((0xaU != (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__ks1i_rnum_ex))
                                            ? vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__rcon
                                           [vlSelf->SimTop__DOT__u_cpu__DOT__ks1i_rnum_ex]
                                            : 0U))),32);
            tracep->chgQData(oldp+841,((((QData)((IData)(
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
            tracep->chgQData(oldp+843,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__mix)
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
            tracep->chgQData(oldp+845,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__mix)
                                         ? (((QData)((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__mix_dec_o1)) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__mix_dec_o0)))
                                         : vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__d_sbout)),64);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgBit(oldp+847,(vlSelf->SimTop__DOT__u_cpu__DOT__cmt_wen));
            tracep->chgCData(oldp+848,(vlSelf->SimTop__DOT__u_cpu__DOT__cmt_wdest),8);
            tracep->chgQData(oldp+849,(vlSelf->SimTop__DOT__u_cpu__DOT__cmt_wdata),64);
            tracep->chgQData(oldp+851,(vlSelf->SimTop__DOT__u_cpu__DOT__cmt_pc),64);
            tracep->chgIData(oldp+853,(vlSelf->SimTop__DOT__u_cpu__DOT__cmt_inst),32);
            tracep->chgBit(oldp+854,(vlSelf->SimTop__DOT__u_cpu__DOT__cmt_valid));
            tracep->chgBit(oldp+855,(vlSelf->SimTop__DOT__u_cpu__DOT__cmt_skip));
            tracep->chgBit(oldp+856,(vlSelf->SimTop__DOT__u_cpu__DOT__trap));
            tracep->chgCData(oldp+857,(vlSelf->SimTop__DOT__u_cpu__DOT__trap_code),8);
            tracep->chgQData(oldp+858,(vlSelf->SimTop__DOT__u_cpu__DOT__cycleCnt),64);
            tracep->chgQData(oldp+860,(vlSelf->SimTop__DOT__u_cpu__DOT__instrCnt),64);
            tracep->chgQData(oldp+862,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[0]),64);
            tracep->chgQData(oldp+864,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[1]),64);
            tracep->chgQData(oldp+866,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[2]),64);
            tracep->chgQData(oldp+868,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[3]),64);
            tracep->chgQData(oldp+870,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[4]),64);
            tracep->chgQData(oldp+872,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[5]),64);
            tracep->chgQData(oldp+874,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[6]),64);
            tracep->chgQData(oldp+876,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[7]),64);
            tracep->chgQData(oldp+878,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[8]),64);
            tracep->chgQData(oldp+880,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[9]),64);
            tracep->chgQData(oldp+882,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[10]),64);
            tracep->chgQData(oldp+884,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[11]),64);
            tracep->chgQData(oldp+886,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[12]),64);
            tracep->chgQData(oldp+888,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[13]),64);
            tracep->chgQData(oldp+890,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[14]),64);
            tracep->chgQData(oldp+892,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[15]),64);
            tracep->chgQData(oldp+894,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[16]),64);
            tracep->chgQData(oldp+896,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[17]),64);
            tracep->chgQData(oldp+898,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[18]),64);
            tracep->chgQData(oldp+900,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[19]),64);
            tracep->chgQData(oldp+902,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[20]),64);
            tracep->chgQData(oldp+904,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[21]),64);
            tracep->chgQData(oldp+906,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[22]),64);
            tracep->chgQData(oldp+908,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[23]),64);
            tracep->chgQData(oldp+910,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[24]),64);
            tracep->chgQData(oldp+912,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[25]),64);
            tracep->chgQData(oldp+914,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[26]),64);
            tracep->chgQData(oldp+916,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[27]),64);
            tracep->chgQData(oldp+918,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[28]),64);
            tracep->chgQData(oldp+920,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[29]),64);
            tracep->chgQData(oldp+922,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[30]),64);
            tracep->chgQData(oldp+924,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[31]),64);
            tracep->chgQData(oldp+926,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                       [0U]),64);
            tracep->chgQData(oldp+928,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                       [1U]),64);
            tracep->chgQData(oldp+930,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                       [2U]),64);
            tracep->chgQData(oldp+932,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                       [3U]),64);
            tracep->chgQData(oldp+934,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                       [4U]),64);
            tracep->chgQData(oldp+936,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                       [5U]),64);
            tracep->chgQData(oldp+938,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                       [6U]),64);
            tracep->chgQData(oldp+940,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                       [7U]),64);
            tracep->chgQData(oldp+942,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                       [8U]),64);
            tracep->chgQData(oldp+944,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                       [9U]),64);
            tracep->chgQData(oldp+946,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                       [0xaU]),64);
            tracep->chgQData(oldp+948,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                       [0xbU]),64);
            tracep->chgQData(oldp+950,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                       [0xcU]),64);
            tracep->chgQData(oldp+952,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                       [0xdU]),64);
            tracep->chgQData(oldp+954,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                       [0xeU]),64);
            tracep->chgQData(oldp+956,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                       [0xfU]),64);
            tracep->chgQData(oldp+958,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                       [0x10U]),64);
            tracep->chgQData(oldp+960,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                       [0x11U]),64);
            tracep->chgQData(oldp+962,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                       [0x12U]),64);
            tracep->chgQData(oldp+964,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                       [0x13U]),64);
            tracep->chgQData(oldp+966,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                       [0x14U]),64);
            tracep->chgQData(oldp+968,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                       [0x15U]),64);
            tracep->chgQData(oldp+970,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                       [0x16U]),64);
            tracep->chgQData(oldp+972,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                       [0x17U]),64);
            tracep->chgQData(oldp+974,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                       [0x18U]),64);
            tracep->chgQData(oldp+976,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                       [0x19U]),64);
            tracep->chgQData(oldp+978,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                       [0x1aU]),64);
            tracep->chgQData(oldp+980,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                       [0x1bU]),64);
            tracep->chgQData(oldp+982,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                       [0x1cU]),64);
            tracep->chgQData(oldp+984,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                       [0x1dU]),64);
            tracep->chgQData(oldp+986,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                       [0x1eU]),64);
            tracep->chgQData(oldp+988,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                       [0x1fU]),64);
            tracep->chgCData(oldp+990,((7U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__trap_code))),3);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
            tracep->chgQData(oldp+991,(vlSelf->SimTop__DOT__u_cpu__DOT__reg2_to_mem_forward),64);
            tracep->chgCData(oldp+993,(vlSelf->SimTop__DOT__mem_write_mask_axi),8);
            tracep->chgBit(oldp+994,(vlSelf->SimTop__DOT__axi_rw__DOT__trans_done));
            tracep->chgBit(oldp+995,(vlSelf->SimTop__DOT__axi_rw__DOT__r_hs));
            tracep->chgCData(oldp+996,((0xffU & (IData)(
                                                        vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr
                                                        [0xaU]))),8);
            tracep->chgQData(oldp+997,(vlSelf->SimTop__DOT__u_cpu__DOT__memory__DOT__value_writen_to_mem),64);
            tracep->chgBit(oldp+999,(vlSelf->SimTop__DOT__axi_rw__DOT__w_hs));
            tracep->chgBit(oldp+1000,(vlSelf->SimTop__DOT__axi_rw__DOT__b_hs));
            tracep->chgBit(oldp+1001,(vlSelf->SimTop__DOT__axi_rw__DOT__r_done));
            tracep->chgQData(oldp+1002,(vlSelf->SimTop__DOT__u_dcache__DOT__dram_mem_write_mask_i),64);
            tracep->chgWData(oldp+1004,(vlSelf->SimTop__DOT__u_dcache__DOT__dram_bwen),128);
            tracep->chgWData(oldp+1008,(vlSelf->SimTop__DOT__u_dcache__DOT__dram_data_write),128);
            __Vtemp1187[0U] = (~ vlSelf->SimTop__DOT__u_dcache__DOT__dram_bwen[0U]);
            __Vtemp1187[1U] = (~ vlSelf->SimTop__DOT__u_dcache__DOT__dram_bwen[1U]);
            __Vtemp1187[2U] = (~ vlSelf->SimTop__DOT__u_dcache__DOT__dram_bwen[2U]);
            __Vtemp1187[3U] = (~ vlSelf->SimTop__DOT__u_dcache__DOT__dram_bwen[3U]);
            tracep->chgWData(oldp+1012,(__Vtemp1187),128);
            tracep->chgQData(oldp+1016,(vlSelf->SimTop__DOT__u_cpu__DOT__reg2_value_forwardb_ex),64);
            tracep->chgQData(oldp+1018,(vlSelf->SimTop__DOT__u_cpu__DOT__csr_value_writeback_ex),64);
            tracep->chgQData(oldp+1020,(vlSelf->SimTop__DOT__u_cpu__DOT__mem_write_mask),64);
            tracep->chgQData(oldp+1022,(vlSelf->SimTop__DOT__u_cpu__DOT__npc),64);
            tracep->chgQData(oldp+1024,(vlSelf->SimTop__DOT__u_cpu__DOT__reg1_value_id),64);
            tracep->chgQData(oldp+1026,(vlSelf->SimTop__DOT__u_cpu__DOT__reg2_value_id),64);
            tracep->chgQData(oldp+1028,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[0]),64);
            tracep->chgQData(oldp+1030,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[1]),64);
            tracep->chgQData(oldp+1032,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[2]),64);
            tracep->chgQData(oldp+1034,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[3]),64);
            tracep->chgQData(oldp+1036,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[4]),64);
            tracep->chgQData(oldp+1038,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[5]),64);
            tracep->chgQData(oldp+1040,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[6]),64);
            tracep->chgQData(oldp+1042,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[7]),64);
            tracep->chgQData(oldp+1044,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[8]),64);
            tracep->chgQData(oldp+1046,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[9]),64);
            tracep->chgQData(oldp+1048,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[10]),64);
            tracep->chgQData(oldp+1050,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[11]),64);
            tracep->chgQData(oldp+1052,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[12]),64);
            tracep->chgQData(oldp+1054,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[13]),64);
            tracep->chgQData(oldp+1056,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[14]),64);
            tracep->chgQData(oldp+1058,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[15]),64);
            tracep->chgQData(oldp+1060,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[16]),64);
            tracep->chgQData(oldp+1062,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[17]),64);
            tracep->chgQData(oldp+1064,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[18]),64);
            tracep->chgQData(oldp+1066,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[19]),64);
            tracep->chgQData(oldp+1068,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[20]),64);
            tracep->chgQData(oldp+1070,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[21]),64);
            tracep->chgQData(oldp+1072,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[22]),64);
            tracep->chgQData(oldp+1074,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[23]),64);
            tracep->chgQData(oldp+1076,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[24]),64);
            tracep->chgQData(oldp+1078,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[25]),64);
            tracep->chgQData(oldp+1080,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[26]),64);
            tracep->chgQData(oldp+1082,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[27]),64);
            tracep->chgQData(oldp+1084,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[28]),64);
            tracep->chgQData(oldp+1086,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[29]),64);
            tracep->chgQData(oldp+1088,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[30]),64);
            tracep->chgQData(oldp+1090,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[31]),64);
            tracep->chgQData(oldp+1092,(vlSelf->SimTop__DOT__u_cpu__DOT__value),64);
            tracep->chgQData(oldp+1094,(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_ex),64);
            tracep->chgBit(oldp+1096,(vlSelf->SimTop__DOT__u_cpu__DOT__IF_Flush));
            tracep->chgCData(oldp+1097,(vlSelf->SimTop__DOT__u_cpu__DOT__Forward_a),2);
            tracep->chgCData(oldp+1098,(vlSelf->SimTop__DOT__u_cpu__DOT__Forward_b),2);
            tracep->chgCData(oldp+1099,(vlSelf->SimTop__DOT__u_cpu__DOT__Forward_c),2);
            tracep->chgCData(oldp+1100,(vlSelf->SimTop__DOT__u_cpu__DOT__Forward_d),2);
            tracep->chgBit(oldp+1101,(vlSelf->SimTop__DOT__u_cpu__DOT__pipeline_stall));
            tracep->chgQData(oldp+1102,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mstatus),64);
            tracep->chgQData(oldp+1104,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mepc),64);
            tracep->chgQData(oldp+1106,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mtvec),64);
            tracep->chgQData(oldp+1108,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mcause),64);
            tracep->chgQData(oldp+1110,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mie),64);
            tracep->chgQData(oldp+1112,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mip),64);
            tracep->chgQData(oldp+1114,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mscratch),64);
            tracep->chgQData(oldp+1116,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__reg1_forwarda),64);
            tracep->chgQData(oldp+1118,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a0),64);
            tracep->chgQData(oldp+1120,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b0),64);
            tracep->chgQData(oldp+1122,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a),64);
            tracep->chgQData(oldp+1124,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b),64);
            tracep->chgQData(oldp+1126,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_operation_a),64);
            tracep->chgQData(oldp+1128,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+1130,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__hit));
            tracep->chgQData(oldp+1131,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+1133,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__hit));
            tracep->chgIData(oldp+1134,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__row_0),32);
            tracep->chgIData(oldp+1135,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__row_1),32);
            tracep->chgIData(oldp+1136,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__row_2),32);
            tracep->chgIData(oldp+1137,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__row_3),32);
            tracep->chgIData(oldp+1138,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__fsh_1),32);
            tracep->chgIData(oldp+1139,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__fsh_2),32);
            tracep->chgIData(oldp+1140,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__fsh_3),32);
            tracep->chgIData(oldp+1141,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__ish_1),32);
            tracep->chgIData(oldp+1142,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__ish_2),32);
            tracep->chgIData(oldp+1143,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__ish_3),32);
            tracep->chgIData(oldp+1144,(((0xff000000U 
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
            tracep->chgIData(oldp+1145,(((0xff000000U 
                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__fsh_3) 
                                         | ((0xff0000U 
                                             & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__fsh_2 
                                                >> 8U)) 
                                            | ((0xff00U 
                                                & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__fsh_1 
                                                   >> 0x10U)) 
                                               | (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__row_0 
                                                  >> 0x18U))))),32);
            tracep->chgIData(oldp+1146,(((0xff000000U 
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
            tracep->chgIData(oldp+1147,(((0xff000000U 
                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__ish_3) 
                                         | ((0xff0000U 
                                             & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__ish_2 
                                                >> 8U)) 
                                            | ((0xff00U 
                                                & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__ish_1 
                                                   >> 0x10U)) 
                                               | (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__row_0 
                                                  >> 0x18U))))),32);
            tracep->chgQData(oldp+1148,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__shiftrows_enc),64);
            tracep->chgQData(oldp+1150,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__shiftrows_dec),64);
            tracep->chgCData(oldp+1152,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in[0]),8);
            tracep->chgCData(oldp+1153,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in[1]),8);
            tracep->chgCData(oldp+1154,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in[2]),8);
            tracep->chgCData(oldp+1155,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in[3]),8);
            tracep->chgCData(oldp+1156,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in[4]),8);
            tracep->chgCData(oldp+1157,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in[5]),8);
            tracep->chgCData(oldp+1158,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in[6]),8);
            tracep->chgCData(oldp+1159,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in[7]),8);
            tracep->chgCData(oldp+1160,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_out[0]),8);
            tracep->chgCData(oldp+1161,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_out[1]),8);
            tracep->chgCData(oldp+1162,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_out[2]),8);
            tracep->chgCData(oldp+1163,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_out[3]),8);
            tracep->chgCData(oldp+1164,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_out[4]),8);
            tracep->chgCData(oldp+1165,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_out[5]),8);
            tracep->chgCData(oldp+1166,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_out[6]),8);
            tracep->chgCData(oldp+1167,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_out[7]),8);
            tracep->chgCData(oldp+1168,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in[0]),8);
            tracep->chgCData(oldp+1169,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in[1]),8);
            tracep->chgCData(oldp+1170,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in[2]),8);
            tracep->chgCData(oldp+1171,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in[3]),8);
            tracep->chgCData(oldp+1172,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in[4]),8);
            tracep->chgCData(oldp+1173,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in[5]),8);
            tracep->chgCData(oldp+1174,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in[6]),8);
            tracep->chgCData(oldp+1175,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in[7]),8);
            tracep->chgCData(oldp+1176,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_out[0]),8);
            tracep->chgCData(oldp+1177,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_out[1]),8);
            tracep->chgCData(oldp+1178,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_out[2]),8);
            tracep->chgCData(oldp+1179,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_out[3]),8);
            tracep->chgCData(oldp+1180,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_out[4]),8);
            tracep->chgCData(oldp+1181,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_out[5]),8);
            tracep->chgCData(oldp+1182,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_out[6]),8);
            tracep->chgCData(oldp+1183,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_out[7]),8);
            tracep->chgQData(oldp+1184,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__d_sbout),64);
            tracep->chgQData(oldp+1186,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__e_sbout),64);
            tracep->chgIData(oldp+1188,((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__e_sbout)),32);
            tracep->chgIData(oldp+1189,((IData)((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__e_sbout 
                                                 >> 0x20U))),32);
            tracep->chgIData(oldp+1190,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__mix_dec_i0),32);
            tracep->chgIData(oldp+1191,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__mix_dec_i1),32);
            tracep->chgIData(oldp+1192,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e0__DOT__mix_out_3) 
                                          << 0x18U) 
                                         | (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e0__DOT__mix_out_2) 
                                             << 0x10U) 
                                            | (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e0__DOT__mix_out_1) 
                                                << 8U) 
                                               | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e0__DOT__mix_out_0))))),32);
            tracep->chgIData(oldp+1193,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e1__DOT__mix_out_3) 
                                          << 0x18U) 
                                         | (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e1__DOT__mix_out_2) 
                                             << 0x10U) 
                                            | (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e1__DOT__mix_out_1) 
                                                << 8U) 
                                               | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e1__DOT__mix_out_0))))),32);
            tracep->chgIData(oldp+1194,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__mix_dec_o0),32);
            tracep->chgIData(oldp+1195,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__mix_dec_o1),32);
            tracep->chgQData(oldp+1196,((((QData)((IData)(
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
            tracep->chgQData(oldp+1198,((((QData)((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__mix_dec_o1)) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__mix_dec_o0)))),64);
            tracep->chgCData(oldp+1200,((0xffU & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__e_sbout))),8);
            tracep->chgCData(oldp+1201,((0xffU & (IData)(
                                                         (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__e_sbout 
                                                          >> 8U)))),8);
            tracep->chgCData(oldp+1202,((0xffU & (IData)(
                                                         (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__e_sbout 
                                                          >> 0x10U)))),8);
            tracep->chgCData(oldp+1203,((0xffU & (IData)(
                                                         (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__e_sbout 
                                                          >> 0x18U)))),8);
            tracep->chgIData(oldp+1204,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e0__DOT__mix_in_3),32);
            tracep->chgIData(oldp+1205,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e0__DOT__mix_in_2),32);
            tracep->chgIData(oldp+1206,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e0__DOT__mix_in_1),32);
            tracep->chgIData(oldp+1207,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e0__DOT__mix_in_0),32);
            tracep->chgCData(oldp+1208,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e0__DOT__mix_out_3),8);
            tracep->chgCData(oldp+1209,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e0__DOT__mix_out_2),8);
            tracep->chgCData(oldp+1210,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e0__DOT__mix_out_1),8);
            tracep->chgCData(oldp+1211,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e0__DOT__mix_out_0),8);
            tracep->chgCData(oldp+1212,((0xffU & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e0__DOT__mix_in_0)),8);
            tracep->chgCData(oldp+1213,((0xffU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e0__DOT__mix_in_0 
                                                  >> 8U))),8);
            tracep->chgCData(oldp+1214,((0xffU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e0__DOT__mix_in_0 
                                                  >> 0x10U))),8);
            tracep->chgCData(oldp+1215,((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e0__DOT__mix_in_0 
                                         >> 0x18U)),8);
            tracep->chgCData(oldp+1216,((0xffU & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e0__DOT__mix_in_1)),8);
            tracep->chgCData(oldp+1217,((0xffU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e0__DOT__mix_in_1 
                                                  >> 8U))),8);
            tracep->chgCData(oldp+1218,((0xffU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e0__DOT__mix_in_1 
                                                  >> 0x10U))),8);
            tracep->chgCData(oldp+1219,((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e0__DOT__mix_in_1 
                                         >> 0x18U)),8);
            tracep->chgCData(oldp+1220,((0xffU & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e0__DOT__mix_in_2)),8);
            tracep->chgCData(oldp+1221,((0xffU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e0__DOT__mix_in_2 
                                                  >> 8U))),8);
            tracep->chgCData(oldp+1222,((0xffU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e0__DOT__mix_in_2 
                                                  >> 0x10U))),8);
            tracep->chgCData(oldp+1223,((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e0__DOT__mix_in_2 
                                         >> 0x18U)),8);
            tracep->chgCData(oldp+1224,((0xffU & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e0__DOT__mix_in_3)),8);
            tracep->chgCData(oldp+1225,((0xffU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e0__DOT__mix_in_3 
                                                  >> 8U))),8);
            tracep->chgCData(oldp+1226,((0xffU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e0__DOT__mix_in_3 
                                                  >> 0x10U))),8);
            tracep->chgCData(oldp+1227,((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e0__DOT__mix_in_3 
                                         >> 0x18U)),8);
            tracep->chgCData(oldp+1228,((0xffU & (IData)(
                                                         (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__e_sbout 
                                                          >> 0x20U)))),8);
            tracep->chgCData(oldp+1229,((0xffU & (IData)(
                                                         (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__e_sbout 
                                                          >> 0x28U)))),8);
            tracep->chgCData(oldp+1230,((0xffU & (IData)(
                                                         (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__e_sbout 
                                                          >> 0x30U)))),8);
            tracep->chgCData(oldp+1231,((0xffU & (IData)(
                                                         (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__e_sbout 
                                                          >> 0x38U)))),8);
            tracep->chgIData(oldp+1232,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e1__DOT__mix_in_3),32);
            tracep->chgIData(oldp+1233,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e1__DOT__mix_in_2),32);
            tracep->chgIData(oldp+1234,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e1__DOT__mix_in_1),32);
            tracep->chgIData(oldp+1235,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e1__DOT__mix_in_0),32);
            tracep->chgCData(oldp+1236,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e1__DOT__mix_out_3),8);
            tracep->chgCData(oldp+1237,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e1__DOT__mix_out_2),8);
            tracep->chgCData(oldp+1238,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e1__DOT__mix_out_1),8);
            tracep->chgCData(oldp+1239,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e1__DOT__mix_out_0),8);
            tracep->chgCData(oldp+1240,((0xffU & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e1__DOT__mix_in_0)),8);
            tracep->chgCData(oldp+1241,((0xffU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e1__DOT__mix_in_0 
                                                  >> 8U))),8);
            tracep->chgCData(oldp+1242,((0xffU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e1__DOT__mix_in_0 
                                                  >> 0x10U))),8);
            tracep->chgCData(oldp+1243,((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e1__DOT__mix_in_0 
                                         >> 0x18U)),8);
            tracep->chgCData(oldp+1244,((0xffU & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e1__DOT__mix_in_1)),8);
            tracep->chgCData(oldp+1245,((0xffU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e1__DOT__mix_in_1 
                                                  >> 8U))),8);
            tracep->chgCData(oldp+1246,((0xffU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e1__DOT__mix_in_1 
                                                  >> 0x10U))),8);
            tracep->chgCData(oldp+1247,((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e1__DOT__mix_in_1 
                                         >> 0x18U)),8);
            tracep->chgCData(oldp+1248,((0xffU & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e1__DOT__mix_in_2)),8);
            tracep->chgCData(oldp+1249,((0xffU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e1__DOT__mix_in_2 
                                                  >> 8U))),8);
            tracep->chgCData(oldp+1250,((0xffU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e1__DOT__mix_in_2 
                                                  >> 0x10U))),8);
            tracep->chgCData(oldp+1251,((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e1__DOT__mix_in_2 
                                         >> 0x18U)),8);
            tracep->chgCData(oldp+1252,((0xffU & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e1__DOT__mix_in_3)),8);
            tracep->chgCData(oldp+1253,((0xffU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e1__DOT__mix_in_3 
                                                  >> 8U))),8);
            tracep->chgCData(oldp+1254,((0xffU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e1__DOT__mix_in_3 
                                                  >> 0x10U))),8);
            tracep->chgCData(oldp+1255,((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__i_mix_e1__DOT__mix_in_3 
                                         >> 0x18U)),8);
            tracep->chgCData(oldp+1256,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT____Vcellout__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__fx),8);
            tracep->chgCData(oldp+1257,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                        [0U]),8);
            tracep->chgIData(oldp+1258,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t1),21);
            tracep->chgIData(oldp+1259,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t2),18);
            tracep->chgBit(oldp+1260,((1U & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                       [0U])));
            tracep->chgBit(oldp+1261,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__top__DOT__y1));
            tracep->chgBit(oldp+1262,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__top__DOT__y2));
            tracep->chgBit(oldp+1263,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__top__DOT__y3));
            tracep->chgBit(oldp+1264,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__top__DOT__y4));
            tracep->chgBit(oldp+1265,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__top__DOT__t0));
            tracep->chgBit(oldp+1266,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__top__DOT__y5));
            tracep->chgBit(oldp+1267,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__top__DOT__t1));
            tracep->chgBit(oldp+1268,((1U & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                             [0U] ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__top__DOT__y5)))));
            tracep->chgBit(oldp+1269,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__top__DOT__y7));
            tracep->chgBit(oldp+1270,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__top__DOT__y8));
            tracep->chgBit(oldp+1271,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__top__DOT__t2));
            tracep->chgBit(oldp+1272,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__top__DOT__t3));
            tracep->chgBit(oldp+1273,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__top__DOT__y3) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__top__DOT__y4))));
            tracep->chgBit(oldp+1274,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__top__DOT__y5) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__top__DOT__t2))));
            tracep->chgBit(oldp+1275,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__top__DOT__t0) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__top__DOT__t2))));
            tracep->chgBit(oldp+1276,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__top__DOT__y12));
            tracep->chgBit(oldp+1277,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__top__DOT__y13));
            tracep->chgBit(oldp+1278,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                              [0U] 
                                              >> 4U) 
                                             ^ vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                             [0U]))));
            tracep->chgBit(oldp+1279,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__top__DOT__y14));
            tracep->chgBit(oldp+1280,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__top__DOT__y15));
            tracep->chgBit(oldp+1281,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                              [0U] 
                                              >> 1U) 
                                             ^ vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                             [0U]))));
            tracep->chgBit(oldp+1282,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__top__DOT__y16));
            tracep->chgBit(oldp+1283,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__top__DOT__y2) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__top__DOT__y16))));
            tracep->chgBit(oldp+1284,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__top__DOT__y2) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__top__DOT__y8))));
            tracep->chgBit(oldp+1285,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__top__DOT__y15) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__top__DOT__y13))));
            tracep->chgBit(oldp+1286,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__top__DOT__y1) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__top__DOT__t3))));
            tracep->chgBit(oldp+1287,((1U & VL_REDXOR_32(
                                                         (0x1008U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1288,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1));
            tracep->chgBit(oldp+1289,((IData)((0x20040U 
                                               == (0x20040U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1290,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t1 
                                              >> 0xaU) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1)))));
            tracep->chgBit(oldp+1291,((0x4001U == (0x4001U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t1))));
            tracep->chgBit(oldp+1292,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t1 
                                               >> 0xeU) 
                                              & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t1) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1)))));
            tracep->chgBit(oldp+1293,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6));
            tracep->chgBit(oldp+1294,((IData)((0x10080U 
                                               == (0x10080U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1295,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t1 
                                               >> 3U) 
                                              ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t1 
                                                 >> 0xcU)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6)))));
            tracep->chgBit(oldp+1296,((IData)((0xa000U 
                                               == (0xa000U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1297,((1U & ((0xa000U 
                                              == (0xa000U 
                                                  & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t1)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6)))));
            tracep->chgBit(oldp+1298,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t11));
            tracep->chgBit(oldp+1299,((IData)((0x100010U 
                                               == (0x100010U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1300,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t13));
            tracep->chgBit(oldp+1301,((IData)((0x104U 
                                               == (0x104U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1302,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t15));
            tracep->chgBit(oldp+1303,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t1 
                                               >> 0xaU) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1)) 
                                             ^ (0x20040U 
                                                == 
                                                (0x20040U 
                                                 & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t1))))));
            tracep->chgBit(oldp+1304,((1U & ((((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t1 
                                                >> 0xeU) 
                                               & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t1) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1)) 
                                             ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t1 
                                                >> 0x12U)))));
            tracep->chgBit(oldp+1305,((1U & ((((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t1 
                                                >> 3U) 
                                               ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t1 
                                                  >> 0xcU)) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6)) 
                                             ^ (0x10080U 
                                                == 
                                                (0x10080U 
                                                 & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t1))))));
            tracep->chgBit(oldp+1306,((1U & (((0xa000U 
                                               == (0xa000U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t1)) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t15)))));
            tracep->chgBit(oldp+1307,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t20));
            tracep->chgBit(oldp+1308,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21));
            tracep->chgBit(oldp+1309,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t22));
            tracep->chgBit(oldp+1310,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23));
            tracep->chgBit(oldp+1311,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t24));
            tracep->chgBit(oldp+1312,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25));
            tracep->chgBit(oldp+1313,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+1314,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t27));
            tracep->chgBit(oldp+1315,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+1316,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23) 
                                        ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25)) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t27))));
            tracep->chgBit(oldp+1317,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21) 
                                        ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25)) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t24))));
            tracep->chgBit(oldp+1318,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t20) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23))));
            tracep->chgBit(oldp+1319,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t27) 
                                       & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t20) 
                                          & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23)))));
            tracep->chgBit(oldp+1320,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t27) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+1321,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t22))));
            tracep->chgBit(oldp+1322,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t24) 
                                       & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21) 
                                          & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t22)))));
            tracep->chgBit(oldp+1323,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t24) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+1324,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t37));
            tracep->chgBit(oldp+1325,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t38));
            tracep->chgBit(oldp+1326,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t39));
            tracep->chgBit(oldp+1327,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t40));
            tracep->chgBit(oldp+1328,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t41));
            tracep->chgBit(oldp+1329,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t42));
            tracep->chgBit(oldp+1330,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t43));
            tracep->chgBit(oldp+1331,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t44));
            tracep->chgBit(oldp+1332,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t45));
            tracep->chgBit(oldp+1333,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__out__DOT__t0));
            tracep->chgBit(oldp+1334,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1));
            tracep->chgBit(oldp+1335,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__out__DOT__t2));
            tracep->chgBit(oldp+1336,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__out__DOT__t3));
            tracep->chgBit(oldp+1337,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__out__DOT__t4));
            tracep->chgBit(oldp+1338,((1U & VL_REDXOR_32(
                                                         (0x20800U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t2)))));
            tracep->chgBit(oldp+1339,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__out__DOT__t6));
            tracep->chgBit(oldp+1340,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__out__DOT__t7));
            tracep->chgBit(oldp+1341,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__out__DOT__t8));
            tracep->chgBit(oldp+1342,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__out__DOT__t9));
            tracep->chgBit(oldp+1343,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__out__DOT__t10));
            tracep->chgBit(oldp+1344,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__out__DOT__t11));
            tracep->chgBit(oldp+1345,((1U & VL_REDXOR_32(
                                                         (0x10002U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t2)))));
            tracep->chgBit(oldp+1346,((1U & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t2 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__out__DOT__t0)))));
            tracep->chgBit(oldp+1347,((1U & VL_REDXOR_32(
                                                         (0x804U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t2)))));
            tracep->chgBit(oldp+1348,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 5U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1)))));
            tracep->chgBit(oldp+1349,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 6U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__out__DOT__t0)))));
            tracep->chgBit(oldp+1350,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 7U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1)))));
            tracep->chgBit(oldp+1351,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 8U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__out__DOT__t8)))));
            tracep->chgBit(oldp+1352,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 0xdU) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__out__DOT__t4)))));
            tracep->chgBit(oldp+1353,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__out__DOT__t0) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1))));
            tracep->chgBit(oldp+1354,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__out__DOT__t7))));
            tracep->chgBit(oldp+1355,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__out__DOT__t3) 
                                             ^ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t2 
                                                 >> 0x10U) 
                                                ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t2 
                                                   >> 1U))))));
            tracep->chgBit(oldp+1356,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t2 
                                               >> 8U) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__out__DOT__t8)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__out__DOT__t2)))));
            tracep->chgBit(oldp+1357,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t2 
                                               >> 5U) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__out__DOT__t9)))));
            tracep->chgBit(oldp+1358,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__out__DOT__t6) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__out__DOT__t10))));
            tracep->chgBit(oldp+1359,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__out__DOT__t7) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__out__DOT__t9))));
            tracep->chgBit(oldp+1360,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__out__DOT__t8) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__out__DOT__t10))));
            tracep->chgBit(oldp+1361,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__out__DOT__t11) 
                                             ^ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t2 
                                                 >> 2U) 
                                                ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t2 
                                                   >> 0xbU))))));
            tracep->chgBit(oldp+1362,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__out__DOT__t11) 
                                             ^ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__t2 
                                                 >> 7U) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1))))));
            tracep->chgCData(oldp+1363,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT____Vcellout__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__fx),8);
            tracep->chgCData(oldp+1364,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                        [0U]),8);
            tracep->chgIData(oldp+1365,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1),21);
            tracep->chgIData(oldp+1366,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2),18);
            tracep->chgBit(oldp+1367,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y17));
            tracep->chgBit(oldp+1368,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y16));
            tracep->chgBit(oldp+1369,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y2));
            tracep->chgBit(oldp+1370,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y1));
            tracep->chgBit(oldp+1371,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y18));
            tracep->chgBit(oldp+1372,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t0));
            tracep->chgBit(oldp+1373,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y6));
            tracep->chgBit(oldp+1374,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y14));
            tracep->chgBit(oldp+1375,((1U & (~ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                [0U] 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y1))))));
            tracep->chgBit(oldp+1376,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y8));
            tracep->chgBit(oldp+1377,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y2) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t0))));
            tracep->chgBit(oldp+1378,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y1) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t0))));
            tracep->chgBit(oldp+1379,((1U & (~ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                 [0U] 
                                                 >> 5U) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y1))))));
            tracep->chgBit(oldp+1380,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t1));
            tracep->chgBit(oldp+1381,((1U & (~ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                 [0U] 
                                                 >> 5U) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y14))))));
            tracep->chgBit(oldp+1382,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y18) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t1))));
            tracep->chgBit(oldp+1383,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                              [0U] 
                                              >> 3U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y6)))));
            tracep->chgBit(oldp+1384,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t2));
            tracep->chgBit(oldp+1385,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t3));
            tracep->chgBit(oldp+1386,((1U & (~ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                 [0U] 
                                                 >> 5U) 
                                                ^ (
                                                   vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                   [0U] 
                                                   >> 3U))))));
            tracep->chgBit(oldp+1387,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y16) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t2))));
            tracep->chgBit(oldp+1388,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t1) 
                                             ^ (~ (
                                                   (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                    [0U] 
                                                    >> 5U) 
                                                   ^ 
                                                   (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                    [0U] 
                                                    >> 3U)))))));
            tracep->chgBit(oldp+1389,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y20));
            tracep->chgBit(oldp+1390,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y8) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y20))));
            tracep->chgBit(oldp+1391,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y8) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t3))));
            tracep->chgBit(oldp+1392,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                              [0U] 
                                              >> 7U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t2)))));
            tracep->chgBit(oldp+1393,((1U & VL_REDXOR_32(
                                                         (0x1008U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1394,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1));
            tracep->chgBit(oldp+1395,((IData)((0x20040U 
                                               == (0x20040U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1396,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                              >> 0xaU) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1)))));
            tracep->chgBit(oldp+1397,((0x4001U == (0x4001U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1))));
            tracep->chgBit(oldp+1398,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                               >> 0xeU) 
                                              & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1)))));
            tracep->chgBit(oldp+1399,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6));
            tracep->chgBit(oldp+1400,((IData)((0x10080U 
                                               == (0x10080U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1401,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                               >> 3U) 
                                              ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                 >> 0xcU)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6)))));
            tracep->chgBit(oldp+1402,((IData)((0xa000U 
                                               == (0xa000U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1403,((1U & ((0xa000U 
                                              == (0xa000U 
                                                  & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6)))));
            tracep->chgBit(oldp+1404,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t11));
            tracep->chgBit(oldp+1405,((IData)((0x100010U 
                                               == (0x100010U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1406,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t13));
            tracep->chgBit(oldp+1407,((IData)((0x104U 
                                               == (0x104U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1408,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t15));
            tracep->chgBit(oldp+1409,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                               >> 0xaU) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1)) 
                                             ^ (0x20040U 
                                                == 
                                                (0x20040U 
                                                 & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1))))));
            tracep->chgBit(oldp+1410,((1U & ((((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                >> 0xeU) 
                                               & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1)) 
                                             ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                >> 0x12U)))));
            tracep->chgBit(oldp+1411,((1U & ((((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                >> 3U) 
                                               ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                  >> 0xcU)) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6)) 
                                             ^ (0x10080U 
                                                == 
                                                (0x10080U 
                                                 & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1))))));
            tracep->chgBit(oldp+1412,((1U & (((0xa000U 
                                               == (0xa000U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t15)))));
            tracep->chgBit(oldp+1413,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t20));
            tracep->chgBit(oldp+1414,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21));
            tracep->chgBit(oldp+1415,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t22));
            tracep->chgBit(oldp+1416,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23));
            tracep->chgBit(oldp+1417,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t24));
            tracep->chgBit(oldp+1418,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25));
            tracep->chgBit(oldp+1419,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+1420,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t27));
            tracep->chgBit(oldp+1421,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+1422,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23) 
                                        ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25)) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t27))));
            tracep->chgBit(oldp+1423,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21) 
                                        ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25)) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t24))));
            tracep->chgBit(oldp+1424,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t20) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23))));
            tracep->chgBit(oldp+1425,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t27) 
                                       & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t20) 
                                          & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23)))));
            tracep->chgBit(oldp+1426,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t27) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+1427,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t22))));
            tracep->chgBit(oldp+1428,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t24) 
                                       & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21) 
                                          & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t22)))));
            tracep->chgBit(oldp+1429,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t24) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+1430,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t37));
            tracep->chgBit(oldp+1431,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t38));
            tracep->chgBit(oldp+1432,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t39));
            tracep->chgBit(oldp+1433,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t40));
            tracep->chgBit(oldp+1434,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t41));
            tracep->chgBit(oldp+1435,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t42));
            tracep->chgBit(oldp+1436,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t43));
            tracep->chgBit(oldp+1437,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t44));
            tracep->chgBit(oldp+1438,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t45));
            tracep->chgBit(oldp+1439,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t0));
            tracep->chgBit(oldp+1440,((1U & VL_REDXOR_32(
                                                         (0x300U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+1441,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t2));
            tracep->chgBit(oldp+1442,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t3));
            tracep->chgBit(oldp+1443,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t4));
            tracep->chgBit(oldp+1444,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t5));
            tracep->chgBit(oldp+1445,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6));
            tracep->chgBit(oldp+1446,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t7));
            tracep->chgBit(oldp+1447,((1U & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                             ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                                >> 3U)))));
            tracep->chgBit(oldp+1448,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t9));
            tracep->chgBit(oldp+1449,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t10));
            tracep->chgBit(oldp+1450,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t11));
            tracep->chgBit(oldp+1451,((1U & VL_REDXOR_32(
                                                         (0x14000U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+1452,((1U & VL_REDXOR_32(
                                                         (0x20002U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+1453,((1U & VL_REDXOR_32(
                                                         (0x21000U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+1454,((1U & VL_REDXOR_32(
                                                         (0x210U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+1455,((1U & VL_REDXOR_32(
                                                         (0x880U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+1456,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                              >> 8U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t2)))));
            tracep->chgBit(oldp+1457,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                              >> 0xdU) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t5)))));
            tracep->chgBit(oldp+1458,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t2) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t3))));
            tracep->chgBit(oldp+1459,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t4) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6))));
            tracep->chgBit(oldp+1460,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t22));
            tracep->chgBit(oldp+1461,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t23));
            tracep->chgBit(oldp+1462,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t5) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t7))));
            tracep->chgBit(oldp+1463,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t10))));
            tracep->chgBit(oldp+1464,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t9) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t11))));
            tracep->chgBit(oldp+1465,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t10) 
                                             ^ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                                 >> 0xdU) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t5))))));
            tracep->chgBit(oldp+1466,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t11) 
                                       ^ ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6) 
                                          ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t10)))));
            tracep->chgBit(oldp+1467,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                               >> 4U) 
                                              ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                                 >> 9U)) 
                                             ^ ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t4) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__0__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6))))));
            tracep->chgCData(oldp+1468,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT____Vcellout__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__fx),8);
            tracep->chgCData(oldp+1469,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                        [1U]),8);
            tracep->chgIData(oldp+1470,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t1),21);
            tracep->chgIData(oldp+1471,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t2),18);
            tracep->chgBit(oldp+1472,((1U & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                       [1U])));
            tracep->chgBit(oldp+1473,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__top__DOT__y1));
            tracep->chgBit(oldp+1474,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__top__DOT__y2));
            tracep->chgBit(oldp+1475,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__top__DOT__y3));
            tracep->chgBit(oldp+1476,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__top__DOT__y4));
            tracep->chgBit(oldp+1477,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__top__DOT__t0));
            tracep->chgBit(oldp+1478,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__top__DOT__y5));
            tracep->chgBit(oldp+1479,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__top__DOT__t1));
            tracep->chgBit(oldp+1480,((1U & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                             [1U] ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__top__DOT__y5)))));
            tracep->chgBit(oldp+1481,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__top__DOT__y7));
            tracep->chgBit(oldp+1482,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__top__DOT__y8));
            tracep->chgBit(oldp+1483,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__top__DOT__t2));
            tracep->chgBit(oldp+1484,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__top__DOT__t3));
            tracep->chgBit(oldp+1485,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__top__DOT__y3) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__top__DOT__y4))));
            tracep->chgBit(oldp+1486,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__top__DOT__y5) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__top__DOT__t2))));
            tracep->chgBit(oldp+1487,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__top__DOT__t0) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__top__DOT__t2))));
            tracep->chgBit(oldp+1488,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__top__DOT__y12));
            tracep->chgBit(oldp+1489,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__top__DOT__y13));
            tracep->chgBit(oldp+1490,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                              [1U] 
                                              >> 4U) 
                                             ^ vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                             [1U]))));
            tracep->chgBit(oldp+1491,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__top__DOT__y14));
            tracep->chgBit(oldp+1492,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__top__DOT__y15));
            tracep->chgBit(oldp+1493,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                              [1U] 
                                              >> 1U) 
                                             ^ vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                             [1U]))));
            tracep->chgBit(oldp+1494,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__top__DOT__y16));
            tracep->chgBit(oldp+1495,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__top__DOT__y2) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__top__DOT__y16))));
            tracep->chgBit(oldp+1496,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__top__DOT__y2) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__top__DOT__y8))));
            tracep->chgBit(oldp+1497,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__top__DOT__y15) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__top__DOT__y13))));
            tracep->chgBit(oldp+1498,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__top__DOT__y1) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__top__DOT__t3))));
            tracep->chgBit(oldp+1499,((1U & VL_REDXOR_32(
                                                         (0x1008U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1500,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1));
            tracep->chgBit(oldp+1501,((IData)((0x20040U 
                                               == (0x20040U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1502,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t1 
                                              >> 0xaU) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1)))));
            tracep->chgBit(oldp+1503,((0x4001U == (0x4001U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t1))));
            tracep->chgBit(oldp+1504,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t1 
                                               >> 0xeU) 
                                              & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t1) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1)))));
            tracep->chgBit(oldp+1505,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6));
            tracep->chgBit(oldp+1506,((IData)((0x10080U 
                                               == (0x10080U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1507,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t1 
                                               >> 3U) 
                                              ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t1 
                                                 >> 0xcU)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6)))));
            tracep->chgBit(oldp+1508,((IData)((0xa000U 
                                               == (0xa000U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1509,((1U & ((0xa000U 
                                              == (0xa000U 
                                                  & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t1)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6)))));
            tracep->chgBit(oldp+1510,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t11));
            tracep->chgBit(oldp+1511,((IData)((0x100010U 
                                               == (0x100010U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1512,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t13));
            tracep->chgBit(oldp+1513,((IData)((0x104U 
                                               == (0x104U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1514,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t15));
            tracep->chgBit(oldp+1515,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t1 
                                               >> 0xaU) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1)) 
                                             ^ (0x20040U 
                                                == 
                                                (0x20040U 
                                                 & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t1))))));
            tracep->chgBit(oldp+1516,((1U & ((((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t1 
                                                >> 0xeU) 
                                               & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t1) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1)) 
                                             ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t1 
                                                >> 0x12U)))));
            tracep->chgBit(oldp+1517,((1U & ((((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t1 
                                                >> 3U) 
                                               ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t1 
                                                  >> 0xcU)) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6)) 
                                             ^ (0x10080U 
                                                == 
                                                (0x10080U 
                                                 & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t1))))));
            tracep->chgBit(oldp+1518,((1U & (((0xa000U 
                                               == (0xa000U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t1)) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t15)))));
            tracep->chgBit(oldp+1519,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t20));
            tracep->chgBit(oldp+1520,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21));
            tracep->chgBit(oldp+1521,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t22));
            tracep->chgBit(oldp+1522,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23));
            tracep->chgBit(oldp+1523,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t24));
            tracep->chgBit(oldp+1524,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25));
            tracep->chgBit(oldp+1525,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+1526,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t27));
            tracep->chgBit(oldp+1527,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+1528,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23) 
                                        ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25)) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t27))));
            tracep->chgBit(oldp+1529,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21) 
                                        ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25)) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t24))));
            tracep->chgBit(oldp+1530,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t20) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23))));
            tracep->chgBit(oldp+1531,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t27) 
                                       & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t20) 
                                          & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23)))));
            tracep->chgBit(oldp+1532,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t27) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+1533,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t22))));
            tracep->chgBit(oldp+1534,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t24) 
                                       & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21) 
                                          & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t22)))));
            tracep->chgBit(oldp+1535,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t24) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+1536,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t37));
            tracep->chgBit(oldp+1537,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t38));
            tracep->chgBit(oldp+1538,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t39));
            tracep->chgBit(oldp+1539,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t40));
            tracep->chgBit(oldp+1540,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t41));
            tracep->chgBit(oldp+1541,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t42));
            tracep->chgBit(oldp+1542,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t43));
            tracep->chgBit(oldp+1543,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t44));
            tracep->chgBit(oldp+1544,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t45));
            tracep->chgBit(oldp+1545,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__out__DOT__t0));
            tracep->chgBit(oldp+1546,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1));
            tracep->chgBit(oldp+1547,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__out__DOT__t2));
            tracep->chgBit(oldp+1548,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__out__DOT__t3));
            tracep->chgBit(oldp+1549,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__out__DOT__t4));
            tracep->chgBit(oldp+1550,((1U & VL_REDXOR_32(
                                                         (0x20800U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t2)))));
            tracep->chgBit(oldp+1551,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__out__DOT__t6));
            tracep->chgBit(oldp+1552,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__out__DOT__t7));
            tracep->chgBit(oldp+1553,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__out__DOT__t8));
            tracep->chgBit(oldp+1554,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__out__DOT__t9));
            tracep->chgBit(oldp+1555,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__out__DOT__t10));
            tracep->chgBit(oldp+1556,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__out__DOT__t11));
            tracep->chgBit(oldp+1557,((1U & VL_REDXOR_32(
                                                         (0x10002U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t2)))));
            tracep->chgBit(oldp+1558,((1U & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t2 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__out__DOT__t0)))));
            tracep->chgBit(oldp+1559,((1U & VL_REDXOR_32(
                                                         (0x804U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t2)))));
            tracep->chgBit(oldp+1560,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 5U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1)))));
            tracep->chgBit(oldp+1561,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 6U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__out__DOT__t0)))));
            tracep->chgBit(oldp+1562,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 7U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1)))));
            tracep->chgBit(oldp+1563,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 8U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__out__DOT__t8)))));
            tracep->chgBit(oldp+1564,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 0xdU) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__out__DOT__t4)))));
            tracep->chgBit(oldp+1565,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__out__DOT__t0) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1))));
            tracep->chgBit(oldp+1566,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__out__DOT__t7))));
            tracep->chgBit(oldp+1567,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__out__DOT__t3) 
                                             ^ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t2 
                                                 >> 0x10U) 
                                                ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t2 
                                                   >> 1U))))));
            tracep->chgBit(oldp+1568,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t2 
                                               >> 8U) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__out__DOT__t8)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__out__DOT__t2)))));
            tracep->chgBit(oldp+1569,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t2 
                                               >> 5U) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__out__DOT__t9)))));
            tracep->chgBit(oldp+1570,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__out__DOT__t6) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__out__DOT__t10))));
            tracep->chgBit(oldp+1571,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__out__DOT__t7) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__out__DOT__t9))));
            tracep->chgBit(oldp+1572,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__out__DOT__t8) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__out__DOT__t10))));
            tracep->chgBit(oldp+1573,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__out__DOT__t11) 
                                             ^ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t2 
                                                 >> 2U) 
                                                ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t2 
                                                   >> 0xbU))))));
            tracep->chgBit(oldp+1574,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__out__DOT__t11) 
                                             ^ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__t2 
                                                 >> 7U) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1))))));
            tracep->chgCData(oldp+1575,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT____Vcellout__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__fx),8);
            tracep->chgCData(oldp+1576,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                        [1U]),8);
            tracep->chgIData(oldp+1577,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1),21);
            tracep->chgIData(oldp+1578,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2),18);
            tracep->chgBit(oldp+1579,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y17));
            tracep->chgBit(oldp+1580,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y16));
            tracep->chgBit(oldp+1581,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y2));
            tracep->chgBit(oldp+1582,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y1));
            tracep->chgBit(oldp+1583,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y18));
            tracep->chgBit(oldp+1584,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t0));
            tracep->chgBit(oldp+1585,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y6));
            tracep->chgBit(oldp+1586,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y14));
            tracep->chgBit(oldp+1587,((1U & (~ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                [1U] 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y1))))));
            tracep->chgBit(oldp+1588,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y8));
            tracep->chgBit(oldp+1589,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y2) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t0))));
            tracep->chgBit(oldp+1590,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y1) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t0))));
            tracep->chgBit(oldp+1591,((1U & (~ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                 [1U] 
                                                 >> 5U) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y1))))));
            tracep->chgBit(oldp+1592,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t1));
            tracep->chgBit(oldp+1593,((1U & (~ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                 [1U] 
                                                 >> 5U) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y14))))));
            tracep->chgBit(oldp+1594,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y18) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t1))));
            tracep->chgBit(oldp+1595,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                              [1U] 
                                              >> 3U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y6)))));
            tracep->chgBit(oldp+1596,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t2));
            tracep->chgBit(oldp+1597,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t3));
            tracep->chgBit(oldp+1598,((1U & (~ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                 [1U] 
                                                 >> 5U) 
                                                ^ (
                                                   vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                   [1U] 
                                                   >> 3U))))));
            tracep->chgBit(oldp+1599,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y16) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t2))));
            tracep->chgBit(oldp+1600,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t1) 
                                             ^ (~ (
                                                   (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                    [1U] 
                                                    >> 5U) 
                                                   ^ 
                                                   (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                    [1U] 
                                                    >> 3U)))))));
            tracep->chgBit(oldp+1601,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y20));
            tracep->chgBit(oldp+1602,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y8) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y20))));
            tracep->chgBit(oldp+1603,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y8) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t3))));
            tracep->chgBit(oldp+1604,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                              [1U] 
                                              >> 7U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t2)))));
            tracep->chgBit(oldp+1605,((1U & VL_REDXOR_32(
                                                         (0x1008U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1606,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1));
            tracep->chgBit(oldp+1607,((IData)((0x20040U 
                                               == (0x20040U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1608,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                              >> 0xaU) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1)))));
            tracep->chgBit(oldp+1609,((0x4001U == (0x4001U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1))));
            tracep->chgBit(oldp+1610,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                               >> 0xeU) 
                                              & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1)))));
            tracep->chgBit(oldp+1611,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6));
            tracep->chgBit(oldp+1612,((IData)((0x10080U 
                                               == (0x10080U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1613,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                               >> 3U) 
                                              ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                 >> 0xcU)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6)))));
            tracep->chgBit(oldp+1614,((IData)((0xa000U 
                                               == (0xa000U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1615,((1U & ((0xa000U 
                                              == (0xa000U 
                                                  & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6)))));
            tracep->chgBit(oldp+1616,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t11));
            tracep->chgBit(oldp+1617,((IData)((0x100010U 
                                               == (0x100010U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1618,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t13));
            tracep->chgBit(oldp+1619,((IData)((0x104U 
                                               == (0x104U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1620,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t15));
            tracep->chgBit(oldp+1621,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                               >> 0xaU) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1)) 
                                             ^ (0x20040U 
                                                == 
                                                (0x20040U 
                                                 & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1))))));
            tracep->chgBit(oldp+1622,((1U & ((((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                >> 0xeU) 
                                               & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1)) 
                                             ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                >> 0x12U)))));
            tracep->chgBit(oldp+1623,((1U & ((((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                >> 3U) 
                                               ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                  >> 0xcU)) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6)) 
                                             ^ (0x10080U 
                                                == 
                                                (0x10080U 
                                                 & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1))))));
            tracep->chgBit(oldp+1624,((1U & (((0xa000U 
                                               == (0xa000U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t15)))));
            tracep->chgBit(oldp+1625,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t20));
            tracep->chgBit(oldp+1626,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21));
            tracep->chgBit(oldp+1627,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t22));
            tracep->chgBit(oldp+1628,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23));
            tracep->chgBit(oldp+1629,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t24));
            tracep->chgBit(oldp+1630,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25));
            tracep->chgBit(oldp+1631,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+1632,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t27));
            tracep->chgBit(oldp+1633,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+1634,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23) 
                                        ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25)) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t27))));
            tracep->chgBit(oldp+1635,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21) 
                                        ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25)) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t24))));
            tracep->chgBit(oldp+1636,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t20) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23))));
            tracep->chgBit(oldp+1637,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t27) 
                                       & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t20) 
                                          & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23)))));
            tracep->chgBit(oldp+1638,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t27) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+1639,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t22))));
            tracep->chgBit(oldp+1640,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t24) 
                                       & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21) 
                                          & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t22)))));
            tracep->chgBit(oldp+1641,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t24) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+1642,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t37));
            tracep->chgBit(oldp+1643,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t38));
            tracep->chgBit(oldp+1644,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t39));
            tracep->chgBit(oldp+1645,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t40));
            tracep->chgBit(oldp+1646,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t41));
            tracep->chgBit(oldp+1647,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t42));
            tracep->chgBit(oldp+1648,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t43));
            tracep->chgBit(oldp+1649,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t44));
            tracep->chgBit(oldp+1650,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t45));
            tracep->chgBit(oldp+1651,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t0));
            tracep->chgBit(oldp+1652,((1U & VL_REDXOR_32(
                                                         (0x300U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+1653,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t2));
            tracep->chgBit(oldp+1654,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t3));
            tracep->chgBit(oldp+1655,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t4));
            tracep->chgBit(oldp+1656,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t5));
            tracep->chgBit(oldp+1657,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6));
            tracep->chgBit(oldp+1658,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t7));
            tracep->chgBit(oldp+1659,((1U & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                             ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                                >> 3U)))));
            tracep->chgBit(oldp+1660,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t9));
            tracep->chgBit(oldp+1661,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t10));
            tracep->chgBit(oldp+1662,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t11));
            tracep->chgBit(oldp+1663,((1U & VL_REDXOR_32(
                                                         (0x14000U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+1664,((1U & VL_REDXOR_32(
                                                         (0x20002U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+1665,((1U & VL_REDXOR_32(
                                                         (0x21000U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+1666,((1U & VL_REDXOR_32(
                                                         (0x210U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+1667,((1U & VL_REDXOR_32(
                                                         (0x880U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+1668,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                              >> 8U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t2)))));
            tracep->chgBit(oldp+1669,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                              >> 0xdU) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t5)))));
            tracep->chgBit(oldp+1670,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t2) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t3))));
            tracep->chgBit(oldp+1671,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t4) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6))));
            tracep->chgBit(oldp+1672,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t22));
            tracep->chgBit(oldp+1673,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t23));
            tracep->chgBit(oldp+1674,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t5) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t7))));
            tracep->chgBit(oldp+1675,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t10))));
            tracep->chgBit(oldp+1676,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t9) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t11))));
            tracep->chgBit(oldp+1677,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t10) 
                                             ^ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                                 >> 0xdU) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t5))))));
            tracep->chgBit(oldp+1678,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t11) 
                                       ^ ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6) 
                                          ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t10)))));
            tracep->chgBit(oldp+1679,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                               >> 4U) 
                                              ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                                 >> 9U)) 
                                             ^ ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t4) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__1__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6))))));
            tracep->chgCData(oldp+1680,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT____Vcellout__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__fx),8);
            tracep->chgCData(oldp+1681,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                        [2U]),8);
            tracep->chgIData(oldp+1682,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t1),21);
            tracep->chgIData(oldp+1683,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t2),18);
            tracep->chgBit(oldp+1684,((1U & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                       [2U])));
            tracep->chgBit(oldp+1685,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__top__DOT__y1));
            tracep->chgBit(oldp+1686,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__top__DOT__y2));
            tracep->chgBit(oldp+1687,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__top__DOT__y3));
            tracep->chgBit(oldp+1688,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__top__DOT__y4));
            tracep->chgBit(oldp+1689,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__top__DOT__t0));
            tracep->chgBit(oldp+1690,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__top__DOT__y5));
            tracep->chgBit(oldp+1691,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__top__DOT__t1));
            tracep->chgBit(oldp+1692,((1U & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                             [2U] ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__top__DOT__y5)))));
            tracep->chgBit(oldp+1693,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__top__DOT__y7));
            tracep->chgBit(oldp+1694,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__top__DOT__y8));
            tracep->chgBit(oldp+1695,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__top__DOT__t2));
            tracep->chgBit(oldp+1696,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__top__DOT__t3));
            tracep->chgBit(oldp+1697,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__top__DOT__y3) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__top__DOT__y4))));
            tracep->chgBit(oldp+1698,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__top__DOT__y5) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__top__DOT__t2))));
            tracep->chgBit(oldp+1699,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__top__DOT__t0) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__top__DOT__t2))));
            tracep->chgBit(oldp+1700,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__top__DOT__y12));
            tracep->chgBit(oldp+1701,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__top__DOT__y13));
            tracep->chgBit(oldp+1702,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                              [2U] 
                                              >> 4U) 
                                             ^ vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                             [2U]))));
            tracep->chgBit(oldp+1703,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__top__DOT__y14));
            tracep->chgBit(oldp+1704,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__top__DOT__y15));
            tracep->chgBit(oldp+1705,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                              [2U] 
                                              >> 1U) 
                                             ^ vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                             [2U]))));
            tracep->chgBit(oldp+1706,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__top__DOT__y16));
            tracep->chgBit(oldp+1707,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__top__DOT__y2) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__top__DOT__y16))));
            tracep->chgBit(oldp+1708,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__top__DOT__y2) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__top__DOT__y8))));
            tracep->chgBit(oldp+1709,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__top__DOT__y15) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__top__DOT__y13))));
            tracep->chgBit(oldp+1710,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__top__DOT__y1) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__top__DOT__t3))));
            tracep->chgBit(oldp+1711,((1U & VL_REDXOR_32(
                                                         (0x1008U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1712,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1));
            tracep->chgBit(oldp+1713,((IData)((0x20040U 
                                               == (0x20040U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1714,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t1 
                                              >> 0xaU) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1)))));
            tracep->chgBit(oldp+1715,((0x4001U == (0x4001U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t1))));
            tracep->chgBit(oldp+1716,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t1 
                                               >> 0xeU) 
                                              & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t1) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1)))));
            tracep->chgBit(oldp+1717,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6));
            tracep->chgBit(oldp+1718,((IData)((0x10080U 
                                               == (0x10080U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1719,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t1 
                                               >> 3U) 
                                              ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t1 
                                                 >> 0xcU)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6)))));
            tracep->chgBit(oldp+1720,((IData)((0xa000U 
                                               == (0xa000U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1721,((1U & ((0xa000U 
                                              == (0xa000U 
                                                  & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t1)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6)))));
            tracep->chgBit(oldp+1722,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t11));
            tracep->chgBit(oldp+1723,((IData)((0x100010U 
                                               == (0x100010U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1724,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t13));
            tracep->chgBit(oldp+1725,((IData)((0x104U 
                                               == (0x104U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1726,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t15));
            tracep->chgBit(oldp+1727,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t1 
                                               >> 0xaU) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1)) 
                                             ^ (0x20040U 
                                                == 
                                                (0x20040U 
                                                 & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t1))))));
            tracep->chgBit(oldp+1728,((1U & ((((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t1 
                                                >> 0xeU) 
                                               & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t1) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1)) 
                                             ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t1 
                                                >> 0x12U)))));
            tracep->chgBit(oldp+1729,((1U & ((((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t1 
                                                >> 3U) 
                                               ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t1 
                                                  >> 0xcU)) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6)) 
                                             ^ (0x10080U 
                                                == 
                                                (0x10080U 
                                                 & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t1))))));
            tracep->chgBit(oldp+1730,((1U & (((0xa000U 
                                               == (0xa000U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t1)) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t15)))));
            tracep->chgBit(oldp+1731,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t20));
            tracep->chgBit(oldp+1732,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21));
            tracep->chgBit(oldp+1733,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t22));
            tracep->chgBit(oldp+1734,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23));
            tracep->chgBit(oldp+1735,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t24));
            tracep->chgBit(oldp+1736,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25));
            tracep->chgBit(oldp+1737,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+1738,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t27));
            tracep->chgBit(oldp+1739,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+1740,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23) 
                                        ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25)) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t27))));
            tracep->chgBit(oldp+1741,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21) 
                                        ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25)) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t24))));
            tracep->chgBit(oldp+1742,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t20) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23))));
            tracep->chgBit(oldp+1743,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t27) 
                                       & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t20) 
                                          & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23)))));
            tracep->chgBit(oldp+1744,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t27) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+1745,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t22))));
            tracep->chgBit(oldp+1746,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t24) 
                                       & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21) 
                                          & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t22)))));
            tracep->chgBit(oldp+1747,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t24) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+1748,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t37));
            tracep->chgBit(oldp+1749,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t38));
            tracep->chgBit(oldp+1750,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t39));
            tracep->chgBit(oldp+1751,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t40));
            tracep->chgBit(oldp+1752,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t41));
            tracep->chgBit(oldp+1753,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t42));
            tracep->chgBit(oldp+1754,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t43));
            tracep->chgBit(oldp+1755,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t44));
            tracep->chgBit(oldp+1756,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t45));
            tracep->chgBit(oldp+1757,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__out__DOT__t0));
            tracep->chgBit(oldp+1758,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1));
            tracep->chgBit(oldp+1759,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__out__DOT__t2));
            tracep->chgBit(oldp+1760,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__out__DOT__t3));
            tracep->chgBit(oldp+1761,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__out__DOT__t4));
            tracep->chgBit(oldp+1762,((1U & VL_REDXOR_32(
                                                         (0x20800U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t2)))));
            tracep->chgBit(oldp+1763,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__out__DOT__t6));
            tracep->chgBit(oldp+1764,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__out__DOT__t7));
            tracep->chgBit(oldp+1765,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__out__DOT__t8));
            tracep->chgBit(oldp+1766,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__out__DOT__t9));
            tracep->chgBit(oldp+1767,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__out__DOT__t10));
            tracep->chgBit(oldp+1768,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__out__DOT__t11));
            tracep->chgBit(oldp+1769,((1U & VL_REDXOR_32(
                                                         (0x10002U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t2)))));
            tracep->chgBit(oldp+1770,((1U & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t2 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__out__DOT__t0)))));
            tracep->chgBit(oldp+1771,((1U & VL_REDXOR_32(
                                                         (0x804U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t2)))));
            tracep->chgBit(oldp+1772,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 5U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1)))));
            tracep->chgBit(oldp+1773,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 6U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__out__DOT__t0)))));
            tracep->chgBit(oldp+1774,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 7U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1)))));
            tracep->chgBit(oldp+1775,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 8U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__out__DOT__t8)))));
            tracep->chgBit(oldp+1776,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 0xdU) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__out__DOT__t4)))));
            tracep->chgBit(oldp+1777,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__out__DOT__t0) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1))));
            tracep->chgBit(oldp+1778,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__out__DOT__t7))));
            tracep->chgBit(oldp+1779,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__out__DOT__t3) 
                                             ^ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t2 
                                                 >> 0x10U) 
                                                ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t2 
                                                   >> 1U))))));
            tracep->chgBit(oldp+1780,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t2 
                                               >> 8U) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__out__DOT__t8)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__out__DOT__t2)))));
            tracep->chgBit(oldp+1781,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t2 
                                               >> 5U) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__out__DOT__t9)))));
            tracep->chgBit(oldp+1782,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__out__DOT__t6) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__out__DOT__t10))));
            tracep->chgBit(oldp+1783,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__out__DOT__t7) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__out__DOT__t9))));
            tracep->chgBit(oldp+1784,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__out__DOT__t8) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__out__DOT__t10))));
            tracep->chgBit(oldp+1785,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__out__DOT__t11) 
                                             ^ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t2 
                                                 >> 2U) 
                                                ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t2 
                                                   >> 0xbU))))));
            tracep->chgBit(oldp+1786,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__out__DOT__t11) 
                                             ^ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__t2 
                                                 >> 7U) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1))))));
            tracep->chgCData(oldp+1787,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT____Vcellout__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__fx),8);
            tracep->chgCData(oldp+1788,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                        [2U]),8);
            tracep->chgIData(oldp+1789,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1),21);
            tracep->chgIData(oldp+1790,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2),18);
            tracep->chgBit(oldp+1791,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y17));
            tracep->chgBit(oldp+1792,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y16));
            tracep->chgBit(oldp+1793,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y2));
            tracep->chgBit(oldp+1794,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y1));
            tracep->chgBit(oldp+1795,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y18));
            tracep->chgBit(oldp+1796,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t0));
            tracep->chgBit(oldp+1797,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y6));
            tracep->chgBit(oldp+1798,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y14));
            tracep->chgBit(oldp+1799,((1U & (~ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                [2U] 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y1))))));
            tracep->chgBit(oldp+1800,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y8));
            tracep->chgBit(oldp+1801,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y2) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t0))));
            tracep->chgBit(oldp+1802,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y1) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t0))));
            tracep->chgBit(oldp+1803,((1U & (~ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                 [2U] 
                                                 >> 5U) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y1))))));
            tracep->chgBit(oldp+1804,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t1));
            tracep->chgBit(oldp+1805,((1U & (~ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                 [2U] 
                                                 >> 5U) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y14))))));
            tracep->chgBit(oldp+1806,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y18) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t1))));
            tracep->chgBit(oldp+1807,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                              [2U] 
                                              >> 3U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y6)))));
            tracep->chgBit(oldp+1808,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t2));
            tracep->chgBit(oldp+1809,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t3));
            tracep->chgBit(oldp+1810,((1U & (~ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                 [2U] 
                                                 >> 5U) 
                                                ^ (
                                                   vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                   [2U] 
                                                   >> 3U))))));
            tracep->chgBit(oldp+1811,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y16) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t2))));
            tracep->chgBit(oldp+1812,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t1) 
                                             ^ (~ (
                                                   (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                    [2U] 
                                                    >> 5U) 
                                                   ^ 
                                                   (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                    [2U] 
                                                    >> 3U)))))));
            tracep->chgBit(oldp+1813,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y20));
            tracep->chgBit(oldp+1814,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y8) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y20))));
            tracep->chgBit(oldp+1815,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y8) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t3))));
            tracep->chgBit(oldp+1816,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                              [2U] 
                                              >> 7U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t2)))));
            tracep->chgBit(oldp+1817,((1U & VL_REDXOR_32(
                                                         (0x1008U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1818,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1));
            tracep->chgBit(oldp+1819,((IData)((0x20040U 
                                               == (0x20040U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1820,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                              >> 0xaU) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1)))));
            tracep->chgBit(oldp+1821,((0x4001U == (0x4001U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1))));
            tracep->chgBit(oldp+1822,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                               >> 0xeU) 
                                              & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1)))));
            tracep->chgBit(oldp+1823,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6));
            tracep->chgBit(oldp+1824,((IData)((0x10080U 
                                               == (0x10080U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1825,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                               >> 3U) 
                                              ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                 >> 0xcU)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6)))));
            tracep->chgBit(oldp+1826,((IData)((0xa000U 
                                               == (0xa000U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1827,((1U & ((0xa000U 
                                              == (0xa000U 
                                                  & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6)))));
            tracep->chgBit(oldp+1828,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t11));
            tracep->chgBit(oldp+1829,((IData)((0x100010U 
                                               == (0x100010U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1830,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t13));
            tracep->chgBit(oldp+1831,((IData)((0x104U 
                                               == (0x104U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1832,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t15));
            tracep->chgBit(oldp+1833,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                               >> 0xaU) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1)) 
                                             ^ (0x20040U 
                                                == 
                                                (0x20040U 
                                                 & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1))))));
            tracep->chgBit(oldp+1834,((1U & ((((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                >> 0xeU) 
                                               & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1)) 
                                             ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                >> 0x12U)))));
            tracep->chgBit(oldp+1835,((1U & ((((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                >> 3U) 
                                               ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                  >> 0xcU)) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6)) 
                                             ^ (0x10080U 
                                                == 
                                                (0x10080U 
                                                 & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1))))));
            tracep->chgBit(oldp+1836,((1U & (((0xa000U 
                                               == (0xa000U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t15)))));
            tracep->chgBit(oldp+1837,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t20));
            tracep->chgBit(oldp+1838,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21));
            tracep->chgBit(oldp+1839,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t22));
            tracep->chgBit(oldp+1840,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23));
            tracep->chgBit(oldp+1841,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t24));
            tracep->chgBit(oldp+1842,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25));
            tracep->chgBit(oldp+1843,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+1844,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t27));
            tracep->chgBit(oldp+1845,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+1846,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23) 
                                        ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25)) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t27))));
            tracep->chgBit(oldp+1847,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21) 
                                        ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25)) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t24))));
            tracep->chgBit(oldp+1848,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t20) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23))));
            tracep->chgBit(oldp+1849,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t27) 
                                       & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t20) 
                                          & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23)))));
            tracep->chgBit(oldp+1850,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t27) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+1851,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t22))));
            tracep->chgBit(oldp+1852,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t24) 
                                       & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21) 
                                          & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t22)))));
            tracep->chgBit(oldp+1853,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t24) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+1854,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t37));
            tracep->chgBit(oldp+1855,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t38));
            tracep->chgBit(oldp+1856,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t39));
            tracep->chgBit(oldp+1857,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t40));
            tracep->chgBit(oldp+1858,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t41));
            tracep->chgBit(oldp+1859,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t42));
            tracep->chgBit(oldp+1860,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t43));
            tracep->chgBit(oldp+1861,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t44));
            tracep->chgBit(oldp+1862,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t45));
            tracep->chgBit(oldp+1863,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t0));
            tracep->chgBit(oldp+1864,((1U & VL_REDXOR_32(
                                                         (0x300U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+1865,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t2));
            tracep->chgBit(oldp+1866,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t3));
            tracep->chgBit(oldp+1867,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t4));
            tracep->chgBit(oldp+1868,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t5));
            tracep->chgBit(oldp+1869,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6));
            tracep->chgBit(oldp+1870,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t7));
            tracep->chgBit(oldp+1871,((1U & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                             ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                                >> 3U)))));
            tracep->chgBit(oldp+1872,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t9));
            tracep->chgBit(oldp+1873,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t10));
            tracep->chgBit(oldp+1874,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t11));
            tracep->chgBit(oldp+1875,((1U & VL_REDXOR_32(
                                                         (0x14000U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+1876,((1U & VL_REDXOR_32(
                                                         (0x20002U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+1877,((1U & VL_REDXOR_32(
                                                         (0x21000U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+1878,((1U & VL_REDXOR_32(
                                                         (0x210U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+1879,((1U & VL_REDXOR_32(
                                                         (0x880U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+1880,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                              >> 8U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t2)))));
            tracep->chgBit(oldp+1881,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                              >> 0xdU) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t5)))));
            tracep->chgBit(oldp+1882,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t2) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t3))));
            tracep->chgBit(oldp+1883,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t4) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6))));
            tracep->chgBit(oldp+1884,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t22));
            tracep->chgBit(oldp+1885,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t23));
            tracep->chgBit(oldp+1886,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t5) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t7))));
            tracep->chgBit(oldp+1887,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t10))));
            tracep->chgBit(oldp+1888,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t9) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t11))));
            tracep->chgBit(oldp+1889,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t10) 
                                             ^ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                                 >> 0xdU) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t5))))));
            tracep->chgBit(oldp+1890,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t11) 
                                       ^ ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6) 
                                          ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t10)))));
            tracep->chgBit(oldp+1891,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                               >> 4U) 
                                              ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                                 >> 9U)) 
                                             ^ ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t4) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__2__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6))))));
            tracep->chgCData(oldp+1892,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT____Vcellout__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__fx),8);
            tracep->chgCData(oldp+1893,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                        [3U]),8);
            tracep->chgIData(oldp+1894,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t1),21);
            tracep->chgIData(oldp+1895,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t2),18);
            tracep->chgBit(oldp+1896,((1U & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                       [3U])));
            tracep->chgBit(oldp+1897,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__top__DOT__y1));
            tracep->chgBit(oldp+1898,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__top__DOT__y2));
            tracep->chgBit(oldp+1899,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__top__DOT__y3));
            tracep->chgBit(oldp+1900,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__top__DOT__y4));
            tracep->chgBit(oldp+1901,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__top__DOT__t0));
            tracep->chgBit(oldp+1902,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__top__DOT__y5));
            tracep->chgBit(oldp+1903,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__top__DOT__t1));
            tracep->chgBit(oldp+1904,((1U & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                             [3U] ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__top__DOT__y5)))));
            tracep->chgBit(oldp+1905,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__top__DOT__y7));
            tracep->chgBit(oldp+1906,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__top__DOT__y8));
            tracep->chgBit(oldp+1907,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__top__DOT__t2));
            tracep->chgBit(oldp+1908,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__top__DOT__t3));
            tracep->chgBit(oldp+1909,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__top__DOT__y3) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__top__DOT__y4))));
            tracep->chgBit(oldp+1910,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__top__DOT__y5) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__top__DOT__t2))));
            tracep->chgBit(oldp+1911,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__top__DOT__t0) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__top__DOT__t2))));
            tracep->chgBit(oldp+1912,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__top__DOT__y12));
            tracep->chgBit(oldp+1913,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__top__DOT__y13));
            tracep->chgBit(oldp+1914,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                              [3U] 
                                              >> 4U) 
                                             ^ vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                             [3U]))));
            tracep->chgBit(oldp+1915,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__top__DOT__y14));
            tracep->chgBit(oldp+1916,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__top__DOT__y15));
            tracep->chgBit(oldp+1917,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                              [3U] 
                                              >> 1U) 
                                             ^ vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                             [3U]))));
            tracep->chgBit(oldp+1918,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__top__DOT__y16));
            tracep->chgBit(oldp+1919,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__top__DOT__y2) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__top__DOT__y16))));
            tracep->chgBit(oldp+1920,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__top__DOT__y2) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__top__DOT__y8))));
            tracep->chgBit(oldp+1921,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__top__DOT__y15) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__top__DOT__y13))));
            tracep->chgBit(oldp+1922,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__top__DOT__y1) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__top__DOT__t3))));
            tracep->chgBit(oldp+1923,((1U & VL_REDXOR_32(
                                                         (0x1008U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1924,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1));
            tracep->chgBit(oldp+1925,((IData)((0x20040U 
                                               == (0x20040U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1926,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t1 
                                              >> 0xaU) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1)))));
            tracep->chgBit(oldp+1927,((0x4001U == (0x4001U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t1))));
            tracep->chgBit(oldp+1928,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t1 
                                               >> 0xeU) 
                                              & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t1) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1)))));
            tracep->chgBit(oldp+1929,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6));
            tracep->chgBit(oldp+1930,((IData)((0x10080U 
                                               == (0x10080U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1931,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t1 
                                               >> 3U) 
                                              ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t1 
                                                 >> 0xcU)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6)))));
            tracep->chgBit(oldp+1932,((IData)((0xa000U 
                                               == (0xa000U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1933,((1U & ((0xa000U 
                                              == (0xa000U 
                                                  & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t1)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6)))));
            tracep->chgBit(oldp+1934,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t11));
            tracep->chgBit(oldp+1935,((IData)((0x100010U 
                                               == (0x100010U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1936,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t13));
            tracep->chgBit(oldp+1937,((IData)((0x104U 
                                               == (0x104U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+1938,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t15));
            tracep->chgBit(oldp+1939,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t1 
                                               >> 0xaU) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1)) 
                                             ^ (0x20040U 
                                                == 
                                                (0x20040U 
                                                 & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t1))))));
            tracep->chgBit(oldp+1940,((1U & ((((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t1 
                                                >> 0xeU) 
                                               & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t1) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1)) 
                                             ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t1 
                                                >> 0x12U)))));
            tracep->chgBit(oldp+1941,((1U & ((((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t1 
                                                >> 3U) 
                                               ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t1 
                                                  >> 0xcU)) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6)) 
                                             ^ (0x10080U 
                                                == 
                                                (0x10080U 
                                                 & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t1))))));
            tracep->chgBit(oldp+1942,((1U & (((0xa000U 
                                               == (0xa000U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t1)) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t15)))));
            tracep->chgBit(oldp+1943,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t20));
            tracep->chgBit(oldp+1944,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21));
            tracep->chgBit(oldp+1945,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t22));
            tracep->chgBit(oldp+1946,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23));
            tracep->chgBit(oldp+1947,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t24));
            tracep->chgBit(oldp+1948,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25));
            tracep->chgBit(oldp+1949,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+1950,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t27));
            tracep->chgBit(oldp+1951,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+1952,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23) 
                                        ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25)) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t27))));
            tracep->chgBit(oldp+1953,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21) 
                                        ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25)) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t24))));
            tracep->chgBit(oldp+1954,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t20) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23))));
            tracep->chgBit(oldp+1955,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t27) 
                                       & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t20) 
                                          & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23)))));
            tracep->chgBit(oldp+1956,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t27) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+1957,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t22))));
            tracep->chgBit(oldp+1958,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t24) 
                                       & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21) 
                                          & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t22)))));
            tracep->chgBit(oldp+1959,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t24) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+1960,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t37));
            tracep->chgBit(oldp+1961,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t38));
            tracep->chgBit(oldp+1962,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t39));
            tracep->chgBit(oldp+1963,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t40));
            tracep->chgBit(oldp+1964,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t41));
            tracep->chgBit(oldp+1965,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t42));
            tracep->chgBit(oldp+1966,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t43));
            tracep->chgBit(oldp+1967,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t44));
            tracep->chgBit(oldp+1968,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t45));
            tracep->chgBit(oldp+1969,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__out__DOT__t0));
            tracep->chgBit(oldp+1970,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1));
            tracep->chgBit(oldp+1971,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__out__DOT__t2));
            tracep->chgBit(oldp+1972,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__out__DOT__t3));
            tracep->chgBit(oldp+1973,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__out__DOT__t4));
            tracep->chgBit(oldp+1974,((1U & VL_REDXOR_32(
                                                         (0x20800U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t2)))));
            tracep->chgBit(oldp+1975,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__out__DOT__t6));
            tracep->chgBit(oldp+1976,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__out__DOT__t7));
            tracep->chgBit(oldp+1977,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__out__DOT__t8));
            tracep->chgBit(oldp+1978,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__out__DOT__t9));
            tracep->chgBit(oldp+1979,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__out__DOT__t10));
            tracep->chgBit(oldp+1980,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__out__DOT__t11));
            tracep->chgBit(oldp+1981,((1U & VL_REDXOR_32(
                                                         (0x10002U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t2)))));
            tracep->chgBit(oldp+1982,((1U & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t2 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__out__DOT__t0)))));
            tracep->chgBit(oldp+1983,((1U & VL_REDXOR_32(
                                                         (0x804U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t2)))));
            tracep->chgBit(oldp+1984,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 5U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1)))));
            tracep->chgBit(oldp+1985,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 6U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__out__DOT__t0)))));
            tracep->chgBit(oldp+1986,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 7U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1)))));
            tracep->chgBit(oldp+1987,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 8U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__out__DOT__t8)))));
            tracep->chgBit(oldp+1988,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 0xdU) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__out__DOT__t4)))));
            tracep->chgBit(oldp+1989,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__out__DOT__t0) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1))));
            tracep->chgBit(oldp+1990,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__out__DOT__t7))));
            tracep->chgBit(oldp+1991,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__out__DOT__t3) 
                                             ^ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t2 
                                                 >> 0x10U) 
                                                ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t2 
                                                   >> 1U))))));
            tracep->chgBit(oldp+1992,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t2 
                                               >> 8U) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__out__DOT__t8)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__out__DOT__t2)))));
            tracep->chgBit(oldp+1993,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t2 
                                               >> 5U) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__out__DOT__t9)))));
            tracep->chgBit(oldp+1994,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__out__DOT__t6) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__out__DOT__t10))));
            tracep->chgBit(oldp+1995,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__out__DOT__t7) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__out__DOT__t9))));
            tracep->chgBit(oldp+1996,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__out__DOT__t8) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__out__DOT__t10))));
            tracep->chgBit(oldp+1997,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__out__DOT__t11) 
                                             ^ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t2 
                                                 >> 2U) 
                                                ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t2 
                                                   >> 0xbU))))));
            tracep->chgBit(oldp+1998,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__out__DOT__t11) 
                                             ^ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__t2 
                                                 >> 7U) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1))))));
            tracep->chgCData(oldp+1999,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT____Vcellout__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__fx),8);
            tracep->chgCData(oldp+2000,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                        [3U]),8);
            tracep->chgIData(oldp+2001,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1),21);
            tracep->chgIData(oldp+2002,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2),18);
            tracep->chgBit(oldp+2003,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y17));
            tracep->chgBit(oldp+2004,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y16));
            tracep->chgBit(oldp+2005,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y2));
            tracep->chgBit(oldp+2006,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y1));
            tracep->chgBit(oldp+2007,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y18));
            tracep->chgBit(oldp+2008,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t0));
            tracep->chgBit(oldp+2009,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y6));
            tracep->chgBit(oldp+2010,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y14));
            tracep->chgBit(oldp+2011,((1U & (~ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                [3U] 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y1))))));
            tracep->chgBit(oldp+2012,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y8));
            tracep->chgBit(oldp+2013,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y2) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t0))));
            tracep->chgBit(oldp+2014,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y1) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t0))));
            tracep->chgBit(oldp+2015,((1U & (~ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                 [3U] 
                                                 >> 5U) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y1))))));
            tracep->chgBit(oldp+2016,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t1));
            tracep->chgBit(oldp+2017,((1U & (~ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                 [3U] 
                                                 >> 5U) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y14))))));
            tracep->chgBit(oldp+2018,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y18) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t1))));
            tracep->chgBit(oldp+2019,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                              [3U] 
                                              >> 3U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y6)))));
            tracep->chgBit(oldp+2020,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t2));
            tracep->chgBit(oldp+2021,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t3));
            tracep->chgBit(oldp+2022,((1U & (~ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                 [3U] 
                                                 >> 5U) 
                                                ^ (
                                                   vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                   [3U] 
                                                   >> 3U))))));
            tracep->chgBit(oldp+2023,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y16) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t2))));
            tracep->chgBit(oldp+2024,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t1) 
                                             ^ (~ (
                                                   (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                    [3U] 
                                                    >> 5U) 
                                                   ^ 
                                                   (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                    [3U] 
                                                    >> 3U)))))));
            tracep->chgBit(oldp+2025,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y20));
            tracep->chgBit(oldp+2026,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y8) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y20))));
            tracep->chgBit(oldp+2027,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y8) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t3))));
            tracep->chgBit(oldp+2028,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                              [3U] 
                                              >> 7U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t2)))));
            tracep->chgBit(oldp+2029,((1U & VL_REDXOR_32(
                                                         (0x1008U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2030,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1));
            tracep->chgBit(oldp+2031,((IData)((0x20040U 
                                               == (0x20040U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2032,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                              >> 0xaU) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1)))));
            tracep->chgBit(oldp+2033,((0x4001U == (0x4001U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1))));
            tracep->chgBit(oldp+2034,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                               >> 0xeU) 
                                              & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1)))));
            tracep->chgBit(oldp+2035,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6));
            tracep->chgBit(oldp+2036,((IData)((0x10080U 
                                               == (0x10080U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2037,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                               >> 3U) 
                                              ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                 >> 0xcU)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6)))));
            tracep->chgBit(oldp+2038,((IData)((0xa000U 
                                               == (0xa000U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2039,((1U & ((0xa000U 
                                              == (0xa000U 
                                                  & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6)))));
            tracep->chgBit(oldp+2040,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t11));
            tracep->chgBit(oldp+2041,((IData)((0x100010U 
                                               == (0x100010U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2042,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t13));
            tracep->chgBit(oldp+2043,((IData)((0x104U 
                                               == (0x104U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2044,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t15));
            tracep->chgBit(oldp+2045,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                               >> 0xaU) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1)) 
                                             ^ (0x20040U 
                                                == 
                                                (0x20040U 
                                                 & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1))))));
            tracep->chgBit(oldp+2046,((1U & ((((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                >> 0xeU) 
                                               & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1)) 
                                             ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                >> 0x12U)))));
            tracep->chgBit(oldp+2047,((1U & ((((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                >> 3U) 
                                               ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                  >> 0xcU)) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6)) 
                                             ^ (0x10080U 
                                                == 
                                                (0x10080U 
                                                 & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1))))));
            tracep->chgBit(oldp+2048,((1U & (((0xa000U 
                                               == (0xa000U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t15)))));
            tracep->chgBit(oldp+2049,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t20));
            tracep->chgBit(oldp+2050,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21));
            tracep->chgBit(oldp+2051,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t22));
            tracep->chgBit(oldp+2052,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23));
            tracep->chgBit(oldp+2053,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t24));
            tracep->chgBit(oldp+2054,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25));
            tracep->chgBit(oldp+2055,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+2056,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t27));
            tracep->chgBit(oldp+2057,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+2058,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23) 
                                        ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25)) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t27))));
            tracep->chgBit(oldp+2059,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21) 
                                        ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25)) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t24))));
            tracep->chgBit(oldp+2060,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t20) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23))));
            tracep->chgBit(oldp+2061,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t27) 
                                       & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t20) 
                                          & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23)))));
            tracep->chgBit(oldp+2062,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t27) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+2063,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t22))));
            tracep->chgBit(oldp+2064,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t24) 
                                       & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21) 
                                          & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t22)))));
            tracep->chgBit(oldp+2065,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t24) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+2066,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t37));
            tracep->chgBit(oldp+2067,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t38));
            tracep->chgBit(oldp+2068,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t39));
            tracep->chgBit(oldp+2069,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t40));
            tracep->chgBit(oldp+2070,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t41));
            tracep->chgBit(oldp+2071,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t42));
            tracep->chgBit(oldp+2072,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t43));
            tracep->chgBit(oldp+2073,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t44));
            tracep->chgBit(oldp+2074,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t45));
            tracep->chgBit(oldp+2075,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t0));
            tracep->chgBit(oldp+2076,((1U & VL_REDXOR_32(
                                                         (0x300U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+2077,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t2));
            tracep->chgBit(oldp+2078,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t3));
            tracep->chgBit(oldp+2079,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t4));
            tracep->chgBit(oldp+2080,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t5));
            tracep->chgBit(oldp+2081,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6));
            tracep->chgBit(oldp+2082,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t7));
            tracep->chgBit(oldp+2083,((1U & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                             ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                                >> 3U)))));
            tracep->chgBit(oldp+2084,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t9));
            tracep->chgBit(oldp+2085,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t10));
            tracep->chgBit(oldp+2086,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t11));
            tracep->chgBit(oldp+2087,((1U & VL_REDXOR_32(
                                                         (0x14000U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+2088,((1U & VL_REDXOR_32(
                                                         (0x20002U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+2089,((1U & VL_REDXOR_32(
                                                         (0x21000U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+2090,((1U & VL_REDXOR_32(
                                                         (0x210U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+2091,((1U & VL_REDXOR_32(
                                                         (0x880U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+2092,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                              >> 8U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t2)))));
            tracep->chgBit(oldp+2093,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                              >> 0xdU) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t5)))));
            tracep->chgBit(oldp+2094,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t2) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t3))));
            tracep->chgBit(oldp+2095,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t4) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6))));
            tracep->chgBit(oldp+2096,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t22));
            tracep->chgBit(oldp+2097,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t23));
            tracep->chgBit(oldp+2098,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t5) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t7))));
            tracep->chgBit(oldp+2099,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t10))));
            tracep->chgBit(oldp+2100,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t9) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t11))));
            tracep->chgBit(oldp+2101,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t10) 
                                             ^ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                                 >> 0xdU) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t5))))));
            tracep->chgBit(oldp+2102,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t11) 
                                       ^ ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6) 
                                          ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t10)))));
            tracep->chgBit(oldp+2103,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                               >> 4U) 
                                              ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                                 >> 9U)) 
                                             ^ ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t4) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__3__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6))))));
            tracep->chgCData(oldp+2104,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT____Vcellout__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__fx),8);
            tracep->chgCData(oldp+2105,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                        [4U]),8);
            tracep->chgIData(oldp+2106,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t1),21);
            tracep->chgIData(oldp+2107,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t2),18);
            tracep->chgBit(oldp+2108,((1U & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                       [4U])));
            tracep->chgBit(oldp+2109,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__top__DOT__y1));
            tracep->chgBit(oldp+2110,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__top__DOT__y2));
            tracep->chgBit(oldp+2111,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__top__DOT__y3));
            tracep->chgBit(oldp+2112,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__top__DOT__y4));
            tracep->chgBit(oldp+2113,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__top__DOT__t0));
            tracep->chgBit(oldp+2114,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__top__DOT__y5));
            tracep->chgBit(oldp+2115,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__top__DOT__t1));
            tracep->chgBit(oldp+2116,((1U & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                             [4U] ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__top__DOT__y5)))));
            tracep->chgBit(oldp+2117,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__top__DOT__y7));
            tracep->chgBit(oldp+2118,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__top__DOT__y8));
            tracep->chgBit(oldp+2119,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__top__DOT__t2));
            tracep->chgBit(oldp+2120,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__top__DOT__t3));
            tracep->chgBit(oldp+2121,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__top__DOT__y3) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__top__DOT__y4))));
            tracep->chgBit(oldp+2122,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__top__DOT__y5) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__top__DOT__t2))));
            tracep->chgBit(oldp+2123,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__top__DOT__t0) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__top__DOT__t2))));
            tracep->chgBit(oldp+2124,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__top__DOT__y12));
            tracep->chgBit(oldp+2125,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__top__DOT__y13));
            tracep->chgBit(oldp+2126,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                              [4U] 
                                              >> 4U) 
                                             ^ vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                             [4U]))));
            tracep->chgBit(oldp+2127,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__top__DOT__y14));
            tracep->chgBit(oldp+2128,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__top__DOT__y15));
            tracep->chgBit(oldp+2129,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                              [4U] 
                                              >> 1U) 
                                             ^ vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                             [4U]))));
            tracep->chgBit(oldp+2130,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__top__DOT__y16));
            tracep->chgBit(oldp+2131,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__top__DOT__y2) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__top__DOT__y16))));
            tracep->chgBit(oldp+2132,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__top__DOT__y2) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__top__DOT__y8))));
            tracep->chgBit(oldp+2133,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__top__DOT__y15) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__top__DOT__y13))));
            tracep->chgBit(oldp+2134,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__top__DOT__y1) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__top__DOT__t3))));
            tracep->chgBit(oldp+2135,((1U & VL_REDXOR_32(
                                                         (0x1008U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2136,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1));
            tracep->chgBit(oldp+2137,((IData)((0x20040U 
                                               == (0x20040U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2138,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t1 
                                              >> 0xaU) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1)))));
            tracep->chgBit(oldp+2139,((0x4001U == (0x4001U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t1))));
            tracep->chgBit(oldp+2140,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t1 
                                               >> 0xeU) 
                                              & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t1) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1)))));
            tracep->chgBit(oldp+2141,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6));
            tracep->chgBit(oldp+2142,((IData)((0x10080U 
                                               == (0x10080U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2143,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t1 
                                               >> 3U) 
                                              ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t1 
                                                 >> 0xcU)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6)))));
            tracep->chgBit(oldp+2144,((IData)((0xa000U 
                                               == (0xa000U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2145,((1U & ((0xa000U 
                                              == (0xa000U 
                                                  & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t1)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6)))));
            tracep->chgBit(oldp+2146,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t11));
            tracep->chgBit(oldp+2147,((IData)((0x100010U 
                                               == (0x100010U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2148,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t13));
            tracep->chgBit(oldp+2149,((IData)((0x104U 
                                               == (0x104U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2150,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t15));
            tracep->chgBit(oldp+2151,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t1 
                                               >> 0xaU) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1)) 
                                             ^ (0x20040U 
                                                == 
                                                (0x20040U 
                                                 & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t1))))));
            tracep->chgBit(oldp+2152,((1U & ((((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t1 
                                                >> 0xeU) 
                                               & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t1) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1)) 
                                             ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t1 
                                                >> 0x12U)))));
            tracep->chgBit(oldp+2153,((1U & ((((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t1 
                                                >> 3U) 
                                               ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t1 
                                                  >> 0xcU)) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6)) 
                                             ^ (0x10080U 
                                                == 
                                                (0x10080U 
                                                 & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t1))))));
            tracep->chgBit(oldp+2154,((1U & (((0xa000U 
                                               == (0xa000U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t1)) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t15)))));
            tracep->chgBit(oldp+2155,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t20));
            tracep->chgBit(oldp+2156,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21));
            tracep->chgBit(oldp+2157,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t22));
            tracep->chgBit(oldp+2158,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23));
            tracep->chgBit(oldp+2159,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t24));
            tracep->chgBit(oldp+2160,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25));
            tracep->chgBit(oldp+2161,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+2162,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t27));
            tracep->chgBit(oldp+2163,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+2164,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23) 
                                        ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25)) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t27))));
            tracep->chgBit(oldp+2165,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21) 
                                        ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25)) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t24))));
            tracep->chgBit(oldp+2166,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t20) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23))));
            tracep->chgBit(oldp+2167,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t27) 
                                       & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t20) 
                                          & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23)))));
            tracep->chgBit(oldp+2168,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t27) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+2169,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t22))));
            tracep->chgBit(oldp+2170,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t24) 
                                       & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21) 
                                          & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t22)))));
            tracep->chgBit(oldp+2171,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t24) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+2172,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t37));
            tracep->chgBit(oldp+2173,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t38));
            tracep->chgBit(oldp+2174,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t39));
            tracep->chgBit(oldp+2175,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t40));
            tracep->chgBit(oldp+2176,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t41));
            tracep->chgBit(oldp+2177,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t42));
            tracep->chgBit(oldp+2178,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t43));
            tracep->chgBit(oldp+2179,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t44));
            tracep->chgBit(oldp+2180,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t45));
            tracep->chgBit(oldp+2181,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__out__DOT__t0));
            tracep->chgBit(oldp+2182,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1));
            tracep->chgBit(oldp+2183,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__out__DOT__t2));
            tracep->chgBit(oldp+2184,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__out__DOT__t3));
            tracep->chgBit(oldp+2185,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__out__DOT__t4));
            tracep->chgBit(oldp+2186,((1U & VL_REDXOR_32(
                                                         (0x20800U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t2)))));
            tracep->chgBit(oldp+2187,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__out__DOT__t6));
            tracep->chgBit(oldp+2188,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__out__DOT__t7));
            tracep->chgBit(oldp+2189,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__out__DOT__t8));
            tracep->chgBit(oldp+2190,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__out__DOT__t9));
            tracep->chgBit(oldp+2191,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__out__DOT__t10));
            tracep->chgBit(oldp+2192,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__out__DOT__t11));
            tracep->chgBit(oldp+2193,((1U & VL_REDXOR_32(
                                                         (0x10002U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t2)))));
            tracep->chgBit(oldp+2194,((1U & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t2 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__out__DOT__t0)))));
            tracep->chgBit(oldp+2195,((1U & VL_REDXOR_32(
                                                         (0x804U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t2)))));
            tracep->chgBit(oldp+2196,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 5U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1)))));
            tracep->chgBit(oldp+2197,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 6U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__out__DOT__t0)))));
            tracep->chgBit(oldp+2198,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 7U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1)))));
            tracep->chgBit(oldp+2199,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 8U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__out__DOT__t8)))));
            tracep->chgBit(oldp+2200,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 0xdU) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__out__DOT__t4)))));
            tracep->chgBit(oldp+2201,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__out__DOT__t0) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1))));
            tracep->chgBit(oldp+2202,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__out__DOT__t7))));
            tracep->chgBit(oldp+2203,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__out__DOT__t3) 
                                             ^ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t2 
                                                 >> 0x10U) 
                                                ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t2 
                                                   >> 1U))))));
            tracep->chgBit(oldp+2204,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t2 
                                               >> 8U) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__out__DOT__t8)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__out__DOT__t2)))));
            tracep->chgBit(oldp+2205,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t2 
                                               >> 5U) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__out__DOT__t9)))));
            tracep->chgBit(oldp+2206,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__out__DOT__t6) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__out__DOT__t10))));
            tracep->chgBit(oldp+2207,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__out__DOT__t7) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__out__DOT__t9))));
            tracep->chgBit(oldp+2208,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__out__DOT__t8) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__out__DOT__t10))));
            tracep->chgBit(oldp+2209,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__out__DOT__t11) 
                                             ^ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t2 
                                                 >> 2U) 
                                                ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t2 
                                                   >> 0xbU))))));
            tracep->chgBit(oldp+2210,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__out__DOT__t11) 
                                             ^ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__t2 
                                                 >> 7U) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1))))));
            tracep->chgCData(oldp+2211,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT____Vcellout__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__fx),8);
            tracep->chgCData(oldp+2212,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                        [4U]),8);
            tracep->chgIData(oldp+2213,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1),21);
            tracep->chgIData(oldp+2214,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2),18);
            tracep->chgBit(oldp+2215,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y17));
            tracep->chgBit(oldp+2216,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y16));
            tracep->chgBit(oldp+2217,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y2));
            tracep->chgBit(oldp+2218,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y1));
            tracep->chgBit(oldp+2219,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y18));
            tracep->chgBit(oldp+2220,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t0));
            tracep->chgBit(oldp+2221,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y6));
            tracep->chgBit(oldp+2222,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y14));
            tracep->chgBit(oldp+2223,((1U & (~ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                [4U] 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y1))))));
            tracep->chgBit(oldp+2224,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y8));
            tracep->chgBit(oldp+2225,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y2) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t0))));
            tracep->chgBit(oldp+2226,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y1) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t0))));
            tracep->chgBit(oldp+2227,((1U & (~ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                 [4U] 
                                                 >> 5U) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y1))))));
            tracep->chgBit(oldp+2228,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t1));
            tracep->chgBit(oldp+2229,((1U & (~ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                 [4U] 
                                                 >> 5U) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y14))))));
            tracep->chgBit(oldp+2230,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y18) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t1))));
            tracep->chgBit(oldp+2231,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                              [4U] 
                                              >> 3U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y6)))));
            tracep->chgBit(oldp+2232,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t2));
            tracep->chgBit(oldp+2233,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t3));
            tracep->chgBit(oldp+2234,((1U & (~ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                 [4U] 
                                                 >> 5U) 
                                                ^ (
                                                   vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                   [4U] 
                                                   >> 3U))))));
            tracep->chgBit(oldp+2235,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y16) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t2))));
            tracep->chgBit(oldp+2236,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t1) 
                                             ^ (~ (
                                                   (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                    [4U] 
                                                    >> 5U) 
                                                   ^ 
                                                   (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                    [4U] 
                                                    >> 3U)))))));
            tracep->chgBit(oldp+2237,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y20));
            tracep->chgBit(oldp+2238,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y8) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y20))));
            tracep->chgBit(oldp+2239,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y8) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t3))));
            tracep->chgBit(oldp+2240,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                              [4U] 
                                              >> 7U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t2)))));
            tracep->chgBit(oldp+2241,((1U & VL_REDXOR_32(
                                                         (0x1008U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2242,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1));
            tracep->chgBit(oldp+2243,((IData)((0x20040U 
                                               == (0x20040U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2244,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                              >> 0xaU) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1)))));
            tracep->chgBit(oldp+2245,((0x4001U == (0x4001U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1))));
            tracep->chgBit(oldp+2246,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                               >> 0xeU) 
                                              & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1)))));
            tracep->chgBit(oldp+2247,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6));
            tracep->chgBit(oldp+2248,((IData)((0x10080U 
                                               == (0x10080U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2249,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                               >> 3U) 
                                              ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                 >> 0xcU)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6)))));
            tracep->chgBit(oldp+2250,((IData)((0xa000U 
                                               == (0xa000U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2251,((1U & ((0xa000U 
                                              == (0xa000U 
                                                  & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6)))));
            tracep->chgBit(oldp+2252,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t11));
            tracep->chgBit(oldp+2253,((IData)((0x100010U 
                                               == (0x100010U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2254,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t13));
            tracep->chgBit(oldp+2255,((IData)((0x104U 
                                               == (0x104U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2256,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t15));
            tracep->chgBit(oldp+2257,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                               >> 0xaU) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1)) 
                                             ^ (0x20040U 
                                                == 
                                                (0x20040U 
                                                 & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1))))));
            tracep->chgBit(oldp+2258,((1U & ((((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                >> 0xeU) 
                                               & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1)) 
                                             ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                >> 0x12U)))));
            tracep->chgBit(oldp+2259,((1U & ((((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                >> 3U) 
                                               ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                  >> 0xcU)) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6)) 
                                             ^ (0x10080U 
                                                == 
                                                (0x10080U 
                                                 & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1))))));
            tracep->chgBit(oldp+2260,((1U & (((0xa000U 
                                               == (0xa000U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t15)))));
            tracep->chgBit(oldp+2261,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t20));
            tracep->chgBit(oldp+2262,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21));
            tracep->chgBit(oldp+2263,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t22));
            tracep->chgBit(oldp+2264,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23));
            tracep->chgBit(oldp+2265,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t24));
            tracep->chgBit(oldp+2266,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25));
            tracep->chgBit(oldp+2267,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+2268,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t27));
            tracep->chgBit(oldp+2269,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+2270,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23) 
                                        ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25)) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t27))));
            tracep->chgBit(oldp+2271,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21) 
                                        ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25)) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t24))));
            tracep->chgBit(oldp+2272,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t20) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23))));
            tracep->chgBit(oldp+2273,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t27) 
                                       & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t20) 
                                          & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23)))));
            tracep->chgBit(oldp+2274,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t27) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+2275,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t22))));
            tracep->chgBit(oldp+2276,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t24) 
                                       & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21) 
                                          & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t22)))));
            tracep->chgBit(oldp+2277,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t24) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+2278,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t37));
            tracep->chgBit(oldp+2279,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t38));
            tracep->chgBit(oldp+2280,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t39));
            tracep->chgBit(oldp+2281,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t40));
            tracep->chgBit(oldp+2282,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t41));
            tracep->chgBit(oldp+2283,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t42));
            tracep->chgBit(oldp+2284,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t43));
            tracep->chgBit(oldp+2285,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t44));
            tracep->chgBit(oldp+2286,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t45));
            tracep->chgBit(oldp+2287,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t0));
            tracep->chgBit(oldp+2288,((1U & VL_REDXOR_32(
                                                         (0x300U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+2289,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t2));
            tracep->chgBit(oldp+2290,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t3));
            tracep->chgBit(oldp+2291,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t4));
            tracep->chgBit(oldp+2292,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t5));
            tracep->chgBit(oldp+2293,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6));
            tracep->chgBit(oldp+2294,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t7));
            tracep->chgBit(oldp+2295,((1U & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                             ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                                >> 3U)))));
            tracep->chgBit(oldp+2296,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t9));
            tracep->chgBit(oldp+2297,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t10));
            tracep->chgBit(oldp+2298,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t11));
            tracep->chgBit(oldp+2299,((1U & VL_REDXOR_32(
                                                         (0x14000U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+2300,((1U & VL_REDXOR_32(
                                                         (0x20002U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+2301,((1U & VL_REDXOR_32(
                                                         (0x21000U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+2302,((1U & VL_REDXOR_32(
                                                         (0x210U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+2303,((1U & VL_REDXOR_32(
                                                         (0x880U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+2304,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                              >> 8U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t2)))));
            tracep->chgBit(oldp+2305,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                              >> 0xdU) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t5)))));
            tracep->chgBit(oldp+2306,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t2) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t3))));
            tracep->chgBit(oldp+2307,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t4) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6))));
            tracep->chgBit(oldp+2308,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t22));
            tracep->chgBit(oldp+2309,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t23));
            tracep->chgBit(oldp+2310,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t5) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t7))));
            tracep->chgBit(oldp+2311,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t10))));
            tracep->chgBit(oldp+2312,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t9) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t11))));
            tracep->chgBit(oldp+2313,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t10) 
                                             ^ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                                 >> 0xdU) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t5))))));
            tracep->chgBit(oldp+2314,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t11) 
                                       ^ ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6) 
                                          ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t10)))));
            tracep->chgBit(oldp+2315,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                               >> 4U) 
                                              ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                                 >> 9U)) 
                                             ^ ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t4) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__4__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6))))));
            tracep->chgCData(oldp+2316,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT____Vcellout__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__fx),8);
            tracep->chgCData(oldp+2317,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                        [5U]),8);
            tracep->chgIData(oldp+2318,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t1),21);
            tracep->chgIData(oldp+2319,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t2),18);
            tracep->chgBit(oldp+2320,((1U & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                       [5U])));
            tracep->chgBit(oldp+2321,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__top__DOT__y1));
            tracep->chgBit(oldp+2322,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__top__DOT__y2));
            tracep->chgBit(oldp+2323,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__top__DOT__y3));
            tracep->chgBit(oldp+2324,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__top__DOT__y4));
            tracep->chgBit(oldp+2325,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__top__DOT__t0));
            tracep->chgBit(oldp+2326,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__top__DOT__y5));
            tracep->chgBit(oldp+2327,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__top__DOT__t1));
            tracep->chgBit(oldp+2328,((1U & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                             [5U] ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__top__DOT__y5)))));
            tracep->chgBit(oldp+2329,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__top__DOT__y7));
            tracep->chgBit(oldp+2330,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__top__DOT__y8));
            tracep->chgBit(oldp+2331,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__top__DOT__t2));
            tracep->chgBit(oldp+2332,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__top__DOT__t3));
            tracep->chgBit(oldp+2333,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__top__DOT__y3) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__top__DOT__y4))));
            tracep->chgBit(oldp+2334,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__top__DOT__y5) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__top__DOT__t2))));
            tracep->chgBit(oldp+2335,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__top__DOT__t0) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__top__DOT__t2))));
            tracep->chgBit(oldp+2336,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__top__DOT__y12));
            tracep->chgBit(oldp+2337,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__top__DOT__y13));
            tracep->chgBit(oldp+2338,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                              [5U] 
                                              >> 4U) 
                                             ^ vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                             [5U]))));
            tracep->chgBit(oldp+2339,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__top__DOT__y14));
            tracep->chgBit(oldp+2340,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__top__DOT__y15));
            tracep->chgBit(oldp+2341,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                              [5U] 
                                              >> 1U) 
                                             ^ vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                             [5U]))));
            tracep->chgBit(oldp+2342,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__top__DOT__y16));
            tracep->chgBit(oldp+2343,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__top__DOT__y2) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__top__DOT__y16))));
            tracep->chgBit(oldp+2344,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__top__DOT__y2) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__top__DOT__y8))));
            tracep->chgBit(oldp+2345,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__top__DOT__y15) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__top__DOT__y13))));
            tracep->chgBit(oldp+2346,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__top__DOT__y1) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__top__DOT__t3))));
            tracep->chgBit(oldp+2347,((1U & VL_REDXOR_32(
                                                         (0x1008U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2348,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1));
            tracep->chgBit(oldp+2349,((IData)((0x20040U 
                                               == (0x20040U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2350,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t1 
                                              >> 0xaU) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1)))));
            tracep->chgBit(oldp+2351,((0x4001U == (0x4001U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t1))));
            tracep->chgBit(oldp+2352,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t1 
                                               >> 0xeU) 
                                              & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t1) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1)))));
            tracep->chgBit(oldp+2353,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6));
            tracep->chgBit(oldp+2354,((IData)((0x10080U 
                                               == (0x10080U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2355,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t1 
                                               >> 3U) 
                                              ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t1 
                                                 >> 0xcU)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6)))));
            tracep->chgBit(oldp+2356,((IData)((0xa000U 
                                               == (0xa000U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2357,((1U & ((0xa000U 
                                              == (0xa000U 
                                                  & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t1)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6)))));
            tracep->chgBit(oldp+2358,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t11));
            tracep->chgBit(oldp+2359,((IData)((0x100010U 
                                               == (0x100010U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2360,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t13));
            tracep->chgBit(oldp+2361,((IData)((0x104U 
                                               == (0x104U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2362,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t15));
            tracep->chgBit(oldp+2363,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t1 
                                               >> 0xaU) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1)) 
                                             ^ (0x20040U 
                                                == 
                                                (0x20040U 
                                                 & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t1))))));
            tracep->chgBit(oldp+2364,((1U & ((((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t1 
                                                >> 0xeU) 
                                               & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t1) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1)) 
                                             ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t1 
                                                >> 0x12U)))));
            tracep->chgBit(oldp+2365,((1U & ((((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t1 
                                                >> 3U) 
                                               ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t1 
                                                  >> 0xcU)) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6)) 
                                             ^ (0x10080U 
                                                == 
                                                (0x10080U 
                                                 & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t1))))));
            tracep->chgBit(oldp+2366,((1U & (((0xa000U 
                                               == (0xa000U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t1)) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t15)))));
            tracep->chgBit(oldp+2367,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t20));
            tracep->chgBit(oldp+2368,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21));
            tracep->chgBit(oldp+2369,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t22));
            tracep->chgBit(oldp+2370,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23));
            tracep->chgBit(oldp+2371,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t24));
            tracep->chgBit(oldp+2372,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25));
            tracep->chgBit(oldp+2373,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+2374,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t27));
            tracep->chgBit(oldp+2375,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+2376,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23) 
                                        ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25)) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t27))));
            tracep->chgBit(oldp+2377,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21) 
                                        ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25)) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t24))));
            tracep->chgBit(oldp+2378,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t20) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23))));
            tracep->chgBit(oldp+2379,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t27) 
                                       & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t20) 
                                          & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23)))));
            tracep->chgBit(oldp+2380,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t27) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+2381,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t22))));
            tracep->chgBit(oldp+2382,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t24) 
                                       & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21) 
                                          & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t22)))));
            tracep->chgBit(oldp+2383,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t24) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+2384,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t37));
            tracep->chgBit(oldp+2385,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t38));
            tracep->chgBit(oldp+2386,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t39));
            tracep->chgBit(oldp+2387,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t40));
            tracep->chgBit(oldp+2388,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t41));
            tracep->chgBit(oldp+2389,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t42));
            tracep->chgBit(oldp+2390,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t43));
            tracep->chgBit(oldp+2391,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t44));
            tracep->chgBit(oldp+2392,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t45));
            tracep->chgBit(oldp+2393,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__out__DOT__t0));
            tracep->chgBit(oldp+2394,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1));
            tracep->chgBit(oldp+2395,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__out__DOT__t2));
            tracep->chgBit(oldp+2396,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__out__DOT__t3));
            tracep->chgBit(oldp+2397,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__out__DOT__t4));
            tracep->chgBit(oldp+2398,((1U & VL_REDXOR_32(
                                                         (0x20800U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t2)))));
            tracep->chgBit(oldp+2399,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__out__DOT__t6));
            tracep->chgBit(oldp+2400,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__out__DOT__t7));
            tracep->chgBit(oldp+2401,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__out__DOT__t8));
            tracep->chgBit(oldp+2402,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__out__DOT__t9));
            tracep->chgBit(oldp+2403,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__out__DOT__t10));
            tracep->chgBit(oldp+2404,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__out__DOT__t11));
            tracep->chgBit(oldp+2405,((1U & VL_REDXOR_32(
                                                         (0x10002U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t2)))));
            tracep->chgBit(oldp+2406,((1U & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t2 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__out__DOT__t0)))));
            tracep->chgBit(oldp+2407,((1U & VL_REDXOR_32(
                                                         (0x804U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t2)))));
            tracep->chgBit(oldp+2408,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 5U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1)))));
            tracep->chgBit(oldp+2409,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 6U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__out__DOT__t0)))));
            tracep->chgBit(oldp+2410,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 7U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1)))));
            tracep->chgBit(oldp+2411,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 8U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__out__DOT__t8)))));
            tracep->chgBit(oldp+2412,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 0xdU) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__out__DOT__t4)))));
            tracep->chgBit(oldp+2413,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__out__DOT__t0) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1))));
            tracep->chgBit(oldp+2414,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__out__DOT__t7))));
            tracep->chgBit(oldp+2415,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__out__DOT__t3) 
                                             ^ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t2 
                                                 >> 0x10U) 
                                                ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t2 
                                                   >> 1U))))));
            tracep->chgBit(oldp+2416,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t2 
                                               >> 8U) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__out__DOT__t8)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__out__DOT__t2)))));
            tracep->chgBit(oldp+2417,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t2 
                                               >> 5U) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__out__DOT__t9)))));
            tracep->chgBit(oldp+2418,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__out__DOT__t6) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__out__DOT__t10))));
            tracep->chgBit(oldp+2419,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__out__DOT__t7) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__out__DOT__t9))));
            tracep->chgBit(oldp+2420,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__out__DOT__t8) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__out__DOT__t10))));
            tracep->chgBit(oldp+2421,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__out__DOT__t11) 
                                             ^ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t2 
                                                 >> 2U) 
                                                ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t2 
                                                   >> 0xbU))))));
            tracep->chgBit(oldp+2422,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__out__DOT__t11) 
                                             ^ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__t2 
                                                 >> 7U) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1))))));
            tracep->chgCData(oldp+2423,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT____Vcellout__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__fx),8);
            tracep->chgCData(oldp+2424,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                        [5U]),8);
            tracep->chgIData(oldp+2425,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1),21);
            tracep->chgIData(oldp+2426,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2),18);
            tracep->chgBit(oldp+2427,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y17));
            tracep->chgBit(oldp+2428,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y16));
            tracep->chgBit(oldp+2429,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y2));
            tracep->chgBit(oldp+2430,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y1));
            tracep->chgBit(oldp+2431,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y18));
            tracep->chgBit(oldp+2432,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t0));
            tracep->chgBit(oldp+2433,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y6));
            tracep->chgBit(oldp+2434,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y14));
            tracep->chgBit(oldp+2435,((1U & (~ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                [5U] 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y1))))));
            tracep->chgBit(oldp+2436,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y8));
            tracep->chgBit(oldp+2437,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y2) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t0))));
            tracep->chgBit(oldp+2438,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y1) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t0))));
            tracep->chgBit(oldp+2439,((1U & (~ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                 [5U] 
                                                 >> 5U) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y1))))));
            tracep->chgBit(oldp+2440,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t1));
            tracep->chgBit(oldp+2441,((1U & (~ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                 [5U] 
                                                 >> 5U) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y14))))));
            tracep->chgBit(oldp+2442,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y18) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t1))));
            tracep->chgBit(oldp+2443,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                              [5U] 
                                              >> 3U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y6)))));
            tracep->chgBit(oldp+2444,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t2));
            tracep->chgBit(oldp+2445,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t3));
            tracep->chgBit(oldp+2446,((1U & (~ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                 [5U] 
                                                 >> 5U) 
                                                ^ (
                                                   vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                   [5U] 
                                                   >> 3U))))));
            tracep->chgBit(oldp+2447,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y16) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t2))));
            tracep->chgBit(oldp+2448,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t1) 
                                             ^ (~ (
                                                   (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                    [5U] 
                                                    >> 5U) 
                                                   ^ 
                                                   (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                    [5U] 
                                                    >> 3U)))))));
            tracep->chgBit(oldp+2449,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y20));
            tracep->chgBit(oldp+2450,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y8) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y20))));
            tracep->chgBit(oldp+2451,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y8) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t3))));
            tracep->chgBit(oldp+2452,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                              [5U] 
                                              >> 7U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t2)))));
            tracep->chgBit(oldp+2453,((1U & VL_REDXOR_32(
                                                         (0x1008U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2454,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1));
            tracep->chgBit(oldp+2455,((IData)((0x20040U 
                                               == (0x20040U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2456,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                              >> 0xaU) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1)))));
            tracep->chgBit(oldp+2457,((0x4001U == (0x4001U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1))));
            tracep->chgBit(oldp+2458,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                               >> 0xeU) 
                                              & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1)))));
            tracep->chgBit(oldp+2459,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6));
            tracep->chgBit(oldp+2460,((IData)((0x10080U 
                                               == (0x10080U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2461,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                               >> 3U) 
                                              ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                 >> 0xcU)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6)))));
            tracep->chgBit(oldp+2462,((IData)((0xa000U 
                                               == (0xa000U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2463,((1U & ((0xa000U 
                                              == (0xa000U 
                                                  & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6)))));
            tracep->chgBit(oldp+2464,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t11));
            tracep->chgBit(oldp+2465,((IData)((0x100010U 
                                               == (0x100010U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2466,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t13));
            tracep->chgBit(oldp+2467,((IData)((0x104U 
                                               == (0x104U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2468,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t15));
            tracep->chgBit(oldp+2469,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                               >> 0xaU) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1)) 
                                             ^ (0x20040U 
                                                == 
                                                (0x20040U 
                                                 & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1))))));
            tracep->chgBit(oldp+2470,((1U & ((((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                >> 0xeU) 
                                               & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1)) 
                                             ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                >> 0x12U)))));
            tracep->chgBit(oldp+2471,((1U & ((((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                >> 3U) 
                                               ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                  >> 0xcU)) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6)) 
                                             ^ (0x10080U 
                                                == 
                                                (0x10080U 
                                                 & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1))))));
            tracep->chgBit(oldp+2472,((1U & (((0xa000U 
                                               == (0xa000U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t15)))));
            tracep->chgBit(oldp+2473,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t20));
            tracep->chgBit(oldp+2474,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21));
            tracep->chgBit(oldp+2475,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t22));
            tracep->chgBit(oldp+2476,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23));
            tracep->chgBit(oldp+2477,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t24));
            tracep->chgBit(oldp+2478,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25));
            tracep->chgBit(oldp+2479,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+2480,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t27));
            tracep->chgBit(oldp+2481,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+2482,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23) 
                                        ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25)) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t27))));
            tracep->chgBit(oldp+2483,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21) 
                                        ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25)) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t24))));
            tracep->chgBit(oldp+2484,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t20) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23))));
            tracep->chgBit(oldp+2485,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t27) 
                                       & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t20) 
                                          & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23)))));
            tracep->chgBit(oldp+2486,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t27) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+2487,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t22))));
            tracep->chgBit(oldp+2488,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t24) 
                                       & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21) 
                                          & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t22)))));
            tracep->chgBit(oldp+2489,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t24) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+2490,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t37));
            tracep->chgBit(oldp+2491,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t38));
            tracep->chgBit(oldp+2492,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t39));
            tracep->chgBit(oldp+2493,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t40));
            tracep->chgBit(oldp+2494,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t41));
            tracep->chgBit(oldp+2495,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t42));
            tracep->chgBit(oldp+2496,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t43));
            tracep->chgBit(oldp+2497,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t44));
            tracep->chgBit(oldp+2498,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t45));
            tracep->chgBit(oldp+2499,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t0));
            tracep->chgBit(oldp+2500,((1U & VL_REDXOR_32(
                                                         (0x300U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+2501,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t2));
            tracep->chgBit(oldp+2502,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t3));
            tracep->chgBit(oldp+2503,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t4));
            tracep->chgBit(oldp+2504,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t5));
            tracep->chgBit(oldp+2505,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6));
            tracep->chgBit(oldp+2506,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t7));
            tracep->chgBit(oldp+2507,((1U & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                             ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                                >> 3U)))));
            tracep->chgBit(oldp+2508,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t9));
            tracep->chgBit(oldp+2509,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t10));
            tracep->chgBit(oldp+2510,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t11));
            tracep->chgBit(oldp+2511,((1U & VL_REDXOR_32(
                                                         (0x14000U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+2512,((1U & VL_REDXOR_32(
                                                         (0x20002U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+2513,((1U & VL_REDXOR_32(
                                                         (0x21000U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+2514,((1U & VL_REDXOR_32(
                                                         (0x210U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+2515,((1U & VL_REDXOR_32(
                                                         (0x880U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+2516,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                              >> 8U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t2)))));
            tracep->chgBit(oldp+2517,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                              >> 0xdU) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t5)))));
            tracep->chgBit(oldp+2518,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t2) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t3))));
            tracep->chgBit(oldp+2519,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t4) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6))));
            tracep->chgBit(oldp+2520,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t22));
            tracep->chgBit(oldp+2521,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t23));
            tracep->chgBit(oldp+2522,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t5) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t7))));
            tracep->chgBit(oldp+2523,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t10))));
            tracep->chgBit(oldp+2524,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t9) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t11))));
            tracep->chgBit(oldp+2525,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t10) 
                                             ^ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                                 >> 0xdU) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t5))))));
            tracep->chgBit(oldp+2526,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t11) 
                                       ^ ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6) 
                                          ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t10)))));
            tracep->chgBit(oldp+2527,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                               >> 4U) 
                                              ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                                 >> 9U)) 
                                             ^ ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t4) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__5__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6))))));
            tracep->chgCData(oldp+2528,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT____Vcellout__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__fx),8);
            tracep->chgCData(oldp+2529,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                        [6U]),8);
            tracep->chgIData(oldp+2530,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t1),21);
            tracep->chgIData(oldp+2531,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t2),18);
            tracep->chgBit(oldp+2532,((1U & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                       [6U])));
            tracep->chgBit(oldp+2533,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__top__DOT__y1));
            tracep->chgBit(oldp+2534,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__top__DOT__y2));
            tracep->chgBit(oldp+2535,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__top__DOT__y3));
            tracep->chgBit(oldp+2536,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__top__DOT__y4));
            tracep->chgBit(oldp+2537,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__top__DOT__t0));
            tracep->chgBit(oldp+2538,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__top__DOT__y5));
            tracep->chgBit(oldp+2539,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__top__DOT__t1));
            tracep->chgBit(oldp+2540,((1U & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                             [6U] ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__top__DOT__y5)))));
            tracep->chgBit(oldp+2541,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__top__DOT__y7));
            tracep->chgBit(oldp+2542,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__top__DOT__y8));
            tracep->chgBit(oldp+2543,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__top__DOT__t2));
            tracep->chgBit(oldp+2544,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__top__DOT__t3));
            tracep->chgBit(oldp+2545,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__top__DOT__y3) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__top__DOT__y4))));
            tracep->chgBit(oldp+2546,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__top__DOT__y5) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__top__DOT__t2))));
            tracep->chgBit(oldp+2547,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__top__DOT__t0) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__top__DOT__t2))));
            tracep->chgBit(oldp+2548,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__top__DOT__y12));
            tracep->chgBit(oldp+2549,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__top__DOT__y13));
            tracep->chgBit(oldp+2550,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                              [6U] 
                                              >> 4U) 
                                             ^ vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                             [6U]))));
            tracep->chgBit(oldp+2551,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__top__DOT__y14));
            tracep->chgBit(oldp+2552,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__top__DOT__y15));
            tracep->chgBit(oldp+2553,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                              [6U] 
                                              >> 1U) 
                                             ^ vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                             [6U]))));
            tracep->chgBit(oldp+2554,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__top__DOT__y16));
            tracep->chgBit(oldp+2555,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__top__DOT__y2) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__top__DOT__y16))));
            tracep->chgBit(oldp+2556,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__top__DOT__y2) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__top__DOT__y8))));
            tracep->chgBit(oldp+2557,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__top__DOT__y15) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__top__DOT__y13))));
            tracep->chgBit(oldp+2558,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__top__DOT__y1) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__top__DOT__t3))));
            tracep->chgBit(oldp+2559,((1U & VL_REDXOR_32(
                                                         (0x1008U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2560,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1));
            tracep->chgBit(oldp+2561,((IData)((0x20040U 
                                               == (0x20040U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2562,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t1 
                                              >> 0xaU) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1)))));
            tracep->chgBit(oldp+2563,((0x4001U == (0x4001U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t1))));
            tracep->chgBit(oldp+2564,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t1 
                                               >> 0xeU) 
                                              & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t1) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1)))));
            tracep->chgBit(oldp+2565,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6));
            tracep->chgBit(oldp+2566,((IData)((0x10080U 
                                               == (0x10080U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2567,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t1 
                                               >> 3U) 
                                              ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t1 
                                                 >> 0xcU)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6)))));
            tracep->chgBit(oldp+2568,((IData)((0xa000U 
                                               == (0xa000U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2569,((1U & ((0xa000U 
                                              == (0xa000U 
                                                  & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t1)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6)))));
            tracep->chgBit(oldp+2570,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t11));
            tracep->chgBit(oldp+2571,((IData)((0x100010U 
                                               == (0x100010U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2572,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t13));
            tracep->chgBit(oldp+2573,((IData)((0x104U 
                                               == (0x104U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2574,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t15));
            tracep->chgBit(oldp+2575,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t1 
                                               >> 0xaU) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1)) 
                                             ^ (0x20040U 
                                                == 
                                                (0x20040U 
                                                 & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t1))))));
            tracep->chgBit(oldp+2576,((1U & ((((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t1 
                                                >> 0xeU) 
                                               & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t1) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1)) 
                                             ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t1 
                                                >> 0x12U)))));
            tracep->chgBit(oldp+2577,((1U & ((((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t1 
                                                >> 3U) 
                                               ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t1 
                                                  >> 0xcU)) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6)) 
                                             ^ (0x10080U 
                                                == 
                                                (0x10080U 
                                                 & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t1))))));
            tracep->chgBit(oldp+2578,((1U & (((0xa000U 
                                               == (0xa000U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t1)) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t15)))));
            tracep->chgBit(oldp+2579,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t20));
            tracep->chgBit(oldp+2580,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21));
            tracep->chgBit(oldp+2581,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t22));
            tracep->chgBit(oldp+2582,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23));
            tracep->chgBit(oldp+2583,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t24));
            tracep->chgBit(oldp+2584,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25));
            tracep->chgBit(oldp+2585,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+2586,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t27));
            tracep->chgBit(oldp+2587,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+2588,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23) 
                                        ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25)) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t27))));
            tracep->chgBit(oldp+2589,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21) 
                                        ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25)) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t24))));
            tracep->chgBit(oldp+2590,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t20) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23))));
            tracep->chgBit(oldp+2591,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t27) 
                                       & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t20) 
                                          & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23)))));
            tracep->chgBit(oldp+2592,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t27) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+2593,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t22))));
            tracep->chgBit(oldp+2594,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t24) 
                                       & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21) 
                                          & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t22)))));
            tracep->chgBit(oldp+2595,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t24) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+2596,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t37));
            tracep->chgBit(oldp+2597,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t38));
            tracep->chgBit(oldp+2598,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t39));
            tracep->chgBit(oldp+2599,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t40));
            tracep->chgBit(oldp+2600,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t41));
            tracep->chgBit(oldp+2601,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t42));
            tracep->chgBit(oldp+2602,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t43));
            tracep->chgBit(oldp+2603,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t44));
            tracep->chgBit(oldp+2604,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t45));
            tracep->chgBit(oldp+2605,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__out__DOT__t0));
            tracep->chgBit(oldp+2606,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1));
            tracep->chgBit(oldp+2607,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__out__DOT__t2));
            tracep->chgBit(oldp+2608,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__out__DOT__t3));
            tracep->chgBit(oldp+2609,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__out__DOT__t4));
            tracep->chgBit(oldp+2610,((1U & VL_REDXOR_32(
                                                         (0x20800U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t2)))));
            tracep->chgBit(oldp+2611,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__out__DOT__t6));
            tracep->chgBit(oldp+2612,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__out__DOT__t7));
            tracep->chgBit(oldp+2613,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__out__DOT__t8));
            tracep->chgBit(oldp+2614,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__out__DOT__t9));
            tracep->chgBit(oldp+2615,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__out__DOT__t10));
            tracep->chgBit(oldp+2616,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__out__DOT__t11));
            tracep->chgBit(oldp+2617,((1U & VL_REDXOR_32(
                                                         (0x10002U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t2)))));
            tracep->chgBit(oldp+2618,((1U & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t2 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__out__DOT__t0)))));
            tracep->chgBit(oldp+2619,((1U & VL_REDXOR_32(
                                                         (0x804U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t2)))));
            tracep->chgBit(oldp+2620,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 5U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1)))));
            tracep->chgBit(oldp+2621,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 6U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__out__DOT__t0)))));
            tracep->chgBit(oldp+2622,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 7U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1)))));
            tracep->chgBit(oldp+2623,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 8U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__out__DOT__t8)))));
            tracep->chgBit(oldp+2624,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 0xdU) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__out__DOT__t4)))));
            tracep->chgBit(oldp+2625,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__out__DOT__t0) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1))));
            tracep->chgBit(oldp+2626,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__out__DOT__t7))));
            tracep->chgBit(oldp+2627,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__out__DOT__t3) 
                                             ^ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t2 
                                                 >> 0x10U) 
                                                ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t2 
                                                   >> 1U))))));
            tracep->chgBit(oldp+2628,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t2 
                                               >> 8U) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__out__DOT__t8)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__out__DOT__t2)))));
            tracep->chgBit(oldp+2629,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t2 
                                               >> 5U) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__out__DOT__t9)))));
            tracep->chgBit(oldp+2630,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__out__DOT__t6) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__out__DOT__t10))));
            tracep->chgBit(oldp+2631,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__out__DOT__t7) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__out__DOT__t9))));
            tracep->chgBit(oldp+2632,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__out__DOT__t8) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__out__DOT__t10))));
            tracep->chgBit(oldp+2633,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__out__DOT__t11) 
                                             ^ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t2 
                                                 >> 2U) 
                                                ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t2 
                                                   >> 0xbU))))));
            tracep->chgBit(oldp+2634,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__out__DOT__t11) 
                                             ^ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__t2 
                                                 >> 7U) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1))))));
            tracep->chgCData(oldp+2635,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT____Vcellout__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__fx),8);
            tracep->chgCData(oldp+2636,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                        [6U]),8);
            tracep->chgIData(oldp+2637,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1),21);
            tracep->chgIData(oldp+2638,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2),18);
            tracep->chgBit(oldp+2639,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y17));
            tracep->chgBit(oldp+2640,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y16));
            tracep->chgBit(oldp+2641,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y2));
            tracep->chgBit(oldp+2642,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y1));
            tracep->chgBit(oldp+2643,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y18));
            tracep->chgBit(oldp+2644,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t0));
            tracep->chgBit(oldp+2645,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y6));
            tracep->chgBit(oldp+2646,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y14));
            tracep->chgBit(oldp+2647,((1U & (~ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                [6U] 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y1))))));
            tracep->chgBit(oldp+2648,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y8));
            tracep->chgBit(oldp+2649,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y2) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t0))));
            tracep->chgBit(oldp+2650,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y1) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t0))));
            tracep->chgBit(oldp+2651,((1U & (~ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                 [6U] 
                                                 >> 5U) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y1))))));
            tracep->chgBit(oldp+2652,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t1));
            tracep->chgBit(oldp+2653,((1U & (~ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                 [6U] 
                                                 >> 5U) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y14))))));
            tracep->chgBit(oldp+2654,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y18) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t1))));
            tracep->chgBit(oldp+2655,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                              [6U] 
                                              >> 3U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y6)))));
            tracep->chgBit(oldp+2656,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t2));
            tracep->chgBit(oldp+2657,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t3));
            tracep->chgBit(oldp+2658,((1U & (~ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                 [6U] 
                                                 >> 5U) 
                                                ^ (
                                                   vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                   [6U] 
                                                   >> 3U))))));
            tracep->chgBit(oldp+2659,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y16) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t2))));
            tracep->chgBit(oldp+2660,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t1) 
                                             ^ (~ (
                                                   (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                    [6U] 
                                                    >> 5U) 
                                                   ^ 
                                                   (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                    [6U] 
                                                    >> 3U)))))));
            tracep->chgBit(oldp+2661,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y20));
            tracep->chgBit(oldp+2662,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y8) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y20))));
            tracep->chgBit(oldp+2663,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y8) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t3))));
            tracep->chgBit(oldp+2664,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                              [6U] 
                                              >> 7U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t2)))));
            tracep->chgBit(oldp+2665,((1U & VL_REDXOR_32(
                                                         (0x1008U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2666,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1));
            tracep->chgBit(oldp+2667,((IData)((0x20040U 
                                               == (0x20040U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2668,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                              >> 0xaU) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1)))));
            tracep->chgBit(oldp+2669,((0x4001U == (0x4001U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1))));
            tracep->chgBit(oldp+2670,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                               >> 0xeU) 
                                              & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1)))));
            tracep->chgBit(oldp+2671,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6));
            tracep->chgBit(oldp+2672,((IData)((0x10080U 
                                               == (0x10080U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2673,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                               >> 3U) 
                                              ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                 >> 0xcU)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6)))));
            tracep->chgBit(oldp+2674,((IData)((0xa000U 
                                               == (0xa000U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2675,((1U & ((0xa000U 
                                              == (0xa000U 
                                                  & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6)))));
            tracep->chgBit(oldp+2676,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t11));
            tracep->chgBit(oldp+2677,((IData)((0x100010U 
                                               == (0x100010U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2678,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t13));
            tracep->chgBit(oldp+2679,((IData)((0x104U 
                                               == (0x104U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2680,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t15));
            tracep->chgBit(oldp+2681,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                               >> 0xaU) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1)) 
                                             ^ (0x20040U 
                                                == 
                                                (0x20040U 
                                                 & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1))))));
            tracep->chgBit(oldp+2682,((1U & ((((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                >> 0xeU) 
                                               & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1)) 
                                             ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                >> 0x12U)))));
            tracep->chgBit(oldp+2683,((1U & ((((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                >> 3U) 
                                               ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                  >> 0xcU)) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6)) 
                                             ^ (0x10080U 
                                                == 
                                                (0x10080U 
                                                 & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1))))));
            tracep->chgBit(oldp+2684,((1U & (((0xa000U 
                                               == (0xa000U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t15)))));
            tracep->chgBit(oldp+2685,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t20));
            tracep->chgBit(oldp+2686,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21));
            tracep->chgBit(oldp+2687,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t22));
            tracep->chgBit(oldp+2688,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23));
            tracep->chgBit(oldp+2689,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t24));
            tracep->chgBit(oldp+2690,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25));
            tracep->chgBit(oldp+2691,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+2692,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t27));
            tracep->chgBit(oldp+2693,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+2694,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23) 
                                        ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25)) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t27))));
            tracep->chgBit(oldp+2695,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21) 
                                        ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25)) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t24))));
            tracep->chgBit(oldp+2696,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t20) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23))));
            tracep->chgBit(oldp+2697,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t27) 
                                       & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t20) 
                                          & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23)))));
            tracep->chgBit(oldp+2698,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t27) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+2699,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t22))));
            tracep->chgBit(oldp+2700,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t24) 
                                       & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21) 
                                          & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t22)))));
            tracep->chgBit(oldp+2701,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t24) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+2702,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t37));
            tracep->chgBit(oldp+2703,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t38));
            tracep->chgBit(oldp+2704,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t39));
            tracep->chgBit(oldp+2705,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t40));
            tracep->chgBit(oldp+2706,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t41));
            tracep->chgBit(oldp+2707,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t42));
            tracep->chgBit(oldp+2708,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t43));
            tracep->chgBit(oldp+2709,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t44));
            tracep->chgBit(oldp+2710,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t45));
            tracep->chgBit(oldp+2711,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t0));
            tracep->chgBit(oldp+2712,((1U & VL_REDXOR_32(
                                                         (0x300U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+2713,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t2));
            tracep->chgBit(oldp+2714,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t3));
            tracep->chgBit(oldp+2715,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t4));
            tracep->chgBit(oldp+2716,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t5));
            tracep->chgBit(oldp+2717,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6));
            tracep->chgBit(oldp+2718,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t7));
            tracep->chgBit(oldp+2719,((1U & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                             ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                                >> 3U)))));
            tracep->chgBit(oldp+2720,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t9));
            tracep->chgBit(oldp+2721,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t10));
            tracep->chgBit(oldp+2722,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t11));
            tracep->chgBit(oldp+2723,((1U & VL_REDXOR_32(
                                                         (0x14000U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+2724,((1U & VL_REDXOR_32(
                                                         (0x20002U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+2725,((1U & VL_REDXOR_32(
                                                         (0x21000U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+2726,((1U & VL_REDXOR_32(
                                                         (0x210U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+2727,((1U & VL_REDXOR_32(
                                                         (0x880U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+2728,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                              >> 8U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t2)))));
            tracep->chgBit(oldp+2729,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                              >> 0xdU) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t5)))));
            tracep->chgBit(oldp+2730,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t2) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t3))));
            tracep->chgBit(oldp+2731,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t4) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6))));
            tracep->chgBit(oldp+2732,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t22));
            tracep->chgBit(oldp+2733,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t23));
            tracep->chgBit(oldp+2734,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t5) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t7))));
            tracep->chgBit(oldp+2735,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t10))));
            tracep->chgBit(oldp+2736,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t9) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t11))));
            tracep->chgBit(oldp+2737,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t10) 
                                             ^ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                                 >> 0xdU) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t5))))));
            tracep->chgBit(oldp+2738,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t11) 
                                       ^ ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6) 
                                          ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t10)))));
            tracep->chgBit(oldp+2739,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                               >> 4U) 
                                              ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                                 >> 9U)) 
                                             ^ ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t4) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__6__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6))))));
            tracep->chgCData(oldp+2740,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT____Vcellout__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__fx),8);
            tracep->chgCData(oldp+2741,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                        [7U]),8);
            tracep->chgIData(oldp+2742,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t1),21);
            tracep->chgIData(oldp+2743,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t2),18);
            tracep->chgBit(oldp+2744,((1U & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                       [7U])));
            tracep->chgBit(oldp+2745,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__top__DOT__y1));
            tracep->chgBit(oldp+2746,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__top__DOT__y2));
            tracep->chgBit(oldp+2747,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__top__DOT__y3));
            tracep->chgBit(oldp+2748,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__top__DOT__y4));
            tracep->chgBit(oldp+2749,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__top__DOT__t0));
            tracep->chgBit(oldp+2750,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__top__DOT__y5));
            tracep->chgBit(oldp+2751,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__top__DOT__t1));
            tracep->chgBit(oldp+2752,((1U & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                             [7U] ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__top__DOT__y5)))));
            tracep->chgBit(oldp+2753,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__top__DOT__y7));
            tracep->chgBit(oldp+2754,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__top__DOT__y8));
            tracep->chgBit(oldp+2755,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__top__DOT__t2));
            tracep->chgBit(oldp+2756,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__top__DOT__t3));
            tracep->chgBit(oldp+2757,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__top__DOT__y3) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__top__DOT__y4))));
            tracep->chgBit(oldp+2758,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__top__DOT__y5) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__top__DOT__t2))));
            tracep->chgBit(oldp+2759,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__top__DOT__t0) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__top__DOT__t2))));
            tracep->chgBit(oldp+2760,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__top__DOT__y12));
            tracep->chgBit(oldp+2761,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__top__DOT__y13));
            tracep->chgBit(oldp+2762,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                              [7U] 
                                              >> 4U) 
                                             ^ vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                             [7U]))));
            tracep->chgBit(oldp+2763,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__top__DOT__y14));
            tracep->chgBit(oldp+2764,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__top__DOT__y15));
            tracep->chgBit(oldp+2765,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                              [7U] 
                                              >> 1U) 
                                             ^ vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_fwd_in
                                             [7U]))));
            tracep->chgBit(oldp+2766,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__top__DOT__y16));
            tracep->chgBit(oldp+2767,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__top__DOT__y2) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__top__DOT__y16))));
            tracep->chgBit(oldp+2768,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__top__DOT__y2) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__top__DOT__y8))));
            tracep->chgBit(oldp+2769,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__top__DOT__y15) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__top__DOT__y13))));
            tracep->chgBit(oldp+2770,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__top__DOT__y1) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__top__DOT__t3))));
            tracep->chgBit(oldp+2771,((1U & VL_REDXOR_32(
                                                         (0x1008U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2772,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1));
            tracep->chgBit(oldp+2773,((IData)((0x20040U 
                                               == (0x20040U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2774,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t1 
                                              >> 0xaU) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1)))));
            tracep->chgBit(oldp+2775,((0x4001U == (0x4001U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t1))));
            tracep->chgBit(oldp+2776,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t1 
                                               >> 0xeU) 
                                              & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t1) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1)))));
            tracep->chgBit(oldp+2777,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6));
            tracep->chgBit(oldp+2778,((IData)((0x10080U 
                                               == (0x10080U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2779,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t1 
                                               >> 3U) 
                                              ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t1 
                                                 >> 0xcU)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6)))));
            tracep->chgBit(oldp+2780,((IData)((0xa000U 
                                               == (0xa000U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2781,((1U & ((0xa000U 
                                              == (0xa000U 
                                                  & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t1)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6)))));
            tracep->chgBit(oldp+2782,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t11));
            tracep->chgBit(oldp+2783,((IData)((0x100010U 
                                               == (0x100010U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2784,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t13));
            tracep->chgBit(oldp+2785,((IData)((0x104U 
                                               == (0x104U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2786,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t15));
            tracep->chgBit(oldp+2787,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t1 
                                               >> 0xaU) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1)) 
                                             ^ (0x20040U 
                                                == 
                                                (0x20040U 
                                                 & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t1))))));
            tracep->chgBit(oldp+2788,((1U & ((((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t1 
                                                >> 0xeU) 
                                               & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t1) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t1)) 
                                             ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t1 
                                                >> 0x12U)))));
            tracep->chgBit(oldp+2789,((1U & ((((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t1 
                                                >> 3U) 
                                               ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t1 
                                                  >> 0xcU)) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6)) 
                                             ^ (0x10080U 
                                                == 
                                                (0x10080U 
                                                 & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t1))))));
            tracep->chgBit(oldp+2790,((1U & (((0xa000U 
                                               == (0xa000U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t1)) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t6)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t15)))));
            tracep->chgBit(oldp+2791,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t20));
            tracep->chgBit(oldp+2792,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21));
            tracep->chgBit(oldp+2793,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t22));
            tracep->chgBit(oldp+2794,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23));
            tracep->chgBit(oldp+2795,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t24));
            tracep->chgBit(oldp+2796,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25));
            tracep->chgBit(oldp+2797,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+2798,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t27));
            tracep->chgBit(oldp+2799,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+2800,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23) 
                                        ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25)) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t27))));
            tracep->chgBit(oldp+2801,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21) 
                                        ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25)) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t24))));
            tracep->chgBit(oldp+2802,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t20) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23))));
            tracep->chgBit(oldp+2803,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t27) 
                                       & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t20) 
                                          & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t23)))));
            tracep->chgBit(oldp+2804,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t27) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+2805,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t22))));
            tracep->chgBit(oldp+2806,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t24) 
                                       & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t21) 
                                          & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t22)))));
            tracep->chgBit(oldp+2807,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t24) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+2808,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t37));
            tracep->chgBit(oldp+2809,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t38));
            tracep->chgBit(oldp+2810,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t39));
            tracep->chgBit(oldp+2811,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t40));
            tracep->chgBit(oldp+2812,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t41));
            tracep->chgBit(oldp+2813,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t42));
            tracep->chgBit(oldp+2814,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t43));
            tracep->chgBit(oldp+2815,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t44));
            tracep->chgBit(oldp+2816,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__mid__DOT__t45));
            tracep->chgBit(oldp+2817,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__out__DOT__t0));
            tracep->chgBit(oldp+2818,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1));
            tracep->chgBit(oldp+2819,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__out__DOT__t2));
            tracep->chgBit(oldp+2820,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__out__DOT__t3));
            tracep->chgBit(oldp+2821,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__out__DOT__t4));
            tracep->chgBit(oldp+2822,((1U & VL_REDXOR_32(
                                                         (0x20800U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t2)))));
            tracep->chgBit(oldp+2823,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__out__DOT__t6));
            tracep->chgBit(oldp+2824,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__out__DOT__t7));
            tracep->chgBit(oldp+2825,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__out__DOT__t8));
            tracep->chgBit(oldp+2826,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__out__DOT__t9));
            tracep->chgBit(oldp+2827,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__out__DOT__t10));
            tracep->chgBit(oldp+2828,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__out__DOT__t11));
            tracep->chgBit(oldp+2829,((1U & VL_REDXOR_32(
                                                         (0x10002U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t2)))));
            tracep->chgBit(oldp+2830,((1U & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t2 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__out__DOT__t0)))));
            tracep->chgBit(oldp+2831,((1U & VL_REDXOR_32(
                                                         (0x804U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t2)))));
            tracep->chgBit(oldp+2832,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 5U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1)))));
            tracep->chgBit(oldp+2833,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 6U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__out__DOT__t0)))));
            tracep->chgBit(oldp+2834,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 7U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1)))));
            tracep->chgBit(oldp+2835,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 8U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__out__DOT__t8)))));
            tracep->chgBit(oldp+2836,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t2 
                                              >> 0xdU) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__out__DOT__t4)))));
            tracep->chgBit(oldp+2837,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__out__DOT__t0) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1))));
            tracep->chgBit(oldp+2838,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__out__DOT__t7))));
            tracep->chgBit(oldp+2839,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__out__DOT__t3) 
                                             ^ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t2 
                                                 >> 0x10U) 
                                                ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t2 
                                                   >> 1U))))));
            tracep->chgBit(oldp+2840,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t2 
                                               >> 8U) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__out__DOT__t8)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__out__DOT__t2)))));
            tracep->chgBit(oldp+2841,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t2 
                                               >> 5U) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__out__DOT__t9)))));
            tracep->chgBit(oldp+2842,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__out__DOT__t6) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__out__DOT__t10))));
            tracep->chgBit(oldp+2843,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__out__DOT__t7) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__out__DOT__t9))));
            tracep->chgBit(oldp+2844,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__out__DOT__t8) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__out__DOT__t10))));
            tracep->chgBit(oldp+2845,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__out__DOT__t11) 
                                             ^ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t2 
                                                 >> 2U) 
                                                ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t2 
                                                   >> 0xbU))))));
            tracep->chgBit(oldp+2846,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__out__DOT__t11) 
                                             ^ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__t2 
                                                 >> 7U) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__i_fwd_sbox__DOT__out__DOT__t1))))));
            tracep->chgCData(oldp+2847,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT____Vcellout__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__fx),8);
            tracep->chgCData(oldp+2848,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                        [7U]),8);
            tracep->chgIData(oldp+2849,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1),21);
            tracep->chgIData(oldp+2850,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2),18);
            tracep->chgBit(oldp+2851,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y17));
            tracep->chgBit(oldp+2852,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y16));
            tracep->chgBit(oldp+2853,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y2));
            tracep->chgBit(oldp+2854,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y1));
            tracep->chgBit(oldp+2855,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y18));
            tracep->chgBit(oldp+2856,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t0));
            tracep->chgBit(oldp+2857,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y6));
            tracep->chgBit(oldp+2858,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y14));
            tracep->chgBit(oldp+2859,((1U & (~ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                [7U] 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y1))))));
            tracep->chgBit(oldp+2860,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y8));
            tracep->chgBit(oldp+2861,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y2) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t0))));
            tracep->chgBit(oldp+2862,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y1) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t0))));
            tracep->chgBit(oldp+2863,((1U & (~ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                 [7U] 
                                                 >> 5U) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y1))))));
            tracep->chgBit(oldp+2864,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t1));
            tracep->chgBit(oldp+2865,((1U & (~ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                 [7U] 
                                                 >> 5U) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y14))))));
            tracep->chgBit(oldp+2866,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y18) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t1))));
            tracep->chgBit(oldp+2867,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                              [7U] 
                                              >> 3U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y6)))));
            tracep->chgBit(oldp+2868,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t2));
            tracep->chgBit(oldp+2869,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t3));
            tracep->chgBit(oldp+2870,((1U & (~ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                 [7U] 
                                                 >> 5U) 
                                                ^ (
                                                   vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                   [7U] 
                                                   >> 3U))))));
            tracep->chgBit(oldp+2871,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y16) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t2))));
            tracep->chgBit(oldp+2872,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t1) 
                                             ^ (~ (
                                                   (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                    [7U] 
                                                    >> 5U) 
                                                   ^ 
                                                   (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                                    [7U] 
                                                    >> 3U)))))));
            tracep->chgBit(oldp+2873,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y20));
            tracep->chgBit(oldp+2874,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y8) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y20))));
            tracep->chgBit(oldp+2875,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__y8) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t3))));
            tracep->chgBit(oldp+2876,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__sb_inv_in
                                              [7U] 
                                              >> 7U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__top__DOT__t2)))));
            tracep->chgBit(oldp+2877,((1U & VL_REDXOR_32(
                                                         (0x1008U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2878,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1));
            tracep->chgBit(oldp+2879,((IData)((0x20040U 
                                               == (0x20040U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2880,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                              >> 0xaU) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1)))));
            tracep->chgBit(oldp+2881,((0x4001U == (0x4001U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1))));
            tracep->chgBit(oldp+2882,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                               >> 0xeU) 
                                              & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1)))));
            tracep->chgBit(oldp+2883,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6));
            tracep->chgBit(oldp+2884,((IData)((0x10080U 
                                               == (0x10080U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2885,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                               >> 3U) 
                                              ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                 >> 0xcU)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6)))));
            tracep->chgBit(oldp+2886,((IData)((0xa000U 
                                               == (0xa000U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2887,((1U & ((0xa000U 
                                              == (0xa000U 
                                                  & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6)))));
            tracep->chgBit(oldp+2888,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t11));
            tracep->chgBit(oldp+2889,((IData)((0x100010U 
                                               == (0x100010U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2890,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t13));
            tracep->chgBit(oldp+2891,((IData)((0x104U 
                                               == (0x104U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)))));
            tracep->chgBit(oldp+2892,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t15));
            tracep->chgBit(oldp+2893,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                               >> 0xaU) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1)) 
                                             ^ (0x20040U 
                                                == 
                                                (0x20040U 
                                                 & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1))))));
            tracep->chgBit(oldp+2894,((1U & ((((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                >> 0xeU) 
                                               & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t1)) 
                                             ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                >> 0x12U)))));
            tracep->chgBit(oldp+2895,((1U & ((((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                >> 3U) 
                                               ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1 
                                                  >> 0xcU)) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6)) 
                                             ^ (0x10080U 
                                                == 
                                                (0x10080U 
                                                 & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1))))));
            tracep->chgBit(oldp+2896,((1U & (((0xa000U 
                                               == (0xa000U 
                                                   & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t1)) 
                                              ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t6)) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t15)))));
            tracep->chgBit(oldp+2897,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t20));
            tracep->chgBit(oldp+2898,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21));
            tracep->chgBit(oldp+2899,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t22));
            tracep->chgBit(oldp+2900,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23));
            tracep->chgBit(oldp+2901,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t24));
            tracep->chgBit(oldp+2902,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25));
            tracep->chgBit(oldp+2903,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+2904,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t27));
            tracep->chgBit(oldp+2905,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+2906,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23) 
                                        ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25)) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t27))));
            tracep->chgBit(oldp+2907,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21) 
                                        ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25)) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t24))));
            tracep->chgBit(oldp+2908,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t20) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23))));
            tracep->chgBit(oldp+2909,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t27) 
                                       & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t20) 
                                          & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t23)))));
            tracep->chgBit(oldp+2910,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t27) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+2911,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21) 
                                       & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t22))));
            tracep->chgBit(oldp+2912,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t24) 
                                       & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t21) 
                                          & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t22)))));
            tracep->chgBit(oldp+2913,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t24) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t25))));
            tracep->chgBit(oldp+2914,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t37));
            tracep->chgBit(oldp+2915,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t38));
            tracep->chgBit(oldp+2916,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t39));
            tracep->chgBit(oldp+2917,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t40));
            tracep->chgBit(oldp+2918,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t41));
            tracep->chgBit(oldp+2919,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t42));
            tracep->chgBit(oldp+2920,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t43));
            tracep->chgBit(oldp+2921,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t44));
            tracep->chgBit(oldp+2922,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__mid__DOT__t45));
            tracep->chgBit(oldp+2923,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t0));
            tracep->chgBit(oldp+2924,((1U & VL_REDXOR_32(
                                                         (0x300U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+2925,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t2));
            tracep->chgBit(oldp+2926,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t3));
            tracep->chgBit(oldp+2927,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t4));
            tracep->chgBit(oldp+2928,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t5));
            tracep->chgBit(oldp+2929,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6));
            tracep->chgBit(oldp+2930,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t7));
            tracep->chgBit(oldp+2931,((1U & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                             ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                                >> 3U)))));
            tracep->chgBit(oldp+2932,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t9));
            tracep->chgBit(oldp+2933,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t10));
            tracep->chgBit(oldp+2934,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t11));
            tracep->chgBit(oldp+2935,((1U & VL_REDXOR_32(
                                                         (0x14000U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+2936,((1U & VL_REDXOR_32(
                                                         (0x20002U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+2937,((1U & VL_REDXOR_32(
                                                         (0x21000U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+2938,((1U & VL_REDXOR_32(
                                                         (0x210U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+2939,((1U & VL_REDXOR_32(
                                                         (0x880U 
                                                          & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2)))));
            tracep->chgBit(oldp+2940,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                              >> 8U) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t2)))));
            tracep->chgBit(oldp+2941,((1U & ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                              >> 0xdU) 
                                             ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t5)))));
            tracep->chgBit(oldp+2942,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t2) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t3))));
            tracep->chgBit(oldp+2943,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t4) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6))));
            tracep->chgBit(oldp+2944,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t22));
            tracep->chgBit(oldp+2945,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t23));
            tracep->chgBit(oldp+2946,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t5) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t7))));
            tracep->chgBit(oldp+2947,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t10))));
            tracep->chgBit(oldp+2948,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t9) 
                                       ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t11))));
            tracep->chgBit(oldp+2949,((1U & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t10) 
                                             ^ ((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                                 >> 0xdU) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t5))))));
            tracep->chgBit(oldp+2950,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t11) 
                                       ^ ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6) 
                                          ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t10)))));
            tracep->chgBit(oldp+2951,((1U & (((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                               >> 4U) 
                                              ^ (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__t2 
                                                 >> 9U)) 
                                             ^ ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t4) 
                                                ^ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_8_sboxes__DOT__genblk1__BRA__7__KET____DOT__saes64_dec_sboxes_implemented__DOT__i_inv_sbox__DOT__out__DOT__t6))))));
            tracep->chgCData(oldp+2952,((0xffU & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__mix_dec_i0)),8);
            tracep->chgCData(oldp+2953,((0xffU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__mix_dec_i0 
                                                  >> 8U))),8);
            tracep->chgCData(oldp+2954,((0xffU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__mix_dec_i0 
                                                  >> 0x10U))),8);
            tracep->chgCData(oldp+2955,((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__mix_dec_i0 
                                         >> 0x18U)),8);
            tracep->chgIData(oldp+2956,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d0__DOT__mix_in_3),32);
            tracep->chgIData(oldp+2957,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d0__DOT__mix_in_2),32);
            tracep->chgIData(oldp+2958,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d0__DOT__mix_in_1),32);
            tracep->chgIData(oldp+2959,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d0__DOT__mix_in_0),32);
            tracep->chgCData(oldp+2960,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d0__DOT__mix_out_3),8);
            tracep->chgCData(oldp+2961,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d0__DOT__mix_out_2),8);
            tracep->chgCData(oldp+2962,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d0__DOT__mix_out_1),8);
            tracep->chgCData(oldp+2963,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d0__DOT__mix_out_0),8);
            tracep->chgCData(oldp+2964,((0xffU & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d0__DOT__mix_in_0)),8);
            tracep->chgCData(oldp+2965,((0xffU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d0__DOT__mix_in_0 
                                                  >> 8U))),8);
            tracep->chgCData(oldp+2966,((0xffU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d0__DOT__mix_in_0 
                                                  >> 0x10U))),8);
            tracep->chgCData(oldp+2967,((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d0__DOT__mix_in_0 
                                         >> 0x18U)),8);
            tracep->chgCData(oldp+2968,((0xffU & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d0__DOT__mix_in_1)),8);
            tracep->chgCData(oldp+2969,((0xffU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d0__DOT__mix_in_1 
                                                  >> 8U))),8);
            tracep->chgCData(oldp+2970,((0xffU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d0__DOT__mix_in_1 
                                                  >> 0x10U))),8);
            tracep->chgCData(oldp+2971,((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d0__DOT__mix_in_1 
                                         >> 0x18U)),8);
            tracep->chgCData(oldp+2972,((0xffU & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d0__DOT__mix_in_2)),8);
            tracep->chgCData(oldp+2973,((0xffU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d0__DOT__mix_in_2 
                                                  >> 8U))),8);
            tracep->chgCData(oldp+2974,((0xffU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d0__DOT__mix_in_2 
                                                  >> 0x10U))),8);
            tracep->chgCData(oldp+2975,((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d0__DOT__mix_in_2 
                                         >> 0x18U)),8);
            tracep->chgCData(oldp+2976,((0xffU & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d0__DOT__mix_in_3)),8);
            tracep->chgCData(oldp+2977,((0xffU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d0__DOT__mix_in_3 
                                                  >> 8U))),8);
            tracep->chgCData(oldp+2978,((0xffU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d0__DOT__mix_in_3 
                                                  >> 0x10U))),8);
            tracep->chgCData(oldp+2979,((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d0__DOT__mix_in_3 
                                         >> 0x18U)),8);
            tracep->chgCData(oldp+2980,((0xffU & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__mix_dec_i1)),8);
            tracep->chgCData(oldp+2981,((0xffU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__mix_dec_i1 
                                                  >> 8U))),8);
            tracep->chgCData(oldp+2982,((0xffU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__mix_dec_i1 
                                                  >> 0x10U))),8);
            tracep->chgCData(oldp+2983,((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__mix_dec_i1 
                                         >> 0x18U)),8);
            tracep->chgIData(oldp+2984,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d1__DOT__mix_in_3),32);
            tracep->chgIData(oldp+2985,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d1__DOT__mix_in_2),32);
            tracep->chgIData(oldp+2986,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d1__DOT__mix_in_1),32);
            tracep->chgIData(oldp+2987,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d1__DOT__mix_in_0),32);
            tracep->chgCData(oldp+2988,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d1__DOT__mix_out_3),8);
            tracep->chgCData(oldp+2989,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d1__DOT__mix_out_2),8);
            tracep->chgCData(oldp+2990,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d1__DOT__mix_out_1),8);
            tracep->chgCData(oldp+2991,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d1__DOT__mix_out_0),8);
            tracep->chgCData(oldp+2992,((0xffU & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d1__DOT__mix_in_0)),8);
            tracep->chgCData(oldp+2993,((0xffU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d1__DOT__mix_in_0 
                                                  >> 8U))),8);
            tracep->chgCData(oldp+2994,((0xffU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d1__DOT__mix_in_0 
                                                  >> 0x10U))),8);
            tracep->chgCData(oldp+2995,((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d1__DOT__mix_in_0 
                                         >> 0x18U)),8);
            tracep->chgCData(oldp+2996,((0xffU & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d1__DOT__mix_in_1)),8);
            tracep->chgCData(oldp+2997,((0xffU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d1__DOT__mix_in_1 
                                                  >> 8U))),8);
            tracep->chgCData(oldp+2998,((0xffU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d1__DOT__mix_in_1 
                                                  >> 0x10U))),8);
            tracep->chgCData(oldp+2999,((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d1__DOT__mix_in_1 
                                         >> 0x18U)),8);
            tracep->chgCData(oldp+3000,((0xffU & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d1__DOT__mix_in_2)),8);
            tracep->chgCData(oldp+3001,((0xffU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d1__DOT__mix_in_2 
                                                  >> 8U))),8);
            tracep->chgCData(oldp+3002,((0xffU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d1__DOT__mix_in_2 
                                                  >> 0x10U))),8);
            tracep->chgCData(oldp+3003,((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d1__DOT__mix_in_2 
                                         >> 0x18U)),8);
            tracep->chgCData(oldp+3004,((0xffU & vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d1__DOT__mix_in_3)),8);
            tracep->chgCData(oldp+3005,((0xffU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d1__DOT__mix_in_3 
                                                  >> 8U))),8);
            tracep->chgCData(oldp+3006,((0xffU & (vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d1__DOT__mix_in_3 
                                                  >> 0x10U))),8);
            tracep->chgCData(oldp+3007,((vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__aes_fu__DOT__saes64_dec_mix_columns_implemented__DOT__i_mix_d1__DOT__mix_in_3 
                                         >> 0x18U)),8);
            tracep->chgWData(oldp+3008,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4),1380);
            tracep->chgWData(oldp+3052,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[0]),69);
            tracep->chgWData(oldp+3055,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[1]),69);
            tracep->chgWData(oldp+3058,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[2]),69);
            tracep->chgWData(oldp+3061,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[3]),69);
            tracep->chgWData(oldp+3064,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[4]),69);
            tracep->chgWData(oldp+3067,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[5]),69);
            tracep->chgWData(oldp+3070,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[6]),69);
            tracep->chgWData(oldp+3073,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[7]),69);
            tracep->chgWData(oldp+3076,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[8]),69);
            tracep->chgWData(oldp+3079,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[9]),69);
            tracep->chgWData(oldp+3082,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[10]),69);
            tracep->chgWData(oldp+3085,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[11]),69);
            tracep->chgWData(oldp+3088,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[12]),69);
            tracep->chgWData(oldp+3091,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[13]),69);
            tracep->chgWData(oldp+3094,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[14]),69);
            tracep->chgWData(oldp+3097,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[15]),69);
            tracep->chgWData(oldp+3100,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[16]),69);
            tracep->chgWData(oldp+3103,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[17]),69);
            tracep->chgWData(oldp+3106,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[18]),69);
            tracep->chgWData(oldp+3109,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[19]),69);
            tracep->chgCData(oldp+3112,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[0]),5);
            tracep->chgCData(oldp+3113,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[1]),5);
            tracep->chgCData(oldp+3114,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[2]),5);
            tracep->chgCData(oldp+3115,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[3]),5);
            tracep->chgCData(oldp+3116,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[4]),5);
            tracep->chgCData(oldp+3117,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[5]),5);
            tracep->chgCData(oldp+3118,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[6]),5);
            tracep->chgCData(oldp+3119,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[7]),5);
            tracep->chgCData(oldp+3120,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[8]),5);
            tracep->chgCData(oldp+3121,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[9]),5);
            tracep->chgCData(oldp+3122,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[10]),5);
            tracep->chgCData(oldp+3123,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[11]),5);
            tracep->chgCData(oldp+3124,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[12]),5);
            tracep->chgCData(oldp+3125,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[13]),5);
            tracep->chgCData(oldp+3126,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[14]),5);
            tracep->chgCData(oldp+3127,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[15]),5);
            tracep->chgCData(oldp+3128,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[16]),5);
            tracep->chgCData(oldp+3129,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[17]),5);
            tracep->chgCData(oldp+3130,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[18]),5);
            tracep->chgCData(oldp+3131,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[19]),5);
            tracep->chgQData(oldp+3132,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+3134,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+3136,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+3138,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+3140,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[4]),64);
            tracep->chgQData(oldp+3142,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[5]),64);
            tracep->chgQData(oldp+3144,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[6]),64);
            tracep->chgQData(oldp+3146,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[7]),64);
            tracep->chgQData(oldp+3148,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[8]),64);
            tracep->chgQData(oldp+3150,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[9]),64);
            tracep->chgQData(oldp+3152,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[10]),64);
            tracep->chgQData(oldp+3154,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[11]),64);
            tracep->chgQData(oldp+3156,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[12]),64);
            tracep->chgQData(oldp+3158,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[13]),64);
            tracep->chgQData(oldp+3160,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[14]),64);
            tracep->chgQData(oldp+3162,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[15]),64);
            tracep->chgQData(oldp+3164,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[16]),64);
            tracep->chgQData(oldp+3166,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[17]),64);
            tracep->chgQData(oldp+3168,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[18]),64);
            tracep->chgQData(oldp+3170,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[19]),64);
            tracep->chgQData(oldp+3172,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+3174,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__hit));
            tracep->chgWData(oldp+3175,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__csr_value_write____pinNumber4),201);
            tracep->chgWData(oldp+3182,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_value_write__DOT__i0__DOT__pair_list[0]),67);
            tracep->chgWData(oldp+3185,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_value_write__DOT__i0__DOT__pair_list[1]),67);
            tracep->chgWData(oldp+3188,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_value_write__DOT__i0__DOT__pair_list[2]),67);
            tracep->chgCData(oldp+3191,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_value_write__DOT__i0__DOT__key_list[0]),3);
            tracep->chgCData(oldp+3192,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_value_write__DOT__i0__DOT__key_list[1]),3);
            tracep->chgCData(oldp+3193,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_value_write__DOT__i0__DOT__key_list[2]),3);
            tracep->chgQData(oldp+3194,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_value_write__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+3196,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_value_write__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+3198,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_value_write__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+3200,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_value_write__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+3202,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_value_write__DOT__i0__DOT__hit));
            tracep->chgQData(oldp+3203,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[0]),64);
            tracep->chgQData(oldp+3205,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[1]),64);
            tracep->chgQData(oldp+3207,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[2]),64);
            tracep->chgQData(oldp+3209,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[3]),64);
            tracep->chgQData(oldp+3211,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[4]),64);
            tracep->chgQData(oldp+3213,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[5]),64);
            tracep->chgQData(oldp+3215,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[6]),64);
            tracep->chgQData(oldp+3217,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[7]),64);
            tracep->chgQData(oldp+3219,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[8]),64);
            tracep->chgQData(oldp+3221,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[9]),64);
            tracep->chgQData(oldp+3223,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[10]),64);
            tracep->chgQData(oldp+3225,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[11]),64);
            tracep->chgQData(oldp+3227,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[12]),64);
            tracep->chgQData(oldp+3229,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[13]),64);
            tracep->chgQData(oldp+3231,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[14]),64);
            tracep->chgQData(oldp+3233,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[15]),64);
            tracep->chgQData(oldp+3235,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[16]),64);
            tracep->chgQData(oldp+3237,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[17]),64);
            tracep->chgQData(oldp+3239,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[18]),64);
            tracep->chgQData(oldp+3241,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[19]),64);
            tracep->chgQData(oldp+3243,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[20]),64);
            tracep->chgQData(oldp+3245,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[21]),64);
            tracep->chgQData(oldp+3247,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[22]),64);
            tracep->chgQData(oldp+3249,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[23]),64);
            tracep->chgQData(oldp+3251,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[24]),64);
            tracep->chgQData(oldp+3253,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[25]),64);
            tracep->chgQData(oldp+3255,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[26]),64);
            tracep->chgQData(oldp+3257,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[27]),64);
            tracep->chgQData(oldp+3259,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[28]),64);
            tracep->chgQData(oldp+3261,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[29]),64);
            tracep->chgQData(oldp+3263,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[30]),64);
            tracep->chgQData(oldp+3265,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[31]),64);
            tracep->chgQData(oldp+3267,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[0]),64);
            tracep->chgQData(oldp+3269,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[1]),64);
            tracep->chgQData(oldp+3271,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[2]),64);
            tracep->chgQData(oldp+3273,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[3]),64);
            tracep->chgQData(oldp+3275,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[4]),64);
            tracep->chgQData(oldp+3277,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[5]),64);
            tracep->chgQData(oldp+3279,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[6]),64);
            tracep->chgQData(oldp+3281,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[7]),64);
            tracep->chgQData(oldp+3283,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[8]),64);
            tracep->chgQData(oldp+3285,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[9]),64);
            tracep->chgQData(oldp+3287,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[10]),64);
            tracep->chgQData(oldp+3289,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[11]),64);
            tracep->chgQData(oldp+3291,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[12]),64);
            tracep->chgQData(oldp+3293,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[13]),64);
            tracep->chgQData(oldp+3295,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[14]),64);
            tracep->chgQData(oldp+3297,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[15]),64);
            tracep->chgQData(oldp+3299,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[16]),64);
            tracep->chgQData(oldp+3301,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[17]),64);
            tracep->chgQData(oldp+3303,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[18]),64);
            tracep->chgQData(oldp+3305,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[19]),64);
            tracep->chgQData(oldp+3307,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[20]),64);
            tracep->chgQData(oldp+3309,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[21]),64);
            tracep->chgQData(oldp+3311,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[22]),64);
            tracep->chgQData(oldp+3313,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[23]),64);
            tracep->chgQData(oldp+3315,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[24]),64);
            tracep->chgQData(oldp+3317,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[25]),64);
            tracep->chgQData(oldp+3319,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[26]),64);
            tracep->chgQData(oldp+3321,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[27]),64);
            tracep->chgQData(oldp+3323,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[28]),64);
            tracep->chgQData(oldp+3325,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[29]),64);
            tracep->chgQData(oldp+3327,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[30]),64);
            tracep->chgQData(oldp+3329,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[31]),64);
            tracep->chgWData(oldp+3331,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_value0____pinNumber4),136);
            tracep->chgWData(oldp+3336,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_value0__DOT__i0__DOT__pair_list[0]),68);
            tracep->chgWData(oldp+3339,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_value0__DOT__i0__DOT__pair_list[1]),68);
            tracep->chgCData(oldp+3342,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_value0__DOT__i0__DOT__key_list[0]),4);
            tracep->chgCData(oldp+3343,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_value0__DOT__i0__DOT__key_list[1]),4);
            tracep->chgQData(oldp+3344,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_value0__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+3346,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_value0__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+3348,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_value0__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+3350,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_value0__DOT__i0__DOT__hit));
            tracep->chgQData(oldp+3351,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__operation_a_forward),64);
            tracep->chgQData(oldp+3353,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__operation_b_forward),64);
            tracep->chgBit(oldp+3355,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_en));
            tracep->chgWData(oldp+3356,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_c_mux____pinNumber4),264);
            tracep->chgWData(oldp+3365,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__pair_list[0]),66);
            tracep->chgWData(oldp+3368,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__pair_list[1]),66);
            tracep->chgWData(oldp+3371,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__pair_list[2]),66);
            tracep->chgWData(oldp+3374,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__pair_list[3]),66);
            tracep->chgCData(oldp+3377,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__key_list[0]),2);
            tracep->chgCData(oldp+3378,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__key_list[1]),2);
            tracep->chgCData(oldp+3379,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__key_list[2]),2);
            tracep->chgCData(oldp+3380,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__key_list[3]),2);
            tracep->chgQData(oldp+3381,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+3383,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+3385,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+3387,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+3389,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+3391,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__hit));
            tracep->chgWData(oldp+3392,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_d_mux____pinNumber4),264);
            tracep->chgWData(oldp+3401,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__pair_list[0]),66);
            tracep->chgWData(oldp+3404,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__pair_list[1]),66);
            tracep->chgWData(oldp+3407,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__pair_list[2]),66);
            tracep->chgWData(oldp+3410,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__pair_list[3]),66);
            tracep->chgCData(oldp+3413,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__key_list[0]),2);
            tracep->chgCData(oldp+3414,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__key_list[1]),2);
            tracep->chgCData(oldp+3415,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__key_list[2]),2);
            tracep->chgCData(oldp+3416,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__key_list[3]),2);
            tracep->chgQData(oldp+3417,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+3419,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+3421,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__data_list[2]),64);
            tracep->chgQData(oldp+3423,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__data_list[3]),64);
            tracep->chgQData(oldp+3425,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+3427,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__hit));
            tracep->chgIData(oldp+3428,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__branch_test____pinNumber4),24);
            tracep->chgCData(oldp+3429,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__pair_list[0]),4);
            tracep->chgCData(oldp+3430,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__pair_list[1]),4);
            tracep->chgCData(oldp+3431,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__pair_list[2]),4);
            tracep->chgCData(oldp+3432,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__pair_list[3]),4);
            tracep->chgCData(oldp+3433,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__pair_list[4]),4);
            tracep->chgCData(oldp+3434,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__pair_list[5]),4);
            tracep->chgCData(oldp+3435,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__key_list[0]),3);
            tracep->chgCData(oldp+3436,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__key_list[1]),3);
            tracep->chgCData(oldp+3437,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__key_list[2]),3);
            tracep->chgCData(oldp+3438,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__key_list[3]),3);
            tracep->chgCData(oldp+3439,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__key_list[4]),3);
            tracep->chgCData(oldp+3440,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__key_list[5]),3);
            tracep->chgBit(oldp+3441,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__data_list[0]));
            tracep->chgBit(oldp+3442,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__data_list[1]));
            tracep->chgBit(oldp+3443,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__data_list[2]));
            tracep->chgBit(oldp+3444,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__data_list[3]));
            tracep->chgBit(oldp+3445,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__data_list[4]));
            tracep->chgBit(oldp+3446,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__data_list[5]));
            tracep->chgBit(oldp+3447,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__lut_out));
            tracep->chgBit(oldp+3448,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__hit));
        }
        tracep->chgBit(oldp+3449,(vlSelf->clock));
        tracep->chgBit(oldp+3450,(vlSelf->reset));
        tracep->chgQData(oldp+3451,(vlSelf->io_logCtrl_log_begin),64);
        tracep->chgQData(oldp+3453,(vlSelf->io_logCtrl_log_end),64);
        tracep->chgQData(oldp+3455,(vlSelf->io_logCtrl_log_level),64);
        tracep->chgBit(oldp+3457,(vlSelf->io_perfInfo_clean));
        tracep->chgBit(oldp+3458,(vlSelf->io_perfInfo_dump));
        tracep->chgBit(oldp+3459,(vlSelf->io_uart_out_valid));
        tracep->chgCData(oldp+3460,(vlSelf->io_uart_out_ch),8);
        tracep->chgBit(oldp+3461,(vlSelf->io_uart_in_valid));
        tracep->chgCData(oldp+3462,(vlSelf->io_uart_in_ch),8);
        tracep->chgBit(oldp+3463,(vlSelf->io_memAXI_0_aw_ready));
        tracep->chgBit(oldp+3464,(vlSelf->io_memAXI_0_aw_valid));
        tracep->chgIData(oldp+3465,(vlSelf->io_memAXI_0_aw_bits_addr),32);
        tracep->chgCData(oldp+3466,(vlSelf->io_memAXI_0_aw_bits_prot),3);
        tracep->chgCData(oldp+3467,(vlSelf->io_memAXI_0_aw_bits_id),4);
        tracep->chgBit(oldp+3468,(vlSelf->io_memAXI_0_aw_bits_user));
        tracep->chgCData(oldp+3469,(vlSelf->io_memAXI_0_aw_bits_len),8);
        tracep->chgCData(oldp+3470,(vlSelf->io_memAXI_0_aw_bits_size),3);
        tracep->chgCData(oldp+3471,(vlSelf->io_memAXI_0_aw_bits_burst),2);
        tracep->chgBit(oldp+3472,(vlSelf->io_memAXI_0_aw_bits_lock));
        tracep->chgCData(oldp+3473,(vlSelf->io_memAXI_0_aw_bits_cache),4);
        tracep->chgCData(oldp+3474,(vlSelf->io_memAXI_0_aw_bits_qos),4);
        tracep->chgBit(oldp+3475,(vlSelf->io_memAXI_0_w_ready));
        tracep->chgBit(oldp+3476,(vlSelf->io_memAXI_0_w_valid));
        tracep->chgQData(oldp+3477,(vlSelf->io_memAXI_0_w_bits_data[0]),64);
        tracep->chgQData(oldp+3479,(vlSelf->io_memAXI_0_w_bits_data[1]),64);
        tracep->chgQData(oldp+3481,(vlSelf->io_memAXI_0_w_bits_data[2]),64);
        tracep->chgQData(oldp+3483,(vlSelf->io_memAXI_0_w_bits_data[3]),64);
        tracep->chgCData(oldp+3485,(vlSelf->io_memAXI_0_w_bits_strb),8);
        tracep->chgBit(oldp+3486,(vlSelf->io_memAXI_0_w_bits_last));
        tracep->chgBit(oldp+3487,(vlSelf->io_memAXI_0_b_ready));
        tracep->chgBit(oldp+3488,(vlSelf->io_memAXI_0_b_valid));
        tracep->chgCData(oldp+3489,(vlSelf->io_memAXI_0_b_bits_resp),2);
        tracep->chgCData(oldp+3490,(vlSelf->io_memAXI_0_b_bits_id),4);
        tracep->chgBit(oldp+3491,(vlSelf->io_memAXI_0_b_bits_user));
        tracep->chgBit(oldp+3492,(vlSelf->io_memAXI_0_ar_ready));
        tracep->chgBit(oldp+3493,(vlSelf->io_memAXI_0_ar_valid));
        tracep->chgIData(oldp+3494,(vlSelf->io_memAXI_0_ar_bits_addr),32);
        tracep->chgCData(oldp+3495,(vlSelf->io_memAXI_0_ar_bits_prot),3);
        tracep->chgCData(oldp+3496,(vlSelf->io_memAXI_0_ar_bits_id),4);
        tracep->chgBit(oldp+3497,(vlSelf->io_memAXI_0_ar_bits_user));
        tracep->chgCData(oldp+3498,(vlSelf->io_memAXI_0_ar_bits_len),8);
        tracep->chgCData(oldp+3499,(vlSelf->io_memAXI_0_ar_bits_size),3);
        tracep->chgCData(oldp+3500,(vlSelf->io_memAXI_0_ar_bits_burst),2);
        tracep->chgBit(oldp+3501,(vlSelf->io_memAXI_0_ar_bits_lock));
        tracep->chgCData(oldp+3502,(vlSelf->io_memAXI_0_ar_bits_cache),4);
        tracep->chgCData(oldp+3503,(vlSelf->io_memAXI_0_ar_bits_qos),4);
        tracep->chgBit(oldp+3504,(vlSelf->io_memAXI_0_r_ready));
        tracep->chgBit(oldp+3505,(vlSelf->io_memAXI_0_r_valid));
        tracep->chgCData(oldp+3506,(vlSelf->io_memAXI_0_r_bits_resp),2);
        tracep->chgQData(oldp+3507,(vlSelf->io_memAXI_0_r_bits_data[0]),64);
        tracep->chgQData(oldp+3509,(vlSelf->io_memAXI_0_r_bits_data[1]),64);
        tracep->chgQData(oldp+3511,(vlSelf->io_memAXI_0_r_bits_data[2]),64);
        tracep->chgQData(oldp+3513,(vlSelf->io_memAXI_0_r_bits_data[3]),64);
        tracep->chgBit(oldp+3515,(vlSelf->io_memAXI_0_r_bits_last));
        tracep->chgCData(oldp+3516,(vlSelf->io_memAXI_0_r_bits_id),4);
        tracep->chgBit(oldp+3517,(vlSelf->io_memAXI_0_r_bits_user));
        tracep->chgQData(oldp+3518,(vlSelf->io_memAXI_0_r_bits_data
                                    [0U]),64);
        tracep->chgBit(oldp+3520,((1U & (~ (IData)(vlSelf->reset)))));
        VL_EXTEND_WQ(65,64, __Vtemp1188, vlSelf->io_memAXI_0_r_bits_data
                     [0U]);
        tracep->chgWData(oldp+3521,(__Vtemp1188),65);
        tracep->chgBit(oldp+3524,(((IData)(vlSelf->io_memAXI_0_aw_ready) 
                                   & (1U == (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__w_state)))));
        tracep->chgBit(oldp+3525,(((IData)(vlSelf->io_memAXI_0_ar_ready) 
                                   & (1U == (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__r_state)))));
        tracep->chgBit(oldp+3526,((((IData)(vlSelf->reset) 
                                    | ((IData)(vlSelf->SimTop__DOT__rw_req) 
                                       & (0U == (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__w_state)))) 
                                   | ((~ (IData)(vlSelf->SimTop__DOT__rw_req)) 
                                      & (0U == (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__r_state))))));
        tracep->chgBit(oldp+3527,((1U & ((IData)(vlSelf->SimTop__DOT__rw_req)
                                          ? (IData)(vlSelf->io_memAXI_0_b_bits_resp)
                                          : (IData)(vlSelf->io_memAXI_0_r_bits_resp)))));
        __Vtemp1189[0U] = 0xffffffffU;
        __Vtemp1189[1U] = 0U;
        __Vtemp1189[2U] = 0U;
        __Vtemp1189[3U] = 0U;
        VL_EXTEND_WQ(65,64, __Vtemp1190, vlSelf->SimTop__DOT__rw_addr);
        VL_SHIFTL_WWI(128,128,6, __Vtemp1191, __Vtemp1189, 
                      (0x38U & (__Vtemp1190[0U] << 3U)));
        VL_EXTEND_WQ(65,64, __Vtemp1192, vlSelf->SimTop__DOT__rw_addr);
        tracep->chgQData(oldp+3528,(((vlSelf->io_memAXI_0_r_bits_data
                                      [0U] & (((QData)((IData)(
                                                               __Vtemp1191[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                __Vtemp1191[0U])))) 
                                     >> (0x38U & (__Vtemp1192[0U] 
                                                  << 3U)))),64);
        __Vtemp1193[0U] = 0xffffffffU;
        __Vtemp1193[1U] = 0U;
        __Vtemp1193[2U] = 0U;
        __Vtemp1193[3U] = 0U;
        VL_EXTEND_WQ(65,64, __Vtemp1194, vlSelf->SimTop__DOT__rw_addr);
        VL_SHIFTL_WWI(128,128,6, __Vtemp1195, __Vtemp1193, 
                      (0x38U & (__Vtemp1194[0U] << 3U)));
        VL_EXTEND_WQ(65,64, __Vtemp1196, vlSelf->SimTop__DOT__rw_addr);
        tracep->chgQData(oldp+3530,(((vlSelf->io_memAXI_0_r_bits_data
                                      [0U] & (((QData)((IData)(
                                                               __Vtemp1195[3U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                __Vtemp1195[2U])))) 
                                     << (0x3fU & (- 
                                                  (0x38U 
                                                   & (__Vtemp1196[0U] 
                                                      << 3U)))))),64);
        tracep->chgBit(oldp+3532,(((~ (IData)(vlSelf->reset)) 
                                   & ((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__read_mem_en_wb) 
                                        & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__write_mem_en_mem)) 
                                       & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rs2_mem) 
                                          == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rd_wb))) 
                                      & (0U != (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rd_wb))))));
        tracep->chgBit(oldp+3533,((1U & ((IData)(vlSelf->reset) 
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

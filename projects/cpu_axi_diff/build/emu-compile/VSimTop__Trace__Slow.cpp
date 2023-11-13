// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSimTop__Syms.h"


void VSimTop___024root__traceInitSub0(VSimTop___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void VSimTop___024root__traceInitTop(VSimTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        VSimTop___024root__traceInitSub0(vlSelf, tracep);
    }
}

void VSimTop___024root__traceInitSub0(VSimTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1041,"clock", false,-1);
        tracep->declBit(c+1042,"reset", false,-1);
        tracep->declQuad(c+1043,"io_logCtrl_log_begin", false,-1, 63,0);
        tracep->declQuad(c+1045,"io_logCtrl_log_end", false,-1, 63,0);
        tracep->declQuad(c+1047,"io_logCtrl_log_level", false,-1, 63,0);
        tracep->declBit(c+1049,"io_perfInfo_clean", false,-1);
        tracep->declBit(c+1050,"io_perfInfo_dump", false,-1);
        tracep->declBit(c+1051,"io_uart_out_valid", false,-1);
        tracep->declBus(c+1052,"io_uart_out_ch", false,-1, 7,0);
        tracep->declBit(c+1053,"io_uart_in_valid", false,-1);
        tracep->declBus(c+1054,"io_uart_in_ch", false,-1, 7,0);
        tracep->declBit(c+1055,"io_memAXI_0_aw_ready", false,-1);
        tracep->declBit(c+1056,"io_memAXI_0_aw_valid", false,-1);
        tracep->declQuad(c+1057,"io_memAXI_0_aw_bits_addr", false,-1, 63,0);
        tracep->declBus(c+1059,"io_memAXI_0_aw_bits_prot", false,-1, 2,0);
        tracep->declBus(c+1060,"io_memAXI_0_aw_bits_id", false,-1, 3,0);
        tracep->declBus(c+1061,"io_memAXI_0_aw_bits_user", false,-1, 0,0);
        tracep->declBus(c+1062,"io_memAXI_0_aw_bits_len", false,-1, 7,0);
        tracep->declBus(c+1063,"io_memAXI_0_aw_bits_size", false,-1, 2,0);
        tracep->declBus(c+1064,"io_memAXI_0_aw_bits_burst", false,-1, 1,0);
        tracep->declBit(c+1065,"io_memAXI_0_aw_bits_lock", false,-1);
        tracep->declBus(c+1066,"io_memAXI_0_aw_bits_cache", false,-1, 3,0);
        tracep->declBus(c+1067,"io_memAXI_0_aw_bits_qos", false,-1, 3,0);
        tracep->declBit(c+1068,"io_memAXI_0_w_ready", false,-1);
        tracep->declBit(c+1069,"io_memAXI_0_w_valid", false,-1);
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+1070+i*2,"io_memAXI_0_w_bits_data", true,(i+0), 63,0);}}
        tracep->declBus(c+1078,"io_memAXI_0_w_bits_strb", false,-1, 7,0);
        tracep->declBit(c+1079,"io_memAXI_0_w_bits_last", false,-1);
        tracep->declBit(c+1080,"io_memAXI_0_b_ready", false,-1);
        tracep->declBit(c+1081,"io_memAXI_0_b_valid", false,-1);
        tracep->declBus(c+1082,"io_memAXI_0_b_bits_resp", false,-1, 1,0);
        tracep->declBus(c+1083,"io_memAXI_0_b_bits_id", false,-1, 3,0);
        tracep->declBus(c+1084,"io_memAXI_0_b_bits_user", false,-1, 0,0);
        tracep->declBit(c+1085,"io_memAXI_0_ar_ready", false,-1);
        tracep->declBit(c+1086,"io_memAXI_0_ar_valid", false,-1);
        tracep->declQuad(c+1087,"io_memAXI_0_ar_bits_addr", false,-1, 63,0);
        tracep->declBus(c+1089,"io_memAXI_0_ar_bits_prot", false,-1, 2,0);
        tracep->declBus(c+1090,"io_memAXI_0_ar_bits_id", false,-1, 3,0);
        tracep->declBus(c+1091,"io_memAXI_0_ar_bits_user", false,-1, 0,0);
        tracep->declBus(c+1092,"io_memAXI_0_ar_bits_len", false,-1, 7,0);
        tracep->declBus(c+1093,"io_memAXI_0_ar_bits_size", false,-1, 2,0);
        tracep->declBus(c+1094,"io_memAXI_0_ar_bits_burst", false,-1, 1,0);
        tracep->declBit(c+1095,"io_memAXI_0_ar_bits_lock", false,-1);
        tracep->declBus(c+1096,"io_memAXI_0_ar_bits_cache", false,-1, 3,0);
        tracep->declBus(c+1097,"io_memAXI_0_ar_bits_qos", false,-1, 3,0);
        tracep->declBit(c+1098,"io_memAXI_0_r_ready", false,-1);
        tracep->declBit(c+1099,"io_memAXI_0_r_valid", false,-1);
        tracep->declBus(c+1100,"io_memAXI_0_r_bits_resp", false,-1, 1,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+1101+i*2,"io_memAXI_0_r_bits_data", true,(i+0), 63,0);}}
        tracep->declBit(c+1109,"io_memAXI_0_r_bits_last", false,-1);
        tracep->declBus(c+1110,"io_memAXI_0_r_bits_id", false,-1, 3,0);
        tracep->declBus(c+1111,"io_memAXI_0_r_bits_user", false,-1, 0,0);
        tracep->declBit(c+1041,"SimTop clock", false,-1);
        tracep->declBit(c+1042,"SimTop reset", false,-1);
        tracep->declQuad(c+1043,"SimTop io_logCtrl_log_begin", false,-1, 63,0);
        tracep->declQuad(c+1045,"SimTop io_logCtrl_log_end", false,-1, 63,0);
        tracep->declQuad(c+1047,"SimTop io_logCtrl_log_level", false,-1, 63,0);
        tracep->declBit(c+1049,"SimTop io_perfInfo_clean", false,-1);
        tracep->declBit(c+1050,"SimTop io_perfInfo_dump", false,-1);
        tracep->declBit(c+1051,"SimTop io_uart_out_valid", false,-1);
        tracep->declBus(c+1052,"SimTop io_uart_out_ch", false,-1, 7,0);
        tracep->declBit(c+1053,"SimTop io_uart_in_valid", false,-1);
        tracep->declBus(c+1054,"SimTop io_uart_in_ch", false,-1, 7,0);
        tracep->declBit(c+1055,"SimTop io_memAXI_0_aw_ready", false,-1);
        tracep->declBit(c+1056,"SimTop io_memAXI_0_aw_valid", false,-1);
        tracep->declQuad(c+1057,"SimTop io_memAXI_0_aw_bits_addr", false,-1, 63,0);
        tracep->declBus(c+1059,"SimTop io_memAXI_0_aw_bits_prot", false,-1, 2,0);
        tracep->declBus(c+1060,"SimTop io_memAXI_0_aw_bits_id", false,-1, 3,0);
        tracep->declBus(c+1061,"SimTop io_memAXI_0_aw_bits_user", false,-1, 0,0);
        tracep->declBus(c+1062,"SimTop io_memAXI_0_aw_bits_len", false,-1, 7,0);
        tracep->declBus(c+1063,"SimTop io_memAXI_0_aw_bits_size", false,-1, 2,0);
        tracep->declBus(c+1064,"SimTop io_memAXI_0_aw_bits_burst", false,-1, 1,0);
        tracep->declBit(c+1065,"SimTop io_memAXI_0_aw_bits_lock", false,-1);
        tracep->declBus(c+1066,"SimTop io_memAXI_0_aw_bits_cache", false,-1, 3,0);
        tracep->declBus(c+1067,"SimTop io_memAXI_0_aw_bits_qos", false,-1, 3,0);
        tracep->declBit(c+1068,"SimTop io_memAXI_0_w_ready", false,-1);
        tracep->declBit(c+1069,"SimTop io_memAXI_0_w_valid", false,-1);
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+1070+i*2,"SimTop io_memAXI_0_w_bits_data", true,(i+0), 63,0);}}
        tracep->declBus(c+1078,"SimTop io_memAXI_0_w_bits_strb", false,-1, 7,0);
        tracep->declBit(c+1079,"SimTop io_memAXI_0_w_bits_last", false,-1);
        tracep->declBit(c+1080,"SimTop io_memAXI_0_b_ready", false,-1);
        tracep->declBit(c+1081,"SimTop io_memAXI_0_b_valid", false,-1);
        tracep->declBus(c+1082,"SimTop io_memAXI_0_b_bits_resp", false,-1, 1,0);
        tracep->declBus(c+1083,"SimTop io_memAXI_0_b_bits_id", false,-1, 3,0);
        tracep->declBus(c+1084,"SimTop io_memAXI_0_b_bits_user", false,-1, 0,0);
        tracep->declBit(c+1085,"SimTop io_memAXI_0_ar_ready", false,-1);
        tracep->declBit(c+1086,"SimTop io_memAXI_0_ar_valid", false,-1);
        tracep->declQuad(c+1087,"SimTop io_memAXI_0_ar_bits_addr", false,-1, 63,0);
        tracep->declBus(c+1089,"SimTop io_memAXI_0_ar_bits_prot", false,-1, 2,0);
        tracep->declBus(c+1090,"SimTop io_memAXI_0_ar_bits_id", false,-1, 3,0);
        tracep->declBus(c+1091,"SimTop io_memAXI_0_ar_bits_user", false,-1, 0,0);
        tracep->declBus(c+1092,"SimTop io_memAXI_0_ar_bits_len", false,-1, 7,0);
        tracep->declBus(c+1093,"SimTop io_memAXI_0_ar_bits_size", false,-1, 2,0);
        tracep->declBus(c+1094,"SimTop io_memAXI_0_ar_bits_burst", false,-1, 1,0);
        tracep->declBit(c+1095,"SimTop io_memAXI_0_ar_bits_lock", false,-1);
        tracep->declBus(c+1096,"SimTop io_memAXI_0_ar_bits_cache", false,-1, 3,0);
        tracep->declBus(c+1097,"SimTop io_memAXI_0_ar_bits_qos", false,-1, 3,0);
        tracep->declBit(c+1098,"SimTop io_memAXI_0_r_ready", false,-1);
        tracep->declBit(c+1099,"SimTop io_memAXI_0_r_valid", false,-1);
        tracep->declBus(c+1100,"SimTop io_memAXI_0_r_bits_resp", false,-1, 1,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+1101+i*2,"SimTop io_memAXI_0_r_bits_data", true,(i+0), 63,0);}}
        tracep->declBit(c+1109,"SimTop io_memAXI_0_r_bits_last", false,-1);
        tracep->declBus(c+1110,"SimTop io_memAXI_0_r_bits_id", false,-1, 3,0);
        tracep->declBus(c+1111,"SimTop io_memAXI_0_r_bits_user", false,-1, 0,0);
        tracep->declBit(c+1055,"SimTop aw_ready", false,-1);
        tracep->declBit(c+3,"SimTop aw_valid", false,-1);
        tracep->declQuad(c+4,"SimTop aw_addr", false,-1, 63,0);
        tracep->declBus(c+1128,"SimTop aw_prot", false,-1, 2,0);
        tracep->declBus(c+1129,"SimTop aw_id", false,-1, 3,0);
        tracep->declBus(c+1130,"SimTop aw_user", false,-1, 0,0);
        tracep->declBus(c+6,"SimTop aw_len", false,-1, 7,0);
        tracep->declBus(c+1131,"SimTop aw_size", false,-1, 2,0);
        tracep->declBus(c+1132,"SimTop aw_burst", false,-1, 1,0);
        tracep->declBit(c+1133,"SimTop aw_lock", false,-1);
        tracep->declBus(c+1134,"SimTop aw_cache", false,-1, 3,0);
        tracep->declBus(c+1129,"SimTop aw_qos", false,-1, 3,0);
        tracep->declBus(c+1129,"SimTop aw_region", false,-1, 3,0);
        tracep->declBit(c+1068,"SimTop w_ready", false,-1);
        tracep->declBit(c+7,"SimTop w_valid", false,-1);
        tracep->declQuad(c+8,"SimTop w_data", false,-1, 63,0);
        tracep->declBus(c+10,"SimTop w_strb", false,-1, 7,0);
        tracep->declBit(c+1135,"SimTop w_last", false,-1);
        tracep->declBus(c+1130,"SimTop w_user", false,-1, 0,0);
        tracep->declBit(c+11,"SimTop b_ready", false,-1);
        tracep->declBit(c+1081,"SimTop b_valid", false,-1);
        tracep->declBus(c+1082,"SimTop b_resp", false,-1, 1,0);
        tracep->declBus(c+1083,"SimTop b_id", false,-1, 3,0);
        tracep->declBus(c+1084,"SimTop b_user", false,-1, 0,0);
        tracep->declBit(c+1085,"SimTop ar_ready", false,-1);
        tracep->declBit(c+12,"SimTop ar_valid", false,-1);
        tracep->declQuad(c+4,"SimTop ar_addr", false,-1, 63,0);
        tracep->declBus(c+1128,"SimTop ar_prot", false,-1, 2,0);
        tracep->declBus(c+1129,"SimTop ar_id", false,-1, 3,0);
        tracep->declBus(c+1130,"SimTop ar_user", false,-1, 0,0);
        tracep->declBus(c+6,"SimTop ar_len", false,-1, 7,0);
        tracep->declBus(c+1131,"SimTop ar_size", false,-1, 2,0);
        tracep->declBus(c+1132,"SimTop ar_burst", false,-1, 1,0);
        tracep->declBit(c+1133,"SimTop ar_lock", false,-1);
        tracep->declBus(c+1136,"SimTop ar_cache", false,-1, 3,0);
        tracep->declBus(c+1129,"SimTop ar_qos", false,-1, 3,0);
        tracep->declBus(c+1137,"SimTop ar_region", false,-1, 3,0);
        tracep->declBit(c+13,"SimTop r_ready", false,-1);
        tracep->declBit(c+1099,"SimTop r_valid", false,-1);
        tracep->declBus(c+1100,"SimTop r_resp", false,-1, 1,0);
        tracep->declQuad(c+1112,"SimTop r_data", false,-1, 63,0);
        tracep->declBit(c+1109,"SimTop r_last", false,-1);
        tracep->declBus(c+1110,"SimTop r_id", false,-1, 3,0);
        tracep->declBus(c+1111,"SimTop r_user", false,-1, 0,0);
        tracep->declBit(c+1114,"SimTop rst", false,-1);
        tracep->declBit(c+1041,"SimTop clk", false,-1);
        tracep->declBit(c+1135,"SimTop if_valid", false,-1);
        tracep->declBit(c+1138,"SimTop if_ready", false,-1);
        tracep->declBit(c+1133,"SimTop if_req", false,-1);
        tracep->declQuad(c+14,"SimTop if_data_read", false,-1, 63,0);
        tracep->declQuad(c+16,"SimTop if_addr", false,-1, 63,0);
        tracep->declBus(c+1139,"SimTop if_size", false,-1, 1,0);
        tracep->declBus(c+18,"SimTop if_resp", false,-1, 1,0);
        tracep->declBit(c+19,"SimTop mem_valid", false,-1);
        tracep->declBit(c+20,"SimTop mem_req", false,-1);
        tracep->declQuad(c+21,"SimTop mem_addr", false,-1, 63,0);
        tracep->declQuad(c+23,"SimTop mem_data_read", false,-1, 63,0);
        tracep->declQuad(c+8,"SimTop mem_data_write", false,-1, 63,0);
        tracep->declBus(c+10,"SimTop mem_write_mask_axi", false,-1, 7,0);
        tracep->declBit(c+25,"SimTop rw_valid", false,-1);
        tracep->declBit(c+26,"SimTop rw_ready", false,-1);
        tracep->declBit(c+27,"SimTop rw_req", false,-1);
        tracep->declQuad(c+1112,"SimTop rw_data_read", false,-1, 63,0);
        tracep->declQuad(c+8,"SimTop rw_data_write", false,-1, 63,0);
        tracep->declQuad(c+28,"SimTop rw_addr", false,-1, 63,0);
        tracep->declBus(c+1139,"SimTop rw_size", false,-1, 1,0);
        tracep->declBit(c+1036,"SimTop rw_trans_done", false,-1);
        tracep->declBit(c+30,"SimTop axi_stall", false,-1);
        tracep->declBus(c+1140,"SimTop axi_rw RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1140,"SimTop axi_rw RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1140,"SimTop axi_rw AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1140,"SimTop axi_rw AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1141,"SimTop axi_rw AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1142,"SimTop axi_rw AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+1041,"SimTop axi_rw clock", false,-1);
        tracep->declBit(c+1114,"SimTop axi_rw rst", false,-1);
        tracep->declBit(c+25,"SimTop axi_rw rw_valid_i", false,-1);
        tracep->declBit(c+26,"SimTop axi_rw rw_ready_o", false,-1);
        tracep->declBit(c+27,"SimTop axi_rw rw_req_i", false,-1);
        tracep->declArray(c+1115,"SimTop axi_rw data_read_o", false,-1, 64,0);
        tracep->declArray(c+31,"SimTop axi_rw data_write_i", false,-1, 64,0);
        tracep->declBus(c+10,"SimTop axi_rw mask_write_i", false,-1, 7,0);
        tracep->declArray(c+34,"SimTop axi_rw rw_addr_i", false,-1, 64,0);
        tracep->declBus(c+1139,"SimTop axi_rw rw_size_i", false,-1, 1,0);
        tracep->declBus(c+18,"SimTop axi_rw rw_resp_o", false,-1, 1,0);
        tracep->declBit(c+1036,"SimTop axi_rw rw_trans_done_o", false,-1);
        tracep->declBit(c+1055,"SimTop axi_rw axi_aw_ready_i", false,-1);
        tracep->declBit(c+3,"SimTop axi_rw axi_aw_valid_o", false,-1);
        tracep->declQuad(c+4,"SimTop axi_rw axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+1128,"SimTop axi_rw axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+1129,"SimTop axi_rw axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+1130,"SimTop axi_rw axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+6,"SimTop axi_rw axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+1131,"SimTop axi_rw axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+1132,"SimTop axi_rw axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+1133,"SimTop axi_rw axi_aw_lock_o", false,-1);
        tracep->declBus(c+1134,"SimTop axi_rw axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+1129,"SimTop axi_rw axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+1129,"SimTop axi_rw axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+1068,"SimTop axi_rw axi_w_ready_i", false,-1);
        tracep->declBit(c+7,"SimTop axi_rw axi_w_valid_o", false,-1);
        tracep->declQuad(c+8,"SimTop axi_rw axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+10,"SimTop axi_rw axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+1135,"SimTop axi_rw axi_w_last_o", false,-1);
        tracep->declBus(c+1130,"SimTop axi_rw axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+11,"SimTop axi_rw axi_b_ready_o", false,-1);
        tracep->declBit(c+1081,"SimTop axi_rw axi_b_valid_i", false,-1);
        tracep->declBus(c+1082,"SimTop axi_rw axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+1083,"SimTop axi_rw axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+1084,"SimTop axi_rw axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+1085,"SimTop axi_rw axi_ar_ready_i", false,-1);
        tracep->declBit(c+12,"SimTop axi_rw axi_ar_valid_o", false,-1);
        tracep->declQuad(c+4,"SimTop axi_rw axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+1128,"SimTop axi_rw axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+1129,"SimTop axi_rw axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+1130,"SimTop axi_rw axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+6,"SimTop axi_rw axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+1131,"SimTop axi_rw axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+1132,"SimTop axi_rw axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+1133,"SimTop axi_rw axi_ar_lock_o", false,-1);
        tracep->declBus(c+1136,"SimTop axi_rw axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+1129,"SimTop axi_rw axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+1137,"SimTop axi_rw axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+13,"SimTop axi_rw axi_r_ready_o", false,-1);
        tracep->declBit(c+1099,"SimTop axi_rw axi_r_valid_i", false,-1);
        tracep->declBus(c+1100,"SimTop axi_rw axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+1112,"SimTop axi_rw axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+1109,"SimTop axi_rw axi_r_last_i", false,-1);
        tracep->declBus(c+1110,"SimTop axi_rw axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+1111,"SimTop axi_rw axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+37,"SimTop axi_rw w_valid", false,-1);
        tracep->declBit(c+38,"SimTop axi_rw r_valid", false,-1);
        tracep->declBit(c+1118,"SimTop axi_rw aw_hs", false,-1);
        tracep->declBit(c+1037,"SimTop axi_rw w_hs", false,-1);
        tracep->declBit(c+1038,"SimTop axi_rw b_hs", false,-1);
        tracep->declBit(c+1119,"SimTop axi_rw ar_hs", false,-1);
        tracep->declBit(c+1039,"SimTop axi_rw r_hs", false,-1);
        tracep->declBit(c+1037,"SimTop axi_rw w_done", false,-1);
        tracep->declBit(c+1040,"SimTop axi_rw r_done", false,-1);
        tracep->declBit(c+1036,"SimTop axi_rw trans_done", false,-1);
        tracep->declBus(c+1143,"SimTop axi_rw W_STATE_IDLE", false,-1, 1,0);
        tracep->declBus(c+1132,"SimTop axi_rw W_STATE_ADDR", false,-1, 1,0);
        tracep->declBus(c+1139,"SimTop axi_rw W_STATE_WRITE", false,-1, 1,0);
        tracep->declBus(c+1144,"SimTop axi_rw W_STATE_RESP", false,-1, 1,0);
        tracep->declBus(c+1143,"SimTop axi_rw R_STATE_IDLE", false,-1, 1,0);
        tracep->declBus(c+1132,"SimTop axi_rw R_STATE_ADDR", false,-1, 1,0);
        tracep->declBus(c+1139,"SimTop axi_rw R_STATE_READ", false,-1, 1,0);
        tracep->declBus(c+39,"SimTop axi_rw w_state", false,-1, 1,0);
        tracep->declBus(c+40,"SimTop axi_rw r_state", false,-1, 1,0);
        tracep->declBit(c+41,"SimTop axi_rw w_state_idle", false,-1);
        tracep->declBit(c+3,"SimTop axi_rw w_state_addr", false,-1);
        tracep->declBit(c+7,"SimTop axi_rw w_state_write", false,-1);
        tracep->declBit(c+11,"SimTop axi_rw w_state_resp", false,-1);
        tracep->declBit(c+42,"SimTop axi_rw r_state_idle", false,-1);
        tracep->declBit(c+12,"SimTop axi_rw r_state_addr", false,-1);
        tracep->declBit(c+13,"SimTop axi_rw r_state_read", false,-1);
        tracep->declBus(c+43,"SimTop axi_rw len", false,-1, 7,0);
        tracep->declBit(c+1120,"SimTop axi_rw len_reset", false,-1);
        tracep->declBit(c+1121,"SimTop axi_rw len_incr_en", false,-1);
        tracep->declBus(c+1145,"SimTop axi_rw ALIGNED_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1146,"SimTop axi_rw OFFSET_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1145,"SimTop axi_rw AXI_SIZE", false,-1, 31,0);
        tracep->declBus(c+1147,"SimTop axi_rw MASK_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1142,"SimTop axi_rw TRANS_LEN", false,-1, 31,0);
        tracep->declBus(c+1130,"SimTop axi_rw BLOCK_TRANS", false,-1, 0,0);
        tracep->declBit(c+44,"SimTop axi_rw aligned", false,-1);
        tracep->declBit(c+1133,"SimTop axi_rw size_b", false,-1);
        tracep->declBit(c+1133,"SimTop axi_rw size_h", false,-1);
        tracep->declBit(c+1135,"SimTop axi_rw size_w", false,-1);
        tracep->declBit(c+1133,"SimTop axi_rw size_d", false,-1);
        tracep->declBus(c+45,"SimTop axi_rw addr_op1", false,-1, 3,0);
        tracep->declBus(c+1148,"SimTop axi_rw addr_op2", false,-1, 3,0);
        tracep->declBus(c+46,"SimTop axi_rw addr_end", false,-1, 3,0);
        tracep->declBit(c+47,"SimTop axi_rw overstep", false,-1);
        tracep->declBus(c+6,"SimTop axi_rw axi_len", false,-1, 7,0);
        tracep->declBus(c+1131,"SimTop axi_rw axi_size", false,-1, 2,0);
        tracep->declQuad(c+4,"SimTop axi_rw axi_addr", false,-1, 63,0);
        tracep->declBus(c+48,"SimTop axi_rw aligned_offset_l", false,-1, 5,0);
        tracep->declBus(c+49,"SimTop axi_rw aligned_offset_h", false,-1, 5,0);
        tracep->declArray(c+50,"SimTop axi_rw mask", false,-1, 127,0);
        tracep->declQuad(c+54,"SimTop axi_rw mask_l", false,-1, 63,0);
        tracep->declQuad(c+56,"SimTop axi_rw mask_h", false,-1, 63,0);
        tracep->declBus(c+1129,"SimTop axi_rw axi_id", false,-1, 3,0);
        tracep->declBus(c+1133,"SimTop axi_rw axi_user", false,-1, 0,0);
        tracep->declBit(c+26,"SimTop axi_rw rw_ready", false,-1);
        tracep->declBit(c+1036,"SimTop axi_rw rw_ready_nxt", false,-1);
        tracep->declBit(c+1122,"SimTop axi_rw rw_ready_en", false,-1);
        tracep->declBus(c+18,"SimTop axi_rw rw_resp", false,-1, 1,0);
        tracep->declBit(c+1123,"SimTop axi_rw rw_resp_nxt", false,-1);
        tracep->declBit(c+1036,"SimTop axi_rw resp_en", false,-1);
        tracep->declQuad(c+1124,"SimTop axi_rw axi_r_data_l", false,-1, 63,0);
        tracep->declQuad(c+1126,"SimTop axi_rw axi_r_data_h", false,-1, 63,0);
        tracep->declBit(c+1041,"SimTop arbitrating clk", false,-1);
        tracep->declBit(c+1114,"SimTop arbitrating rst", false,-1);
        tracep->declBit(c+1135,"SimTop arbitrating if_valid_i", false,-1);
        tracep->declQuad(c+14,"SimTop arbitrating if_data_read_o", false,-1, 63,0);
        tracep->declQuad(c+16,"SimTop arbitrating if_addr_i", false,-1, 63,0);
        tracep->declBus(c+1139,"SimTop arbitrating if_size_i", false,-1, 1,0);
        tracep->declBit(c+1133,"SimTop arbitrating if_req_i", false,-1);
        tracep->declBit(c+19,"SimTop arbitrating mem_valid_i", false,-1);
        tracep->declQuad(c+21,"SimTop arbitrating mem_addr_i", false,-1, 63,0);
        tracep->declQuad(c+23,"SimTop arbitrating mem_data_read_o", false,-1, 63,0);
        tracep->declQuad(c+8,"SimTop arbitrating mem_data_write_i", false,-1, 63,0);
        tracep->declQuad(c+58,"SimTop arbitrating mem_write_mask_axi", false,-1, 63,0);
        tracep->declBit(c+20,"SimTop arbitrating mem_req_i", false,-1);
        tracep->declBit(c+25,"SimTop arbitrating rw_valid_o", false,-1);
        tracep->declBit(c+26,"SimTop arbitrating rw_ready_i", false,-1);
        tracep->declBit(c+27,"SimTop arbitrating rw_req_o", false,-1);
        tracep->declQuad(c+1112,"SimTop arbitrating rw_data_read_i", false,-1, 63,0);
        tracep->declQuad(c+8,"SimTop arbitrating rw_data_write_o", false,-1, 63,0);
        tracep->declQuad(c+28,"SimTop arbitrating rw_addr_o", false,-1, 63,0);
        tracep->declBus(c+1139,"SimTop arbitrating rw_size_o", false,-1, 1,0);
        tracep->declBit(c+1036,"SimTop arbitrating rw_trans_done_i", false,-1);
        tracep->declBit(c+30,"SimTop arbitrating axi_stall_o", false,-1);
        tracep->declBus(c+1143,"SimTop arbitrating IDLE", false,-1, 1,0);
        tracep->declBus(c+1132,"SimTop arbitrating MEM", false,-1, 1,0);
        tracep->declBus(c+1139,"SimTop arbitrating IF", false,-1, 1,0);
        tracep->declBus(c+60,"SimTop arbitrating arb_state", false,-1, 1,0);
        tracep->declBit(c+61,"SimTop arbitrating state_idle", false,-1);
        tracep->declBit(c+62,"SimTop arbitrating state_mem", false,-1);
        tracep->declBit(c+63,"SimTop arbitrating state_if", false,-1);
        tracep->declBit(c+64,"SimTop arbitrating zza_pulse", false,-1);
        tracep->declBit(c+65,"SimTop arbitrating zza_count", false,-1);
        tracep->declBit(c+66,"SimTop arbitrating rw_valid_pre", false,-1);
        tracep->declBit(c+1041,"SimTop u_cpu clock", false,-1);
        tracep->declBit(c+1042,"SimTop u_cpu reset", false,-1);
        tracep->declBit(c+30,"SimTop u_cpu axi_stall_i", false,-1);
        tracep->declBit(c+19,"SimTop u_cpu mem_valid", false,-1);
        tracep->declBit(c+20,"SimTop u_cpu mem_req", false,-1);
        tracep->declQuad(c+21,"SimTop u_cpu mem_addr", false,-1, 63,0);
        tracep->declQuad(c+23,"SimTop u_cpu mem_data_read", false,-1, 63,0);
        tracep->declQuad(c+8,"SimTop u_cpu mem_data_write", false,-1, 63,0);
        tracep->declBus(c+10,"SimTop u_cpu mem_write_mask_axi", false,-1, 7,0);
        tracep->declBit(c+1135,"SimTop u_cpu if_valid", false,-1);
        tracep->declBit(c+1138,"SimTop u_cpu if_ready", false,-1);
        tracep->declQuad(c+14,"SimTop u_cpu if_data_read", false,-1, 63,0);
        tracep->declQuad(c+16,"SimTop u_cpu if_addr", false,-1, 63,0);
        tracep->declBus(c+1139,"SimTop u_cpu if_size", false,-1, 1,0);
        tracep->declBit(c+1133,"SimTop u_cpu if_req", false,-1);
        tracep->declBus(c+18,"SimTop u_cpu if_resp", false,-1, 1,0);
        tracep->declBit(c+1041,"SimTop u_cpu clk", false,-1);
        tracep->declBit(c+1114,"SimTop u_cpu rst", false,-1);
        tracep->declQuad(c+67,"SimTop u_cpu pc_id", false,-1, 63,0);
        tracep->declQuad(c+1149,"SimTop u_cpu pc_if", false,-1, 63,0);
        tracep->declQuad(c+69,"SimTop u_cpu pc_ex", false,-1, 63,0);
        tracep->declQuad(c+71,"SimTop u_cpu pc_mem", false,-1, 63,0);
        tracep->declQuad(c+73,"SimTop u_cpu pc_wb", false,-1, 63,0);
        tracep->declBus(c+75,"SimTop u_cpu inst_id", false,-1, 31,0);
        tracep->declBus(c+76,"SimTop u_cpu inst_if", false,-1, 31,0);
        tracep->declBus(c+77,"SimTop u_cpu inst_ex", false,-1, 31,0);
        tracep->declBus(c+78,"SimTop u_cpu inst_mem", false,-1, 31,0);
        tracep->declBus(c+79,"SimTop u_cpu inst_wb", false,-1, 31,0);
        tracep->declBus(c+80,"SimTop u_cpu optype", false,-1, 2,0);
        tracep->declBit(c+81,"SimTop u_cpu npc_op_id", false,-1);
        tracep->declBit(c+82,"SimTop u_cpu npc_op_ex", false,-1);
        tracep->declBit(c+83,"SimTop u_cpu npc_op_mem", false,-1);
        tracep->declBit(c+84,"SimTop u_cpu npc_regimm_id", false,-1);
        tracep->declBit(c+85,"SimTop u_cpu npc_regimm_ex", false,-1);
        tracep->declBit(c+86,"SimTop u_cpu npc_regimm_mem", false,-1);
        tracep->declBit(c+87,"SimTop u_cpu reg1_ren", false,-1);
        tracep->declBit(c+88,"SimTop u_cpu reg2_ren", false,-1);
        tracep->declBit(c+89,"SimTop u_cpu rf_wen", false,-1);
        tracep->declBit(c+90,"SimTop u_cpu wen_id", false,-1);
        tracep->declBit(c+91,"SimTop u_cpu wen_ex", false,-1);
        tracep->declBit(c+92,"SimTop u_cpu wen_mem", false,-1);
        tracep->declBit(c+93,"SimTop u_cpu wen_wb", false,-1);
        tracep->declBus(c+94,"SimTop u_cpu alu_op_id", false,-1, 4,0);
        tracep->declBus(c+95,"SimTop u_cpu alu_op_ex", false,-1, 4,0);
        tracep->declBit(c+96,"SimTop u_cpu alu_only_imm_id", false,-1);
        tracep->declBit(c+97,"SimTop u_cpu alu_only_imm_ex", false,-1);
        tracep->declBit(c+98,"SimTop u_cpu alu_pc_reg1_id", false,-1);
        tracep->declBit(c+99,"SimTop u_cpu alu_pc_reg1_ex", false,-1);
        tracep->declBit(c+100,"SimTop u_cpu alu_imm_reg2_id", false,-1);
        tracep->declBit(c+101,"SimTop u_cpu alu_imm_reg2_ex", false,-1);
        tracep->declBus(c+102,"SimTop u_cpu rd_id", false,-1, 4,0);
        tracep->declBus(c+103,"SimTop u_cpu rd_ex", false,-1, 4,0);
        tracep->declBus(c+104,"SimTop u_cpu rd_mem", false,-1, 4,0);
        tracep->declBus(c+105,"SimTop u_cpu rd_wb", false,-1, 4,0);
        tracep->declBus(c+106,"SimTop u_cpu rs1_id", false,-1, 4,0);
        tracep->declBus(c+107,"SimTop u_cpu rs1_ex", false,-1, 4,0);
        tracep->declBus(c+108,"SimTop u_cpu rs2_id", false,-1, 4,0);
        tracep->declBus(c+109,"SimTop u_cpu rs2_ex", false,-1, 4,0);
        tracep->declBus(c+110,"SimTop u_cpu rs2_mem", false,-1, 4,0);
        tracep->declQuad(c+111,"SimTop u_cpu reg10", false,-1, 63,0);
        tracep->declBit(c+113,"SimTop u_cpu read_mem_en_id", false,-1);
        tracep->declBit(c+114,"SimTop u_cpu read_mem_en_ex", false,-1);
        tracep->declBit(c+115,"SimTop u_cpu read_mem_en_mem", false,-1);
        tracep->declBit(c+116,"SimTop u_cpu read_mem_en_wb", false,-1);
        tracep->declBit(c+117,"SimTop u_cpu write_mem_en_id", false,-1);
        tracep->declBit(c+118,"SimTop u_cpu write_mem_en_ex", false,-1);
        tracep->declBit(c+20,"SimTop u_cpu write_mem_en_mem", false,-1);
        tracep->declBit(c+119,"SimTop u_cpu write_mem_en_wb", false,-1);
        tracep->declBus(c+120,"SimTop u_cpu mem_ctrl_id", false,-1, 3,0);
        tracep->declBus(c+121,"SimTop u_cpu mem_ctrl_ex", false,-1, 3,0);
        tracep->declBus(c+122,"SimTop u_cpu mem_ctrl_mem", false,-1, 3,0);
        tracep->declBus(c+123,"SimTop u_cpu value_width_ctrl_id", false,-1, 3,0);
        tracep->declBus(c+124,"SimTop u_cpu value_width_ctrl_ex", false,-1, 3,0);
        tracep->declBus(c+125,"SimTop u_cpu branch_type_id", false,-1, 2,0);
        tracep->declBus(c+126,"SimTop u_cpu branch_type_ex", false,-1, 2,0);
        tracep->declBus(c+127,"SimTop u_cpu branch_type_mem", false,-1, 2,0);
        tracep->declBus(c+128,"SimTop u_cpu branch_type_wb", false,-1, 2,0);
        tracep->declBit(c+129,"SimTop u_cpu operator_a_w_id", false,-1);
        tracep->declBit(c+130,"SimTop u_cpu operator_a_w_ex", false,-1);
        tracep->declBit(c+131,"SimTop u_cpu operator_a_w_s_id", false,-1);
        tracep->declBit(c+132,"SimTop u_cpu operator_a_w_s_ex", false,-1);
        tracep->declBit(c+133,"SimTop u_cpu operator_b_w_id", false,-1);
        tracep->declBit(c+134,"SimTop u_cpu operator_b_w_ex", false,-1);
        tracep->declBit(c+135,"SimTop u_cpu if_inst_sll_id", false,-1);
        tracep->declBit(c+136,"SimTop u_cpu if_inst_sll_ex", false,-1);
        tracep->declBit(c+1151,"SimTop u_cpu ebreak_id", false,-1);
        tracep->declBit(c+137,"SimTop u_cpu ebreak_ex", false,-1);
        tracep->declBit(c+138,"SimTop u_cpu ebreak_mem", false,-1);
        tracep->declBit(c+139,"SimTop u_cpu ebreak_wb", false,-1);
        tracep->declQuad(c+140,"SimTop u_cpu reg2_value_forwardb_ex", false,-1, 63,0);
        tracep->declQuad(c+23,"SimTop u_cpu read_mem_value", false,-1, 63,0);
        tracep->declQuad(c+8,"SimTop u_cpu reg2_to_mem_forward", false,-1, 63,0);
        tracep->declQuad(c+142,"SimTop u_cpu mem_write_mask", false,-1, 63,0);
        tracep->declQuad(c+144,"SimTop u_cpu reg_write_value_mem", false,-1, 63,0);
        tracep->declQuad(c+146,"SimTop u_cpu pc", false,-1, 63,0);
        tracep->declQuad(c+148,"SimTop u_cpu npc", false,-1, 63,0);
        tracep->declQuad(c+150,"SimTop u_cpu npc_ex", false,-1, 63,0);
        tracep->declQuad(c+152,"SimTop u_cpu npc_mem", false,-1, 63,0);
        tracep->declQuad(c+154,"SimTop u_cpu npc_wb", false,-1, 63,0);
        tracep->declQuad(c+156,"SimTop u_cpu reg1_value_id", false,-1, 63,0);
        tracep->declQuad(c+158,"SimTop u_cpu reg1_value_ex", false,-1, 63,0);
        tracep->declQuad(c+160,"SimTop u_cpu reg2_value_id", false,-1, 63,0);
        tracep->declQuad(c+162,"SimTop u_cpu reg2_value_ex", false,-1, 63,0);
        tracep->declQuad(c+164,"SimTop u_cpu reg2_value_mem", false,-1, 63,0);
        tracep->declQuad(c+166,"SimTop u_cpu reg_write_value_wb", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+168+i*2,"SimTop u_cpu regs_gpr", true,(i+0), 63,0);}}
        tracep->declQuad(c+232,"SimTop u_cpu value", false,-1, 63,0);
        tracep->declQuad(c+234,"SimTop u_cpu imm_id", false,-1, 63,0);
        tracep->declQuad(c+236,"SimTop u_cpu imm_ex", false,-1, 63,0);
        tracep->declQuad(c+238,"SimTop u_cpu sext_read_mem_value_mem", false,-1, 63,0);
        tracep->declQuad(c+240,"SimTop u_cpu sext_read_mem_value_wb", false,-1, 63,0);
        tracep->declQuad(c+242,"SimTop u_cpu sext_value_ex", false,-1, 63,0);
        tracep->declQuad(c+244,"SimTop u_cpu sext_value_mem", false,-1, 63,0);
        tracep->declQuad(c+246,"SimTop u_cpu sext_value_wb", false,-1, 63,0);
        tracep->declBit(c+248,"SimTop u_cpu IF_Flush", false,-1);
        tracep->declBus(c+249,"SimTop u_cpu Forward_a", false,-1, 1,0);
        tracep->declBus(c+250,"SimTop u_cpu Forward_b", false,-1, 1,0);
        tracep->declBus(c+251,"SimTop u_cpu Forward_c", false,-1, 1,0);
        tracep->declBus(c+252,"SimTop u_cpu Forward_d", false,-1, 1,0);
        tracep->declBit(c+253,"SimTop u_cpu Forward_store", false,-1);
        tracep->declBit(c+254,"SimTop u_cpu pipeline_stall", false,-1);
        tracep->declBit(c+255,"SimTop u_cpu pipeline_stall_ex", false,-1);
        tracep->declBit(c+256,"SimTop u_cpu pipeline_stall_mem", false,-1);
        tracep->declBit(c+257,"SimTop u_cpu pipeline_stall_wb", false,-1);
        tracep->declBit(c+258,"SimTop u_cpu pc_wen", false,-1);
        tracep->declQuad(c+73,"SimTop u_cpu pc_3", false,-1, 63,0);
        tracep->declBus(c+79,"SimTop u_cpu inst_3", false,-1, 31,0);
        tracep->declQuad(c+166,"SimTop u_cpu rd_data_3", false,-1, 63,0);
        tracep->declBus(c+105,"SimTop u_cpu rd_w_addr_3", false,-1, 4,0);
        tracep->declBit(c+93,"SimTop u_cpu rd_w_ena_3", false,-1);
        tracep->declBit(c+259,"SimTop u_cpu inst_valid_3", false,-1);
        tracep->declBit(c+893,"SimTop u_cpu cmt_wen", false,-1);
        tracep->declBus(c+894,"SimTop u_cpu cmt_wdest", false,-1, 7,0);
        tracep->declQuad(c+895,"SimTop u_cpu cmt_wdata", false,-1, 63,0);
        tracep->declQuad(c+897,"SimTop u_cpu cmt_pc", false,-1, 63,0);
        tracep->declBus(c+899,"SimTop u_cpu cmt_inst", false,-1, 31,0);
        tracep->declBit(c+900,"SimTop u_cpu cmt_valid", false,-1);
        tracep->declBit(c+901,"SimTop u_cpu trap", false,-1);
        tracep->declBus(c+902,"SimTop u_cpu trap_code", false,-1, 7,0);
        tracep->declQuad(c+903,"SimTop u_cpu cycleCnt", false,-1, 63,0);
        tracep->declQuad(c+905,"SimTop u_cpu instrCnt", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+907+i*2,"SimTop u_cpu regs_diff", true,(i+0), 63,0);}}
        tracep->declBit(c+1041,"SimTop u_cpu IFU0 clk", false,-1);
        tracep->declBit(c+1114,"SimTop u_cpu IFU0 rst", false,-1);
        tracep->declQuad(c+146,"SimTop u_cpu IFU0 pc", false,-1, 63,0);
        tracep->declBus(c+76,"SimTop u_cpu IFU0 inst", false,-1, 31,0);
        tracep->declBit(c+1135,"SimTop u_cpu IFU0 if_valid_o", false,-1);
        tracep->declBit(c+1138,"SimTop u_cpu IFU0 if_ready_i", false,-1);
        tracep->declQuad(c+14,"SimTop u_cpu IFU0 if_data_read_i", false,-1, 63,0);
        tracep->declQuad(c+16,"SimTop u_cpu IFU0 if_addr_o", false,-1, 63,0);
        tracep->declBus(c+1139,"SimTop u_cpu IFU0 if_size_o", false,-1, 1,0);
        tracep->declBit(c+1133,"SimTop u_cpu IFU0 if_req_o", false,-1);
        tracep->declBit(c+30,"SimTop u_cpu IFU0 axi_stall_i", false,-1);
        tracep->declQuad(c+14,"SimTop u_cpu IFU0 rdata", false,-1, 63,0);
        tracep->declBit(c+260,"SimTop u_cpu IFU0 handshake_if", false,-1);
        tracep->declBit(c+1041,"SimTop u_cpu pipe_if_id_reg clk", false,-1);
        tracep->declQuad(c+146,"SimTop u_cpu pipe_if_id_reg pc_if", false,-1, 63,0);
        tracep->declBus(c+76,"SimTop u_cpu pipe_if_id_reg inst_if", false,-1, 31,0);
        tracep->declBit(c+254,"SimTop u_cpu pipe_if_id_reg pipeline_stall", false,-1);
        tracep->declBit(c+248,"SimTop u_cpu pipe_if_id_reg IF_Flush", false,-1);
        tracep->declBit(c+30,"SimTop u_cpu pipe_if_id_reg axi_stall_i", false,-1);
        tracep->declQuad(c+67,"SimTop u_cpu pipe_if_id_reg pc_id", false,-1, 63,0);
        tracep->declBus(c+75,"SimTop u_cpu pipe_if_id_reg inst_id", false,-1, 31,0);
        tracep->declBit(c+1041,"SimTop u_cpu IDU0 clk", false,-1);
        tracep->declBit(c+1114,"SimTop u_cpu IDU0 rst", false,-1);
        tracep->declBus(c+75,"SimTop u_cpu IDU0 inst", false,-1, 31,0);
        tracep->declQuad(c+67,"SimTop u_cpu IDU0 pc", false,-1, 63,0);
        tracep->declQuad(c+111,"SimTop u_cpu IDU0 reg10", false,-1, 63,0);
        tracep->declBit(c+30,"SimTop u_cpu IDU0 axi_stall_i", false,-1);
        tracep->declBus(c+80,"SimTop u_cpu IDU0 optype", false,-1, 2,0);
        tracep->declBit(c+81,"SimTop u_cpu IDU0 npc_op", false,-1);
        tracep->declBit(c+84,"SimTop u_cpu IDU0 npc_regimm", false,-1);
        tracep->declBit(c+87,"SimTop u_cpu IDU0 reg1_ren", false,-1);
        tracep->declBit(c+88,"SimTop u_cpu IDU0 reg2_ren", false,-1);
        tracep->declBit(c+90,"SimTop u_cpu IDU0 wen", false,-1);
        tracep->declBit(c+89,"SimTop u_cpu IDU0 rf_wen", false,-1);
        tracep->declBus(c+94,"SimTop u_cpu IDU0 alu_op", false,-1, 4,0);
        tracep->declBit(c+96,"SimTop u_cpu IDU0 alu_only_imm", false,-1);
        tracep->declBit(c+98,"SimTop u_cpu IDU0 alu_pc_reg1", false,-1);
        tracep->declBit(c+100,"SimTop u_cpu IDU0 alu_imm_reg2", false,-1);
        tracep->declBus(c+102,"SimTop u_cpu IDU0 rd", false,-1, 4,0);
        tracep->declBus(c+106,"SimTop u_cpu IDU0 rs1", false,-1, 4,0);
        tracep->declBus(c+108,"SimTop u_cpu IDU0 rs2", false,-1, 4,0);
        tracep->declBit(c+113,"SimTop u_cpu IDU0 read_mem_en", false,-1);
        tracep->declBit(c+117,"SimTop u_cpu IDU0 write_mem_en", false,-1);
        tracep->declBus(c+120,"SimTop u_cpu IDU0 mem_ctrl", false,-1, 3,0);
        tracep->declBus(c+123,"SimTop u_cpu IDU0 value_width_ctrl", false,-1, 3,0);
        tracep->declBus(c+125,"SimTop u_cpu IDU0 branch_type", false,-1, 2,0);
        tracep->declBit(c+129,"SimTop u_cpu IDU0 operator_a_w", false,-1);
        tracep->declBit(c+131,"SimTop u_cpu IDU0 operator_a_w_s", false,-1);
        tracep->declBit(c+133,"SimTop u_cpu IDU0 operator_b_w", false,-1);
        tracep->declBit(c+135,"SimTop u_cpu IDU0 if_inst_sll", false,-1);
        tracep->declBus(c+261,"SimTop u_cpu IDU0 opcode", false,-1, 6,0);
        tracep->declBus(c+262,"SimTop u_cpu IDU0 func3", false,-1, 2,0);
        tracep->declBit(c+263,"SimTop u_cpu IDU0 inst_FLUSH", false,-1);
        tracep->declBit(c+264,"SimTop u_cpu IDU0 inst_addi", false,-1);
        tracep->declBit(c+265,"SimTop u_cpu IDU0 inst_xor", false,-1);
        tracep->declBit(c+266,"SimTop u_cpu IDU0 inst_xori", false,-1);
        tracep->declBit(c+267,"SimTop u_cpu IDU0 inst_ori", false,-1);
        tracep->declBit(c+268,"SimTop u_cpu IDU0 inst_addiw", false,-1);
        tracep->declBit(c+269,"SimTop u_cpu IDU0 inst_addw", false,-1);
        tracep->declBit(c+270,"SimTop u_cpu IDU0 inst_subw", false,-1);
        tracep->declBit(c+271,"SimTop u_cpu IDU0 inst_mul", false,-1);
        tracep->declBit(c+272,"SimTop u_cpu IDU0 inst_mulw", false,-1);
        tracep->declBit(c+273,"SimTop u_cpu IDU0 inst_divw", false,-1);
        tracep->declBit(c+274,"SimTop u_cpu IDU0 inst_divuw", false,-1);
        tracep->declBit(c+275,"SimTop u_cpu IDU0 inst_remw", false,-1);
        tracep->declBit(c+276,"SimTop u_cpu IDU0 inst_remuw", false,-1);
        tracep->declBit(c+277,"SimTop u_cpu IDU0 inst_sub", false,-1);
        tracep->declBit(c+278,"SimTop u_cpu IDU0 inst_add", false,-1);
        tracep->declBit(c+279,"SimTop u_cpu IDU0 inst_sll", false,-1);
        tracep->declBit(c+280,"SimTop u_cpu IDU0 inst_slli", false,-1);
        tracep->declBit(c+281,"SimTop u_cpu IDU0 inst_slliw", false,-1);
        tracep->declBit(c+282,"SimTop u_cpu IDU0 inst_srli", false,-1);
        tracep->declBit(c+283,"SimTop u_cpu IDU0 inst_srliw", false,-1);
        tracep->declBit(c+284,"SimTop u_cpu IDU0 inst_andi", false,-1);
        tracep->declBit(c+285,"SimTop u_cpu IDU0 inst_and", false,-1);
        tracep->declBit(c+286,"SimTop u_cpu IDU0 inst_or", false,-1);
        tracep->declBit(c+287,"SimTop u_cpu IDU0 inst_srai", false,-1);
        tracep->declBit(c+288,"SimTop u_cpu IDU0 inst_sraiw", false,-1);
        tracep->declBit(c+289,"SimTop u_cpu IDU0 inst_sra", false,-1);
        tracep->declBit(c+290,"SimTop u_cpu IDU0 inst_sraw", false,-1);
        tracep->declBit(c+291,"SimTop u_cpu IDU0 inst_srl", false,-1);
        tracep->declBit(c+292,"SimTop u_cpu IDU0 inst_srlw", false,-1);
        tracep->declBit(c+293,"SimTop u_cpu IDU0 inst_sllw", false,-1);
        tracep->declBit(c+96,"SimTop u_cpu IDU0 inst_lui", false,-1);
        tracep->declBit(c+294,"SimTop u_cpu IDU0 inst_auipc", false,-1);
        tracep->declBit(c+295,"SimTop u_cpu IDU0 inst_jal", false,-1);
        tracep->declBit(c+84,"SimTop u_cpu IDU0 inst_jalr", false,-1);
        tracep->declBit(c+296,"SimTop u_cpu IDU0 inst_slti", false,-1);
        tracep->declBit(c+297,"SimTop u_cpu IDU0 inst_sltiu", false,-1);
        tracep->declBit(c+298,"SimTop u_cpu IDU0 inst_sltu", false,-1);
        tracep->declBit(c+299,"SimTop u_cpu IDU0 inst_slt", false,-1);
        tracep->declBit(c+300,"SimTop u_cpu IDU0 inst_beq", false,-1);
        tracep->declBit(c+301,"SimTop u_cpu IDU0 inst_bne", false,-1);
        tracep->declBit(c+302,"SimTop u_cpu IDU0 inst_bge", false,-1);
        tracep->declBit(c+303,"SimTop u_cpu IDU0 inst_bgeu", false,-1);
        tracep->declBit(c+304,"SimTop u_cpu IDU0 inst_blt", false,-1);
        tracep->declBit(c+305,"SimTop u_cpu IDU0 inst_bltu", false,-1);
        tracep->declBit(c+306,"SimTop u_cpu IDU0 inst_sd", false,-1);
        tracep->declBit(c+307,"SimTop u_cpu IDU0 inst_sw", false,-1);
        tracep->declBit(c+308,"SimTop u_cpu IDU0 inst_sh", false,-1);
        tracep->declBit(c+309,"SimTop u_cpu IDU0 inst_sb", false,-1);
        tracep->declBit(c+310,"SimTop u_cpu IDU0 inst_lb", false,-1);
        tracep->declBit(c+311,"SimTop u_cpu IDU0 inst_lbu", false,-1);
        tracep->declBit(c+312,"SimTop u_cpu IDU0 inst_lhu", false,-1);
        tracep->declBit(c+313,"SimTop u_cpu IDU0 inst_lw", false,-1);
        tracep->declBit(c+314,"SimTop u_cpu IDU0 inst_lwu", false,-1);
        tracep->declBit(c+315,"SimTop u_cpu IDU0 inst_lh", false,-1);
        tracep->declBit(c+316,"SimTop u_cpu IDU0 inst_ld", false,-1);
        tracep->declBit(c+317,"SimTop u_cpu IDU0 inst_ebreak", false,-1);
        tracep->declBit(c+318,"SimTop u_cpu IDU0 inst_difftest_3", false,-1);
        tracep->declBit(c+319,"SimTop u_cpu IDU0 if_inst_correct", false,-1);
        tracep->declBit(c+1041,"SimTop u_cpu pipe_id_ex_reg clk", false,-1);
        tracep->declBit(c+1114,"SimTop u_cpu pipe_id_ex_reg rst", false,-1);
        tracep->declQuad(c+146,"SimTop u_cpu pipe_id_ex_reg pc_if", false,-1, 63,0);
        tracep->declBus(c+75,"SimTop u_cpu pipe_id_ex_reg inst_id", false,-1, 31,0);
        tracep->declQuad(c+148,"SimTop u_cpu pipe_id_ex_reg npc_id", false,-1, 63,0);
        tracep->declQuad(c+156,"SimTop u_cpu pipe_id_ex_reg reg1_value_id", false,-1, 63,0);
        tracep->declQuad(c+160,"SimTop u_cpu pipe_id_ex_reg reg2_value_id", false,-1, 63,0);
        tracep->declBit(c+1151,"SimTop u_cpu pipe_id_ex_reg ebreak_id", false,-1);
        tracep->declQuad(c+67,"SimTop u_cpu pipe_id_ex_reg pc_id", false,-1, 63,0);
        tracep->declBus(c+106,"SimTop u_cpu pipe_id_ex_reg rs1_id", false,-1, 4,0);
        tracep->declBus(c+108,"SimTop u_cpu pipe_id_ex_reg rs2_id", false,-1, 4,0);
        tracep->declBus(c+102,"SimTop u_cpu pipe_id_ex_reg rd_id", false,-1, 4,0);
        tracep->declQuad(c+234,"SimTop u_cpu pipe_id_ex_reg imm_id", false,-1, 63,0);
        tracep->declBit(c+90,"SimTop u_cpu pipe_id_ex_reg wen_id", false,-1);
        tracep->declBit(c+81,"SimTop u_cpu pipe_id_ex_reg npc_op_id", false,-1);
        tracep->declBit(c+84,"SimTop u_cpu pipe_id_ex_reg npc_regimm_id", false,-1);
        tracep->declBus(c+94,"SimTop u_cpu pipe_id_ex_reg alu_op_id", false,-1, 4,0);
        tracep->declBit(c+96,"SimTop u_cpu pipe_id_ex_reg alu_only_imm_id", false,-1);
        tracep->declBit(c+98,"SimTop u_cpu pipe_id_ex_reg alu_pc_reg1_id", false,-1);
        tracep->declBit(c+100,"SimTop u_cpu pipe_id_ex_reg alu_imm_reg2_id", false,-1);
        tracep->declBus(c+123,"SimTop u_cpu pipe_id_ex_reg value_width_ctrl_id", false,-1, 3,0);
        tracep->declBus(c+120,"SimTop u_cpu pipe_id_ex_reg mem_ctrl_id", false,-1, 3,0);
        tracep->declBus(c+125,"SimTop u_cpu pipe_id_ex_reg branch_type_id", false,-1, 2,0);
        tracep->declBit(c+129,"SimTop u_cpu pipe_id_ex_reg operator_a_w_id", false,-1);
        tracep->declBit(c+131,"SimTop u_cpu pipe_id_ex_reg operator_a_w_s_id", false,-1);
        tracep->declBit(c+133,"SimTop u_cpu pipe_id_ex_reg operator_b_w_id", false,-1);
        tracep->declBit(c+135,"SimTop u_cpu pipe_id_ex_reg if_inst_sll_id", false,-1);
        tracep->declBit(c+113,"SimTop u_cpu pipe_id_ex_reg read_mem_en_id", false,-1);
        tracep->declBit(c+117,"SimTop u_cpu pipe_id_ex_reg write_mem_en_id", false,-1);
        tracep->declBit(c+254,"SimTop u_cpu pipe_id_ex_reg pipeline_stall", false,-1);
        tracep->declBit(c+30,"SimTop u_cpu pipe_id_ex_reg axi_stall_i", false,-1);
        tracep->declBus(c+77,"SimTop u_cpu pipe_id_ex_reg inst_ex", false,-1, 31,0);
        tracep->declQuad(c+150,"SimTop u_cpu pipe_id_ex_reg npc_ex", false,-1, 63,0);
        tracep->declQuad(c+158,"SimTop u_cpu pipe_id_ex_reg reg1_value_ex", false,-1, 63,0);
        tracep->declQuad(c+162,"SimTop u_cpu pipe_id_ex_reg reg2_value_ex", false,-1, 63,0);
        tracep->declBit(c+137,"SimTop u_cpu pipe_id_ex_reg ebreak_ex", false,-1);
        tracep->declQuad(c+69,"SimTop u_cpu pipe_id_ex_reg pc_ex", false,-1, 63,0);
        tracep->declBus(c+107,"SimTop u_cpu pipe_id_ex_reg rs1_ex", false,-1, 4,0);
        tracep->declBus(c+109,"SimTop u_cpu pipe_id_ex_reg rs2_ex", false,-1, 4,0);
        tracep->declBus(c+103,"SimTop u_cpu pipe_id_ex_reg rd_ex", false,-1, 4,0);
        tracep->declQuad(c+236,"SimTop u_cpu pipe_id_ex_reg imm_ex", false,-1, 63,0);
        tracep->declBit(c+91,"SimTop u_cpu pipe_id_ex_reg wen_ex", false,-1);
        tracep->declBit(c+82,"SimTop u_cpu pipe_id_ex_reg npc_op_ex", false,-1);
        tracep->declBit(c+85,"SimTop u_cpu pipe_id_ex_reg npc_regimm_ex", false,-1);
        tracep->declBus(c+95,"SimTop u_cpu pipe_id_ex_reg alu_op_ex", false,-1, 4,0);
        tracep->declBit(c+97,"SimTop u_cpu pipe_id_ex_reg alu_only_imm_ex", false,-1);
        tracep->declBit(c+99,"SimTop u_cpu pipe_id_ex_reg alu_pc_reg1_ex", false,-1);
        tracep->declBit(c+101,"SimTop u_cpu pipe_id_ex_reg alu_imm_reg2_ex", false,-1);
        tracep->declBus(c+124,"SimTop u_cpu pipe_id_ex_reg value_width_ctrl_ex", false,-1, 3,0);
        tracep->declBus(c+121,"SimTop u_cpu pipe_id_ex_reg mem_ctrl_ex", false,-1, 3,0);
        tracep->declBus(c+126,"SimTop u_cpu pipe_id_ex_reg branch_type_ex", false,-1, 2,0);
        tracep->declBit(c+130,"SimTop u_cpu pipe_id_ex_reg operator_a_w_ex", false,-1);
        tracep->declBit(c+132,"SimTop u_cpu pipe_id_ex_reg operator_a_w_s_ex", false,-1);
        tracep->declBit(c+134,"SimTop u_cpu pipe_id_ex_reg operator_b_w_ex", false,-1);
        tracep->declBit(c+136,"SimTop u_cpu pipe_id_ex_reg if_inst_sll_ex", false,-1);
        tracep->declBit(c+114,"SimTop u_cpu pipe_id_ex_reg read_mem_en_ex", false,-1);
        tracep->declBit(c+118,"SimTop u_cpu pipe_id_ex_reg write_mem_en_ex", false,-1);
        tracep->declBit(c+255,"SimTop u_cpu pipe_id_ex_reg pipeline_stall_ex", false,-1);
        tracep->declQuad(c+158,"SimTop u_cpu alu_module reg1", false,-1, 63,0);
        tracep->declQuad(c+162,"SimTop u_cpu alu_module reg2", false,-1, 63,0);
        tracep->declQuad(c+69,"SimTop u_cpu alu_module pc", false,-1, 63,0);
        tracep->declQuad(c+236,"SimTop u_cpu alu_module imm", false,-1, 63,0);
        tracep->declBit(c+82,"SimTop u_cpu alu_module npc_op", false,-1);
        tracep->declBus(c+95,"SimTop u_cpu alu_module alu_op", false,-1, 4,0);
        tracep->declBit(c+97,"SimTop u_cpu alu_module alu_only_imm", false,-1);
        tracep->declBit(c+99,"SimTop u_cpu alu_module alu_pc_reg1", false,-1);
        tracep->declBit(c+101,"SimTop u_cpu alu_module alu_imm_reg2", false,-1);
        tracep->declBus(c+126,"SimTop u_cpu alu_module branch_type", false,-1, 2,0);
        tracep->declBit(c+130,"SimTop u_cpu alu_module operator_a_w", false,-1);
        tracep->declBit(c+132,"SimTop u_cpu alu_module operator_a_w_s", false,-1);
        tracep->declBit(c+134,"SimTop u_cpu alu_module operator_b_w", false,-1);
        tracep->declBit(c+136,"SimTop u_cpu alu_module if_inst_sll", false,-1);
        tracep->declBus(c+249,"SimTop u_cpu alu_module Forward_a", false,-1, 1,0);
        tracep->declBus(c+250,"SimTop u_cpu alu_module Forward_b", false,-1, 1,0);
        tracep->declQuad(c+244,"SimTop u_cpu alu_module sext_value_mem", false,-1, 63,0);
        tracep->declQuad(c+166,"SimTop u_cpu alu_module reg_write_value_wb", false,-1, 63,0);
        tracep->declQuad(c+140,"SimTop u_cpu alu_module reg2_forwardb", false,-1, 63,0);
        tracep->declQuad(c+232,"SimTop u_cpu alu_module value", false,-1, 63,0);
        tracep->declQuad(c+320,"SimTop u_cpu alu_module reg1_forwarda", false,-1, 63,0);
        tracep->declQuad(c+322,"SimTop u_cpu alu_module a0", false,-1, 63,0);
        tracep->declQuad(c+324,"SimTop u_cpu alu_module b0", false,-1, 63,0);
        tracep->declQuad(c+326,"SimTop u_cpu alu_module a", false,-1, 63,0);
        tracep->declQuad(c+328,"SimTop u_cpu alu_module b", false,-1, 63,0);
        tracep->declBus(c+1145,"SimTop u_cpu alu_module forward_a_mux NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1152,"SimTop u_cpu alu_module forward_a_mux KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1140,"SimTop u_cpu alu_module forward_a_mux DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+320,"SimTop u_cpu alu_module forward_a_mux out", false,-1, 63,0);
        tracep->declBus(c+249,"SimTop u_cpu alu_module forward_a_mux key", false,-1, 1,0);
        tracep->declQuad(c+158,"SimTop u_cpu alu_module forward_a_mux default_out", false,-1, 63,0);
        tracep->declArray(c+330,"SimTop u_cpu alu_module forward_a_mux lut", false,-1, 197,0);
        tracep->declBus(c+1145,"SimTop u_cpu alu_module forward_a_mux i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1152,"SimTop u_cpu alu_module forward_a_mux i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1140,"SimTop u_cpu alu_module forward_a_mux i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1142,"SimTop u_cpu alu_module forward_a_mux i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+320,"SimTop u_cpu alu_module forward_a_mux i0 out", false,-1, 63,0);
        tracep->declBus(c+249,"SimTop u_cpu alu_module forward_a_mux i0 key", false,-1, 1,0);
        tracep->declQuad(c+158,"SimTop u_cpu alu_module forward_a_mux i0 default_out", false,-1, 63,0);
        tracep->declArray(c+330,"SimTop u_cpu alu_module forward_a_mux i0 lut", false,-1, 197,0);
        tracep->declBus(c+1153,"SimTop u_cpu alu_module forward_a_mux i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declArray(c+337+i*3,"SimTop u_cpu alu_module forward_a_mux i0 pair_list", true,(i+0), 65,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+346+i*1,"SimTop u_cpu alu_module forward_a_mux i0 key_list", true,(i+0), 1,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declQuad(c+349+i*2,"SimTop u_cpu alu_module forward_a_mux i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+355,"SimTop u_cpu alu_module forward_a_mux i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+357,"SimTop u_cpu alu_module forward_a_mux i0 hit", false,-1);
        tracep->declBus(c+1154,"SimTop u_cpu alu_module forward_a_mux i0 i", false,-1, 31,0);
        tracep->declBus(c+1145,"SimTop u_cpu alu_module forward_b_mux NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1152,"SimTop u_cpu alu_module forward_b_mux KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1140,"SimTop u_cpu alu_module forward_b_mux DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+140,"SimTop u_cpu alu_module forward_b_mux out", false,-1, 63,0);
        tracep->declBus(c+250,"SimTop u_cpu alu_module forward_b_mux key", false,-1, 1,0);
        tracep->declQuad(c+162,"SimTop u_cpu alu_module forward_b_mux default_out", false,-1, 63,0);
        tracep->declArray(c+358,"SimTop u_cpu alu_module forward_b_mux lut", false,-1, 197,0);
        tracep->declBus(c+1145,"SimTop u_cpu alu_module forward_b_mux i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1152,"SimTop u_cpu alu_module forward_b_mux i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1140,"SimTop u_cpu alu_module forward_b_mux i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1142,"SimTop u_cpu alu_module forward_b_mux i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+140,"SimTop u_cpu alu_module forward_b_mux i0 out", false,-1, 63,0);
        tracep->declBus(c+250,"SimTop u_cpu alu_module forward_b_mux i0 key", false,-1, 1,0);
        tracep->declQuad(c+162,"SimTop u_cpu alu_module forward_b_mux i0 default_out", false,-1, 63,0);
        tracep->declArray(c+358,"SimTop u_cpu alu_module forward_b_mux i0 lut", false,-1, 197,0);
        tracep->declBus(c+1153,"SimTop u_cpu alu_module forward_b_mux i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declArray(c+365+i*3,"SimTop u_cpu alu_module forward_b_mux i0 pair_list", true,(i+0), 65,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+374+i*1,"SimTop u_cpu alu_module forward_b_mux i0 key_list", true,(i+0), 1,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declQuad(c+377+i*2,"SimTop u_cpu alu_module forward_b_mux i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+383,"SimTop u_cpu alu_module forward_b_mux i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+385,"SimTop u_cpu alu_module forward_b_mux i0 hit", false,-1);
        tracep->declBus(c+1154,"SimTop u_cpu alu_module forward_b_mux i0 i", false,-1, 31,0);
        tracep->declBus(c+1155,"SimTop u_cpu alu_module adder NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1156,"SimTop u_cpu alu_module adder KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1140,"SimTop u_cpu alu_module adder DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+232,"SimTop u_cpu alu_module adder out", false,-1, 63,0);
        tracep->declBus(c+95,"SimTop u_cpu alu_module adder key", false,-1, 4,0);
        tracep->declQuad(c+1157,"SimTop u_cpu alu_module adder default_out", false,-1, 63,0);
        tracep->declArray(c+386,"SimTop u_cpu alu_module adder lut", false,-1, 1241,0);
        tracep->declBus(c+1155,"SimTop u_cpu alu_module adder i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1156,"SimTop u_cpu alu_module adder i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1140,"SimTop u_cpu alu_module adder i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1142,"SimTop u_cpu alu_module adder i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+232,"SimTop u_cpu alu_module adder i0 out", false,-1, 63,0);
        tracep->declBus(c+95,"SimTop u_cpu alu_module adder i0 key", false,-1, 4,0);
        tracep->declQuad(c+1157,"SimTop u_cpu alu_module adder i0 default_out", false,-1, 63,0);
        tracep->declArray(c+386,"SimTop u_cpu alu_module adder i0 lut", false,-1, 1241,0);
        tracep->declBus(c+1159,"SimTop u_cpu alu_module adder i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<18; i++) {
                tracep->declArray(c+425+i*3,"SimTop u_cpu alu_module adder i0 pair_list", true,(i+0), 68,0);}}
        {int i; for (i=0; i<18; i++) {
                tracep->declBus(c+479+i*1,"SimTop u_cpu alu_module adder i0 key_list", true,(i+0), 4,0);}}
        {int i; for (i=0; i<18; i++) {
                tracep->declQuad(c+497+i*2,"SimTop u_cpu alu_module adder i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+533,"SimTop u_cpu alu_module adder i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+535,"SimTop u_cpu alu_module adder i0 hit", false,-1);
        tracep->declBus(c+1160,"SimTop u_cpu alu_module adder i0 i", false,-1, 31,0);
        tracep->declBit(c+1041,"SimTop u_cpu pipe_ex_mem_reg clk", false,-1);
        tracep->declQuad(c+69,"SimTop u_cpu pipe_ex_mem_reg pc_ex", false,-1, 63,0);
        tracep->declQuad(c+150,"SimTop u_cpu pipe_ex_mem_reg npc_ex", false,-1, 63,0);
        tracep->declBus(c+77,"SimTop u_cpu pipe_ex_mem_reg inst_ex", false,-1, 31,0);
        tracep->declBus(c+109,"SimTop u_cpu pipe_ex_mem_reg rs2_ex", false,-1, 4,0);
        tracep->declBus(c+103,"SimTop u_cpu pipe_ex_mem_reg rd_ex", false,-1, 4,0);
        tracep->declQuad(c+140,"SimTop u_cpu pipe_ex_mem_reg reg2_value_ex", false,-1, 63,0);
        tracep->declBit(c+137,"SimTop u_cpu pipe_ex_mem_reg ebreak_ex", false,-1);
        tracep->declQuad(c+242,"SimTop u_cpu pipe_ex_mem_reg alu_sext_value_ex", false,-1, 63,0);
        tracep->declBit(c+91,"SimTop u_cpu pipe_ex_mem_reg wen_ex", false,-1);
        tracep->declBit(c+114,"SimTop u_cpu pipe_ex_mem_reg read_mem_en_ex", false,-1);
        tracep->declBit(c+118,"SimTop u_cpu pipe_ex_mem_reg write_mem_en_ex", false,-1);
        tracep->declBus(c+126,"SimTop u_cpu pipe_ex_mem_reg branch_type_ex", false,-1, 2,0);
        tracep->declBit(c+82,"SimTop u_cpu pipe_ex_mem_reg npc_op_ex", false,-1);
        tracep->declBit(c+85,"SimTop u_cpu pipe_ex_mem_reg npc_regimm_ex", false,-1);
        tracep->declBus(c+121,"SimTop u_cpu pipe_ex_mem_reg mem_ctrl_ex", false,-1, 3,0);
        tracep->declBit(c+255,"SimTop u_cpu pipe_ex_mem_reg pipeline_stall_ex", false,-1);
        tracep->declBit(c+30,"SimTop u_cpu pipe_ex_mem_reg axi_stall_i", false,-1);
        tracep->declQuad(c+71,"SimTop u_cpu pipe_ex_mem_reg pc_mem", false,-1, 63,0);
        tracep->declQuad(c+152,"SimTop u_cpu pipe_ex_mem_reg npc_mem", false,-1, 63,0);
        tracep->declBus(c+78,"SimTop u_cpu pipe_ex_mem_reg inst_mem", false,-1, 31,0);
        tracep->declBus(c+110,"SimTop u_cpu pipe_ex_mem_reg rs2_mem", false,-1, 4,0);
        tracep->declBus(c+104,"SimTop u_cpu pipe_ex_mem_reg rd_mem", false,-1, 4,0);
        tracep->declQuad(c+164,"SimTop u_cpu pipe_ex_mem_reg reg2_value_mem", false,-1, 63,0);
        tracep->declBit(c+138,"SimTop u_cpu pipe_ex_mem_reg ebreak_mem", false,-1);
        tracep->declQuad(c+244,"SimTop u_cpu pipe_ex_mem_reg alu_sext_value_mem", false,-1, 63,0);
        tracep->declBit(c+92,"SimTop u_cpu pipe_ex_mem_reg wen_mem", false,-1);
        tracep->declBit(c+115,"SimTop u_cpu pipe_ex_mem_reg read_mem_en_mem", false,-1);
        tracep->declBit(c+20,"SimTop u_cpu pipe_ex_mem_reg write_mem_en_mem", false,-1);
        tracep->declBus(c+127,"SimTop u_cpu pipe_ex_mem_reg branch_type_mem", false,-1, 2,0);
        tracep->declBit(c+83,"SimTop u_cpu pipe_ex_mem_reg npc_op_mem", false,-1);
        tracep->declBit(c+86,"SimTop u_cpu pipe_ex_mem_reg npc_regimm_mem", false,-1);
        tracep->declBus(c+122,"SimTop u_cpu pipe_ex_mem_reg mem_ctrl_mem", false,-1, 3,0);
        tracep->declBit(c+256,"SimTop u_cpu pipe_ex_mem_reg pipeline_stall_mem", false,-1);
        tracep->declBit(c+1041,"SimTop u_cpu memory clk", false,-1);
        tracep->declBit(c+1114,"SimTop u_cpu memory rst", false,-1);
        tracep->declBit(c+115,"SimTop u_cpu memory read_mem_en", false,-1);
        tracep->declQuad(c+244,"SimTop u_cpu memory addr", false,-1, 63,0);
        tracep->declQuad(c+164,"SimTop u_cpu memory reg2", false,-1, 63,0);
        tracep->declBit(c+20,"SimTop u_cpu memory write_mem_en", false,-1);
        tracep->declBus(c+122,"SimTop u_cpu memory mem_ctrl", false,-1, 3,0);
        tracep->declBit(c+253,"SimTop u_cpu memory Forward_store", false,-1);
        tracep->declQuad(c+166,"SimTop u_cpu memory reg_write_value_wb", false,-1, 63,0);
        tracep->declQuad(c+142,"SimTop u_cpu memory mem_write_mask", false,-1, 63,0);
        tracep->declQuad(c+23,"SimTop u_cpu memory read_mem_value", false,-1, 63,0);
        tracep->declQuad(c+8,"SimTop u_cpu memory reg2_to_mem_forward", false,-1, 63,0);
        tracep->declBit(c+19,"SimTop u_cpu memory mem_valid_o", false,-1);
        tracep->declBit(c+20,"SimTop u_cpu memory mem_req_o", false,-1);
        tracep->declQuad(c+21,"SimTop u_cpu memory mem_addr_o", false,-1, 63,0);
        tracep->declQuad(c+23,"SimTop u_cpu memory mem_data_read_i", false,-1, 63,0);
        tracep->declQuad(c+8,"SimTop u_cpu memory mem_data_write_o", false,-1, 63,0);
        tracep->declBus(c+10,"SimTop u_cpu memory mem_write_mask_axi", false,-1, 7,0);
        tracep->declQuad(c+536,"SimTop u_cpu memory value_writen_to_mem", false,-1, 63,0);
        tracep->declBit(c+1041,"SimTop u_cpu pipe_mem_wb clk", false,-1);
        tracep->declQuad(c+71,"SimTop u_cpu pipe_mem_wb pc_mem", false,-1, 63,0);
        tracep->declQuad(c+152,"SimTop u_cpu pipe_mem_wb npc_mem", false,-1, 63,0);
        tracep->declBus(c+78,"SimTop u_cpu pipe_mem_wb inst_mem", false,-1, 31,0);
        tracep->declBus(c+104,"SimTop u_cpu pipe_mem_wb rd_mem", false,-1, 4,0);
        tracep->declQuad(c+111,"SimTop u_cpu pipe_mem_wb reg10", false,-1, 63,0);
        tracep->declBit(c+138,"SimTop u_cpu pipe_mem_wb ebreak_mem", false,-1);
        tracep->declBus(c+127,"SimTop u_cpu pipe_mem_wb branch_type_mem", false,-1, 2,0);
        tracep->declQuad(c+244,"SimTop u_cpu pipe_mem_wb alu_sext_value_mem", false,-1, 63,0);
        tracep->declQuad(c+238,"SimTop u_cpu pipe_mem_wb sext_read_mem_value_mem", false,-1, 63,0);
        tracep->declQuad(c+8,"SimTop u_cpu pipe_mem_wb reg2_to_mem_forward", false,-1, 63,0);
        tracep->declBit(c+92,"SimTop u_cpu pipe_mem_wb wen_mem", false,-1);
        tracep->declBit(c+115,"SimTop u_cpu pipe_mem_wb read_mem_en_mem", false,-1);
        tracep->declBit(c+20,"SimTop u_cpu pipe_mem_wb write_mem_en_mem", false,-1);
        tracep->declBit(c+256,"SimTop u_cpu pipe_mem_wb pipeline_stall_mem", false,-1);
        tracep->declBus(c+122,"SimTop u_cpu pipe_mem_wb mem_ctrl_mem", false,-1, 3,0);
        tracep->declQuad(c+142,"SimTop u_cpu pipe_mem_wb mem_write_mask", false,-1, 63,0);
        tracep->declBit(c+30,"SimTop u_cpu pipe_mem_wb axi_stall_i", false,-1);
        tracep->declQuad(c+73,"SimTop u_cpu pipe_mem_wb pc_wb", false,-1, 63,0);
        tracep->declQuad(c+154,"SimTop u_cpu pipe_mem_wb npc_wb", false,-1, 63,0);
        tracep->declBus(c+79,"SimTop u_cpu pipe_mem_wb inst_wb", false,-1, 31,0);
        tracep->declBus(c+105,"SimTop u_cpu pipe_mem_wb rd_wb", false,-1, 4,0);
        tracep->declBit(c+139,"SimTop u_cpu pipe_mem_wb ebreak_wb", false,-1);
        tracep->declBus(c+128,"SimTop u_cpu pipe_mem_wb branch_type_wb", false,-1, 2,0);
        tracep->declQuad(c+246,"SimTop u_cpu pipe_mem_wb alu_sext_value_wb", false,-1, 63,0);
        tracep->declQuad(c+240,"SimTop u_cpu pipe_mem_wb sext_read_mem_value_wb", false,-1, 63,0);
        tracep->declBit(c+93,"SimTop u_cpu pipe_mem_wb wen_wb", false,-1);
        tracep->declBit(c+116,"SimTop u_cpu pipe_mem_wb read_mem_en_wb", false,-1);
        tracep->declBit(c+119,"SimTop u_cpu pipe_mem_wb write_mem_en_wb", false,-1);
        tracep->declBit(c+257,"SimTop u_cpu pipe_mem_wb pipeline_stall_wb", false,-1);
        tracep->declBit(c+1041,"SimTop u_cpu pipe_mem_wb RAMHelper clk", false,-1);
        tracep->declBit(c+1135,"SimTop u_cpu pipe_mem_wb RAMHelper en", false,-1);
        tracep->declQuad(c+1161,"SimTop u_cpu pipe_mem_wb RAMHelper rIdx", false,-1, 63,0);
        tracep->declQuad(c+1,"SimTop u_cpu pipe_mem_wb RAMHelper rdata", false,-1, 63,0);
        tracep->declQuad(c+538,"SimTop u_cpu pipe_mem_wb RAMHelper wIdx", false,-1, 63,0);
        tracep->declQuad(c+8,"SimTop u_cpu pipe_mem_wb RAMHelper wdata", false,-1, 63,0);
        tracep->declQuad(c+142,"SimTop u_cpu pipe_mem_wb RAMHelper wmask", false,-1, 63,0);
        tracep->declBit(c+540,"SimTop u_cpu pipe_mem_wb RAMHelper wen", false,-1);
        tracep->declBit(c+1041,"SimTop u_cpu rf clk", false,-1);
        tracep->declBit(c+1114,"SimTop u_cpu rf rst", false,-1);
        tracep->declBit(c+87,"SimTop u_cpu rf reg1_ren", false,-1);
        tracep->declBit(c+88,"SimTop u_cpu rf reg2_ren", false,-1);
        tracep->declBus(c+106,"SimTop u_cpu rf reg1addr", false,-1, 4,0);
        tracep->declBus(c+108,"SimTop u_cpu rf reg2addr", false,-1, 4,0);
        tracep->declQuad(c+246,"SimTop u_cpu rf wdata", false,-1, 63,0);
        tracep->declBus(c+105,"SimTop u_cpu rf waddr", false,-1, 4,0);
        tracep->declBit(c+116,"SimTop u_cpu rf read_mem_en", false,-1);
        tracep->declQuad(c+240,"SimTop u_cpu rf sext_read_mem_value", false,-1, 63,0);
        tracep->declBit(c+93,"SimTop u_cpu rf wen", false,-1);
        tracep->declBit(c+258,"SimTop u_cpu rf pc_wen", false,-1);
        tracep->declBit(c+30,"SimTop u_cpu rf axi_stall_i", false,-1);
        tracep->declQuad(c+148,"SimTop u_cpu rf npc", false,-1, 63,0);
        tracep->declQuad(c+166,"SimTop u_cpu rf reg_write_value_wb", false,-1, 63,0);
        tracep->declQuad(c+156,"SimTop u_cpu rf reg1", false,-1, 63,0);
        tracep->declQuad(c+160,"SimTop u_cpu rf reg2", false,-1, 63,0);
        tracep->declQuad(c+111,"SimTop u_cpu rf reg10", false,-1, 63,0);
        tracep->declQuad(c+146,"SimTop u_cpu rf pc", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+541+i*2,"SimTop u_cpu rf regs_gpr", true,(i+0), 63,0);}}
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+605+i*2,"SimTop u_cpu rf rf", true,(i+0), 63,0);}}
        tracep->declBus(c+75,"SimTop u_cpu sext inst", false,-1, 31,0);
        tracep->declBus(c+80,"SimTop u_cpu sext optype", false,-1, 2,0);
        tracep->declQuad(c+232,"SimTop u_cpu sext value", false,-1, 63,0);
        tracep->declBus(c+122,"SimTop u_cpu sext mem_ctrl", false,-1, 3,0);
        tracep->declBus(c+124,"SimTop u_cpu sext value_width_ctrl", false,-1, 3,0);
        tracep->declQuad(c+244,"SimTop u_cpu sext read_mem_addr", false,-1, 63,0);
        tracep->declQuad(c+23,"SimTop u_cpu sext read_mem_value", false,-1, 63,0);
        tracep->declQuad(c+238,"SimTop u_cpu sext sext_read_mem_value", false,-1, 63,0);
        tracep->declQuad(c+242,"SimTop u_cpu sext sext_value", false,-1, 63,0);
        tracep->declQuad(c+234,"SimTop u_cpu sext imm", false,-1, 63,0);
        tracep->declBus(c+1156,"SimTop u_cpu sext sext_imm NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1145,"SimTop u_cpu sext sext_imm KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1140,"SimTop u_cpu sext sext_imm DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+234,"SimTop u_cpu sext sext_imm out", false,-1, 63,0);
        tracep->declBus(c+80,"SimTop u_cpu sext sext_imm key", false,-1, 2,0);
        tracep->declQuad(c+1163,"SimTop u_cpu sext sext_imm default_out", false,-1, 63,0);
        tracep->declArray(c+669,"SimTop u_cpu sext sext_imm lut", false,-1, 334,0);
        tracep->declBus(c+1156,"SimTop u_cpu sext sext_imm i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1145,"SimTop u_cpu sext sext_imm i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1140,"SimTop u_cpu sext sext_imm i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1142,"SimTop u_cpu sext sext_imm i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+234,"SimTop u_cpu sext sext_imm i0 out", false,-1, 63,0);
        tracep->declBus(c+80,"SimTop u_cpu sext sext_imm i0 key", false,-1, 2,0);
        tracep->declQuad(c+1163,"SimTop u_cpu sext sext_imm i0 default_out", false,-1, 63,0);
        tracep->declArray(c+669,"SimTop u_cpu sext sext_imm i0 lut", false,-1, 334,0);
        tracep->declBus(c+1165,"SimTop u_cpu sext sext_imm i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declArray(c+680+i*3,"SimTop u_cpu sext sext_imm i0 pair_list", true,(i+0), 66,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+695+i*1,"SimTop u_cpu sext sext_imm i0 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declQuad(c+700+i*2,"SimTop u_cpu sext sext_imm i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+710,"SimTop u_cpu sext sext_imm i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+712,"SimTop u_cpu sext sext_imm i0 hit", false,-1);
        tracep->declBus(c+1166,"SimTop u_cpu sext sext_imm i0 i", false,-1, 31,0);
        tracep->declBus(c+1167,"SimTop u_cpu sext sext_mem_read_value NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1141,"SimTop u_cpu sext sext_mem_read_value KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1140,"SimTop u_cpu sext sext_mem_read_value DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+238,"SimTop u_cpu sext sext_mem_read_value out", false,-1, 63,0);
        tracep->declBus(c+122,"SimTop u_cpu sext sext_mem_read_value key", false,-1, 3,0);
        tracep->declQuad(c+23,"SimTop u_cpu sext sext_mem_read_value default_out", false,-1, 63,0);
        tracep->declArray(c+713,"SimTop u_cpu sext sext_mem_read_value lut", false,-1, 475,0);
        tracep->declBus(c+1167,"SimTop u_cpu sext sext_mem_read_value i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1141,"SimTop u_cpu sext sext_mem_read_value i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1140,"SimTop u_cpu sext sext_mem_read_value i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1142,"SimTop u_cpu sext sext_mem_read_value i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+238,"SimTop u_cpu sext sext_mem_read_value i0 out", false,-1, 63,0);
        tracep->declBus(c+122,"SimTop u_cpu sext sext_mem_read_value i0 key", false,-1, 3,0);
        tracep->declQuad(c+23,"SimTop u_cpu sext sext_mem_read_value i0 default_out", false,-1, 63,0);
        tracep->declArray(c+713,"SimTop u_cpu sext sext_mem_read_value i0 lut", false,-1, 475,0);
        tracep->declBus(c+1168,"SimTop u_cpu sext sext_mem_read_value i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<7; i++) {
                tracep->declArray(c+728+i*3,"SimTop u_cpu sext sext_mem_read_value i0 pair_list", true,(i+0), 67,0);}}
        {int i; for (i=0; i<7; i++) {
                tracep->declBus(c+749+i*1,"SimTop u_cpu sext sext_mem_read_value i0 key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<7; i++) {
                tracep->declQuad(c+756+i*2,"SimTop u_cpu sext sext_mem_read_value i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+770,"SimTop u_cpu sext sext_mem_read_value i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+772,"SimTop u_cpu sext sext_mem_read_value i0 hit", false,-1);
        tracep->declBus(c+1169,"SimTop u_cpu sext sext_mem_read_value i0 i", false,-1, 31,0);
        tracep->declBus(c+1152,"SimTop u_cpu sext sext_value0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1141,"SimTop u_cpu sext sext_value0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1140,"SimTop u_cpu sext sext_value0 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+242,"SimTop u_cpu sext sext_value0 out", false,-1, 63,0);
        tracep->declBus(c+124,"SimTop u_cpu sext sext_value0 key", false,-1, 3,0);
        tracep->declQuad(c+232,"SimTop u_cpu sext sext_value0 default_out", false,-1, 63,0);
        tracep->declArray(c+773,"SimTop u_cpu sext sext_value0 lut", false,-1, 135,0);
        tracep->declBus(c+1152,"SimTop u_cpu sext sext_value0 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1141,"SimTop u_cpu sext sext_value0 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1140,"SimTop u_cpu sext sext_value0 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1142,"SimTop u_cpu sext sext_value0 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+242,"SimTop u_cpu sext sext_value0 i0 out", false,-1, 63,0);
        tracep->declBus(c+124,"SimTop u_cpu sext sext_value0 i0 key", false,-1, 3,0);
        tracep->declQuad(c+232,"SimTop u_cpu sext sext_value0 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+773,"SimTop u_cpu sext sext_value0 i0 lut", false,-1, 135,0);
        tracep->declBus(c+1168,"SimTop u_cpu sext sext_value0 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declArray(c+778+i*3,"SimTop u_cpu sext sext_value0 i0 pair_list", true,(i+0), 67,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+784+i*1,"SimTop u_cpu sext sext_value0 i0 key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+786+i*2,"SimTop u_cpu sext sext_value0 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+790,"SimTop u_cpu sext sext_value0 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+792,"SimTop u_cpu sext sext_value0 i0 hit", false,-1);
        tracep->declBus(c+1170,"SimTop u_cpu sext sext_value0 i0 i", false,-1, 31,0);
        tracep->declQuad(c+156,"SimTop u_cpu npc_processing reg1", false,-1, 63,0);
        tracep->declQuad(c+160,"SimTop u_cpu npc_processing reg2", false,-1, 63,0);
        tracep->declQuad(c+67,"SimTop u_cpu npc_processing pc_id", false,-1, 63,0);
        tracep->declQuad(c+146,"SimTop u_cpu npc_processing pc_if", false,-1, 63,0);
        tracep->declQuad(c+234,"SimTop u_cpu npc_processing imm", false,-1, 63,0);
        tracep->declBit(c+81,"SimTop u_cpu npc_processing npc_op", false,-1);
        tracep->declBit(c+84,"SimTop u_cpu npc_processing npc_regimm", false,-1);
        tracep->declBus(c+251,"SimTop u_cpu npc_processing Forward_c", false,-1, 1,0);
        tracep->declBus(c+252,"SimTop u_cpu npc_processing Forward_d", false,-1, 1,0);
        tracep->declQuad(c+242,"SimTop u_cpu npc_processing sext_value_ex", false,-1, 63,0);
        tracep->declQuad(c+144,"SimTop u_cpu npc_processing reg_write_value_mem", false,-1, 63,0);
        tracep->declQuad(c+166,"SimTop u_cpu npc_processing reg_write_value_wb", false,-1, 63,0);
        tracep->declBus(c+125,"SimTop u_cpu npc_processing branch_type", false,-1, 2,0);
        tracep->declBit(c+254,"SimTop u_cpu npc_processing pipeline_stall", false,-1);
        tracep->declBit(c+248,"SimTop u_cpu npc_processing IF_Flush", false,-1);
        tracep->declQuad(c+148,"SimTop u_cpu npc_processing npc", false,-1, 63,0);
        tracep->declQuad(c+793,"SimTop u_cpu npc_processing operation_a_forward", false,-1, 63,0);
        tracep->declQuad(c+795,"SimTop u_cpu npc_processing operation_b_forward", false,-1, 63,0);
        tracep->declBit(c+797,"SimTop u_cpu npc_processing branch_en", false,-1);
        tracep->declQuad(c+798,"SimTop u_cpu npc_processing pc_branch_addr", false,-1, 63,0);
        tracep->declBus(c+1141,"SimTop u_cpu npc_processing forward_c_mux NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1152,"SimTop u_cpu npc_processing forward_c_mux KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1140,"SimTop u_cpu npc_processing forward_c_mux DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+793,"SimTop u_cpu npc_processing forward_c_mux out", false,-1, 63,0);
        tracep->declBus(c+251,"SimTop u_cpu npc_processing forward_c_mux key", false,-1, 1,0);
        tracep->declQuad(c+156,"SimTop u_cpu npc_processing forward_c_mux default_out", false,-1, 63,0);
        tracep->declArray(c+800,"SimTop u_cpu npc_processing forward_c_mux lut", false,-1, 263,0);
        tracep->declBus(c+1141,"SimTop u_cpu npc_processing forward_c_mux i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1152,"SimTop u_cpu npc_processing forward_c_mux i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1140,"SimTop u_cpu npc_processing forward_c_mux i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1142,"SimTop u_cpu npc_processing forward_c_mux i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+793,"SimTop u_cpu npc_processing forward_c_mux i0 out", false,-1, 63,0);
        tracep->declBus(c+251,"SimTop u_cpu npc_processing forward_c_mux i0 key", false,-1, 1,0);
        tracep->declQuad(c+156,"SimTop u_cpu npc_processing forward_c_mux i0 default_out", false,-1, 63,0);
        tracep->declArray(c+800,"SimTop u_cpu npc_processing forward_c_mux i0 lut", false,-1, 263,0);
        tracep->declBus(c+1153,"SimTop u_cpu npc_processing forward_c_mux i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declArray(c+809+i*3,"SimTop u_cpu npc_processing forward_c_mux i0 pair_list", true,(i+0), 65,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+821+i*1,"SimTop u_cpu npc_processing forward_c_mux i0 key_list", true,(i+0), 1,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+825+i*2,"SimTop u_cpu npc_processing forward_c_mux i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+833,"SimTop u_cpu npc_processing forward_c_mux i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+835,"SimTop u_cpu npc_processing forward_c_mux i0 hit", false,-1);
        tracep->declBus(c+1171,"SimTop u_cpu npc_processing forward_c_mux i0 i", false,-1, 31,0);
        tracep->declBus(c+1141,"SimTop u_cpu npc_processing forward_d_mux NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1152,"SimTop u_cpu npc_processing forward_d_mux KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1140,"SimTop u_cpu npc_processing forward_d_mux DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+795,"SimTop u_cpu npc_processing forward_d_mux out", false,-1, 63,0);
        tracep->declBus(c+252,"SimTop u_cpu npc_processing forward_d_mux key", false,-1, 1,0);
        tracep->declQuad(c+160,"SimTop u_cpu npc_processing forward_d_mux default_out", false,-1, 63,0);
        tracep->declArray(c+836,"SimTop u_cpu npc_processing forward_d_mux lut", false,-1, 263,0);
        tracep->declBus(c+1141,"SimTop u_cpu npc_processing forward_d_mux i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1152,"SimTop u_cpu npc_processing forward_d_mux i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1140,"SimTop u_cpu npc_processing forward_d_mux i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1142,"SimTop u_cpu npc_processing forward_d_mux i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+795,"SimTop u_cpu npc_processing forward_d_mux i0 out", false,-1, 63,0);
        tracep->declBus(c+252,"SimTop u_cpu npc_processing forward_d_mux i0 key", false,-1, 1,0);
        tracep->declQuad(c+160,"SimTop u_cpu npc_processing forward_d_mux i0 default_out", false,-1, 63,0);
        tracep->declArray(c+836,"SimTop u_cpu npc_processing forward_d_mux i0 lut", false,-1, 263,0);
        tracep->declBus(c+1153,"SimTop u_cpu npc_processing forward_d_mux i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declArray(c+845+i*3,"SimTop u_cpu npc_processing forward_d_mux i0 pair_list", true,(i+0), 65,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+857+i*1,"SimTop u_cpu npc_processing forward_d_mux i0 key_list", true,(i+0), 1,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+861+i*2,"SimTop u_cpu npc_processing forward_d_mux i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+869,"SimTop u_cpu npc_processing forward_d_mux i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+871,"SimTop u_cpu npc_processing forward_d_mux i0 hit", false,-1);
        tracep->declBus(c+1171,"SimTop u_cpu npc_processing forward_d_mux i0 i", false,-1, 31,0);
        tracep->declBus(c+1146,"SimTop u_cpu npc_processing branch_test NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1145,"SimTop u_cpu npc_processing branch_test KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1142,"SimTop u_cpu npc_processing branch_test DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+797,"SimTop u_cpu npc_processing branch_test out", false,-1, 0,0);
        tracep->declBus(c+125,"SimTop u_cpu npc_processing branch_test key", false,-1, 2,0);
        tracep->declBus(c+1130,"SimTop u_cpu npc_processing branch_test default_out", false,-1, 0,0);
        tracep->declBus(c+872,"SimTop u_cpu npc_processing branch_test lut", false,-1, 23,0);
        tracep->declBus(c+1146,"SimTop u_cpu npc_processing branch_test i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1145,"SimTop u_cpu npc_processing branch_test i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1142,"SimTop u_cpu npc_processing branch_test i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1142,"SimTop u_cpu npc_processing branch_test i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+797,"SimTop u_cpu npc_processing branch_test i0 out", false,-1, 0,0);
        tracep->declBus(c+125,"SimTop u_cpu npc_processing branch_test i0 key", false,-1, 2,0);
        tracep->declBus(c+1130,"SimTop u_cpu npc_processing branch_test i0 default_out", false,-1, 0,0);
        tracep->declBus(c+872,"SimTop u_cpu npc_processing branch_test i0 lut", false,-1, 23,0);
        tracep->declBus(c+1141,"SimTop u_cpu npc_processing branch_test i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<6; i++) {
                tracep->declBus(c+873+i*1,"SimTop u_cpu npc_processing branch_test i0 pair_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<6; i++) {
                tracep->declBus(c+879+i*1,"SimTop u_cpu npc_processing branch_test i0 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<6; i++) {
                tracep->declBus(c+885+i*1,"SimTop u_cpu npc_processing branch_test i0 data_list", true,(i+0), 0,0);}}
        tracep->declBus(c+891,"SimTop u_cpu npc_processing branch_test i0 lut_out", false,-1, 0,0);
        tracep->declBit(c+892,"SimTop u_cpu npc_processing branch_test i0 hit", false,-1);
        tracep->declBus(c+1172,"SimTop u_cpu npc_processing branch_test i0 i", false,-1, 31,0);
        tracep->declBus(c+106,"SimTop u_cpu forwarding_unit rs1_id", false,-1, 4,0);
        tracep->declBus(c+107,"SimTop u_cpu forwarding_unit rs1_ex", false,-1, 4,0);
        tracep->declBus(c+108,"SimTop u_cpu forwarding_unit rs2_id", false,-1, 4,0);
        tracep->declBus(c+109,"SimTop u_cpu forwarding_unit rs2_ex", false,-1, 4,0);
        tracep->declBus(c+103,"SimTop u_cpu forwarding_unit rd_ex", false,-1, 4,0);
        tracep->declBus(c+104,"SimTop u_cpu forwarding_unit rd_mem", false,-1, 4,0);
        tracep->declBus(c+105,"SimTop u_cpu forwarding_unit rd_wb", false,-1, 4,0);
        tracep->declBus(c+110,"SimTop u_cpu forwarding_unit rs2_mem", false,-1, 4,0);
        tracep->declBit(c+20,"SimTop u_cpu forwarding_unit write_mem_en_mem", false,-1);
        tracep->declBit(c+116,"SimTop u_cpu forwarding_unit read_mem_en_wb", false,-1);
        tracep->declBit(c+91,"SimTop u_cpu forwarding_unit wen_ex", false,-1);
        tracep->declBit(c+92,"SimTop u_cpu forwarding_unit wen_mem", false,-1);
        tracep->declBit(c+93,"SimTop u_cpu forwarding_unit wen_wb", false,-1);
        tracep->declBus(c+249,"SimTop u_cpu forwarding_unit Forward_a", false,-1, 1,0);
        tracep->declBus(c+250,"SimTop u_cpu forwarding_unit Forward_b", false,-1, 1,0);
        tracep->declBus(c+251,"SimTop u_cpu forwarding_unit Forward_c", false,-1, 1,0);
        tracep->declBus(c+252,"SimTop u_cpu forwarding_unit Forward_d", false,-1, 1,0);
        tracep->declBit(c+253,"SimTop u_cpu forwarding_unit Forward_store", false,-1);
        tracep->declBus(c+106,"SimTop u_cpu hazard_detection_unit rs1_id", false,-1, 4,0);
        tracep->declBus(c+108,"SimTop u_cpu hazard_detection_unit rs2_id", false,-1, 4,0);
        tracep->declBus(c+103,"SimTop u_cpu hazard_detection_unit rd_ex", false,-1, 4,0);
        tracep->declBit(c+114,"SimTop u_cpu hazard_detection_unit read_mem_en_ex", false,-1);
        tracep->declBit(c+254,"SimTop u_cpu hazard_detection_unit pipeline_stall", false,-1);
        tracep->declBit(c+258,"SimTop u_cpu hazard_detection_unit pc_wen", false,-1);
        tracep->declBit(c+1041,"SimTop u_cpu DifftestInstrCommit clock", false,-1);
        tracep->declBus(c+1173,"SimTop u_cpu DifftestInstrCommit coreid", false,-1, 7,0);
        tracep->declBus(c+1173,"SimTop u_cpu DifftestInstrCommit index", false,-1, 7,0);
        tracep->declBit(c+900,"SimTop u_cpu DifftestInstrCommit valid", false,-1);
        tracep->declQuad(c+897,"SimTop u_cpu DifftestInstrCommit pc", false,-1, 63,0);
        tracep->declBus(c+899,"SimTop u_cpu DifftestInstrCommit instr", false,-1, 31,0);
        tracep->declBit(c+1133,"SimTop u_cpu DifftestInstrCommit skip", false,-1);
        tracep->declBit(c+1133,"SimTop u_cpu DifftestInstrCommit isRVC", false,-1);
        tracep->declBit(c+1133,"SimTop u_cpu DifftestInstrCommit scFailed", false,-1);
        tracep->declBit(c+893,"SimTop u_cpu DifftestInstrCommit wen", false,-1);
        tracep->declBus(c+894,"SimTop u_cpu DifftestInstrCommit wdest", false,-1, 7,0);
        tracep->declQuad(c+895,"SimTop u_cpu DifftestInstrCommit wdata", false,-1, 63,0);
        tracep->declBit(c+1041,"SimTop u_cpu DifftestArchIntRegState clock", false,-1);
        tracep->declBus(c+1173,"SimTop u_cpu DifftestArchIntRegState coreid", false,-1, 7,0);
        tracep->declQuad(c+971,"SimTop u_cpu DifftestArchIntRegState gpr_0", false,-1, 63,0);
        tracep->declQuad(c+973,"SimTop u_cpu DifftestArchIntRegState gpr_1", false,-1, 63,0);
        tracep->declQuad(c+975,"SimTop u_cpu DifftestArchIntRegState gpr_2", false,-1, 63,0);
        tracep->declQuad(c+977,"SimTop u_cpu DifftestArchIntRegState gpr_3", false,-1, 63,0);
        tracep->declQuad(c+979,"SimTop u_cpu DifftestArchIntRegState gpr_4", false,-1, 63,0);
        tracep->declQuad(c+981,"SimTop u_cpu DifftestArchIntRegState gpr_5", false,-1, 63,0);
        tracep->declQuad(c+983,"SimTop u_cpu DifftestArchIntRegState gpr_6", false,-1, 63,0);
        tracep->declQuad(c+985,"SimTop u_cpu DifftestArchIntRegState gpr_7", false,-1, 63,0);
        tracep->declQuad(c+987,"SimTop u_cpu DifftestArchIntRegState gpr_8", false,-1, 63,0);
        tracep->declQuad(c+989,"SimTop u_cpu DifftestArchIntRegState gpr_9", false,-1, 63,0);
        tracep->declQuad(c+991,"SimTop u_cpu DifftestArchIntRegState gpr_10", false,-1, 63,0);
        tracep->declQuad(c+993,"SimTop u_cpu DifftestArchIntRegState gpr_11", false,-1, 63,0);
        tracep->declQuad(c+995,"SimTop u_cpu DifftestArchIntRegState gpr_12", false,-1, 63,0);
        tracep->declQuad(c+997,"SimTop u_cpu DifftestArchIntRegState gpr_13", false,-1, 63,0);
        tracep->declQuad(c+999,"SimTop u_cpu DifftestArchIntRegState gpr_14", false,-1, 63,0);
        tracep->declQuad(c+1001,"SimTop u_cpu DifftestArchIntRegState gpr_15", false,-1, 63,0);
        tracep->declQuad(c+1003,"SimTop u_cpu DifftestArchIntRegState gpr_16", false,-1, 63,0);
        tracep->declQuad(c+1005,"SimTop u_cpu DifftestArchIntRegState gpr_17", false,-1, 63,0);
        tracep->declQuad(c+1007,"SimTop u_cpu DifftestArchIntRegState gpr_18", false,-1, 63,0);
        tracep->declQuad(c+1009,"SimTop u_cpu DifftestArchIntRegState gpr_19", false,-1, 63,0);
        tracep->declQuad(c+1011,"SimTop u_cpu DifftestArchIntRegState gpr_20", false,-1, 63,0);
        tracep->declQuad(c+1013,"SimTop u_cpu DifftestArchIntRegState gpr_21", false,-1, 63,0);
        tracep->declQuad(c+1015,"SimTop u_cpu DifftestArchIntRegState gpr_22", false,-1, 63,0);
        tracep->declQuad(c+1017,"SimTop u_cpu DifftestArchIntRegState gpr_23", false,-1, 63,0);
        tracep->declQuad(c+1019,"SimTop u_cpu DifftestArchIntRegState gpr_24", false,-1, 63,0);
        tracep->declQuad(c+1021,"SimTop u_cpu DifftestArchIntRegState gpr_25", false,-1, 63,0);
        tracep->declQuad(c+1023,"SimTop u_cpu DifftestArchIntRegState gpr_26", false,-1, 63,0);
        tracep->declQuad(c+1025,"SimTop u_cpu DifftestArchIntRegState gpr_27", false,-1, 63,0);
        tracep->declQuad(c+1027,"SimTop u_cpu DifftestArchIntRegState gpr_28", false,-1, 63,0);
        tracep->declQuad(c+1029,"SimTop u_cpu DifftestArchIntRegState gpr_29", false,-1, 63,0);
        tracep->declQuad(c+1031,"SimTop u_cpu DifftestArchIntRegState gpr_30", false,-1, 63,0);
        tracep->declQuad(c+1033,"SimTop u_cpu DifftestArchIntRegState gpr_31", false,-1, 63,0);
        tracep->declBit(c+1041,"SimTop u_cpu DifftestTrapEvent clock", false,-1);
        tracep->declBus(c+1173,"SimTop u_cpu DifftestTrapEvent coreid", false,-1, 7,0);
        tracep->declBit(c+901,"SimTop u_cpu DifftestTrapEvent valid", false,-1);
        tracep->declBus(c+1035,"SimTop u_cpu DifftestTrapEvent code", false,-1, 2,0);
        tracep->declQuad(c+897,"SimTop u_cpu DifftestTrapEvent pc", false,-1, 63,0);
        tracep->declQuad(c+903,"SimTop u_cpu DifftestTrapEvent cycleCnt", false,-1, 63,0);
        tracep->declQuad(c+905,"SimTop u_cpu DifftestTrapEvent instrCnt", false,-1, 63,0);
        tracep->declBit(c+1041,"SimTop u_cpu DifftestCSRState clock", false,-1);
        tracep->declBus(c+1173,"SimTop u_cpu DifftestCSRState coreid", false,-1, 7,0);
        tracep->declBus(c+1144,"SimTop u_cpu DifftestCSRState priviledgeMode", false,-1, 1,0);
        tracep->declQuad(c+1161,"SimTop u_cpu DifftestCSRState mstatus", false,-1, 63,0);
        tracep->declQuad(c+1161,"SimTop u_cpu DifftestCSRState sstatus", false,-1, 63,0);
        tracep->declQuad(c+1161,"SimTop u_cpu DifftestCSRState mepc", false,-1, 63,0);
        tracep->declQuad(c+1161,"SimTop u_cpu DifftestCSRState sepc", false,-1, 63,0);
        tracep->declQuad(c+1161,"SimTop u_cpu DifftestCSRState mtval", false,-1, 63,0);
        tracep->declQuad(c+1161,"SimTop u_cpu DifftestCSRState stval", false,-1, 63,0);
        tracep->declQuad(c+1161,"SimTop u_cpu DifftestCSRState mtvec", false,-1, 63,0);
        tracep->declQuad(c+1161,"SimTop u_cpu DifftestCSRState stvec", false,-1, 63,0);
        tracep->declQuad(c+1161,"SimTop u_cpu DifftestCSRState mcause", false,-1, 63,0);
        tracep->declQuad(c+1161,"SimTop u_cpu DifftestCSRState scause", false,-1, 63,0);
        tracep->declQuad(c+1161,"SimTop u_cpu DifftestCSRState satp", false,-1, 63,0);
        tracep->declQuad(c+1161,"SimTop u_cpu DifftestCSRState mip", false,-1, 63,0);
        tracep->declQuad(c+1161,"SimTop u_cpu DifftestCSRState mie", false,-1, 63,0);
        tracep->declQuad(c+1161,"SimTop u_cpu DifftestCSRState mscratch", false,-1, 63,0);
        tracep->declQuad(c+1161,"SimTop u_cpu DifftestCSRState sscratch", false,-1, 63,0);
        tracep->declQuad(c+1161,"SimTop u_cpu DifftestCSRState mideleg", false,-1, 63,0);
        tracep->declQuad(c+1161,"SimTop u_cpu DifftestCSRState medeleg", false,-1, 63,0);
        tracep->declBit(c+1041,"SimTop u_cpu DifftestArchFpRegState clock", false,-1);
        tracep->declBus(c+1173,"SimTop u_cpu DifftestArchFpRegState coreid", false,-1, 7,0);
        tracep->declQuad(c+1161,"SimTop u_cpu DifftestArchFpRegState fpr_0", false,-1, 63,0);
        tracep->declQuad(c+1161,"SimTop u_cpu DifftestArchFpRegState fpr_1", false,-1, 63,0);
        tracep->declQuad(c+1161,"SimTop u_cpu DifftestArchFpRegState fpr_2", false,-1, 63,0);
        tracep->declQuad(c+1161,"SimTop u_cpu DifftestArchFpRegState fpr_3", false,-1, 63,0);
        tracep->declQuad(c+1161,"SimTop u_cpu DifftestArchFpRegState fpr_4", false,-1, 63,0);
        tracep->declQuad(c+1161,"SimTop u_cpu DifftestArchFpRegState fpr_5", false,-1, 63,0);
        tracep->declQuad(c+1161,"SimTop u_cpu DifftestArchFpRegState fpr_6", false,-1, 63,0);
        tracep->declQuad(c+1161,"SimTop u_cpu DifftestArchFpRegState fpr_7", false,-1, 63,0);
        tracep->declQuad(c+1161,"SimTop u_cpu DifftestArchFpRegState fpr_8", false,-1, 63,0);
        tracep->declQuad(c+1161,"SimTop u_cpu DifftestArchFpRegState fpr_9", false,-1, 63,0);
        tracep->declQuad(c+1161,"SimTop u_cpu DifftestArchFpRegState fpr_10", false,-1, 63,0);
        tracep->declQuad(c+1161,"SimTop u_cpu DifftestArchFpRegState fpr_11", false,-1, 63,0);
        tracep->declQuad(c+1161,"SimTop u_cpu DifftestArchFpRegState fpr_12", false,-1, 63,0);
        tracep->declQuad(c+1161,"SimTop u_cpu DifftestArchFpRegState fpr_13", false,-1, 63,0);
        tracep->declQuad(c+1161,"SimTop u_cpu DifftestArchFpRegState fpr_14", false,-1, 63,0);
        tracep->declQuad(c+1161,"SimTop u_cpu DifftestArchFpRegState fpr_15", false,-1, 63,0);
        tracep->declQuad(c+1161,"SimTop u_cpu DifftestArchFpRegState fpr_16", false,-1, 63,0);
        tracep->declQuad(c+1161,"SimTop u_cpu DifftestArchFpRegState fpr_17", false,-1, 63,0);
        tracep->declQuad(c+1161,"SimTop u_cpu DifftestArchFpRegState fpr_18", false,-1, 63,0);
        tracep->declQuad(c+1161,"SimTop u_cpu DifftestArchFpRegState fpr_19", false,-1, 63,0);
        tracep->declQuad(c+1161,"SimTop u_cpu DifftestArchFpRegState fpr_20", false,-1, 63,0);
        tracep->declQuad(c+1161,"SimTop u_cpu DifftestArchFpRegState fpr_21", false,-1, 63,0);
        tracep->declQuad(c+1161,"SimTop u_cpu DifftestArchFpRegState fpr_22", false,-1, 63,0);
        tracep->declQuad(c+1161,"SimTop u_cpu DifftestArchFpRegState fpr_23", false,-1, 63,0);
        tracep->declQuad(c+1161,"SimTop u_cpu DifftestArchFpRegState fpr_24", false,-1, 63,0);
        tracep->declQuad(c+1161,"SimTop u_cpu DifftestArchFpRegState fpr_25", false,-1, 63,0);
        tracep->declQuad(c+1161,"SimTop u_cpu DifftestArchFpRegState fpr_26", false,-1, 63,0);
        tracep->declQuad(c+1161,"SimTop u_cpu DifftestArchFpRegState fpr_27", false,-1, 63,0);
        tracep->declQuad(c+1161,"SimTop u_cpu DifftestArchFpRegState fpr_28", false,-1, 63,0);
        tracep->declQuad(c+1161,"SimTop u_cpu DifftestArchFpRegState fpr_29", false,-1, 63,0);
        tracep->declQuad(c+1161,"SimTop u_cpu DifftestArchFpRegState fpr_30", false,-1, 63,0);
        tracep->declQuad(c+1161,"SimTop u_cpu DifftestArchFpRegState fpr_31", false,-1, 63,0);
    }
}

void VSimTop___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void VSimTop___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void VSimTop___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void VSimTop___024root__traceRegister(VSimTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&VSimTop___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&VSimTop___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&VSimTop___024root__traceCleanup, vlSelf);
    }
}

void VSimTop___024root__traceFullSub0(VSimTop___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void VSimTop___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    VSimTop___024root* const __restrict vlSelf = static_cast<VSimTop___024root*>(voidSelf);
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        VSimTop___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void VSimTop___024root__traceFullSub0(VSimTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<3>/*95:0*/ __Vtemp807;
    VlWide<3>/*95:0*/ __Vtemp808;
    VlWide<3>/*95:0*/ __Vtemp809;
    VlWide<3>/*95:0*/ __Vtemp810;
    VlWide<3>/*95:0*/ __Vtemp811;
    VlWide<3>/*95:0*/ __Vtemp812;
    VlWide<3>/*95:0*/ __Vtemp813;
    VlWide<3>/*95:0*/ __Vtemp814;
    VlWide<3>/*95:0*/ __Vtemp815;
    VlWide<4>/*127:0*/ __Vtemp816;
    VlWide<3>/*95:0*/ __Vtemp817;
    VlWide<4>/*127:0*/ __Vtemp818;
    VlWide<4>/*127:0*/ __Vtemp819;
    VlWide<3>/*95:0*/ __Vtemp820;
    VlWide<4>/*127:0*/ __Vtemp821;
    VlWide<4>/*127:0*/ __Vtemp822;
    VlWide<3>/*95:0*/ __Vtemp823;
    VlWide<4>/*127:0*/ __Vtemp824;
    VlWide<3>/*95:0*/ __Vtemp825;
    VlWide<4>/*127:0*/ __Vtemp826;
    VlWide<3>/*95:0*/ __Vtemp827;
    VlWide<4>/*127:0*/ __Vtemp828;
    VlWide<3>/*95:0*/ __Vtemp829;
    VlWide<4>/*127:0*/ __Vtemp830;
    VlWide<3>/*95:0*/ __Vtemp831;
    VlWide<4>/*127:0*/ __Vtemp832;
    VlWide<3>/*95:0*/ __Vtemp833;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullQData(oldp+1,(vlSelf->SimTop__DOT__u_cpu__DOT__pipe_mem_wb__DOT__RAMHelper__DOT__rdata),64);
        tracep->fullBit(oldp+3,((1U == (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__w_state))));
        VL_EXTEND_WQ(65,64, __Vtemp807, vlSelf->SimTop__DOT__rw_addr);
        tracep->fullQData(oldp+4,((0xfffffffffffffff8ULL 
                                   & (((QData)((IData)(
                                                       __Vtemp807[1U])) 
                                       << 0x20U) | 
                                      (0xfffffffffffffff8ULL 
                                       & (QData)((IData)(
                                                         __Vtemp807[0U])))))),64);
        tracep->fullCData(oldp+6,(vlSelf->SimTop__DOT__axi_rw__DOT__axi_len),8);
        tracep->fullBit(oldp+7,((2U == (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__w_state))));
        tracep->fullQData(oldp+8,(vlSelf->SimTop__DOT__u_cpu__DOT__reg2_to_mem_forward),64);
        tracep->fullCData(oldp+10,(vlSelf->SimTop__DOT__mem_write_mask_axi),8);
        tracep->fullBit(oldp+11,((3U == (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__w_state))));
        tracep->fullBit(oldp+12,((1U == (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__r_state))));
        tracep->fullBit(oldp+13,((2U == (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__r_state))));
        tracep->fullQData(oldp+14,(vlSelf->SimTop__DOT__if_data_read),64);
        tracep->fullQData(oldp+16,((0xfffffffffffffff8ULL 
                                    & vlSelf->SimTop__DOT__u_cpu__DOT__pc)),64);
        tracep->fullCData(oldp+18,(vlSelf->SimTop__DOT__axi_rw__DOT__rw_resp),2);
        tracep->fullBit(oldp+19,(vlSelf->SimTop__DOT__mem_valid));
        tracep->fullBit(oldp+20,(vlSelf->SimTop__DOT__u_cpu__DOT__write_mem_en_mem));
        tracep->fullQData(oldp+21,((0xfffffffffffffff8ULL 
                                    & vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)),64);
        tracep->fullQData(oldp+23,(vlSelf->SimTop__DOT__mem_data_read),64);
        tracep->fullBit(oldp+25,(vlSelf->SimTop__DOT__rw_valid));
        tracep->fullBit(oldp+26,(vlSelf->SimTop__DOT__axi_rw__DOT__rw_ready));
        tracep->fullBit(oldp+27,(vlSelf->SimTop__DOT__rw_req));
        tracep->fullQData(oldp+28,(vlSelf->SimTop__DOT__rw_addr),64);
        tracep->fullBit(oldp+30,(vlSelf->SimTop__DOT__axi_stall));
        VL_EXTEND_WQ(65,64, __Vtemp808, vlSelf->SimTop__DOT__u_cpu__DOT__reg2_to_mem_forward);
        tracep->fullWData(oldp+31,(__Vtemp808),65);
        VL_EXTEND_WQ(65,64, __Vtemp809, vlSelf->SimTop__DOT__rw_addr);
        tracep->fullWData(oldp+34,(__Vtemp809),65);
        tracep->fullBit(oldp+37,(((IData)(vlSelf->SimTop__DOT__rw_valid) 
                                  & (IData)(vlSelf->SimTop__DOT__rw_req))));
        tracep->fullBit(oldp+38,(((IData)(vlSelf->SimTop__DOT__rw_valid) 
                                  & (~ (IData)(vlSelf->SimTop__DOT__rw_req)))));
        tracep->fullCData(oldp+39,(vlSelf->SimTop__DOT__axi_rw__DOT__w_state),2);
        tracep->fullCData(oldp+40,(vlSelf->SimTop__DOT__axi_rw__DOT__r_state),2);
        tracep->fullBit(oldp+41,((0U == (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__w_state))));
        tracep->fullBit(oldp+42,((0U == (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__r_state))));
        tracep->fullCData(oldp+43,(vlSelf->SimTop__DOT__axi_rw__DOT__len),8);
        VL_EXTEND_WQ(65,64, __Vtemp810, vlSelf->SimTop__DOT__rw_addr);
        tracep->fullBit(oldp+44,((0U == (7U & __Vtemp810[0U]))));
        VL_EXTEND_WQ(65,64, __Vtemp811, vlSelf->SimTop__DOT__rw_addr);
        tracep->fullCData(oldp+45,((7U & __Vtemp811[0U])),4);
        VL_EXTEND_WQ(65,64, __Vtemp812, vlSelf->SimTop__DOT__rw_addr);
        tracep->fullCData(oldp+46,((0xfU & ((IData)(3U) 
                                            + (7U & 
                                               __Vtemp812[0U])))),4);
        VL_EXTEND_WQ(65,64, __Vtemp813, vlSelf->SimTop__DOT__rw_addr);
        tracep->fullBit(oldp+47,((1U & (((IData)(3U) 
                                         + (7U & __Vtemp813[0U])) 
                                        >> 3U))));
        VL_EXTEND_WQ(65,64, __Vtemp814, vlSelf->SimTop__DOT__rw_addr);
        tracep->fullCData(oldp+48,((0x38U & (__Vtemp814[0U] 
                                             << 3U))),6);
        VL_EXTEND_WQ(65,64, __Vtemp815, vlSelf->SimTop__DOT__rw_addr);
        tracep->fullCData(oldp+49,((0x3fU & (- (0x38U 
                                                & (__Vtemp815[0U] 
                                                   << 3U))))),6);
        __Vtemp816[0U] = 0xffffffffU;
        __Vtemp816[1U] = 0U;
        __Vtemp816[2U] = 0U;
        __Vtemp816[3U] = 0U;
        VL_EXTEND_WQ(65,64, __Vtemp817, vlSelf->SimTop__DOT__rw_addr);
        VL_SHIFTL_WWI(128,128,6, __Vtemp818, __Vtemp816, 
                      (0x38U & (__Vtemp817[0U] << 3U)));
        tracep->fullWData(oldp+50,(__Vtemp818),128);
        __Vtemp819[0U] = 0xffffffffU;
        __Vtemp819[1U] = 0U;
        __Vtemp819[2U] = 0U;
        __Vtemp819[3U] = 0U;
        VL_EXTEND_WQ(65,64, __Vtemp820, vlSelf->SimTop__DOT__rw_addr);
        VL_SHIFTL_WWI(128,128,6, __Vtemp821, __Vtemp819, 
                      (0x38U & (__Vtemp820[0U] << 3U)));
        tracep->fullQData(oldp+54,((((QData)((IData)(
                                                     __Vtemp821[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 __Vtemp821[0U])))),64);
        __Vtemp822[0U] = 0xffffffffU;
        __Vtemp822[1U] = 0U;
        __Vtemp822[2U] = 0U;
        __Vtemp822[3U] = 0U;
        VL_EXTEND_WQ(65,64, __Vtemp823, vlSelf->SimTop__DOT__rw_addr);
        VL_SHIFTL_WWI(128,128,6, __Vtemp824, __Vtemp822, 
                      (0x38U & (__Vtemp823[0U] << 3U)));
        tracep->fullQData(oldp+56,((((QData)((IData)(
                                                     __Vtemp824[3U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 __Vtemp824[2U])))),64);
        tracep->fullQData(oldp+58,((QData)((IData)(vlSelf->SimTop__DOT__mem_write_mask_axi))),64);
        tracep->fullCData(oldp+60,(vlSelf->SimTop__DOT__arbitrating__DOT__arb_state),2);
        tracep->fullBit(oldp+61,((0U == (IData)(vlSelf->SimTop__DOT__arbitrating__DOT__arb_state))));
        tracep->fullBit(oldp+62,((1U == (IData)(vlSelf->SimTop__DOT__arbitrating__DOT__arb_state))));
        tracep->fullBit(oldp+63,((2U == (IData)(vlSelf->SimTop__DOT__arbitrating__DOT__arb_state))));
        tracep->fullBit(oldp+64,(vlSelf->SimTop__DOT__arbitrating__DOT__zza_pulse));
        tracep->fullBit(oldp+65,(vlSelf->SimTop__DOT__arbitrating__DOT__zza_count));
        tracep->fullBit(oldp+66,(((0U == (IData)(vlSelf->SimTop__DOT__arbitrating__DOT__arb_state))
                                   ? 0U : (1U & ((1U 
                                                  == (IData)(vlSelf->SimTop__DOT__arbitrating__DOT__arb_state))
                                                  ? (IData)(vlSelf->SimTop__DOT__mem_valid)
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelf->SimTop__DOT__arbitrating__DOT__arb_state))
                                                   ? 1U
                                                   : 0U))))));
        tracep->fullQData(oldp+67,(vlSelf->SimTop__DOT__u_cpu__DOT__pc_id),64);
        tracep->fullQData(oldp+69,(vlSelf->SimTop__DOT__u_cpu__DOT__pc_ex),64);
        tracep->fullQData(oldp+71,(vlSelf->SimTop__DOT__u_cpu__DOT__pc_mem),64);
        tracep->fullQData(oldp+73,(vlSelf->SimTop__DOT__u_cpu__DOT__pc_wb),64);
        tracep->fullIData(oldp+75,(vlSelf->SimTop__DOT__u_cpu__DOT__inst_id),32);
        tracep->fullIData(oldp+76,(((1U & (IData)((vlSelf->SimTop__DOT__u_cpu__DOT__pc 
                                                   >> 2U)))
                                     ? (IData)((vlSelf->SimTop__DOT__if_data_read 
                                                >> 0x20U))
                                     : (IData)(vlSelf->SimTop__DOT__if_data_read))),32);
        tracep->fullIData(oldp+77,(vlSelf->SimTop__DOT__u_cpu__DOT__inst_ex),32);
        tracep->fullIData(oldp+78,(vlSelf->SimTop__DOT__u_cpu__DOT__inst_mem),32);
        tracep->fullIData(oldp+79,(vlSelf->SimTop__DOT__u_cpu__DOT__inst_wb),32);
        tracep->fullCData(oldp+80,(vlSelf->SimTop__DOT__u_cpu__DOT__optype),3);
        tracep->fullBit(oldp+81,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_op_id));
        tracep->fullBit(oldp+82,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_op_ex));
        tracep->fullBit(oldp+83,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_op_mem));
        tracep->fullBit(oldp+84,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_jalr));
        tracep->fullBit(oldp+85,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_regimm_ex));
        tracep->fullBit(oldp+86,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_regimm_mem));
        tracep->fullBit(oldp+87,(((((((((((((((((((
                                                   ((((((((((((((((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sd) 
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
        tracep->fullBit(oldp+88,(((((((((((((((((((
                                                   (((((((((((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_xor) 
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
        tracep->fullBit(oldp+89,(((((((((((((((((((
                                                   (((((((((((((((((((((((((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_andi) 
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
        tracep->fullBit(oldp+90,(((((((((((((((((((
                                                   (((((((((((((((((((((((((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_andi) 
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
        tracep->fullBit(oldp+91,(vlSelf->SimTop__DOT__u_cpu__DOT__wen_ex));
        tracep->fullBit(oldp+92,(vlSelf->SimTop__DOT__u_cpu__DOT__wen_mem));
        tracep->fullBit(oldp+93,(vlSelf->SimTop__DOT__u_cpu__DOT__wen_wb));
        tracep->fullCData(oldp+94,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_id),5);
        tracep->fullCData(oldp+95,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_ex),5);
        tracep->fullBit(oldp+96,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lui));
        tracep->fullBit(oldp+97,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_only_imm_ex));
        tracep->fullBit(oldp+98,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_auipc) 
                                   | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_jal)) 
                                  | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_jalr))));
        tracep->fullBit(oldp+99,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_pc_reg1_ex));
        tracep->fullBit(oldp+100,((((((((((((((((((
                                                   (((((((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_slli) 
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
        tracep->fullBit(oldp+101,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_imm_reg2_ex));
        tracep->fullCData(oldp+102,((0x1fU & (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                              >> 7U))),5);
        tracep->fullCData(oldp+103,(vlSelf->SimTop__DOT__u_cpu__DOT__rd_ex),5);
        tracep->fullCData(oldp+104,(vlSelf->SimTop__DOT__u_cpu__DOT__rd_mem),5);
        tracep->fullCData(oldp+105,(vlSelf->SimTop__DOT__u_cpu__DOT__rd_wb),5);
        tracep->fullCData(oldp+106,((0x1fU & (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                              >> 0xfU))),5);
        tracep->fullCData(oldp+107,(vlSelf->SimTop__DOT__u_cpu__DOT__rs1_ex),5);
        tracep->fullCData(oldp+108,((0x1fU & (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                              >> 0x14U))),5);
        tracep->fullCData(oldp+109,(vlSelf->SimTop__DOT__u_cpu__DOT__rs2_ex),5);
        tracep->fullCData(oldp+110,(vlSelf->SimTop__DOT__u_cpu__DOT__rs2_mem),5);
        tracep->fullQData(oldp+111,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf
                                    [0xaU]),64);
        tracep->fullBit(oldp+113,((((((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lb) 
                                        | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lbu)) 
                                       | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lwu)) 
                                      | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lw)) 
                                     | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_ld)) 
                                    | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lh)) 
                                   | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lhu))));
        tracep->fullBit(oldp+114,(vlSelf->SimTop__DOT__u_cpu__DOT__read_mem_en_ex));
        tracep->fullBit(oldp+115,(vlSelf->SimTop__DOT__u_cpu__DOT__read_mem_en_mem));
        tracep->fullBit(oldp+116,(vlSelf->SimTop__DOT__u_cpu__DOT__read_mem_en_wb));
        tracep->fullBit(oldp+117,(((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sd) 
                                     | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sb)) 
                                    | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sw)) 
                                   | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sh))));
        tracep->fullBit(oldp+118,(vlSelf->SimTop__DOT__u_cpu__DOT__write_mem_en_ex));
        tracep->fullBit(oldp+119,(vlSelf->SimTop__DOT__u_cpu__DOT__write_mem_en_wb));
        tracep->fullCData(oldp+120,(vlSelf->SimTop__DOT__u_cpu__DOT__mem_ctrl_id),4);
        tracep->fullCData(oldp+121,(vlSelf->SimTop__DOT__u_cpu__DOT__mem_ctrl_ex),4);
        tracep->fullCData(oldp+122,(vlSelf->SimTop__DOT__u_cpu__DOT__mem_ctrl_mem),4);
        tracep->fullCData(oldp+123,(vlSelf->SimTop__DOT__u_cpu__DOT__value_width_ctrl_id),4);
        tracep->fullCData(oldp+124,(vlSelf->SimTop__DOT__u_cpu__DOT__value_width_ctrl_ex),4);
        tracep->fullCData(oldp+125,(vlSelf->SimTop__DOT__u_cpu__DOT__branch_type_id),3);
        tracep->fullCData(oldp+126,(vlSelf->SimTop__DOT__u_cpu__DOT__branch_type_ex),3);
        tracep->fullCData(oldp+127,(vlSelf->SimTop__DOT__u_cpu__DOT__branch_type_mem),3);
        tracep->fullCData(oldp+128,(vlSelf->SimTop__DOT__u_cpu__DOT__branch_type_wb),3);
        tracep->fullBit(oldp+129,(((((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_divw) 
                                       | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_divuw)) 
                                      | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_remw)) 
                                     | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_remuw)) 
                                    | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_srliw)) 
                                   | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_srlw))));
        tracep->fullBit(oldp+130,(vlSelf->SimTop__DOT__u_cpu__DOT__operator_a_w_ex));
        tracep->fullBit(oldp+131,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sraiw) 
                                   | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sraw))));
        tracep->fullBit(oldp+132,(vlSelf->SimTop__DOT__u_cpu__DOT__operator_a_w_s_ex));
        tracep->fullBit(oldp+133,(((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_divw) 
                                     | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_divuw)) 
                                    | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_remw)) 
                                   | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_remuw))));
        tracep->fullBit(oldp+134,(vlSelf->SimTop__DOT__u_cpu__DOT__operator_b_w_ex));
        tracep->fullBit(oldp+135,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sll) 
                                    | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sra)) 
                                   | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_srl))));
        tracep->fullBit(oldp+136,(vlSelf->SimTop__DOT__u_cpu__DOT__if_inst_sll_ex));
        tracep->fullBit(oldp+137,(vlSelf->SimTop__DOT__u_cpu__DOT__ebreak_ex));
        tracep->fullBit(oldp+138,(vlSelf->SimTop__DOT__u_cpu__DOT__ebreak_mem));
        tracep->fullBit(oldp+139,(vlSelf->SimTop__DOT__u_cpu__DOT__ebreak_wb));
        tracep->fullQData(oldp+140,(vlSelf->SimTop__DOT__u_cpu__DOT__reg2_value_forwardb_ex),64);
        tracep->fullQData(oldp+142,(vlSelf->SimTop__DOT__u_cpu__DOT__mem_write_mask),64);
        tracep->fullQData(oldp+144,(vlSelf->SimTop__DOT__u_cpu__DOT__reg_write_value_mem),64);
        tracep->fullQData(oldp+146,(vlSelf->SimTop__DOT__u_cpu__DOT__pc),64);
        tracep->fullQData(oldp+148,(vlSelf->SimTop__DOT__u_cpu__DOT__npc),64);
        tracep->fullQData(oldp+150,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_ex),64);
        tracep->fullQData(oldp+152,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_mem),64);
        tracep->fullQData(oldp+154,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_wb),64);
        tracep->fullQData(oldp+156,(vlSelf->SimTop__DOT__u_cpu__DOT__reg1_value_id),64);
        tracep->fullQData(oldp+158,(vlSelf->SimTop__DOT__u_cpu__DOT__reg1_value_ex),64);
        tracep->fullQData(oldp+160,(vlSelf->SimTop__DOT__u_cpu__DOT__reg2_value_id),64);
        tracep->fullQData(oldp+162,(vlSelf->SimTop__DOT__u_cpu__DOT__reg2_value_ex),64);
        tracep->fullQData(oldp+164,(vlSelf->SimTop__DOT__u_cpu__DOT__reg2_value_mem),64);
        tracep->fullQData(oldp+166,(vlSelf->SimTop__DOT__u_cpu__DOT__reg_write_value_wb),64);
        tracep->fullQData(oldp+168,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[0]),64);
        tracep->fullQData(oldp+170,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[1]),64);
        tracep->fullQData(oldp+172,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[2]),64);
        tracep->fullQData(oldp+174,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[3]),64);
        tracep->fullQData(oldp+176,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[4]),64);
        tracep->fullQData(oldp+178,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[5]),64);
        tracep->fullQData(oldp+180,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[6]),64);
        tracep->fullQData(oldp+182,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[7]),64);
        tracep->fullQData(oldp+184,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[8]),64);
        tracep->fullQData(oldp+186,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[9]),64);
        tracep->fullQData(oldp+188,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[10]),64);
        tracep->fullQData(oldp+190,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[11]),64);
        tracep->fullQData(oldp+192,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[12]),64);
        tracep->fullQData(oldp+194,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[13]),64);
        tracep->fullQData(oldp+196,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[14]),64);
        tracep->fullQData(oldp+198,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[15]),64);
        tracep->fullQData(oldp+200,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[16]),64);
        tracep->fullQData(oldp+202,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[17]),64);
        tracep->fullQData(oldp+204,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[18]),64);
        tracep->fullQData(oldp+206,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[19]),64);
        tracep->fullQData(oldp+208,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[20]),64);
        tracep->fullQData(oldp+210,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[21]),64);
        tracep->fullQData(oldp+212,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[22]),64);
        tracep->fullQData(oldp+214,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[23]),64);
        tracep->fullQData(oldp+216,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[24]),64);
        tracep->fullQData(oldp+218,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[25]),64);
        tracep->fullQData(oldp+220,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[26]),64);
        tracep->fullQData(oldp+222,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[27]),64);
        tracep->fullQData(oldp+224,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[28]),64);
        tracep->fullQData(oldp+226,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[29]),64);
        tracep->fullQData(oldp+228,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[30]),64);
        tracep->fullQData(oldp+230,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[31]),64);
        tracep->fullQData(oldp+232,(vlSelf->SimTop__DOT__u_cpu__DOT__value),64);
        tracep->fullQData(oldp+234,(vlSelf->SimTop__DOT__u_cpu__DOT__imm_id),64);
        tracep->fullQData(oldp+236,(vlSelf->SimTop__DOT__u_cpu__DOT__imm_ex),64);
        tracep->fullQData(oldp+238,(vlSelf->SimTop__DOT__u_cpu__DOT__sext_read_mem_value_mem),64);
        tracep->fullQData(oldp+240,(vlSelf->SimTop__DOT__u_cpu__DOT__sext_read_mem_value_wb),64);
        tracep->fullQData(oldp+242,(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_ex),64);
        tracep->fullQData(oldp+244,(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem),64);
        tracep->fullQData(oldp+246,(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_wb),64);
        tracep->fullBit(oldp+248,(vlSelf->SimTop__DOT__u_cpu__DOT__IF_Flush));
        tracep->fullCData(oldp+249,(vlSelf->SimTop__DOT__u_cpu__DOT__Forward_a),2);
        tracep->fullCData(oldp+250,(vlSelf->SimTop__DOT__u_cpu__DOT__Forward_b),2);
        tracep->fullCData(oldp+251,(vlSelf->SimTop__DOT__u_cpu__DOT__Forward_c),2);
        tracep->fullCData(oldp+252,(vlSelf->SimTop__DOT__u_cpu__DOT__Forward_d),2);
        tracep->fullBit(oldp+253,(((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__read_mem_en_wb) 
                                     & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__write_mem_en_mem)) 
                                    & ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rs2_mem) 
                                       == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rd_wb))) 
                                   & (0U != (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rd_wb)))));
        tracep->fullBit(oldp+254,(vlSelf->SimTop__DOT__u_cpu__DOT__pipeline_stall));
        tracep->fullBit(oldp+255,(vlSelf->SimTop__DOT__u_cpu__DOT__pipeline_stall_ex));
        tracep->fullBit(oldp+256,(vlSelf->SimTop__DOT__u_cpu__DOT__pipeline_stall_mem));
        tracep->fullBit(oldp+257,(vlSelf->SimTop__DOT__u_cpu__DOT__pipeline_stall_wb));
        tracep->fullBit(oldp+258,((1U & (~ ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__read_mem_en_ex) 
                                            & (((0x1fU 
                                                 & (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                                    >> 0xfU)) 
                                                == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rd_ex)) 
                                               | ((0x1fU 
                                                   & (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                                      >> 0x14U)) 
                                                  == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__rd_ex))))))));
        tracep->fullBit(oldp+259,(vlSelf->SimTop__DOT__u_cpu__DOT__inst_valid_3));
        tracep->fullBit(oldp+260,((1U & (~ (IData)(vlSelf->SimTop__DOT__axi_stall)))));
        tracep->fullCData(oldp+261,((0x7fU & vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)),7);
        tracep->fullCData(oldp+262,((7U & (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                           >> 0xcU))),3);
        tracep->fullBit(oldp+263,((0U == vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)));
        tracep->fullBit(oldp+264,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_addi));
        tracep->fullBit(oldp+265,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_xor));
        tracep->fullBit(oldp+266,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_xori));
        tracep->fullBit(oldp+267,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_ori));
        tracep->fullBit(oldp+268,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_addiw));
        tracep->fullBit(oldp+269,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_addw));
        tracep->fullBit(oldp+270,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_subw));
        tracep->fullBit(oldp+271,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_mul));
        tracep->fullBit(oldp+272,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_mulw));
        tracep->fullBit(oldp+273,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_divw));
        tracep->fullBit(oldp+274,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_divuw));
        tracep->fullBit(oldp+275,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_remw));
        tracep->fullBit(oldp+276,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_remuw));
        tracep->fullBit(oldp+277,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sub));
        tracep->fullBit(oldp+278,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_add));
        tracep->fullBit(oldp+279,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sll));
        tracep->fullBit(oldp+280,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_slli));
        tracep->fullBit(oldp+281,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_slliw));
        tracep->fullBit(oldp+282,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_srli));
        tracep->fullBit(oldp+283,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_srliw));
        tracep->fullBit(oldp+284,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_andi));
        tracep->fullBit(oldp+285,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_and));
        tracep->fullBit(oldp+286,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_or));
        tracep->fullBit(oldp+287,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_srai));
        tracep->fullBit(oldp+288,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sraiw));
        tracep->fullBit(oldp+289,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sra));
        tracep->fullBit(oldp+290,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sraw));
        tracep->fullBit(oldp+291,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_srl));
        tracep->fullBit(oldp+292,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_srlw));
        tracep->fullBit(oldp+293,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sllw));
        tracep->fullBit(oldp+294,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_auipc));
        tracep->fullBit(oldp+295,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_jal));
        tracep->fullBit(oldp+296,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_slti));
        tracep->fullBit(oldp+297,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sltiu));
        tracep->fullBit(oldp+298,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sltu));
        tracep->fullBit(oldp+299,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_slt));
        tracep->fullBit(oldp+300,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_beq));
        tracep->fullBit(oldp+301,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_bne));
        tracep->fullBit(oldp+302,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_bge));
        tracep->fullBit(oldp+303,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_bgeu));
        tracep->fullBit(oldp+304,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_blt));
        tracep->fullBit(oldp+305,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_bltu));
        tracep->fullBit(oldp+306,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sd));
        tracep->fullBit(oldp+307,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sw));
        tracep->fullBit(oldp+308,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sh));
        tracep->fullBit(oldp+309,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sb));
        tracep->fullBit(oldp+310,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lb));
        tracep->fullBit(oldp+311,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lbu));
        tracep->fullBit(oldp+312,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lhu));
        tracep->fullBit(oldp+313,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lw));
        tracep->fullBit(oldp+314,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lwu));
        tracep->fullBit(oldp+315,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lh));
        tracep->fullBit(oldp+316,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_ld));
        tracep->fullBit(oldp+317,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_ebreak));
        tracep->fullBit(oldp+318,((0x6bU == vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)));
        tracep->fullBit(oldp+319,((((((((((((((((((
                                                   (((((((((((((((((((((((((((((((((((((((((0U 
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
                                   | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_srliw))));
        tracep->fullQData(oldp+320,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__reg1_forwarda),64);
        tracep->fullQData(oldp+322,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a0),64);
        tracep->fullQData(oldp+324,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b0),64);
        tracep->fullQData(oldp+326,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a),64);
        tracep->fullQData(oldp+328,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b),64);
        tracep->fullWData(oldp+330,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__forward_a_mux____pinNumber4),198);
        tracep->fullWData(oldp+337,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__pair_list[0]),66);
        tracep->fullWData(oldp+340,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__pair_list[1]),66);
        tracep->fullWData(oldp+343,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__pair_list[2]),66);
        tracep->fullCData(oldp+346,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__key_list[0]),2);
        tracep->fullCData(oldp+347,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__key_list[1]),2);
        tracep->fullCData(oldp+348,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__key_list[2]),2);
        tracep->fullQData(oldp+349,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+351,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+353,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+355,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+357,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+358,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__forward_b_mux____pinNumber4),198);
        tracep->fullWData(oldp+365,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__pair_list[0]),66);
        tracep->fullWData(oldp+368,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__pair_list[1]),66);
        tracep->fullWData(oldp+371,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__pair_list[2]),66);
        tracep->fullCData(oldp+374,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__key_list[0]),2);
        tracep->fullCData(oldp+375,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__key_list[1]),2);
        tracep->fullCData(oldp+376,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__key_list[2]),2);
        tracep->fullQData(oldp+377,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+379,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+381,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+383,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+385,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+386,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4),1242);
        tracep->fullWData(oldp+425,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[0]),69);
        tracep->fullWData(oldp+428,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[1]),69);
        tracep->fullWData(oldp+431,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[2]),69);
        tracep->fullWData(oldp+434,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[3]),69);
        tracep->fullWData(oldp+437,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[4]),69);
        tracep->fullWData(oldp+440,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[5]),69);
        tracep->fullWData(oldp+443,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[6]),69);
        tracep->fullWData(oldp+446,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[7]),69);
        tracep->fullWData(oldp+449,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[8]),69);
        tracep->fullWData(oldp+452,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[9]),69);
        tracep->fullWData(oldp+455,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[10]),69);
        tracep->fullWData(oldp+458,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[11]),69);
        tracep->fullWData(oldp+461,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[12]),69);
        tracep->fullWData(oldp+464,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[13]),69);
        tracep->fullWData(oldp+467,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[14]),69);
        tracep->fullWData(oldp+470,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[15]),69);
        tracep->fullWData(oldp+473,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[16]),69);
        tracep->fullWData(oldp+476,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[17]),69);
        tracep->fullCData(oldp+479,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[0]),5);
        tracep->fullCData(oldp+480,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[1]),5);
        tracep->fullCData(oldp+481,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[2]),5);
        tracep->fullCData(oldp+482,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[3]),5);
        tracep->fullCData(oldp+483,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[4]),5);
        tracep->fullCData(oldp+484,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[5]),5);
        tracep->fullCData(oldp+485,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[6]),5);
        tracep->fullCData(oldp+486,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[7]),5);
        tracep->fullCData(oldp+487,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[8]),5);
        tracep->fullCData(oldp+488,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[9]),5);
        tracep->fullCData(oldp+489,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[10]),5);
        tracep->fullCData(oldp+490,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[11]),5);
        tracep->fullCData(oldp+491,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[12]),5);
        tracep->fullCData(oldp+492,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[13]),5);
        tracep->fullCData(oldp+493,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[14]),5);
        tracep->fullCData(oldp+494,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[15]),5);
        tracep->fullCData(oldp+495,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[16]),5);
        tracep->fullCData(oldp+496,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[17]),5);
        tracep->fullQData(oldp+497,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+499,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+501,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+503,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+505,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[4]),64);
        tracep->fullQData(oldp+507,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[5]),64);
        tracep->fullQData(oldp+509,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[6]),64);
        tracep->fullQData(oldp+511,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[7]),64);
        tracep->fullQData(oldp+513,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[8]),64);
        tracep->fullQData(oldp+515,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[9]),64);
        tracep->fullQData(oldp+517,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[10]),64);
        tracep->fullQData(oldp+519,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[11]),64);
        tracep->fullQData(oldp+521,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[12]),64);
        tracep->fullQData(oldp+523,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[13]),64);
        tracep->fullQData(oldp+525,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[14]),64);
        tracep->fullQData(oldp+527,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[15]),64);
        tracep->fullQData(oldp+529,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[16]),64);
        tracep->fullQData(oldp+531,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[17]),64);
        tracep->fullQData(oldp+533,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+535,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__hit));
        tracep->fullQData(oldp+536,(vlSelf->SimTop__DOT__u_cpu__DOT__memory__DOT__value_writen_to_mem),64);
        tracep->fullQData(oldp+538,(((vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem 
                                      - 0x80000000ULL) 
                                     >> 3U)),64);
        tracep->fullBit(oldp+540,(((~ (IData)(vlSelf->SimTop__DOT__axi_stall)) 
                                   & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__write_mem_en_mem))));
        tracep->fullQData(oldp+541,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[0]),64);
        tracep->fullQData(oldp+543,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[1]),64);
        tracep->fullQData(oldp+545,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[2]),64);
        tracep->fullQData(oldp+547,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[3]),64);
        tracep->fullQData(oldp+549,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[4]),64);
        tracep->fullQData(oldp+551,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[5]),64);
        tracep->fullQData(oldp+553,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[6]),64);
        tracep->fullQData(oldp+555,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[7]),64);
        tracep->fullQData(oldp+557,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[8]),64);
        tracep->fullQData(oldp+559,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[9]),64);
        tracep->fullQData(oldp+561,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[10]),64);
        tracep->fullQData(oldp+563,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[11]),64);
        tracep->fullQData(oldp+565,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[12]),64);
        tracep->fullQData(oldp+567,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[13]),64);
        tracep->fullQData(oldp+569,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[14]),64);
        tracep->fullQData(oldp+571,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[15]),64);
        tracep->fullQData(oldp+573,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[16]),64);
        tracep->fullQData(oldp+575,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[17]),64);
        tracep->fullQData(oldp+577,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[18]),64);
        tracep->fullQData(oldp+579,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[19]),64);
        tracep->fullQData(oldp+581,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[20]),64);
        tracep->fullQData(oldp+583,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[21]),64);
        tracep->fullQData(oldp+585,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[22]),64);
        tracep->fullQData(oldp+587,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[23]),64);
        tracep->fullQData(oldp+589,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[24]),64);
        tracep->fullQData(oldp+591,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[25]),64);
        tracep->fullQData(oldp+593,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[26]),64);
        tracep->fullQData(oldp+595,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[27]),64);
        tracep->fullQData(oldp+597,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[28]),64);
        tracep->fullQData(oldp+599,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[29]),64);
        tracep->fullQData(oldp+601,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[30]),64);
        tracep->fullQData(oldp+603,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[31]),64);
        tracep->fullQData(oldp+605,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[0]),64);
        tracep->fullQData(oldp+607,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[1]),64);
        tracep->fullQData(oldp+609,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[2]),64);
        tracep->fullQData(oldp+611,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[3]),64);
        tracep->fullQData(oldp+613,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[4]),64);
        tracep->fullQData(oldp+615,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[5]),64);
        tracep->fullQData(oldp+617,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[6]),64);
        tracep->fullQData(oldp+619,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[7]),64);
        tracep->fullQData(oldp+621,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[8]),64);
        tracep->fullQData(oldp+623,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[9]),64);
        tracep->fullQData(oldp+625,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[10]),64);
        tracep->fullQData(oldp+627,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[11]),64);
        tracep->fullQData(oldp+629,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[12]),64);
        tracep->fullQData(oldp+631,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[13]),64);
        tracep->fullQData(oldp+633,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[14]),64);
        tracep->fullQData(oldp+635,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[15]),64);
        tracep->fullQData(oldp+637,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[16]),64);
        tracep->fullQData(oldp+639,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[17]),64);
        tracep->fullQData(oldp+641,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[18]),64);
        tracep->fullQData(oldp+643,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[19]),64);
        tracep->fullQData(oldp+645,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[20]),64);
        tracep->fullQData(oldp+647,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[21]),64);
        tracep->fullQData(oldp+649,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[22]),64);
        tracep->fullQData(oldp+651,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[23]),64);
        tracep->fullQData(oldp+653,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[24]),64);
        tracep->fullQData(oldp+655,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[25]),64);
        tracep->fullQData(oldp+657,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[26]),64);
        tracep->fullQData(oldp+659,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[27]),64);
        tracep->fullQData(oldp+661,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[28]),64);
        tracep->fullQData(oldp+663,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[29]),64);
        tracep->fullQData(oldp+665,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[30]),64);
        tracep->fullQData(oldp+667,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[31]),64);
        tracep->fullWData(oldp+669,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_imm____pinNumber4),335);
        tracep->fullWData(oldp+680,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__pair_list[0]),67);
        tracep->fullWData(oldp+683,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__pair_list[1]),67);
        tracep->fullWData(oldp+686,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__pair_list[2]),67);
        tracep->fullWData(oldp+689,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__pair_list[3]),67);
        tracep->fullWData(oldp+692,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__pair_list[4]),67);
        tracep->fullCData(oldp+695,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__key_list[0]),3);
        tracep->fullCData(oldp+696,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__key_list[1]),3);
        tracep->fullCData(oldp+697,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__key_list[2]),3);
        tracep->fullCData(oldp+698,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__key_list[3]),3);
        tracep->fullCData(oldp+699,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__key_list[4]),3);
        tracep->fullQData(oldp+700,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+702,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+704,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+706,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+708,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__data_list[4]),64);
        tracep->fullQData(oldp+710,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+712,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+713,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4),476);
        tracep->fullWData(oldp+728,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__pair_list[0]),68);
        tracep->fullWData(oldp+731,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__pair_list[1]),68);
        tracep->fullWData(oldp+734,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__pair_list[2]),68);
        tracep->fullWData(oldp+737,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__pair_list[3]),68);
        tracep->fullWData(oldp+740,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__pair_list[4]),68);
        tracep->fullWData(oldp+743,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__pair_list[5]),68);
        tracep->fullWData(oldp+746,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__pair_list[6]),68);
        tracep->fullCData(oldp+749,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__key_list[0]),4);
        tracep->fullCData(oldp+750,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__key_list[1]),4);
        tracep->fullCData(oldp+751,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__key_list[2]),4);
        tracep->fullCData(oldp+752,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__key_list[3]),4);
        tracep->fullCData(oldp+753,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__key_list[4]),4);
        tracep->fullCData(oldp+754,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__key_list[5]),4);
        tracep->fullCData(oldp+755,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__key_list[6]),4);
        tracep->fullQData(oldp+756,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+758,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+760,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+762,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+764,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__data_list[4]),64);
        tracep->fullQData(oldp+766,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__data_list[5]),64);
        tracep->fullQData(oldp+768,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__data_list[6]),64);
        tracep->fullQData(oldp+770,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+772,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+773,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_value0____pinNumber4),136);
        tracep->fullWData(oldp+778,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_value0__DOT__i0__DOT__pair_list[0]),68);
        tracep->fullWData(oldp+781,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_value0__DOT__i0__DOT__pair_list[1]),68);
        tracep->fullCData(oldp+784,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_value0__DOT__i0__DOT__key_list[0]),4);
        tracep->fullCData(oldp+785,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_value0__DOT__i0__DOT__key_list[1]),4);
        tracep->fullQData(oldp+786,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_value0__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+788,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_value0__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+790,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_value0__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+792,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_value0__DOT__i0__DOT__hit));
        tracep->fullQData(oldp+793,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__operation_a_forward),64);
        tracep->fullQData(oldp+795,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__operation_b_forward),64);
        tracep->fullBit(oldp+797,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_en));
        tracep->fullQData(oldp+798,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__pc_branch_addr),64);
        tracep->fullWData(oldp+800,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_c_mux____pinNumber4),264);
        tracep->fullWData(oldp+809,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__pair_list[0]),66);
        tracep->fullWData(oldp+812,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__pair_list[1]),66);
        tracep->fullWData(oldp+815,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__pair_list[2]),66);
        tracep->fullWData(oldp+818,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__pair_list[3]),66);
        tracep->fullCData(oldp+821,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__key_list[0]),2);
        tracep->fullCData(oldp+822,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__key_list[1]),2);
        tracep->fullCData(oldp+823,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__key_list[2]),2);
        tracep->fullCData(oldp+824,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__key_list[3]),2);
        tracep->fullQData(oldp+825,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+827,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+829,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+831,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+833,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+835,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+836,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_d_mux____pinNumber4),264);
        tracep->fullWData(oldp+845,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__pair_list[0]),66);
        tracep->fullWData(oldp+848,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__pair_list[1]),66);
        tracep->fullWData(oldp+851,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__pair_list[2]),66);
        tracep->fullWData(oldp+854,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__pair_list[3]),66);
        tracep->fullCData(oldp+857,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__key_list[0]),2);
        tracep->fullCData(oldp+858,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__key_list[1]),2);
        tracep->fullCData(oldp+859,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__key_list[2]),2);
        tracep->fullCData(oldp+860,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__key_list[3]),2);
        tracep->fullQData(oldp+861,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+863,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+865,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+867,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+869,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+871,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__hit));
        tracep->fullIData(oldp+872,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__branch_test____pinNumber4),24);
        tracep->fullCData(oldp+873,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__pair_list[0]),4);
        tracep->fullCData(oldp+874,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__pair_list[1]),4);
        tracep->fullCData(oldp+875,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__pair_list[2]),4);
        tracep->fullCData(oldp+876,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__pair_list[3]),4);
        tracep->fullCData(oldp+877,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__pair_list[4]),4);
        tracep->fullCData(oldp+878,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__pair_list[5]),4);
        tracep->fullCData(oldp+879,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__key_list[0]),3);
        tracep->fullCData(oldp+880,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__key_list[1]),3);
        tracep->fullCData(oldp+881,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__key_list[2]),3);
        tracep->fullCData(oldp+882,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__key_list[3]),3);
        tracep->fullCData(oldp+883,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__key_list[4]),3);
        tracep->fullCData(oldp+884,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__key_list[5]),3);
        tracep->fullBit(oldp+885,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__data_list[0]));
        tracep->fullBit(oldp+886,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__data_list[1]));
        tracep->fullBit(oldp+887,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__data_list[2]));
        tracep->fullBit(oldp+888,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__data_list[3]));
        tracep->fullBit(oldp+889,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__data_list[4]));
        tracep->fullBit(oldp+890,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__data_list[5]));
        tracep->fullBit(oldp+891,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__lut_out));
        tracep->fullBit(oldp+892,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__hit));
        tracep->fullBit(oldp+893,(vlSelf->SimTop__DOT__u_cpu__DOT__cmt_wen));
        tracep->fullCData(oldp+894,(vlSelf->SimTop__DOT__u_cpu__DOT__cmt_wdest),8);
        tracep->fullQData(oldp+895,(vlSelf->SimTop__DOT__u_cpu__DOT__cmt_wdata),64);
        tracep->fullQData(oldp+897,(vlSelf->SimTop__DOT__u_cpu__DOT__cmt_pc),64);
        tracep->fullIData(oldp+899,(vlSelf->SimTop__DOT__u_cpu__DOT__cmt_inst),32);
        tracep->fullBit(oldp+900,(vlSelf->SimTop__DOT__u_cpu__DOT__cmt_valid));
        tracep->fullBit(oldp+901,(vlSelf->SimTop__DOT__u_cpu__DOT__trap));
        tracep->fullCData(oldp+902,(vlSelf->SimTop__DOT__u_cpu__DOT__trap_code),8);
        tracep->fullQData(oldp+903,(vlSelf->SimTop__DOT__u_cpu__DOT__cycleCnt),64);
        tracep->fullQData(oldp+905,(vlSelf->SimTop__DOT__u_cpu__DOT__instrCnt),64);
        tracep->fullQData(oldp+907,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[0]),64);
        tracep->fullQData(oldp+909,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[1]),64);
        tracep->fullQData(oldp+911,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[2]),64);
        tracep->fullQData(oldp+913,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[3]),64);
        tracep->fullQData(oldp+915,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[4]),64);
        tracep->fullQData(oldp+917,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[5]),64);
        tracep->fullQData(oldp+919,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[6]),64);
        tracep->fullQData(oldp+921,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[7]),64);
        tracep->fullQData(oldp+923,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[8]),64);
        tracep->fullQData(oldp+925,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[9]),64);
        tracep->fullQData(oldp+927,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[10]),64);
        tracep->fullQData(oldp+929,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[11]),64);
        tracep->fullQData(oldp+931,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[12]),64);
        tracep->fullQData(oldp+933,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[13]),64);
        tracep->fullQData(oldp+935,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[14]),64);
        tracep->fullQData(oldp+937,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[15]),64);
        tracep->fullQData(oldp+939,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[16]),64);
        tracep->fullQData(oldp+941,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[17]),64);
        tracep->fullQData(oldp+943,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[18]),64);
        tracep->fullQData(oldp+945,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[19]),64);
        tracep->fullQData(oldp+947,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[20]),64);
        tracep->fullQData(oldp+949,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[21]),64);
        tracep->fullQData(oldp+951,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[22]),64);
        tracep->fullQData(oldp+953,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[23]),64);
        tracep->fullQData(oldp+955,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[24]),64);
        tracep->fullQData(oldp+957,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[25]),64);
        tracep->fullQData(oldp+959,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[26]),64);
        tracep->fullQData(oldp+961,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[27]),64);
        tracep->fullQData(oldp+963,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[28]),64);
        tracep->fullQData(oldp+965,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[29]),64);
        tracep->fullQData(oldp+967,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[30]),64);
        tracep->fullQData(oldp+969,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[31]),64);
        tracep->fullQData(oldp+971,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                    [0U]),64);
        tracep->fullQData(oldp+973,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                    [1U]),64);
        tracep->fullQData(oldp+975,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                    [2U]),64);
        tracep->fullQData(oldp+977,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                    [3U]),64);
        tracep->fullQData(oldp+979,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                    [4U]),64);
        tracep->fullQData(oldp+981,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                    [5U]),64);
        tracep->fullQData(oldp+983,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                    [6U]),64);
        tracep->fullQData(oldp+985,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                    [7U]),64);
        tracep->fullQData(oldp+987,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                    [8U]),64);
        tracep->fullQData(oldp+989,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                    [9U]),64);
        tracep->fullQData(oldp+991,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                    [0xaU]),64);
        tracep->fullQData(oldp+993,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                    [0xbU]),64);
        tracep->fullQData(oldp+995,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                    [0xcU]),64);
        tracep->fullQData(oldp+997,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                    [0xdU]),64);
        tracep->fullQData(oldp+999,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                    [0xeU]),64);
        tracep->fullQData(oldp+1001,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                     [0xfU]),64);
        tracep->fullQData(oldp+1003,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                     [0x10U]),64);
        tracep->fullQData(oldp+1005,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                     [0x11U]),64);
        tracep->fullQData(oldp+1007,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                     [0x12U]),64);
        tracep->fullQData(oldp+1009,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                     [0x13U]),64);
        tracep->fullQData(oldp+1011,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                     [0x14U]),64);
        tracep->fullQData(oldp+1013,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                     [0x15U]),64);
        tracep->fullQData(oldp+1015,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                     [0x16U]),64);
        tracep->fullQData(oldp+1017,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                     [0x17U]),64);
        tracep->fullQData(oldp+1019,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                     [0x18U]),64);
        tracep->fullQData(oldp+1021,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                     [0x19U]),64);
        tracep->fullQData(oldp+1023,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                     [0x1aU]),64);
        tracep->fullQData(oldp+1025,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                     [0x1bU]),64);
        tracep->fullQData(oldp+1027,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                     [0x1cU]),64);
        tracep->fullQData(oldp+1029,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                     [0x1dU]),64);
        tracep->fullQData(oldp+1031,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                     [0x1eU]),64);
        tracep->fullQData(oldp+1033,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                     [0x1fU]),64);
        tracep->fullCData(oldp+1035,((7U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__trap_code))),3);
        tracep->fullBit(oldp+1036,(vlSelf->SimTop__DOT__axi_rw__DOT__trans_done));
        tracep->fullBit(oldp+1037,(vlSelf->SimTop__DOT__axi_rw__DOT__w_hs));
        tracep->fullBit(oldp+1038,(vlSelf->SimTop__DOT__axi_rw__DOT__b_hs));
        tracep->fullBit(oldp+1039,(vlSelf->SimTop__DOT__axi_rw__DOT__r_hs));
        tracep->fullBit(oldp+1040,(vlSelf->SimTop__DOT__axi_rw__DOT__r_done));
        tracep->fullBit(oldp+1041,(vlSelf->clock));
        tracep->fullBit(oldp+1042,(vlSelf->reset));
        tracep->fullQData(oldp+1043,(vlSelf->io_logCtrl_log_begin),64);
        tracep->fullQData(oldp+1045,(vlSelf->io_logCtrl_log_end),64);
        tracep->fullQData(oldp+1047,(vlSelf->io_logCtrl_log_level),64);
        tracep->fullBit(oldp+1049,(vlSelf->io_perfInfo_clean));
        tracep->fullBit(oldp+1050,(vlSelf->io_perfInfo_dump));
        tracep->fullBit(oldp+1051,(vlSelf->io_uart_out_valid));
        tracep->fullCData(oldp+1052,(vlSelf->io_uart_out_ch),8);
        tracep->fullBit(oldp+1053,(vlSelf->io_uart_in_valid));
        tracep->fullCData(oldp+1054,(vlSelf->io_uart_in_ch),8);
        tracep->fullBit(oldp+1055,(vlSelf->io_memAXI_0_aw_ready));
        tracep->fullBit(oldp+1056,(vlSelf->io_memAXI_0_aw_valid));
        tracep->fullQData(oldp+1057,(vlSelf->io_memAXI_0_aw_bits_addr),64);
        tracep->fullCData(oldp+1059,(vlSelf->io_memAXI_0_aw_bits_prot),3);
        tracep->fullCData(oldp+1060,(vlSelf->io_memAXI_0_aw_bits_id),4);
        tracep->fullBit(oldp+1061,(vlSelf->io_memAXI_0_aw_bits_user));
        tracep->fullCData(oldp+1062,(vlSelf->io_memAXI_0_aw_bits_len),8);
        tracep->fullCData(oldp+1063,(vlSelf->io_memAXI_0_aw_bits_size),3);
        tracep->fullCData(oldp+1064,(vlSelf->io_memAXI_0_aw_bits_burst),2);
        tracep->fullBit(oldp+1065,(vlSelf->io_memAXI_0_aw_bits_lock));
        tracep->fullCData(oldp+1066,(vlSelf->io_memAXI_0_aw_bits_cache),4);
        tracep->fullCData(oldp+1067,(vlSelf->io_memAXI_0_aw_bits_qos),4);
        tracep->fullBit(oldp+1068,(vlSelf->io_memAXI_0_w_ready));
        tracep->fullBit(oldp+1069,(vlSelf->io_memAXI_0_w_valid));
        tracep->fullQData(oldp+1070,(vlSelf->io_memAXI_0_w_bits_data[0]),64);
        tracep->fullQData(oldp+1072,(vlSelf->io_memAXI_0_w_bits_data[1]),64);
        tracep->fullQData(oldp+1074,(vlSelf->io_memAXI_0_w_bits_data[2]),64);
        tracep->fullQData(oldp+1076,(vlSelf->io_memAXI_0_w_bits_data[3]),64);
        tracep->fullCData(oldp+1078,(vlSelf->io_memAXI_0_w_bits_strb),8);
        tracep->fullBit(oldp+1079,(vlSelf->io_memAXI_0_w_bits_last));
        tracep->fullBit(oldp+1080,(vlSelf->io_memAXI_0_b_ready));
        tracep->fullBit(oldp+1081,(vlSelf->io_memAXI_0_b_valid));
        tracep->fullCData(oldp+1082,(vlSelf->io_memAXI_0_b_bits_resp),2);
        tracep->fullCData(oldp+1083,(vlSelf->io_memAXI_0_b_bits_id),4);
        tracep->fullBit(oldp+1084,(vlSelf->io_memAXI_0_b_bits_user));
        tracep->fullBit(oldp+1085,(vlSelf->io_memAXI_0_ar_ready));
        tracep->fullBit(oldp+1086,(vlSelf->io_memAXI_0_ar_valid));
        tracep->fullQData(oldp+1087,(vlSelf->io_memAXI_0_ar_bits_addr),64);
        tracep->fullCData(oldp+1089,(vlSelf->io_memAXI_0_ar_bits_prot),3);
        tracep->fullCData(oldp+1090,(vlSelf->io_memAXI_0_ar_bits_id),4);
        tracep->fullBit(oldp+1091,(vlSelf->io_memAXI_0_ar_bits_user));
        tracep->fullCData(oldp+1092,(vlSelf->io_memAXI_0_ar_bits_len),8);
        tracep->fullCData(oldp+1093,(vlSelf->io_memAXI_0_ar_bits_size),3);
        tracep->fullCData(oldp+1094,(vlSelf->io_memAXI_0_ar_bits_burst),2);
        tracep->fullBit(oldp+1095,(vlSelf->io_memAXI_0_ar_bits_lock));
        tracep->fullCData(oldp+1096,(vlSelf->io_memAXI_0_ar_bits_cache),4);
        tracep->fullCData(oldp+1097,(vlSelf->io_memAXI_0_ar_bits_qos),4);
        tracep->fullBit(oldp+1098,(vlSelf->io_memAXI_0_r_ready));
        tracep->fullBit(oldp+1099,(vlSelf->io_memAXI_0_r_valid));
        tracep->fullCData(oldp+1100,(vlSelf->io_memAXI_0_r_bits_resp),2);
        tracep->fullQData(oldp+1101,(vlSelf->io_memAXI_0_r_bits_data[0]),64);
        tracep->fullQData(oldp+1103,(vlSelf->io_memAXI_0_r_bits_data[1]),64);
        tracep->fullQData(oldp+1105,(vlSelf->io_memAXI_0_r_bits_data[2]),64);
        tracep->fullQData(oldp+1107,(vlSelf->io_memAXI_0_r_bits_data[3]),64);
        tracep->fullBit(oldp+1109,(vlSelf->io_memAXI_0_r_bits_last));
        tracep->fullCData(oldp+1110,(vlSelf->io_memAXI_0_r_bits_id),4);
        tracep->fullBit(oldp+1111,(vlSelf->io_memAXI_0_r_bits_user));
        tracep->fullQData(oldp+1112,(vlSelf->io_memAXI_0_r_bits_data
                                     [0U]),64);
        tracep->fullBit(oldp+1114,((1U & (~ (IData)(vlSelf->reset)))));
        VL_EXTEND_WQ(65,64, __Vtemp825, vlSelf->io_memAXI_0_r_bits_data
                     [0U]);
        tracep->fullWData(oldp+1115,(__Vtemp825),65);
        tracep->fullBit(oldp+1118,(((IData)(vlSelf->io_memAXI_0_aw_ready) 
                                    & (1U == (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__w_state)))));
        tracep->fullBit(oldp+1119,(((IData)(vlSelf->io_memAXI_0_ar_ready) 
                                    & (1U == (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__r_state)))));
        tracep->fullBit(oldp+1120,((((IData)(vlSelf->reset) 
                                     | ((IData)(vlSelf->SimTop__DOT__rw_req) 
                                        & (0U == (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__w_state)))) 
                                    | ((~ (IData)(vlSelf->SimTop__DOT__rw_req)) 
                                       & (0U == (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__r_state))))));
        tracep->fullBit(oldp+1121,((((IData)(vlSelf->SimTop__DOT__axi_rw__DOT__len) 
                                     != (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__axi_len)) 
                                    & ((IData)(vlSelf->SimTop__DOT__axi_rw__DOT__w_hs) 
                                       | (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__r_hs)))));
        tracep->fullBit(oldp+1122,(((IData)(vlSelf->SimTop__DOT__axi_rw__DOT__trans_done) 
                                    | (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__rw_ready))));
        tracep->fullBit(oldp+1123,((1U & ((IData)(vlSelf->SimTop__DOT__rw_req)
                                           ? (IData)(vlSelf->io_memAXI_0_b_bits_resp)
                                           : (IData)(vlSelf->io_memAXI_0_r_bits_resp)))));
        __Vtemp826[0U] = 0xffffffffU;
        __Vtemp826[1U] = 0U;
        __Vtemp826[2U] = 0U;
        __Vtemp826[3U] = 0U;
        VL_EXTEND_WQ(65,64, __Vtemp827, vlSelf->SimTop__DOT__rw_addr);
        VL_SHIFTL_WWI(128,128,6, __Vtemp828, __Vtemp826, 
                      (0x38U & (__Vtemp827[0U] << 3U)));
        VL_EXTEND_WQ(65,64, __Vtemp829, vlSelf->SimTop__DOT__rw_addr);
        tracep->fullQData(oldp+1124,(((vlSelf->io_memAXI_0_r_bits_data
                                       [0U] & (((QData)((IData)(
                                                                __Vtemp828[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 __Vtemp828[0U])))) 
                                      >> (0x38U & (
                                                   __Vtemp829[0U] 
                                                   << 3U)))),64);
        __Vtemp830[0U] = 0xffffffffU;
        __Vtemp830[1U] = 0U;
        __Vtemp830[2U] = 0U;
        __Vtemp830[3U] = 0U;
        VL_EXTEND_WQ(65,64, __Vtemp831, vlSelf->SimTop__DOT__rw_addr);
        VL_SHIFTL_WWI(128,128,6, __Vtemp832, __Vtemp830, 
                      (0x38U & (__Vtemp831[0U] << 3U)));
        VL_EXTEND_WQ(65,64, __Vtemp833, vlSelf->SimTop__DOT__rw_addr);
        tracep->fullQData(oldp+1126,(((vlSelf->io_memAXI_0_r_bits_data
                                       [0U] & (((QData)((IData)(
                                                                __Vtemp832[3U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 __Vtemp832[2U])))) 
                                      << (0x3fU & (- 
                                                   (0x38U 
                                                    & (__Vtemp833[0U] 
                                                       << 3U)))))),64);
        tracep->fullCData(oldp+1128,(0U),3);
        tracep->fullCData(oldp+1129,(0U),4);
        tracep->fullBit(oldp+1130,(0U));
        tracep->fullCData(oldp+1131,(3U),3);
        tracep->fullCData(oldp+1132,(1U),2);
        tracep->fullBit(oldp+1133,(0U));
        tracep->fullCData(oldp+1134,(0xfU),4);
        tracep->fullBit(oldp+1135,(1U));
        tracep->fullCData(oldp+1136,(2U),4);
        tracep->fullCData(oldp+1137,(vlSelf->SimTop__DOT__ar_region),4);
        tracep->fullBit(oldp+1138,(vlSelf->SimTop__DOT__if_ready));
        tracep->fullCData(oldp+1139,(2U),2);
        tracep->fullIData(oldp+1140,(0x40U),32);
        tracep->fullIData(oldp+1141,(4U),32);
        tracep->fullIData(oldp+1142,(1U),32);
        tracep->fullCData(oldp+1143,(0U),2);
        tracep->fullCData(oldp+1144,(3U),2);
        tracep->fullIData(oldp+1145,(3U),32);
        tracep->fullIData(oldp+1146,(6U),32);
        tracep->fullIData(oldp+1147,(0x80U),32);
        tracep->fullCData(oldp+1148,(3U),4);
        tracep->fullQData(oldp+1149,(vlSelf->SimTop__DOT__u_cpu__DOT__pc_if),64);
        tracep->fullBit(oldp+1151,(vlSelf->SimTop__DOT__u_cpu__DOT__ebreak_id));
        tracep->fullIData(oldp+1152,(2U),32);
        tracep->fullIData(oldp+1153,(0x42U),32);
        tracep->fullIData(oldp+1154,(3U),32);
        tracep->fullIData(oldp+1155,(0x12U),32);
        tracep->fullIData(oldp+1156,(5U),32);
        tracep->fullQData(oldp+1157,(0xfedcba9876543210ULL),64);
        tracep->fullIData(oldp+1159,(0x45U),32);
        tracep->fullIData(oldp+1160,(0x12U),32);
        tracep->fullQData(oldp+1161,(0ULL),64);
        tracep->fullQData(oldp+1163,(0xffff0000ffff0000ULL),64);
        tracep->fullIData(oldp+1165,(0x43U),32);
        tracep->fullIData(oldp+1166,(5U),32);
        tracep->fullIData(oldp+1167,(7U),32);
        tracep->fullIData(oldp+1168,(0x44U),32);
        tracep->fullIData(oldp+1169,(7U),32);
        tracep->fullIData(oldp+1170,(2U),32);
        tracep->fullIData(oldp+1171,(4U),32);
        tracep->fullIData(oldp+1172,(6U),32);
        tracep->fullCData(oldp+1173,(0U),8);
    }
}

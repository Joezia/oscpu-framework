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
        tracep->declBit(c+1285,"clock", false,-1);
        tracep->declBit(c+1286,"reset", false,-1);
        tracep->declQuad(c+1287,"io_logCtrl_log_begin", false,-1, 63,0);
        tracep->declQuad(c+1289,"io_logCtrl_log_end", false,-1, 63,0);
        tracep->declQuad(c+1291,"io_logCtrl_log_level", false,-1, 63,0);
        tracep->declBit(c+1293,"io_perfInfo_clean", false,-1);
        tracep->declBit(c+1294,"io_perfInfo_dump", false,-1);
        tracep->declBit(c+1295,"io_uart_out_valid", false,-1);
        tracep->declBus(c+1296,"io_uart_out_ch", false,-1, 7,0);
        tracep->declBit(c+1297,"io_uart_in_valid", false,-1);
        tracep->declBus(c+1298,"io_uart_in_ch", false,-1, 7,0);
        tracep->declBit(c+1299,"io_memAXI_0_aw_ready", false,-1);
        tracep->declBit(c+1300,"io_memAXI_0_aw_valid", false,-1);
        tracep->declBus(c+1301,"io_memAXI_0_aw_bits_addr", false,-1, 31,0);
        tracep->declBus(c+1302,"io_memAXI_0_aw_bits_prot", false,-1, 2,0);
        tracep->declBus(c+1303,"io_memAXI_0_aw_bits_id", false,-1, 3,0);
        tracep->declBus(c+1304,"io_memAXI_0_aw_bits_user", false,-1, 0,0);
        tracep->declBus(c+1305,"io_memAXI_0_aw_bits_len", false,-1, 7,0);
        tracep->declBus(c+1306,"io_memAXI_0_aw_bits_size", false,-1, 2,0);
        tracep->declBus(c+1307,"io_memAXI_0_aw_bits_burst", false,-1, 1,0);
        tracep->declBit(c+1308,"io_memAXI_0_aw_bits_lock", false,-1);
        tracep->declBus(c+1309,"io_memAXI_0_aw_bits_cache", false,-1, 3,0);
        tracep->declBus(c+1310,"io_memAXI_0_aw_bits_qos", false,-1, 3,0);
        tracep->declBit(c+1311,"io_memAXI_0_w_ready", false,-1);
        tracep->declBit(c+1312,"io_memAXI_0_w_valid", false,-1);
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+1313+i*2,"io_memAXI_0_w_bits_data", true,(i+0), 63,0);}}
        tracep->declBus(c+1321,"io_memAXI_0_w_bits_strb", false,-1, 7,0);
        tracep->declBit(c+1322,"io_memAXI_0_w_bits_last", false,-1);
        tracep->declBit(c+1323,"io_memAXI_0_b_ready", false,-1);
        tracep->declBit(c+1324,"io_memAXI_0_b_valid", false,-1);
        tracep->declBus(c+1325,"io_memAXI_0_b_bits_resp", false,-1, 1,0);
        tracep->declBus(c+1326,"io_memAXI_0_b_bits_id", false,-1, 3,0);
        tracep->declBus(c+1327,"io_memAXI_0_b_bits_user", false,-1, 0,0);
        tracep->declBit(c+1328,"io_memAXI_0_ar_ready", false,-1);
        tracep->declBit(c+1329,"io_memAXI_0_ar_valid", false,-1);
        tracep->declBus(c+1330,"io_memAXI_0_ar_bits_addr", false,-1, 31,0);
        tracep->declBus(c+1331,"io_memAXI_0_ar_bits_prot", false,-1, 2,0);
        tracep->declBus(c+1332,"io_memAXI_0_ar_bits_id", false,-1, 3,0);
        tracep->declBus(c+1333,"io_memAXI_0_ar_bits_user", false,-1, 0,0);
        tracep->declBus(c+1334,"io_memAXI_0_ar_bits_len", false,-1, 7,0);
        tracep->declBus(c+1335,"io_memAXI_0_ar_bits_size", false,-1, 2,0);
        tracep->declBus(c+1336,"io_memAXI_0_ar_bits_burst", false,-1, 1,0);
        tracep->declBit(c+1337,"io_memAXI_0_ar_bits_lock", false,-1);
        tracep->declBus(c+1338,"io_memAXI_0_ar_bits_cache", false,-1, 3,0);
        tracep->declBus(c+1339,"io_memAXI_0_ar_bits_qos", false,-1, 3,0);
        tracep->declBit(c+1340,"io_memAXI_0_r_ready", false,-1);
        tracep->declBit(c+1341,"io_memAXI_0_r_valid", false,-1);
        tracep->declBus(c+1342,"io_memAXI_0_r_bits_resp", false,-1, 1,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+1343+i*2,"io_memAXI_0_r_bits_data", true,(i+0), 63,0);}}
        tracep->declBit(c+1351,"io_memAXI_0_r_bits_last", false,-1);
        tracep->declBus(c+1352,"io_memAXI_0_r_bits_id", false,-1, 3,0);
        tracep->declBus(c+1353,"io_memAXI_0_r_bits_user", false,-1, 0,0);
        tracep->declBit(c+1285,"SimTop clock", false,-1);
        tracep->declBit(c+1286,"SimTop reset", false,-1);
        tracep->declQuad(c+1287,"SimTop io_logCtrl_log_begin", false,-1, 63,0);
        tracep->declQuad(c+1289,"SimTop io_logCtrl_log_end", false,-1, 63,0);
        tracep->declQuad(c+1291,"SimTop io_logCtrl_log_level", false,-1, 63,0);
        tracep->declBit(c+1293,"SimTop io_perfInfo_clean", false,-1);
        tracep->declBit(c+1294,"SimTop io_perfInfo_dump", false,-1);
        tracep->declBit(c+1295,"SimTop io_uart_out_valid", false,-1);
        tracep->declBus(c+1296,"SimTop io_uart_out_ch", false,-1, 7,0);
        tracep->declBit(c+1297,"SimTop io_uart_in_valid", false,-1);
        tracep->declBus(c+1298,"SimTop io_uart_in_ch", false,-1, 7,0);
        tracep->declBit(c+1299,"SimTop io_memAXI_0_aw_ready", false,-1);
        tracep->declBit(c+1300,"SimTop io_memAXI_0_aw_valid", false,-1);
        tracep->declBus(c+1301,"SimTop io_memAXI_0_aw_bits_addr", false,-1, 31,0);
        tracep->declBus(c+1302,"SimTop io_memAXI_0_aw_bits_prot", false,-1, 2,0);
        tracep->declBus(c+1303,"SimTop io_memAXI_0_aw_bits_id", false,-1, 3,0);
        tracep->declBus(c+1304,"SimTop io_memAXI_0_aw_bits_user", false,-1, 0,0);
        tracep->declBus(c+1305,"SimTop io_memAXI_0_aw_bits_len", false,-1, 7,0);
        tracep->declBus(c+1306,"SimTop io_memAXI_0_aw_bits_size", false,-1, 2,0);
        tracep->declBus(c+1307,"SimTop io_memAXI_0_aw_bits_burst", false,-1, 1,0);
        tracep->declBit(c+1308,"SimTop io_memAXI_0_aw_bits_lock", false,-1);
        tracep->declBus(c+1309,"SimTop io_memAXI_0_aw_bits_cache", false,-1, 3,0);
        tracep->declBus(c+1310,"SimTop io_memAXI_0_aw_bits_qos", false,-1, 3,0);
        tracep->declBit(c+1311,"SimTop io_memAXI_0_w_ready", false,-1);
        tracep->declBit(c+1312,"SimTop io_memAXI_0_w_valid", false,-1);
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+1313+i*2,"SimTop io_memAXI_0_w_bits_data", true,(i+0), 63,0);}}
        tracep->declBus(c+1321,"SimTop io_memAXI_0_w_bits_strb", false,-1, 7,0);
        tracep->declBit(c+1322,"SimTop io_memAXI_0_w_bits_last", false,-1);
        tracep->declBit(c+1323,"SimTop io_memAXI_0_b_ready", false,-1);
        tracep->declBit(c+1324,"SimTop io_memAXI_0_b_valid", false,-1);
        tracep->declBus(c+1325,"SimTop io_memAXI_0_b_bits_resp", false,-1, 1,0);
        tracep->declBus(c+1326,"SimTop io_memAXI_0_b_bits_id", false,-1, 3,0);
        tracep->declBus(c+1327,"SimTop io_memAXI_0_b_bits_user", false,-1, 0,0);
        tracep->declBit(c+1328,"SimTop io_memAXI_0_ar_ready", false,-1);
        tracep->declBit(c+1329,"SimTop io_memAXI_0_ar_valid", false,-1);
        tracep->declBus(c+1330,"SimTop io_memAXI_0_ar_bits_addr", false,-1, 31,0);
        tracep->declBus(c+1331,"SimTop io_memAXI_0_ar_bits_prot", false,-1, 2,0);
        tracep->declBus(c+1332,"SimTop io_memAXI_0_ar_bits_id", false,-1, 3,0);
        tracep->declBus(c+1333,"SimTop io_memAXI_0_ar_bits_user", false,-1, 0,0);
        tracep->declBus(c+1334,"SimTop io_memAXI_0_ar_bits_len", false,-1, 7,0);
        tracep->declBus(c+1335,"SimTop io_memAXI_0_ar_bits_size", false,-1, 2,0);
        tracep->declBus(c+1336,"SimTop io_memAXI_0_ar_bits_burst", false,-1, 1,0);
        tracep->declBit(c+1337,"SimTop io_memAXI_0_ar_bits_lock", false,-1);
        tracep->declBus(c+1338,"SimTop io_memAXI_0_ar_bits_cache", false,-1, 3,0);
        tracep->declBus(c+1339,"SimTop io_memAXI_0_ar_bits_qos", false,-1, 3,0);
        tracep->declBit(c+1340,"SimTop io_memAXI_0_r_ready", false,-1);
        tracep->declBit(c+1341,"SimTop io_memAXI_0_r_valid", false,-1);
        tracep->declBus(c+1342,"SimTop io_memAXI_0_r_bits_resp", false,-1, 1,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+1343+i*2,"SimTop io_memAXI_0_r_bits_data", true,(i+0), 63,0);}}
        tracep->declBit(c+1351,"SimTop io_memAXI_0_r_bits_last", false,-1);
        tracep->declBus(c+1352,"SimTop io_memAXI_0_r_bits_id", false,-1, 3,0);
        tracep->declBus(c+1353,"SimTop io_memAXI_0_r_bits_user", false,-1, 0,0);
        tracep->declBit(c+1299,"SimTop aw_ready", false,-1);
        tracep->declBit(c+1,"SimTop aw_valid", false,-1);
        tracep->declBus(c+2,"SimTop aw_addr", false,-1, 31,0);
        tracep->declBus(c+1370,"SimTop aw_id", false,-1, 3,0);
        tracep->declBus(c+1371,"SimTop aw_len", false,-1, 7,0);
        tracep->declBus(c+1372,"SimTop aw_size", false,-1, 2,0);
        tracep->declBus(c+1373,"SimTop aw_burst", false,-1, 1,0);
        tracep->declBit(c+1311,"SimTop w_ready", false,-1);
        tracep->declBit(c+3,"SimTop w_valid", false,-1);
        tracep->declQuad(c+4,"SimTop w_data", false,-1, 63,0);
        tracep->declBus(c+6,"SimTop w_strb", false,-1, 7,0);
        tracep->declBit(c+1374,"SimTop w_last", false,-1);
        tracep->declBit(c+7,"SimTop b_ready", false,-1);
        tracep->declBit(c+1324,"SimTop b_valid", false,-1);
        tracep->declBus(c+1325,"SimTop b_resp", false,-1, 1,0);
        tracep->declBus(c+1326,"SimTop b_id", false,-1, 3,0);
        tracep->declBit(c+1328,"SimTop ar_ready", false,-1);
        tracep->declBit(c+8,"SimTop ar_valid", false,-1);
        tracep->declBus(c+2,"SimTop ar_addr", false,-1, 31,0);
        tracep->declBus(c+1370,"SimTop ar_id", false,-1, 3,0);
        tracep->declBus(c+9,"SimTop ar_len", false,-1, 7,0);
        tracep->declBus(c+1372,"SimTop ar_size", false,-1, 2,0);
        tracep->declBus(c+1373,"SimTop ar_burst", false,-1, 1,0);
        tracep->declBit(c+10,"SimTop r_ready", false,-1);
        tracep->declBit(c+1341,"SimTop r_valid", false,-1);
        tracep->declBus(c+1342,"SimTop r_resp", false,-1, 1,0);
        tracep->declQuad(c+1354,"SimTop r_data", false,-1, 63,0);
        tracep->declBit(c+1351,"SimTop r_last", false,-1);
        tracep->declBus(c+1352,"SimTop r_id", false,-1, 3,0);
        tracep->declBit(c+1356,"SimTop rst", false,-1);
        tracep->declBit(c+1285,"SimTop clk", false,-1);
        tracep->declBit(c+1374,"SimTop if_valid", false,-1);
        tracep->declBit(c+1375,"SimTop if_ready", false,-1);
        tracep->declBit(c+1376,"SimTop if_req", false,-1);
        tracep->declQuad(c+11,"SimTop if_data_read", false,-1, 63,0);
        tracep->declQuad(c+13,"SimTop if_addr", false,-1, 63,0);
        tracep->declBus(c+1377,"SimTop if_size", false,-1, 1,0);
        tracep->declBus(c+15,"SimTop if_resp", false,-1, 1,0);
        tracep->declBit(c+16,"SimTop mem_valid", false,-1);
        tracep->declBit(c+17,"SimTop mem_req", false,-1);
        tracep->declQuad(c+18,"SimTop mem_addr", false,-1, 63,0);
        tracep->declQuad(c+20,"SimTop mem_data_read", false,-1, 63,0);
        tracep->declQuad(c+4,"SimTop mem_data_write", false,-1, 63,0);
        tracep->declBus(c+6,"SimTop mem_write_mask_axi", false,-1, 7,0);
        tracep->declBit(c+22,"SimTop icache_valid", false,-1);
        tracep->declQuad(c+23,"SimTop icache_addr", false,-1, 63,0);
        tracep->declBus(c+25,"SimTop icache_len", false,-1, 7,0);
        tracep->declBit(c+26,"SimTop icache_req", false,-1);
        tracep->declQuad(c+27,"SimTop icache_data_read", false,-1, 63,0);
        tracep->declBit(c+29,"SimTop icache_stall", false,-1);
        tracep->declBit(c+30,"SimTop rw_valid", false,-1);
        tracep->declBit(c+31,"SimTop rw_ready", false,-1);
        tracep->declBit(c+32,"SimTop rw_req", false,-1);
        tracep->declQuad(c+1354,"SimTop rw_data_read", false,-1, 63,0);
        tracep->declQuad(c+4,"SimTop rw_data_write", false,-1, 63,0);
        tracep->declQuad(c+33,"SimTop rw_addr", false,-1, 63,0);
        tracep->declBus(c+1377,"SimTop rw_size", false,-1, 1,0);
        tracep->declBus(c+25,"SimTop rw_len", false,-1, 7,0);
        tracep->declBus(c+35,"SimTop rw_arb_state", false,-1, 1,0);
        tracep->declBit(c+1280,"SimTop rw_trans_done", false,-1);
        tracep->declBit(c+1281,"SimTop rw_r_hs", false,-1);
        tracep->declBit(c+36,"SimTop arb_if_r_hs", false,-1);
        tracep->declBit(c+37,"SimTop arb_if_trans_done", false,-1);
        tracep->declBit(c+38,"SimTop axi_trans_done_pulse", false,-1);
        tracep->declBit(c+39,"SimTop axi_stall", false,-1);
        tracep->declBit(c+40,"SimTop io_char_valid", false,-1);
        tracep->declBus(c+41,"SimTop io_char", false,-1, 7,0);
        tracep->declArray(c+42,"SimTop iram_data_read_128", false,-1, 127,0);
        tracep->declBit(c+46,"SimTop iram_wen", false,-1);
        tracep->declArray(c+47,"SimTop iram_bwen", false,-1, 127,0);
        tracep->declBus(c+51,"SimTop iram_addr", false,-1, 5,0);
        tracep->declArray(c+52,"SimTop iram_data", false,-1, 127,0);
        tracep->declBit(c+56,"SimTop clint_wen", false,-1);
        tracep->declBit(c+57,"SimTop clint_ren", false,-1);
        tracep->declQuad(c+58,"SimTop clint_addr", false,-1, 63,0);
        tracep->declQuad(c+60,"SimTop clint_data", false,-1, 63,0);
        tracep->declQuad(c+62,"SimTop clint_data_read", false,-1, 63,0);
        tracep->declBit(c+64,"SimTop mtime_ge_mtimecmp", false,-1);
        tracep->declBus(c+1378,"SimTop axi_rw RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1378,"SimTop axi_rw RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1378,"SimTop axi_rw AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1379,"SimTop axi_rw AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1380,"SimTop axi_rw AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1381,"SimTop axi_rw AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+1285,"SimTop axi_rw clock", false,-1);
        tracep->declBit(c+1356,"SimTop axi_rw rst", false,-1);
        tracep->declBit(c+30,"SimTop axi_rw rw_valid_i", false,-1);
        tracep->declBit(c+31,"SimTop axi_rw rw_ready_o", false,-1);
        tracep->declBit(c+32,"SimTop axi_rw rw_req_i", false,-1);
        tracep->declArray(c+1357,"SimTop axi_rw data_read_o", false,-1, 64,0);
        tracep->declArray(c+65,"SimTop axi_rw data_write_i", false,-1, 64,0);
        tracep->declBus(c+6,"SimTop axi_rw mask_write_i", false,-1, 7,0);
        tracep->declArray(c+68,"SimTop axi_rw rw_addr_i", false,-1, 64,0);
        tracep->declBus(c+25,"SimTop axi_rw rw_len_i", false,-1, 7,0);
        tracep->declBus(c+1377,"SimTop axi_rw rw_size_i", false,-1, 1,0);
        tracep->declBus(c+35,"SimTop axi_rw rw_arb_state_i", false,-1, 1,0);
        tracep->declBus(c+15,"SimTop axi_rw rw_resp_o", false,-1, 1,0);
        tracep->declBit(c+1281,"SimTop axi_rw rw_r_hs_o", false,-1);
        tracep->declBit(c+1280,"SimTop axi_rw rw_trans_done_o", false,-1);
        tracep->declBit(c+1299,"SimTop axi_rw axi_aw_ready_i", false,-1);
        tracep->declBit(c+1,"SimTop axi_rw axi_aw_valid_o", false,-1);
        tracep->declBus(c+2,"SimTop axi_rw axi_aw_addr_o", false,-1, 31,0);
        tracep->declBus(c+1382,"SimTop axi_rw axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+1370,"SimTop axi_rw axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+1383,"SimTop axi_rw axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+1371,"SimTop axi_rw axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+1372,"SimTop axi_rw axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+1373,"SimTop axi_rw axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+1376,"SimTop axi_rw axi_aw_lock_o", false,-1);
        tracep->declBus(c+1384,"SimTop axi_rw axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+1370,"SimTop axi_rw axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+1370,"SimTop axi_rw axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+1311,"SimTop axi_rw axi_w_ready_i", false,-1);
        tracep->declBit(c+3,"SimTop axi_rw axi_w_valid_o", false,-1);
        tracep->declQuad(c+4,"SimTop axi_rw axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+6,"SimTop axi_rw axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+1374,"SimTop axi_rw axi_w_last_o", false,-1);
        tracep->declBus(c+1383,"SimTop axi_rw axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+7,"SimTop axi_rw axi_b_ready_o", false,-1);
        tracep->declBit(c+1324,"SimTop axi_rw axi_b_valid_i", false,-1);
        tracep->declBus(c+1325,"SimTop axi_rw axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+1326,"SimTop axi_rw axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+1385,"SimTop axi_rw axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+1328,"SimTop axi_rw axi_ar_ready_i", false,-1);
        tracep->declBit(c+8,"SimTop axi_rw axi_ar_valid_o", false,-1);
        tracep->declBus(c+2,"SimTop axi_rw axi_ar_addr_o", false,-1, 31,0);
        tracep->declBus(c+1382,"SimTop axi_rw axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+1370,"SimTop axi_rw axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+1383,"SimTop axi_rw axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+9,"SimTop axi_rw axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+1372,"SimTop axi_rw axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+1373,"SimTop axi_rw axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+1376,"SimTop axi_rw axi_ar_lock_o", false,-1);
        tracep->declBus(c+1386,"SimTop axi_rw axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+1370,"SimTop axi_rw axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+1387,"SimTop axi_rw axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+10,"SimTop axi_rw axi_r_ready_o", false,-1);
        tracep->declBit(c+1341,"SimTop axi_rw axi_r_valid_i", false,-1);
        tracep->declBus(c+1342,"SimTop axi_rw axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+1354,"SimTop axi_rw axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+1351,"SimTop axi_rw axi_r_last_i", false,-1);
        tracep->declBus(c+1352,"SimTop axi_rw axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+1388,"SimTop axi_rw axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+71,"SimTop axi_rw w_valid", false,-1);
        tracep->declBit(c+72,"SimTop axi_rw r_valid", false,-1);
        tracep->declBit(c+1360,"SimTop axi_rw aw_hs", false,-1);
        tracep->declBit(c+1282,"SimTop axi_rw w_hs", false,-1);
        tracep->declBit(c+1283,"SimTop axi_rw b_hs", false,-1);
        tracep->declBit(c+1361,"SimTop axi_rw ar_hs", false,-1);
        tracep->declBit(c+1281,"SimTop axi_rw r_hs", false,-1);
        tracep->declBit(c+1282,"SimTop axi_rw w_done", false,-1);
        tracep->declBit(c+1284,"SimTop axi_rw r_done", false,-1);
        tracep->declBit(c+1280,"SimTop axi_rw trans_done", false,-1);
        tracep->declBus(c+1389,"SimTop axi_rw W_STATE_IDLE", false,-1, 1,0);
        tracep->declBus(c+1373,"SimTop axi_rw W_STATE_ADDR", false,-1, 1,0);
        tracep->declBus(c+1377,"SimTop axi_rw W_STATE_WRITE", false,-1, 1,0);
        tracep->declBus(c+1390,"SimTop axi_rw W_STATE_RESP", false,-1, 1,0);
        tracep->declBus(c+1389,"SimTop axi_rw R_STATE_IDLE", false,-1, 1,0);
        tracep->declBus(c+1373,"SimTop axi_rw R_STATE_ADDR", false,-1, 1,0);
        tracep->declBus(c+1377,"SimTop axi_rw R_STATE_READ", false,-1, 1,0);
        tracep->declBus(c+73,"SimTop axi_rw w_state", false,-1, 1,0);
        tracep->declBus(c+74,"SimTop axi_rw r_state", false,-1, 1,0);
        tracep->declBit(c+75,"SimTop axi_rw w_state_idle", false,-1);
        tracep->declBit(c+1,"SimTop axi_rw w_state_addr", false,-1);
        tracep->declBit(c+3,"SimTop axi_rw w_state_write", false,-1);
        tracep->declBit(c+7,"SimTop axi_rw w_state_resp", false,-1);
        tracep->declBit(c+76,"SimTop axi_rw r_state_idle", false,-1);
        tracep->declBit(c+8,"SimTop axi_rw r_state_addr", false,-1);
        tracep->declBit(c+10,"SimTop axi_rw r_state_read", false,-1);
        tracep->declBus(c+77,"SimTop axi_rw len", false,-1, 7,0);
        tracep->declBit(c+1362,"SimTop axi_rw len_reset", false,-1);
        tracep->declBit(c+1363,"SimTop axi_rw len_incr_en", false,-1);
        tracep->declBus(c+1391,"SimTop axi_rw ALIGNED_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1392,"SimTop axi_rw OFFSET_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1391,"SimTop axi_rw AXI_SIZE", false,-1, 31,0);
        tracep->declBus(c+1393,"SimTop axi_rw MASK_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1381,"SimTop axi_rw TRANS_LEN", false,-1, 31,0);
        tracep->declBus(c+1383,"SimTop axi_rw BLOCK_TRANS", false,-1, 0,0);
        tracep->declBit(c+78,"SimTop axi_rw aligned", false,-1);
        tracep->declBit(c+1376,"SimTop axi_rw size_b", false,-1);
        tracep->declBit(c+1376,"SimTop axi_rw size_h", false,-1);
        tracep->declBit(c+1374,"SimTop axi_rw size_w", false,-1);
        tracep->declBit(c+1376,"SimTop axi_rw size_d", false,-1);
        tracep->declBus(c+79,"SimTop axi_rw addr_op1", false,-1, 3,0);
        tracep->declBus(c+1394,"SimTop axi_rw addr_op2", false,-1, 3,0);
        tracep->declBus(c+80,"SimTop axi_rw addr_end", false,-1, 3,0);
        tracep->declBit(c+81,"SimTop axi_rw overstep", false,-1);
        tracep->declBus(c+1371,"SimTop axi_rw axi_len", false,-1, 7,0);
        tracep->declBus(c+1372,"SimTop axi_rw axi_size", false,-1, 2,0);
        tracep->declBus(c+2,"SimTop axi_rw axi_addr", false,-1, 31,0);
        tracep->declBus(c+82,"SimTop axi_rw aligned_offset_l", false,-1, 5,0);
        tracep->declBus(c+83,"SimTop axi_rw aligned_offset_h", false,-1, 5,0);
        tracep->declArray(c+84,"SimTop axi_rw mask", false,-1, 127,0);
        tracep->declQuad(c+88,"SimTop axi_rw mask_l", false,-1, 63,0);
        tracep->declQuad(c+90,"SimTop axi_rw mask_h", false,-1, 63,0);
        tracep->declBus(c+1370,"SimTop axi_rw axi_id", false,-1, 3,0);
        tracep->declBus(c+1376,"SimTop axi_rw axi_user", false,-1, 0,0);
        tracep->declBit(c+31,"SimTop axi_rw rw_ready", false,-1);
        tracep->declBit(c+1280,"SimTop axi_rw rw_ready_nxt", false,-1);
        tracep->declBit(c+1364,"SimTop axi_rw rw_ready_en", false,-1);
        tracep->declBus(c+15,"SimTop axi_rw rw_resp", false,-1, 1,0);
        tracep->declBit(c+1365,"SimTop axi_rw rw_resp_nxt", false,-1);
        tracep->declBit(c+1280,"SimTop axi_rw resp_en", false,-1);
        tracep->declQuad(c+1366,"SimTop axi_rw axi_r_data_l", false,-1, 63,0);
        tracep->declQuad(c+1368,"SimTop axi_rw axi_r_data_h", false,-1, 63,0);
        tracep->declBit(c+1285,"SimTop arbitrating clk", false,-1);
        tracep->declBit(c+1356,"SimTop arbitrating rst", false,-1);
        tracep->declBit(c+22,"SimTop arbitrating if_valid_i", false,-1);
        tracep->declQuad(c+27,"SimTop arbitrating if_data_read_o", false,-1, 63,0);
        tracep->declQuad(c+23,"SimTop arbitrating if_addr_i", false,-1, 63,0);
        tracep->declBus(c+1377,"SimTop arbitrating if_size_i", false,-1, 1,0);
        tracep->declBus(c+25,"SimTop arbitrating if_len_i", false,-1, 7,0);
        tracep->declBit(c+26,"SimTop arbitrating if_req_i", false,-1);
        tracep->declBit(c+16,"SimTop arbitrating mem_valid_i", false,-1);
        tracep->declQuad(c+18,"SimTop arbitrating mem_addr_i", false,-1, 63,0);
        tracep->declQuad(c+20,"SimTop arbitrating mem_data_read_o", false,-1, 63,0);
        tracep->declQuad(c+4,"SimTop arbitrating mem_data_write_i", false,-1, 63,0);
        tracep->declQuad(c+92,"SimTop arbitrating mem_write_mask_axi", false,-1, 63,0);
        tracep->declBit(c+17,"SimTop arbitrating mem_req_i", false,-1);
        tracep->declBit(c+30,"SimTop arbitrating rw_valid_o", false,-1);
        tracep->declBit(c+31,"SimTop arbitrating rw_ready_i", false,-1);
        tracep->declBit(c+32,"SimTop arbitrating rw_req_o", false,-1);
        tracep->declQuad(c+1354,"SimTop arbitrating rw_data_read_i", false,-1, 63,0);
        tracep->declQuad(c+4,"SimTop arbitrating rw_data_write_o", false,-1, 63,0);
        tracep->declQuad(c+33,"SimTop arbitrating rw_addr_o", false,-1, 63,0);
        tracep->declBus(c+1377,"SimTop arbitrating rw_size_o", false,-1, 1,0);
        tracep->declBus(c+25,"SimTop arbitrating rw_len_o", false,-1, 7,0);
        tracep->declBit(c+1280,"SimTop arbitrating rw_trans_done_i", false,-1);
        tracep->declBit(c+1281,"SimTop arbitrating rw_r_hs_i", false,-1);
        tracep->declBus(c+35,"SimTop arbitrating rw_arb_state_o", false,-1, 1,0);
        tracep->declBit(c+36,"SimTop arbitrating arb_if_r_hs_o", false,-1);
        tracep->declBit(c+37,"SimTop arbitrating arb_if_trans_done_o", false,-1);
        tracep->declBit(c+38,"SimTop arbitrating axi_trans_done_pulse", false,-1);
        tracep->declBit(c+39,"SimTop arbitrating axi_stall_o", false,-1);
        tracep->declBus(c+1389,"SimTop arbitrating IDLE", false,-1, 1,0);
        tracep->declBus(c+1373,"SimTop arbitrating MEM", false,-1, 1,0);
        tracep->declBus(c+1377,"SimTop arbitrating IF", false,-1, 1,0);
        tracep->declBus(c+35,"SimTop arbitrating arb_state", false,-1, 1,0);
        tracep->declBit(c+94,"SimTop arbitrating state_idle", false,-1);
        tracep->declBit(c+95,"SimTop arbitrating state_mem", false,-1);
        tracep->declBit(c+96,"SimTop arbitrating state_if", false,-1);
        tracep->declBit(c+38,"SimTop arbitrating zza_pulse_1", false,-1);
        tracep->declBit(c+97,"SimTop arbitrating zza_pulse_3", false,-1);
        tracep->declBus(c+98,"SimTop arbitrating zza_count", false,-1, 1,0);
        tracep->declBit(c+99,"SimTop arbitrating zza_pulse", false,-1);
        tracep->declBit(c+100,"SimTop arbitrating rw_valid_pre", false,-1);
        tracep->declBit(c+101,"SimTop arbitrating situation_if_valid", false,-1);
        tracep->declBit(c+1285,"SimTop u_icache clk", false,-1);
        tracep->declBit(c+1356,"SimTop u_icache rst", false,-1);
        tracep->declQuad(c+13,"SimTop u_icache if_addr_i", false,-1, 63,0);
        tracep->declQuad(c+11,"SimTop u_icache if_data_o", false,-1, 63,0);
        tracep->declBit(c+22,"SimTop u_icache icache_valid_o", false,-1);
        tracep->declQuad(c+23,"SimTop u_icache icache_addr_o", false,-1, 63,0);
        tracep->declBus(c+25,"SimTop u_icache icache_len_o", false,-1, 7,0);
        tracep->declBit(c+26,"SimTop u_icache icache_req_o", false,-1);
        tracep->declQuad(c+27,"SimTop u_icache icache_data_read_i", false,-1, 63,0);
        tracep->declBit(c+37,"SimTop u_icache arb_if_trans_done_i", false,-1);
        tracep->declBit(c+36,"SimTop u_icache arb_if_r_hs_i", false,-1);
        tracep->declBus(c+35,"SimTop u_icache arb_state_i", false,-1, 1,0);
        tracep->declBit(c+38,"SimTop u_icache axi_trans_done_pulse", false,-1);
        tracep->declArray(c+42,"SimTop u_icache iram_data_read_128", false,-1, 127,0);
        tracep->declBit(c+46,"SimTop u_icache iram_wen", false,-1);
        tracep->declArray(c+47,"SimTop u_icache iram_bwen", false,-1, 127,0);
        tracep->declBus(c+51,"SimTop u_icache iram_addr", false,-1, 5,0);
        tracep->declArray(c+52,"SimTop u_icache iram_data", false,-1, 127,0);
        tracep->declBit(c+29,"SimTop u_icache icache_stall_o", false,-1);
        tracep->declBus(c+1380,"SimTop u_icache OFFSET_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1392,"SimTop u_icache INDEX_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1395,"SimTop u_icache TAG_WIDTH", false,-1, 31,0);
        tracep->declQuad(c+102,"SimTop u_icache valid", false,-1, 63,0);
        tracep->declBus(c+104,"SimTop u_icache offset_i", false,-1, 3,0);
        tracep->declBus(c+105,"SimTop u_icache index_i", false,-1, 5,0);
        tracep->declBus(c+106,"SimTop u_icache tag_idx", false,-1, 6,0);
        tracep->declQuad(c+107,"SimTop u_icache tag_i", false,-1, 53,0);
        tracep->declBit(c+109,"SimTop u_icache hit", false,-1);
        tracep->declBit(c+110,"SimTop u_icache miss", false,-1);
        tracep->declBus(c+1389,"SimTop u_icache IF_HIT", false,-1, 1,0);
        tracep->declBus(c+1373,"SimTop u_icache HIT", false,-1, 1,0);
        tracep->declBus(c+1377,"SimTop u_icache MISS", false,-1, 1,0);
        tracep->declBus(c+111,"SimTop u_icache icache_state", false,-1, 1,0);
        tracep->declQuad(c+112,"SimTop u_icache addr_icache_read", false,-1, 63,0);
        tracep->declBit(c+114,"SimTop u_icache state_ifhit", false,-1);
        tracep->declBit(c+115,"SimTop u_icache state_hit", false,-1);
        tracep->declBit(c+116,"SimTop u_icache state_miss", false,-1);
        tracep->declBus(c+1389,"SimTop u_icache IDLE", false,-1, 1,0);
        tracep->declBus(c+1373,"SimTop u_icache RE_WRITE", false,-1, 1,0);
        tracep->declBus(c+117,"SimTop u_icache re_write_state", false,-1, 1,0);
        tracep->declQuad(c+118,"SimTop u_icache re_write_addr", false,-1, 63,0);
        tracep->declBit(c+120,"SimTop u_icache icache_valid_pre", false,-1);
        tracep->declBit(c+121,"SimTop u_icache state_idle", false,-1);
        tracep->declBit(c+122,"SimTop u_icache state_re_write", false,-1);
        tracep->declBit(c+123,"SimTop u_icache re_write_finish", false,-1);
        tracep->declBit(c+124,"SimTop u_icache icache_stall_pre", false,-1);
        tracep->declBus(c+1393,"SimTop icache_ram Bits", false,-1, 31,0);
        tracep->declBus(c+1378,"SimTop icache_ram Word_Depth", false,-1, 31,0);
        tracep->declBus(c+1392,"SimTop icache_ram Add_Width", false,-1, 31,0);
        tracep->declBus(c+1393,"SimTop icache_ram Wen_Width", false,-1, 31,0);
        tracep->declArray(c+42,"SimTop icache_ram Q", false,-1, 127,0);
        tracep->declBit(c+1285,"SimTop icache_ram CLK", false,-1);
        tracep->declBit(c+1376,"SimTop icache_ram CEN", false,-1);
        tracep->declBit(c+46,"SimTop icache_ram WEN", false,-1);
        tracep->declArray(c+47,"SimTop icache_ram BWEN", false,-1, 127,0);
        tracep->declBus(c+51,"SimTop icache_ram A", false,-1, 5,0);
        tracep->declArray(c+52,"SimTop icache_ram D", false,-1, 127,0);
        tracep->declBit(c+1374,"SimTop icache_ram cen", false,-1);
        tracep->declBit(c+125,"SimTop icache_ram wen", false,-1);
        tracep->declArray(c+126,"SimTop icache_ram bwen", false,-1, 127,0);
        tracep->declBit(c+1285,"SimTop u_cpu clock", false,-1);
        tracep->declBit(c+1286,"SimTop u_cpu reset", false,-1);
        tracep->declBit(c+39,"SimTop u_cpu axi_stall", false,-1);
        tracep->declBit(c+29,"SimTop u_cpu icache_stall_i", false,-1);
        tracep->declBit(c+40,"SimTop u_cpu io_char_valid_o", false,-1);
        tracep->declBus(c+41,"SimTop u_cpu io_char_o", false,-1, 7,0);
        tracep->declBit(c+56,"SimTop u_cpu clint_wen_o", false,-1);
        tracep->declBit(c+57,"SimTop u_cpu clint_ren_o", false,-1);
        tracep->declQuad(c+58,"SimTop u_cpu clint_addr_o", false,-1, 63,0);
        tracep->declQuad(c+60,"SimTop u_cpu clint_data_o", false,-1, 63,0);
        tracep->declQuad(c+62,"SimTop u_cpu clint_data_read_i", false,-1, 63,0);
        tracep->declBit(c+64,"SimTop u_cpu mtime_ge_mtimecmp_i", false,-1);
        tracep->declBit(c+16,"SimTop u_cpu mem_valid", false,-1);
        tracep->declBit(c+17,"SimTop u_cpu mem_req", false,-1);
        tracep->declQuad(c+18,"SimTop u_cpu mem_addr", false,-1, 63,0);
        tracep->declQuad(c+20,"SimTop u_cpu mem_data_read", false,-1, 63,0);
        tracep->declQuad(c+4,"SimTop u_cpu mem_data_write", false,-1, 63,0);
        tracep->declBus(c+6,"SimTop u_cpu mem_write_mask_axi", false,-1, 7,0);
        tracep->declBit(c+1374,"SimTop u_cpu if_valid", false,-1);
        tracep->declBit(c+1375,"SimTop u_cpu if_ready", false,-1);
        tracep->declQuad(c+11,"SimTop u_cpu if_data_read", false,-1, 63,0);
        tracep->declQuad(c+13,"SimTop u_cpu if_addr", false,-1, 63,0);
        tracep->declBus(c+1377,"SimTop u_cpu if_size", false,-1, 1,0);
        tracep->declBit(c+1376,"SimTop u_cpu if_req", false,-1);
        tracep->declBus(c+15,"SimTop u_cpu if_resp", false,-1, 1,0);
        tracep->declBit(c+130,"SimTop u_cpu axi_stall_i", false,-1);
        tracep->declBit(c+131,"SimTop u_cpu device_stall", false,-1);
        tracep->declBit(c+1285,"SimTop u_cpu clk", false,-1);
        tracep->declBit(c+1356,"SimTop u_cpu rst", false,-1);
        tracep->declQuad(c+132,"SimTop u_cpu pc_id", false,-1, 63,0);
        tracep->declQuad(c+1396,"SimTop u_cpu pc_if", false,-1, 63,0);
        tracep->declQuad(c+134,"SimTop u_cpu pc_ex", false,-1, 63,0);
        tracep->declQuad(c+136,"SimTop u_cpu pc_mem", false,-1, 63,0);
        tracep->declQuad(c+138,"SimTop u_cpu pc_wb", false,-1, 63,0);
        tracep->declBus(c+140,"SimTop u_cpu inst_id", false,-1, 31,0);
        tracep->declBus(c+141,"SimTop u_cpu inst_if", false,-1, 31,0);
        tracep->declBus(c+142,"SimTop u_cpu inst_ex", false,-1, 31,0);
        tracep->declBus(c+143,"SimTop u_cpu inst_mem", false,-1, 31,0);
        tracep->declBus(c+144,"SimTop u_cpu inst_wb", false,-1, 31,0);
        tracep->declBus(c+145,"SimTop u_cpu optype", false,-1, 2,0);
        tracep->declBit(c+146,"SimTop u_cpu npc_op_id", false,-1);
        tracep->declBit(c+147,"SimTop u_cpu npc_op_ex", false,-1);
        tracep->declBit(c+148,"SimTop u_cpu npc_op_mem", false,-1);
        tracep->declBit(c+149,"SimTop u_cpu npc_regimm_id", false,-1);
        tracep->declBit(c+150,"SimTop u_cpu npc_regimm_ex", false,-1);
        tracep->declBit(c+151,"SimTop u_cpu npc_regimm_mem", false,-1);
        tracep->declBit(c+152,"SimTop u_cpu reg1_ren", false,-1);
        tracep->declBit(c+153,"SimTop u_cpu reg2_ren", false,-1);
        tracep->declBit(c+154,"SimTop u_cpu csr_ren", false,-1);
        tracep->declBit(c+155,"SimTop u_cpu rf_wen", false,-1);
        tracep->declBit(c+156,"SimTop u_cpu wen_id", false,-1);
        tracep->declBit(c+157,"SimTop u_cpu wen_ex", false,-1);
        tracep->declBit(c+158,"SimTop u_cpu wen_mem", false,-1);
        tracep->declBit(c+159,"SimTop u_cpu wen_wb", false,-1);
        tracep->declBit(c+160,"SimTop u_cpu csr_wen_id", false,-1);
        tracep->declBit(c+161,"SimTop u_cpu csr_wen_ex", false,-1);
        tracep->declBit(c+162,"SimTop u_cpu csr_wen_mem", false,-1);
        tracep->declBit(c+163,"SimTop u_cpu csr_wen_wb", false,-1);
        tracep->declBus(c+164,"SimTop u_cpu alu_op_id", false,-1, 4,0);
        tracep->declBus(c+165,"SimTop u_cpu alu_op_ex", false,-1, 4,0);
        tracep->declBus(c+166,"SimTop u_cpu csr_alu_op_id", false,-1, 2,0);
        tracep->declBus(c+167,"SimTop u_cpu csr_alu_op_ex", false,-1, 2,0);
        tracep->declBit(c+168,"SimTop u_cpu alu_only_imm_id", false,-1);
        tracep->declBit(c+169,"SimTop u_cpu alu_only_imm_ex", false,-1);
        tracep->declBit(c+170,"SimTop u_cpu alu_pc_reg1_id", false,-1);
        tracep->declBit(c+171,"SimTop u_cpu alu_pc_reg1_ex", false,-1);
        tracep->declBit(c+172,"SimTop u_cpu alu_imm_reg2_id", false,-1);
        tracep->declBit(c+173,"SimTop u_cpu alu_imm_reg2_ex", false,-1);
        tracep->declBit(c+174,"SimTop u_cpu csr_if_zimm_id", false,-1);
        tracep->declBit(c+175,"SimTop u_cpu csr_if_zimm_ex", false,-1);
        tracep->declBus(c+176,"SimTop u_cpu rd_id", false,-1, 4,0);
        tracep->declBus(c+177,"SimTop u_cpu rd_ex", false,-1, 4,0);
        tracep->declBus(c+178,"SimTop u_cpu rd_mem", false,-1, 4,0);
        tracep->declBus(c+179,"SimTop u_cpu rd_wb", false,-1, 4,0);
        tracep->declBus(c+180,"SimTop u_cpu csr_id", false,-1, 11,0);
        tracep->declBus(c+181,"SimTop u_cpu csr_ex", false,-1, 11,0);
        tracep->declBus(c+182,"SimTop u_cpu csr_mem", false,-1, 11,0);
        tracep->declBus(c+183,"SimTop u_cpu csr_wb", false,-1, 11,0);
        tracep->declBus(c+184,"SimTop u_cpu zimm_id", false,-1, 4,0);
        tracep->declBus(c+185,"SimTop u_cpu zimm_ex", false,-1, 4,0);
        tracep->declBus(c+184,"SimTop u_cpu rs1_id", false,-1, 4,0);
        tracep->declBus(c+186,"SimTop u_cpu rs1_ex", false,-1, 4,0);
        tracep->declBus(c+187,"SimTop u_cpu rs2_id", false,-1, 4,0);
        tracep->declBus(c+188,"SimTop u_cpu rs2_ex", false,-1, 4,0);
        tracep->declBus(c+189,"SimTop u_cpu rs2_mem", false,-1, 4,0);
        tracep->declQuad(c+190,"SimTop u_cpu reg10", false,-1, 63,0);
        tracep->declBit(c+192,"SimTop u_cpu read_mem_en_id", false,-1);
        tracep->declBit(c+193,"SimTop u_cpu read_mem_en_ex", false,-1);
        tracep->declBit(c+194,"SimTop u_cpu read_mem_en_mem", false,-1);
        tracep->declBit(c+195,"SimTop u_cpu read_mem_en_wb", false,-1);
        tracep->declBit(c+196,"SimTop u_cpu write_mem_en_id", false,-1);
        tracep->declBit(c+197,"SimTop u_cpu write_mem_en_ex", false,-1);
        tracep->declBit(c+17,"SimTop u_cpu write_mem_en_mem", false,-1);
        tracep->declBit(c+198,"SimTop u_cpu write_mem_en_wb", false,-1);
        tracep->declBus(c+199,"SimTop u_cpu mem_ctrl_id", false,-1, 3,0);
        tracep->declBus(c+200,"SimTop u_cpu mem_ctrl_ex", false,-1, 3,0);
        tracep->declBus(c+201,"SimTop u_cpu mem_ctrl_mem", false,-1, 3,0);
        tracep->declBus(c+202,"SimTop u_cpu value_width_ctrl_id", false,-1, 3,0);
        tracep->declBus(c+203,"SimTop u_cpu value_width_ctrl_ex", false,-1, 3,0);
        tracep->declBus(c+204,"SimTop u_cpu branch_type_id", false,-1, 2,0);
        tracep->declBus(c+205,"SimTop u_cpu branch_type_ex", false,-1, 2,0);
        tracep->declBus(c+206,"SimTop u_cpu branch_type_mem", false,-1, 2,0);
        tracep->declBus(c+207,"SimTop u_cpu branch_type_wb", false,-1, 2,0);
        tracep->declBit(c+208,"SimTop u_cpu operator_a_w_id", false,-1);
        tracep->declBit(c+209,"SimTop u_cpu operator_a_w_ex", false,-1);
        tracep->declBit(c+210,"SimTop u_cpu operator_a_w_s_id", false,-1);
        tracep->declBit(c+211,"SimTop u_cpu operator_a_w_s_ex", false,-1);
        tracep->declBit(c+212,"SimTop u_cpu operator_b_w_id", false,-1);
        tracep->declBit(c+213,"SimTop u_cpu operator_b_w_ex", false,-1);
        tracep->declBit(c+214,"SimTop u_cpu if_inst_sll_id", false,-1);
        tracep->declBit(c+215,"SimTop u_cpu if_inst_sll_ex", false,-1);
        tracep->declBit(c+216,"SimTop u_cpu environment_call_id", false,-1);
        tracep->declBit(c+217,"SimTop u_cpu environment_call_ex", false,-1);
        tracep->declBit(c+218,"SimTop u_cpu environment_call_mem", false,-1);
        tracep->declBit(c+219,"SimTop u_cpu environment_call_wb", false,-1);
        tracep->declBit(c+220,"SimTop u_cpu m_mode_return_id", false,-1);
        tracep->declBit(c+221,"SimTop u_cpu m_mode_return_ex", false,-1);
        tracep->declBit(c+222,"SimTop u_cpu m_mode_return_mem", false,-1);
        tracep->declBit(c+223,"SimTop u_cpu m_mode_return_wb", false,-1);
        tracep->declBit(c+1398,"SimTop u_cpu ebreak_id", false,-1);
        tracep->declBit(c+224,"SimTop u_cpu ebreak_ex", false,-1);
        tracep->declBit(c+225,"SimTop u_cpu ebreak_mem", false,-1);
        tracep->declBit(c+226,"SimTop u_cpu ebreak_wb", false,-1);
        tracep->declQuad(c+227,"SimTop u_cpu reg2_value_forwardb_ex", false,-1, 63,0);
        tracep->declQuad(c+229,"SimTop u_cpu csr_value_writeback_ex", false,-1, 63,0);
        tracep->declQuad(c+231,"SimTop u_cpu csr_value_writeback_mem", false,-1, 63,0);
        tracep->declQuad(c+233,"SimTop u_cpu csr_value_writeback_wb", false,-1, 63,0);
        tracep->declBit(c+235,"SimTop u_cpu alu_stall", false,-1);
        tracep->declQuad(c+236,"SimTop u_cpu read_mem_value", false,-1, 63,0);
        tracep->declQuad(c+4,"SimTop u_cpu reg2_to_mem_forward", false,-1, 63,0);
        tracep->declQuad(c+238,"SimTop u_cpu mem_write_mask", false,-1, 63,0);
        tracep->declBit(c+240,"SimTop u_cpu if_clint_mem", false,-1);
        tracep->declBit(c+241,"SimTop u_cpu if_clint_wb", false,-1);
        tracep->declBit(c+56,"SimTop u_cpu clint_wen", false,-1);
        tracep->declBit(c+57,"SimTop u_cpu clint_ren", false,-1);
        tracep->declQuad(c+58,"SimTop u_cpu clint_addr", false,-1, 63,0);
        tracep->declQuad(c+60,"SimTop u_cpu clint_data", false,-1, 63,0);
        tracep->declQuad(c+242,"SimTop u_cpu reg_write_value_mem", false,-1, 63,0);
        tracep->declQuad(c+244,"SimTop u_cpu pc", false,-1, 63,0);
        tracep->declQuad(c+246,"SimTop u_cpu npc", false,-1, 63,0);
        tracep->declQuad(c+248,"SimTop u_cpu npc_ex", false,-1, 63,0);
        tracep->declQuad(c+250,"SimTop u_cpu npc_mem", false,-1, 63,0);
        tracep->declQuad(c+252,"SimTop u_cpu npc_wb", false,-1, 63,0);
        tracep->declQuad(c+254,"SimTop u_cpu reg1_value_id", false,-1, 63,0);
        tracep->declQuad(c+256,"SimTop u_cpu reg1_value_ex", false,-1, 63,0);
        tracep->declQuad(c+258,"SimTop u_cpu reg2_value_id", false,-1, 63,0);
        tracep->declQuad(c+260,"SimTop u_cpu reg2_value_ex", false,-1, 63,0);
        tracep->declQuad(c+262,"SimTop u_cpu reg2_value_mem", false,-1, 63,0);
        tracep->declQuad(c+264,"SimTop u_cpu csr_value_id", false,-1, 63,0);
        tracep->declQuad(c+266,"SimTop u_cpu csr_value_ex", false,-1, 63,0);
        tracep->declQuad(c+268,"SimTop u_cpu reg_write_value_wb", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+270+i*2,"SimTop u_cpu regs_gpr", true,(i+0), 63,0);}}
        tracep->declBit(c+334,"SimTop u_cpu m_time_interrupt", false,-1);
        tracep->declBit(c+335,"SimTop u_cpu m_time_interrupt_trigger", false,-1);
        tracep->declQuad(c+336,"SimTop u_cpu value", false,-1, 63,0);
        tracep->declQuad(c+338,"SimTop u_cpu imm_id", false,-1, 63,0);
        tracep->declQuad(c+340,"SimTop u_cpu imm_ex", false,-1, 63,0);
        tracep->declQuad(c+342,"SimTop u_cpu sext_read_mem_value_mem", false,-1, 63,0);
        tracep->declQuad(c+344,"SimTop u_cpu sext_read_mem_value_wb", false,-1, 63,0);
        tracep->declQuad(c+346,"SimTop u_cpu sext_value_ex", false,-1, 63,0);
        tracep->declQuad(c+58,"SimTop u_cpu sext_value_mem", false,-1, 63,0);
        tracep->declQuad(c+348,"SimTop u_cpu sext_value_wb", false,-1, 63,0);
        tracep->declBit(c+350,"SimTop u_cpu IF_Flush", false,-1);
        tracep->declBus(c+351,"SimTop u_cpu Forward_a", false,-1, 1,0);
        tracep->declBus(c+352,"SimTop u_cpu Forward_b", false,-1, 1,0);
        tracep->declBus(c+353,"SimTop u_cpu Forward_c", false,-1, 1,0);
        tracep->declBus(c+354,"SimTop u_cpu Forward_d", false,-1, 1,0);
        tracep->declBit(c+355,"SimTop u_cpu Forward_store", false,-1);
        tracep->declBit(c+356,"SimTop u_cpu pipeline_stall", false,-1);
        tracep->declBit(c+357,"SimTop u_cpu pipeline_stall_ex", false,-1);
        tracep->declBit(c+358,"SimTop u_cpu pipeline_stall_mem", false,-1);
        tracep->declBit(c+359,"SimTop u_cpu pipeline_stall_wb", false,-1);
        tracep->declBit(c+360,"SimTop u_cpu pc_wen", false,-1);
        tracep->declQuad(c+138,"SimTop u_cpu pc_3", false,-1, 63,0);
        tracep->declBus(c+144,"SimTop u_cpu inst_3", false,-1, 31,0);
        tracep->declQuad(c+268,"SimTop u_cpu rd_data_3", false,-1, 63,0);
        tracep->declBus(c+179,"SimTop u_cpu rd_w_addr_3", false,-1, 4,0);
        tracep->declBit(c+159,"SimTop u_cpu rd_w_ena_3", false,-1);
        tracep->declBit(c+361,"SimTop u_cpu inst_valid_3", false,-1);
        tracep->declBit(c+362,"SimTop u_cpu inst_skip_3", false,-1);
        tracep->declQuad(c+363,"SimTop u_cpu mstatus_3", false,-1, 63,0);
        tracep->declQuad(c+365,"SimTop u_cpu mepc_3", false,-1, 63,0);
        tracep->declQuad(c+367,"SimTop u_cpu mtvec_3", false,-1, 63,0);
        tracep->declQuad(c+369,"SimTop u_cpu mcause_3", false,-1, 63,0);
        tracep->declQuad(c+371,"SimTop u_cpu mie_3", false,-1, 63,0);
        tracep->declQuad(c+373,"SimTop u_cpu mip_3", false,-1, 63,0);
        tracep->declQuad(c+375,"SimTop u_cpu mscratch_3", false,-1, 63,0);
        tracep->declBit(c+1136,"SimTop u_cpu cmt_wen", false,-1);
        tracep->declBus(c+1137,"SimTop u_cpu cmt_wdest", false,-1, 7,0);
        tracep->declQuad(c+1138,"SimTop u_cpu cmt_wdata", false,-1, 63,0);
        tracep->declQuad(c+1140,"SimTop u_cpu cmt_pc", false,-1, 63,0);
        tracep->declBus(c+1142,"SimTop u_cpu cmt_inst", false,-1, 31,0);
        tracep->declBit(c+1143,"SimTop u_cpu cmt_valid", false,-1);
        tracep->declBit(c+1144,"SimTop u_cpu cmt_skip", false,-1);
        tracep->declBit(c+1145,"SimTop u_cpu trap", false,-1);
        tracep->declBus(c+1146,"SimTop u_cpu trap_code", false,-1, 7,0);
        tracep->declQuad(c+1147,"SimTop u_cpu cycleCnt", false,-1, 63,0);
        tracep->declQuad(c+1149,"SimTop u_cpu instrCnt", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+1151+i*2,"SimTop u_cpu regs_diff", true,(i+0), 63,0);}}
        tracep->declBit(c+1285,"SimTop u_cpu IFU0 clk", false,-1);
        tracep->declBit(c+1356,"SimTop u_cpu IFU0 rst", false,-1);
        tracep->declQuad(c+244,"SimTop u_cpu IFU0 pc", false,-1, 63,0);
        tracep->declBus(c+141,"SimTop u_cpu IFU0 inst", false,-1, 31,0);
        tracep->declBit(c+1374,"SimTop u_cpu IFU0 if_valid_o", false,-1);
        tracep->declBit(c+1375,"SimTop u_cpu IFU0 if_ready_i", false,-1);
        tracep->declQuad(c+11,"SimTop u_cpu IFU0 if_data_read_i", false,-1, 63,0);
        tracep->declQuad(c+13,"SimTop u_cpu IFU0 if_addr_o", false,-1, 63,0);
        tracep->declBus(c+1377,"SimTop u_cpu IFU0 if_size_o", false,-1, 1,0);
        tracep->declBit(c+1376,"SimTop u_cpu IFU0 if_req_o", false,-1);
        tracep->declBit(c+130,"SimTop u_cpu IFU0 axi_stall_i", false,-1);
        tracep->declQuad(c+11,"SimTop u_cpu IFU0 rdata", false,-1, 63,0);
        tracep->declBit(c+1285,"SimTop u_cpu pipe_if_id_reg clk", false,-1);
        tracep->declBit(c+1356,"SimTop u_cpu pipe_if_id_reg rst", false,-1);
        tracep->declQuad(c+244,"SimTop u_cpu pipe_if_id_reg pc_if", false,-1, 63,0);
        tracep->declBus(c+141,"SimTop u_cpu pipe_if_id_reg inst_if", false,-1, 31,0);
        tracep->declBit(c+356,"SimTop u_cpu pipe_if_id_reg pipeline_stall", false,-1);
        tracep->declBit(c+350,"SimTop u_cpu pipe_if_id_reg IF_Flush", false,-1);
        tracep->declBit(c+130,"SimTop u_cpu pipe_if_id_reg axi_stall_i", false,-1);
        tracep->declBit(c+335,"SimTop u_cpu pipe_if_id_reg m_time_interrupt_trigger", false,-1);
        tracep->declQuad(c+132,"SimTop u_cpu pipe_if_id_reg pc_id", false,-1, 63,0);
        tracep->declBus(c+140,"SimTop u_cpu pipe_if_id_reg inst_id", false,-1, 31,0);
        tracep->declBit(c+1285,"SimTop u_cpu IDU0 clk", false,-1);
        tracep->declBit(c+1356,"SimTop u_cpu IDU0 rst", false,-1);
        tracep->declBus(c+140,"SimTop u_cpu IDU0 inst", false,-1, 31,0);
        tracep->declQuad(c+132,"SimTop u_cpu IDU0 pc", false,-1, 63,0);
        tracep->declQuad(c+190,"SimTop u_cpu IDU0 reg10", false,-1, 63,0);
        tracep->declBit(c+130,"SimTop u_cpu IDU0 axi_stall_i", false,-1);
        tracep->declBus(c+145,"SimTop u_cpu IDU0 optype", false,-1, 2,0);
        tracep->declBit(c+146,"SimTop u_cpu IDU0 npc_op", false,-1);
        tracep->declBit(c+149,"SimTop u_cpu IDU0 npc_regimm", false,-1);
        tracep->declBit(c+152,"SimTop u_cpu IDU0 reg1_ren", false,-1);
        tracep->declBit(c+153,"SimTop u_cpu IDU0 reg2_ren", false,-1);
        tracep->declBit(c+154,"SimTop u_cpu IDU0 csr_ren", false,-1);
        tracep->declBit(c+156,"SimTop u_cpu IDU0 wen", false,-1);
        tracep->declBit(c+155,"SimTop u_cpu IDU0 rf_wen", false,-1);
        tracep->declBit(c+160,"SimTop u_cpu IDU0 csr_wen", false,-1);
        tracep->declBus(c+164,"SimTop u_cpu IDU0 alu_op", false,-1, 4,0);
        tracep->declBus(c+166,"SimTop u_cpu IDU0 csr_alu_op", false,-1, 2,0);
        tracep->declBit(c+168,"SimTop u_cpu IDU0 alu_only_imm", false,-1);
        tracep->declBit(c+170,"SimTop u_cpu IDU0 alu_pc_reg1", false,-1);
        tracep->declBit(c+172,"SimTop u_cpu IDU0 alu_imm_reg2", false,-1);
        tracep->declBus(c+176,"SimTop u_cpu IDU0 rd", false,-1, 4,0);
        tracep->declBus(c+184,"SimTop u_cpu IDU0 rs1", false,-1, 4,0);
        tracep->declBus(c+187,"SimTop u_cpu IDU0 rs2", false,-1, 4,0);
        tracep->declBus(c+180,"SimTop u_cpu IDU0 csr", false,-1, 11,0);
        tracep->declBit(c+174,"SimTop u_cpu IDU0 csr_if_zimm", false,-1);
        tracep->declBus(c+184,"SimTop u_cpu IDU0 zimm", false,-1, 4,0);
        tracep->declBit(c+192,"SimTop u_cpu IDU0 read_mem_en", false,-1);
        tracep->declBit(c+196,"SimTop u_cpu IDU0 write_mem_en", false,-1);
        tracep->declBus(c+199,"SimTop u_cpu IDU0 mem_ctrl", false,-1, 3,0);
        tracep->declBus(c+202,"SimTop u_cpu IDU0 value_width_ctrl", false,-1, 3,0);
        tracep->declBus(c+204,"SimTop u_cpu IDU0 branch_type", false,-1, 2,0);
        tracep->declBit(c+208,"SimTop u_cpu IDU0 operator_a_w", false,-1);
        tracep->declBit(c+210,"SimTop u_cpu IDU0 operator_a_w_s", false,-1);
        tracep->declBit(c+212,"SimTop u_cpu IDU0 operator_b_w", false,-1);
        tracep->declBit(c+216,"SimTop u_cpu IDU0 environment_call", false,-1);
        tracep->declBit(c+220,"SimTop u_cpu IDU0 m_mode_return", false,-1);
        tracep->declBit(c+214,"SimTop u_cpu IDU0 if_inst_sll", false,-1);
        tracep->declBus(c+377,"SimTop u_cpu IDU0 opcode", false,-1, 6,0);
        tracep->declBus(c+378,"SimTop u_cpu IDU0 func3", false,-1, 2,0);
        tracep->declBit(c+379,"SimTop u_cpu IDU0 inst_FLUSH", false,-1);
        tracep->declBit(c+216,"SimTop u_cpu IDU0 inst_ecall", false,-1);
        tracep->declBit(c+220,"SimTop u_cpu IDU0 inst_mret", false,-1);
        tracep->declBit(c+380,"SimTop u_cpu IDU0 inst_csrrc", false,-1);
        tracep->declBit(c+381,"SimTop u_cpu IDU0 inst_csrrci", false,-1);
        tracep->declBit(c+382,"SimTop u_cpu IDU0 inst_csrrs", false,-1);
        tracep->declBit(c+383,"SimTop u_cpu IDU0 inst_csrrsi", false,-1);
        tracep->declBit(c+384,"SimTop u_cpu IDU0 inst_csrrw", false,-1);
        tracep->declBit(c+385,"SimTop u_cpu IDU0 inst_csrrwi", false,-1);
        tracep->declBit(c+386,"SimTop u_cpu IDU0 inst_addi", false,-1);
        tracep->declBit(c+387,"SimTop u_cpu IDU0 inst_xor", false,-1);
        tracep->declBit(c+388,"SimTop u_cpu IDU0 inst_xori", false,-1);
        tracep->declBit(c+389,"SimTop u_cpu IDU0 inst_ori", false,-1);
        tracep->declBit(c+390,"SimTop u_cpu IDU0 inst_addiw", false,-1);
        tracep->declBit(c+391,"SimTop u_cpu IDU0 inst_addw", false,-1);
        tracep->declBit(c+392,"SimTop u_cpu IDU0 inst_subw", false,-1);
        tracep->declBit(c+393,"SimTop u_cpu IDU0 inst_mul", false,-1);
        tracep->declBit(c+394,"SimTop u_cpu IDU0 inst_mulw", false,-1);
        tracep->declBit(c+395,"SimTop u_cpu IDU0 inst_divw", false,-1);
        tracep->declBit(c+396,"SimTop u_cpu IDU0 inst_divuw", false,-1);
        tracep->declBit(c+397,"SimTop u_cpu IDU0 inst_remw", false,-1);
        tracep->declBit(c+398,"SimTop u_cpu IDU0 inst_remuw", false,-1);
        tracep->declBit(c+399,"SimTop u_cpu IDU0 inst_sub", false,-1);
        tracep->declBit(c+400,"SimTop u_cpu IDU0 inst_add", false,-1);
        tracep->declBit(c+401,"SimTop u_cpu IDU0 inst_sll", false,-1);
        tracep->declBit(c+402,"SimTop u_cpu IDU0 inst_slli", false,-1);
        tracep->declBit(c+403,"SimTop u_cpu IDU0 inst_slliw", false,-1);
        tracep->declBit(c+404,"SimTop u_cpu IDU0 inst_srli", false,-1);
        tracep->declBit(c+405,"SimTop u_cpu IDU0 inst_srliw", false,-1);
        tracep->declBit(c+406,"SimTop u_cpu IDU0 inst_andi", false,-1);
        tracep->declBit(c+407,"SimTop u_cpu IDU0 inst_and", false,-1);
        tracep->declBit(c+408,"SimTop u_cpu IDU0 inst_or", false,-1);
        tracep->declBit(c+409,"SimTop u_cpu IDU0 inst_srai", false,-1);
        tracep->declBit(c+410,"SimTop u_cpu IDU0 inst_sraiw", false,-1);
        tracep->declBit(c+411,"SimTop u_cpu IDU0 inst_sra", false,-1);
        tracep->declBit(c+412,"SimTop u_cpu IDU0 inst_sraw", false,-1);
        tracep->declBit(c+413,"SimTop u_cpu IDU0 inst_srl", false,-1);
        tracep->declBit(c+414,"SimTop u_cpu IDU0 inst_srlw", false,-1);
        tracep->declBit(c+415,"SimTop u_cpu IDU0 inst_sllw", false,-1);
        tracep->declBit(c+168,"SimTop u_cpu IDU0 inst_lui", false,-1);
        tracep->declBit(c+416,"SimTop u_cpu IDU0 inst_auipc", false,-1);
        tracep->declBit(c+417,"SimTop u_cpu IDU0 inst_jal", false,-1);
        tracep->declBit(c+149,"SimTop u_cpu IDU0 inst_jalr", false,-1);
        tracep->declBit(c+418,"SimTop u_cpu IDU0 inst_slti", false,-1);
        tracep->declBit(c+419,"SimTop u_cpu IDU0 inst_sltiu", false,-1);
        tracep->declBit(c+420,"SimTop u_cpu IDU0 inst_sltu", false,-1);
        tracep->declBit(c+421,"SimTop u_cpu IDU0 inst_slt", false,-1);
        tracep->declBit(c+422,"SimTop u_cpu IDU0 inst_beq", false,-1);
        tracep->declBit(c+423,"SimTop u_cpu IDU0 inst_bne", false,-1);
        tracep->declBit(c+424,"SimTop u_cpu IDU0 inst_bge", false,-1);
        tracep->declBit(c+425,"SimTop u_cpu IDU0 inst_bgeu", false,-1);
        tracep->declBit(c+426,"SimTop u_cpu IDU0 inst_blt", false,-1);
        tracep->declBit(c+427,"SimTop u_cpu IDU0 inst_bltu", false,-1);
        tracep->declBit(c+428,"SimTop u_cpu IDU0 inst_sd", false,-1);
        tracep->declBit(c+429,"SimTop u_cpu IDU0 inst_sw", false,-1);
        tracep->declBit(c+430,"SimTop u_cpu IDU0 inst_sh", false,-1);
        tracep->declBit(c+431,"SimTop u_cpu IDU0 inst_sb", false,-1);
        tracep->declBit(c+432,"SimTop u_cpu IDU0 inst_lb", false,-1);
        tracep->declBit(c+433,"SimTop u_cpu IDU0 inst_lbu", false,-1);
        tracep->declBit(c+434,"SimTop u_cpu IDU0 inst_lhu", false,-1);
        tracep->declBit(c+435,"SimTop u_cpu IDU0 inst_lw", false,-1);
        tracep->declBit(c+436,"SimTop u_cpu IDU0 inst_lwu", false,-1);
        tracep->declBit(c+437,"SimTop u_cpu IDU0 inst_lh", false,-1);
        tracep->declBit(c+438,"SimTop u_cpu IDU0 inst_ld", false,-1);
        tracep->declBit(c+439,"SimTop u_cpu IDU0 inst_ebreak", false,-1);
        tracep->declBit(c+440,"SimTop u_cpu IDU0 inst_difftest_3", false,-1);
        tracep->declBit(c+441,"SimTop u_cpu IDU0 inst_7b", false,-1);
        tracep->declBit(c+442,"SimTop u_cpu IDU0 if_inst_correct", false,-1);
        tracep->declBit(c+1285,"SimTop u_cpu pipe_id_ex_reg clk", false,-1);
        tracep->declBit(c+1356,"SimTop u_cpu pipe_id_ex_reg rst", false,-1);
        tracep->declQuad(c+244,"SimTop u_cpu pipe_id_ex_reg pc_if", false,-1, 63,0);
        tracep->declBus(c+140,"SimTop u_cpu pipe_id_ex_reg inst_id", false,-1, 31,0);
        tracep->declQuad(c+246,"SimTop u_cpu pipe_id_ex_reg npc_id", false,-1, 63,0);
        tracep->declQuad(c+254,"SimTop u_cpu pipe_id_ex_reg reg1_value_id", false,-1, 63,0);
        tracep->declQuad(c+258,"SimTop u_cpu pipe_id_ex_reg reg2_value_id", false,-1, 63,0);
        tracep->declQuad(c+264,"SimTop u_cpu pipe_id_ex_reg csr_value_id", false,-1, 63,0);
        tracep->declBit(c+1398,"SimTop u_cpu pipe_id_ex_reg ebreak_id", false,-1);
        tracep->declQuad(c+132,"SimTop u_cpu pipe_id_ex_reg pc_id", false,-1, 63,0);
        tracep->declBus(c+184,"SimTop u_cpu pipe_id_ex_reg rs1_id", false,-1, 4,0);
        tracep->declBus(c+187,"SimTop u_cpu pipe_id_ex_reg rs2_id", false,-1, 4,0);
        tracep->declBus(c+176,"SimTop u_cpu pipe_id_ex_reg rd_id", false,-1, 4,0);
        tracep->declBus(c+180,"SimTop u_cpu pipe_id_ex_reg csr_id", false,-1, 11,0);
        tracep->declBus(c+184,"SimTop u_cpu pipe_id_ex_reg zimm_id", false,-1, 4,0);
        tracep->declBit(c+174,"SimTop u_cpu pipe_id_ex_reg csr_if_zimm_id", false,-1);
        tracep->declQuad(c+338,"SimTop u_cpu pipe_id_ex_reg imm_id", false,-1, 63,0);
        tracep->declBit(c+156,"SimTop u_cpu pipe_id_ex_reg wen_id", false,-1);
        tracep->declBit(c+160,"SimTop u_cpu pipe_id_ex_reg csr_wen_id", false,-1);
        tracep->declBit(c+146,"SimTop u_cpu pipe_id_ex_reg npc_op_id", false,-1);
        tracep->declBit(c+149,"SimTop u_cpu pipe_id_ex_reg npc_regimm_id", false,-1);
        tracep->declBus(c+164,"SimTop u_cpu pipe_id_ex_reg alu_op_id", false,-1, 4,0);
        tracep->declBus(c+166,"SimTop u_cpu pipe_id_ex_reg csr_alu_op_id", false,-1, 2,0);
        tracep->declBit(c+168,"SimTop u_cpu pipe_id_ex_reg alu_only_imm_id", false,-1);
        tracep->declBit(c+170,"SimTop u_cpu pipe_id_ex_reg alu_pc_reg1_id", false,-1);
        tracep->declBit(c+172,"SimTop u_cpu pipe_id_ex_reg alu_imm_reg2_id", false,-1);
        tracep->declBus(c+202,"SimTop u_cpu pipe_id_ex_reg value_width_ctrl_id", false,-1, 3,0);
        tracep->declBus(c+199,"SimTop u_cpu pipe_id_ex_reg mem_ctrl_id", false,-1, 3,0);
        tracep->declBus(c+204,"SimTop u_cpu pipe_id_ex_reg branch_type_id", false,-1, 2,0);
        tracep->declBit(c+208,"SimTop u_cpu pipe_id_ex_reg operator_a_w_id", false,-1);
        tracep->declBit(c+210,"SimTop u_cpu pipe_id_ex_reg operator_a_w_s_id", false,-1);
        tracep->declBit(c+212,"SimTop u_cpu pipe_id_ex_reg operator_b_w_id", false,-1);
        tracep->declBit(c+214,"SimTop u_cpu pipe_id_ex_reg if_inst_sll_id", false,-1);
        tracep->declBit(c+216,"SimTop u_cpu pipe_id_ex_reg environment_call_id", false,-1);
        tracep->declBit(c+220,"SimTop u_cpu pipe_id_ex_reg m_mode_return_id", false,-1);
        tracep->declBit(c+192,"SimTop u_cpu pipe_id_ex_reg read_mem_en_id", false,-1);
        tracep->declBit(c+196,"SimTop u_cpu pipe_id_ex_reg write_mem_en_id", false,-1);
        tracep->declBit(c+356,"SimTop u_cpu pipe_id_ex_reg pipeline_stall", false,-1);
        tracep->declBit(c+130,"SimTop u_cpu pipe_id_ex_reg axi_stall_i", false,-1);
        tracep->declBit(c+335,"SimTop u_cpu pipe_id_ex_reg m_time_interrupt_trigger", false,-1);
        tracep->declBus(c+142,"SimTop u_cpu pipe_id_ex_reg inst_ex", false,-1, 31,0);
        tracep->declQuad(c+248,"SimTop u_cpu pipe_id_ex_reg npc_ex", false,-1, 63,0);
        tracep->declQuad(c+256,"SimTop u_cpu pipe_id_ex_reg reg1_value_ex", false,-1, 63,0);
        tracep->declQuad(c+260,"SimTop u_cpu pipe_id_ex_reg reg2_value_ex", false,-1, 63,0);
        tracep->declQuad(c+266,"SimTop u_cpu pipe_id_ex_reg csr_value_ex", false,-1, 63,0);
        tracep->declBit(c+224,"SimTop u_cpu pipe_id_ex_reg ebreak_ex", false,-1);
        tracep->declQuad(c+134,"SimTop u_cpu pipe_id_ex_reg pc_ex", false,-1, 63,0);
        tracep->declBus(c+186,"SimTop u_cpu pipe_id_ex_reg rs1_ex", false,-1, 4,0);
        tracep->declBus(c+188,"SimTop u_cpu pipe_id_ex_reg rs2_ex", false,-1, 4,0);
        tracep->declBus(c+177,"SimTop u_cpu pipe_id_ex_reg rd_ex", false,-1, 4,0);
        tracep->declBus(c+181,"SimTop u_cpu pipe_id_ex_reg csr_ex", false,-1, 11,0);
        tracep->declBus(c+185,"SimTop u_cpu pipe_id_ex_reg zimm_ex", false,-1, 4,0);
        tracep->declBit(c+175,"SimTop u_cpu pipe_id_ex_reg csr_if_zimm_ex", false,-1);
        tracep->declQuad(c+340,"SimTop u_cpu pipe_id_ex_reg imm_ex", false,-1, 63,0);
        tracep->declBit(c+157,"SimTop u_cpu pipe_id_ex_reg wen_ex", false,-1);
        tracep->declBit(c+161,"SimTop u_cpu pipe_id_ex_reg csr_wen_ex", false,-1);
        tracep->declBit(c+147,"SimTop u_cpu pipe_id_ex_reg npc_op_ex", false,-1);
        tracep->declBit(c+150,"SimTop u_cpu pipe_id_ex_reg npc_regimm_ex", false,-1);
        tracep->declBus(c+165,"SimTop u_cpu pipe_id_ex_reg alu_op_ex", false,-1, 4,0);
        tracep->declBus(c+167,"SimTop u_cpu pipe_id_ex_reg csr_alu_op_ex", false,-1, 2,0);
        tracep->declBit(c+169,"SimTop u_cpu pipe_id_ex_reg alu_only_imm_ex", false,-1);
        tracep->declBit(c+171,"SimTop u_cpu pipe_id_ex_reg alu_pc_reg1_ex", false,-1);
        tracep->declBit(c+173,"SimTop u_cpu pipe_id_ex_reg alu_imm_reg2_ex", false,-1);
        tracep->declBus(c+203,"SimTop u_cpu pipe_id_ex_reg value_width_ctrl_ex", false,-1, 3,0);
        tracep->declBus(c+200,"SimTop u_cpu pipe_id_ex_reg mem_ctrl_ex", false,-1, 3,0);
        tracep->declBus(c+205,"SimTop u_cpu pipe_id_ex_reg branch_type_ex", false,-1, 2,0);
        tracep->declBit(c+209,"SimTop u_cpu pipe_id_ex_reg operator_a_w_ex", false,-1);
        tracep->declBit(c+211,"SimTop u_cpu pipe_id_ex_reg operator_a_w_s_ex", false,-1);
        tracep->declBit(c+213,"SimTop u_cpu pipe_id_ex_reg operator_b_w_ex", false,-1);
        tracep->declBit(c+215,"SimTop u_cpu pipe_id_ex_reg if_inst_sll_ex", false,-1);
        tracep->declBit(c+217,"SimTop u_cpu pipe_id_ex_reg environment_call_ex", false,-1);
        tracep->declBit(c+221,"SimTop u_cpu pipe_id_ex_reg m_mode_return_ex", false,-1);
        tracep->declBit(c+193,"SimTop u_cpu pipe_id_ex_reg read_mem_en_ex", false,-1);
        tracep->declBit(c+197,"SimTop u_cpu pipe_id_ex_reg write_mem_en_ex", false,-1);
        tracep->declBit(c+357,"SimTop u_cpu pipe_id_ex_reg pipeline_stall_ex", false,-1);
        tracep->declBit(c+1285,"SimTop u_cpu alu_module clk", false,-1);
        tracep->declBit(c+1356,"SimTop u_cpu alu_module rst", false,-1);
        tracep->declQuad(c+256,"SimTop u_cpu alu_module reg1", false,-1, 63,0);
        tracep->declQuad(c+260,"SimTop u_cpu alu_module reg2", false,-1, 63,0);
        tracep->declQuad(c+266,"SimTop u_cpu alu_module csr_value", false,-1, 63,0);
        tracep->declQuad(c+134,"SimTop u_cpu alu_module pc", false,-1, 63,0);
        tracep->declQuad(c+340,"SimTop u_cpu alu_module imm", false,-1, 63,0);
        tracep->declBus(c+185,"SimTop u_cpu alu_module zimm", false,-1, 4,0);
        tracep->declBit(c+175,"SimTop u_cpu alu_module csr_if_zimm", false,-1);
        tracep->declBit(c+147,"SimTop u_cpu alu_module npc_op", false,-1);
        tracep->declBus(c+165,"SimTop u_cpu alu_module alu_op", false,-1, 4,0);
        tracep->declBus(c+167,"SimTop u_cpu alu_module csr_alu_op", false,-1, 2,0);
        tracep->declBit(c+169,"SimTop u_cpu alu_module alu_only_imm", false,-1);
        tracep->declBit(c+171,"SimTop u_cpu alu_module alu_pc_reg1", false,-1);
        tracep->declBit(c+173,"SimTop u_cpu alu_module alu_imm_reg2", false,-1);
        tracep->declBus(c+205,"SimTop u_cpu alu_module branch_type", false,-1, 2,0);
        tracep->declBit(c+209,"SimTop u_cpu alu_module operator_a_w", false,-1);
        tracep->declBit(c+211,"SimTop u_cpu alu_module operator_a_w_s", false,-1);
        tracep->declBit(c+213,"SimTop u_cpu alu_module operator_b_w", false,-1);
        tracep->declBit(c+215,"SimTop u_cpu alu_module if_inst_sll", false,-1);
        tracep->declBus(c+351,"SimTop u_cpu alu_module Forward_a", false,-1, 1,0);
        tracep->declBus(c+352,"SimTop u_cpu alu_module Forward_b", false,-1, 1,0);
        tracep->declQuad(c+58,"SimTop u_cpu alu_module sext_value_mem", false,-1, 63,0);
        tracep->declQuad(c+268,"SimTop u_cpu alu_module reg_write_value_wb", false,-1, 63,0);
        tracep->declQuad(c+227,"SimTop u_cpu alu_module reg2_forwardb", false,-1, 63,0);
        tracep->declQuad(c+336,"SimTop u_cpu alu_module value", false,-1, 63,0);
        tracep->declQuad(c+229,"SimTop u_cpu alu_module csr_value_writeback", false,-1, 63,0);
        tracep->declBit(c+131,"SimTop u_cpu alu_module device_stall", false,-1);
        tracep->declBit(c+235,"SimTop u_cpu alu_module alu_stall", false,-1);
        tracep->declQuad(c+443,"SimTop u_cpu alu_module reg1_forwarda", false,-1, 63,0);
        tracep->declQuad(c+445,"SimTop u_cpu alu_module a0", false,-1, 63,0);
        tracep->declQuad(c+447,"SimTop u_cpu alu_module b0", false,-1, 63,0);
        tracep->declQuad(c+449,"SimTop u_cpu alu_module a", false,-1, 63,0);
        tracep->declQuad(c+451,"SimTop u_cpu alu_module b", false,-1, 63,0);
        tracep->declBit(c+453,"SimTop u_cpu alu_module mul_ready", false,-1);
        tracep->declBit(c+454,"SimTop u_cpu alu_module mul_valid", false,-1);
        tracep->declBit(c+1376,"SimTop u_cpu alu_module mul_s_or_u", false,-1);
        tracep->declQuad(c+455,"SimTop u_cpu alu_module mul_value", false,-1, 63,0);
        tracep->declBit(c+457,"SimTop u_cpu alu_module div_ready", false,-1);
        tracep->declBit(c+458,"SimTop u_cpu alu_module div_valid", false,-1);
        tracep->declBit(c+459,"SimTop u_cpu alu_module div_s_or_u", false,-1);
        tracep->declQuad(c+460,"SimTop u_cpu alu_module div_value", false,-1, 63,0);
        tracep->declQuad(c+462,"SimTop u_cpu alu_module csr_operation_a", false,-1, 63,0);
        tracep->declBus(c+1391,"SimTop u_cpu alu_module forward_a_mux NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1399,"SimTop u_cpu alu_module forward_a_mux KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1378,"SimTop u_cpu alu_module forward_a_mux DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+443,"SimTop u_cpu alu_module forward_a_mux out", false,-1, 63,0);
        tracep->declBus(c+351,"SimTop u_cpu alu_module forward_a_mux key", false,-1, 1,0);
        tracep->declQuad(c+256,"SimTop u_cpu alu_module forward_a_mux default_out", false,-1, 63,0);
        tracep->declArray(c+464,"SimTop u_cpu alu_module forward_a_mux lut", false,-1, 197,0);
        tracep->declBus(c+1391,"SimTop u_cpu alu_module forward_a_mux i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1399,"SimTop u_cpu alu_module forward_a_mux i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1378,"SimTop u_cpu alu_module forward_a_mux i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1381,"SimTop u_cpu alu_module forward_a_mux i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+443,"SimTop u_cpu alu_module forward_a_mux i0 out", false,-1, 63,0);
        tracep->declBus(c+351,"SimTop u_cpu alu_module forward_a_mux i0 key", false,-1, 1,0);
        tracep->declQuad(c+256,"SimTop u_cpu alu_module forward_a_mux i0 default_out", false,-1, 63,0);
        tracep->declArray(c+464,"SimTop u_cpu alu_module forward_a_mux i0 lut", false,-1, 197,0);
        tracep->declBus(c+1400,"SimTop u_cpu alu_module forward_a_mux i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declArray(c+471+i*3,"SimTop u_cpu alu_module forward_a_mux i0 pair_list", true,(i+0), 65,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+480+i*1,"SimTop u_cpu alu_module forward_a_mux i0 key_list", true,(i+0), 1,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declQuad(c+483+i*2,"SimTop u_cpu alu_module forward_a_mux i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+489,"SimTop u_cpu alu_module forward_a_mux i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+491,"SimTop u_cpu alu_module forward_a_mux i0 hit", false,-1);
        tracep->declBus(c+1401,"SimTop u_cpu alu_module forward_a_mux i0 i", false,-1, 31,0);
        tracep->declBus(c+1391,"SimTop u_cpu alu_module forward_b_mux NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1399,"SimTop u_cpu alu_module forward_b_mux KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1378,"SimTop u_cpu alu_module forward_b_mux DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+227,"SimTop u_cpu alu_module forward_b_mux out", false,-1, 63,0);
        tracep->declBus(c+352,"SimTop u_cpu alu_module forward_b_mux key", false,-1, 1,0);
        tracep->declQuad(c+260,"SimTop u_cpu alu_module forward_b_mux default_out", false,-1, 63,0);
        tracep->declArray(c+492,"SimTop u_cpu alu_module forward_b_mux lut", false,-1, 197,0);
        tracep->declBus(c+1391,"SimTop u_cpu alu_module forward_b_mux i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1399,"SimTop u_cpu alu_module forward_b_mux i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1378,"SimTop u_cpu alu_module forward_b_mux i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1381,"SimTop u_cpu alu_module forward_b_mux i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+227,"SimTop u_cpu alu_module forward_b_mux i0 out", false,-1, 63,0);
        tracep->declBus(c+352,"SimTop u_cpu alu_module forward_b_mux i0 key", false,-1, 1,0);
        tracep->declQuad(c+260,"SimTop u_cpu alu_module forward_b_mux i0 default_out", false,-1, 63,0);
        tracep->declArray(c+492,"SimTop u_cpu alu_module forward_b_mux i0 lut", false,-1, 197,0);
        tracep->declBus(c+1400,"SimTop u_cpu alu_module forward_b_mux i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declArray(c+499+i*3,"SimTop u_cpu alu_module forward_b_mux i0 pair_list", true,(i+0), 65,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+508+i*1,"SimTop u_cpu alu_module forward_b_mux i0 key_list", true,(i+0), 1,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declQuad(c+511+i*2,"SimTop u_cpu alu_module forward_b_mux i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+517,"SimTop u_cpu alu_module forward_b_mux i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+519,"SimTop u_cpu alu_module forward_b_mux i0 hit", false,-1);
        tracep->declBus(c+1401,"SimTop u_cpu alu_module forward_b_mux i0 i", false,-1, 31,0);
        tracep->declBit(c+1285,"SimTop u_cpu alu_module mul_u clk", false,-1);
        tracep->declBit(c+1356,"SimTop u_cpu alu_module mul_u rst", false,-1);
        tracep->declBit(c+131,"SimTop u_cpu alu_module mul_u device_stall", false,-1);
        tracep->declBit(c+453,"SimTop u_cpu alu_module mul_u mul_ready", false,-1);
        tracep->declBit(c+1376,"SimTop u_cpu alu_module mul_u mul_s_or_u", false,-1);
        tracep->declQuad(c+449,"SimTop u_cpu alu_module mul_u a", false,-1, 63,0);
        tracep->declQuad(c+451,"SimTop u_cpu alu_module mul_u b", false,-1, 63,0);
        tracep->declQuad(c+455,"SimTop u_cpu alu_module mul_u mul_value", false,-1, 63,0);
        tracep->declBit(c+454,"SimTop u_cpu alu_module mul_u mul_valid", false,-1);
        tracep->declBit(c+520,"SimTop u_cpu alu_module mul_u mul_calculating", false,-1);
        tracep->declArray(c+521,"SimTop u_cpu alu_module mul_u mul_result_partial", false,-1, 127,0);
        tracep->declArray(c+525,"SimTop u_cpu alu_module mul_u mul_result", false,-1, 127,0);
        tracep->declBus(c+529,"SimTop u_cpu alu_module mul_u mul_result_cnt", false,-1, 6,0);
        tracep->declArray(c+530,"SimTop u_cpu alu_module mul_u multiplcand", false,-1, 127,0);
        tracep->declQuad(c+534,"SimTop u_cpu alu_module mul_u multipler", false,-1, 63,0);
        tracep->declBit(c+1285,"SimTop u_cpu alu_module div_u clk", false,-1);
        tracep->declBit(c+1356,"SimTop u_cpu alu_module div_u rst", false,-1);
        tracep->declBit(c+131,"SimTop u_cpu alu_module div_u device_stall", false,-1);
        tracep->declBit(c+457,"SimTop u_cpu alu_module div_u div_ready", false,-1);
        tracep->declBit(c+459,"SimTop u_cpu alu_module div_u div_s_or_u", false,-1);
        tracep->declQuad(c+449,"SimTop u_cpu alu_module div_u dividend", false,-1, 63,0);
        tracep->declQuad(c+451,"SimTop u_cpu alu_module div_u divisor", false,-1, 63,0);
        tracep->declQuad(c+460,"SimTop u_cpu alu_module div_u quotient", false,-1, 63,0);
        tracep->declQuad(c+1402,"SimTop u_cpu alu_module div_u remainder", false,-1, 63,0);
        tracep->declBit(c+458,"SimTop u_cpu alu_module div_u div_valid", false,-1);
        tracep->declBus(c+536,"SimTop u_cpu alu_module div_u div_state", false,-1, 1,0);
        tracep->declBus(c+537,"SimTop u_cpu alu_module div_u div_cnt", false,-1, 6,0);
        tracep->declArray(c+538,"SimTop u_cpu alu_module div_u dividend_abs", false,-1, 127,0);
        tracep->declArray(c+542,"SimTop u_cpu alu_module div_u divisor_abs", false,-1, 64,0);
        tracep->declQuad(c+545,"SimTop u_cpu alu_module div_u quotient_abs", false,-1, 63,0);
        tracep->declBit(c+547,"SimTop u_cpu alu_module div_u quotient_sign", false,-1);
        tracep->declBit(c+548,"SimTop u_cpu alu_module div_u remainder_sign", false,-1);
        tracep->declArray(c+549,"SimTop u_cpu alu_module div_u diff_temp", false,-1, 64,0);
        tracep->declBit(c+552,"SimTop u_cpu alu_module div_u diff_neg", false,-1);
        tracep->declBus(c+1389,"SimTop u_cpu alu_module div_u DIV_IDLE", false,-1, 1,0);
        tracep->declBus(c+1373,"SimTop u_cpu alu_module div_u DIV_CALCULATING", false,-1, 1,0);
        tracep->declBus(c+1377,"SimTop u_cpu alu_module div_u DIV_FINISH", false,-1, 1,0);
        tracep->declQuad(c+553,"SimTop u_cpu alu_module div_u value_sign", false,-1, 63,0);
        tracep->declQuad(c+555,"SimTop u_cpu alu_module div_u value_unsign", false,-1, 63,0);
        tracep->declBit(c+557,"SimTop u_cpu alu_module div_u correct", false,-1);
        tracep->declBus(c+1404,"SimTop u_cpu alu_module adder NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1405,"SimTop u_cpu alu_module adder KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1378,"SimTop u_cpu alu_module adder DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+336,"SimTop u_cpu alu_module adder out", false,-1, 63,0);
        tracep->declBus(c+165,"SimTop u_cpu alu_module adder key", false,-1, 4,0);
        tracep->declQuad(c+1406,"SimTop u_cpu alu_module adder default_out", false,-1, 63,0);
        tracep->declArray(c+558,"SimTop u_cpu alu_module adder lut", false,-1, 1310,0);
        tracep->declBus(c+1404,"SimTop u_cpu alu_module adder i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1405,"SimTop u_cpu alu_module adder i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1378,"SimTop u_cpu alu_module adder i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1381,"SimTop u_cpu alu_module adder i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+336,"SimTop u_cpu alu_module adder i0 out", false,-1, 63,0);
        tracep->declBus(c+165,"SimTop u_cpu alu_module adder i0 key", false,-1, 4,0);
        tracep->declQuad(c+1406,"SimTop u_cpu alu_module adder i0 default_out", false,-1, 63,0);
        tracep->declArray(c+558,"SimTop u_cpu alu_module adder i0 lut", false,-1, 1310,0);
        tracep->declBus(c+1408,"SimTop u_cpu alu_module adder i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<19; i++) {
                tracep->declArray(c+599+i*3,"SimTop u_cpu alu_module adder i0 pair_list", true,(i+0), 68,0);}}
        {int i; for (i=0; i<19; i++) {
                tracep->declBus(c+656+i*1,"SimTop u_cpu alu_module adder i0 key_list", true,(i+0), 4,0);}}
        {int i; for (i=0; i<19; i++) {
                tracep->declQuad(c+675+i*2,"SimTop u_cpu alu_module adder i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+713,"SimTop u_cpu alu_module adder i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+715,"SimTop u_cpu alu_module adder i0 hit", false,-1);
        tracep->declBus(c+1409,"SimTop u_cpu alu_module adder i0 i", false,-1, 31,0);
        tracep->declBus(c+1391,"SimTop u_cpu alu_module csr_value_write NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1391,"SimTop u_cpu alu_module csr_value_write KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1378,"SimTop u_cpu alu_module csr_value_write DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+229,"SimTop u_cpu alu_module csr_value_write out", false,-1, 63,0);
        tracep->declBus(c+167,"SimTop u_cpu alu_module csr_value_write key", false,-1, 2,0);
        tracep->declQuad(c+449,"SimTop u_cpu alu_module csr_value_write default_out", false,-1, 63,0);
        tracep->declArray(c+716,"SimTop u_cpu alu_module csr_value_write lut", false,-1, 200,0);
        tracep->declBus(c+1391,"SimTop u_cpu alu_module csr_value_write i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1391,"SimTop u_cpu alu_module csr_value_write i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1378,"SimTop u_cpu alu_module csr_value_write i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1381,"SimTop u_cpu alu_module csr_value_write i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+229,"SimTop u_cpu alu_module csr_value_write i0 out", false,-1, 63,0);
        tracep->declBus(c+167,"SimTop u_cpu alu_module csr_value_write i0 key", false,-1, 2,0);
        tracep->declQuad(c+449,"SimTop u_cpu alu_module csr_value_write i0 default_out", false,-1, 63,0);
        tracep->declArray(c+716,"SimTop u_cpu alu_module csr_value_write i0 lut", false,-1, 200,0);
        tracep->declBus(c+1410,"SimTop u_cpu alu_module csr_value_write i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declArray(c+723+i*3,"SimTop u_cpu alu_module csr_value_write i0 pair_list", true,(i+0), 66,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+732+i*1,"SimTop u_cpu alu_module csr_value_write i0 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declQuad(c+735+i*2,"SimTop u_cpu alu_module csr_value_write i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+741,"SimTop u_cpu alu_module csr_value_write i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+743,"SimTop u_cpu alu_module csr_value_write i0 hit", false,-1);
        tracep->declBus(c+1401,"SimTop u_cpu alu_module csr_value_write i0 i", false,-1, 31,0);
        tracep->declBit(c+1285,"SimTop u_cpu pipe_ex_mem_reg clk", false,-1);
        tracep->declBit(c+1356,"SimTop u_cpu pipe_ex_mem_reg rst", false,-1);
        tracep->declQuad(c+134,"SimTop u_cpu pipe_ex_mem_reg pc_ex", false,-1, 63,0);
        tracep->declQuad(c+248,"SimTop u_cpu pipe_ex_mem_reg npc_ex", false,-1, 63,0);
        tracep->declBus(c+142,"SimTop u_cpu pipe_ex_mem_reg inst_ex", false,-1, 31,0);
        tracep->declBus(c+188,"SimTop u_cpu pipe_ex_mem_reg rs2_ex", false,-1, 4,0);
        tracep->declBus(c+177,"SimTop u_cpu pipe_ex_mem_reg rd_ex", false,-1, 4,0);
        tracep->declQuad(c+227,"SimTop u_cpu pipe_ex_mem_reg reg2_value_ex", false,-1, 63,0);
        tracep->declBit(c+224,"SimTop u_cpu pipe_ex_mem_reg ebreak_ex", false,-1);
        tracep->declQuad(c+346,"SimTop u_cpu pipe_ex_mem_reg alu_sext_value_ex", false,-1, 63,0);
        tracep->declBit(c+157,"SimTop u_cpu pipe_ex_mem_reg wen_ex", false,-1);
        tracep->declBit(c+193,"SimTop u_cpu pipe_ex_mem_reg read_mem_en_ex", false,-1);
        tracep->declBit(c+197,"SimTop u_cpu pipe_ex_mem_reg write_mem_en_ex", false,-1);
        tracep->declBus(c+205,"SimTop u_cpu pipe_ex_mem_reg branch_type_ex", false,-1, 2,0);
        tracep->declBit(c+147,"SimTop u_cpu pipe_ex_mem_reg npc_op_ex", false,-1);
        tracep->declBit(c+150,"SimTop u_cpu pipe_ex_mem_reg npc_regimm_ex", false,-1);
        tracep->declBus(c+200,"SimTop u_cpu pipe_ex_mem_reg mem_ctrl_ex", false,-1, 3,0);
        tracep->declBit(c+357,"SimTop u_cpu pipe_ex_mem_reg pipeline_stall_ex", false,-1);
        tracep->declBit(c+217,"SimTop u_cpu pipe_ex_mem_reg environment_call_ex", false,-1);
        tracep->declBit(c+221,"SimTop u_cpu pipe_ex_mem_reg m_mode_return_ex", false,-1);
        tracep->declBus(c+181,"SimTop u_cpu pipe_ex_mem_reg csr_ex", false,-1, 11,0);
        tracep->declBit(c+161,"SimTop u_cpu pipe_ex_mem_reg csr_wen_ex", false,-1);
        tracep->declQuad(c+229,"SimTop u_cpu pipe_ex_mem_reg csr_value_writeback_ex", false,-1, 63,0);
        tracep->declBit(c+130,"SimTop u_cpu pipe_ex_mem_reg axi_stall_i", false,-1);
        tracep->declBit(c+335,"SimTop u_cpu pipe_ex_mem_reg m_time_interrupt_trigger", false,-1);
        tracep->declQuad(c+136,"SimTop u_cpu pipe_ex_mem_reg pc_mem", false,-1, 63,0);
        tracep->declQuad(c+250,"SimTop u_cpu pipe_ex_mem_reg npc_mem", false,-1, 63,0);
        tracep->declBus(c+143,"SimTop u_cpu pipe_ex_mem_reg inst_mem", false,-1, 31,0);
        tracep->declBus(c+189,"SimTop u_cpu pipe_ex_mem_reg rs2_mem", false,-1, 4,0);
        tracep->declBus(c+178,"SimTop u_cpu pipe_ex_mem_reg rd_mem", false,-1, 4,0);
        tracep->declQuad(c+262,"SimTop u_cpu pipe_ex_mem_reg reg2_value_mem", false,-1, 63,0);
        tracep->declBit(c+225,"SimTop u_cpu pipe_ex_mem_reg ebreak_mem", false,-1);
        tracep->declQuad(c+58,"SimTop u_cpu pipe_ex_mem_reg alu_sext_value_mem", false,-1, 63,0);
        tracep->declBit(c+158,"SimTop u_cpu pipe_ex_mem_reg wen_mem", false,-1);
        tracep->declBit(c+194,"SimTop u_cpu pipe_ex_mem_reg read_mem_en_mem", false,-1);
        tracep->declBit(c+17,"SimTop u_cpu pipe_ex_mem_reg write_mem_en_mem", false,-1);
        tracep->declBus(c+206,"SimTop u_cpu pipe_ex_mem_reg branch_type_mem", false,-1, 2,0);
        tracep->declBit(c+148,"SimTop u_cpu pipe_ex_mem_reg npc_op_mem", false,-1);
        tracep->declBit(c+151,"SimTop u_cpu pipe_ex_mem_reg npc_regimm_mem", false,-1);
        tracep->declBus(c+201,"SimTop u_cpu pipe_ex_mem_reg mem_ctrl_mem", false,-1, 3,0);
        tracep->declBit(c+358,"SimTop u_cpu pipe_ex_mem_reg pipeline_stall_mem", false,-1);
        tracep->declBit(c+218,"SimTop u_cpu pipe_ex_mem_reg environment_call_mem", false,-1);
        tracep->declBit(c+222,"SimTop u_cpu pipe_ex_mem_reg m_mode_return_mem", false,-1);
        tracep->declBus(c+182,"SimTop u_cpu pipe_ex_mem_reg csr_mem", false,-1, 11,0);
        tracep->declBit(c+162,"SimTop u_cpu pipe_ex_mem_reg csr_wen_mem", false,-1);
        tracep->declQuad(c+231,"SimTop u_cpu pipe_ex_mem_reg csr_value_writeback_mem", false,-1, 63,0);
        tracep->declBit(c+1285,"SimTop u_cpu memory clk", false,-1);
        tracep->declBit(c+1356,"SimTop u_cpu memory rst", false,-1);
        tracep->declBit(c+194,"SimTop u_cpu memory read_mem_en", false,-1);
        tracep->declQuad(c+58,"SimTop u_cpu memory addr", false,-1, 63,0);
        tracep->declQuad(c+262,"SimTop u_cpu memory reg2", false,-1, 63,0);
        tracep->declBit(c+17,"SimTop u_cpu memory write_mem_en", false,-1);
        tracep->declBus(c+201,"SimTop u_cpu memory mem_ctrl", false,-1, 3,0);
        tracep->declBit(c+355,"SimTop u_cpu memory Forward_store", false,-1);
        tracep->declQuad(c+268,"SimTop u_cpu memory reg_write_value_wb", false,-1, 63,0);
        tracep->declQuad(c+238,"SimTop u_cpu memory mem_write_mask", false,-1, 63,0);
        tracep->declQuad(c+236,"SimTop u_cpu memory read_mem_value", false,-1, 63,0);
        tracep->declQuad(c+4,"SimTop u_cpu memory reg2_to_mem_forward", false,-1, 63,0);
        tracep->declBit(c+56,"SimTop u_cpu memory clint_wen_o", false,-1);
        tracep->declBit(c+57,"SimTop u_cpu memory clint_ren_o", false,-1);
        tracep->declQuad(c+58,"SimTop u_cpu memory clint_addr_o", false,-1, 63,0);
        tracep->declQuad(c+60,"SimTop u_cpu memory clint_data_o", false,-1, 63,0);
        tracep->declQuad(c+62,"SimTop u_cpu memory clint_data_read_i", false,-1, 63,0);
        tracep->declBit(c+240,"SimTop u_cpu memory if_clint", false,-1);
        tracep->declBit(c+16,"SimTop u_cpu memory mem_valid_o", false,-1);
        tracep->declBit(c+17,"SimTop u_cpu memory mem_req_o", false,-1);
        tracep->declQuad(c+18,"SimTop u_cpu memory mem_addr_o", false,-1, 63,0);
        tracep->declQuad(c+20,"SimTop u_cpu memory mem_data_read_i", false,-1, 63,0);
        tracep->declQuad(c+4,"SimTop u_cpu memory mem_data_write_o", false,-1, 63,0);
        tracep->declBus(c+6,"SimTop u_cpu memory mem_write_mask_axi", false,-1, 7,0);
        tracep->declQuad(c+60,"SimTop u_cpu memory value_writen_to_mem", false,-1, 63,0);
        tracep->declBit(c+744,"SimTop u_cpu memory if_clint_addr", false,-1);
        tracep->declBit(c+1285,"SimTop u_cpu pipe_mem_wb clk", false,-1);
        tracep->declBit(c+1356,"SimTop u_cpu pipe_mem_wb rst", false,-1);
        tracep->declQuad(c+136,"SimTop u_cpu pipe_mem_wb pc_mem", false,-1, 63,0);
        tracep->declQuad(c+250,"SimTop u_cpu pipe_mem_wb npc_mem", false,-1, 63,0);
        tracep->declBus(c+143,"SimTop u_cpu pipe_mem_wb inst_mem", false,-1, 31,0);
        tracep->declBus(c+178,"SimTop u_cpu pipe_mem_wb rd_mem", false,-1, 4,0);
        tracep->declQuad(c+190,"SimTop u_cpu pipe_mem_wb reg10", false,-1, 63,0);
        tracep->declBit(c+225,"SimTop u_cpu pipe_mem_wb ebreak_mem", false,-1);
        tracep->declBus(c+206,"SimTop u_cpu pipe_mem_wb branch_type_mem", false,-1, 2,0);
        tracep->declQuad(c+58,"SimTop u_cpu pipe_mem_wb alu_sext_value_mem", false,-1, 63,0);
        tracep->declQuad(c+342,"SimTop u_cpu pipe_mem_wb sext_read_mem_value_mem", false,-1, 63,0);
        tracep->declQuad(c+4,"SimTop u_cpu pipe_mem_wb reg2_to_mem_forward", false,-1, 63,0);
        tracep->declBit(c+158,"SimTop u_cpu pipe_mem_wb wen_mem", false,-1);
        tracep->declBit(c+194,"SimTop u_cpu pipe_mem_wb read_mem_en_mem", false,-1);
        tracep->declBit(c+17,"SimTop u_cpu pipe_mem_wb write_mem_en_mem", false,-1);
        tracep->declBit(c+358,"SimTop u_cpu pipe_mem_wb pipeline_stall_mem", false,-1);
        tracep->declBus(c+201,"SimTop u_cpu pipe_mem_wb mem_ctrl_mem", false,-1, 3,0);
        tracep->declQuad(c+238,"SimTop u_cpu pipe_mem_wb mem_write_mask", false,-1, 63,0);
        tracep->declBit(c+218,"SimTop u_cpu pipe_mem_wb environment_call_mem", false,-1);
        tracep->declBit(c+222,"SimTop u_cpu pipe_mem_wb m_mode_return_mem", false,-1);
        tracep->declBit(c+240,"SimTop u_cpu pipe_mem_wb if_clint_mem", false,-1);
        tracep->declBus(c+182,"SimTop u_cpu pipe_mem_wb csr_mem", false,-1, 11,0);
        tracep->declBit(c+162,"SimTop u_cpu pipe_mem_wb csr_wen_mem", false,-1);
        tracep->declQuad(c+231,"SimTop u_cpu pipe_mem_wb csr_value_writeback_mem", false,-1, 63,0);
        tracep->declBit(c+130,"SimTop u_cpu pipe_mem_wb axi_stall_i", false,-1);
        tracep->declBit(c+335,"SimTop u_cpu pipe_mem_wb m_time_interrupt_trigger", false,-1);
        tracep->declQuad(c+138,"SimTop u_cpu pipe_mem_wb pc_wb", false,-1, 63,0);
        tracep->declQuad(c+252,"SimTop u_cpu pipe_mem_wb npc_wb", false,-1, 63,0);
        tracep->declBus(c+144,"SimTop u_cpu pipe_mem_wb inst_wb", false,-1, 31,0);
        tracep->declBus(c+179,"SimTop u_cpu pipe_mem_wb rd_wb", false,-1, 4,0);
        tracep->declBit(c+226,"SimTop u_cpu pipe_mem_wb ebreak_wb", false,-1);
        tracep->declBus(c+207,"SimTop u_cpu pipe_mem_wb branch_type_wb", false,-1, 2,0);
        tracep->declQuad(c+348,"SimTop u_cpu pipe_mem_wb alu_sext_value_wb", false,-1, 63,0);
        tracep->declQuad(c+344,"SimTop u_cpu pipe_mem_wb sext_read_mem_value_wb", false,-1, 63,0);
        tracep->declBit(c+159,"SimTop u_cpu pipe_mem_wb wen_wb", false,-1);
        tracep->declBit(c+195,"SimTop u_cpu pipe_mem_wb read_mem_en_wb", false,-1);
        tracep->declBit(c+198,"SimTop u_cpu pipe_mem_wb write_mem_en_wb", false,-1);
        tracep->declBit(c+359,"SimTop u_cpu pipe_mem_wb pipeline_stall_wb", false,-1);
        tracep->declBit(c+219,"SimTop u_cpu pipe_mem_wb environment_call_wb", false,-1);
        tracep->declBit(c+223,"SimTop u_cpu pipe_mem_wb m_mode_return_wb", false,-1);
        tracep->declBit(c+241,"SimTop u_cpu pipe_mem_wb if_clint_wb", false,-1);
        tracep->declBus(c+183,"SimTop u_cpu pipe_mem_wb csr_wb", false,-1, 11,0);
        tracep->declBit(c+163,"SimTop u_cpu pipe_mem_wb csr_wen_wb", false,-1);
        tracep->declQuad(c+233,"SimTop u_cpu pipe_mem_wb csr_value_writeback_wb", false,-1, 63,0);
        tracep->declBit(c+1285,"SimTop u_cpu rf clk", false,-1);
        tracep->declBit(c+1356,"SimTop u_cpu rf rst", false,-1);
        tracep->declBit(c+152,"SimTop u_cpu rf reg1_ren", false,-1);
        tracep->declBit(c+153,"SimTop u_cpu rf reg2_ren", false,-1);
        tracep->declBit(c+154,"SimTop u_cpu rf csr_ren", false,-1);
        tracep->declBus(c+184,"SimTop u_cpu rf reg1addr", false,-1, 4,0);
        tracep->declBus(c+187,"SimTop u_cpu rf reg2addr", false,-1, 4,0);
        tracep->declBus(c+180,"SimTop u_cpu rf csraddr", false,-1, 11,0);
        tracep->declQuad(c+348,"SimTop u_cpu rf wdata", false,-1, 63,0);
        tracep->declQuad(c+58,"SimTop u_cpu rf wdata_mem", false,-1, 63,0);
        tracep->declBus(c+179,"SimTop u_cpu rf waddr", false,-1, 4,0);
        tracep->declBus(c+178,"SimTop u_cpu rf waddr_mem", false,-1, 4,0);
        tracep->declBit(c+195,"SimTop u_cpu rf read_mem_en", false,-1);
        tracep->declBit(c+194,"SimTop u_cpu rf read_mem_en_mem", false,-1);
        tracep->declQuad(c+344,"SimTop u_cpu rf sext_read_mem_value", false,-1, 63,0);
        tracep->declQuad(c+342,"SimTop u_cpu rf sext_read_mem_value_mem", false,-1, 63,0);
        tracep->declBit(c+159,"SimTop u_cpu rf wen", false,-1);
        tracep->declBit(c+158,"SimTop u_cpu rf wen_mem", false,-1);
        tracep->declBit(c+360,"SimTop u_cpu rf pc_wen", false,-1);
        tracep->declBus(c+183,"SimTop u_cpu rf csr_wb", false,-1, 11,0);
        tracep->declBit(c+163,"SimTop u_cpu rf csr_wen_wb", false,-1);
        tracep->declQuad(c+233,"SimTop u_cpu rf csr_value_writeback_wb", false,-1, 63,0);
        tracep->declBit(c+219,"SimTop u_cpu rf environment_call_wb", false,-1);
        tracep->declBit(c+223,"SimTop u_cpu rf m_mode_return_wb", false,-1);
        tracep->declBit(c+64,"SimTop u_cpu rf mtime_ge_mtimecmp_i", false,-1);
        tracep->declBit(c+130,"SimTop u_cpu rf axi_stall_i", false,-1);
        tracep->declQuad(c+246,"SimTop u_cpu rf npc", false,-1, 63,0);
        tracep->declQuad(c+138,"SimTop u_cpu rf pc_wb", false,-1, 63,0);
        tracep->declQuad(c+136,"SimTop u_cpu rf pc_mem", false,-1, 63,0);
        tracep->declBus(c+144,"SimTop u_cpu rf inst_wb", false,-1, 31,0);
        tracep->declQuad(c+268,"SimTop u_cpu rf reg_write_value_wb", false,-1, 63,0);
        tracep->declQuad(c+254,"SimTop u_cpu rf reg1", false,-1, 63,0);
        tracep->declQuad(c+258,"SimTop u_cpu rf reg2", false,-1, 63,0);
        tracep->declQuad(c+190,"SimTop u_cpu rf reg10", false,-1, 63,0);
        tracep->declQuad(c+264,"SimTop u_cpu rf csr_value", false,-1, 63,0);
        tracep->declQuad(c+244,"SimTop u_cpu rf pc", false,-1, 63,0);
        tracep->declQuad(c+363,"SimTop u_cpu rf mstatus_3", false,-1, 63,0);
        tracep->declQuad(c+365,"SimTop u_cpu rf mepc_3", false,-1, 63,0);
        tracep->declQuad(c+367,"SimTop u_cpu rf mtvec_3", false,-1, 63,0);
        tracep->declQuad(c+369,"SimTop u_cpu rf mcause_3", false,-1, 63,0);
        tracep->declQuad(c+371,"SimTop u_cpu rf mie_3", false,-1, 63,0);
        tracep->declQuad(c+373,"SimTop u_cpu rf mip_3", false,-1, 63,0);
        tracep->declQuad(c+375,"SimTop u_cpu rf mscratch_3", false,-1, 63,0);
        tracep->declBit(c+335,"SimTop u_cpu rf m_time_interrupt_trigger", false,-1);
        tracep->declBit(c+334,"SimTop u_cpu rf m_time_interrupt_o", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+745+i*2,"SimTop u_cpu rf regs_gpr", true,(i+0), 63,0);}}
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+809+i*2,"SimTop u_cpu rf rf", true,(i+0), 63,0);}}
        tracep->declQuad(c+363,"SimTop u_cpu rf mstatus", false,-1, 63,0);
        tracep->declQuad(c+365,"SimTop u_cpu rf mepc", false,-1, 63,0);
        tracep->declQuad(c+367,"SimTop u_cpu rf mtvec", false,-1, 63,0);
        tracep->declQuad(c+369,"SimTop u_cpu rf mcause", false,-1, 63,0);
        tracep->declQuad(c+371,"SimTop u_cpu rf mie", false,-1, 63,0);
        tracep->declQuad(c+373,"SimTop u_cpu rf mip", false,-1, 63,0);
        tracep->declQuad(c+375,"SimTop u_cpu rf mscratch", false,-1, 63,0);
        tracep->declQuad(c+873,"SimTop u_cpu rf mstatus_reg", false,-1, 63,0);
        tracep->declQuad(c+875,"SimTop u_cpu rf mepc_reg", false,-1, 63,0);
        tracep->declQuad(c+877,"SimTop u_cpu rf mtvec_reg", false,-1, 63,0);
        tracep->declQuad(c+879,"SimTop u_cpu rf mcause_reg", false,-1, 63,0);
        tracep->declQuad(c+881,"SimTop u_cpu rf mie_reg", false,-1, 63,0);
        tracep->declQuad(c+883,"SimTop u_cpu rf mip_reg", false,-1, 63,0);
        tracep->declQuad(c+885,"SimTop u_cpu rf mscratch_reg", false,-1, 63,0);
        tracep->declQuad(c+887,"SimTop u_cpu rf mstatus_latch", false,-1, 63,0);
        tracep->declQuad(c+889,"SimTop u_cpu rf mepc_latch", false,-1, 63,0);
        tracep->declQuad(c+891,"SimTop u_cpu rf mtvec_latch", false,-1, 63,0);
        tracep->declQuad(c+893,"SimTop u_cpu rf mcause_latch", false,-1, 63,0);
        tracep->declQuad(c+895,"SimTop u_cpu rf mie_latch", false,-1, 63,0);
        tracep->declQuad(c+897,"SimTop u_cpu rf mip_latch", false,-1, 63,0);
        tracep->declQuad(c+899,"SimTop u_cpu rf mscratch_latch", false,-1, 63,0);
        tracep->declQuad(c+901,"SimTop u_cpu rf mepc_timeint_reg", false,-1, 63,0);
        tracep->declQuad(c+903,"SimTop u_cpu rf mcause_timeint_reg", false,-1, 63,0);
        tracep->declQuad(c+905,"SimTop u_cpu rf pc_wb_reg", false,-1, 63,0);
        tracep->declBus(c+907,"SimTop u_cpu rf inst_wb_reg", false,-1, 31,0);
        tracep->declBus(c+140,"SimTop u_cpu sext inst", false,-1, 31,0);
        tracep->declBus(c+145,"SimTop u_cpu sext optype", false,-1, 2,0);
        tracep->declQuad(c+336,"SimTop u_cpu sext value", false,-1, 63,0);
        tracep->declBus(c+201,"SimTop u_cpu sext mem_ctrl", false,-1, 3,0);
        tracep->declBus(c+203,"SimTop u_cpu sext value_width_ctrl", false,-1, 3,0);
        tracep->declQuad(c+58,"SimTop u_cpu sext read_mem_addr", false,-1, 63,0);
        tracep->declQuad(c+236,"SimTop u_cpu sext read_mem_value", false,-1, 63,0);
        tracep->declQuad(c+342,"SimTop u_cpu sext sext_read_mem_value", false,-1, 63,0);
        tracep->declQuad(c+346,"SimTop u_cpu sext sext_value", false,-1, 63,0);
        tracep->declQuad(c+338,"SimTop u_cpu sext imm", false,-1, 63,0);
        tracep->declBus(c+1405,"SimTop u_cpu sext sext_imm NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1391,"SimTop u_cpu sext sext_imm KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1378,"SimTop u_cpu sext sext_imm DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+338,"SimTop u_cpu sext sext_imm out", false,-1, 63,0);
        tracep->declBus(c+145,"SimTop u_cpu sext sext_imm key", false,-1, 2,0);
        tracep->declQuad(c+1411,"SimTop u_cpu sext sext_imm default_out", false,-1, 63,0);
        tracep->declArray(c+908,"SimTop u_cpu sext sext_imm lut", false,-1, 334,0);
        tracep->declBus(c+1405,"SimTop u_cpu sext sext_imm i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1391,"SimTop u_cpu sext sext_imm i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1378,"SimTop u_cpu sext sext_imm i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1381,"SimTop u_cpu sext sext_imm i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+338,"SimTop u_cpu sext sext_imm i0 out", false,-1, 63,0);
        tracep->declBus(c+145,"SimTop u_cpu sext sext_imm i0 key", false,-1, 2,0);
        tracep->declQuad(c+1411,"SimTop u_cpu sext sext_imm i0 default_out", false,-1, 63,0);
        tracep->declArray(c+908,"SimTop u_cpu sext sext_imm i0 lut", false,-1, 334,0);
        tracep->declBus(c+1410,"SimTop u_cpu sext sext_imm i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<5; i++) {
                tracep->declArray(c+919+i*3,"SimTop u_cpu sext sext_imm i0 pair_list", true,(i+0), 66,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+934+i*1,"SimTop u_cpu sext sext_imm i0 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declQuad(c+939+i*2,"SimTop u_cpu sext sext_imm i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+949,"SimTop u_cpu sext sext_imm i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+951,"SimTop u_cpu sext sext_imm i0 hit", false,-1);
        tracep->declBus(c+1413,"SimTop u_cpu sext sext_imm i0 i", false,-1, 31,0);
        tracep->declBus(c+1414,"SimTop u_cpu sext sext_mem_read_value NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1380,"SimTop u_cpu sext sext_mem_read_value KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1378,"SimTop u_cpu sext sext_mem_read_value DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+342,"SimTop u_cpu sext sext_mem_read_value out", false,-1, 63,0);
        tracep->declBus(c+201,"SimTop u_cpu sext sext_mem_read_value key", false,-1, 3,0);
        tracep->declQuad(c+236,"SimTop u_cpu sext sext_mem_read_value default_out", false,-1, 63,0);
        tracep->declArray(c+952,"SimTop u_cpu sext sext_mem_read_value lut", false,-1, 475,0);
        tracep->declBus(c+1414,"SimTop u_cpu sext sext_mem_read_value i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1380,"SimTop u_cpu sext sext_mem_read_value i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1378,"SimTop u_cpu sext sext_mem_read_value i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1381,"SimTop u_cpu sext sext_mem_read_value i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+342,"SimTop u_cpu sext sext_mem_read_value i0 out", false,-1, 63,0);
        tracep->declBus(c+201,"SimTop u_cpu sext sext_mem_read_value i0 key", false,-1, 3,0);
        tracep->declQuad(c+236,"SimTop u_cpu sext sext_mem_read_value i0 default_out", false,-1, 63,0);
        tracep->declArray(c+952,"SimTop u_cpu sext sext_mem_read_value i0 lut", false,-1, 475,0);
        tracep->declBus(c+1415,"SimTop u_cpu sext sext_mem_read_value i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<7; i++) {
                tracep->declArray(c+967+i*3,"SimTop u_cpu sext sext_mem_read_value i0 pair_list", true,(i+0), 67,0);}}
        {int i; for (i=0; i<7; i++) {
                tracep->declBus(c+988+i*1,"SimTop u_cpu sext sext_mem_read_value i0 key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<7; i++) {
                tracep->declQuad(c+995+i*2,"SimTop u_cpu sext sext_mem_read_value i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+1009,"SimTop u_cpu sext sext_mem_read_value i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+1011,"SimTop u_cpu sext sext_mem_read_value i0 hit", false,-1);
        tracep->declBus(c+1416,"SimTop u_cpu sext sext_mem_read_value i0 i", false,-1, 31,0);
        tracep->declBus(c+1399,"SimTop u_cpu sext sext_value0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1380,"SimTop u_cpu sext sext_value0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1378,"SimTop u_cpu sext sext_value0 DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+346,"SimTop u_cpu sext sext_value0 out", false,-1, 63,0);
        tracep->declBus(c+203,"SimTop u_cpu sext sext_value0 key", false,-1, 3,0);
        tracep->declQuad(c+336,"SimTop u_cpu sext sext_value0 default_out", false,-1, 63,0);
        tracep->declArray(c+1012,"SimTop u_cpu sext sext_value0 lut", false,-1, 135,0);
        tracep->declBus(c+1399,"SimTop u_cpu sext sext_value0 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1380,"SimTop u_cpu sext sext_value0 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1378,"SimTop u_cpu sext sext_value0 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1381,"SimTop u_cpu sext sext_value0 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+346,"SimTop u_cpu sext sext_value0 i0 out", false,-1, 63,0);
        tracep->declBus(c+203,"SimTop u_cpu sext sext_value0 i0 key", false,-1, 3,0);
        tracep->declQuad(c+336,"SimTop u_cpu sext sext_value0 i0 default_out", false,-1, 63,0);
        tracep->declArray(c+1012,"SimTop u_cpu sext sext_value0 i0 lut", false,-1, 135,0);
        tracep->declBus(c+1415,"SimTop u_cpu sext sext_value0 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declArray(c+1017+i*3,"SimTop u_cpu sext sext_value0 i0 pair_list", true,(i+0), 67,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+1023+i*1,"SimTop u_cpu sext sext_value0 i0 key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+1025+i*2,"SimTop u_cpu sext sext_value0 i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+1029,"SimTop u_cpu sext sext_value0 i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+1031,"SimTop u_cpu sext sext_value0 i0 hit", false,-1);
        tracep->declBus(c+1417,"SimTop u_cpu sext sext_value0 i0 i", false,-1, 31,0);
        tracep->declQuad(c+254,"SimTop u_cpu npc_processing reg1", false,-1, 63,0);
        tracep->declQuad(c+258,"SimTop u_cpu npc_processing reg2", false,-1, 63,0);
        tracep->declQuad(c+367,"SimTop u_cpu npc_processing mtvec_value", false,-1, 63,0);
        tracep->declQuad(c+365,"SimTop u_cpu npc_processing mepc_value", false,-1, 63,0);
        tracep->declQuad(c+132,"SimTop u_cpu npc_processing pc_id", false,-1, 63,0);
        tracep->declQuad(c+244,"SimTop u_cpu npc_processing pc_if", false,-1, 63,0);
        tracep->declQuad(c+338,"SimTop u_cpu npc_processing imm", false,-1, 63,0);
        tracep->declBit(c+146,"SimTop u_cpu npc_processing npc_op", false,-1);
        tracep->declBit(c+149,"SimTop u_cpu npc_processing npc_regimm", false,-1);
        tracep->declBus(c+353,"SimTop u_cpu npc_processing Forward_c", false,-1, 1,0);
        tracep->declBus(c+354,"SimTop u_cpu npc_processing Forward_d", false,-1, 1,0);
        tracep->declQuad(c+346,"SimTop u_cpu npc_processing sext_value_ex", false,-1, 63,0);
        tracep->declQuad(c+242,"SimTop u_cpu npc_processing reg_write_value_mem", false,-1, 63,0);
        tracep->declQuad(c+268,"SimTop u_cpu npc_processing reg_write_value_wb", false,-1, 63,0);
        tracep->declBus(c+204,"SimTop u_cpu npc_processing branch_type", false,-1, 2,0);
        tracep->declBit(c+216,"SimTop u_cpu npc_processing environment_call_id", false,-1);
        tracep->declBit(c+220,"SimTop u_cpu npc_processing m_mode_return_id", false,-1);
        tracep->declBit(c+335,"SimTop u_cpu npc_processing m_time_interrupt_trigger", false,-1);
        tracep->declBit(c+356,"SimTop u_cpu npc_processing pipeline_stall", false,-1);
        tracep->declBit(c+350,"SimTop u_cpu npc_processing IF_Flush", false,-1);
        tracep->declQuad(c+246,"SimTop u_cpu npc_processing npc", false,-1, 63,0);
        tracep->declQuad(c+1032,"SimTop u_cpu npc_processing operation_a_forward", false,-1, 63,0);
        tracep->declQuad(c+1034,"SimTop u_cpu npc_processing operation_b_forward", false,-1, 63,0);
        tracep->declBit(c+1036,"SimTop u_cpu npc_processing branch_en", false,-1);
        tracep->declQuad(c+1037,"SimTop u_cpu npc_processing pc_branch_addr", false,-1, 63,0);
        tracep->declBus(c+1380,"SimTop u_cpu npc_processing forward_c_mux NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1399,"SimTop u_cpu npc_processing forward_c_mux KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1378,"SimTop u_cpu npc_processing forward_c_mux DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+1032,"SimTop u_cpu npc_processing forward_c_mux out", false,-1, 63,0);
        tracep->declBus(c+353,"SimTop u_cpu npc_processing forward_c_mux key", false,-1, 1,0);
        tracep->declQuad(c+254,"SimTop u_cpu npc_processing forward_c_mux default_out", false,-1, 63,0);
        tracep->declArray(c+1039,"SimTop u_cpu npc_processing forward_c_mux lut", false,-1, 263,0);
        tracep->declBus(c+1380,"SimTop u_cpu npc_processing forward_c_mux i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1399,"SimTop u_cpu npc_processing forward_c_mux i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1378,"SimTop u_cpu npc_processing forward_c_mux i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1381,"SimTop u_cpu npc_processing forward_c_mux i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+1032,"SimTop u_cpu npc_processing forward_c_mux i0 out", false,-1, 63,0);
        tracep->declBus(c+353,"SimTop u_cpu npc_processing forward_c_mux i0 key", false,-1, 1,0);
        tracep->declQuad(c+254,"SimTop u_cpu npc_processing forward_c_mux i0 default_out", false,-1, 63,0);
        tracep->declArray(c+1039,"SimTop u_cpu npc_processing forward_c_mux i0 lut", false,-1, 263,0);
        tracep->declBus(c+1400,"SimTop u_cpu npc_processing forward_c_mux i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declArray(c+1048+i*3,"SimTop u_cpu npc_processing forward_c_mux i0 pair_list", true,(i+0), 65,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+1060+i*1,"SimTop u_cpu npc_processing forward_c_mux i0 key_list", true,(i+0), 1,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+1064+i*2,"SimTop u_cpu npc_processing forward_c_mux i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+1072,"SimTop u_cpu npc_processing forward_c_mux i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+1074,"SimTop u_cpu npc_processing forward_c_mux i0 hit", false,-1);
        tracep->declBus(c+1418,"SimTop u_cpu npc_processing forward_c_mux i0 i", false,-1, 31,0);
        tracep->declBus(c+1380,"SimTop u_cpu npc_processing forward_d_mux NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1399,"SimTop u_cpu npc_processing forward_d_mux KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1378,"SimTop u_cpu npc_processing forward_d_mux DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+1034,"SimTop u_cpu npc_processing forward_d_mux out", false,-1, 63,0);
        tracep->declBus(c+354,"SimTop u_cpu npc_processing forward_d_mux key", false,-1, 1,0);
        tracep->declQuad(c+258,"SimTop u_cpu npc_processing forward_d_mux default_out", false,-1, 63,0);
        tracep->declArray(c+1075,"SimTop u_cpu npc_processing forward_d_mux lut", false,-1, 263,0);
        tracep->declBus(c+1380,"SimTop u_cpu npc_processing forward_d_mux i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1399,"SimTop u_cpu npc_processing forward_d_mux i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1378,"SimTop u_cpu npc_processing forward_d_mux i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1381,"SimTop u_cpu npc_processing forward_d_mux i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+1034,"SimTop u_cpu npc_processing forward_d_mux i0 out", false,-1, 63,0);
        tracep->declBus(c+354,"SimTop u_cpu npc_processing forward_d_mux i0 key", false,-1, 1,0);
        tracep->declQuad(c+258,"SimTop u_cpu npc_processing forward_d_mux i0 default_out", false,-1, 63,0);
        tracep->declArray(c+1075,"SimTop u_cpu npc_processing forward_d_mux i0 lut", false,-1, 263,0);
        tracep->declBus(c+1400,"SimTop u_cpu npc_processing forward_d_mux i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declArray(c+1084+i*3,"SimTop u_cpu npc_processing forward_d_mux i0 pair_list", true,(i+0), 65,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+1096+i*1,"SimTop u_cpu npc_processing forward_d_mux i0 key_list", true,(i+0), 1,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+1100+i*2,"SimTop u_cpu npc_processing forward_d_mux i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+1108,"SimTop u_cpu npc_processing forward_d_mux i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+1110,"SimTop u_cpu npc_processing forward_d_mux i0 hit", false,-1);
        tracep->declBus(c+1418,"SimTop u_cpu npc_processing forward_d_mux i0 i", false,-1, 31,0);
        tracep->declBus(c+1392,"SimTop u_cpu npc_processing branch_test NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1391,"SimTop u_cpu npc_processing branch_test KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1381,"SimTop u_cpu npc_processing branch_test DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1036,"SimTop u_cpu npc_processing branch_test out", false,-1, 0,0);
        tracep->declBus(c+204,"SimTop u_cpu npc_processing branch_test key", false,-1, 2,0);
        tracep->declBus(c+1383,"SimTop u_cpu npc_processing branch_test default_out", false,-1, 0,0);
        tracep->declBus(c+1111,"SimTop u_cpu npc_processing branch_test lut", false,-1, 23,0);
        tracep->declBus(c+1392,"SimTop u_cpu npc_processing branch_test i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+1391,"SimTop u_cpu npc_processing branch_test i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+1381,"SimTop u_cpu npc_processing branch_test i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1381,"SimTop u_cpu npc_processing branch_test i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+1036,"SimTop u_cpu npc_processing branch_test i0 out", false,-1, 0,0);
        tracep->declBus(c+204,"SimTop u_cpu npc_processing branch_test i0 key", false,-1, 2,0);
        tracep->declBus(c+1383,"SimTop u_cpu npc_processing branch_test i0 default_out", false,-1, 0,0);
        tracep->declBus(c+1111,"SimTop u_cpu npc_processing branch_test i0 lut", false,-1, 23,0);
        tracep->declBus(c+1380,"SimTop u_cpu npc_processing branch_test i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<6; i++) {
                tracep->declBus(c+1112+i*1,"SimTop u_cpu npc_processing branch_test i0 pair_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<6; i++) {
                tracep->declBus(c+1118+i*1,"SimTop u_cpu npc_processing branch_test i0 key_list", true,(i+0), 2,0);}}
        {int i; for (i=0; i<6; i++) {
                tracep->declBus(c+1124+i*1,"SimTop u_cpu npc_processing branch_test i0 data_list", true,(i+0), 0,0);}}
        tracep->declBus(c+1130,"SimTop u_cpu npc_processing branch_test i0 lut_out", false,-1, 0,0);
        tracep->declBit(c+1131,"SimTop u_cpu npc_processing branch_test i0 hit", false,-1);
        tracep->declBus(c+1419,"SimTop u_cpu npc_processing branch_test i0 i", false,-1, 31,0);
        tracep->declBit(c+1285,"SimTop u_cpu forwarding_unit clk", false,-1);
        tracep->declBit(c+1356,"SimTop u_cpu forwarding_unit rst", false,-1);
        tracep->declBus(c+184,"SimTop u_cpu forwarding_unit rs1_id", false,-1, 4,0);
        tracep->declBus(c+186,"SimTop u_cpu forwarding_unit rs1_ex", false,-1, 4,0);
        tracep->declBus(c+187,"SimTop u_cpu forwarding_unit rs2_id", false,-1, 4,0);
        tracep->declBus(c+188,"SimTop u_cpu forwarding_unit rs2_ex", false,-1, 4,0);
        tracep->declBus(c+177,"SimTop u_cpu forwarding_unit rd_ex", false,-1, 4,0);
        tracep->declBus(c+178,"SimTop u_cpu forwarding_unit rd_mem", false,-1, 4,0);
        tracep->declBus(c+179,"SimTop u_cpu forwarding_unit rd_wb", false,-1, 4,0);
        tracep->declBus(c+189,"SimTop u_cpu forwarding_unit rs2_mem", false,-1, 4,0);
        tracep->declBit(c+17,"SimTop u_cpu forwarding_unit write_mem_en_mem", false,-1);
        tracep->declBit(c+195,"SimTop u_cpu forwarding_unit read_mem_en_wb", false,-1);
        tracep->declBit(c+157,"SimTop u_cpu forwarding_unit wen_ex", false,-1);
        tracep->declBit(c+158,"SimTop u_cpu forwarding_unit wen_mem", false,-1);
        tracep->declBit(c+159,"SimTop u_cpu forwarding_unit wen_wb", false,-1);
        tracep->declBus(c+351,"SimTop u_cpu forwarding_unit Forward_a", false,-1, 1,0);
        tracep->declBus(c+352,"SimTop u_cpu forwarding_unit Forward_b", false,-1, 1,0);
        tracep->declBus(c+353,"SimTop u_cpu forwarding_unit Forward_c", false,-1, 1,0);
        tracep->declBus(c+354,"SimTop u_cpu forwarding_unit Forward_d", false,-1, 1,0);
        tracep->declBit(c+355,"SimTop u_cpu forwarding_unit Forward_store", false,-1);
        tracep->declBit(c+1285,"SimTop u_cpu hazard_detection_unit clk", false,-1);
        tracep->declBit(c+1356,"SimTop u_cpu hazard_detection_unit rst", false,-1);
        tracep->declBus(c+184,"SimTop u_cpu hazard_detection_unit rs1_id", false,-1, 4,0);
        tracep->declBus(c+187,"SimTop u_cpu hazard_detection_unit rs2_id", false,-1, 4,0);
        tracep->declBus(c+177,"SimTop u_cpu hazard_detection_unit rd_ex", false,-1, 4,0);
        tracep->declBit(c+193,"SimTop u_cpu hazard_detection_unit read_mem_en_ex", false,-1);
        tracep->declBus(c+140,"SimTop u_cpu hazard_detection_unit inst_id", false,-1, 31,0);
        tracep->declBus(c+142,"SimTop u_cpu hazard_detection_unit inst_ex", false,-1, 31,0);
        tracep->declBit(c+356,"SimTop u_cpu hazard_detection_unit pipeline_stall", false,-1);
        tracep->declBit(c+360,"SimTop u_cpu hazard_detection_unit pc_wen", false,-1);
        tracep->declBit(c+1285,"SimTop u_cpu DifftestInstrCommit clock", false,-1);
        tracep->declBus(c+1371,"SimTop u_cpu DifftestInstrCommit coreid", false,-1, 7,0);
        tracep->declBus(c+1371,"SimTop u_cpu DifftestInstrCommit index", false,-1, 7,0);
        tracep->declBit(c+1143,"SimTop u_cpu DifftestInstrCommit valid", false,-1);
        tracep->declQuad(c+1140,"SimTop u_cpu DifftestInstrCommit pc", false,-1, 63,0);
        tracep->declBus(c+1142,"SimTop u_cpu DifftestInstrCommit instr", false,-1, 31,0);
        tracep->declBit(c+1144,"SimTop u_cpu DifftestInstrCommit skip", false,-1);
        tracep->declBit(c+1376,"SimTop u_cpu DifftestInstrCommit isRVC", false,-1);
        tracep->declBit(c+1376,"SimTop u_cpu DifftestInstrCommit scFailed", false,-1);
        tracep->declBit(c+1136,"SimTop u_cpu DifftestInstrCommit wen", false,-1);
        tracep->declBus(c+1137,"SimTop u_cpu DifftestInstrCommit wdest", false,-1, 7,0);
        tracep->declQuad(c+1138,"SimTop u_cpu DifftestInstrCommit wdata", false,-1, 63,0);
        tracep->declBit(c+1285,"SimTop u_cpu DifftestArchIntRegState clock", false,-1);
        tracep->declBus(c+1371,"SimTop u_cpu DifftestArchIntRegState coreid", false,-1, 7,0);
        tracep->declQuad(c+1215,"SimTop u_cpu DifftestArchIntRegState gpr_0", false,-1, 63,0);
        tracep->declQuad(c+1217,"SimTop u_cpu DifftestArchIntRegState gpr_1", false,-1, 63,0);
        tracep->declQuad(c+1219,"SimTop u_cpu DifftestArchIntRegState gpr_2", false,-1, 63,0);
        tracep->declQuad(c+1221,"SimTop u_cpu DifftestArchIntRegState gpr_3", false,-1, 63,0);
        tracep->declQuad(c+1223,"SimTop u_cpu DifftestArchIntRegState gpr_4", false,-1, 63,0);
        tracep->declQuad(c+1225,"SimTop u_cpu DifftestArchIntRegState gpr_5", false,-1, 63,0);
        tracep->declQuad(c+1227,"SimTop u_cpu DifftestArchIntRegState gpr_6", false,-1, 63,0);
        tracep->declQuad(c+1229,"SimTop u_cpu DifftestArchIntRegState gpr_7", false,-1, 63,0);
        tracep->declQuad(c+1231,"SimTop u_cpu DifftestArchIntRegState gpr_8", false,-1, 63,0);
        tracep->declQuad(c+1233,"SimTop u_cpu DifftestArchIntRegState gpr_9", false,-1, 63,0);
        tracep->declQuad(c+1235,"SimTop u_cpu DifftestArchIntRegState gpr_10", false,-1, 63,0);
        tracep->declQuad(c+1237,"SimTop u_cpu DifftestArchIntRegState gpr_11", false,-1, 63,0);
        tracep->declQuad(c+1239,"SimTop u_cpu DifftestArchIntRegState gpr_12", false,-1, 63,0);
        tracep->declQuad(c+1241,"SimTop u_cpu DifftestArchIntRegState gpr_13", false,-1, 63,0);
        tracep->declQuad(c+1243,"SimTop u_cpu DifftestArchIntRegState gpr_14", false,-1, 63,0);
        tracep->declQuad(c+1245,"SimTop u_cpu DifftestArchIntRegState gpr_15", false,-1, 63,0);
        tracep->declQuad(c+1247,"SimTop u_cpu DifftestArchIntRegState gpr_16", false,-1, 63,0);
        tracep->declQuad(c+1249,"SimTop u_cpu DifftestArchIntRegState gpr_17", false,-1, 63,0);
        tracep->declQuad(c+1251,"SimTop u_cpu DifftestArchIntRegState gpr_18", false,-1, 63,0);
        tracep->declQuad(c+1253,"SimTop u_cpu DifftestArchIntRegState gpr_19", false,-1, 63,0);
        tracep->declQuad(c+1255,"SimTop u_cpu DifftestArchIntRegState gpr_20", false,-1, 63,0);
        tracep->declQuad(c+1257,"SimTop u_cpu DifftestArchIntRegState gpr_21", false,-1, 63,0);
        tracep->declQuad(c+1259,"SimTop u_cpu DifftestArchIntRegState gpr_22", false,-1, 63,0);
        tracep->declQuad(c+1261,"SimTop u_cpu DifftestArchIntRegState gpr_23", false,-1, 63,0);
        tracep->declQuad(c+1263,"SimTop u_cpu DifftestArchIntRegState gpr_24", false,-1, 63,0);
        tracep->declQuad(c+1265,"SimTop u_cpu DifftestArchIntRegState gpr_25", false,-1, 63,0);
        tracep->declQuad(c+1267,"SimTop u_cpu DifftestArchIntRegState gpr_26", false,-1, 63,0);
        tracep->declQuad(c+1269,"SimTop u_cpu DifftestArchIntRegState gpr_27", false,-1, 63,0);
        tracep->declQuad(c+1271,"SimTop u_cpu DifftestArchIntRegState gpr_28", false,-1, 63,0);
        tracep->declQuad(c+1273,"SimTop u_cpu DifftestArchIntRegState gpr_29", false,-1, 63,0);
        tracep->declQuad(c+1275,"SimTop u_cpu DifftestArchIntRegState gpr_30", false,-1, 63,0);
        tracep->declQuad(c+1277,"SimTop u_cpu DifftestArchIntRegState gpr_31", false,-1, 63,0);
        tracep->declBit(c+1285,"SimTop u_cpu DifftestTrapEvent clock", false,-1);
        tracep->declBus(c+1371,"SimTop u_cpu DifftestTrapEvent coreid", false,-1, 7,0);
        tracep->declBit(c+1145,"SimTop u_cpu DifftestTrapEvent valid", false,-1);
        tracep->declBus(c+1279,"SimTop u_cpu DifftestTrapEvent code", false,-1, 2,0);
        tracep->declQuad(c+1140,"SimTop u_cpu DifftestTrapEvent pc", false,-1, 63,0);
        tracep->declQuad(c+1147,"SimTop u_cpu DifftestTrapEvent cycleCnt", false,-1, 63,0);
        tracep->declQuad(c+1149,"SimTop u_cpu DifftestTrapEvent instrCnt", false,-1, 63,0);
        tracep->declBit(c+1285,"SimTop u_cpu DifftestCSRState clock", false,-1);
        tracep->declBus(c+1371,"SimTop u_cpu DifftestCSRState coreid", false,-1, 7,0);
        tracep->declBus(c+1390,"SimTop u_cpu DifftestCSRState priviledgeMode", false,-1, 1,0);
        tracep->declQuad(c+363,"SimTop u_cpu DifftestCSRState mstatus", false,-1, 63,0);
        tracep->declQuad(c+1420,"SimTop u_cpu DifftestCSRState sstatus", false,-1, 63,0);
        tracep->declQuad(c+365,"SimTop u_cpu DifftestCSRState mepc", false,-1, 63,0);
        tracep->declQuad(c+1420,"SimTop u_cpu DifftestCSRState sepc", false,-1, 63,0);
        tracep->declQuad(c+1420,"SimTop u_cpu DifftestCSRState mtval", false,-1, 63,0);
        tracep->declQuad(c+1420,"SimTop u_cpu DifftestCSRState stval", false,-1, 63,0);
        tracep->declQuad(c+367,"SimTop u_cpu DifftestCSRState mtvec", false,-1, 63,0);
        tracep->declQuad(c+1420,"SimTop u_cpu DifftestCSRState stvec", false,-1, 63,0);
        tracep->declQuad(c+369,"SimTop u_cpu DifftestCSRState mcause", false,-1, 63,0);
        tracep->declQuad(c+1420,"SimTop u_cpu DifftestCSRState scause", false,-1, 63,0);
        tracep->declQuad(c+1420,"SimTop u_cpu DifftestCSRState satp", false,-1, 63,0);
        tracep->declQuad(c+373,"SimTop u_cpu DifftestCSRState mip", false,-1, 63,0);
        tracep->declQuad(c+371,"SimTop u_cpu DifftestCSRState mie", false,-1, 63,0);
        tracep->declQuad(c+375,"SimTop u_cpu DifftestCSRState mscratch", false,-1, 63,0);
        tracep->declQuad(c+1420,"SimTop u_cpu DifftestCSRState sscratch", false,-1, 63,0);
        tracep->declQuad(c+1420,"SimTop u_cpu DifftestCSRState mideleg", false,-1, 63,0);
        tracep->declQuad(c+1420,"SimTop u_cpu DifftestCSRState medeleg", false,-1, 63,0);
        tracep->declBit(c+1285,"SimTop u_cpu DifftestArchFpRegState clock", false,-1);
        tracep->declBus(c+1371,"SimTop u_cpu DifftestArchFpRegState coreid", false,-1, 7,0);
        tracep->declQuad(c+1420,"SimTop u_cpu DifftestArchFpRegState fpr_0", false,-1, 63,0);
        tracep->declQuad(c+1420,"SimTop u_cpu DifftestArchFpRegState fpr_1", false,-1, 63,0);
        tracep->declQuad(c+1420,"SimTop u_cpu DifftestArchFpRegState fpr_2", false,-1, 63,0);
        tracep->declQuad(c+1420,"SimTop u_cpu DifftestArchFpRegState fpr_3", false,-1, 63,0);
        tracep->declQuad(c+1420,"SimTop u_cpu DifftestArchFpRegState fpr_4", false,-1, 63,0);
        tracep->declQuad(c+1420,"SimTop u_cpu DifftestArchFpRegState fpr_5", false,-1, 63,0);
        tracep->declQuad(c+1420,"SimTop u_cpu DifftestArchFpRegState fpr_6", false,-1, 63,0);
        tracep->declQuad(c+1420,"SimTop u_cpu DifftestArchFpRegState fpr_7", false,-1, 63,0);
        tracep->declQuad(c+1420,"SimTop u_cpu DifftestArchFpRegState fpr_8", false,-1, 63,0);
        tracep->declQuad(c+1420,"SimTop u_cpu DifftestArchFpRegState fpr_9", false,-1, 63,0);
        tracep->declQuad(c+1420,"SimTop u_cpu DifftestArchFpRegState fpr_10", false,-1, 63,0);
        tracep->declQuad(c+1420,"SimTop u_cpu DifftestArchFpRegState fpr_11", false,-1, 63,0);
        tracep->declQuad(c+1420,"SimTop u_cpu DifftestArchFpRegState fpr_12", false,-1, 63,0);
        tracep->declQuad(c+1420,"SimTop u_cpu DifftestArchFpRegState fpr_13", false,-1, 63,0);
        tracep->declQuad(c+1420,"SimTop u_cpu DifftestArchFpRegState fpr_14", false,-1, 63,0);
        tracep->declQuad(c+1420,"SimTop u_cpu DifftestArchFpRegState fpr_15", false,-1, 63,0);
        tracep->declQuad(c+1420,"SimTop u_cpu DifftestArchFpRegState fpr_16", false,-1, 63,0);
        tracep->declQuad(c+1420,"SimTop u_cpu DifftestArchFpRegState fpr_17", false,-1, 63,0);
        tracep->declQuad(c+1420,"SimTop u_cpu DifftestArchFpRegState fpr_18", false,-1, 63,0);
        tracep->declQuad(c+1420,"SimTop u_cpu DifftestArchFpRegState fpr_19", false,-1, 63,0);
        tracep->declQuad(c+1420,"SimTop u_cpu DifftestArchFpRegState fpr_20", false,-1, 63,0);
        tracep->declQuad(c+1420,"SimTop u_cpu DifftestArchFpRegState fpr_21", false,-1, 63,0);
        tracep->declQuad(c+1420,"SimTop u_cpu DifftestArchFpRegState fpr_22", false,-1, 63,0);
        tracep->declQuad(c+1420,"SimTop u_cpu DifftestArchFpRegState fpr_23", false,-1, 63,0);
        tracep->declQuad(c+1420,"SimTop u_cpu DifftestArchFpRegState fpr_24", false,-1, 63,0);
        tracep->declQuad(c+1420,"SimTop u_cpu DifftestArchFpRegState fpr_25", false,-1, 63,0);
        tracep->declQuad(c+1420,"SimTop u_cpu DifftestArchFpRegState fpr_26", false,-1, 63,0);
        tracep->declQuad(c+1420,"SimTop u_cpu DifftestArchFpRegState fpr_27", false,-1, 63,0);
        tracep->declQuad(c+1420,"SimTop u_cpu DifftestArchFpRegState fpr_28", false,-1, 63,0);
        tracep->declQuad(c+1420,"SimTop u_cpu DifftestArchFpRegState fpr_29", false,-1, 63,0);
        tracep->declQuad(c+1420,"SimTop u_cpu DifftestArchFpRegState fpr_30", false,-1, 63,0);
        tracep->declQuad(c+1420,"SimTop u_cpu DifftestArchFpRegState fpr_31", false,-1, 63,0);
        tracep->declBit(c+1285,"SimTop clint clk", false,-1);
        tracep->declBit(c+1356,"SimTop clint rst", false,-1);
        tracep->declBit(c+56,"SimTop clint clint_wen_i", false,-1);
        tracep->declBit(c+57,"SimTop clint clint_ren_i", false,-1);
        tracep->declQuad(c+58,"SimTop clint clint_addr_i", false,-1, 63,0);
        tracep->declQuad(c+60,"SimTop clint clint_data_i", false,-1, 63,0);
        tracep->declQuad(c+62,"SimTop clint clint_data_read_o", false,-1, 63,0);
        tracep->declBit(c+64,"SimTop clint mtime_ge_mtimecmp_o", false,-1);
        tracep->declQuad(c+1132,"SimTop clint mtime", false,-1, 63,0);
        tracep->declQuad(c+1134,"SimTop clint mtimecmp", false,-1, 63,0);
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
    VlWide<3>/*95:0*/ __Vtemp931;
    VlWide<4>/*127:0*/ __Vtemp935;
    VlWide<4>/*127:0*/ __Vtemp937;
    VlWide<4>/*127:0*/ __Vtemp939;
    VlWide<3>/*95:0*/ __Vtemp940;
    VlWide<3>/*95:0*/ __Vtemp941;
    VlWide<3>/*95:0*/ __Vtemp942;
    VlWide<3>/*95:0*/ __Vtemp943;
    VlWide<3>/*95:0*/ __Vtemp944;
    VlWide<3>/*95:0*/ __Vtemp945;
    VlWide<3>/*95:0*/ __Vtemp946;
    VlWide<3>/*95:0*/ __Vtemp947;
    VlWide<4>/*127:0*/ __Vtemp948;
    VlWide<3>/*95:0*/ __Vtemp949;
    VlWide<4>/*127:0*/ __Vtemp950;
    VlWide<4>/*127:0*/ __Vtemp951;
    VlWide<3>/*95:0*/ __Vtemp952;
    VlWide<4>/*127:0*/ __Vtemp953;
    VlWide<4>/*127:0*/ __Vtemp954;
    VlWide<3>/*95:0*/ __Vtemp955;
    VlWide<4>/*127:0*/ __Vtemp956;
    VlWide<4>/*127:0*/ __Vtemp961;
    VlWide<3>/*95:0*/ __Vtemp962;
    VlWide<4>/*127:0*/ __Vtemp963;
    VlWide<3>/*95:0*/ __Vtemp964;
    VlWide<4>/*127:0*/ __Vtemp965;
    VlWide<3>/*95:0*/ __Vtemp966;
    VlWide<4>/*127:0*/ __Vtemp967;
    VlWide<3>/*95:0*/ __Vtemp968;
    VlWide<4>/*127:0*/ __Vtemp969;
    VlWide<3>/*95:0*/ __Vtemp970;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,((1U == (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__w_state))));
        VL_EXTEND_WQ(65,64, __Vtemp931, vlSelf->SimTop__DOT__rw_addr);
        tracep->fullIData(oldp+2,((0xfffffff8U & __Vtemp931[0U])),32);
        tracep->fullBit(oldp+3,((2U == (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__w_state))));
        tracep->fullQData(oldp+4,(vlSelf->SimTop__DOT__u_cpu__DOT__reg2_to_mem_forward),64);
        tracep->fullCData(oldp+6,(vlSelf->SimTop__DOT__mem_write_mask_axi),8);
        tracep->fullBit(oldp+7,((3U == (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__w_state))));
        tracep->fullBit(oldp+8,((1U == (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__r_state))));
        tracep->fullCData(oldp+9,(((1U == (IData)(vlSelf->SimTop__DOT__arbitrating__DOT__arb_state))
                                    ? 0U : 0x7fU)),8);
        tracep->fullBit(oldp+10,((2U == (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__r_state))));
        tracep->fullQData(oldp+11,(((1U & (IData)((vlSelf->SimTop__DOT__u_cpu__DOT__pc 
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
        tracep->fullQData(oldp+13,((0xfffffffffffffff8ULL 
                                    & vlSelf->SimTop__DOT__u_cpu__DOT__pc)),64);
        tracep->fullCData(oldp+15,(vlSelf->SimTop__DOT__axi_rw__DOT__rw_resp),2);
        tracep->fullBit(oldp+16,(vlSelf->SimTop__DOT__mem_valid));
        tracep->fullBit(oldp+17,(vlSelf->SimTop__DOT__u_cpu__DOT__write_mem_en_mem));
        tracep->fullQData(oldp+18,((0xfffffffffffffff8ULL 
                                    & vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem)),64);
        tracep->fullQData(oldp+20,(vlSelf->SimTop__DOT__mem_data_read),64);
        tracep->fullBit(oldp+22,(vlSelf->SimTop__DOT__icache_valid));
        tracep->fullQData(oldp+23,(vlSelf->SimTop__DOT__icache_addr),64);
        tracep->fullCData(oldp+25,(vlSelf->SimTop__DOT__icache_len),8);
        tracep->fullBit(oldp+26,(vlSelf->SimTop__DOT__icache_req));
        tracep->fullQData(oldp+27,(vlSelf->SimTop__DOT__icache_data_read),64);
        tracep->fullBit(oldp+29,(vlSelf->SimTop__DOT__icache_stall));
        tracep->fullBit(oldp+30,(vlSelf->SimTop__DOT__rw_valid));
        tracep->fullBit(oldp+31,(vlSelf->SimTop__DOT__axi_rw__DOT__rw_ready));
        tracep->fullBit(oldp+32,(vlSelf->SimTop__DOT__rw_req));
        tracep->fullQData(oldp+33,(vlSelf->SimTop__DOT__rw_addr),64);
        tracep->fullCData(oldp+35,(vlSelf->SimTop__DOT__arbitrating__DOT__arb_state),2);
        tracep->fullBit(oldp+36,(vlSelf->SimTop__DOT__arb_if_r_hs));
        tracep->fullBit(oldp+37,(vlSelf->SimTop__DOT__arb_if_trans_done));
        tracep->fullBit(oldp+38,(vlSelf->SimTop__DOT__arbitrating__DOT__zza_pulse_1));
        tracep->fullBit(oldp+39,(vlSelf->SimTop__DOT__axi_stall));
        tracep->fullBit(oldp+40,(((~ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__axi_stall_i)) 
                                  & (0x7bU == vlSelf->SimTop__DOT__u_cpu__DOT__inst_wb))));
        tracep->fullCData(oldp+41,((0xffU & (IData)(
                                                    vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf
                                                    [0xaU]))),8);
        tracep->fullWData(oldp+42,(vlSelf->SimTop__DOT__iram_data_read_128),128);
        tracep->fullBit(oldp+46,(vlSelf->SimTop__DOT__iram_wen));
        if ((1U & (IData)((vlSelf->SimTop__DOT__u_icache__DOT__re_write_addr 
                           >> 3U)))) {
            __Vtemp935[0U] = 0xffffffffU;
            __Vtemp935[1U] = 0xffffffffU;
            __Vtemp935[2U] = 0U;
            __Vtemp935[3U] = 0U;
        } else {
            __Vtemp935[0U] = 0U;
            __Vtemp935[1U] = 0U;
            __Vtemp935[2U] = 0xffffffffU;
            __Vtemp935[3U] = 0xffffffffU;
        }
        tracep->fullWData(oldp+47,(__Vtemp935),128);
        tracep->fullCData(oldp+51,(vlSelf->SimTop__DOT__iram_addr),6);
        VL_EXTEND_WQ(128,64, __Vtemp937, vlSelf->SimTop__DOT__icache_data_read);
        if ((1U & (IData)((vlSelf->SimTop__DOT__u_icache__DOT__re_write_addr 
                           >> 3U)))) {
            __Vtemp939[0U] = 0U;
            __Vtemp939[1U] = 0U;
            __Vtemp939[2U] = (IData)(vlSelf->SimTop__DOT__icache_data_read);
            __Vtemp939[3U] = (IData)((vlSelf->SimTop__DOT__icache_data_read 
                                      >> 0x20U));
        } else {
            __Vtemp939[0U] = __Vtemp937[0U];
            __Vtemp939[1U] = __Vtemp937[1U];
            __Vtemp939[2U] = __Vtemp937[2U];
            __Vtemp939[3U] = __Vtemp937[3U];
        }
        tracep->fullWData(oldp+52,(__Vtemp939),128);
        tracep->fullBit(oldp+56,(vlSelf->SimTop__DOT__u_cpu__DOT__clint_wen));
        tracep->fullBit(oldp+57,(((0x200U == (0xffffU 
                                              & (IData)(
                                                        (vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem 
                                                         >> 0x10U)))) 
                                  & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__read_mem_en_mem))));
        tracep->fullQData(oldp+58,(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem),64);
        tracep->fullQData(oldp+60,(vlSelf->SimTop__DOT__u_cpu__DOT__memory__DOT__value_writen_to_mem),64);
        tracep->fullQData(oldp+62,(vlSelf->SimTop__DOT__clint_data_read),64);
        tracep->fullBit(oldp+64,((vlSelf->SimTop__DOT__clint__DOT__mtime 
                                  >= vlSelf->SimTop__DOT__clint__DOT__mtimecmp)));
        VL_EXTEND_WQ(65,64, __Vtemp940, vlSelf->SimTop__DOT__u_cpu__DOT__reg2_to_mem_forward);
        tracep->fullWData(oldp+65,(__Vtemp940),65);
        VL_EXTEND_WQ(65,64, __Vtemp941, vlSelf->SimTop__DOT__rw_addr);
        tracep->fullWData(oldp+68,(__Vtemp941),65);
        tracep->fullBit(oldp+71,(((IData)(vlSelf->SimTop__DOT__rw_valid) 
                                  & (IData)(vlSelf->SimTop__DOT__rw_req))));
        tracep->fullBit(oldp+72,(((IData)(vlSelf->SimTop__DOT__rw_valid) 
                                  & (~ (IData)(vlSelf->SimTop__DOT__rw_req)))));
        tracep->fullCData(oldp+73,(vlSelf->SimTop__DOT__axi_rw__DOT__w_state),2);
        tracep->fullCData(oldp+74,(vlSelf->SimTop__DOT__axi_rw__DOT__r_state),2);
        tracep->fullBit(oldp+75,((0U == (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__w_state))));
        tracep->fullBit(oldp+76,((0U == (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__r_state))));
        tracep->fullCData(oldp+77,(vlSelf->SimTop__DOT__axi_rw__DOT__len),8);
        VL_EXTEND_WQ(65,64, __Vtemp942, vlSelf->SimTop__DOT__rw_addr);
        tracep->fullBit(oldp+78,((0U == (7U & __Vtemp942[0U]))));
        VL_EXTEND_WQ(65,64, __Vtemp943, vlSelf->SimTop__DOT__rw_addr);
        tracep->fullCData(oldp+79,((7U & __Vtemp943[0U])),4);
        VL_EXTEND_WQ(65,64, __Vtemp944, vlSelf->SimTop__DOT__rw_addr);
        tracep->fullCData(oldp+80,((0xfU & ((IData)(3U) 
                                            + (7U & 
                                               __Vtemp944[0U])))),4);
        VL_EXTEND_WQ(65,64, __Vtemp945, vlSelf->SimTop__DOT__rw_addr);
        tracep->fullBit(oldp+81,((1U & (((IData)(3U) 
                                         + (7U & __Vtemp945[0U])) 
                                        >> 3U))));
        VL_EXTEND_WQ(65,64, __Vtemp946, vlSelf->SimTop__DOT__rw_addr);
        tracep->fullCData(oldp+82,((0x38U & (__Vtemp946[0U] 
                                             << 3U))),6);
        VL_EXTEND_WQ(65,64, __Vtemp947, vlSelf->SimTop__DOT__rw_addr);
        tracep->fullCData(oldp+83,((0x3fU & (- (0x38U 
                                                & (__Vtemp947[0U] 
                                                   << 3U))))),6);
        __Vtemp948[0U] = 0xffffffffU;
        __Vtemp948[1U] = 0U;
        __Vtemp948[2U] = 0U;
        __Vtemp948[3U] = 0U;
        VL_EXTEND_WQ(65,64, __Vtemp949, vlSelf->SimTop__DOT__rw_addr);
        VL_SHIFTL_WWI(128,128,6, __Vtemp950, __Vtemp948, 
                      (0x38U & (__Vtemp949[0U] << 3U)));
        tracep->fullWData(oldp+84,(__Vtemp950),128);
        __Vtemp951[0U] = 0xffffffffU;
        __Vtemp951[1U] = 0U;
        __Vtemp951[2U] = 0U;
        __Vtemp951[3U] = 0U;
        VL_EXTEND_WQ(65,64, __Vtemp952, vlSelf->SimTop__DOT__rw_addr);
        VL_SHIFTL_WWI(128,128,6, __Vtemp953, __Vtemp951, 
                      (0x38U & (__Vtemp952[0U] << 3U)));
        tracep->fullQData(oldp+88,((((QData)((IData)(
                                                     __Vtemp953[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 __Vtemp953[0U])))),64);
        __Vtemp954[0U] = 0xffffffffU;
        __Vtemp954[1U] = 0U;
        __Vtemp954[2U] = 0U;
        __Vtemp954[3U] = 0U;
        VL_EXTEND_WQ(65,64, __Vtemp955, vlSelf->SimTop__DOT__rw_addr);
        VL_SHIFTL_WWI(128,128,6, __Vtemp956, __Vtemp954, 
                      (0x38U & (__Vtemp955[0U] << 3U)));
        tracep->fullQData(oldp+90,((((QData)((IData)(
                                                     __Vtemp956[3U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 __Vtemp956[2U])))),64);
        tracep->fullQData(oldp+92,((QData)((IData)(vlSelf->SimTop__DOT__mem_write_mask_axi))),64);
        tracep->fullBit(oldp+94,((0U == (IData)(vlSelf->SimTop__DOT__arbitrating__DOT__arb_state))));
        tracep->fullBit(oldp+95,((1U == (IData)(vlSelf->SimTop__DOT__arbitrating__DOT__arb_state))));
        tracep->fullBit(oldp+96,((2U == (IData)(vlSelf->SimTop__DOT__arbitrating__DOT__arb_state))));
        tracep->fullBit(oldp+97,(vlSelf->SimTop__DOT__arbitrating__DOT__zza_pulse_3));
        tracep->fullCData(oldp+98,(vlSelf->SimTop__DOT__arbitrating__DOT__zza_count),2);
        tracep->fullBit(oldp+99,(vlSelf->SimTop__DOT__arbitrating__DOT__zza_pulse));
        tracep->fullBit(oldp+100,(((0U == (IData)(vlSelf->SimTop__DOT__arbitrating__DOT__arb_state))
                                    ? 0U : (1U & ((1U 
                                                   == (IData)(vlSelf->SimTop__DOT__arbitrating__DOT__arb_state))
                                                   ? (IData)(vlSelf->SimTop__DOT__mem_valid)
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->SimTop__DOT__arbitrating__DOT__arb_state))
                                                    ? (IData)(vlSelf->SimTop__DOT__icache_valid)
                                                    : 0U))))));
        tracep->fullBit(oldp+101,(vlSelf->SimTop__DOT__arbitrating__DOT__situation_if_valid));
        tracep->fullQData(oldp+102,(vlSelf->SimTop__DOT__u_icache__DOT__valid),64);
        tracep->fullCData(oldp+104,((8U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__pc))),4);
        tracep->fullCData(oldp+105,((0x3fU & (IData)(
                                                     (vlSelf->SimTop__DOT__u_cpu__DOT__pc 
                                                      >> 4U)))),6);
        tracep->fullCData(oldp+106,((0x7fU & (IData)(
                                                     (vlSelf->SimTop__DOT__u_cpu__DOT__pc 
                                                      >> 3U)))),7);
        tracep->fullQData(oldp+107,((vlSelf->SimTop__DOT__u_cpu__DOT__pc 
                                     >> 0xaU)),54);
        tracep->fullBit(oldp+109,(vlSelf->SimTop__DOT__u_icache__DOT__hit));
        tracep->fullBit(oldp+110,(((~ (IData)((vlSelf->SimTop__DOT__u_icache__DOT__valid 
                                               >> (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->SimTop__DOT__u_cpu__DOT__pc 
                                                              >> 4U)))))) 
                                   & (vlSelf->SimTop__DOT__u_icache__DOT__tag
                                      [(0x7fU & (IData)(
                                                        (vlSelf->SimTop__DOT__u_cpu__DOT__pc 
                                                         >> 3U)))] 
                                      == (vlSelf->SimTop__DOT__u_cpu__DOT__pc 
                                          >> 0xaU)))));
        tracep->fullCData(oldp+111,(vlSelf->SimTop__DOT__u_icache__DOT__icache_state),2);
        tracep->fullQData(oldp+112,(vlSelf->SimTop__DOT__u_icache__DOT__addr_icache_read),64);
        tracep->fullBit(oldp+114,((0U == (IData)(vlSelf->SimTop__DOT__u_icache__DOT__icache_state))));
        tracep->fullBit(oldp+115,((1U == (IData)(vlSelf->SimTop__DOT__u_icache__DOT__icache_state))));
        tracep->fullBit(oldp+116,((2U == (IData)(vlSelf->SimTop__DOT__u_icache__DOT__icache_state))));
        tracep->fullCData(oldp+117,(vlSelf->SimTop__DOT__u_icache__DOT__re_write_state),2);
        tracep->fullQData(oldp+118,(vlSelf->SimTop__DOT__u_icache__DOT__re_write_addr),64);
        tracep->fullBit(oldp+120,(vlSelf->SimTop__DOT__u_icache__DOT__icache_valid_pre));
        tracep->fullBit(oldp+121,((0U == (IData)(vlSelf->SimTop__DOT__u_icache__DOT__re_write_state))));
        tracep->fullBit(oldp+122,((1U == (IData)(vlSelf->SimTop__DOT__u_icache__DOT__re_write_state))));
        tracep->fullBit(oldp+123,((((1U == (IData)(vlSelf->SimTop__DOT__u_icache__DOT__re_write_state)) 
                                    & (IData)(vlSelf->SimTop__DOT__arb_if_trans_done)) 
                                   & (IData)(vlSelf->SimTop__DOT__arb_if_r_hs))));
        tracep->fullBit(oldp+124,(vlSelf->SimTop__DOT__u_icache__DOT__icache_stall_pre));
        tracep->fullBit(oldp+125,((1U & (~ (IData)(vlSelf->SimTop__DOT__iram_wen)))));
        __Vtemp961[0U] = (~ ((1U & (IData)((vlSelf->SimTop__DOT__u_icache__DOT__re_write_addr 
                                            >> 3U)))
                              ? 0xffffffffU : 0U));
        __Vtemp961[1U] = (~ ((1U & (IData)((vlSelf->SimTop__DOT__u_icache__DOT__re_write_addr 
                                            >> 3U)))
                              ? 0xffffffffU : 0U));
        __Vtemp961[2U] = (~ ((1U & (IData)((vlSelf->SimTop__DOT__u_icache__DOT__re_write_addr 
                                            >> 3U)))
                              ? 0U : 0xffffffffU));
        __Vtemp961[3U] = (~ ((1U & (IData)((vlSelf->SimTop__DOT__u_icache__DOT__re_write_addr 
                                            >> 3U)))
                              ? 0U : 0xffffffffU));
        tracep->fullWData(oldp+126,(__Vtemp961),128);
        tracep->fullBit(oldp+130,(vlSelf->SimTop__DOT__u_cpu__DOT__axi_stall_i));
        tracep->fullBit(oldp+131,(vlSelf->SimTop__DOT__u_cpu__DOT__device_stall));
        tracep->fullQData(oldp+132,(vlSelf->SimTop__DOT__u_cpu__DOT__pc_id),64);
        tracep->fullQData(oldp+134,(vlSelf->SimTop__DOT__u_cpu__DOT__pc_ex),64);
        tracep->fullQData(oldp+136,(vlSelf->SimTop__DOT__u_cpu__DOT__pc_mem),64);
        tracep->fullQData(oldp+138,(vlSelf->SimTop__DOT__u_cpu__DOT__pc_wb),64);
        tracep->fullIData(oldp+140,(vlSelf->SimTop__DOT__u_cpu__DOT__inst_id),32);
        tracep->fullIData(oldp+141,(((1U & (IData)(
                                                   (vlSelf->SimTop__DOT__u_cpu__DOT__pc 
                                                    >> 2U)))
                                      ? (IData)((((1U 
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
                                      : (IData)(((1U 
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
        tracep->fullIData(oldp+142,(vlSelf->SimTop__DOT__u_cpu__DOT__inst_ex),32);
        tracep->fullIData(oldp+143,(vlSelf->SimTop__DOT__u_cpu__DOT__inst_mem),32);
        tracep->fullIData(oldp+144,(vlSelf->SimTop__DOT__u_cpu__DOT__inst_wb),32);
        tracep->fullCData(oldp+145,(vlSelf->SimTop__DOT__u_cpu__DOT__optype),3);
        tracep->fullBit(oldp+146,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_op_id));
        tracep->fullBit(oldp+147,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_op_ex));
        tracep->fullBit(oldp+148,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_op_mem));
        tracep->fullBit(oldp+149,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_jalr));
        tracep->fullBit(oldp+150,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_regimm_ex));
        tracep->fullBit(oldp+151,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_regimm_mem));
        tracep->fullBit(oldp+152,((((((((((((((((((
                                                   ((((((((((((((((((((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrc) 
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
        tracep->fullBit(oldp+153,((((((((((((((((((
                                                   ((((((((((((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_xor) 
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
        tracep->fullBit(oldp+154,(vlSelf->SimTop__DOT__u_cpu__DOT__csr_ren));
        tracep->fullBit(oldp+155,((((((((((((((((((
                                                   ((((((((((((((((((((((((((((((((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrc) 
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
        tracep->fullBit(oldp+156,((((((((((((((((((
                                                   ((((((((((((((((((((((((((((((((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrc) 
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
        tracep->fullBit(oldp+157,(vlSelf->SimTop__DOT__u_cpu__DOT__wen_ex));
        tracep->fullBit(oldp+158,(vlSelf->SimTop__DOT__u_cpu__DOT__wen_mem));
        tracep->fullBit(oldp+159,(vlSelf->SimTop__DOT__u_cpu__DOT__wen_wb));
        tracep->fullBit(oldp+160,(((((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrc) 
                                       | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrs)) 
                                      | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrci)) 
                                     | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrsi)) 
                                    | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrwi)) 
                                   | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrw))));
        tracep->fullBit(oldp+161,(vlSelf->SimTop__DOT__u_cpu__DOT__csr_wen_ex));
        tracep->fullBit(oldp+162,(vlSelf->SimTop__DOT__u_cpu__DOT__csr_wen_mem));
        tracep->fullBit(oldp+163,(vlSelf->SimTop__DOT__u_cpu__DOT__csr_wen_wb));
        tracep->fullCData(oldp+164,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_id),5);
        tracep->fullCData(oldp+165,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_ex),5);
        tracep->fullCData(oldp+166,(vlSelf->SimTop__DOT__u_cpu__DOT__csr_alu_op_id),3);
        tracep->fullCData(oldp+167,(vlSelf->SimTop__DOT__u_cpu__DOT__csr_alu_op_ex),3);
        tracep->fullBit(oldp+168,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lui));
        tracep->fullBit(oldp+169,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_only_imm_ex));
        tracep->fullBit(oldp+170,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_auipc) 
                                    | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_jal)) 
                                   | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_jalr))));
        tracep->fullBit(oldp+171,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_pc_reg1_ex));
        tracep->fullBit(oldp+172,((((((((((((((((((
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
        tracep->fullBit(oldp+173,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_imm_reg2_ex));
        tracep->fullBit(oldp+174,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrwi) 
                                    | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrci)) 
                                   | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrsi))));
        tracep->fullBit(oldp+175,(vlSelf->SimTop__DOT__u_cpu__DOT__csr_if_zimm_ex));
        tracep->fullCData(oldp+176,((0x1fU & (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                              >> 7U))),5);
        tracep->fullCData(oldp+177,(vlSelf->SimTop__DOT__u_cpu__DOT__rd_ex),5);
        tracep->fullCData(oldp+178,(vlSelf->SimTop__DOT__u_cpu__DOT__rd_mem),5);
        tracep->fullCData(oldp+179,(vlSelf->SimTop__DOT__u_cpu__DOT__rd_wb),5);
        tracep->fullSData(oldp+180,((vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                     >> 0x14U)),12);
        tracep->fullSData(oldp+181,(vlSelf->SimTop__DOT__u_cpu__DOT__csr_ex),12);
        tracep->fullSData(oldp+182,(vlSelf->SimTop__DOT__u_cpu__DOT__csr_mem),12);
        tracep->fullSData(oldp+183,(vlSelf->SimTop__DOT__u_cpu__DOT__csr_wb),12);
        tracep->fullCData(oldp+184,((0x1fU & (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                              >> 0xfU))),5);
        tracep->fullCData(oldp+185,(vlSelf->SimTop__DOT__u_cpu__DOT__zimm_ex),5);
        tracep->fullCData(oldp+186,(vlSelf->SimTop__DOT__u_cpu__DOT__rs1_ex),5);
        tracep->fullCData(oldp+187,((0x1fU & (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                              >> 0x14U))),5);
        tracep->fullCData(oldp+188,(vlSelf->SimTop__DOT__u_cpu__DOT__rs2_ex),5);
        tracep->fullCData(oldp+189,(vlSelf->SimTop__DOT__u_cpu__DOT__rs2_mem),5);
        tracep->fullQData(oldp+190,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf
                                    [0xaU]),64);
        tracep->fullBit(oldp+192,((((((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lb) 
                                        | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lbu)) 
                                       | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lwu)) 
                                      | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lw)) 
                                     | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_ld)) 
                                    | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lh)) 
                                   | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lhu))));
        tracep->fullBit(oldp+193,(vlSelf->SimTop__DOT__u_cpu__DOT__read_mem_en_ex));
        tracep->fullBit(oldp+194,(vlSelf->SimTop__DOT__u_cpu__DOT__read_mem_en_mem));
        tracep->fullBit(oldp+195,(vlSelf->SimTop__DOT__u_cpu__DOT__read_mem_en_wb));
        tracep->fullBit(oldp+196,(((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sd) 
                                     | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sb)) 
                                    | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sw)) 
                                   | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sh))));
        tracep->fullBit(oldp+197,(vlSelf->SimTop__DOT__u_cpu__DOT__write_mem_en_ex));
        tracep->fullBit(oldp+198,(vlSelf->SimTop__DOT__u_cpu__DOT__write_mem_en_wb));
        tracep->fullCData(oldp+199,(vlSelf->SimTop__DOT__u_cpu__DOT__mem_ctrl_id),4);
        tracep->fullCData(oldp+200,(vlSelf->SimTop__DOT__u_cpu__DOT__mem_ctrl_ex),4);
        tracep->fullCData(oldp+201,(vlSelf->SimTop__DOT__u_cpu__DOT__mem_ctrl_mem),4);
        tracep->fullCData(oldp+202,(vlSelf->SimTop__DOT__u_cpu__DOT__value_width_ctrl_id),4);
        tracep->fullCData(oldp+203,(vlSelf->SimTop__DOT__u_cpu__DOT__value_width_ctrl_ex),4);
        tracep->fullCData(oldp+204,(vlSelf->SimTop__DOT__u_cpu__DOT__branch_type_id),3);
        tracep->fullCData(oldp+205,(vlSelf->SimTop__DOT__u_cpu__DOT__branch_type_ex),3);
        tracep->fullCData(oldp+206,(vlSelf->SimTop__DOT__u_cpu__DOT__branch_type_mem),3);
        tracep->fullCData(oldp+207,(vlSelf->SimTop__DOT__u_cpu__DOT__branch_type_wb),3);
        tracep->fullBit(oldp+208,(((((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_divw) 
                                       | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_divuw)) 
                                      | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_remw)) 
                                     | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_remuw)) 
                                    | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_srliw)) 
                                   | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_srlw))));
        tracep->fullBit(oldp+209,(vlSelf->SimTop__DOT__u_cpu__DOT__operator_a_w_ex));
        tracep->fullBit(oldp+210,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sraiw) 
                                   | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sraw))));
        tracep->fullBit(oldp+211,(vlSelf->SimTop__DOT__u_cpu__DOT__operator_a_w_s_ex));
        tracep->fullBit(oldp+212,(((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_divw) 
                                     | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_divuw)) 
                                    | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_remw)) 
                                   | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_remuw))));
        tracep->fullBit(oldp+213,(vlSelf->SimTop__DOT__u_cpu__DOT__operator_b_w_ex));
        tracep->fullBit(oldp+214,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sll) 
                                    | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sra)) 
                                   | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_srl))));
        tracep->fullBit(oldp+215,(vlSelf->SimTop__DOT__u_cpu__DOT__if_inst_sll_ex));
        tracep->fullBit(oldp+216,((0x73U == vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)));
        tracep->fullBit(oldp+217,(vlSelf->SimTop__DOT__u_cpu__DOT__environment_call_ex));
        tracep->fullBit(oldp+218,(vlSelf->SimTop__DOT__u_cpu__DOT__environment_call_mem));
        tracep->fullBit(oldp+219,(vlSelf->SimTop__DOT__u_cpu__DOT__environment_call_wb));
        tracep->fullBit(oldp+220,((0x30200073U == vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)));
        tracep->fullBit(oldp+221,(vlSelf->SimTop__DOT__u_cpu__DOT__m_mode_return_ex));
        tracep->fullBit(oldp+222,(vlSelf->SimTop__DOT__u_cpu__DOT__m_mode_return_mem));
        tracep->fullBit(oldp+223,(vlSelf->SimTop__DOT__u_cpu__DOT__m_mode_return_wb));
        tracep->fullBit(oldp+224,(vlSelf->SimTop__DOT__u_cpu__DOT__ebreak_ex));
        tracep->fullBit(oldp+225,(vlSelf->SimTop__DOT__u_cpu__DOT__ebreak_mem));
        tracep->fullBit(oldp+226,(vlSelf->SimTop__DOT__u_cpu__DOT__ebreak_wb));
        tracep->fullQData(oldp+227,(vlSelf->SimTop__DOT__u_cpu__DOT__reg2_value_forwardb_ex),64);
        tracep->fullQData(oldp+229,(vlSelf->SimTop__DOT__u_cpu__DOT__csr_value_writeback_ex),64);
        tracep->fullQData(oldp+231,(vlSelf->SimTop__DOT__u_cpu__DOT__csr_value_writeback_mem),64);
        tracep->fullQData(oldp+233,(vlSelf->SimTop__DOT__u_cpu__DOT__csr_value_writeback_wb),64);
        tracep->fullBit(oldp+235,((((0xaU == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_ex)) 
                                    & (~ (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_valid))) 
                                   | ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_ready) 
                                      & (2U != (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__div_state))))));
        tracep->fullQData(oldp+236,(vlSelf->SimTop__DOT__u_cpu__DOT__read_mem_value),64);
        tracep->fullQData(oldp+238,(vlSelf->SimTop__DOT__u_cpu__DOT__mem_write_mask),64);
        tracep->fullBit(oldp+240,(vlSelf->SimTop__DOT__u_cpu__DOT__if_clint_mem));
        tracep->fullBit(oldp+241,(vlSelf->SimTop__DOT__u_cpu__DOT__if_clint_wb));
        tracep->fullQData(oldp+242,(vlSelf->SimTop__DOT__u_cpu__DOT__reg_write_value_mem),64);
        tracep->fullQData(oldp+244,(vlSelf->SimTop__DOT__u_cpu__DOT__pc),64);
        tracep->fullQData(oldp+246,(vlSelf->SimTop__DOT__u_cpu__DOT__npc),64);
        tracep->fullQData(oldp+248,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_ex),64);
        tracep->fullQData(oldp+250,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_mem),64);
        tracep->fullQData(oldp+252,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_wb),64);
        tracep->fullQData(oldp+254,(vlSelf->SimTop__DOT__u_cpu__DOT__reg1_value_id),64);
        tracep->fullQData(oldp+256,(vlSelf->SimTop__DOT__u_cpu__DOT__reg1_value_ex),64);
        tracep->fullQData(oldp+258,(vlSelf->SimTop__DOT__u_cpu__DOT__reg2_value_id),64);
        tracep->fullQData(oldp+260,(vlSelf->SimTop__DOT__u_cpu__DOT__reg2_value_ex),64);
        tracep->fullQData(oldp+262,(vlSelf->SimTop__DOT__u_cpu__DOT__reg2_value_mem),64);
        tracep->fullQData(oldp+264,((((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__csr_ren) 
                                      & (0x300U == 
                                         (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                          >> 0x14U)))
                                      ? vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mstatus
                                      : (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__csr_ren) 
                                          & (0x305U 
                                             == (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                                 >> 0x14U)))
                                          ? vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mtvec
                                          : (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__csr_ren) 
                                              & (0x341U 
                                                 == 
                                                 (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                                  >> 0x14U)))
                                              ? vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mepc
                                              : (((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__csr_ren) 
                                                  & (0x342U 
                                                     == 
                                                     (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                                      >> 0x14U)))
                                                  ? vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mcause
                                                  : 0ULL))))),64);
        tracep->fullQData(oldp+266,(vlSelf->SimTop__DOT__u_cpu__DOT__csr_value_ex),64);
        tracep->fullQData(oldp+268,(vlSelf->SimTop__DOT__u_cpu__DOT__reg_write_value_wb),64);
        tracep->fullQData(oldp+270,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[0]),64);
        tracep->fullQData(oldp+272,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[1]),64);
        tracep->fullQData(oldp+274,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[2]),64);
        tracep->fullQData(oldp+276,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[3]),64);
        tracep->fullQData(oldp+278,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[4]),64);
        tracep->fullQData(oldp+280,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[5]),64);
        tracep->fullQData(oldp+282,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[6]),64);
        tracep->fullQData(oldp+284,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[7]),64);
        tracep->fullQData(oldp+286,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[8]),64);
        tracep->fullQData(oldp+288,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[9]),64);
        tracep->fullQData(oldp+290,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[10]),64);
        tracep->fullQData(oldp+292,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[11]),64);
        tracep->fullQData(oldp+294,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[12]),64);
        tracep->fullQData(oldp+296,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[13]),64);
        tracep->fullQData(oldp+298,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[14]),64);
        tracep->fullQData(oldp+300,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[15]),64);
        tracep->fullQData(oldp+302,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[16]),64);
        tracep->fullQData(oldp+304,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[17]),64);
        tracep->fullQData(oldp+306,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[18]),64);
        tracep->fullQData(oldp+308,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[19]),64);
        tracep->fullQData(oldp+310,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[20]),64);
        tracep->fullQData(oldp+312,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[21]),64);
        tracep->fullQData(oldp+314,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[22]),64);
        tracep->fullQData(oldp+316,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[23]),64);
        tracep->fullQData(oldp+318,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[24]),64);
        tracep->fullQData(oldp+320,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[25]),64);
        tracep->fullQData(oldp+322,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[26]),64);
        tracep->fullQData(oldp+324,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[27]),64);
        tracep->fullQData(oldp+326,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[28]),64);
        tracep->fullQData(oldp+328,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[29]),64);
        tracep->fullQData(oldp+330,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[30]),64);
        tracep->fullQData(oldp+332,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_gpr[31]),64);
        tracep->fullBit(oldp+334,(vlSelf->SimTop__DOT__u_cpu__DOT__m_time_interrupt));
        tracep->fullBit(oldp+335,(vlSelf->SimTop__DOT__u_cpu__DOT__m_time_interrupt_trigger));
        tracep->fullQData(oldp+336,(vlSelf->SimTop__DOT__u_cpu__DOT__value),64);
        tracep->fullQData(oldp+338,(vlSelf->SimTop__DOT__u_cpu__DOT__imm_id),64);
        tracep->fullQData(oldp+340,(vlSelf->SimTop__DOT__u_cpu__DOT__imm_ex),64);
        tracep->fullQData(oldp+342,(vlSelf->SimTop__DOT__u_cpu__DOT__sext_read_mem_value_mem),64);
        tracep->fullQData(oldp+344,(vlSelf->SimTop__DOT__u_cpu__DOT__sext_read_mem_value_wb),64);
        tracep->fullQData(oldp+346,(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_ex),64);
        tracep->fullQData(oldp+348,(vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_wb),64);
        tracep->fullBit(oldp+350,(vlSelf->SimTop__DOT__u_cpu__DOT__IF_Flush));
        tracep->fullCData(oldp+351,(vlSelf->SimTop__DOT__u_cpu__DOT__Forward_a),2);
        tracep->fullCData(oldp+352,(vlSelf->SimTop__DOT__u_cpu__DOT__Forward_b),2);
        tracep->fullCData(oldp+353,(vlSelf->SimTop__DOT__u_cpu__DOT__Forward_c),2);
        tracep->fullCData(oldp+354,(vlSelf->SimTop__DOT__u_cpu__DOT__Forward_d),2);
        tracep->fullBit(oldp+355,(vlSelf->SimTop__DOT__u_cpu__DOT__Forward_store));
        tracep->fullBit(oldp+356,(vlSelf->SimTop__DOT__u_cpu__DOT__pipeline_stall));
        tracep->fullBit(oldp+357,(vlSelf->SimTop__DOT__u_cpu__DOT__pipeline_stall_ex));
        tracep->fullBit(oldp+358,(vlSelf->SimTop__DOT__u_cpu__DOT__pipeline_stall_mem));
        tracep->fullBit(oldp+359,(vlSelf->SimTop__DOT__u_cpu__DOT__pipeline_stall_wb));
        tracep->fullBit(oldp+360,(vlSelf->SimTop__DOT__u_cpu__DOT__pc_wen));
        tracep->fullBit(oldp+361,(vlSelf->SimTop__DOT__u_cpu__DOT__inst_valid_3));
        tracep->fullBit(oldp+362,(((((0x7bU == vlSelf->SimTop__DOT__u_cpu__DOT__inst_wb) 
                                     | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__m_time_interrupt)) 
                                    | (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__if_clint_wb)) 
                                   | (0xb00U == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__csr_wb)))));
        tracep->fullQData(oldp+363,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mstatus),64);
        tracep->fullQData(oldp+365,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mepc),64);
        tracep->fullQData(oldp+367,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mtvec),64);
        tracep->fullQData(oldp+369,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mcause),64);
        tracep->fullQData(oldp+371,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mie),64);
        tracep->fullQData(oldp+373,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mip),64);
        tracep->fullQData(oldp+375,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mscratch),64);
        tracep->fullCData(oldp+377,((0x7fU & vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)),7);
        tracep->fullCData(oldp+378,((7U & (vlSelf->SimTop__DOT__u_cpu__DOT__inst_id 
                                           >> 0xcU))),3);
        tracep->fullBit(oldp+379,((0U == vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)));
        tracep->fullBit(oldp+380,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrc));
        tracep->fullBit(oldp+381,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrci));
        tracep->fullBit(oldp+382,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrs));
        tracep->fullBit(oldp+383,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrsi));
        tracep->fullBit(oldp+384,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrw));
        tracep->fullBit(oldp+385,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_csrrwi));
        tracep->fullBit(oldp+386,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_addi));
        tracep->fullBit(oldp+387,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_xor));
        tracep->fullBit(oldp+388,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_xori));
        tracep->fullBit(oldp+389,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_ori));
        tracep->fullBit(oldp+390,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_addiw));
        tracep->fullBit(oldp+391,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_addw));
        tracep->fullBit(oldp+392,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_subw));
        tracep->fullBit(oldp+393,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_mul));
        tracep->fullBit(oldp+394,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_mulw));
        tracep->fullBit(oldp+395,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_divw));
        tracep->fullBit(oldp+396,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_divuw));
        tracep->fullBit(oldp+397,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_remw));
        tracep->fullBit(oldp+398,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_remuw));
        tracep->fullBit(oldp+399,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sub));
        tracep->fullBit(oldp+400,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_add));
        tracep->fullBit(oldp+401,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sll));
        tracep->fullBit(oldp+402,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_slli));
        tracep->fullBit(oldp+403,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_slliw));
        tracep->fullBit(oldp+404,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_srli));
        tracep->fullBit(oldp+405,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_srliw));
        tracep->fullBit(oldp+406,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_andi));
        tracep->fullBit(oldp+407,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_and));
        tracep->fullBit(oldp+408,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_or));
        tracep->fullBit(oldp+409,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_srai));
        tracep->fullBit(oldp+410,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sraiw));
        tracep->fullBit(oldp+411,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sra));
        tracep->fullBit(oldp+412,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sraw));
        tracep->fullBit(oldp+413,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_srl));
        tracep->fullBit(oldp+414,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_srlw));
        tracep->fullBit(oldp+415,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sllw));
        tracep->fullBit(oldp+416,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_auipc));
        tracep->fullBit(oldp+417,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_jal));
        tracep->fullBit(oldp+418,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_slti));
        tracep->fullBit(oldp+419,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sltiu));
        tracep->fullBit(oldp+420,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sltu));
        tracep->fullBit(oldp+421,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_slt));
        tracep->fullBit(oldp+422,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_beq));
        tracep->fullBit(oldp+423,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_bne));
        tracep->fullBit(oldp+424,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_bge));
        tracep->fullBit(oldp+425,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_bgeu));
        tracep->fullBit(oldp+426,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_blt));
        tracep->fullBit(oldp+427,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_bltu));
        tracep->fullBit(oldp+428,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sd));
        tracep->fullBit(oldp+429,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sw));
        tracep->fullBit(oldp+430,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sh));
        tracep->fullBit(oldp+431,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_sb));
        tracep->fullBit(oldp+432,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lb));
        tracep->fullBit(oldp+433,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lbu));
        tracep->fullBit(oldp+434,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lhu));
        tracep->fullBit(oldp+435,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lw));
        tracep->fullBit(oldp+436,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lwu));
        tracep->fullBit(oldp+437,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_lh));
        tracep->fullBit(oldp+438,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_ld));
        tracep->fullBit(oldp+439,(vlSelf->SimTop__DOT__u_cpu__DOT__IDU0__DOT__inst_ebreak));
        tracep->fullBit(oldp+440,((0x6bU == vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)));
        tracep->fullBit(oldp+441,((0x7bU == vlSelf->SimTop__DOT__u_cpu__DOT__inst_id)));
        tracep->fullBit(oldp+442,((((((((((((((((((
                                                   ((((((((((((((((((((((((((((((((((((((((((((((((((0U 
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
        tracep->fullQData(oldp+443,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__reg1_forwarda),64);
        tracep->fullQData(oldp+445,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a0),64);
        tracep->fullQData(oldp+447,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b0),64);
        tracep->fullQData(oldp+449,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a),64);
        tracep->fullQData(oldp+451,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b),64);
        tracep->fullBit(oldp+453,((0xaU == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_ex))));
        tracep->fullBit(oldp+454,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_valid));
        tracep->fullQData(oldp+455,((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__mul_result[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__mul_result[0U])))),64);
        tracep->fullBit(oldp+457,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_ready));
        tracep->fullBit(oldp+458,((2U == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__div_state))));
        tracep->fullBit(oldp+459,((0xcU == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_ex))));
        tracep->fullQData(oldp+460,(((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__quotient_sign)
                                      ? (1ULL + (~ vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__quotient_abs))
                                      : vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__quotient_abs)),64);
        tracep->fullQData(oldp+462,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_operation_a),64);
        tracep->fullWData(oldp+464,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__forward_a_mux____pinNumber4),198);
        tracep->fullWData(oldp+471,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__pair_list[0]),66);
        tracep->fullWData(oldp+474,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__pair_list[1]),66);
        tracep->fullWData(oldp+477,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__pair_list[2]),66);
        tracep->fullCData(oldp+480,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__key_list[0]),2);
        tracep->fullCData(oldp+481,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__key_list[1]),2);
        tracep->fullCData(oldp+482,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__key_list[2]),2);
        tracep->fullQData(oldp+483,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+485,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+487,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+489,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+491,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_a_mux__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+492,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__forward_b_mux____pinNumber4),198);
        tracep->fullWData(oldp+499,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__pair_list[0]),66);
        tracep->fullWData(oldp+502,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__pair_list[1]),66);
        tracep->fullWData(oldp+505,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__pair_list[2]),66);
        tracep->fullCData(oldp+508,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__key_list[0]),2);
        tracep->fullCData(oldp+509,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__key_list[1]),2);
        tracep->fullCData(oldp+510,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__key_list[2]),2);
        tracep->fullQData(oldp+511,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+513,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+515,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+517,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+519,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__forward_b_mux__DOT__i0__DOT__hit));
        tracep->fullBit(oldp+520,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__mul_calculating));
        tracep->fullWData(oldp+521,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__mul_result_partial),128);
        tracep->fullWData(oldp+525,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__mul_result),128);
        tracep->fullCData(oldp+529,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__mul_result_cnt),7);
        tracep->fullWData(oldp+530,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__multiplcand),128);
        tracep->fullQData(oldp+534,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__mul_u__DOT__multipler),64);
        tracep->fullCData(oldp+536,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__div_state),2);
        tracep->fullCData(oldp+537,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__div_cnt),7);
        tracep->fullWData(oldp+538,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__dividend_abs),128);
        tracep->fullWData(oldp+542,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__divisor_abs),65);
        tracep->fullQData(oldp+545,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__quotient_abs),64);
        tracep->fullBit(oldp+547,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__quotient_sign));
        tracep->fullBit(oldp+548,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__remainder_sign));
        tracep->fullWData(oldp+549,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__diff_temp),65);
        tracep->fullBit(oldp+552,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__diff_neg));
        tracep->fullQData(oldp+553,(VL_DIVS_QQQ(64, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b)),64);
        tracep->fullQData(oldp+555,(VL_DIV_QQQ(64, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b)),64);
        tracep->fullBit(oldp+557,((((0xcU == (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_op_ex))
                                     ? VL_DIVS_QQQ(64, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b)
                                     : VL_DIV_QQQ(64, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__a, vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__b)) 
                                   == ((IData)(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__quotient_sign)
                                        ? (1ULL + (~ vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__quotient_abs))
                                        : vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__quotient_abs))));
        tracep->fullWData(oldp+558,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__adder____pinNumber4),1311);
        tracep->fullWData(oldp+599,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[0]),69);
        tracep->fullWData(oldp+602,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[1]),69);
        tracep->fullWData(oldp+605,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[2]),69);
        tracep->fullWData(oldp+608,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[3]),69);
        tracep->fullWData(oldp+611,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[4]),69);
        tracep->fullWData(oldp+614,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[5]),69);
        tracep->fullWData(oldp+617,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[6]),69);
        tracep->fullWData(oldp+620,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[7]),69);
        tracep->fullWData(oldp+623,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[8]),69);
        tracep->fullWData(oldp+626,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[9]),69);
        tracep->fullWData(oldp+629,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[10]),69);
        tracep->fullWData(oldp+632,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[11]),69);
        tracep->fullWData(oldp+635,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[12]),69);
        tracep->fullWData(oldp+638,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[13]),69);
        tracep->fullWData(oldp+641,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[14]),69);
        tracep->fullWData(oldp+644,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[15]),69);
        tracep->fullWData(oldp+647,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[16]),69);
        tracep->fullWData(oldp+650,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[17]),69);
        tracep->fullWData(oldp+653,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__pair_list[18]),69);
        tracep->fullCData(oldp+656,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[0]),5);
        tracep->fullCData(oldp+657,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[1]),5);
        tracep->fullCData(oldp+658,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[2]),5);
        tracep->fullCData(oldp+659,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[3]),5);
        tracep->fullCData(oldp+660,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[4]),5);
        tracep->fullCData(oldp+661,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[5]),5);
        tracep->fullCData(oldp+662,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[6]),5);
        tracep->fullCData(oldp+663,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[7]),5);
        tracep->fullCData(oldp+664,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[8]),5);
        tracep->fullCData(oldp+665,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[9]),5);
        tracep->fullCData(oldp+666,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[10]),5);
        tracep->fullCData(oldp+667,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[11]),5);
        tracep->fullCData(oldp+668,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[12]),5);
        tracep->fullCData(oldp+669,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[13]),5);
        tracep->fullCData(oldp+670,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[14]),5);
        tracep->fullCData(oldp+671,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[15]),5);
        tracep->fullCData(oldp+672,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[16]),5);
        tracep->fullCData(oldp+673,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[17]),5);
        tracep->fullCData(oldp+674,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__key_list[18]),5);
        tracep->fullQData(oldp+675,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+677,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+679,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+681,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+683,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[4]),64);
        tracep->fullQData(oldp+685,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[5]),64);
        tracep->fullQData(oldp+687,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[6]),64);
        tracep->fullQData(oldp+689,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[7]),64);
        tracep->fullQData(oldp+691,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[8]),64);
        tracep->fullQData(oldp+693,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[9]),64);
        tracep->fullQData(oldp+695,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[10]),64);
        tracep->fullQData(oldp+697,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[11]),64);
        tracep->fullQData(oldp+699,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[12]),64);
        tracep->fullQData(oldp+701,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[13]),64);
        tracep->fullQData(oldp+703,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[14]),64);
        tracep->fullQData(oldp+705,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[15]),64);
        tracep->fullQData(oldp+707,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[16]),64);
        tracep->fullQData(oldp+709,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[17]),64);
        tracep->fullQData(oldp+711,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__data_list[18]),64);
        tracep->fullQData(oldp+713,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+715,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__adder__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+716,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT____Vcellinp__csr_value_write____pinNumber4),201);
        tracep->fullWData(oldp+723,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_value_write__DOT__i0__DOT__pair_list[0]),67);
        tracep->fullWData(oldp+726,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_value_write__DOT__i0__DOT__pair_list[1]),67);
        tracep->fullWData(oldp+729,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_value_write__DOT__i0__DOT__pair_list[2]),67);
        tracep->fullCData(oldp+732,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_value_write__DOT__i0__DOT__key_list[0]),3);
        tracep->fullCData(oldp+733,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_value_write__DOT__i0__DOT__key_list[1]),3);
        tracep->fullCData(oldp+734,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_value_write__DOT__i0__DOT__key_list[2]),3);
        tracep->fullQData(oldp+735,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_value_write__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+737,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_value_write__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+739,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_value_write__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+741,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_value_write__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+743,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__csr_value_write__DOT__i0__DOT__hit));
        tracep->fullBit(oldp+744,((0x200U == (0xffffU 
                                              & (IData)(
                                                        (vlSelf->SimTop__DOT__u_cpu__DOT__sext_value_mem 
                                                         >> 0x10U))))));
        tracep->fullQData(oldp+745,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[0]),64);
        tracep->fullQData(oldp+747,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[1]),64);
        tracep->fullQData(oldp+749,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[2]),64);
        tracep->fullQData(oldp+751,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[3]),64);
        tracep->fullQData(oldp+753,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[4]),64);
        tracep->fullQData(oldp+755,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[5]),64);
        tracep->fullQData(oldp+757,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[6]),64);
        tracep->fullQData(oldp+759,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[7]),64);
        tracep->fullQData(oldp+761,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[8]),64);
        tracep->fullQData(oldp+763,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[9]),64);
        tracep->fullQData(oldp+765,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[10]),64);
        tracep->fullQData(oldp+767,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[11]),64);
        tracep->fullQData(oldp+769,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[12]),64);
        tracep->fullQData(oldp+771,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[13]),64);
        tracep->fullQData(oldp+773,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[14]),64);
        tracep->fullQData(oldp+775,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[15]),64);
        tracep->fullQData(oldp+777,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[16]),64);
        tracep->fullQData(oldp+779,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[17]),64);
        tracep->fullQData(oldp+781,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[18]),64);
        tracep->fullQData(oldp+783,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[19]),64);
        tracep->fullQData(oldp+785,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[20]),64);
        tracep->fullQData(oldp+787,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[21]),64);
        tracep->fullQData(oldp+789,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[22]),64);
        tracep->fullQData(oldp+791,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[23]),64);
        tracep->fullQData(oldp+793,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[24]),64);
        tracep->fullQData(oldp+795,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[25]),64);
        tracep->fullQData(oldp+797,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[26]),64);
        tracep->fullQData(oldp+799,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[27]),64);
        tracep->fullQData(oldp+801,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[28]),64);
        tracep->fullQData(oldp+803,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[29]),64);
        tracep->fullQData(oldp+805,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[30]),64);
        tracep->fullQData(oldp+807,(vlSelf->SimTop__DOT__u_cpu__DOT____Vcellout__rf__regs_gpr[31]),64);
        tracep->fullQData(oldp+809,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[0]),64);
        tracep->fullQData(oldp+811,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[1]),64);
        tracep->fullQData(oldp+813,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[2]),64);
        tracep->fullQData(oldp+815,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[3]),64);
        tracep->fullQData(oldp+817,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[4]),64);
        tracep->fullQData(oldp+819,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[5]),64);
        tracep->fullQData(oldp+821,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[6]),64);
        tracep->fullQData(oldp+823,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[7]),64);
        tracep->fullQData(oldp+825,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[8]),64);
        tracep->fullQData(oldp+827,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[9]),64);
        tracep->fullQData(oldp+829,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[10]),64);
        tracep->fullQData(oldp+831,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[11]),64);
        tracep->fullQData(oldp+833,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[12]),64);
        tracep->fullQData(oldp+835,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[13]),64);
        tracep->fullQData(oldp+837,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[14]),64);
        tracep->fullQData(oldp+839,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[15]),64);
        tracep->fullQData(oldp+841,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[16]),64);
        tracep->fullQData(oldp+843,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[17]),64);
        tracep->fullQData(oldp+845,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[18]),64);
        tracep->fullQData(oldp+847,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[19]),64);
        tracep->fullQData(oldp+849,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[20]),64);
        tracep->fullQData(oldp+851,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[21]),64);
        tracep->fullQData(oldp+853,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[22]),64);
        tracep->fullQData(oldp+855,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[23]),64);
        tracep->fullQData(oldp+857,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[24]),64);
        tracep->fullQData(oldp+859,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[25]),64);
        tracep->fullQData(oldp+861,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[26]),64);
        tracep->fullQData(oldp+863,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[27]),64);
        tracep->fullQData(oldp+865,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[28]),64);
        tracep->fullQData(oldp+867,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[29]),64);
        tracep->fullQData(oldp+869,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[30]),64);
        tracep->fullQData(oldp+871,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__rf[31]),64);
        tracep->fullQData(oldp+873,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mstatus_reg),64);
        tracep->fullQData(oldp+875,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mepc_reg),64);
        tracep->fullQData(oldp+877,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mtvec_reg),64);
        tracep->fullQData(oldp+879,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mcause_reg),64);
        tracep->fullQData(oldp+881,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mie_reg),64);
        tracep->fullQData(oldp+883,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mip_reg),64);
        tracep->fullQData(oldp+885,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mscratch_reg),64);
        tracep->fullQData(oldp+887,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mstatus_latch),64);
        tracep->fullQData(oldp+889,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mepc_latch),64);
        tracep->fullQData(oldp+891,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mtvec_latch),64);
        tracep->fullQData(oldp+893,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mcause_latch),64);
        tracep->fullQData(oldp+895,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mie_latch),64);
        tracep->fullQData(oldp+897,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mip_latch),64);
        tracep->fullQData(oldp+899,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mscratch_latch),64);
        tracep->fullQData(oldp+901,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mepc_timeint_reg),64);
        tracep->fullQData(oldp+903,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__mcause_timeint_reg),64);
        tracep->fullQData(oldp+905,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__pc_wb_reg),64);
        tracep->fullIData(oldp+907,(vlSelf->SimTop__DOT__u_cpu__DOT__rf__DOT__inst_wb_reg),32);
        tracep->fullWData(oldp+908,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_imm____pinNumber4),335);
        tracep->fullWData(oldp+919,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__pair_list[0]),67);
        tracep->fullWData(oldp+922,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__pair_list[1]),67);
        tracep->fullWData(oldp+925,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__pair_list[2]),67);
        tracep->fullWData(oldp+928,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__pair_list[3]),67);
        tracep->fullWData(oldp+931,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__pair_list[4]),67);
        tracep->fullCData(oldp+934,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__key_list[0]),3);
        tracep->fullCData(oldp+935,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__key_list[1]),3);
        tracep->fullCData(oldp+936,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__key_list[2]),3);
        tracep->fullCData(oldp+937,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__key_list[3]),3);
        tracep->fullCData(oldp+938,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__key_list[4]),3);
        tracep->fullQData(oldp+939,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+941,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+943,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+945,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+947,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__data_list[4]),64);
        tracep->fullQData(oldp+949,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+951,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_imm__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+952,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_mem_read_value____pinNumber4),476);
        tracep->fullWData(oldp+967,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__pair_list[0]),68);
        tracep->fullWData(oldp+970,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__pair_list[1]),68);
        tracep->fullWData(oldp+973,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__pair_list[2]),68);
        tracep->fullWData(oldp+976,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__pair_list[3]),68);
        tracep->fullWData(oldp+979,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__pair_list[4]),68);
        tracep->fullWData(oldp+982,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__pair_list[5]),68);
        tracep->fullWData(oldp+985,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__pair_list[6]),68);
        tracep->fullCData(oldp+988,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__key_list[0]),4);
        tracep->fullCData(oldp+989,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__key_list[1]),4);
        tracep->fullCData(oldp+990,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__key_list[2]),4);
        tracep->fullCData(oldp+991,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__key_list[3]),4);
        tracep->fullCData(oldp+992,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__key_list[4]),4);
        tracep->fullCData(oldp+993,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__key_list[5]),4);
        tracep->fullCData(oldp+994,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__key_list[6]),4);
        tracep->fullQData(oldp+995,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+997,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+999,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+1001,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+1003,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__data_list[4]),64);
        tracep->fullQData(oldp+1005,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__data_list[5]),64);
        tracep->fullQData(oldp+1007,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__data_list[6]),64);
        tracep->fullQData(oldp+1009,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+1011,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_mem_read_value__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+1012,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT____Vcellinp__sext_value0____pinNumber4),136);
        tracep->fullWData(oldp+1017,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_value0__DOT__i0__DOT__pair_list[0]),68);
        tracep->fullWData(oldp+1020,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_value0__DOT__i0__DOT__pair_list[1]),68);
        tracep->fullCData(oldp+1023,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_value0__DOT__i0__DOT__key_list[0]),4);
        tracep->fullCData(oldp+1024,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_value0__DOT__i0__DOT__key_list[1]),4);
        tracep->fullQData(oldp+1025,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_value0__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+1027,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_value0__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+1029,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_value0__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+1031,(vlSelf->SimTop__DOT__u_cpu__DOT__sext__DOT__sext_value0__DOT__i0__DOT__hit));
        tracep->fullQData(oldp+1032,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__operation_a_forward),64);
        tracep->fullQData(oldp+1034,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__operation_b_forward),64);
        tracep->fullBit(oldp+1036,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_en));
        tracep->fullQData(oldp+1037,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__pc_branch_addr),64);
        tracep->fullWData(oldp+1039,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_c_mux____pinNumber4),264);
        tracep->fullWData(oldp+1048,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__pair_list[0]),66);
        tracep->fullWData(oldp+1051,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__pair_list[1]),66);
        tracep->fullWData(oldp+1054,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__pair_list[2]),66);
        tracep->fullWData(oldp+1057,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__pair_list[3]),66);
        tracep->fullCData(oldp+1060,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__key_list[0]),2);
        tracep->fullCData(oldp+1061,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__key_list[1]),2);
        tracep->fullCData(oldp+1062,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__key_list[2]),2);
        tracep->fullCData(oldp+1063,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__key_list[3]),2);
        tracep->fullQData(oldp+1064,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+1066,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+1068,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+1070,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+1072,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+1074,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_c_mux__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+1075,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__forward_d_mux____pinNumber4),264);
        tracep->fullWData(oldp+1084,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__pair_list[0]),66);
        tracep->fullWData(oldp+1087,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__pair_list[1]),66);
        tracep->fullWData(oldp+1090,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__pair_list[2]),66);
        tracep->fullWData(oldp+1093,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__pair_list[3]),66);
        tracep->fullCData(oldp+1096,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__key_list[0]),2);
        tracep->fullCData(oldp+1097,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__key_list[1]),2);
        tracep->fullCData(oldp+1098,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__key_list[2]),2);
        tracep->fullCData(oldp+1099,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__key_list[3]),2);
        tracep->fullQData(oldp+1100,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+1102,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+1104,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__data_list[2]),64);
        tracep->fullQData(oldp+1106,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__data_list[3]),64);
        tracep->fullQData(oldp+1108,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+1110,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__forward_d_mux__DOT__i0__DOT__hit));
        tracep->fullIData(oldp+1111,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT____Vcellinp__branch_test____pinNumber4),24);
        tracep->fullCData(oldp+1112,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__pair_list[0]),4);
        tracep->fullCData(oldp+1113,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__pair_list[1]),4);
        tracep->fullCData(oldp+1114,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__pair_list[2]),4);
        tracep->fullCData(oldp+1115,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__pair_list[3]),4);
        tracep->fullCData(oldp+1116,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__pair_list[4]),4);
        tracep->fullCData(oldp+1117,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__pair_list[5]),4);
        tracep->fullCData(oldp+1118,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__key_list[0]),3);
        tracep->fullCData(oldp+1119,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__key_list[1]),3);
        tracep->fullCData(oldp+1120,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__key_list[2]),3);
        tracep->fullCData(oldp+1121,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__key_list[3]),3);
        tracep->fullCData(oldp+1122,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__key_list[4]),3);
        tracep->fullCData(oldp+1123,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__key_list[5]),3);
        tracep->fullBit(oldp+1124,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__data_list[0]));
        tracep->fullBit(oldp+1125,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__data_list[1]));
        tracep->fullBit(oldp+1126,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__data_list[2]));
        tracep->fullBit(oldp+1127,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__data_list[3]));
        tracep->fullBit(oldp+1128,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__data_list[4]));
        tracep->fullBit(oldp+1129,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__data_list[5]));
        tracep->fullBit(oldp+1130,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__lut_out));
        tracep->fullBit(oldp+1131,(vlSelf->SimTop__DOT__u_cpu__DOT__npc_processing__DOT__branch_test__DOT__i0__DOT__hit));
        tracep->fullQData(oldp+1132,(vlSelf->SimTop__DOT__clint__DOT__mtime),64);
        tracep->fullQData(oldp+1134,(vlSelf->SimTop__DOT__clint__DOT__mtimecmp),64);
        tracep->fullBit(oldp+1136,(vlSelf->SimTop__DOT__u_cpu__DOT__cmt_wen));
        tracep->fullCData(oldp+1137,(vlSelf->SimTop__DOT__u_cpu__DOT__cmt_wdest),8);
        tracep->fullQData(oldp+1138,(vlSelf->SimTop__DOT__u_cpu__DOT__cmt_wdata),64);
        tracep->fullQData(oldp+1140,(vlSelf->SimTop__DOT__u_cpu__DOT__cmt_pc),64);
        tracep->fullIData(oldp+1142,(vlSelf->SimTop__DOT__u_cpu__DOT__cmt_inst),32);
        tracep->fullBit(oldp+1143,(vlSelf->SimTop__DOT__u_cpu__DOT__cmt_valid));
        tracep->fullBit(oldp+1144,(vlSelf->SimTop__DOT__u_cpu__DOT__cmt_skip));
        tracep->fullBit(oldp+1145,(vlSelf->SimTop__DOT__u_cpu__DOT__trap));
        tracep->fullCData(oldp+1146,(vlSelf->SimTop__DOT__u_cpu__DOT__trap_code),8);
        tracep->fullQData(oldp+1147,(vlSelf->SimTop__DOT__u_cpu__DOT__cycleCnt),64);
        tracep->fullQData(oldp+1149,(vlSelf->SimTop__DOT__u_cpu__DOT__instrCnt),64);
        tracep->fullQData(oldp+1151,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[0]),64);
        tracep->fullQData(oldp+1153,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[1]),64);
        tracep->fullQData(oldp+1155,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[2]),64);
        tracep->fullQData(oldp+1157,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[3]),64);
        tracep->fullQData(oldp+1159,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[4]),64);
        tracep->fullQData(oldp+1161,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[5]),64);
        tracep->fullQData(oldp+1163,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[6]),64);
        tracep->fullQData(oldp+1165,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[7]),64);
        tracep->fullQData(oldp+1167,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[8]),64);
        tracep->fullQData(oldp+1169,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[9]),64);
        tracep->fullQData(oldp+1171,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[10]),64);
        tracep->fullQData(oldp+1173,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[11]),64);
        tracep->fullQData(oldp+1175,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[12]),64);
        tracep->fullQData(oldp+1177,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[13]),64);
        tracep->fullQData(oldp+1179,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[14]),64);
        tracep->fullQData(oldp+1181,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[15]),64);
        tracep->fullQData(oldp+1183,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[16]),64);
        tracep->fullQData(oldp+1185,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[17]),64);
        tracep->fullQData(oldp+1187,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[18]),64);
        tracep->fullQData(oldp+1189,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[19]),64);
        tracep->fullQData(oldp+1191,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[20]),64);
        tracep->fullQData(oldp+1193,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[21]),64);
        tracep->fullQData(oldp+1195,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[22]),64);
        tracep->fullQData(oldp+1197,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[23]),64);
        tracep->fullQData(oldp+1199,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[24]),64);
        tracep->fullQData(oldp+1201,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[25]),64);
        tracep->fullQData(oldp+1203,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[26]),64);
        tracep->fullQData(oldp+1205,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[27]),64);
        tracep->fullQData(oldp+1207,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[28]),64);
        tracep->fullQData(oldp+1209,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[29]),64);
        tracep->fullQData(oldp+1211,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[30]),64);
        tracep->fullQData(oldp+1213,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff[31]),64);
        tracep->fullQData(oldp+1215,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                     [0U]),64);
        tracep->fullQData(oldp+1217,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                     [1U]),64);
        tracep->fullQData(oldp+1219,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                     [2U]),64);
        tracep->fullQData(oldp+1221,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                     [3U]),64);
        tracep->fullQData(oldp+1223,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                     [4U]),64);
        tracep->fullQData(oldp+1225,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                     [5U]),64);
        tracep->fullQData(oldp+1227,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                     [6U]),64);
        tracep->fullQData(oldp+1229,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                     [7U]),64);
        tracep->fullQData(oldp+1231,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                     [8U]),64);
        tracep->fullQData(oldp+1233,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                     [9U]),64);
        tracep->fullQData(oldp+1235,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                     [0xaU]),64);
        tracep->fullQData(oldp+1237,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                     [0xbU]),64);
        tracep->fullQData(oldp+1239,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                     [0xcU]),64);
        tracep->fullQData(oldp+1241,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                     [0xdU]),64);
        tracep->fullQData(oldp+1243,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                     [0xeU]),64);
        tracep->fullQData(oldp+1245,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                     [0xfU]),64);
        tracep->fullQData(oldp+1247,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                     [0x10U]),64);
        tracep->fullQData(oldp+1249,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                     [0x11U]),64);
        tracep->fullQData(oldp+1251,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                     [0x12U]),64);
        tracep->fullQData(oldp+1253,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                     [0x13U]),64);
        tracep->fullQData(oldp+1255,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                     [0x14U]),64);
        tracep->fullQData(oldp+1257,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                     [0x15U]),64);
        tracep->fullQData(oldp+1259,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                     [0x16U]),64);
        tracep->fullQData(oldp+1261,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                     [0x17U]),64);
        tracep->fullQData(oldp+1263,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                     [0x18U]),64);
        tracep->fullQData(oldp+1265,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                     [0x19U]),64);
        tracep->fullQData(oldp+1267,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                     [0x1aU]),64);
        tracep->fullQData(oldp+1269,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                     [0x1bU]),64);
        tracep->fullQData(oldp+1271,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                     [0x1cU]),64);
        tracep->fullQData(oldp+1273,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                     [0x1dU]),64);
        tracep->fullQData(oldp+1275,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                     [0x1eU]),64);
        tracep->fullQData(oldp+1277,(vlSelf->SimTop__DOT__u_cpu__DOT__regs_diff
                                     [0x1fU]),64);
        tracep->fullCData(oldp+1279,((7U & (IData)(vlSelf->SimTop__DOT__u_cpu__DOT__trap_code))),3);
        tracep->fullBit(oldp+1280,(vlSelf->SimTop__DOT__axi_rw__DOT__trans_done));
        tracep->fullBit(oldp+1281,(vlSelf->SimTop__DOT__axi_rw__DOT__r_hs));
        tracep->fullBit(oldp+1282,(vlSelf->SimTop__DOT__axi_rw__DOT__w_hs));
        tracep->fullBit(oldp+1283,(vlSelf->SimTop__DOT__axi_rw__DOT__b_hs));
        tracep->fullBit(oldp+1284,(vlSelf->SimTop__DOT__axi_rw__DOT__r_done));
        tracep->fullBit(oldp+1285,(vlSelf->clock));
        tracep->fullBit(oldp+1286,(vlSelf->reset));
        tracep->fullQData(oldp+1287,(vlSelf->io_logCtrl_log_begin),64);
        tracep->fullQData(oldp+1289,(vlSelf->io_logCtrl_log_end),64);
        tracep->fullQData(oldp+1291,(vlSelf->io_logCtrl_log_level),64);
        tracep->fullBit(oldp+1293,(vlSelf->io_perfInfo_clean));
        tracep->fullBit(oldp+1294,(vlSelf->io_perfInfo_dump));
        tracep->fullBit(oldp+1295,(vlSelf->io_uart_out_valid));
        tracep->fullCData(oldp+1296,(vlSelf->io_uart_out_ch),8);
        tracep->fullBit(oldp+1297,(vlSelf->io_uart_in_valid));
        tracep->fullCData(oldp+1298,(vlSelf->io_uart_in_ch),8);
        tracep->fullBit(oldp+1299,(vlSelf->io_memAXI_0_aw_ready));
        tracep->fullBit(oldp+1300,(vlSelf->io_memAXI_0_aw_valid));
        tracep->fullIData(oldp+1301,(vlSelf->io_memAXI_0_aw_bits_addr),32);
        tracep->fullCData(oldp+1302,(vlSelf->io_memAXI_0_aw_bits_prot),3);
        tracep->fullCData(oldp+1303,(vlSelf->io_memAXI_0_aw_bits_id),4);
        tracep->fullBit(oldp+1304,(vlSelf->io_memAXI_0_aw_bits_user));
        tracep->fullCData(oldp+1305,(vlSelf->io_memAXI_0_aw_bits_len),8);
        tracep->fullCData(oldp+1306,(vlSelf->io_memAXI_0_aw_bits_size),3);
        tracep->fullCData(oldp+1307,(vlSelf->io_memAXI_0_aw_bits_burst),2);
        tracep->fullBit(oldp+1308,(vlSelf->io_memAXI_0_aw_bits_lock));
        tracep->fullCData(oldp+1309,(vlSelf->io_memAXI_0_aw_bits_cache),4);
        tracep->fullCData(oldp+1310,(vlSelf->io_memAXI_0_aw_bits_qos),4);
        tracep->fullBit(oldp+1311,(vlSelf->io_memAXI_0_w_ready));
        tracep->fullBit(oldp+1312,(vlSelf->io_memAXI_0_w_valid));
        tracep->fullQData(oldp+1313,(vlSelf->io_memAXI_0_w_bits_data[0]),64);
        tracep->fullQData(oldp+1315,(vlSelf->io_memAXI_0_w_bits_data[1]),64);
        tracep->fullQData(oldp+1317,(vlSelf->io_memAXI_0_w_bits_data[2]),64);
        tracep->fullQData(oldp+1319,(vlSelf->io_memAXI_0_w_bits_data[3]),64);
        tracep->fullCData(oldp+1321,(vlSelf->io_memAXI_0_w_bits_strb),8);
        tracep->fullBit(oldp+1322,(vlSelf->io_memAXI_0_w_bits_last));
        tracep->fullBit(oldp+1323,(vlSelf->io_memAXI_0_b_ready));
        tracep->fullBit(oldp+1324,(vlSelf->io_memAXI_0_b_valid));
        tracep->fullCData(oldp+1325,(vlSelf->io_memAXI_0_b_bits_resp),2);
        tracep->fullCData(oldp+1326,(vlSelf->io_memAXI_0_b_bits_id),4);
        tracep->fullBit(oldp+1327,(vlSelf->io_memAXI_0_b_bits_user));
        tracep->fullBit(oldp+1328,(vlSelf->io_memAXI_0_ar_ready));
        tracep->fullBit(oldp+1329,(vlSelf->io_memAXI_0_ar_valid));
        tracep->fullIData(oldp+1330,(vlSelf->io_memAXI_0_ar_bits_addr),32);
        tracep->fullCData(oldp+1331,(vlSelf->io_memAXI_0_ar_bits_prot),3);
        tracep->fullCData(oldp+1332,(vlSelf->io_memAXI_0_ar_bits_id),4);
        tracep->fullBit(oldp+1333,(vlSelf->io_memAXI_0_ar_bits_user));
        tracep->fullCData(oldp+1334,(vlSelf->io_memAXI_0_ar_bits_len),8);
        tracep->fullCData(oldp+1335,(vlSelf->io_memAXI_0_ar_bits_size),3);
        tracep->fullCData(oldp+1336,(vlSelf->io_memAXI_0_ar_bits_burst),2);
        tracep->fullBit(oldp+1337,(vlSelf->io_memAXI_0_ar_bits_lock));
        tracep->fullCData(oldp+1338,(vlSelf->io_memAXI_0_ar_bits_cache),4);
        tracep->fullCData(oldp+1339,(vlSelf->io_memAXI_0_ar_bits_qos),4);
        tracep->fullBit(oldp+1340,(vlSelf->io_memAXI_0_r_ready));
        tracep->fullBit(oldp+1341,(vlSelf->io_memAXI_0_r_valid));
        tracep->fullCData(oldp+1342,(vlSelf->io_memAXI_0_r_bits_resp),2);
        tracep->fullQData(oldp+1343,(vlSelf->io_memAXI_0_r_bits_data[0]),64);
        tracep->fullQData(oldp+1345,(vlSelf->io_memAXI_0_r_bits_data[1]),64);
        tracep->fullQData(oldp+1347,(vlSelf->io_memAXI_0_r_bits_data[2]),64);
        tracep->fullQData(oldp+1349,(vlSelf->io_memAXI_0_r_bits_data[3]),64);
        tracep->fullBit(oldp+1351,(vlSelf->io_memAXI_0_r_bits_last));
        tracep->fullCData(oldp+1352,(vlSelf->io_memAXI_0_r_bits_id),4);
        tracep->fullBit(oldp+1353,(vlSelf->io_memAXI_0_r_bits_user));
        tracep->fullQData(oldp+1354,(vlSelf->io_memAXI_0_r_bits_data
                                     [0U]),64);
        tracep->fullBit(oldp+1356,((1U & (~ (IData)(vlSelf->reset)))));
        VL_EXTEND_WQ(65,64, __Vtemp962, vlSelf->io_memAXI_0_r_bits_data
                     [0U]);
        tracep->fullWData(oldp+1357,(__Vtemp962),65);
        tracep->fullBit(oldp+1360,(((IData)(vlSelf->io_memAXI_0_aw_ready) 
                                    & (1U == (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__w_state)))));
        tracep->fullBit(oldp+1361,(((IData)(vlSelf->io_memAXI_0_ar_ready) 
                                    & (1U == (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__r_state)))));
        tracep->fullBit(oldp+1362,((((IData)(vlSelf->reset) 
                                     | ((IData)(vlSelf->SimTop__DOT__rw_req) 
                                        & (0U == (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__w_state)))) 
                                    | ((~ (IData)(vlSelf->SimTop__DOT__rw_req)) 
                                       & (0U == (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__r_state))))));
        tracep->fullBit(oldp+1363,(((0U != (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__len)) 
                                    & ((IData)(vlSelf->SimTop__DOT__axi_rw__DOT__w_hs) 
                                       | (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__r_hs)))));
        tracep->fullBit(oldp+1364,(((IData)(vlSelf->SimTop__DOT__axi_rw__DOT__trans_done) 
                                    | (IData)(vlSelf->SimTop__DOT__axi_rw__DOT__rw_ready))));
        tracep->fullBit(oldp+1365,((1U & ((IData)(vlSelf->SimTop__DOT__rw_req)
                                           ? (IData)(vlSelf->io_memAXI_0_b_bits_resp)
                                           : (IData)(vlSelf->io_memAXI_0_r_bits_resp)))));
        __Vtemp963[0U] = 0xffffffffU;
        __Vtemp963[1U] = 0U;
        __Vtemp963[2U] = 0U;
        __Vtemp963[3U] = 0U;
        VL_EXTEND_WQ(65,64, __Vtemp964, vlSelf->SimTop__DOT__rw_addr);
        VL_SHIFTL_WWI(128,128,6, __Vtemp965, __Vtemp963, 
                      (0x38U & (__Vtemp964[0U] << 3U)));
        VL_EXTEND_WQ(65,64, __Vtemp966, vlSelf->SimTop__DOT__rw_addr);
        tracep->fullQData(oldp+1366,(((vlSelf->io_memAXI_0_r_bits_data
                                       [0U] & (((QData)((IData)(
                                                                __Vtemp965[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 __Vtemp965[0U])))) 
                                      >> (0x38U & (
                                                   __Vtemp966[0U] 
                                                   << 3U)))),64);
        __Vtemp967[0U] = 0xffffffffU;
        __Vtemp967[1U] = 0U;
        __Vtemp967[2U] = 0U;
        __Vtemp967[3U] = 0U;
        VL_EXTEND_WQ(65,64, __Vtemp968, vlSelf->SimTop__DOT__rw_addr);
        VL_SHIFTL_WWI(128,128,6, __Vtemp969, __Vtemp967, 
                      (0x38U & (__Vtemp968[0U] << 3U)));
        VL_EXTEND_WQ(65,64, __Vtemp970, vlSelf->SimTop__DOT__rw_addr);
        tracep->fullQData(oldp+1368,(((vlSelf->io_memAXI_0_r_bits_data
                                       [0U] & (((QData)((IData)(
                                                                __Vtemp969[3U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 __Vtemp969[2U])))) 
                                      << (0x3fU & (- 
                                                   (0x38U 
                                                    & (__Vtemp970[0U] 
                                                       << 3U)))))),64);
        tracep->fullCData(oldp+1370,(0U),4);
        tracep->fullCData(oldp+1371,(0U),8);
        tracep->fullCData(oldp+1372,(3U),3);
        tracep->fullCData(oldp+1373,(1U),2);
        tracep->fullBit(oldp+1374,(1U));
        tracep->fullBit(oldp+1375,(vlSelf->SimTop__DOT__if_ready));
        tracep->fullBit(oldp+1376,(0U));
        tracep->fullCData(oldp+1377,(2U),2);
        tracep->fullIData(oldp+1378,(0x40U),32);
        tracep->fullIData(oldp+1379,(0x20U),32);
        tracep->fullIData(oldp+1380,(4U),32);
        tracep->fullIData(oldp+1381,(1U),32);
        tracep->fullCData(oldp+1382,(0U),3);
        tracep->fullBit(oldp+1383,(0U));
        tracep->fullCData(oldp+1384,(0xfU),4);
        tracep->fullBit(oldp+1385,(vlSelf->SimTop__DOT__axi_rw__DOT__axi_b_user_i));
        tracep->fullCData(oldp+1386,(2U),4);
        tracep->fullCData(oldp+1387,(vlSelf->SimTop__DOT__axi_rw__DOT__axi_ar_region_o),4);
        tracep->fullBit(oldp+1388,(vlSelf->SimTop__DOT__axi_rw__DOT__axi_r_user_i));
        tracep->fullCData(oldp+1389,(0U),2);
        tracep->fullCData(oldp+1390,(3U),2);
        tracep->fullIData(oldp+1391,(3U),32);
        tracep->fullIData(oldp+1392,(6U),32);
        tracep->fullIData(oldp+1393,(0x80U),32);
        tracep->fullCData(oldp+1394,(3U),4);
        tracep->fullIData(oldp+1395,(0x36U),32);
        tracep->fullQData(oldp+1396,(vlSelf->SimTop__DOT__u_cpu__DOT__pc_if),64);
        tracep->fullBit(oldp+1398,(vlSelf->SimTop__DOT__u_cpu__DOT__ebreak_id));
        tracep->fullIData(oldp+1399,(2U),32);
        tracep->fullIData(oldp+1400,(0x42U),32);
        tracep->fullIData(oldp+1401,(3U),32);
        tracep->fullQData(oldp+1402,(vlSelf->SimTop__DOT__u_cpu__DOT__alu_module__DOT__div_u__DOT__remainder),64);
        tracep->fullIData(oldp+1404,(0x13U),32);
        tracep->fullIData(oldp+1405,(5U),32);
        tracep->fullQData(oldp+1406,(0xfedcba9876543210ULL),64);
        tracep->fullIData(oldp+1408,(0x45U),32);
        tracep->fullIData(oldp+1409,(0x13U),32);
        tracep->fullIData(oldp+1410,(0x43U),32);
        tracep->fullQData(oldp+1411,(0xffff0000ffff0000ULL),64);
        tracep->fullIData(oldp+1413,(5U),32);
        tracep->fullIData(oldp+1414,(7U),32);
        tracep->fullIData(oldp+1415,(0x44U),32);
        tracep->fullIData(oldp+1416,(7U),32);
        tracep->fullIData(oldp+1417,(2U),32);
        tracep->fullIData(oldp+1418,(4U),32);
        tracep->fullIData(oldp+1419,(6U),32);
        tracep->fullQData(oldp+1420,(0ULL),64);
    }
}

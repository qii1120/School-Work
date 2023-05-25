// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtest_top__Syms.h"


void Vtest_top___024root__trace_chg_sub_0(Vtest_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtest_top___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_top___024root__trace_chg_top_0\n"); );
    // Init
    Vtest_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtest_top___024root*>(voidSelf);
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtest_top___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtest_top___024root__trace_chg_sub_0(Vtest_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_top___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<3>/*95:0*/ __Vtemp_hbd51cd3a__0;
    VlWide<3>/*95:0*/ __Vtemp_h9e2dce8b__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgIData(oldp+0,(vlSymsp->TOP__test_top.__PVT__cfg_device_addr_base[0]),32);
        bufp->chgIData(oldp+1,(vlSymsp->TOP__test_top.__PVT__cfg_device_addr_base[1]),32);
        bufp->chgIData(oldp+2,(vlSymsp->TOP__test_top.__PVT__cfg_device_addr_base[2]),32);
        bufp->chgIData(oldp+3,(vlSymsp->TOP__test_top.__PVT__cfg_device_addr_mask[0]),32);
        bufp->chgIData(oldp+4,(vlSymsp->TOP__test_top.__PVT__cfg_device_addr_mask[1]),32);
        bufp->chgIData(oldp+5,(vlSymsp->TOP__test_top.__PVT__cfg_device_addr_mask[2]),32);
        bufp->chgIData(oldp+6,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__cfg_device_addr_base[0]),32);
        bufp->chgIData(oldp+7,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__cfg_device_addr_base[1]),32);
        bufp->chgIData(oldp+8,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__cfg_device_addr_base[2]),32);
        bufp->chgIData(oldp+9,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__cfg_device_addr_mask[0]),32);
        bufp->chgIData(oldp+10,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__cfg_device_addr_mask[1]),32);
        bufp->chgIData(oldp+11,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__cfg_device_addr_mask[2]),32);
        bufp->chgIData(oldp+12,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__i),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+13,(vlSymsp->TOP__test_top.__PVT__host_req[0]));
        bufp->chgBit(oldp+14,(vlSymsp->TOP__test_top.__PVT__host_gnt[0]));
        bufp->chgBit(oldp+15,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_req_i[0]));
        bufp->chgBit(oldp+16,(vlSymsp->TOP__test_top.__Vcellout__u_bus__host_gnt_o[0]));
        bufp->chgBit(oldp+17,(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+18,(vlSymsp->TOP__test_top.__PVT__host_addr[0]),32);
        bufp->chgBit(oldp+19,(vlSymsp->TOP__test_top.__PVT__host_we[0]));
        bufp->chgIData(oldp+20,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_addr_i[0]),32);
        bufp->chgBit(oldp+21,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_we_i[0]));
        bufp->chgIData(oldp+22,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_mem_addr_o),32);
        bufp->chgBit(oldp+23,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_mem_we_o));
        bufp->chgCData(oldp+24,(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_addr_o),5);
        bufp->chgCData(oldp+25,(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_addr_o),5);
        bufp->chgBit(oldp+26,(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_re_o));
        bufp->chgBit(oldp+27,(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_re_o));
        bufp->chgIData(oldp+28,(vlSymsp->TOP__test_top__core_top0.__PVT__id_inst_o),32);
        bufp->chgBit(oldp+29,(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg_we_o));
        bufp->chgCData(oldp+30,(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg_waddr_o),5);
        bufp->chgBit(oldp+31,(vlSymsp->TOP__test_top__core_top0.__PVT__id_csr_we_o));
        bufp->chgSData(oldp+32,(vlSymsp->TOP__test_top__core_top0.__PVT__id_csr_addr_o),12);
        bufp->chgIData(oldp+33,((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__except_ecall) 
                                  << 1U) | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__except_mret))),32);
        bufp->chgCData(oldp+34,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_waddr_o),5);
        bufp->chgBit(oldp+35,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_we_o));
        bufp->chgIData(oldp+36,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_addr_o),32);
        bufp->chgBit(oldp+37,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_we_o));
        bufp->chgIData(oldp+38,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_data_o),32);
        bufp->chgCData(oldp+39,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_op_o),4);
        bufp->chgBit(oldp+40,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_we_o));
        bufp->chgSData(oldp+41,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_waddr_o),12);
        bufp->chgIData(oldp+42,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_wdata_o),32);
        bufp->chgSData(oldp+43,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_raddr_o),12);
        bufp->chgCData(oldp+44,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_reg_waddr_o),5);
        bufp->chgBit(oldp+45,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_reg_we_o));
        bufp->chgBit(oldp+46,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_csr_we_o));
        bufp->chgSData(oldp+47,((0xfffU & vlSymsp->TOP__test_top__core_top0.__Vcellout__mem0__csr_waddr_o)),12);
        bufp->chgIData(oldp+48,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_csr_wdata_o),32);
        bufp->chgIData(oldp+49,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__rdata1_o),32);
        bufp->chgIData(oldp+50,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__rdata2_o),32);
        bufp->chgIData(oldp+51,(vlSymsp->TOP__test_top__core_top0.__PVT__csr_file_csr_rdata_o),32);
        bufp->chgIData(oldp+52,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__a_o),32);
        bufp->chgIData(oldp+53,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__b_o),32);
        bufp->chgBit(oldp+54,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mult_req_o));
        bufp->chgBit(oldp+55,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__div_req_o));
        bufp->chgBit(oldp+56,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__is_div_q_i));
        bufp->chgIData(oldp+57,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__invert_result_div),32);
        bufp->chgIData(oldp+58,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__csr_rdata),32);
        bufp->chgBit(oldp+59,((0U == vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__a_o)));
        bufp->chgBit(oldp+60,((0U == vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__b_o)));
        bufp->chgCData(oldp+61,(((0U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__div0__DOT__S))
                                  ? ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__div_req_o)
                                      ? (((0U == vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__a_o) 
                                          | (0U == vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__b_o))
                                          ? 3U : 1U)
                                      : 0U) : ((1U 
                                                == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__div0__DOT__S))
                                                ? (
                                                   (0U 
                                                    != (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__div0__DOT__cnt))
                                                    ? 1U
                                                    : 3U)
                                                : 0U))),3);
        bufp->chgBit(oldp+62,((1U & (~ (IData)((0U 
                                                != vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__a_o))))));
        bufp->chgBit(oldp+63,((1U & (~ (IData)((0U 
                                                != vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__b_o))))));
        __Vtemp_hbd51cd3a__0[0U] = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__a_o;
        __Vtemp_hbd51cd3a__0[1U] = 0U;
        __Vtemp_hbd51cd3a__0[2U] = 0U;
        bufp->chgWData(oldp+64,(__Vtemp_hbd51cd3a__0),65);
        bufp->chgIData(oldp+67,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_waddr_o),32);
        bufp->chgBit(oldp+68,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__except_mret));
        bufp->chgBit(oldp+69,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__except_ecall));
        bufp->chgIData(oldp+70,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__op2_o_final),32);
        bufp->chgIData(oldp+71,(((IData)(vlSymsp->TOP__test_top__core_top0.id0__DOT__inst_type_r__DOT____VdfgExtracted_he1154c64__0)
                                  ? vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__rdata1_o
                                  : 0U)),32);
        bufp->chgIData(oldp+72,(((IData)(vlSymsp->TOP__test_top__core_top0.id0__DOT__inst_type_r__DOT____VdfgExtracted_he1154c64__0)
                                  ? vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__rdata2_o
                                  : 0U)),32);
        bufp->chgIData(oldp+73,(vlSymsp->TOP__test_top__core_top0.__Vcellout__mem0__csr_waddr_o),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[3U]))) {
        bufp->chgIData(oldp+74,(vlSymsp->TOP__test_top.__PVT__host_wdata[0]),32);
        bufp->chgIData(oldp+75,(vlSymsp->TOP__test_top.__PVT__host_rdata[0]),32);
        bufp->chgBit(oldp+76,(vlSymsp->TOP__test_top.__PVT__device_req[0]));
        bufp->chgBit(oldp+77,(vlSymsp->TOP__test_top.__PVT__device_req[1]));
        bufp->chgBit(oldp+78,(vlSymsp->TOP__test_top.__PVT__device_req[2]));
        bufp->chgIData(oldp+79,(vlSymsp->TOP__test_top.__PVT__device_addr[0]),32);
        bufp->chgIData(oldp+80,(vlSymsp->TOP__test_top.__PVT__device_addr[1]),32);
        bufp->chgIData(oldp+81,(vlSymsp->TOP__test_top.__PVT__device_addr[2]),32);
        bufp->chgBit(oldp+82,(vlSymsp->TOP__test_top.__PVT__device_we[0]));
        bufp->chgBit(oldp+83,(vlSymsp->TOP__test_top.__PVT__device_we[1]));
        bufp->chgBit(oldp+84,(vlSymsp->TOP__test_top.__PVT__device_we[2]));
        bufp->chgIData(oldp+85,(vlSymsp->TOP__test_top.__PVT__device_wdata[0]),32);
        bufp->chgIData(oldp+86,(vlSymsp->TOP__test_top.__PVT__device_wdata[1]),32);
        bufp->chgIData(oldp+87,(vlSymsp->TOP__test_top.__PVT__device_wdata[2]),32);
        bufp->chgIData(oldp+88,(vlSymsp->TOP__test_top.__PVT__device_rdata[0]),32);
        bufp->chgIData(oldp+89,(vlSymsp->TOP__test_top.__PVT__device_rdata[1]),32);
        bufp->chgIData(oldp+90,(vlSymsp->TOP__test_top.__PVT__device_rdata[2]),32);
        bufp->chgBit(oldp+91,(vlSymsp->TOP__test_top.__PVT__device_req
                              [0U]));
        bufp->chgBit(oldp+92,(vlSymsp->TOP__test_top.__PVT__device_we
                              [0U]));
        bufp->chgIData(oldp+93,(vlSymsp->TOP__test_top.__PVT__device_addr
                                [0U]),32);
        bufp->chgIData(oldp+94,(vlSymsp->TOP__test_top.__PVT__device_wdata
                                [0U]),32);
        bufp->chgIData(oldp+95,(vlSymsp->TOP__test_top.__Vcellout__clint0__data_o),32);
        bufp->chgSData(oldp+96,((0xffffU & vlSymsp->TOP__test_top.__PVT__device_addr
                                 [0U])),16);
        bufp->chgBit(oldp+97,((0xbff8U == (0xffffU 
                                           & vlSymsp->TOP__test_top.__PVT__device_addr
                                           [0U]))));
        bufp->chgBit(oldp+98,((0xbffcU == (0xffffU 
                                           & vlSymsp->TOP__test_top.__PVT__device_addr
                                           [0U]))));
        bufp->chgBit(oldp+99,((0x4000U == (0xffffU 
                                           & vlSymsp->TOP__test_top.__PVT__device_addr
                                           [0U]))));
        bufp->chgBit(oldp+100,((0x4004U == (0xffffU 
                                            & vlSymsp->TOP__test_top.__PVT__device_addr
                                            [0U]))));
        bufp->chgBit(oldp+101,((0U == (0xffffU & vlSymsp->TOP__test_top.__PVT__device_addr
                                       [0U]))));
        bufp->chgBit(oldp+102,(vlSymsp->TOP__test_top.__PVT__device_req
                               [2U]));
        bufp->chgBit(oldp+103,(vlSymsp->TOP__test_top.__PVT__device_we
                               [2U]));
        bufp->chgIData(oldp+104,(vlSymsp->TOP__test_top.__PVT__device_addr
                                 [2U]),32);
        bufp->chgIData(oldp+105,(vlSymsp->TOP__test_top.__PVT__device_wdata
                                 [2U]),32);
        bufp->chgCData(oldp+106,((0xffU & vlSymsp->TOP__test_top.__PVT__device_addr
                                  [2U])),8);
        bufp->chgIData(oldp+107,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_wdata_i[0]),32);
        bufp->chgIData(oldp+108,(vlSymsp->TOP__test_top.__Vcellout__u_bus__host_rdata_o[0]),32);
        bufp->chgBit(oldp+109,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_req_o[0]));
        bufp->chgBit(oldp+110,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_req_o[1]));
        bufp->chgBit(oldp+111,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_req_o[2]));
        bufp->chgIData(oldp+112,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_addr_o[0]),32);
        bufp->chgIData(oldp+113,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_addr_o[1]),32);
        bufp->chgIData(oldp+114,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_addr_o[2]),32);
        bufp->chgBit(oldp+115,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_we_o[0]));
        bufp->chgBit(oldp+116,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_we_o[1]));
        bufp->chgBit(oldp+117,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_we_o[2]));
        bufp->chgIData(oldp+118,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_wdata_o[0]),32);
        bufp->chgIData(oldp+119,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_wdata_o[1]),32);
        bufp->chgIData(oldp+120,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_wdata_o[2]),32);
        bufp->chgIData(oldp+121,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__device_rdata_i[0]),32);
        bufp->chgIData(oldp+122,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__device_rdata_i[1]),32);
        bufp->chgIData(oldp+123,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__device_rdata_i[2]),32);
        bufp->chgCData(oldp+124,(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__device_sel_req),2);
        bufp->chgCData(oldp+125,(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__device_sel_resp),2);
        bufp->chgIData(oldp+126,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_mem_data_o),32);
        bufp->chgIData(oldp+127,(vlSymsp->TOP__test_top.__PVT__host_rdata
                                 [0U]),32);
        bufp->chgBit(oldp+128,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_enable_o));
        bufp->chgIData(oldp+129,(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_new_pc_o),32);
        bufp->chgCData(oldp+130,(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o),6);
        bufp->chgIData(oldp+131,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_wdata_o),32);
        bufp->chgIData(oldp+132,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_addr_o),32);
        bufp->chgIData(oldp+133,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_reg_wdata_o),32);
        bufp->chgQData(oldp+134,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mult_result_i),64);
        bufp->chgQData(oldp+136,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__invert_result),64);
        bufp->chgBit(oldp+138,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__req));
        bufp->chgBit(oldp+139,((1U & (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__req)))));
        bufp->chgIData(oldp+140,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__op1_o_final),32);
        bufp->chgBit(oldp+141,(vlSymsp->TOP__test_top.__PVT__device_req
                               [1U]));
        bufp->chgIData(oldp+142,(vlSymsp->TOP__test_top.__PVT__device_addr
                                 [1U]),32);
        bufp->chgBit(oldp+143,(vlSymsp->TOP__test_top.__PVT__device_we
                               [1U]));
        bufp->chgIData(oldp+144,(vlSymsp->TOP__test_top.__PVT__device_wdata
                                 [1U]),32);
        bufp->chgIData(oldp+145,((0x1ffffcU & vlSymsp->TOP__test_top.__PVT__device_addr
                                  [1U])),21);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+146,(vlSymsp->TOP__test_top.__PVT__halt_from_console));
        bufp->chgBit(oldp+147,((0U != vlSymsp->TOP__test_top.__PVT__clint0__DOT__msip_mem)));
        bufp->chgBit(oldp+148,(((~ (IData)((((((QData)((IData)(
                                                               vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem
                                                               [1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem
                                                                [0U]))) 
                                             - vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtimecmp) 
                                            >> 0x3fU))) 
                                & (0ULL != vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtimecmp))));
        bufp->chgBit(oldp+149,(vlSymsp->TOP__test_top__core_top0.__PVT__ce_wire));
        bufp->chgIData(oldp+150,(vlSymsp->TOP__test_top__core_top0.__PVT__pc_wire),32);
        bufp->chgIData(oldp+151,(vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem[0]),32);
        bufp->chgIData(oldp+152,(vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem[1]),32);
        bufp->chgIData(oldp+153,(vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtimecmp_mem[0]),32);
        bufp->chgIData(oldp+154,(vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtimecmp_mem[1]),32);
        bufp->chgIData(oldp+155,(vlSymsp->TOP__test_top.__PVT__clint0__DOT__msip_mem),32);
        bufp->chgQData(oldp+156,((((QData)((IData)(
                                                   vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem
                                                   [1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem
                                                               [0U])))),64);
        bufp->chgQData(oldp+158,(vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtimecmp),64);
        bufp->chgQData(oldp+160,((QData)((IData)(vlSymsp->TOP__test_top.__PVT__clint0__DOT__msip_mem))),64);
        bufp->chgBit(oldp+162,((0xffffffffU == vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem
                                [0U])));
        bufp->chgQData(oldp+163,(((((QData)((IData)(
                                                    vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem
                                                    [1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem
                                                                [0U]))) 
                                  - vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtimecmp)),64);
        bufp->chgBit(oldp+165,((1U & (~ (IData)((((
                                                   ((QData)((IData)(
                                                                    vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem
                                                                    [1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem
                                                                     [0U]))) 
                                                  - vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtimecmp) 
                                                 >> 0x3fU))))));
        bufp->chgBit(oldp+166,((0ULL == vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtimecmp)));
        bufp->chgCData(oldp+167,(vlSymsp->TOP__test_top.__PVT__console0__DOT__sim_finish),3);
        bufp->chgIData(oldp+168,(vlSymsp->TOP__test_top.__PVT__console0__DOT__log_fd),32);
        bufp->chgBit(oldp+169,(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_interrupt_type_o));
        bufp->chgBit(oldp+170,(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_cause_we_o));
        bufp->chgCData(oldp+171,(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_trap_casue_o),4);
        bufp->chgBit(oldp+172,(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_epc_we_o));
        bufp->chgBit(oldp+173,(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_mstatus_ie_clear_o));
        bufp->chgBit(oldp+174,(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_mstatus_ie_set_o));
        bufp->chgIData(oldp+175,(((8U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S))
                                   ? ((4U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S))
                                       ? 0U : ((2U 
                                                & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S))
                                                ? 0U
                                                : (
                                                   (1U 
                                                    & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S))
                                                    ? 0U
                                                    : vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mepc)))
                                   : ((4U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S))
                                       ? ((2U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S))
                                           ? 0U : (
                                                   (1U 
                                                    & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S))
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_interrupt_type_o)
                                                     ? 
                                                    ((1U 
                                                      & vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mtvec)
                                                      ? 
                                                     ((0xfffffffcU 
                                                       & vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mtvec) 
                                                      + 
                                                      ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_trap_casue_o) 
                                                       << 2U))
                                                      : 
                                                     (0xfffffffcU 
                                                      & vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mtvec))
                                                     : 
                                                    (0xfffffffcU 
                                                     & vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mtvec))))
                                       : 0U))),32);
        bufp->chgIData(oldp+176,(vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o),32);
        bufp->chgBit(oldp+177,(((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_is_load_o) 
                                & (((0x1fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                              >> 0xfU)) 
                                    == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_rd_o)) 
                                   | ((0x1fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                >> 0x14U)) 
                                      == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_rd_o))))));
        bufp->chgIData(oldp+178,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o),32);
        bufp->chgIData(oldp+179,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o),32);
        bufp->chgBit(oldp+180,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_reg_we_o));
        bufp->chgCData(oldp+181,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_reg_waddr_o),5);
        bufp->chgIData(oldp+182,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o),32);
        bufp->chgBit(oldp+183,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_is_load_o));
        bufp->chgCData(oldp+184,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_rd_o),5);
        bufp->chgBit(oldp+185,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_csr_we_o));
        bufp->chgSData(oldp+186,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_csr_addr_o),12);
        bufp->chgIData(oldp+187,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_exception_o),32);
        bufp->chgCData(oldp+188,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_reg_waddr_o),5);
        bufp->chgBit(oldp+189,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_reg_we_o));
        bufp->chgIData(oldp+190,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_reg_wdata_o),32);
        bufp->chgIData(oldp+191,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_addr_o),32);
        bufp->chgBit(oldp+192,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_we_o));
        bufp->chgIData(oldp+193,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_data_o),32);
        bufp->chgCData(oldp+194,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o),4);
        bufp->chgBit(oldp+195,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_csr_we_o));
        bufp->chgSData(oldp+196,((0xfffU & vlSymsp->TOP__test_top__core_top0.__Vcellout__exe_mem0__csr_waddr_o)),12);
        bufp->chgIData(oldp+197,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_csr_wdata_o),32);
        bufp->chgIData(oldp+198,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_exception_o),32);
        bufp->chgCData(oldp+199,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_reg_waddr_o),5);
        bufp->chgBit(oldp+200,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_reg_we_o));
        bufp->chgIData(oldp+201,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_reg_wdata_o),32);
        bufp->chgBit(oldp+202,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_we_o));
        bufp->chgSData(oldp+203,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_waddr_o),12);
        bufp->chgIData(oldp+204,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_wdata_o),32);
        bufp->chgBit(oldp+205,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_instret_incr_o));
        bufp->chgBit(oldp+206,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mstatus_mie));
        bufp->chgBit(oldp+207,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mie_external));
        bufp->chgBit(oldp+208,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mie_timer));
        bufp->chgBit(oldp+209,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mie_software));
        bufp->chgBit(oldp+210,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mip_external));
        bufp->chgBit(oldp+211,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mip_timer));
        bufp->chgBit(oldp+212,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mip_software));
        bufp->chgIData(oldp+213,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mtvec),32);
        bufp->chgIData(oldp+214,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mepc),32);
        bufp->chgQData(oldp+215,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mcycle),64);
        bufp->chgQData(oldp+217,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__minstret),64);
        bufp->chgIData(oldp+219,((0x1800U | (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mstatus_mpie) 
                                              << 7U) 
                                             | ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mstatus_mie) 
                                                << 3U)))),32);
        bufp->chgBit(oldp+220,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mstatus_mpie));
        bufp->chgBit(oldp+221,(((0x300U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_waddr_o)) 
                                & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_we_o))));
        bufp->chgIData(oldp+222,((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mie_external) 
                                   << 0xbU) | (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mie_timer) 
                                                << 7U) 
                                               | ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mie_software) 
                                                  << 3U)))),32);
        bufp->chgBit(oldp+223,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__w_mie));
        bufp->chgBit(oldp+224,(((0x305U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_waddr_o)) 
                                & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_we_o))));
        bufp->chgIData(oldp+225,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mscratch),32);
        bufp->chgBit(oldp+226,(((0x340U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_waddr_o)) 
                                & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_we_o))));
        bufp->chgBit(oldp+227,(((0x341U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_waddr_o)) 
                                & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_we_o))));
        bufp->chgIData(oldp+228,((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__interrupt_type) 
                                   << 0x1fU) | ((vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__cause_rem 
                                                 << 4U) 
                                                | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__cause)))),32);
        bufp->chgCData(oldp+229,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__cause),4);
        bufp->chgIData(oldp+230,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__cause_rem),27);
        bufp->chgBit(oldp+231,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__interrupt_type));
        bufp->chgBit(oldp+232,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__w_mcause));
        bufp->chgIData(oldp+233,((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mip_external) 
                                   << 0xbU) | (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mip_timer) 
                                                << 7U) 
                                               | ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mip_software) 
                                                  << 3U)))),32);
        bufp->chgIData(oldp+234,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mtval),32);
        bufp->chgBit(oldp+235,(((0x343U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_waddr_o)) 
                                & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_we_o))));
        bufp->chgIData(oldp+236,(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl0__DOT__current_pc),32);
        bufp->chgCData(oldp+237,((0x7fU & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)),7);
        bufp->chgCData(oldp+238,((7U & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                        >> 0xcU))),3);
        bufp->chgCData(oldp+239,((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                  >> 0x19U)),7);
        bufp->chgBit(oldp+240,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__isType_r));
        bufp->chgBit(oldp+241,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__isType_m));
        bufp->chgIData(oldp+242,((((- (IData)((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                               >> 0x1fU))) 
                                   << 0xcU) | (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                               >> 0x14U))),32);
        bufp->chgIData(oldp+243,((((- (IData)((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                               >> 0x1fU))) 
                                   << 0xcU) | ((0xfe0U 
                                                & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                   >> 0x14U)) 
                                               | (0x1fU 
                                                  & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                     >> 7U))))),32);
        bufp->chgBit(oldp+244,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__op1_eq_op2));
        bufp->chgIData(oldp+245,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__div_result_i),32);
        bufp->chgBit(oldp+246,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__div_ready_i));
        bufp->chgBit(oldp+247,((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                >> 0x1fU)));
        bufp->chgBit(oldp+248,((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o 
                                >> 0x1fU)));
        bufp->chgBit(oldp+249,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__signed_adjust));
        bufp->chgBit(oldp+250,((1U & (~ (IData)((0U 
                                                 != (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__div0__DOT__cnt)))))));
        bufp->chgIData(oldp+251,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__div0__DOT__reg32),32);
        bufp->chgWData(oldp+252,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__div0__DOT__result),65);
        bufp->chgCData(oldp+255,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__div0__DOT__cnt),6);
        bufp->chgIData(oldp+256,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__div0__DOT__result[0U]),32);
        bufp->chgIData(oldp+257,(((vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__div0__DOT__result[2U] 
                                   << 0x1fU) | (vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__div0__DOT__result[1U] 
                                                >> 1U))),32);
        bufp->chgCData(oldp+258,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__div0__DOT__S),3);
        bufp->chgBit(oldp+259,((vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__div0__DOT__result[1U] 
                                >= vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__div0__DOT__reg32)));
        bufp->chgQData(oldp+260,((0x1ffffffffULL & 
                                  ((QData)((IData)(
                                                   vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__div0__DOT__result[1U])) 
                                   - (QData)((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__div0__DOT__reg32))))),33);
        __Vtemp_h9e2dce8b__0[0U] = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__div0__DOT__result[0U];
        __Vtemp_h9e2dce8b__0[1U] = (IData)((0x1ffffffffULL 
                                            & ((QData)((IData)(
                                                               vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__div0__DOT__result[1U])) 
                                               - (QData)((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__div0__DOT__reg32)))));
        __Vtemp_h9e2dce8b__0[2U] = (IData)(((0x1ffffffffULL 
                                             & ((QData)((IData)(
                                                                vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__div0__DOT__result[1U])) 
                                                - (QData)((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__div0__DOT__reg32)))) 
                                            >> 0x20U));
        bufp->chgWData(oldp+262,(__Vtemp_h9e2dce8b__0),65);
        bufp->chgWData(oldp+265,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_temp[0]),65);
        bufp->chgWData(oldp+268,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_temp[1]),65);
        bufp->chgWData(oldp+271,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_temp[2]),65);
        bufp->chgWData(oldp+274,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_temp[3]),65);
        bufp->chgWData(oldp+277,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_temp[4]),65);
        bufp->chgWData(oldp+280,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_temp[5]),65);
        bufp->chgWData(oldp+283,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_temp[6]),65);
        bufp->chgWData(oldp+286,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_temp[7]),65);
        bufp->chgWData(oldp+289,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_temp[8]),65);
        bufp->chgWData(oldp+292,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_temp[9]),65);
        bufp->chgWData(oldp+295,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_temp[10]),65);
        bufp->chgWData(oldp+298,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_temp[11]),65);
        bufp->chgWData(oldp+301,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_temp[12]),65);
        bufp->chgWData(oldp+304,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_temp[13]),65);
        bufp->chgWData(oldp+307,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_temp[14]),65);
        bufp->chgWData(oldp+310,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_temp[15]),65);
        bufp->chgWData(oldp+313,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_temp[16]),65);
        bufp->chgWData(oldp+316,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_temp[17]),65);
        bufp->chgWData(oldp+319,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_temp[18]),65);
        bufp->chgWData(oldp+322,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_temp[19]),65);
        bufp->chgWData(oldp+325,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_temp[20]),65);
        bufp->chgWData(oldp+328,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_temp[21]),65);
        bufp->chgWData(oldp+331,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_temp[22]),65);
        bufp->chgWData(oldp+334,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_temp[23]),65);
        bufp->chgWData(oldp+337,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_temp[24]),65);
        bufp->chgWData(oldp+340,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_temp[25]),65);
        bufp->chgWData(oldp+343,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_temp[26]),65);
        bufp->chgWData(oldp+346,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_temp[27]),65);
        bufp->chgWData(oldp+349,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_temp[28]),65);
        bufp->chgWData(oldp+352,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_temp[29]),65);
        bufp->chgWData(oldp+355,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_temp[30]),65);
        bufp->chgWData(oldp+358,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_temp[31]),65);
        bufp->chgCData(oldp+361,((((IData)(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cell4__ready_o) 
                                   << 5U) | (((IData)(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cell3__ready_o) 
                                              << 4U) 
                                             | (((IData)(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cell2__ready_o) 
                                                 << 3U) 
                                                | (((IData)(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cell1__ready_o) 
                                                    << 2U) 
                                                   | (((IData)(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cell0__ready_o) 
                                                       << 1U) 
                                                      | (IData)(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cellB__ready_o))))))),6);
        bufp->chgWData(oldp+362,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_next1[0]),65);
        bufp->chgWData(oldp+365,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_next1[1]),65);
        bufp->chgWData(oldp+368,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_next1[2]),65);
        bufp->chgWData(oldp+371,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_next1[3]),65);
        bufp->chgWData(oldp+374,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_next1[4]),65);
        bufp->chgWData(oldp+377,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_next1[5]),65);
        bufp->chgWData(oldp+380,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_next1[6]),65);
        bufp->chgWData(oldp+383,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_next1[7]),65);
        bufp->chgWData(oldp+386,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_next1[8]),65);
        bufp->chgWData(oldp+389,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_next1[9]),65);
        bufp->chgWData(oldp+392,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_next1[10]),65);
        bufp->chgWData(oldp+395,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_next1[11]),65);
        bufp->chgWData(oldp+398,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_next1[12]),65);
        bufp->chgWData(oldp+401,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_next1[13]),65);
        bufp->chgWData(oldp+404,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_next1[14]),65);
        bufp->chgWData(oldp+407,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_next1[15]),65);
        bufp->chgWData(oldp+410,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_next2[0]),65);
        bufp->chgWData(oldp+413,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_next2[1]),65);
        bufp->chgWData(oldp+416,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_next2[2]),65);
        bufp->chgWData(oldp+419,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_next2[3]),65);
        bufp->chgWData(oldp+422,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_next2[4]),65);
        bufp->chgWData(oldp+425,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_next2[5]),65);
        bufp->chgWData(oldp+428,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_next2[6]),65);
        bufp->chgWData(oldp+431,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_next2[7]),65);
        bufp->chgWData(oldp+434,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_next3[0]),65);
        bufp->chgWData(oldp+437,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_next3[1]),65);
        bufp->chgWData(oldp+440,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_next3[2]),65);
        bufp->chgWData(oldp+443,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_next3[3]),65);
        bufp->chgWData(oldp+446,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_next4[0]),65);
        bufp->chgWData(oldp+449,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_next4[1]),65);
        bufp->chgWData(oldp+452,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_next5[0]),65);
        bufp->chgBit(oldp+455,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cellB__ready_o));
        bufp->chgWData(oldp+456,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0]),65);
        bufp->chgWData(oldp+459,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[1]),65);
        bufp->chgWData(oldp+462,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[2]),65);
        bufp->chgWData(oldp+465,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[3]),65);
        bufp->chgWData(oldp+468,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[4]),65);
        bufp->chgWData(oldp+471,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[5]),65);
        bufp->chgWData(oldp+474,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[6]),65);
        bufp->chgWData(oldp+477,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[7]),65);
        bufp->chgWData(oldp+480,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[8]),65);
        bufp->chgWData(oldp+483,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[9]),65);
        bufp->chgWData(oldp+486,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[10]),65);
        bufp->chgWData(oldp+489,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[11]),65);
        bufp->chgWData(oldp+492,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[12]),65);
        bufp->chgWData(oldp+495,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[13]),65);
        bufp->chgWData(oldp+498,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[14]),65);
        bufp->chgWData(oldp+501,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[15]),65);
        bufp->chgWData(oldp+504,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[16]),65);
        bufp->chgWData(oldp+507,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[17]),65);
        bufp->chgWData(oldp+510,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[18]),65);
        bufp->chgWData(oldp+513,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[19]),65);
        bufp->chgWData(oldp+516,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[20]),65);
        bufp->chgWData(oldp+519,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[21]),65);
        bufp->chgWData(oldp+522,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[22]),65);
        bufp->chgWData(oldp+525,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[23]),65);
        bufp->chgWData(oldp+528,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[24]),65);
        bufp->chgWData(oldp+531,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[25]),65);
        bufp->chgWData(oldp+534,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[26]),65);
        bufp->chgWData(oldp+537,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[27]),65);
        bufp->chgWData(oldp+540,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[28]),65);
        bufp->chgWData(oldp+543,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[29]),65);
        bufp->chgWData(oldp+546,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[30]),65);
        bufp->chgWData(oldp+549,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[31]),65);
        bufp->chgWData(oldp+552,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[0]),65);
        bufp->chgWData(oldp+555,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[1]),65);
        bufp->chgWData(oldp+558,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[2]),65);
        bufp->chgWData(oldp+561,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[3]),65);
        bufp->chgWData(oldp+564,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[4]),65);
        bufp->chgWData(oldp+567,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[5]),65);
        bufp->chgWData(oldp+570,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[6]),65);
        bufp->chgWData(oldp+573,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[7]),65);
        bufp->chgWData(oldp+576,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[8]),65);
        bufp->chgWData(oldp+579,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[9]),65);
        bufp->chgWData(oldp+582,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[10]),65);
        bufp->chgWData(oldp+585,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[11]),65);
        bufp->chgWData(oldp+588,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[12]),65);
        bufp->chgWData(oldp+591,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[13]),65);
        bufp->chgWData(oldp+594,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[14]),65);
        bufp->chgWData(oldp+597,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[15]),65);
        bufp->chgBit(oldp+600,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cell0__ready_o));
        bufp->chgIData(oldp+601,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__mult_cell0__DOT__unnamedblk1__DOT__device),32);
        bufp->chgIData(oldp+602,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__mult_cell0__DOT__unnamedblk2__DOT__device),32);
        bufp->chgWData(oldp+603,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[0]),65);
        bufp->chgWData(oldp+606,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[1]),65);
        bufp->chgWData(oldp+609,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[2]),65);
        bufp->chgWData(oldp+612,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[3]),65);
        bufp->chgWData(oldp+615,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[4]),65);
        bufp->chgWData(oldp+618,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[5]),65);
        bufp->chgWData(oldp+621,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[6]),65);
        bufp->chgWData(oldp+624,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[7]),65);
        bufp->chgWData(oldp+627,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[8]),65);
        bufp->chgWData(oldp+630,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[9]),65);
        bufp->chgWData(oldp+633,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[10]),65);
        bufp->chgWData(oldp+636,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[11]),65);
        bufp->chgWData(oldp+639,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[12]),65);
        bufp->chgWData(oldp+642,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[13]),65);
        bufp->chgWData(oldp+645,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[14]),65);
        bufp->chgWData(oldp+648,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[15]),65);
        bufp->chgWData(oldp+651,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[0]),65);
        bufp->chgWData(oldp+654,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[1]),65);
        bufp->chgWData(oldp+657,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[2]),65);
        bufp->chgWData(oldp+660,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[3]),65);
        bufp->chgWData(oldp+663,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[4]),65);
        bufp->chgWData(oldp+666,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[5]),65);
        bufp->chgWData(oldp+669,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[6]),65);
        bufp->chgWData(oldp+672,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[7]),65);
        bufp->chgBit(oldp+675,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cell1__ready_o));
        bufp->chgIData(oldp+676,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__mult_cell1__DOT__unnamedblk1__DOT__device),32);
        bufp->chgIData(oldp+677,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__mult_cell1__DOT__unnamedblk2__DOT__device),32);
        bufp->chgWData(oldp+678,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i[0]),65);
        bufp->chgWData(oldp+681,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i[1]),65);
        bufp->chgWData(oldp+684,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i[2]),65);
        bufp->chgWData(oldp+687,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i[3]),65);
        bufp->chgWData(oldp+690,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i[4]),65);
        bufp->chgWData(oldp+693,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i[5]),65);
        bufp->chgWData(oldp+696,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i[6]),65);
        bufp->chgWData(oldp+699,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i[7]),65);
        bufp->chgWData(oldp+702,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o[0]),65);
        bufp->chgWData(oldp+705,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o[1]),65);
        bufp->chgWData(oldp+708,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o[2]),65);
        bufp->chgWData(oldp+711,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o[3]),65);
        bufp->chgBit(oldp+714,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cell2__ready_o));
        bufp->chgIData(oldp+715,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__mult_cell2__DOT__unnamedblk1__DOT__device),32);
        bufp->chgIData(oldp+716,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__mult_cell2__DOT__unnamedblk2__DOT__device),32);
        bufp->chgWData(oldp+717,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell3__a_i[0]),65);
        bufp->chgWData(oldp+720,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell3__a_i[1]),65);
        bufp->chgWData(oldp+723,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell3__a_i[2]),65);
        bufp->chgWData(oldp+726,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell3__a_i[3]),65);
        bufp->chgWData(oldp+729,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cell3__result_o[0]),65);
        bufp->chgWData(oldp+732,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cell3__result_o[1]),65);
        bufp->chgBit(oldp+735,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cell3__ready_o));
        bufp->chgIData(oldp+736,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__mult_cell3__DOT__unnamedblk1__DOT__device),32);
        bufp->chgIData(oldp+737,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__mult_cell3__DOT__unnamedblk2__DOT__device),32);
        bufp->chgWData(oldp+738,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell4__a_i[0]),65);
        bufp->chgWData(oldp+741,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell4__a_i[1]),65);
        bufp->chgWData(oldp+744,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cell4__result_o[0]),65);
        bufp->chgBit(oldp+747,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cell4__ready_o));
        bufp->chgIData(oldp+748,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__mult_cell4__DOT__unnamedblk1__DOT__device),32);
        bufp->chgIData(oldp+749,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__mult_cell4__DOT__unnamedblk2__DOT__device),32);
        bufp->chgWData(oldp+750,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0]),65);
        bufp->chgWData(oldp+753,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[1]),65);
        bufp->chgWData(oldp+756,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[2]),65);
        bufp->chgWData(oldp+759,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[3]),65);
        bufp->chgWData(oldp+762,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[4]),65);
        bufp->chgWData(oldp+765,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[5]),65);
        bufp->chgWData(oldp+768,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[6]),65);
        bufp->chgWData(oldp+771,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[7]),65);
        bufp->chgWData(oldp+774,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[8]),65);
        bufp->chgWData(oldp+777,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[9]),65);
        bufp->chgWData(oldp+780,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[10]),65);
        bufp->chgWData(oldp+783,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[11]),65);
        bufp->chgWData(oldp+786,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[12]),65);
        bufp->chgWData(oldp+789,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[13]),65);
        bufp->chgWData(oldp+792,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[14]),65);
        bufp->chgWData(oldp+795,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[15]),65);
        bufp->chgWData(oldp+798,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[16]),65);
        bufp->chgWData(oldp+801,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[17]),65);
        bufp->chgWData(oldp+804,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[18]),65);
        bufp->chgWData(oldp+807,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[19]),65);
        bufp->chgWData(oldp+810,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[20]),65);
        bufp->chgWData(oldp+813,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[21]),65);
        bufp->chgWData(oldp+816,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[22]),65);
        bufp->chgWData(oldp+819,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[23]),65);
        bufp->chgWData(oldp+822,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[24]),65);
        bufp->chgWData(oldp+825,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[25]),65);
        bufp->chgWData(oldp+828,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[26]),65);
        bufp->chgWData(oldp+831,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[27]),65);
        bufp->chgWData(oldp+834,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[28]),65);
        bufp->chgWData(oldp+837,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[29]),65);
        bufp->chgWData(oldp+840,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[30]),65);
        bufp->chgWData(oldp+843,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[31]),65);
        bufp->chgIData(oldp+846,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__mult_cellB__DOT__unnamedblk1__DOT__device),32);
        bufp->chgIData(oldp+847,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__mult_cellB__DOT__unnamedblk2__DOT__device),32);
        bufp->chgIData(oldp+848,(vlSymsp->TOP__test_top__core_top0.__Vcellout__exe_mem0__csr_waddr_o),32);
        bufp->chgCData(oldp+849,((0x7fU & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)),7);
        bufp->chgCData(oldp+850,((0x1fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                           >> 7U))),5);
        bufp->chgCData(oldp+851,((0x1fU & ((0x2000U 
                                            & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                            ? (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                               >> 0xfU)
                                            : ((0x1000U 
                                                & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                ? (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                   >> 0xfU)
                                                : (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                   >> 0xfU))))),5);
        bufp->chgCData(oldp+852,(((IData)(vlSymsp->TOP__test_top__core_top0.id0__DOT__inst_type_r__DOT____VdfgExtracted_he1154c64__0)
                                   ? (0x1fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                               >> 0xfU))
                                   : 0U)),5);
        bufp->chgCData(oldp+853,(((IData)(vlSymsp->TOP__test_top__core_top0.id0__DOT__inst_type_r__DOT____VdfgExtracted_he1154c64__0)
                                   ? (0x1fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                               >> 0x14U))
                                   : 0U)),5);
        bufp->chgBit(oldp+854,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__r_reg1_re_o));
        bufp->chgBit(oldp+855,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__r_reg2_re_o));
        bufp->chgIData(oldp+856,(((0x2000U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                   ? (((- (IData)((vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                   >> 0x1fU))) 
                                       << 0xcU) | (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                   >> 0x14U))
                                   : ((0x1000U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                       ? (0x1fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                   >> 0x14U))
                                       : (((- (IData)(
                                                      (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                       >> 0x1fU))) 
                                           << 0xcU) 
                                          | (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                             >> 0x14U))))),32);
        bufp->chgBit(oldp+857,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__r_reg_we_o));
        bufp->chgCData(oldp+858,((0x1fU & ((0x2000U 
                                            & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                            ? (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                               >> 7U)
                                            : ((0x1000U 
                                                & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                ? (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                   >> 7U)
                                                : (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                   >> 7U))))),5);
        bufp->chgCData(oldp+859,(((IData)(vlSymsp->TOP__test_top__core_top0.id0__DOT__inst_type_r__DOT____VdfgExtracted_he1154c64__0)
                                   ? (0x1fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                               >> 7U))
                                   : 0U)),5);
        bufp->chgCData(oldp+860,((0x1fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                           >> 0xfU))),5);
        bufp->chgCData(oldp+861,((0x1fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                           >> 0x14U))),5);
        bufp->chgCData(oldp+862,((7U & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                        >> 0xcU))),3);
        bufp->chgCData(oldp+863,((vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                  >> 0x19U)),7);
        bufp->chgBit(oldp+864,(((0x33U == (0x7fU & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) 
                                & ((0U == (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                           >> 0x19U)) 
                                   | (0x20U == (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                >> 0x19U))))));
        bufp->chgBit(oldp+865,((IData)((0x2000033U 
                                        == (0xfe00007fU 
                                            & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)))));
        bufp->chgCData(oldp+866,(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S),4);
        bufp->chgCData(oldp+867,(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S_nxt),4);
        bufp->chgBit(oldp+868,((1U & vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_exception_o)));
        bufp->chgBit(oldp+869,((1U & (vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_exception_o 
                                      >> 1U))));
        bufp->chgBit(oldp+870,(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__eip));
        bufp->chgBit(oldp+871,(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__tip));
        bufp->chgBit(oldp+872,(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__sip));
        bufp->chgBit(oldp+873,(((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__eip) 
                                | ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__tip) 
                                   | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__sip)))));
        bufp->chgBit(oldp+874,((1U & (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mstatus_mie) 
                                       & ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__eip) 
                                          | ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__tip) 
                                             | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__sip)))) 
                                      | (vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_exception_o 
                                         >> 1U)))));
        bufp->chgIData(oldp+875,((vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mtvec 
                                  >> 2U)),30);
        bufp->chgIData(oldp+876,(((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_interrupt_type_o)
                                   ? ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mtvec)
                                       ? ((0xfffffffcU 
                                           & vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mtvec) 
                                          + ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_trap_casue_o) 
                                             << 2U))
                                       : (0xfffffffcU 
                                          & vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mtvec))
                                   : (0xfffffffcU & vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mtvec))),32);
        bufp->chgIData(oldp+877,(((1U & vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mtvec)
                                   ? ((0xfffffffcU 
                                       & vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mtvec) 
                                      + ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_trap_casue_o) 
                                         << 2U)) : 
                                  (0xfffffffcU & vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mtvec))),32);
        bufp->chgIData(oldp+878,(((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_trap_casue_o) 
                                  << 2U)),32);
        bufp->chgBit(oldp+879,(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__exception));
        bufp->chgIData(oldp+880,((0xfffU & vlSymsp->TOP__test_top__core_top0.__Vcellout__exe_mem0__csr_waddr_o)),32);
        bufp->chgCData(oldp+881,((3U & vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_addr_o)),2);
        bufp->chgIData(oldp+882,((0x1ffffcU & vlSymsp->TOP__test_top__core_top0.__PVT__pc_wire)),21);
        bufp->chgIData(oldp+883,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[0]),32);
        bufp->chgIData(oldp+884,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[1]),32);
        bufp->chgIData(oldp+885,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[2]),32);
        bufp->chgIData(oldp+886,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[3]),32);
        bufp->chgIData(oldp+887,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[4]),32);
        bufp->chgIData(oldp+888,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[5]),32);
        bufp->chgIData(oldp+889,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[6]),32);
        bufp->chgIData(oldp+890,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[7]),32);
        bufp->chgIData(oldp+891,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[8]),32);
        bufp->chgIData(oldp+892,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[9]),32);
        bufp->chgIData(oldp+893,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[10]),32);
        bufp->chgIData(oldp+894,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[11]),32);
        bufp->chgIData(oldp+895,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[12]),32);
        bufp->chgIData(oldp+896,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[13]),32);
        bufp->chgIData(oldp+897,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[14]),32);
        bufp->chgIData(oldp+898,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[15]),32);
        bufp->chgIData(oldp+899,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[16]),32);
        bufp->chgIData(oldp+900,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[17]),32);
        bufp->chgIData(oldp+901,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[18]),32);
        bufp->chgIData(oldp+902,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[19]),32);
        bufp->chgIData(oldp+903,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[20]),32);
        bufp->chgIData(oldp+904,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[21]),32);
        bufp->chgIData(oldp+905,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[22]),32);
        bufp->chgIData(oldp+906,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[23]),32);
        bufp->chgIData(oldp+907,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[24]),32);
        bufp->chgIData(oldp+908,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[25]),32);
        bufp->chgIData(oldp+909,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[26]),32);
        bufp->chgIData(oldp+910,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[27]),32);
        bufp->chgIData(oldp+911,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[28]),32);
        bufp->chgIData(oldp+912,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[29]),32);
        bufp->chgIData(oldp+913,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[30]),32);
        bufp->chgIData(oldp+914,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[31]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgBit(oldp+915,(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_interrupt_en_o));
        bufp->chgIData(oldp+916,(vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_addr_o),32);
        bufp->chgIData(oldp+917,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_addr_o),32);
        bufp->chgIData(oldp+918,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_inst_addr_o),32);
    }
    bufp->chgBit(oldp+919,(vlSelf->clk_i));
    bufp->chgBit(oldp+920,(vlSelf->rst_i));
    bufp->chgBit(oldp+921,(vlSelf->halt_o));
    bufp->chgIData(oldp+922,(((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ce_wire)
                               ? ((vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                   [(0x1ffffcU & vlSymsp->TOP__test_top__core_top0.__PVT__pc_wire)] 
                                   << 0x18U) | ((vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                                 [(0x1fffffU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      (0x1ffffcU 
                                                       & vlSymsp->TOP__test_top__core_top0.__PVT__pc_wire)))] 
                                                 << 0x10U) 
                                                | ((vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                                    [
                                                    (0x1fffffU 
                                                     & ((IData)(2U) 
                                                        + 
                                                        (0x1ffffcU 
                                                         & vlSymsp->TOP__test_top__core_top0.__PVT__pc_wire)))] 
                                                    << 8U) 
                                                   | vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                                   [
                                                   (0x1fffffU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       (0x1ffffcU 
                                                        & vlSymsp->TOP__test_top__core_top0.__PVT__pc_wire)))])))
                               : 0U)),32);
    bufp->chgBit(oldp+923,(((~ (IData)(vlSelf->rst_i)) 
                            & (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req))));
    bufp->chgBit(oldp+924,((1U & (~ (IData)(vlSelf->rst_i)))));
    bufp->chgIData(oldp+925,(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_epc_o),32);
    bufp->chgIData(oldp+926,(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_pc_o),32);
    bufp->chgIData(oldp+927,((((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_re_o) 
                                 & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_we_o)) 
                                & (0U != (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_addr_o))) 
                               & ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_waddr_o) 
                                  == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_addr_o)))
                               ? vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_wdata_o
                               : (((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_re_o) 
                                     & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_reg_we_o)) 
                                    & (0U != (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_addr_o))) 
                                   & ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_reg_waddr_o) 
                                      == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_addr_o)))
                                   ? vlSymsp->TOP__test_top__core_top0.__PVT__mem_reg_wdata_o
                                   : vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__op1_o_final))),32);
    bufp->chgIData(oldp+928,((((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_re_o) 
                                 & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_we_o)) 
                                & (0U != (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_addr_o))) 
                               & ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_waddr_o) 
                                  == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_addr_o)))
                               ? vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_wdata_o
                               : (((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_re_o) 
                                     & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_reg_we_o)) 
                                    & (0U != (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_addr_o))) 
                                   & ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_reg_waddr_o) 
                                      == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_addr_o)))
                                   ? vlSymsp->TOP__test_top__core_top0.__PVT__mem_reg_wdata_o
                                   : vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__op2_o_final))),32);
    bufp->chgBit(oldp+929,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_stallreq_o));
    bufp->chgIData(oldp+930,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_inst_addr_o),32);
    bufp->chgBit(oldp+931,(((~ ((IData)(vlSelf->rst_i) 
                                | (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__req)))) 
                            & ((IData)(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____VdfgExtracted_hccf441aa__0) 
                               | ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__req) 
                                  & (IData)(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cell4__ready_o))))));
    bufp->chgIData(oldp+932,((vlSymsp->TOP__test_top.__PVT__device_req
                              [1U] ? ((vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                       [(0x1ffffcU 
                                         & vlSymsp->TOP__test_top.__PVT__device_addr
                                         [1U])] << 0x18U) 
                                      | ((vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                          [(0x1fffffU 
                                            & ((IData)(1U) 
                                               + (0x1ffffcU 
                                                  & vlSymsp->TOP__test_top.__PVT__device_addr
                                                  [1U])))] 
                                          << 0x10U) 
                                         | ((vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                             [(0x1fffffU 
                                               & ((IData)(2U) 
                                                  + 
                                                  (0x1ffffcU 
                                                   & vlSymsp->TOP__test_top.__PVT__device_addr
                                                   [1U])))] 
                                             << 8U) 
                                            | vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                            [(0x1fffffU 
                                              & ((IData)(3U) 
                                                 + 
                                                 (0x1ffffcU 
                                                  & vlSymsp->TOP__test_top.__PVT__device_addr
                                                  [1U])))])))
                               : 0U)),32);
}

void Vtest_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_top___024root__trace_cleanup\n"); );
    // Init
    Vtest_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtest_top___024root*>(voidSelf);
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}

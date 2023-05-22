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
    VlWide<3>/*95:0*/ __Vtemp_h9e2dce8b__0;
    VlWide<3>/*95:0*/ __Vtemp_h4ceb91ff__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgIData(oldp+0,(vlSymsp->TOP__test_top.__PVT__cfg_device_addr_base[0]),32);
        bufp->chgIData(oldp+1,(vlSymsp->TOP__test_top.__PVT__cfg_device_addr_base[1]),32);
        bufp->chgIData(oldp+2,(vlSymsp->TOP__test_top.__PVT__cfg_device_addr_mask[0]),32);
        bufp->chgIData(oldp+3,(vlSymsp->TOP__test_top.__PVT__cfg_device_addr_mask[1]),32);
        bufp->chgIData(oldp+4,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__cfg_device_addr_base[0]),32);
        bufp->chgIData(oldp+5,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__cfg_device_addr_base[1]),32);
        bufp->chgIData(oldp+6,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__cfg_device_addr_mask[0]),32);
        bufp->chgIData(oldp+7,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__cfg_device_addr_mask[1]),32);
        bufp->chgIData(oldp+8,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__i),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+9,(vlSymsp->TOP__test_top.__PVT__host_req[0]));
        bufp->chgBit(oldp+10,(vlSymsp->TOP__test_top.__PVT__host_gnt[0]));
        bufp->chgBit(oldp+11,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_req_i[0]));
        bufp->chgBit(oldp+12,(vlSymsp->TOP__test_top.__Vcellout__u_bus__host_gnt_o[0]));
        bufp->chgBit(oldp+13,(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+14,(vlSymsp->TOP__test_top.__PVT__host_addr[0]),32);
        bufp->chgBit(oldp+15,(vlSymsp->TOP__test_top.__PVT__host_we[0]));
        bufp->chgIData(oldp+16,(vlSymsp->TOP__test_top.__PVT__host_wdata[0]),32);
        bufp->chgIData(oldp+17,(vlSymsp->TOP__test_top.__PVT__host_rdata[0]),32);
        bufp->chgBit(oldp+18,(vlSymsp->TOP__test_top.__PVT__device_req[0]));
        bufp->chgBit(oldp+19,(vlSymsp->TOP__test_top.__PVT__device_req[1]));
        bufp->chgIData(oldp+20,(vlSymsp->TOP__test_top.__PVT__device_addr[0]),32);
        bufp->chgIData(oldp+21,(vlSymsp->TOP__test_top.__PVT__device_addr[1]),32);
        bufp->chgBit(oldp+22,(vlSymsp->TOP__test_top.__PVT__device_we[0]));
        bufp->chgBit(oldp+23,(vlSymsp->TOP__test_top.__PVT__device_we[1]));
        bufp->chgIData(oldp+24,(vlSymsp->TOP__test_top.__PVT__device_wdata[0]),32);
        bufp->chgIData(oldp+25,(vlSymsp->TOP__test_top.__PVT__device_wdata[1]),32);
        bufp->chgIData(oldp+26,(vlSymsp->TOP__test_top.__PVT__device_rdata[0]),32);
        bufp->chgIData(oldp+27,(vlSymsp->TOP__test_top.__PVT__device_rdata[1]),32);
        bufp->chgBit(oldp+28,(vlSymsp->TOP__test_top.__PVT__device_req
                              [1U]));
        bufp->chgBit(oldp+29,(vlSymsp->TOP__test_top.__PVT__device_we
                              [1U]));
        bufp->chgIData(oldp+30,(vlSymsp->TOP__test_top.__PVT__device_addr
                                [1U]),32);
        bufp->chgIData(oldp+31,(vlSymsp->TOP__test_top.__PVT__device_wdata
                                [1U]),32);
        bufp->chgCData(oldp+32,((0xffU & vlSymsp->TOP__test_top.__PVT__device_addr
                                 [1U])),8);
        bufp->chgIData(oldp+33,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_addr_i[0]),32);
        bufp->chgBit(oldp+34,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_we_i[0]));
        bufp->chgIData(oldp+35,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_wdata_i[0]),32);
        bufp->chgIData(oldp+36,(vlSymsp->TOP__test_top.__Vcellout__u_bus__host_rdata_o[0]),32);
        bufp->chgBit(oldp+37,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_req_o[0]));
        bufp->chgBit(oldp+38,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_req_o[1]));
        bufp->chgIData(oldp+39,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_addr_o[0]),32);
        bufp->chgIData(oldp+40,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_addr_o[1]),32);
        bufp->chgBit(oldp+41,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_we_o[0]));
        bufp->chgBit(oldp+42,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_we_o[1]));
        bufp->chgIData(oldp+43,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_wdata_o[0]),32);
        bufp->chgIData(oldp+44,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_wdata_o[1]),32);
        bufp->chgIData(oldp+45,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__device_rdata_i[0]),32);
        bufp->chgIData(oldp+46,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__device_rdata_i[1]),32);
        bufp->chgBit(oldp+47,(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__device_sel_req));
        bufp->chgIData(oldp+48,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_mem_addr_o),32);
        bufp->chgIData(oldp+49,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_mem_data_o),32);
        bufp->chgIData(oldp+50,(vlSymsp->TOP__test_top.__PVT__host_rdata
                                [0U]),32);
        bufp->chgBit(oldp+51,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_mem_we_o));
        bufp->chgBit(oldp+52,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_enable_o));
        bufp->chgIData(oldp+53,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_addr_o),32);
        bufp->chgCData(oldp+54,(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o),6);
        bufp->chgCData(oldp+55,(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_addr_o),5);
        bufp->chgCData(oldp+56,(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_addr_o),5);
        bufp->chgBit(oldp+57,(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_re_o));
        bufp->chgBit(oldp+58,(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_re_o));
        bufp->chgIData(oldp+59,(vlSymsp->TOP__test_top__core_top0.__PVT__id_inst_o),32);
        bufp->chgIData(oldp+60,((((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_re_o) 
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
        bufp->chgIData(oldp+61,((((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_re_o) 
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
        bufp->chgBit(oldp+62,(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg_we_o));
        bufp->chgCData(oldp+63,(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg_waddr_o),5);
        bufp->chgBit(oldp+64,(vlSymsp->TOP__test_top__core_top0.__PVT__id_csr_we_o));
        bufp->chgSData(oldp+65,(vlSymsp->TOP__test_top__core_top0.__PVT__id_csr_addr_o),12);
        bufp->chgCData(oldp+66,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_waddr_o),5);
        bufp->chgBit(oldp+67,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_we_o));
        bufp->chgIData(oldp+68,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_wdata_o),32);
        bufp->chgIData(oldp+69,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_addr_o),32);
        bufp->chgBit(oldp+70,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_we_o));
        bufp->chgIData(oldp+71,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_data_o),32);
        bufp->chgCData(oldp+72,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_op_o),4);
        bufp->chgBit(oldp+73,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_stallreq_o));
        bufp->chgBit(oldp+74,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_we_o));
        bufp->chgSData(oldp+75,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_waddr_o),12);
        bufp->chgIData(oldp+76,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_wdata_o),32);
        bufp->chgSData(oldp+77,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_raddr_o),12);
        bufp->chgCData(oldp+78,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_reg_waddr_o),5);
        bufp->chgBit(oldp+79,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_reg_we_o));
        bufp->chgIData(oldp+80,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_reg_wdata_o),32);
        bufp->chgBit(oldp+81,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_csr_we_o));
        bufp->chgSData(oldp+82,((0xfffU & vlSymsp->TOP__test_top__core_top0.__Vcellout__mem0__csr_waddr_o)),12);
        bufp->chgIData(oldp+83,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_csr_wdata_o),32);
        bufp->chgIData(oldp+84,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__rdata1_o),32);
        bufp->chgIData(oldp+85,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__rdata2_o),32);
        bufp->chgIData(oldp+86,(vlSymsp->TOP__test_top__core_top0.__PVT__csr_file_csr_rdata_o),32);
        bufp->chgIData(oldp+87,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__a_o),32);
        bufp->chgIData(oldp+88,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__b_o),32);
        bufp->chgBit(oldp+89,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mult_req_o));
        bufp->chgBit(oldp+90,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__div_req_o));
        bufp->chgBit(oldp+91,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__is_div_q_i));
        bufp->chgQData(oldp+92,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__invert_result),64);
        bufp->chgIData(oldp+94,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__invert_result_div),32);
        bufp->chgIData(oldp+95,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__csr_rdata),32);
        bufp->chgBit(oldp+96,((0U == vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__a_o)));
        bufp->chgBit(oldp+97,((0U == vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__b_o)));
        bufp->chgCData(oldp+98,(((0U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__div0__DOT__S))
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
        bufp->chgBit(oldp+99,((1U & (~ (IData)((0U 
                                                != vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__a_o))))));
        bufp->chgBit(oldp+100,((1U & (~ (IData)((0U 
                                                 != vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__b_o))))));
        bufp->chgCData(oldp+101,(((0U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__S))
                                   ? ((1U & ((~ (IData)(
                                                        (0U 
                                                         != vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__a_o))) 
                                             | (~ (IData)(
                                                          (0U 
                                                           != vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__b_o)))))
                                       ? 3U : ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mult_ready_i)
                                                ? 0U
                                                : 1U))
                                   : ((1U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__S))
                                       ? ((0U != (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__cnt))
                                           ? 1U : 3U)
                                       : 0U))),3);
        bufp->chgIData(oldp+102,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_waddr_o),32);
        bufp->chgIData(oldp+103,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__op1_o_final),32);
        bufp->chgIData(oldp+104,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__op2_o_final),32);
        bufp->chgIData(oldp+105,(((IData)(vlSymsp->TOP__test_top__core_top0.id0__DOT__inst_type_r__DOT____VdfgExtracted_he1154c64__0)
                                   ? vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__rdata1_o
                                   : 0U)),32);
        bufp->chgIData(oldp+106,(((IData)(vlSymsp->TOP__test_top__core_top0.id0__DOT__inst_type_r__DOT____VdfgExtracted_he1154c64__0)
                                   ? vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__rdata2_o
                                   : 0U)),32);
        bufp->chgIData(oldp+107,(vlSymsp->TOP__test_top__core_top0.__Vcellout__mem0__csr_waddr_o),32);
        bufp->chgBit(oldp+108,(vlSymsp->TOP__test_top.__PVT__device_req
                               [0U]));
        bufp->chgIData(oldp+109,(vlSymsp->TOP__test_top.__PVT__device_addr
                                 [0U]),32);
        bufp->chgBit(oldp+110,(vlSymsp->TOP__test_top.__PVT__device_we
                               [0U]));
        bufp->chgIData(oldp+111,(vlSymsp->TOP__test_top.__PVT__device_wdata
                                 [0U]),32);
        bufp->chgIData(oldp+112,((0x1ffffcU & vlSymsp->TOP__test_top.__PVT__device_addr
                                  [0U])),21);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+113,(vlSymsp->TOP__test_top.__PVT__halt_from_console));
        bufp->chgBit(oldp+114,(vlSymsp->TOP__test_top__core_top0.__PVT__ce_wire));
        bufp->chgIData(oldp+115,(vlSymsp->TOP__test_top__core_top0.__PVT__pc_wire),32);
        bufp->chgCData(oldp+116,(vlSymsp->TOP__test_top.__PVT__console0__DOT__sim_finish),3);
        bufp->chgIData(oldp+117,(vlSymsp->TOP__test_top.__PVT__console0__DOT__log_fd),32);
        bufp->chgIData(oldp+118,(vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_addr_o),32);
        bufp->chgIData(oldp+119,(vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o),32);
        bufp->chgBit(oldp+120,(((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_is_load_o) 
                                & (((0x1fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                              >> 0xfU)) 
                                    == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_rd_o)) 
                                   | ((0x1fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                >> 0x14U)) 
                                      == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_rd_o))))));
        bufp->chgIData(oldp+121,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o),32);
        bufp->chgIData(oldp+122,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o),32);
        bufp->chgBit(oldp+123,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_reg_we_o));
        bufp->chgCData(oldp+124,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_reg_waddr_o),5);
        bufp->chgIData(oldp+125,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o),32);
        bufp->chgIData(oldp+126,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_addr_o),32);
        bufp->chgBit(oldp+127,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_is_load_o));
        bufp->chgCData(oldp+128,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_rd_o),5);
        bufp->chgBit(oldp+129,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_csr_we_o));
        bufp->chgSData(oldp+130,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_csr_addr_o),12);
        bufp->chgCData(oldp+131,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_reg_waddr_o),5);
        bufp->chgBit(oldp+132,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_reg_we_o));
        bufp->chgIData(oldp+133,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_reg_wdata_o),32);
        bufp->chgIData(oldp+134,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_addr_o),32);
        bufp->chgBit(oldp+135,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_we_o));
        bufp->chgIData(oldp+136,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_data_o),32);
        bufp->chgCData(oldp+137,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o),4);
        bufp->chgBit(oldp+138,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_csr_we_o));
        bufp->chgSData(oldp+139,((0xfffU & vlSymsp->TOP__test_top__core_top0.__Vcellout__exe_mem0__csr_waddr_o)),12);
        bufp->chgIData(oldp+140,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_csr_wdata_o),32);
        bufp->chgCData(oldp+141,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_reg_waddr_o),5);
        bufp->chgBit(oldp+142,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_reg_we_o));
        bufp->chgIData(oldp+143,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_reg_wdata_o),32);
        bufp->chgBit(oldp+144,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_we_o));
        bufp->chgSData(oldp+145,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_waddr_o),12);
        bufp->chgIData(oldp+146,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_wdata_o),32);
        bufp->chgBit(oldp+147,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_instret_incr_o));
        bufp->chgQData(oldp+148,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mcycle),64);
        bufp->chgQData(oldp+150,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__minstret),64);
        bufp->chgIData(oldp+152,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mstatus),32);
        bufp->chgBit(oldp+153,(((0x300U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_waddr_o)) 
                                & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_we_o))));
        bufp->chgCData(oldp+154,((0x7fU & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)),7);
        bufp->chgCData(oldp+155,((7U & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                        >> 0xcU))),3);
        bufp->chgCData(oldp+156,((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                  >> 0x19U)),7);
        bufp->chgBit(oldp+157,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__isType_r));
        bufp->chgBit(oldp+158,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__isType_m));
        bufp->chgIData(oldp+159,((((- (IData)((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                               >> 0x1fU))) 
                                   << 0xcU) | (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                               >> 0x14U))),32);
        bufp->chgIData(oldp+160,((((- (IData)((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                               >> 0x1fU))) 
                                   << 0xcU) | ((0xfe0U 
                                                & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                   >> 0x14U)) 
                                               | (0x1fU 
                                                  & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                     >> 7U))))),32);
        bufp->chgBit(oldp+161,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__op1_eq_op2));
        bufp->chgIData(oldp+162,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__div_result_i),32);
        bufp->chgBit(oldp+163,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mult_ready_i));
        bufp->chgBit(oldp+164,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__div_ready_i));
        bufp->chgQData(oldp+165,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mult_result_i),64);
        bufp->chgBit(oldp+167,((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                                >> 0x1fU)));
        bufp->chgBit(oldp+168,((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o 
                                >> 0x1fU)));
        bufp->chgBit(oldp+169,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__signed_adjust));
        bufp->chgBit(oldp+170,((1U & (~ (IData)((0U 
                                                 != (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__div0__DOT__cnt)))))));
        bufp->chgIData(oldp+171,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__div0__DOT__reg32),32);
        bufp->chgWData(oldp+172,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__div0__DOT__result),65);
        bufp->chgCData(oldp+175,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__div0__DOT__cnt),6);
        bufp->chgIData(oldp+176,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__div0__DOT__result[0U]),32);
        bufp->chgIData(oldp+177,(((vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__div0__DOT__result[2U] 
                                   << 0x1fU) | (vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__div0__DOT__result[1U] 
                                                >> 1U))),32);
        bufp->chgCData(oldp+178,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__div0__DOT__S),3);
        bufp->chgBit(oldp+179,((vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__div0__DOT__result[1U] 
                                >= vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__div0__DOT__reg32)));
        bufp->chgQData(oldp+180,((0x1ffffffffULL & 
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
        bufp->chgWData(oldp+182,(__Vtemp_h9e2dce8b__0),65);
        bufp->chgBit(oldp+185,((1U & (~ (IData)((0U 
                                                 != (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__cnt)))))));
        bufp->chgIData(oldp+186,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__reg32),32);
        bufp->chgWData(oldp+187,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__result),65);
        bufp->chgCData(oldp+190,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__cnt),6);
        bufp->chgCData(oldp+191,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__S),3);
        bufp->chgBit(oldp+192,((1U & vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__result[0U])));
        bufp->chgIData(oldp+193,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__result[1U]),32);
        bufp->chgQData(oldp+194,((0x1ffffffffULL & 
                                  ((QData)((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__reg32)) 
                                   + (QData)((IData)(
                                                     vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__result[1U]))))),33);
        __Vtemp_h4ceb91ff__0[0U] = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__result[0U];
        __Vtemp_h4ceb91ff__0[1U] = (IData)((0x1ffffffffULL 
                                            & ((QData)((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__reg32)) 
                                               + (QData)((IData)(
                                                                 vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__result[1U])))));
        __Vtemp_h4ceb91ff__0[2U] = (IData)(((0x1ffffffffULL 
                                             & ((QData)((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__reg32)) 
                                                + (QData)((IData)(
                                                                  vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__result[1U])))) 
                                            >> 0x20U));
        bufp->chgWData(oldp+196,(__Vtemp_h4ceb91ff__0),65);
        bufp->chgIData(oldp+199,(vlSymsp->TOP__test_top__core_top0.__Vcellout__exe_mem0__csr_waddr_o),32);
        bufp->chgCData(oldp+200,((0x7fU & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)),7);
        bufp->chgCData(oldp+201,((0x1fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                           >> 7U))),5);
        bufp->chgCData(oldp+202,((0x1fU & ((0x2000U 
                                            & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                            ? (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                               >> 0xfU)
                                            : ((0x1000U 
                                                & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                ? (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                   >> 0xfU)
                                                : (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                   >> 0xfU))))),5);
        bufp->chgCData(oldp+203,(((IData)(vlSymsp->TOP__test_top__core_top0.id0__DOT__inst_type_r__DOT____VdfgExtracted_he1154c64__0)
                                   ? (0x1fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                               >> 0xfU))
                                   : 0U)),5);
        bufp->chgCData(oldp+204,(((IData)(vlSymsp->TOP__test_top__core_top0.id0__DOT__inst_type_r__DOT____VdfgExtracted_he1154c64__0)
                                   ? (0x1fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                               >> 0x14U))
                                   : 0U)),5);
        bufp->chgBit(oldp+205,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__r_reg1_re_o));
        bufp->chgBit(oldp+206,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__r_reg2_re_o));
        bufp->chgIData(oldp+207,(((0x2000U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
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
        bufp->chgBit(oldp+208,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__r_reg_we_o));
        bufp->chgCData(oldp+209,((0x1fU & ((0x2000U 
                                            & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                            ? (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                               >> 7U)
                                            : ((0x1000U 
                                                & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                                ? (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                   >> 7U)
                                                : (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                   >> 7U))))),5);
        bufp->chgCData(oldp+210,(((IData)(vlSymsp->TOP__test_top__core_top0.id0__DOT__inst_type_r__DOT____VdfgExtracted_he1154c64__0)
                                   ? (0x1fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                               >> 7U))
                                   : 0U)),5);
        bufp->chgCData(oldp+211,((0x1fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                           >> 0xfU))),5);
        bufp->chgCData(oldp+212,((0x1fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                           >> 0x14U))),5);
        bufp->chgCData(oldp+213,((7U & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                        >> 0xcU))),3);
        bufp->chgCData(oldp+214,((vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                  >> 0x19U)),7);
        bufp->chgBit(oldp+215,(((0x33U == (0x7fU & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) 
                                & ((0U == (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                           >> 0x19U)) 
                                   | (0x20U == (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                >> 0x19U))))));
        bufp->chgBit(oldp+216,((IData)((0x2000033U 
                                        == (0xfe00007fU 
                                            & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)))));
        bufp->chgIData(oldp+217,((0xfffU & vlSymsp->TOP__test_top__core_top0.__Vcellout__exe_mem0__csr_waddr_o)),32);
        bufp->chgCData(oldp+218,((3U & vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_addr_o)),2);
        bufp->chgIData(oldp+219,((0x1ffffcU & vlSymsp->TOP__test_top__core_top0.__PVT__pc_wire)),21);
        bufp->chgIData(oldp+220,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[0]),32);
        bufp->chgIData(oldp+221,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[1]),32);
        bufp->chgIData(oldp+222,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[2]),32);
        bufp->chgIData(oldp+223,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[3]),32);
        bufp->chgIData(oldp+224,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[4]),32);
        bufp->chgIData(oldp+225,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[5]),32);
        bufp->chgIData(oldp+226,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[6]),32);
        bufp->chgIData(oldp+227,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[7]),32);
        bufp->chgIData(oldp+228,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[8]),32);
        bufp->chgIData(oldp+229,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[9]),32);
        bufp->chgIData(oldp+230,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[10]),32);
        bufp->chgIData(oldp+231,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[11]),32);
        bufp->chgIData(oldp+232,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[12]),32);
        bufp->chgIData(oldp+233,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[13]),32);
        bufp->chgIData(oldp+234,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[14]),32);
        bufp->chgIData(oldp+235,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[15]),32);
        bufp->chgIData(oldp+236,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[16]),32);
        bufp->chgIData(oldp+237,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[17]),32);
        bufp->chgIData(oldp+238,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[18]),32);
        bufp->chgIData(oldp+239,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[19]),32);
        bufp->chgIData(oldp+240,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[20]),32);
        bufp->chgIData(oldp+241,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[21]),32);
        bufp->chgIData(oldp+242,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[22]),32);
        bufp->chgIData(oldp+243,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[23]),32);
        bufp->chgIData(oldp+244,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[24]),32);
        bufp->chgIData(oldp+245,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[25]),32);
        bufp->chgIData(oldp+246,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[26]),32);
        bufp->chgIData(oldp+247,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[27]),32);
        bufp->chgIData(oldp+248,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[28]),32);
        bufp->chgIData(oldp+249,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[29]),32);
        bufp->chgIData(oldp+250,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[30]),32);
        bufp->chgIData(oldp+251,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[31]),32);
    }
    bufp->chgBit(oldp+252,(vlSelf->clk_i));
    bufp->chgBit(oldp+253,(vlSelf->rst_i));
    bufp->chgBit(oldp+254,(vlSelf->halt_o));
    bufp->chgIData(oldp+255,(((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ce_wire)
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
    bufp->chgBit(oldp+256,(((~ (IData)(vlSelf->rst_i)) 
                            & (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req))));
    bufp->chgBit(oldp+257,(((~ (IData)(vlSelf->rst_i)) 
                            & (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__device_sel_req))));
    bufp->chgBit(oldp+258,((1U & (~ (IData)(vlSelf->rst_i)))));
    bufp->chgIData(oldp+259,((vlSymsp->TOP__test_top.__PVT__device_req
                              [0U] ? ((vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                       [(0x1ffffcU 
                                         & vlSymsp->TOP__test_top.__PVT__device_addr
                                         [0U])] << 0x18U) 
                                      | ((vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                          [(0x1fffffU 
                                            & ((IData)(1U) 
                                               + (0x1ffffcU 
                                                  & vlSymsp->TOP__test_top.__PVT__device_addr
                                                  [0U])))] 
                                          << 0x10U) 
                                         | ((vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                             [(0x1fffffU 
                                               & ((IData)(2U) 
                                                  + 
                                                  (0x1ffffcU 
                                                   & vlSymsp->TOP__test_top.__PVT__device_addr
                                                   [0U])))] 
                                             << 8U) 
                                            | vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                            [(0x1fffffU 
                                              & ((IData)(3U) 
                                                 + 
                                                 (0x1ffffcU 
                                                  & vlSymsp->TOP__test_top.__PVT__device_addr
                                                  [0U])))])))
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
}

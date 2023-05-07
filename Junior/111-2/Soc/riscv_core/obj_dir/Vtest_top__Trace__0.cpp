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
    VlWide<3>/*95:0*/ __Vtemp_h6e03a674__0;
    VlWide<3>/*95:0*/ __Vtemp_h210f4419__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgIData(oldp+0,(vlSymsp->TOP__test_top__regfile0.__PVT__i),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgCData(oldp+1,(vlSymsp->TOP__test_top.__PVT__ctrl_stall_o),6);
        bufp->chgBit(oldp+2,(vlSymsp->TOP__test_top.__PVT__exe_jump_enable_o));
        bufp->chgIData(oldp+3,(vlSymsp->TOP__test_top.__PVT__exe_jump_addr_o),32);
        bufp->chgIData(oldp+4,(vlSymsp->TOP__test_top.__PVT__id_inst_o),32);
        bufp->chgIData(oldp+5,((((((IData)(vlSymsp->TOP__test_top.__PVT__id_reg1_re_o) 
                                   & (IData)(vlSymsp->TOP__test_top.__PVT__exe_reg_we_o)) 
                                  & (0U != (IData)(vlSymsp->TOP__test_top.__PVT__id_reg1_addr_o))) 
                                 & ((IData)(vlSymsp->TOP__test_top.__PVT__exe_reg_waddr_o) 
                                    == (IData)(vlSymsp->TOP__test_top.__PVT__id_reg1_addr_o)))
                                 ? vlSymsp->TOP__test_top.__PVT__exe_reg_wdata_o
                                 : (((((IData)(vlSymsp->TOP__test_top.__PVT__id_reg1_re_o) 
                                       & (IData)(vlSymsp->TOP__test_top.__PVT__mem_reg_we_o)) 
                                      & (0U != (IData)(vlSymsp->TOP__test_top.__PVT__id_reg1_addr_o))) 
                                     & ((IData)(vlSymsp->TOP__test_top.__PVT__mem_reg_waddr_o) 
                                        == (IData)(vlSymsp->TOP__test_top.__PVT__id_reg1_addr_o)))
                                     ? vlSymsp->TOP__test_top.__PVT__mem_reg_wdata_o
                                     : vlSymsp->TOP__test_top.__PVT__id0__DOT__op1_o_final))),32);
        bufp->chgIData(oldp+6,((((((IData)(vlSymsp->TOP__test_top.__PVT__id_reg2_re_o) 
                                   & (IData)(vlSymsp->TOP__test_top.__PVT__exe_reg_we_o)) 
                                  & (0U != (IData)(vlSymsp->TOP__test_top.__PVT__id_reg2_addr_o))) 
                                 & ((IData)(vlSymsp->TOP__test_top.__PVT__exe_reg_waddr_o) 
                                    == (IData)(vlSymsp->TOP__test_top.__PVT__id_reg2_addr_o)))
                                 ? vlSymsp->TOP__test_top.__PVT__exe_reg_wdata_o
                                 : (((((IData)(vlSymsp->TOP__test_top.__PVT__id_reg2_re_o) 
                                       & (IData)(vlSymsp->TOP__test_top.__PVT__mem_reg_we_o)) 
                                      & (0U != (IData)(vlSymsp->TOP__test_top.__PVT__id_reg2_addr_o))) 
                                     & ((IData)(vlSymsp->TOP__test_top.__PVT__mem_reg_waddr_o) 
                                        == (IData)(vlSymsp->TOP__test_top.__PVT__id_reg2_addr_o)))
                                     ? vlSymsp->TOP__test_top.__PVT__mem_reg_wdata_o
                                     : vlSymsp->TOP__test_top.__PVT__id0__DOT__op2_o_final))),32);
        bufp->chgBit(oldp+7,(vlSymsp->TOP__test_top.__PVT__id_reg_we_o));
        bufp->chgCData(oldp+8,(vlSymsp->TOP__test_top.__PVT__id_reg_waddr_o),5);
        bufp->chgCData(oldp+9,(vlSymsp->TOP__test_top.__PVT__id_reg1_addr_o),5);
        bufp->chgCData(oldp+10,(vlSymsp->TOP__test_top.__PVT__id_reg2_addr_o),5);
        bufp->chgBit(oldp+11,(vlSymsp->TOP__test_top.__PVT__id_reg1_re_o));
        bufp->chgBit(oldp+12,(vlSymsp->TOP__test_top.__PVT__id_reg2_re_o));
        bufp->chgIData(oldp+13,(vlSymsp->TOP__test_top__regfile0.__PVT__rdata1_o),32);
        bufp->chgIData(oldp+14,(vlSymsp->TOP__test_top__regfile0.__PVT__rdata2_o),32);
        bufp->chgCData(oldp+15,(vlSymsp->TOP__test_top.__PVT__exe_reg_waddr_o),5);
        bufp->chgBit(oldp+16,(vlSymsp->TOP__test_top.__PVT__exe_reg_we_o));
        bufp->chgIData(oldp+17,(vlSymsp->TOP__test_top.__PVT__exe_reg_wdata_o),32);
        bufp->chgIData(oldp+18,(vlSymsp->TOP__test_top.__PVT__exe_mem_addr_o),32);
        bufp->chgIData(oldp+19,(vlSymsp->TOP__test_top.__PVT__exe_mem_data_o),32);
        bufp->chgBit(oldp+20,(vlSymsp->TOP__test_top.__PVT__exe_mem_we_o));
        bufp->chgCData(oldp+21,(vlSymsp->TOP__test_top.__PVT__exe_mem_op_o),4);
        bufp->chgBit(oldp+22,(vlSymsp->TOP__test_top.__PVT__exe_stallreq_o));
        bufp->chgCData(oldp+23,(vlSymsp->TOP__test_top.__PVT__mem_reg_waddr_o),5);
        bufp->chgBit(oldp+24,(vlSymsp->TOP__test_top.__PVT__mem_reg_we_o));
        bufp->chgIData(oldp+25,(vlSymsp->TOP__test_top.__PVT__mem_reg_wdata_o),32);
        bufp->chgIData(oldp+26,(vlSymsp->TOP__test_top.__PVT__mem_ram_addr_o),32);
        bufp->chgBit(oldp+27,(vlSymsp->TOP__test_top.__PVT__mem_ram_w_request_o));
        bufp->chgIData(oldp+28,(vlSymsp->TOP__test_top.__PVT__mem_ram_data_o),32);
        bufp->chgIData(oldp+29,(vlSymsp->TOP__test_top__data_ram0.__PVT__data_o),32);
        bufp->chgIData(oldp+30,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__a_o),32);
        bufp->chgIData(oldp+31,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__b_o),32);
        bufp->chgBit(oldp+32,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__mult_req_o));
        bufp->chgBit(oldp+33,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__div_req_o));
        bufp->chgBit(oldp+34,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__is_div_q_i));
        bufp->chgQData(oldp+35,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__invert_result),64);
        bufp->chgIData(oldp+37,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__invert_result_div),32);
        bufp->chgBit(oldp+38,((0U == vlSymsp->TOP__test_top.__PVT__exe0__DOT__a_o)));
        bufp->chgBit(oldp+39,((0U == vlSymsp->TOP__test_top.__PVT__exe0__DOT__b_o)));
        bufp->chgCData(oldp+40,(((0U == (IData)(vlSymsp->TOP__test_top.__PVT__exe0__DOT__div0__DOT__S))
                                  ? ((IData)(vlSymsp->TOP__test_top.__PVT__exe0__DOT__div_req_o)
                                      ? (((0U == vlSymsp->TOP__test_top.__PVT__exe0__DOT__a_o) 
                                          | (0U == vlSymsp->TOP__test_top.__PVT__exe0__DOT__b_o))
                                          ? 3U : 1U)
                                      : 0U) : ((1U 
                                                == (IData)(vlSymsp->TOP__test_top.__PVT__exe0__DOT__div0__DOT__S))
                                                ? (
                                                   (0U 
                                                    != (IData)(vlSymsp->TOP__test_top.__PVT__exe0__DOT__div0__DOT__cnt))
                                                    ? 1U
                                                    : 3U)
                                                : 0U))),3);
        bufp->chgBit(oldp+41,((1U & (~ (IData)((0U 
                                                != vlSymsp->TOP__test_top.__PVT__exe0__DOT__a_o))))));
        bufp->chgBit(oldp+42,((1U & (~ (IData)((0U 
                                                != vlSymsp->TOP__test_top.__PVT__exe0__DOT__b_o))))));
        bufp->chgCData(oldp+43,(((0U == (IData)(vlSymsp->TOP__test_top.__PVT__exe0__DOT__mul0__DOT__S))
                                  ? ((1U & ((~ (IData)(
                                                       (0U 
                                                        != vlSymsp->TOP__test_top.__PVT__exe0__DOT__a_o))) 
                                            | (~ (IData)(
                                                         (0U 
                                                          != vlSymsp->TOP__test_top.__PVT__exe0__DOT__b_o)))))
                                      ? 3U : ((IData)(vlSymsp->TOP__test_top.__PVT__exe0__DOT__mult_ready_i)
                                               ? 0U
                                               : 1U))
                                  : ((1U == (IData)(vlSymsp->TOP__test_top.__PVT__exe0__DOT__mul0__DOT__S))
                                      ? ((0U != (IData)(vlSymsp->TOP__test_top.__PVT__exe0__DOT__mul0__DOT__cnt))
                                          ? 1U : 3U)
                                      : 0U))),3);
        bufp->chgIData(oldp+44,(vlSymsp->TOP__test_top.__PVT__id0__DOT__op1_o_final),32);
        bufp->chgIData(oldp+45,(vlSymsp->TOP__test_top.__PVT__id0__DOT__op2_o_final),32);
        bufp->chgIData(oldp+46,(((IData)(vlSymsp->TOP__test_top.id0__DOT__inst_type_r__DOT____VdfgExtracted_he1154c64__0)
                                  ? vlSymsp->TOP__test_top__regfile0.__PVT__rdata1_o
                                  : 0U)),32);
        bufp->chgIData(oldp+47,(((IData)(vlSymsp->TOP__test_top.id0__DOT__inst_type_r__DOT____VdfgExtracted_he1154c64__0)
                                  ? vlSymsp->TOP__test_top__regfile0.__PVT__rdata2_o
                                  : 0U)),32);
        bufp->chgIData(oldp+48,((0x1ffffcU & vlSymsp->TOP__test_top.__PVT__mem_ram_addr_o)),21);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+49,(vlSymsp->TOP__test_top.__PVT__mem_halt_o));
        bufp->chgIData(oldp+50,(vlSymsp->TOP__test_top.__PVT__pc_wire),32);
        bufp->chgBit(oldp+51,(vlSymsp->TOP__test_top.__PVT__ce_wire));
        bufp->chgIData(oldp+52,(vlSymsp->TOP__test_top.__PVT__if_id_inst_addr_o),32);
        bufp->chgIData(oldp+53,(vlSymsp->TOP__test_top.__PVT__if_id_inst_o),32);
        bufp->chgBit(oldp+54,(((IData)(vlSymsp->TOP__test_top.__PVT__id_exe_inst_is_load_o) 
                               & (((0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                             >> 0xfU)) 
                                   == (IData)(vlSymsp->TOP__test_top.__PVT__id_exe_rd_o)) 
                                  | ((0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                               >> 0x14U)) 
                                     == (IData)(vlSymsp->TOP__test_top.__PVT__id_exe_rd_o))))));
        bufp->chgBit(oldp+55,(vlSymsp->TOP__test_top.__PVT__id_exe_inst_is_load_o));
        bufp->chgCData(oldp+56,(vlSymsp->TOP__test_top.__PVT__id_exe_rd_o),5);
        bufp->chgIData(oldp+57,(vlSymsp->TOP__test_top.__PVT__id_exe_op1_o),32);
        bufp->chgIData(oldp+58,(vlSymsp->TOP__test_top.__PVT__id_exe_op2_o),32);
        bufp->chgBit(oldp+59,(vlSymsp->TOP__test_top.__PVT__id_exe_reg_we_o));
        bufp->chgCData(oldp+60,(vlSymsp->TOP__test_top.__PVT__id_exe_reg_waddr_o),5);
        bufp->chgIData(oldp+61,(vlSymsp->TOP__test_top.__PVT__id_exe_inst_o),32);
        bufp->chgIData(oldp+62,(vlSymsp->TOP__test_top.__PVT__id_exe_inst_addr_o),32);
        bufp->chgCData(oldp+63,(vlSymsp->TOP__test_top.__PVT__exe_mem_reg_waddr_o),5);
        bufp->chgBit(oldp+64,(vlSymsp->TOP__test_top.__PVT__exe_mem_reg_we_o));
        bufp->chgIData(oldp+65,(vlSymsp->TOP__test_top.__PVT__exe_mem_reg_wdata_o),32);
        bufp->chgIData(oldp+66,(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_addr_o),32);
        bufp->chgIData(oldp+67,(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_data_o),32);
        bufp->chgBit(oldp+68,(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_we_o));
        bufp->chgCData(oldp+69,(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o),4);
        bufp->chgCData(oldp+70,(vlSymsp->TOP__test_top.__PVT__mem_wb_reg_waddr_o),5);
        bufp->chgBit(oldp+71,(vlSymsp->TOP__test_top.__PVT__mem_wb_reg_we_o));
        bufp->chgIData(oldp+72,(vlSymsp->TOP__test_top.__PVT__mem_wb_reg_wdata_o),32);
        bufp->chgCData(oldp+73,((0x7fU & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)),7);
        bufp->chgCData(oldp+74,((7U & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                       >> 0xcU))),3);
        bufp->chgCData(oldp+75,((vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                 >> 0x19U)),7);
        bufp->chgBit(oldp+76,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__isType_r));
        bufp->chgBit(oldp+77,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__isType_m));
        bufp->chgIData(oldp+78,((((- (IData)((vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                              >> 0x1fU))) 
                                  << 0xcU) | (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                              >> 0x14U))),32);
        bufp->chgIData(oldp+79,((((- (IData)((vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                              >> 0x1fU))) 
                                  << 0xcU) | ((0xfe0U 
                                               & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                  >> 0x14U)) 
                                              | (0x1fU 
                                                 & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                    >> 7U))))),32);
        bufp->chgBit(oldp+80,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__op1_eq_op2));
        bufp->chgIData(oldp+81,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__div_result_i),32);
        bufp->chgBit(oldp+82,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__mult_ready_i));
        bufp->chgBit(oldp+83,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__div_ready_i));
        bufp->chgQData(oldp+84,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__mult_result_i),64);
        bufp->chgBit(oldp+86,((vlSymsp->TOP__test_top.__PVT__id_exe_op1_o 
                               >> 0x1fU)));
        bufp->chgBit(oldp+87,((vlSymsp->TOP__test_top.__PVT__id_exe_op2_o 
                               >> 0x1fU)));
        bufp->chgBit(oldp+88,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__signed_adjust));
        bufp->chgBit(oldp+89,((1U & (~ (IData)((0U 
                                                != (IData)(vlSymsp->TOP__test_top.__PVT__exe0__DOT__div0__DOT__cnt)))))));
        bufp->chgIData(oldp+90,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__div0__DOT__reg32),32);
        bufp->chgWData(oldp+91,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__div0__DOT__result),65);
        bufp->chgCData(oldp+94,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__div0__DOT__cnt),6);
        bufp->chgIData(oldp+95,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__div0__DOT__result[0U]),32);
        bufp->chgIData(oldp+96,(((vlSymsp->TOP__test_top.__PVT__exe0__DOT__div0__DOT__result[2U] 
                                  << 0x1fU) | (vlSymsp->TOP__test_top.__PVT__exe0__DOT__div0__DOT__result[1U] 
                                               >> 1U))),32);
        bufp->chgCData(oldp+97,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__div0__DOT__S),3);
        bufp->chgBit(oldp+98,((vlSymsp->TOP__test_top.__PVT__exe0__DOT__div0__DOT__result[1U] 
                               >= vlSymsp->TOP__test_top.__PVT__exe0__DOT__div0__DOT__reg32)));
        bufp->chgQData(oldp+99,((0x1ffffffffULL & ((QData)((IData)(
                                                                   vlSymsp->TOP__test_top.__PVT__exe0__DOT__div0__DOT__result[1U])) 
                                                   - (QData)((IData)(vlSymsp->TOP__test_top.__PVT__exe0__DOT__div0__DOT__reg32))))),33);
        __Vtemp_h6e03a674__0[0U] = vlSymsp->TOP__test_top.__PVT__exe0__DOT__div0__DOT__result[0U];
        __Vtemp_h6e03a674__0[1U] = (IData)((0x1ffffffffULL 
                                            & ((QData)((IData)(
                                                               vlSymsp->TOP__test_top.__PVT__exe0__DOT__div0__DOT__result[1U])) 
                                               - (QData)((IData)(vlSymsp->TOP__test_top.__PVT__exe0__DOT__div0__DOT__reg32)))));
        __Vtemp_h6e03a674__0[2U] = (IData)(((0x1ffffffffULL 
                                             & ((QData)((IData)(
                                                                vlSymsp->TOP__test_top.__PVT__exe0__DOT__div0__DOT__result[1U])) 
                                                - (QData)((IData)(vlSymsp->TOP__test_top.__PVT__exe0__DOT__div0__DOT__reg32)))) 
                                            >> 0x20U));
        bufp->chgWData(oldp+101,(__Vtemp_h6e03a674__0),65);
        bufp->chgBit(oldp+104,((1U & (~ (IData)((0U 
                                                 != (IData)(vlSymsp->TOP__test_top.__PVT__exe0__DOT__mul0__DOT__cnt)))))));
        bufp->chgIData(oldp+105,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__mul0__DOT__reg32),32);
        bufp->chgWData(oldp+106,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__mul0__DOT__result),65);
        bufp->chgCData(oldp+109,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__mul0__DOT__cnt),6);
        bufp->chgCData(oldp+110,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__mul0__DOT__S),3);
        bufp->chgBit(oldp+111,((1U & vlSymsp->TOP__test_top.__PVT__exe0__DOT__mul0__DOT__result[0U])));
        bufp->chgIData(oldp+112,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__mul0__DOT__result[1U]),32);
        bufp->chgQData(oldp+113,((0x1ffffffffULL & 
                                  ((QData)((IData)(vlSymsp->TOP__test_top.__PVT__exe0__DOT__mul0__DOT__reg32)) 
                                   + (QData)((IData)(
                                                     vlSymsp->TOP__test_top.__PVT__exe0__DOT__mul0__DOT__result[1U]))))),33);
        __Vtemp_h210f4419__0[0U] = vlSymsp->TOP__test_top.__PVT__exe0__DOT__mul0__DOT__result[0U];
        __Vtemp_h210f4419__0[1U] = (IData)((0x1ffffffffULL 
                                            & ((QData)((IData)(vlSymsp->TOP__test_top.__PVT__exe0__DOT__mul0__DOT__reg32)) 
                                               + (QData)((IData)(
                                                                 vlSymsp->TOP__test_top.__PVT__exe0__DOT__mul0__DOT__result[1U])))));
        __Vtemp_h210f4419__0[2U] = (IData)(((0x1ffffffffULL 
                                             & ((QData)((IData)(vlSymsp->TOP__test_top.__PVT__exe0__DOT__mul0__DOT__reg32)) 
                                                + (QData)((IData)(
                                                                  vlSymsp->TOP__test_top.__PVT__exe0__DOT__mul0__DOT__result[1U])))) 
                                            >> 0x20U));
        bufp->chgWData(oldp+115,(__Vtemp_h210f4419__0),65);
        bufp->chgCData(oldp+118,((0x7fU & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)),7);
        bufp->chgCData(oldp+119,((0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                           >> 7U))),5);
        bufp->chgCData(oldp+120,((0x1fU & ((0x2000U 
                                            & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                            ? (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                               >> 0xfU)
                                            : ((0x1000U 
                                                & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                ? (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                   >> 0xfU)
                                                : (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                   >> 0xfU))))),5);
        bufp->chgCData(oldp+121,(((IData)(vlSymsp->TOP__test_top.id0__DOT__inst_type_r__DOT____VdfgExtracted_he1154c64__0)
                                   ? (0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                               >> 0xfU))
                                   : 0U)),5);
        bufp->chgCData(oldp+122,(((IData)(vlSymsp->TOP__test_top.id0__DOT__inst_type_r__DOT____VdfgExtracted_he1154c64__0)
                                   ? (0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                               >> 0x14U))
                                   : 0U)),5);
        bufp->chgBit(oldp+123,(vlSymsp->TOP__test_top.__PVT__id0__DOT__r_reg1_re_o));
        bufp->chgBit(oldp+124,(vlSymsp->TOP__test_top.__PVT__id0__DOT__r_reg2_re_o));
        bufp->chgIData(oldp+125,(((0x2000U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                   ? (((- (IData)((vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                   >> 0x1fU))) 
                                       << 0xcU) | (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                   >> 0x14U))
                                   : ((0x1000U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                       ? (0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                   >> 0x14U))
                                       : (((- (IData)(
                                                      (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                       >> 0x1fU))) 
                                           << 0xcU) 
                                          | (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                             >> 0x14U))))),32);
        bufp->chgBit(oldp+126,(vlSymsp->TOP__test_top.__PVT__id0__DOT__r_reg_we_o));
        bufp->chgCData(oldp+127,((0x1fU & ((0x2000U 
                                            & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                            ? (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                               >> 7U)
                                            : ((0x1000U 
                                                & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                                ? (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                   >> 7U)
                                                : (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                   >> 7U))))),5);
        bufp->chgCData(oldp+128,(((IData)(vlSymsp->TOP__test_top.id0__DOT__inst_type_r__DOT____VdfgExtracted_he1154c64__0)
                                   ? (0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                               >> 7U))
                                   : 0U)),5);
        bufp->chgCData(oldp+129,((0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                           >> 0xfU))),5);
        bufp->chgCData(oldp+130,((0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                           >> 0x14U))),5);
        bufp->chgCData(oldp+131,((7U & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                        >> 0xcU))),3);
        bufp->chgCData(oldp+132,((vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                  >> 0x19U)),7);
        bufp->chgBit(oldp+133,(((0x33U == (0x7fU & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)) 
                                & ((0U == (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                           >> 0x19U)) 
                                   | (0x20U == (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                >> 0x19U))))));
        bufp->chgBit(oldp+134,((IData)((0x2000033U 
                                        == (0xfe00007fU 
                                            & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)))));
        bufp->chgCData(oldp+135,((3U & vlSymsp->TOP__test_top.__PVT__exe_mem_mem_addr_o)),2);
        bufp->chgIData(oldp+136,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[0]),32);
        bufp->chgIData(oldp+137,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[1]),32);
        bufp->chgIData(oldp+138,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[2]),32);
        bufp->chgIData(oldp+139,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[3]),32);
        bufp->chgIData(oldp+140,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[4]),32);
        bufp->chgIData(oldp+141,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[5]),32);
        bufp->chgIData(oldp+142,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[6]),32);
        bufp->chgIData(oldp+143,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[7]),32);
        bufp->chgIData(oldp+144,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[8]),32);
        bufp->chgIData(oldp+145,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[9]),32);
        bufp->chgIData(oldp+146,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[10]),32);
        bufp->chgIData(oldp+147,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[11]),32);
        bufp->chgIData(oldp+148,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[12]),32);
        bufp->chgIData(oldp+149,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[13]),32);
        bufp->chgIData(oldp+150,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[14]),32);
        bufp->chgIData(oldp+151,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[15]),32);
        bufp->chgIData(oldp+152,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[16]),32);
        bufp->chgIData(oldp+153,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[17]),32);
        bufp->chgIData(oldp+154,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[18]),32);
        bufp->chgIData(oldp+155,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[19]),32);
        bufp->chgIData(oldp+156,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[20]),32);
        bufp->chgIData(oldp+157,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[21]),32);
        bufp->chgIData(oldp+158,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[22]),32);
        bufp->chgIData(oldp+159,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[23]),32);
        bufp->chgIData(oldp+160,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[24]),32);
        bufp->chgIData(oldp+161,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[25]),32);
        bufp->chgIData(oldp+162,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[26]),32);
        bufp->chgIData(oldp+163,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[27]),32);
        bufp->chgIData(oldp+164,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[28]),32);
        bufp->chgIData(oldp+165,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[29]),32);
        bufp->chgIData(oldp+166,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[30]),32);
        bufp->chgIData(oldp+167,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[31]),32);
        bufp->chgIData(oldp+168,((0x1ffffcU & vlSymsp->TOP__test_top.__PVT__pc_wire)),21);
    }
    bufp->chgBit(oldp+169,(vlSelf->rst_i));
    bufp->chgBit(oldp+170,(vlSelf->clk_i));
    bufp->chgBit(oldp+171,(vlSelf->halt_o));
    bufp->chgIData(oldp+172,(((IData)(vlSymsp->TOP__test_top.__PVT__ce_wire)
                               ? ((vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                   [(0x1ffffcU & vlSymsp->TOP__test_top.__PVT__pc_wire)] 
                                   << 0x18U) | ((vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                                 [(0x1fffffU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      (0x1ffffcU 
                                                       & vlSymsp->TOP__test_top.__PVT__pc_wire)))] 
                                                 << 0x10U) 
                                                | ((vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                                    [
                                                    (0x1fffffU 
                                                     & ((IData)(2U) 
                                                        + 
                                                        (0x1ffffcU 
                                                         & vlSymsp->TOP__test_top.__PVT__pc_wire)))] 
                                                    << 8U) 
                                                   | vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                                   [
                                                   (0x1fffffU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       (0x1ffffcU 
                                                        & vlSymsp->TOP__test_top.__PVT__pc_wire)))])))
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

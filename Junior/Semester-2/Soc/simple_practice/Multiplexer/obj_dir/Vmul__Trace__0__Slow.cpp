// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmul__Syms.h"


VL_ATTR_COLD void Vmul___024root__trace_init_sub__TOP__0(Vmul___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+17,"clk_i", false,-1);
    tracep->declBit(c+18,"rst_i", false,-1);
    tracep->declBus(c+19,"a_i", false,-1, 31,0);
    tracep->declBus(c+20,"b_i", false,-1, 31,0);
    tracep->declBit(c+21,"req_i", false,-1);
    tracep->declBit(c+22,"ready_o", false,-1);
    tracep->declBus(c+23,"result_o", false,-1, 31,0);
    tracep->pushNamePrefix("mul ");
    tracep->declBus(c+27,"XLEN", false,-1, 31,0);
    tracep->declBit(c+17,"clk_i", false,-1);
    tracep->declBit(c+18,"rst_i", false,-1);
    tracep->declBus(c+19,"a_i", false,-1, 31,0);
    tracep->declBus(c+20,"b_i", false,-1, 31,0);
    tracep->declBit(c+21,"req_i", false,-1);
    tracep->declBit(c+22,"ready_o", false,-1);
    tracep->declBus(c+23,"result_o", false,-1, 31,0);
    tracep->declBit(c+24,"is_a_zero", false,-1);
    tracep->declBit(c+25,"is_b_zero", false,-1);
    tracep->declBus(c+19,"op_a", false,-1, 31,0);
    tracep->declBus(c+20,"op_b", false,-1, 31,0);
    tracep->declBit(c+1,"is_calc_done", false,-1);
    tracep->declBus(c+2,"reg32", false,-1, 31,0);
    tracep->declArray(c+3,"result", false,-1, 64,0);
    tracep->declBus(c+6,"cnt", false,-1, 5,0);
    tracep->declBus(c+28,"S_IDLE", false,-1, 2,0);
    tracep->declBus(c+29,"S_CALC", false,-1, 2,0);
    tracep->declBus(c+30,"S_DONE", false,-1, 2,0);
    tracep->declBus(c+7,"S", false,-1, 2,0);
    tracep->declBus(c+26,"S_nxt", false,-1, 2,0);
    tracep->declBit(c+8,"mul_add", false,-1);
    tracep->declQuad(c+9,"adder_opa", false,-1, 32,0);
    tracep->declQuad(c+11,"adder_opb", false,-1, 32,0);
    tracep->declQuad(c+13,"adder_tmp", false,-1, 32,0);
    tracep->declQuad(c+15,"result_tmp", false,-1, 63,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vmul___024root__trace_init_top(Vmul___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul___024root__trace_init_top\n"); );
    // Body
    Vmul___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vmul___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vmul___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vmul___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vmul___024root__trace_register(Vmul___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vmul___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vmul___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vmul___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vmul___024root__trace_full_sub_0(Vmul___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vmul___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul___024root__trace_full_top_0\n"); );
    // Init
    Vmul___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmul___024root*>(voidSelf);
    Vmul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vmul___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vmul___024root__trace_full_sub_0(Vmul___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vmul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,((1U & (~ (IData)((0U != (IData)(vlSelf->mul__DOT__cnt)))))));
    bufp->fullIData(oldp+2,(vlSelf->mul__DOT__reg32),32);
    bufp->fullWData(oldp+3,(vlSelf->mul__DOT__result),65);
    bufp->fullCData(oldp+6,(vlSelf->mul__DOT__cnt),6);
    bufp->fullCData(oldp+7,(vlSelf->mul__DOT__S),3);
    bufp->fullBit(oldp+8,((1U & vlSelf->mul__DOT__result[0U])));
    bufp->fullQData(oldp+9,((QData)((IData)(vlSelf->mul__DOT__reg32))),33);
    bufp->fullQData(oldp+11,((QData)((IData)(vlSelf->mul__DOT__result[1U]))),33);
    bufp->fullQData(oldp+13,((0x1ffffffffULL & ((QData)((IData)(vlSelf->mul__DOT__reg32)) 
                                                + (QData)((IData)(
                                                                  vlSelf->mul__DOT__result[1U]))))),33);
    bufp->fullQData(oldp+15,(((((QData)((IData)(vlSelf->mul__DOT__reg32)) 
                                + (QData)((IData)(vlSelf->mul__DOT__result[1U]))) 
                               << 0x1fU) | (QData)((IData)(
                                                           (vlSelf->mul__DOT__result[0U] 
                                                            >> 1U))))),64);
    bufp->fullBit(oldp+17,(vlSelf->clk_i));
    bufp->fullBit(oldp+18,(vlSelf->rst_i));
    bufp->fullIData(oldp+19,(vlSelf->a_i),32);
    bufp->fullIData(oldp+20,(vlSelf->b_i),32);
    bufp->fullBit(oldp+21,(vlSelf->req_i));
    bufp->fullBit(oldp+22,(vlSelf->ready_o));
    bufp->fullIData(oldp+23,(vlSelf->result_o),32);
    bufp->fullBit(oldp+24,((1U & (~ (IData)((0U != vlSelf->a_i))))));
    bufp->fullBit(oldp+25,((1U & (~ (IData)((0U != vlSelf->b_i))))));
    bufp->fullCData(oldp+26,(((0U == (IData)(vlSelf->mul__DOT__S))
                               ? ((1U & ((~ (IData)(
                                                    (0U 
                                                     != vlSelf->a_i))) 
                                         | (~ (IData)(
                                                      (0U 
                                                       != vlSelf->b_i)))))
                                   ? 3U : 1U) : ((1U 
                                                  == (IData)(vlSelf->mul__DOT__S))
                                                  ? 
                                                 ((0U 
                                                   != (IData)(vlSelf->mul__DOT__cnt))
                                                   ? 1U
                                                   : 3U)
                                                  : 0U))),3);
    bufp->fullIData(oldp+27,(0x20U),32);
    bufp->fullCData(oldp+28,(0U),3);
    bufp->fullCData(oldp+29,(1U),3);
    bufp->fullCData(oldp+30,(3U),3);
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmul__Syms.h"


void Vmul___024root__trace_chg_sub_0(Vmul___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vmul___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul___024root__trace_chg_top_0\n"); );
    // Init
    Vmul___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmul___024root*>(voidSelf);
    Vmul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vmul___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vmul___024root__trace_chg_sub_0(Vmul___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vmul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,((1U & (~ (IData)((0U != (IData)(vlSelf->mul__DOT__cnt)))))));
        bufp->chgIData(oldp+1,(vlSelf->mul__DOT__reg32),32);
        bufp->chgWData(oldp+2,(vlSelf->mul__DOT__result),65);
        bufp->chgCData(oldp+5,(vlSelf->mul__DOT__cnt),6);
        bufp->chgCData(oldp+6,(vlSelf->mul__DOT__S),3);
        bufp->chgBit(oldp+7,((1U & vlSelf->mul__DOT__result[0U])));
        bufp->chgQData(oldp+8,((QData)((IData)(vlSelf->mul__DOT__reg32))),33);
        bufp->chgQData(oldp+10,((QData)((IData)(vlSelf->mul__DOT__result[1U]))),33);
        bufp->chgQData(oldp+12,((0x1ffffffffULL & ((QData)((IData)(vlSelf->mul__DOT__reg32)) 
                                                   + (QData)((IData)(
                                                                     vlSelf->mul__DOT__result[1U]))))),33);
        bufp->chgQData(oldp+14,(((((QData)((IData)(vlSelf->mul__DOT__reg32)) 
                                   + (QData)((IData)(
                                                     vlSelf->mul__DOT__result[1U]))) 
                                  << 0x1fU) | (QData)((IData)(
                                                              (vlSelf->mul__DOT__result[0U] 
                                                               >> 1U))))),64);
    }
    bufp->chgBit(oldp+16,(vlSelf->clk_i));
    bufp->chgBit(oldp+17,(vlSelf->rst_i));
    bufp->chgIData(oldp+18,(vlSelf->a_i),32);
    bufp->chgIData(oldp+19,(vlSelf->b_i),32);
    bufp->chgBit(oldp+20,(vlSelf->req_i));
    bufp->chgBit(oldp+21,(vlSelf->ready_o));
    bufp->chgIData(oldp+22,(vlSelf->result_o),32);
    bufp->chgBit(oldp+23,((1U & (~ (IData)((0U != vlSelf->a_i))))));
    bufp->chgBit(oldp+24,((1U & (~ (IData)((0U != vlSelf->b_i))))));
    bufp->chgCData(oldp+25,(((0U == (IData)(vlSelf->mul__DOT__S))
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
}

void Vmul___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul___024root__trace_cleanup\n"); );
    // Init
    Vmul___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmul___024root*>(voidSelf);
    Vmul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VALU_1__Syms.h"


void VALU_1___024root__trace_chg_sub_0(VALU_1___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VALU_1___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_1___024root__trace_chg_top_0\n"); );
    // Init
    VALU_1___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VALU_1___024root*>(voidSelf);
    VALU_1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VALU_1___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VALU_1___024root__trace_chg_sub_0(VALU_1___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VALU_1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_1___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelf->a));
    bufp->chgBit(oldp+1,(vlSelf->b));
    bufp->chgBit(oldp+2,(vlSelf->c_in));
    bufp->chgCData(oldp+3,(vlSelf->sel),2);
    bufp->chgBit(oldp+4,(vlSelf->result));
    bufp->chgBit(oldp+5,(vlSelf->c_out));
    bufp->chgBit(oldp+6,(vlSelf->ALU_1__DOT__out_0));
    bufp->chgBit(oldp+7,(((IData)(vlSelf->a) | (IData)(vlSelf->b))));
    bufp->chgBit(oldp+8,(((IData)(vlSelf->ALU_1__DOT__add__DOT__s1) 
                          ^ (IData)(vlSelf->c_in))));
    bufp->chgBit(oldp+9,(vlSelf->ALU_1__DOT__add__DOT__s1));
    bufp->chgBit(oldp+10,(((IData)(vlSelf->ALU_1__DOT__add__DOT__s1) 
                           & (IData)(vlSelf->c_in))));
}

void VALU_1___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_1___024root__trace_cleanup\n"); );
    // Init
    VALU_1___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VALU_1___024root*>(voidSelf);
    VALU_1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}

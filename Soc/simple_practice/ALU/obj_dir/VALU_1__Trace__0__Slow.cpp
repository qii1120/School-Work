// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VALU_1__Syms.h"


VL_ATTR_COLD void VALU_1___024root__trace_init_sub__TOP__0(VALU_1___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VALU_1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_1___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"a", false,-1);
    tracep->declBit(c+2,"b", false,-1);
    tracep->declBit(c+3,"c_in", false,-1);
    tracep->declBus(c+4,"sel", false,-1, 1,0);
    tracep->declBit(c+5,"result", false,-1);
    tracep->declBit(c+6,"c_out", false,-1);
    tracep->pushNamePrefix("ALU_1 ");
    tracep->declBit(c+1,"a", false,-1);
    tracep->declBit(c+2,"b", false,-1);
    tracep->declBit(c+3,"c_in", false,-1);
    tracep->declBus(c+4,"sel", false,-1, 1,0);
    tracep->declBit(c+5,"result", false,-1);
    tracep->declBit(c+6,"c_out", false,-1);
    tracep->declBit(c+7,"out_0", false,-1);
    tracep->declBit(c+8,"out_1", false,-1);
    tracep->declBit(c+9,"out_2", false,-1);
    tracep->pushNamePrefix("add ");
    tracep->declBit(c+1,"a", false,-1);
    tracep->declBit(c+2,"b", false,-1);
    tracep->declBit(c+3,"c_in", false,-1);
    tracep->declBit(c+9,"sum", false,-1);
    tracep->declBit(c+6,"c_out", false,-1);
    tracep->declBit(c+10,"s1", false,-1);
    tracep->declBit(c+7,"c1", false,-1);
    tracep->declBit(c+11,"c2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux ");
    tracep->declBit(c+7,"a_i", false,-1);
    tracep->declBit(c+8,"b_i", false,-1);
    tracep->declBit(c+9,"c_i", false,-1);
    tracep->declBus(c+4,"sel_i", false,-1, 1,0);
    tracep->declBit(c+5,"q_o", false,-1);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VALU_1___024root__trace_init_top(VALU_1___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VALU_1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_1___024root__trace_init_top\n"); );
    // Body
    VALU_1___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VALU_1___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VALU_1___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VALU_1___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VALU_1___024root__trace_register(VALU_1___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VALU_1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_1___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VALU_1___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VALU_1___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VALU_1___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VALU_1___024root__trace_full_sub_0(VALU_1___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VALU_1___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_1___024root__trace_full_top_0\n"); );
    // Init
    VALU_1___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VALU_1___024root*>(voidSelf);
    VALU_1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VALU_1___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VALU_1___024root__trace_full_sub_0(VALU_1___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VALU_1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_1___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->a));
    bufp->fullBit(oldp+2,(vlSelf->b));
    bufp->fullBit(oldp+3,(vlSelf->c_in));
    bufp->fullCData(oldp+4,(vlSelf->sel),2);
    bufp->fullBit(oldp+5,(vlSelf->result));
    bufp->fullBit(oldp+6,(vlSelf->c_out));
    bufp->fullBit(oldp+7,(vlSelf->ALU_1__DOT__out_0));
    bufp->fullBit(oldp+8,(((IData)(vlSelf->a) | (IData)(vlSelf->b))));
    bufp->fullBit(oldp+9,(((IData)(vlSelf->ALU_1__DOT__add__DOT__s1) 
                           ^ (IData)(vlSelf->c_in))));
    bufp->fullBit(oldp+10,(vlSelf->ALU_1__DOT__add__DOT__s1));
    bufp->fullBit(oldp+11,(((IData)(vlSelf->ALU_1__DOT__add__DOT__s1) 
                            & (IData)(vlSelf->c_in))));
}

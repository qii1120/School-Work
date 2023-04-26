// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VALU_4__Syms.h"


void VALU_4___024root__trace_chg_sub_0(VALU_4___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VALU_4___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_4___024root__trace_chg_top_0\n"); );
    // Init
    VALU_4___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VALU_4___024root*>(voidSelf);
    VALU_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VALU_4___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VALU_4___024root__trace_chg_sub_0(VALU_4___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VALU_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_4___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->ALU_4__DOT__out_0));
        bufp->chgBit(oldp+1,(vlSelf->ALU_4__DOT__out_1));
        bufp->chgBit(oldp+2,(vlSelf->ALU_4__DOT__out_2));
        bufp->chgBit(oldp+3,(vlSelf->ALU_4__DOT____Vcellout__op1____pinNumber5));
        bufp->chgBit(oldp+4,(vlSelf->ALU_4__DOT__op1__DOT__out_0));
        bufp->chgBit(oldp+5,(vlSelf->ALU_4__DOT__op1__DOT__add__DOT__s1));
        bufp->chgBit(oldp+6,(vlSelf->ALU_4__DOT____Vcellout__op2____pinNumber5));
        bufp->chgBit(oldp+7,(vlSelf->ALU_4__DOT__op2__DOT__out_0));
        bufp->chgBit(oldp+8,(((IData)(vlSelf->ALU_4__DOT__op2__DOT__add__DOT__s1) 
                              ^ (IData)(vlSelf->ALU_4__DOT__out_0))));
        bufp->chgBit(oldp+9,(vlSelf->ALU_4__DOT__op2__DOT__add__DOT__s1));
        bufp->chgBit(oldp+10,(((IData)(vlSelf->ALU_4__DOT__op2__DOT__add__DOT__s1) 
                               & (IData)(vlSelf->ALU_4__DOT__out_0))));
        bufp->chgBit(oldp+11,(vlSelf->ALU_4__DOT____Vcellout__op3____pinNumber5));
        bufp->chgBit(oldp+12,(vlSelf->ALU_4__DOT__op3__DOT__out_0));
        bufp->chgBit(oldp+13,(((IData)(vlSelf->ALU_4__DOT__op3__DOT__add__DOT__s1) 
                               ^ (IData)(vlSelf->ALU_4__DOT__out_1))));
        bufp->chgBit(oldp+14,(vlSelf->ALU_4__DOT__op3__DOT__add__DOT__s1));
        bufp->chgBit(oldp+15,(((IData)(vlSelf->ALU_4__DOT__op3__DOT__add__DOT__s1) 
                               & (IData)(vlSelf->ALU_4__DOT__out_1))));
        bufp->chgBit(oldp+16,(vlSelf->ALU_4__DOT____Vcellout__op4____pinNumber5));
        bufp->chgBit(oldp+17,(vlSelf->ALU_4__DOT__op4__DOT__out_0));
        bufp->chgBit(oldp+18,(((IData)(vlSelf->ALU_4__DOT__op4__DOT__add__DOT__s1) 
                               ^ (IData)(vlSelf->ALU_4__DOT__out_2))));
        bufp->chgBit(oldp+19,(vlSelf->ALU_4__DOT__op4__DOT__add__DOT__s1));
        bufp->chgBit(oldp+20,(((IData)(vlSelf->ALU_4__DOT__op4__DOT__add__DOT__s1) 
                               & (IData)(vlSelf->ALU_4__DOT__out_2))));
    }
    bufp->chgCData(oldp+21,(vlSelf->a),4);
    bufp->chgCData(oldp+22,(vlSelf->b),4);
    bufp->chgBit(oldp+23,(vlSelf->c_in));
    bufp->chgCData(oldp+24,(vlSelf->sel),2);
    bufp->chgCData(oldp+25,(vlSelf->result),4);
    bufp->chgBit(oldp+26,(vlSelf->c_out));
    bufp->chgBit(oldp+27,((1U & (IData)(vlSelf->a))));
    bufp->chgBit(oldp+28,((1U & (IData)(vlSelf->b))));
    bufp->chgBit(oldp+29,((1U & ((IData)(vlSelf->a) 
                                 | (IData)(vlSelf->b)))));
    bufp->chgBit(oldp+30,(((IData)(vlSelf->ALU_4__DOT__op1__DOT__add__DOT__s1) 
                           ^ (IData)(vlSelf->c_in))));
    bufp->chgBit(oldp+31,(((IData)(vlSelf->ALU_4__DOT__op1__DOT__add__DOT__s1) 
                           & (IData)(vlSelf->c_in))));
    bufp->chgBit(oldp+32,((1U & ((IData)(vlSelf->a) 
                                 >> 1U))));
    bufp->chgBit(oldp+33,((1U & ((IData)(vlSelf->b) 
                                 >> 1U))));
    bufp->chgBit(oldp+34,((1U & (((IData)(vlSelf->a) 
                                  | (IData)(vlSelf->b)) 
                                 >> 1U))));
    bufp->chgBit(oldp+35,((1U & ((IData)(vlSelf->a) 
                                 >> 2U))));
    bufp->chgBit(oldp+36,((1U & ((IData)(vlSelf->b) 
                                 >> 2U))));
    bufp->chgBit(oldp+37,((1U & (((IData)(vlSelf->a) 
                                  | (IData)(vlSelf->b)) 
                                 >> 2U))));
    bufp->chgBit(oldp+38,((1U & ((IData)(vlSelf->a) 
                                 >> 3U))));
    bufp->chgBit(oldp+39,((1U & ((IData)(vlSelf->b) 
                                 >> 3U))));
    bufp->chgBit(oldp+40,((1U & (((IData)(vlSelf->a) 
                                  | (IData)(vlSelf->b)) 
                                 >> 3U))));
}

void VALU_4___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_4___024root__trace_cleanup\n"); );
    // Init
    VALU_4___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VALU_4___024root*>(voidSelf);
    VALU_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}

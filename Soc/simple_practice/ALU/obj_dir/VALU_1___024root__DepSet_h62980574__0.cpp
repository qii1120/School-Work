// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VALU_1.h for the primary calling header

#include "verilated.h"

#include "VALU_1___024root.h"

VL_INLINE_OPT void VALU_1___024root___ico_sequent__TOP__0(VALU_1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU_1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_1___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->ALU_1__DOT__out_0 = ((IData)(vlSelf->a) 
                                 & (IData)(vlSelf->b));
    vlSelf->ALU_1__DOT__add__DOT__s1 = ((IData)(vlSelf->a) 
                                        ^ (IData)(vlSelf->b));
    vlSelf->c_out = (((IData)(vlSelf->ALU_1__DOT__add__DOT__s1) 
                      & (IData)(vlSelf->c_in)) ^ (IData)(vlSelf->ALU_1__DOT__out_0));
    vlSelf->result = ((0U == (IData)(vlSelf->sel)) ? (IData)(vlSelf->ALU_1__DOT__out_0)
                       : ((1U == (IData)(vlSelf->sel))
                           ? ((IData)(vlSelf->a) | (IData)(vlSelf->b))
                           : ((2U == (IData)(vlSelf->sel))
                               ? ((IData)(vlSelf->ALU_1__DOT__add__DOT__s1) 
                                  ^ (IData)(vlSelf->c_in))
                               : (IData)(vlSelf->ALU_1__DOT__out_0))));
}

void VALU_1___024root___eval_ico(VALU_1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU_1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_1___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        VALU_1___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void VALU_1___024root___eval_act(VALU_1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU_1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_1___024root___eval_act\n"); );
}

void VALU_1___024root___eval_nba(VALU_1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU_1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_1___024root___eval_nba\n"); );
}

void VALU_1___024root___eval_triggers__ico(VALU_1___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VALU_1___024root___dump_triggers__ico(VALU_1___024root* vlSelf);
#endif  // VL_DEBUG
void VALU_1___024root___eval_triggers__act(VALU_1___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VALU_1___024root___dump_triggers__act(VALU_1___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VALU_1___024root___dump_triggers__nba(VALU_1___024root* vlSelf);
#endif  // VL_DEBUG

void VALU_1___024root___eval(VALU_1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU_1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_1___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<0> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        VALU_1___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                VALU_1___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("ALU_1.v", 1, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            VALU_1___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            VALU_1___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    VALU_1___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("ALU_1.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                VALU_1___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                VALU_1___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("ALU_1.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            VALU_1___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void VALU_1___024root___eval_debug_assertions(VALU_1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU_1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_1___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->a & 0xfeU))) {
        Verilated::overWidthError("a");}
    if (VL_UNLIKELY((vlSelf->b & 0xfeU))) {
        Verilated::overWidthError("b");}
    if (VL_UNLIKELY((vlSelf->c_in & 0xfeU))) {
        Verilated::overWidthError("c_in");}
    if (VL_UNLIKELY((vlSelf->sel & 0xfcU))) {
        Verilated::overWidthError("sel");}
}
#endif  // VL_DEBUG

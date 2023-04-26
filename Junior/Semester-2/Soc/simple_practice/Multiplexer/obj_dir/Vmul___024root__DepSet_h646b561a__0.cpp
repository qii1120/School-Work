// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmul.h for the primary calling header

#include "verilated.h"

#include "Vmul___024root.h"

VL_INLINE_OPT void Vmul___024root___ico_sequent__TOP__0(Vmul___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->mul__DOT__S_nxt = ((0U == (IData)(vlSelf->mul__DOT__S))
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
                                                   : 0U));
}

void Vmul___024root___eval_ico(Vmul___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        Vmul___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vmul___024root___eval_act(Vmul___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vmul___024root___nba_sequent__TOP__0(Vmul___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul___024root___nba_sequent__TOP__0\n"); );
    // Init
    VlWide<3>/*64:0*/ __Vdly__mul__DOT__result;
    VL_ZERO_W(65, __Vdly__mul__DOT__result);
    CData/*5:0*/ __Vdly__mul__DOT__cnt;
    __Vdly__mul__DOT__cnt = 0;
    // Body
    __Vdly__mul__DOT__cnt = vlSelf->mul__DOT__cnt;
    __Vdly__mul__DOT__result[0U] = vlSelf->mul__DOT__result[0U];
    __Vdly__mul__DOT__result[1U] = vlSelf->mul__DOT__result[1U];
    __Vdly__mul__DOT__result[2U] = vlSelf->mul__DOT__result[2U];
    vlSelf->result_o = ((3U == (IData)(vlSelf->mul__DOT__S))
                         ? vlSelf->mul__DOT__result[0U]
                         : vlSelf->result_o);
    if (((0U == (IData)(vlSelf->mul__DOT__S)) & (IData)(vlSelf->req_i))) {
        if ((1U & (~ ((~ (IData)((0U != vlSelf->a_i))) 
                      | (~ (IData)((0U != vlSelf->b_i))))))) {
            __Vdly__mul__DOT__cnt = 0x1fU;
            vlSelf->mul__DOT__reg32 = vlSelf->a_i;
        }
        __Vdly__mul__DOT__result[0U] = ((1U & ((~ (IData)(
                                                          (0U 
                                                           != vlSelf->a_i))) 
                                               | (~ (IData)(
                                                            (0U 
                                                             != vlSelf->b_i)))))
                                         ? 0U : vlSelf->b_i);
        __Vdly__mul__DOT__result[1U] = 0U;
        __Vdly__mul__DOT__result[2U] = 0U;
    } else if ((1U == (IData)(vlSelf->mul__DOT__S))) {
        __Vdly__mul__DOT__cnt = (0x3fU & ((IData)(vlSelf->mul__DOT__cnt) 
                                          - (IData)(1U)));
        if (vlSelf->mul__DOT__mul_add) {
            __Vdly__mul__DOT__result[0U] = (IData)(vlSelf->mul__DOT__result_tmp);
            __Vdly__mul__DOT__result[1U] = (IData)(
                                                   (vlSelf->mul__DOT__result_tmp 
                                                    >> 0x20U));
        } else {
            __Vdly__mul__DOT__result[0U] = (IData)(
                                                   (((QData)((IData)(
                                                                     vlSelf->mul__DOT__result[2U])) 
                                                     << 0x3fU) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->mul__DOT__result[1U])) 
                                                        << 0x1fU) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->mul__DOT__result[0U])) 
                                                          >> 1U))));
            __Vdly__mul__DOT__result[1U] = (IData)(
                                                   ((((QData)((IData)(
                                                                      vlSelf->mul__DOT__result[2U])) 
                                                      << 0x3fU) 
                                                     | (((QData)((IData)(
                                                                         vlSelf->mul__DOT__result[1U])) 
                                                         << 0x1fU) 
                                                        | ((QData)((IData)(
                                                                           vlSelf->mul__DOT__result[0U])) 
                                                           >> 1U))) 
                                                    >> 0x20U));
        }
        __Vdly__mul__DOT__result[2U] = 0U;
    }
    vlSelf->ready_o = (3U == (IData)(vlSelf->mul__DOT__S));
    vlSelf->mul__DOT__cnt = __Vdly__mul__DOT__cnt;
    vlSelf->mul__DOT__result[0U] = __Vdly__mul__DOT__result[0U];
    vlSelf->mul__DOT__result[1U] = __Vdly__mul__DOT__result[1U];
    vlSelf->mul__DOT__result[2U] = __Vdly__mul__DOT__result[2U];
    vlSelf->mul__DOT__mul_add = (1U & vlSelf->mul__DOT__result[0U]);
    vlSelf->mul__DOT__result_tmp = ((((QData)((IData)(vlSelf->mul__DOT__reg32)) 
                                      + (QData)((IData)(
                                                        vlSelf->mul__DOT__result[1U]))) 
                                     << 0x1fU) | (QData)((IData)(
                                                                 (vlSelf->mul__DOT__result[0U] 
                                                                  >> 1U))));
    vlSelf->mul__DOT__S = ((1U & ((IData)(vlSelf->rst_i) 
                                  | (~ (IData)(vlSelf->req_i))))
                            ? 0U : (IData)(vlSelf->mul__DOT__S_nxt));
    vlSelf->mul__DOT__S_nxt = ((0U == (IData)(vlSelf->mul__DOT__S))
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
                                                   : 0U));
}

void Vmul___024root___eval_nba(Vmul___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vmul___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vmul___024root___eval_triggers__ico(Vmul___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmul___024root___dump_triggers__ico(Vmul___024root* vlSelf);
#endif  // VL_DEBUG
void Vmul___024root___eval_triggers__act(Vmul___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmul___024root___dump_triggers__act(Vmul___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmul___024root___dump_triggers__nba(Vmul___024root* vlSelf);
#endif  // VL_DEBUG

void Vmul___024root___eval(Vmul___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vmul___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vmul___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("mul.v", 1, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vmul___024root___eval_ico(vlSelf);
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
            Vmul___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vmul___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("mul.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vmul___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vmul___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("mul.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vmul___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vmul___024root___eval_debug_assertions(Vmul___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk_i & 0xfeU))) {
        Verilated::overWidthError("clk_i");}
    if (VL_UNLIKELY((vlSelf->rst_i & 0xfeU))) {
        Verilated::overWidthError("rst_i");}
    if (VL_UNLIKELY((vlSelf->req_i & 0xfeU))) {
        Verilated::overWidthError("req_i");}
}
#endif  // VL_DEBUG

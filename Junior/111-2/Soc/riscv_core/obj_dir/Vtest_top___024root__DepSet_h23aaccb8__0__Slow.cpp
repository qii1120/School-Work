// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtest_top__Syms.h"
#include "Vtest_top___024root.h"

VL_ATTR_COLD void Vtest_top_test_top___eval_static__TOP__test_top(Vtest_top_test_top* vlSelf);

VL_ATTR_COLD void Vtest_top___024root___eval_static(Vtest_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_top___024root___eval_static\n"); );
    // Body
    Vtest_top_test_top___eval_static__TOP__test_top((&vlSymsp->TOP__test_top));
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vtest_top_test_top___eval_initial__TOP__test_top(Vtest_top_test_top* vlSelf);
VL_ATTR_COLD void Vtest_top_core_top___eval_initial__TOP__test_top__core_top0(Vtest_top_core_top* vlSelf);
VL_ATTR_COLD void Vtest_top_regfile___eval_initial__TOP__test_top__core_top0__regfile0(Vtest_top_regfile* vlSelf);

VL_ATTR_COLD void Vtest_top___024root___eval_initial(Vtest_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_top___024root___eval_initial\n"); );
    // Body
    Vtest_top_test_top___eval_initial__TOP__test_top((&vlSymsp->TOP__test_top));
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    Vtest_top_core_top___eval_initial__TOP__test_top__core_top0((&vlSymsp->TOP__test_top__core_top0));
    Vtest_top_regfile___eval_initial__TOP__test_top__core_top0__regfile0((&vlSymsp->TOP__test_top__core_top0__regfile0));
    vlSelf->__Vtrigrprev__TOP__clk_i = vlSelf->clk_i;
}

VL_ATTR_COLD void Vtest_top_test_top___eval_final__TOP__test_top(Vtest_top_test_top* vlSelf);

VL_ATTR_COLD void Vtest_top___024root___eval_final(Vtest_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_top___024root___eval_final\n"); );
    // Body
    Vtest_top_test_top___eval_final__TOP__test_top((&vlSymsp->TOP__test_top));
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtest_top___024root___dump_triggers__stl(Vtest_top___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtest_top___024root___eval_triggers__stl(Vtest_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_top___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.at(0U) = (0U == vlSelf->__VstlIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtest_top___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

void Vtest_top___024root___nba_sequent__TOP__0(Vtest_top___024root* vlSelf);
VL_ATTR_COLD void Vtest_top_core_top___stl_sequent__TOP__test_top__core_top0__0(Vtest_top_core_top* vlSelf);
VL_ATTR_COLD void Vtest_top_test_top___stl_sequent__TOP__test_top__0(Vtest_top_test_top* vlSelf);
void Vtest_top_regfile___ico_sequent__TOP__test_top__core_top0__regfile0__0(Vtest_top_regfile* vlSelf);
void Vtest_top_core_top___ico_sequent__TOP__test_top__core_top0__1(Vtest_top_core_top* vlSelf);
void Vtest_top_test_top___ico_sequent__TOP__test_top__1(Vtest_top_test_top* vlSelf);

VL_ATTR_COLD void Vtest_top___024root___eval_stl(Vtest_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_top___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vtest_top___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
        Vtest_top_core_top___stl_sequent__TOP__test_top__core_top0__0((&vlSymsp->TOP__test_top__core_top0));
        Vtest_top_test_top___stl_sequent__TOP__test_top__0((&vlSymsp->TOP__test_top));
        Vtest_top_regfile___ico_sequent__TOP__test_top__core_top0__regfile0__0((&vlSymsp->TOP__test_top__core_top0__regfile0));
        Vtest_top_core_top___ico_sequent__TOP__test_top__core_top0__1((&vlSymsp->TOP__test_top__core_top0));
        Vtest_top_test_top___ico_sequent__TOP__test_top__1((&vlSymsp->TOP__test_top));
    }
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmux_case.h for the primary calling header

#include "Vmux_case.h"
#include "Vmux_case__Syms.h"

//==========

void Vmux_case::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vmux_case::eval\n"); );
    Vmux_case__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vmux_case* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        vlSymsp->__Vm_activity = true;
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("mux_case.v", 1, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vmux_case::_eval_initial_loop(Vmux_case__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("mux_case.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vmux_case::_combo__TOP__1(Vmux_case__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux_case::_combo__TOP__1\n"); );
    Vmux_case* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->q_o = ((0U == (IData)(vlTOPp->sel_i)) ? (IData)(vlTOPp->a_i)
                    : ((1U == (IData)(vlTOPp->sel_i))
                        ? (IData)(vlTOPp->b_i) : ((2U 
                                                   == (IData)(vlTOPp->sel_i))
                                                   ? (IData)(vlTOPp->c_i)
                                                   : (IData)(vlTOPp->d_i))));
}

void Vmux_case::_eval(Vmux_case__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux_case::_eval\n"); );
    Vmux_case* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

VL_INLINE_OPT QData Vmux_case::_change_request(Vmux_case__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux_case::_change_request\n"); );
    Vmux_case* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vmux_case::_change_request_1(Vmux_case__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux_case::_change_request_1\n"); );
    Vmux_case* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vmux_case::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux_case::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((a_i & 0xfeU))) {
        Verilated::overWidthError("a_i");}
    if (VL_UNLIKELY((b_i & 0xfeU))) {
        Verilated::overWidthError("b_i");}
    if (VL_UNLIKELY((c_i & 0xfeU))) {
        Verilated::overWidthError("c_i");}
    if (VL_UNLIKELY((d_i & 0xfeU))) {
        Verilated::overWidthError("d_i");}
    if (VL_UNLIKELY((sel_i & 0xfcU))) {
        Verilated::overWidthError("sel_i");}
}
#endif  // VL_DEBUG

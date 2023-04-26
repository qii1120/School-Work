// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmux_case.h for the primary calling header

#include "Vmux_case.h"
#include "Vmux_case__Syms.h"

//==========

VL_CTOR_IMP(Vmux_case) {
    Vmux_case__Syms* __restrict vlSymsp = __VlSymsp = new Vmux_case__Syms(this, name());
    Vmux_case* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vmux_case::__Vconfigure(Vmux_case__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vmux_case::~Vmux_case() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vmux_case::_eval_initial(Vmux_case__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux_case::_eval_initial\n"); );
    Vmux_case* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vmux_case::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux_case::final\n"); );
    // Variables
    Vmux_case__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vmux_case* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vmux_case::_eval_settle(Vmux_case__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux_case::_eval_settle\n"); );
    Vmux_case* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void Vmux_case::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux_case::_ctor_var_reset\n"); );
    // Body
    a_i = VL_RAND_RESET_I(1);
    b_i = VL_RAND_RESET_I(1);
    c_i = VL_RAND_RESET_I(1);
    d_i = VL_RAND_RESET_I(1);
    sel_i = VL_RAND_RESET_I(2);
    q_o = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}

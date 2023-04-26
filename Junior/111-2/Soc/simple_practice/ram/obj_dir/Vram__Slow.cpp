// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vram.h for the primary calling header

#include "Vram.h"
#include "Vram__Syms.h"

//==========

VL_CTOR_IMP(Vram) {
    Vram__Syms* __restrict vlSymsp = __VlSymsp = new Vram__Syms(this, name());
    Vram* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vram::__Vconfigure(Vram__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vram::~Vram() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vram::_eval_initial(Vram__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram::_eval_initial\n"); );
    Vram* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk_i = vlTOPp->clk_i;
}

void Vram::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram::final\n"); );
    // Variables
    Vram__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vram* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vram::_eval_settle(Vram__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram::_eval_settle\n"); );
    Vram* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

void Vram::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram::_ctor_var_reset\n"); );
    // Body
    clk_i = VL_RAND_RESET_I(1);
    ce_i = VL_RAND_RESET_I(1);
    we_i = VL_RAND_RESET_I(1);
    addr_i = VL_RAND_RESET_I(32);
    data_i = VL_RAND_RESET_I(32);
    data_o = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
            ram__DOT__mem[__Vi0] = VL_RAND_RESET_I(8);
    }}
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}

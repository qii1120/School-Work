// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrom.h for the primary calling header

#include "Vrom.h"
#include "Vrom__Syms.h"

//==========

VL_CTOR_IMP(Vrom) {
    Vrom__Syms* __restrict vlSymsp = __VlSymsp = new Vrom__Syms(this, name());
    Vrom* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vrom::__Vconfigure(Vrom__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vrom::~Vrom() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vrom::_initial__TOP__1(Vrom__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrom::_initial__TOP__1\n"); );
    Vrom* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    VL_READMEM_N(true, 8, 32, 0, std::string("rom.data")
                 , vlTOPp->rom__DOT__mem, 0, ~0ULL);
}

void Vrom::_eval_initial(Vrom__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrom::_eval_initial\n"); );
    Vrom* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlTOPp->__Vm_traceActivity[0U] = 1U;
}

void Vrom::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrom::final\n"); );
    // Variables
    Vrom__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vrom* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vrom::_eval_settle(Vrom__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrom::_eval_settle\n"); );
    Vrom* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__2(vlSymsp);
}

void Vrom::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrom::_ctor_var_reset\n"); );
    // Body
    ce_i = VL_RAND_RESET_I(1);
    addr_i = VL_RAND_RESET_I(32);
    inst_o = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
            rom__DOT__mem[__Vi0] = VL_RAND_RESET_I(8);
    }}
    { int __Vi0=0; for (; __Vi0<1; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}

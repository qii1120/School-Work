// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrom.h for the primary calling header

#include "Vrom.h"
#include "Vrom__Syms.h"

//==========

void Vrom::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vrom::eval\n"); );
    Vrom__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vrom* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("rom.v", 1, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vrom::_eval_initial_loop(Vrom__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("rom.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vrom::_combo__TOP__2(Vrom__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrom::_combo__TOP__2\n"); );
    Vrom* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->inst_o = ((IData)(vlTOPp->ce_i) ? ((vlTOPp->rom__DOT__mem
                                                [(0x1cU 
                                                  & vlTOPp->addr_i)] 
                                                << 0x18U) 
                                               | ((vlTOPp->rom__DOT__mem
                                                   [
                                                   (0x1fU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       (0x1cU 
                                                        & vlTOPp->addr_i)))] 
                                                   << 0x10U) 
                                                  | ((vlTOPp->rom__DOT__mem
                                                      [
                                                      (0x1fU 
                                                       & ((IData)(2U) 
                                                          + 
                                                          (0x1cU 
                                                           & vlTOPp->addr_i)))] 
                                                      << 8U) 
                                                     | vlTOPp->rom__DOT__mem
                                                     [
                                                     (0x1fU 
                                                      & ((IData)(3U) 
                                                         + 
                                                         (0x1cU 
                                                          & vlTOPp->addr_i)))])))
                       : 0U);
}

void Vrom::_eval(Vrom__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrom::_eval\n"); );
    Vrom* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__2(vlSymsp);
}

VL_INLINE_OPT QData Vrom::_change_request(Vrom__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrom::_change_request\n"); );
    Vrom* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vrom::_change_request_1(Vrom__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrom::_change_request_1\n"); );
    Vrom* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vrom::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrom::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((ce_i & 0xfeU))) {
        Verilated::overWidthError("ce_i");}
}
#endif  // VL_DEBUG

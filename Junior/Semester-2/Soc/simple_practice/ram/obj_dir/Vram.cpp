// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vram.h for the primary calling header

#include "Vram.h"
#include "Vram__Syms.h"

//==========

void Vram::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vram::eval\n"); );
    Vram__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vram* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("ram.v", 1, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vram::_eval_initial_loop(Vram__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("ram.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vram::_sequent__TOP__1(Vram__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram::_sequent__TOP__1\n"); );
    Vram* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*4:0*/ __Vdlyvdim0__ram__DOT__mem__v0;
    CData/*7:0*/ __Vdlyvval__ram__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__ram__DOT__mem__v0;
    CData/*4:0*/ __Vdlyvdim0__ram__DOT__mem__v1;
    CData/*7:0*/ __Vdlyvval__ram__DOT__mem__v1;
    CData/*4:0*/ __Vdlyvdim0__ram__DOT__mem__v2;
    CData/*7:0*/ __Vdlyvval__ram__DOT__mem__v2;
    CData/*4:0*/ __Vdlyvdim0__ram__DOT__mem__v3;
    CData/*7:0*/ __Vdlyvval__ram__DOT__mem__v3;
    // Body
    __Vdlyvset__ram__DOT__mem__v0 = 0U;
    if (((IData)(vlTOPp->ce_i) & (IData)(vlTOPp->we_i))) {
        __Vdlyvval__ram__DOT__mem__v0 = (0xffU & (vlTOPp->data_i 
                                                  >> 0x18U));
        __Vdlyvset__ram__DOT__mem__v0 = 1U;
        __Vdlyvdim0__ram__DOT__mem__v0 = (0x1cU & vlTOPp->addr_i);
        __Vdlyvval__ram__DOT__mem__v1 = (0xffU & (vlTOPp->data_i 
                                                  >> 0x10U));
        __Vdlyvdim0__ram__DOT__mem__v1 = (0x1fU & ((IData)(1U) 
                                                   + 
                                                   (0x1cU 
                                                    & vlTOPp->addr_i)));
        __Vdlyvval__ram__DOT__mem__v2 = (0xffU & (vlTOPp->data_i 
                                                  >> 8U));
        __Vdlyvdim0__ram__DOT__mem__v2 = (0x1fU & ((IData)(2U) 
                                                   + 
                                                   (0x1cU 
                                                    & vlTOPp->addr_i)));
        __Vdlyvval__ram__DOT__mem__v3 = (0xffU & vlTOPp->data_i);
        __Vdlyvdim0__ram__DOT__mem__v3 = (0x1fU & ((IData)(3U) 
                                                   + 
                                                   (0x1cU 
                                                    & vlTOPp->addr_i)));
    }
    if (__Vdlyvset__ram__DOT__mem__v0) {
        vlTOPp->ram__DOT__mem[__Vdlyvdim0__ram__DOT__mem__v0] 
            = __Vdlyvval__ram__DOT__mem__v0;
        vlTOPp->ram__DOT__mem[__Vdlyvdim0__ram__DOT__mem__v1] 
            = __Vdlyvval__ram__DOT__mem__v1;
        vlTOPp->ram__DOT__mem[__Vdlyvdim0__ram__DOT__mem__v2] 
            = __Vdlyvval__ram__DOT__mem__v2;
        vlTOPp->ram__DOT__mem[__Vdlyvdim0__ram__DOT__mem__v3] 
            = __Vdlyvval__ram__DOT__mem__v3;
    }
}

VL_INLINE_OPT void Vram::_settle__TOP__2(Vram__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram::_settle__TOP__2\n"); );
    Vram* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->data_o = ((IData)(vlTOPp->ce_i) ? ((vlTOPp->ram__DOT__mem
                                                [(0x1cU 
                                                  & vlTOPp->addr_i)] 
                                                << 0x18U) 
                                               | ((vlTOPp->ram__DOT__mem
                                                   [
                                                   (0x1fU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       (0x1cU 
                                                        & vlTOPp->addr_i)))] 
                                                   << 0x10U) 
                                                  | ((vlTOPp->ram__DOT__mem
                                                      [
                                                      (0x1fU 
                                                       & ((IData)(2U) 
                                                          + 
                                                          (0x1cU 
                                                           & vlTOPp->addr_i)))] 
                                                      << 8U) 
                                                     | vlTOPp->ram__DOT__mem
                                                     [
                                                     (0x1fU 
                                                      & ((IData)(3U) 
                                                         + 
                                                         (0x1cU 
                                                          & vlTOPp->addr_i)))])))
                       : 0U);
}

void Vram::_eval(Vram__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram::_eval\n"); );
    Vram* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i)))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
        vlTOPp->__Vm_traceActivity[1U] = 1U;
    }
    vlTOPp->_settle__TOP__2(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clk_i = vlTOPp->clk_i;
}

VL_INLINE_OPT QData Vram::_change_request(Vram__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram::_change_request\n"); );
    Vram* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vram::_change_request_1(Vram__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram::_change_request_1\n"); );
    Vram* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vram::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk_i & 0xfeU))) {
        Verilated::overWidthError("clk_i");}
    if (VL_UNLIKELY((ce_i & 0xfeU))) {
        Verilated::overWidthError("ce_i");}
    if (VL_UNLIKELY((we_i & 0xfeU))) {
        Verilated::overWidthError("we_i");}
}
#endif  // VL_DEBUG

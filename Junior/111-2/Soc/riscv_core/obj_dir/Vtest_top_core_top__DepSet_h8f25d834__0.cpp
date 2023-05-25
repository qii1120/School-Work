// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtest_top_core_top.h"

VL_INLINE_OPT void Vtest_top_core_top___nba_comb__TOP__test_top__core_top0__0(Vtest_top_core_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtest_top_core_top___nba_comb__TOP__test_top__core_top0__0\n"); );
    // Body
    vlSelf->__PVT__ctrl_pc_o = ((0U != vlSelf->__PVT__mem_inst_addr_o)
                                 ? vlSelf->__PVT__mem_inst_addr_o
                                 : vlSelf->__PVT__ctrl0__DOT__current_pc);
    if ((1U & (~ ((IData)(vlSelf->__PVT__interrupt_ctrl0__DOT__S) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelf->__PVT__interrupt_ctrl0__DOT__S))) {
            if ((1U & (~ ((IData)(vlSelf->__PVT__interrupt_ctrl0__DOT__S) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__interrupt_ctrl0__DOT__S)))) {
                    vlSelf->__PVT__int_ctrl_epc_o = 
                        ((IData)(vlSelf->__PVT__interrupt_ctrl0__DOT__exception)
                          ? (vlSelf->__PVT__ctrl_pc_o 
                             - (IData)(4U)) : vlSelf->__PVT__ctrl_pc_o);
                }
            }
        }
    }
}

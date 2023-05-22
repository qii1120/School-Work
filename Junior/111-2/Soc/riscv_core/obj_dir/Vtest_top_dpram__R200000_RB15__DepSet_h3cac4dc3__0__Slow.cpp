// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtest_top_dpram__R200000_RB15.h"

VL_ATTR_COLD void Vtest_top_dpram__R200000_RB15___ctor_var_reset(Vtest_top_dpram__R200000_RB15* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtest_top_dpram__R200000_RB15___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ce_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__addr_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__we_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__data_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__data_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__inst_ce_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pc_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__inst_o = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 2097152; ++__Vi0) {
        vlSelf->__PVT__mem[__Vi0] = VL_RAND_RESET_I(8);
    }
}

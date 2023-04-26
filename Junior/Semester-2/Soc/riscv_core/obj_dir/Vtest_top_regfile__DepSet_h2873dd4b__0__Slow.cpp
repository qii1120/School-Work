// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtest_top_regfile.h"

VL_ATTR_COLD void Vtest_top_regfile___eval_initial__TOP__test_top__regfile0(Vtest_top_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtest_top_regfile___eval_initial__TOP__test_top__regfile0\n"); );
    // Body
    vlSelf->__PVT__regs[0U] = 0U;
    vlSelf->__PVT__regs[1U] = 0U;
    vlSelf->__PVT__regs[2U] = 0U;
    vlSelf->__PVT__regs[3U] = 0U;
    vlSelf->__PVT__regs[4U] = 0U;
    vlSelf->__PVT__regs[5U] = 0U;
    vlSelf->__PVT__regs[6U] = 0U;
    vlSelf->__PVT__regs[7U] = 0U;
    vlSelf->__PVT__regs[8U] = 0U;
    vlSelf->__PVT__regs[9U] = 0U;
    vlSelf->__PVT__regs[0xaU] = 0U;
    vlSelf->__PVT__regs[0xbU] = 0U;
    vlSelf->__PVT__regs[0xcU] = 0U;
    vlSelf->__PVT__regs[0xdU] = 0U;
    vlSelf->__PVT__regs[0xeU] = 0U;
    vlSelf->__PVT__regs[0xfU] = 0U;
    vlSelf->__PVT__regs[0x10U] = 0U;
    vlSelf->__PVT__regs[0x11U] = 0U;
    vlSelf->__PVT__regs[0x12U] = 0U;
    vlSelf->__PVT__regs[0x13U] = 0U;
    vlSelf->__PVT__regs[0x14U] = 0U;
    vlSelf->__PVT__regs[0x15U] = 0U;
    vlSelf->__PVT__regs[0x16U] = 0U;
    vlSelf->__PVT__regs[0x17U] = 0U;
    vlSelf->__PVT__regs[0x18U] = 0U;
    vlSelf->__PVT__regs[0x19U] = 0U;
    vlSelf->__PVT__regs[0x1aU] = 0U;
    vlSelf->__PVT__regs[0x1bU] = 0U;
    vlSelf->__PVT__regs[0x1cU] = 0U;
    vlSelf->__PVT__regs[0x1dU] = 0U;
    vlSelf->__PVT__regs[0x1eU] = 0U;
    vlSelf->__PVT__regs[0x1fU] = 0U;
    vlSelf->__PVT__i = 0x20U;
}

VL_ATTR_COLD void Vtest_top_regfile___ctor_var_reset(Vtest_top_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtest_top_regfile___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__we_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__waddr_i = VL_RAND_RESET_I(5);
    vlSelf->__PVT__wdata_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__re1_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__raddr1_i = VL_RAND_RESET_I(5);
    vlSelf->__PVT__re2_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__raddr2_i = VL_RAND_RESET_I(5);
    vlSelf->__PVT__rdata1_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rdata2_o = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__regs[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__PVT__i = VL_RAND_RESET_I(32);
}

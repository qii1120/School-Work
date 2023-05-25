// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtest_top_test_top.h"

VL_ATTR_COLD void Vtest_top_test_top___eval_static__TOP__test_top(Vtest_top_test_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtest_top_test_top___eval_static__TOP__test_top\n"); );
    // Body
    vlSelf->__PVT__console0__DOT__sim_finish = 0U;
}

VL_ATTR_COLD void Vtest_top_test_top___eval_initial__TOP__test_top(Vtest_top_test_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtest_top_test_top___eval_initial__TOP__test_top\n"); );
    // Body
    vlSelf->__PVT__cfg_device_addr_mask[1U] = 0xffe00000U;
    vlSelf->__PVT__cfg_device_addr_mask[2U] = 0xfff00000U;
    vlSelf->__PVT__cfg_device_addr_mask[0U] = 0xffff0000U;
    vlSelf->__PVT__cfg_device_addr_base[1U] = 0U;
    vlSelf->__PVT__cfg_device_addr_base[2U] = 0x200000U;
    vlSelf->__PVT__cfg_device_addr_base[0U] = 0x2000000U;
    vlSelf->__PVT__console0__DOT__log_fd = VL_FOPEN_NN(
                                                       std::string{"./log/console.log"}
                                                       , 
                                                       std::string{"w"});
}

VL_ATTR_COLD void Vtest_top_test_top___eval_final__TOP__test_top(Vtest_top_test_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtest_top_test_top___eval_final__TOP__test_top\n"); );
    // Body
    VL_FCLOSE_I(vlSelf->__PVT__console0__DOT__log_fd); vlSelf->__PVT__console0__DOT__log_fd = 0;
}

VL_ATTR_COLD void Vtest_top_test_top___ctor_var_reset(Vtest_top_test_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtest_top_test_top___ctor_var_reset\n"); );
    // Body
    vlSelf->clk_i = VL_RAND_RESET_I(1);
    vlSelf->rst_i = VL_RAND_RESET_I(1);
    vlSelf->halt_o = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__host_req[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__host_gnt[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__host_addr[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__host_we[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__host_wdata[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__host_rdata[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__device_req[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__device_addr[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__device_we[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__device_wdata[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__device_rdata[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__cfg_device_addr_base[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__cfg_device_addr_mask[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__PVT__halt_from_console = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vcellinp__u_bus__cfg_device_addr_mask[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vcellinp__u_bus__cfg_device_addr_base[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vcellinp__u_bus__device_rdata_i[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vcellout__u_bus__device_wdata_o[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vcellout__u_bus__device_we_o[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vcellout__u_bus__device_addr_o[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vcellout__u_bus__device_req_o[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__Vcellout__u_bus__host_rdata_o[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__Vcellinp__u_bus__host_wdata_i[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__Vcellinp__u_bus__host_we_i[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__Vcellinp__u_bus__host_addr_i[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__Vcellout__u_bus__host_gnt_o[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__Vcellinp__u_bus__host_req_i[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->__Vcellout__clint0__data_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_bus__DOT__host_sel_req = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_bus__DOT__device_sel_req = VL_RAND_RESET_I(2);
    vlSelf->__PVT__u_bus__DOT__device_sel_resp = VL_RAND_RESET_I(2);
    vlSelf->u_bus__DOT____Vlvbound_hc1afd9fe__0 = VL_RAND_RESET_I(1);
    vlSelf->u_bus__DOT____Vlvbound_he4603d23__0 = VL_RAND_RESET_I(1);
    vlSelf->u_bus__DOT____Vlvbound_ha032ea3b__0 = VL_RAND_RESET_I(32);
    vlSelf->u_bus__DOT____Vlvbound_h637ba314__0 = VL_RAND_RESET_I(32);
    vlSelf->u_bus__DOT____Vlvbound_ha22eafa2__0 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__clint0__DOT__mtime_mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__clint0__DOT__mtimecmp_mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__PVT__clint0__DOT__msip_mem = VL_RAND_RESET_I(32);
    vlSelf->__PVT__clint0__DOT__mtimecmp = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__clint0__DOT__carry = VL_RAND_RESET_I(1);
    vlSelf->__PVT__console0__DOT__sim_finish = VL_RAND_RESET_I(3);
    vlSelf->__PVT__console0__DOT__log_fd = 0;
}

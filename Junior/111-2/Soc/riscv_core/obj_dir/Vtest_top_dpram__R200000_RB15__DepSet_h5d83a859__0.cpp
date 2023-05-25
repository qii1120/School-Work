// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtest_top__Syms.h"
#include "Vtest_top_dpram__R200000_RB15.h"

VL_INLINE_OPT void Vtest_top_dpram__R200000_RB15___nba_sequent__TOP__test_top__data_ram0__0(Vtest_top_dpram__R200000_RB15* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtest_top_dpram__R200000_RB15___nba_sequent__TOP__test_top__data_ram0__0\n"); );
    // Init
    IData/*20:0*/ __Vdlyvdim0__mem__v0;
    __Vdlyvdim0__mem__v0 = 0;
    CData/*7:0*/ __Vdlyvval__mem__v0;
    __Vdlyvval__mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__mem__v0;
    __Vdlyvset__mem__v0 = 0;
    IData/*20:0*/ __Vdlyvdim0__mem__v1;
    __Vdlyvdim0__mem__v1 = 0;
    CData/*7:0*/ __Vdlyvval__mem__v1;
    __Vdlyvval__mem__v1 = 0;
    IData/*20:0*/ __Vdlyvdim0__mem__v2;
    __Vdlyvdim0__mem__v2 = 0;
    CData/*7:0*/ __Vdlyvval__mem__v2;
    __Vdlyvval__mem__v2 = 0;
    IData/*20:0*/ __Vdlyvdim0__mem__v3;
    __Vdlyvdim0__mem__v3 = 0;
    CData/*7:0*/ __Vdlyvval__mem__v3;
    __Vdlyvval__mem__v3 = 0;
    // Body
    __Vdlyvset__mem__v0 = 0U;
    if ((vlSymsp->TOP__test_top.__PVT__device_req[1U] 
         & vlSymsp->TOP__test_top.__PVT__device_we[1U])) {
        __Vdlyvval__mem__v0 = (vlSymsp->TOP__test_top.__PVT__device_wdata
                               [1U] >> 0x18U);
        __Vdlyvset__mem__v0 = 1U;
        __Vdlyvdim0__mem__v0 = (0x1ffffcU & vlSymsp->TOP__test_top.__PVT__device_addr
                                [1U]);
        __Vdlyvval__mem__v1 = (0xffU & (vlSymsp->TOP__test_top.__PVT__device_wdata
                                        [1U] >> 0x10U));
        __Vdlyvdim0__mem__v1 = (0x1fffffU & ((IData)(1U) 
                                             + (0x1ffffcU 
                                                & vlSymsp->TOP__test_top.__PVT__device_addr
                                                [1U])));
        __Vdlyvval__mem__v2 = (0xffU & (vlSymsp->TOP__test_top.__PVT__device_wdata
                                        [1U] >> 8U));
        __Vdlyvdim0__mem__v2 = (0x1fffffU & ((IData)(2U) 
                                             + (0x1ffffcU 
                                                & vlSymsp->TOP__test_top.__PVT__device_addr
                                                [1U])));
        __Vdlyvval__mem__v3 = (0xffU & vlSymsp->TOP__test_top.__PVT__device_wdata
                               [1U]);
        __Vdlyvdim0__mem__v3 = (0x1fffffU & ((IData)(3U) 
                                             + (0x1ffffcU 
                                                & vlSymsp->TOP__test_top.__PVT__device_addr
                                                [1U])));
    }
    if (__Vdlyvset__mem__v0) {
        vlSelf->__PVT__mem[__Vdlyvdim0__mem__v0] = __Vdlyvval__mem__v0;
        vlSelf->__PVT__mem[__Vdlyvdim0__mem__v1] = __Vdlyvval__mem__v1;
        vlSelf->__PVT__mem[__Vdlyvdim0__mem__v2] = __Vdlyvval__mem__v2;
        vlSelf->__PVT__mem[__Vdlyvdim0__mem__v3] = __Vdlyvval__mem__v3;
    }
}

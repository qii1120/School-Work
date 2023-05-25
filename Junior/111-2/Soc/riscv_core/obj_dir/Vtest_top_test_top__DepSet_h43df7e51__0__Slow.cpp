// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtest_top__Syms.h"
#include "Vtest_top_test_top.h"

VL_ATTR_COLD void Vtest_top_test_top___stl_sequent__TOP__test_top__0(Vtest_top_test_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtest_top_test_top___stl_sequent__TOP__test_top__0\n"); );
    // Init
    CData/*0:0*/ u_bus__DOT____Vlvbound_he6887619__0;
    u_bus__DOT____Vlvbound_he6887619__0 = 0;
    // Body
    vlSelf->__PVT__clint0__DOT__carry = (0xffffffffU 
                                         == vlSelf->__PVT__clint0__DOT__mtime_mem
                                         [0U]);
    vlSelf->__PVT__clint0__DOT__mtimecmp = (((QData)((IData)(
                                                             vlSelf->__PVT__clint0__DOT__mtimecmp_mem
                                                             [1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->__PVT__clint0__DOT__mtimecmp_mem
                                                              [0U])));
    vlSelf->__Vcellinp__u_bus__cfg_device_addr_mask[0U] 
        = vlSelf->__PVT__cfg_device_addr_mask[0U];
    vlSelf->__Vcellinp__u_bus__cfg_device_addr_mask[1U] 
        = vlSelf->__PVT__cfg_device_addr_mask[1U];
    vlSelf->__Vcellinp__u_bus__cfg_device_addr_mask[2U] 
        = vlSelf->__PVT__cfg_device_addr_mask[2U];
    vlSelf->__Vcellinp__u_bus__cfg_device_addr_base[0U] 
        = vlSelf->__PVT__cfg_device_addr_base[0U];
    vlSelf->__Vcellinp__u_bus__cfg_device_addr_base[1U] 
        = vlSelf->__PVT__cfg_device_addr_base[1U];
    vlSelf->__Vcellinp__u_bus__cfg_device_addr_base[2U] 
        = vlSelf->__PVT__cfg_device_addr_base[2U];
    vlSelf->__PVT__host_req[0U] = (1U & (~ (IData)(vlSymsp->TOP.rst_i)));
    vlSelf->__Vcellinp__u_bus__host_req_i[0U] = vlSelf->__PVT__host_req
        [0U];
    vlSelf->__PVT__u_bus__DOT__host_sel_req = 0U;
    if (vlSelf->__Vcellinp__u_bus__host_req_i[0U]) {
        vlSelf->__PVT__u_bus__DOT__host_sel_req = 0U;
    }
    vlSelf->__Vcellout__u_bus__host_gnt_o[0U] = 0U;
    if ((0U >= (IData)(vlSelf->__PVT__u_bus__DOT__host_sel_req))) {
        u_bus__DOT____Vlvbound_he6887619__0 = (1U & 
                                               vlSelf->__Vcellinp__u_bus__host_req_i
                                               [vlSelf->__PVT__u_bus__DOT__host_sel_req]);
        vlSelf->__Vcellout__u_bus__host_gnt_o[vlSelf->__PVT__u_bus__DOT__host_sel_req] 
            = u_bus__DOT____Vlvbound_he6887619__0;
    } else {
        u_bus__DOT____Vlvbound_he6887619__0 = 0U;
    }
    vlSelf->__PVT__host_gnt[0U] = vlSelf->__Vcellout__u_bus__host_gnt_o
        [0U];
}

VL_ATTR_COLD void Vtest_top_test_top___stl_sequent__TOP__test_top__1(Vtest_top_test_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtest_top_test_top___stl_sequent__TOP__test_top__1\n"); );
    // Body
    vlSelf->__PVT__host_we[0U] = vlSymsp->TOP__test_top__core_top0.__PVT__mem_mem_we_o;
    vlSelf->__PVT__host_addr[0U] = vlSymsp->TOP__test_top__core_top0.__PVT__mem_mem_addr_o;
    vlSelf->__Vcellinp__u_bus__host_we_i[0U] = vlSelf->__PVT__host_we
        [0U];
    vlSelf->__Vcellinp__u_bus__host_addr_i[0U] = vlSelf->__PVT__host_addr
        [0U];
    vlSelf->__PVT__u_bus__DOT__device_sel_req = 0U;
    if (((((0U >= (IData)(vlSelf->__PVT__u_bus__DOT__host_sel_req))
            ? vlSelf->__Vcellinp__u_bus__host_addr_i
           [vlSelf->__PVT__u_bus__DOT__host_sel_req]
            : 0U) & vlSelf->__Vcellinp__u_bus__cfg_device_addr_mask
          [0U]) == vlSelf->__Vcellinp__u_bus__cfg_device_addr_base
         [0U])) {
        vlSelf->__PVT__u_bus__DOT__device_sel_req = 0U;
    }
    if (((((0U >= (IData)(vlSelf->__PVT__u_bus__DOT__host_sel_req))
            ? vlSelf->__Vcellinp__u_bus__host_addr_i
           [vlSelf->__PVT__u_bus__DOT__host_sel_req]
            : 0U) & vlSelf->__Vcellinp__u_bus__cfg_device_addr_mask
          [1U]) == vlSelf->__Vcellinp__u_bus__cfg_device_addr_base
         [1U])) {
        vlSelf->__PVT__u_bus__DOT__device_sel_req = 1U;
    }
    if (((((0U >= (IData)(vlSelf->__PVT__u_bus__DOT__host_sel_req))
            ? vlSelf->__Vcellinp__u_bus__host_addr_i
           [vlSelf->__PVT__u_bus__DOT__host_sel_req]
            : 0U) & vlSelf->__Vcellinp__u_bus__cfg_device_addr_mask
          [2U]) == vlSelf->__Vcellinp__u_bus__cfg_device_addr_base
         [2U])) {
        vlSelf->__PVT__u_bus__DOT__device_sel_req = 2U;
    }
    if ((0U == (IData)(vlSelf->__PVT__u_bus__DOT__device_sel_req))) {
        if ((0U >= (IData)(vlSelf->__PVT__u_bus__DOT__host_sel_req))) {
            vlSelf->u_bus__DOT____Vlvbound_he4603d23__0 
                = (1U & vlSelf->__Vcellinp__u_bus__host_we_i
                   [vlSelf->__PVT__u_bus__DOT__host_sel_req]);
            vlSelf->__Vcellout__u_bus__device_we_o[0U] 
                = vlSelf->u_bus__DOT____Vlvbound_he4603d23__0;
            vlSelf->u_bus__DOT____Vlvbound_ha032ea3b__0 
                = vlSelf->__Vcellinp__u_bus__host_addr_i
                [vlSelf->__PVT__u_bus__DOT__host_sel_req];
            vlSelf->__Vcellout__u_bus__device_addr_o[0U] 
                = vlSelf->u_bus__DOT____Vlvbound_ha032ea3b__0;
            vlSelf->u_bus__DOT____Vlvbound_hc1afd9fe__0 
                = (1U & vlSelf->__Vcellinp__u_bus__host_req_i
                   [vlSelf->__PVT__u_bus__DOT__host_sel_req]);
        } else {
            vlSelf->u_bus__DOT____Vlvbound_he4603d23__0 = 0U;
            vlSelf->__Vcellout__u_bus__device_we_o[0U] 
                = vlSelf->u_bus__DOT____Vlvbound_he4603d23__0;
            vlSelf->u_bus__DOT____Vlvbound_ha032ea3b__0 = 0U;
            vlSelf->__Vcellout__u_bus__device_addr_o[0U] 
                = vlSelf->u_bus__DOT____Vlvbound_ha032ea3b__0;
            vlSelf->u_bus__DOT____Vlvbound_hc1afd9fe__0 = 0U;
        }
        vlSelf->__Vcellout__u_bus__device_req_o[0U] 
            = vlSelf->u_bus__DOT____Vlvbound_hc1afd9fe__0;
    } else {
        vlSelf->__Vcellout__u_bus__device_we_o[0U] = 0U;
        vlSelf->__Vcellout__u_bus__device_addr_o[0U] = 0U;
        vlSelf->__Vcellout__u_bus__device_req_o[0U] = 0U;
    }
    if ((1U == (IData)(vlSelf->__PVT__u_bus__DOT__device_sel_req))) {
        if ((0U >= (IData)(vlSelf->__PVT__u_bus__DOT__host_sel_req))) {
            vlSelf->u_bus__DOT____Vlvbound_he4603d23__0 
                = (1U & vlSelf->__Vcellinp__u_bus__host_we_i
                   [vlSelf->__PVT__u_bus__DOT__host_sel_req]);
            vlSelf->__Vcellout__u_bus__device_we_o[1U] 
                = vlSelf->u_bus__DOT____Vlvbound_he4603d23__0;
            vlSelf->u_bus__DOT____Vlvbound_ha032ea3b__0 
                = vlSelf->__Vcellinp__u_bus__host_addr_i
                [vlSelf->__PVT__u_bus__DOT__host_sel_req];
            vlSelf->__Vcellout__u_bus__device_addr_o[1U] 
                = vlSelf->u_bus__DOT____Vlvbound_ha032ea3b__0;
            vlSelf->u_bus__DOT____Vlvbound_hc1afd9fe__0 
                = (1U & vlSelf->__Vcellinp__u_bus__host_req_i
                   [vlSelf->__PVT__u_bus__DOT__host_sel_req]);
        } else {
            vlSelf->u_bus__DOT____Vlvbound_he4603d23__0 = 0U;
            vlSelf->__Vcellout__u_bus__device_we_o[1U] 
                = vlSelf->u_bus__DOT____Vlvbound_he4603d23__0;
            vlSelf->u_bus__DOT____Vlvbound_ha032ea3b__0 = 0U;
            vlSelf->__Vcellout__u_bus__device_addr_o[1U] 
                = vlSelf->u_bus__DOT____Vlvbound_ha032ea3b__0;
            vlSelf->u_bus__DOT____Vlvbound_hc1afd9fe__0 = 0U;
        }
        vlSelf->__Vcellout__u_bus__device_req_o[1U] 
            = vlSelf->u_bus__DOT____Vlvbound_hc1afd9fe__0;
    } else {
        vlSelf->__Vcellout__u_bus__device_we_o[1U] = 0U;
        vlSelf->__Vcellout__u_bus__device_addr_o[1U] = 0U;
        vlSelf->__Vcellout__u_bus__device_req_o[1U] = 0U;
    }
    if ((2U == (IData)(vlSelf->__PVT__u_bus__DOT__device_sel_req))) {
        if ((0U >= (IData)(vlSelf->__PVT__u_bus__DOT__host_sel_req))) {
            vlSelf->u_bus__DOT____Vlvbound_he4603d23__0 
                = (1U & vlSelf->__Vcellinp__u_bus__host_we_i
                   [vlSelf->__PVT__u_bus__DOT__host_sel_req]);
            vlSelf->__Vcellout__u_bus__device_we_o[2U] 
                = vlSelf->u_bus__DOT____Vlvbound_he4603d23__0;
            vlSelf->u_bus__DOT____Vlvbound_ha032ea3b__0 
                = vlSelf->__Vcellinp__u_bus__host_addr_i
                [vlSelf->__PVT__u_bus__DOT__host_sel_req];
            vlSelf->__Vcellout__u_bus__device_addr_o[2U] 
                = vlSelf->u_bus__DOT____Vlvbound_ha032ea3b__0;
            vlSelf->u_bus__DOT____Vlvbound_hc1afd9fe__0 
                = (1U & vlSelf->__Vcellinp__u_bus__host_req_i
                   [vlSelf->__PVT__u_bus__DOT__host_sel_req]);
        } else {
            vlSelf->u_bus__DOT____Vlvbound_he4603d23__0 = 0U;
            vlSelf->__Vcellout__u_bus__device_we_o[2U] 
                = vlSelf->u_bus__DOT____Vlvbound_he4603d23__0;
            vlSelf->u_bus__DOT____Vlvbound_ha032ea3b__0 = 0U;
            vlSelf->__Vcellout__u_bus__device_addr_o[2U] 
                = vlSelf->u_bus__DOT____Vlvbound_ha032ea3b__0;
            vlSelf->u_bus__DOT____Vlvbound_hc1afd9fe__0 = 0U;
        }
        vlSelf->__Vcellout__u_bus__device_req_o[2U] 
            = vlSelf->u_bus__DOT____Vlvbound_hc1afd9fe__0;
    } else {
        vlSelf->__Vcellout__u_bus__device_we_o[2U] = 0U;
        vlSelf->__Vcellout__u_bus__device_addr_o[2U] = 0U;
        vlSelf->__Vcellout__u_bus__device_req_o[2U] = 0U;
    }
    vlSelf->__PVT__u_bus__DOT__device_sel_resp = ((IData)(vlSymsp->TOP.rst_i)
                                                   ? 0U
                                                   : (IData)(vlSelf->__PVT__u_bus__DOT__device_sel_req));
    vlSelf->__PVT__device_we[0U] = vlSelf->__Vcellout__u_bus__device_we_o
        [0U];
    vlSelf->__PVT__device_we[1U] = vlSelf->__Vcellout__u_bus__device_we_o
        [1U];
    vlSelf->__PVT__device_we[2U] = vlSelf->__Vcellout__u_bus__device_we_o
        [2U];
    vlSelf->__PVT__device_addr[0U] = vlSelf->__Vcellout__u_bus__device_addr_o
        [0U];
    vlSelf->__PVT__device_addr[1U] = vlSelf->__Vcellout__u_bus__device_addr_o
        [1U];
    vlSelf->__PVT__device_addr[2U] = vlSelf->__Vcellout__u_bus__device_addr_o
        [2U];
    vlSelf->__PVT__device_req[0U] = vlSelf->__Vcellout__u_bus__device_req_o
        [0U];
    vlSelf->__PVT__device_req[1U] = vlSelf->__Vcellout__u_bus__device_req_o
        [1U];
    vlSelf->__PVT__device_req[2U] = vlSelf->__Vcellout__u_bus__device_req_o
        [2U];
    vlSelf->__PVT__device_rdata[1U] = (vlSelf->__PVT__device_req
                                       [1U] ? ((vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                                [(0x1ffffcU 
                                                  & vlSelf->__PVT__device_addr
                                                  [1U])] 
                                                << 0x18U) 
                                               | ((vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                                   [
                                                   (0x1fffffU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       (0x1ffffcU 
                                                        & vlSelf->__PVT__device_addr
                                                        [1U])))] 
                                                   << 0x10U) 
                                                  | ((vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                                      [
                                                      (0x1fffffU 
                                                       & ((IData)(2U) 
                                                          + 
                                                          (0x1ffffcU 
                                                           & vlSelf->__PVT__device_addr
                                                           [1U])))] 
                                                      << 8U) 
                                                     | vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                                     [
                                                     (0x1fffffU 
                                                      & ((IData)(3U) 
                                                         + 
                                                         (0x1ffffcU 
                                                          & vlSelf->__PVT__device_addr
                                                          [1U])))])))
                                        : 0U);
    if (vlSelf->__PVT__device_req[0U]) {
        if ((0U == (0xffffU & vlSelf->__PVT__device_addr
                    [0U]))) {
            vlSelf->__Vcellout__clint0__data_o = vlSelf->__PVT__clint0__DOT__msip_mem;
        } else if ((0x4000U == (0xffffU & vlSelf->__PVT__device_addr
                                [0U]))) {
            vlSelf->__Vcellout__clint0__data_o = vlSelf->__PVT__clint0__DOT__mtimecmp_mem
                [0U];
        } else if ((0x4004U == (0xffffU & vlSelf->__PVT__device_addr
                                [0U]))) {
            vlSelf->__Vcellout__clint0__data_o = vlSelf->__PVT__clint0__DOT__mtimecmp_mem
                [1U];
        } else if ((0xbff8U == (0xffffU & vlSelf->__PVT__device_addr
                                [0U]))) {
            vlSelf->__Vcellout__clint0__data_o = vlSelf->__PVT__clint0__DOT__mtime_mem
                [0U];
        } else if ((0xbffcU == (0xffffU & vlSelf->__PVT__device_addr
                                [0U]))) {
            vlSelf->__Vcellout__clint0__data_o = vlSelf->__PVT__clint0__DOT__mtime_mem
                [1U];
        }
    } else {
        vlSelf->__Vcellout__clint0__data_o = 0U;
    }
    vlSelf->__PVT__device_rdata[0U] = vlSelf->__Vcellout__clint0__data_o;
    vlSelf->__Vcellinp__u_bus__device_rdata_i[0U] = 
        vlSelf->__PVT__device_rdata[0U];
    vlSelf->__Vcellinp__u_bus__device_rdata_i[1U] = 
        vlSelf->__PVT__device_rdata[1U];
    vlSelf->__Vcellinp__u_bus__device_rdata_i[2U] = 
        vlSelf->__PVT__device_rdata[2U];
    if (((~ (IData)(vlSymsp->TOP.rst_i)) & (IData)(vlSelf->__PVT__u_bus__DOT__host_sel_req))) {
        vlSelf->__Vcellout__u_bus__host_rdata_o[0U] = 0U;
    } else {
        vlSelf->u_bus__DOT____Vlvbound_ha22eafa2__0 
            = ((2U >= (IData)(vlSelf->__PVT__u_bus__DOT__device_sel_resp))
                ? vlSelf->__Vcellinp__u_bus__device_rdata_i
               [vlSelf->__PVT__u_bus__DOT__device_sel_resp]
                : 0U);
        vlSelf->__Vcellout__u_bus__host_rdata_o[0U] 
            = vlSelf->u_bus__DOT____Vlvbound_ha22eafa2__0;
    }
    vlSelf->__PVT__host_rdata[0U] = vlSelf->__Vcellout__u_bus__host_rdata_o
        [0U];
}

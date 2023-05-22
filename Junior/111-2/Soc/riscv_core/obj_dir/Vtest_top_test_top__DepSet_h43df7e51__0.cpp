// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtest_top__Syms.h"
#include "Vtest_top_test_top.h"

VL_INLINE_OPT void Vtest_top_test_top___ico_sequent__TOP__test_top__0(Vtest_top_test_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtest_top_test_top___ico_sequent__TOP__test_top__0\n"); );
    // Init
    CData/*0:0*/ u_bus__DOT____Vlvbound_he6887619__0;
    u_bus__DOT____Vlvbound_he6887619__0 = 0;
    // Body
    vlSelf->__PVT__host_req[0U] = (1U & (~ (IData)(vlSymsp->TOP.rst_i)));
    vlSelf->__PVT__host_we[0U] = vlSymsp->TOP__test_top__core_top0.__PVT__mem_mem_we_o;
    vlSelf->__PVT__host_addr[0U] = vlSymsp->TOP__test_top__core_top0.__PVT__mem_mem_addr_o;
    vlSelf->__Vcellinp__u_bus__host_req_i[0U] = vlSelf->__PVT__host_req
        [0U];
    vlSelf->__Vcellinp__u_bus__host_we_i[0U] = vlSelf->__PVT__host_we
        [0U];
    vlSelf->__Vcellinp__u_bus__host_addr_i[0U] = vlSelf->__PVT__host_addr
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
    vlSelf->__PVT__host_gnt[0U] = vlSelf->__Vcellout__u_bus__host_gnt_o
        [0U];
    vlSelf->__Vcellout__u_bus__device_we_o[0U] = ((~ (IData)(vlSelf->__PVT__u_bus__DOT__device_sel_req)) 
                                                  & ((0U 
                                                      >= (IData)(vlSelf->__PVT__u_bus__DOT__host_sel_req)) 
                                                     & vlSelf->__Vcellinp__u_bus__host_we_i
                                                     [vlSelf->__PVT__u_bus__DOT__host_sel_req]));
    vlSelf->__Vcellout__u_bus__device_we_o[1U] = ((IData)(vlSelf->__PVT__u_bus__DOT__device_sel_req) 
                                                  & ((0U 
                                                      >= (IData)(vlSelf->__PVT__u_bus__DOT__host_sel_req)) 
                                                     & vlSelf->__Vcellinp__u_bus__host_we_i
                                                     [vlSelf->__PVT__u_bus__DOT__host_sel_req]));
    vlSelf->__Vcellout__u_bus__device_req_o[0U] = (
                                                   (~ (IData)(vlSelf->__PVT__u_bus__DOT__device_sel_req)) 
                                                   & ((0U 
                                                       >= (IData)(vlSelf->__PVT__u_bus__DOT__host_sel_req)) 
                                                      & vlSelf->__Vcellinp__u_bus__host_req_i
                                                      [vlSelf->__PVT__u_bus__DOT__host_sel_req]));
    if (vlSelf->__PVT__u_bus__DOT__device_sel_req) {
        if ((0U >= (IData)(vlSelf->__PVT__u_bus__DOT__host_sel_req))) {
            vlSelf->__Vcellout__u_bus__device_req_o[1U] 
                = (1U & vlSelf->__Vcellinp__u_bus__host_req_i
                   [vlSelf->__PVT__u_bus__DOT__host_sel_req]);
            vlSelf->__Vcellout__u_bus__device_addr_o[0U] = 0U;
            vlSelf->__Vcellout__u_bus__device_addr_o[1U] 
                = vlSelf->__Vcellinp__u_bus__host_addr_i
                [vlSelf->__PVT__u_bus__DOT__host_sel_req];
        } else {
            vlSelf->__Vcellout__u_bus__device_req_o[1U] = 0U;
            vlSelf->__Vcellout__u_bus__device_addr_o[0U] = 0U;
            vlSelf->__Vcellout__u_bus__device_addr_o[1U] = 0U;
        }
    } else {
        vlSelf->__Vcellout__u_bus__device_req_o[1U] = 0U;
        vlSelf->__Vcellout__u_bus__device_addr_o[0U] 
            = ((0U >= (IData)(vlSelf->__PVT__u_bus__DOT__host_sel_req))
                ? vlSelf->__Vcellinp__u_bus__host_addr_i
               [vlSelf->__PVT__u_bus__DOT__host_sel_req]
                : 0U);
        vlSelf->__Vcellout__u_bus__device_addr_o[1U] = 0U;
    }
    vlSelf->__PVT__device_we[0U] = vlSelf->__Vcellout__u_bus__device_we_o
        [0U];
    vlSelf->__PVT__device_we[1U] = vlSelf->__Vcellout__u_bus__device_we_o
        [1U];
    vlSelf->__PVT__device_req[0U] = vlSelf->__Vcellout__u_bus__device_req_o
        [0U];
    vlSelf->__PVT__device_req[1U] = vlSelf->__Vcellout__u_bus__device_req_o
        [1U];
    vlSelf->__PVT__device_addr[0U] = vlSelf->__Vcellout__u_bus__device_addr_o
        [0U];
    vlSelf->__PVT__device_addr[1U] = vlSelf->__Vcellout__u_bus__device_addr_o
        [1U];
    vlSelf->__PVT__device_rdata[0U] = (vlSelf->__PVT__device_req
                                       [0U] ? ((vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                                [(0x1ffffcU 
                                                  & vlSelf->__PVT__device_addr
                                                  [0U])] 
                                                << 0x18U) 
                                               | ((vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                                   [
                                                   (0x1fffffU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       (0x1ffffcU 
                                                        & vlSelf->__PVT__device_addr
                                                        [0U])))] 
                                                   << 0x10U) 
                                                  | ((vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                                      [
                                                      (0x1fffffU 
                                                       & ((IData)(2U) 
                                                          + 
                                                          (0x1ffffcU 
                                                           & vlSelf->__PVT__device_addr
                                                           [0U])))] 
                                                      << 8U) 
                                                     | vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                                     [
                                                     (0x1fffffU 
                                                      & ((IData)(3U) 
                                                         + 
                                                         (0x1ffffcU 
                                                          & vlSelf->__PVT__device_addr
                                                          [0U])))])))
                                        : 0U);
    vlSelf->__Vcellinp__u_bus__device_rdata_i[0U] = 
        vlSelf->__PVT__device_rdata[0U];
    vlSelf->__Vcellinp__u_bus__device_rdata_i[1U] = 
        vlSelf->__PVT__device_rdata[1U];
    if (((~ (IData)(vlSymsp->TOP.rst_i)) & (IData)(vlSelf->__PVT__u_bus__DOT__host_sel_req))) {
        vlSelf->__Vcellout__u_bus__host_rdata_o[0U] = 0U;
    } else {
        vlSelf->u_bus__DOT____Vlvbound_ha22eafa2__0 
            = vlSelf->__Vcellinp__u_bus__device_rdata_i
            [((~ (IData)(vlSymsp->TOP.rst_i)) & (IData)(vlSelf->__PVT__u_bus__DOT__device_sel_req))];
        vlSelf->__Vcellout__u_bus__host_rdata_o[0U] 
            = vlSelf->u_bus__DOT____Vlvbound_ha22eafa2__0;
    }
    vlSelf->__PVT__host_rdata[0U] = vlSelf->__Vcellout__u_bus__host_rdata_o
        [0U];
}

VL_INLINE_OPT void Vtest_top_test_top___ico_sequent__TOP__test_top__1(Vtest_top_test_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtest_top_test_top___ico_sequent__TOP__test_top__1\n"); );
    // Body
    vlSelf->__PVT__host_wdata[0U] = vlSymsp->TOP__test_top__core_top0.__PVT__mem_mem_data_o;
    vlSelf->__Vcellinp__u_bus__host_wdata_i[0U] = vlSelf->__PVT__host_wdata
        [0U];
    if (vlSelf->__PVT__u_bus__DOT__device_sel_req) {
        vlSelf->__Vcellout__u_bus__device_wdata_o[0U] = 0U;
        vlSelf->__Vcellout__u_bus__device_wdata_o[1U] 
            = ((0U >= (IData)(vlSelf->__PVT__u_bus__DOT__host_sel_req))
                ? vlSelf->__Vcellinp__u_bus__host_wdata_i
               [vlSelf->__PVT__u_bus__DOT__host_sel_req]
                : 0U);
    } else {
        vlSelf->__Vcellout__u_bus__device_wdata_o[0U] 
            = ((0U >= (IData)(vlSelf->__PVT__u_bus__DOT__host_sel_req))
                ? vlSelf->__Vcellinp__u_bus__host_wdata_i
               [vlSelf->__PVT__u_bus__DOT__host_sel_req]
                : 0U);
        vlSelf->__Vcellout__u_bus__device_wdata_o[1U] = 0U;
    }
    vlSelf->__PVT__device_wdata[0U] = vlSelf->__Vcellout__u_bus__device_wdata_o
        [0U];
    vlSelf->__PVT__device_wdata[1U] = vlSelf->__Vcellout__u_bus__device_wdata_o
        [1U];
}

VL_INLINE_OPT void Vtest_top_test_top___nba_sequent__TOP__test_top__0(Vtest_top_test_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtest_top_test_top___nba_sequent__TOP__test_top__0\n"); );
    // Init
    CData/*2:0*/ __Vdly__console0__DOT__sim_finish;
    __Vdly__console0__DOT__sim_finish = 0;
    // Body
    __Vdly__console0__DOT__sim_finish = vlSelf->__PVT__console0__DOT__sim_finish;
    vlSelf->__PVT__host_we[0U] = vlSymsp->TOP__test_top__core_top0.__PVT__mem_mem_we_o;
    vlSelf->__PVT__host_addr[0U] = vlSymsp->TOP__test_top__core_top0.__PVT__mem_mem_addr_o;
    if (vlSymsp->TOP.rst_i) {
        __Vdly__console0__DOT__sim_finish = 0U;
    } else if ((vlSelf->__PVT__device_req[1U] & vlSelf->__PVT__device_we
                [1U])) {
        if (VL_UNLIKELY((4U == (0xffU & vlSelf->__PVT__device_addr
                                [1U])))) {
            VL_FWRITEF(vlSelf->__PVT__console0__DOT__log_fd,"%c",
                       8,(0xffU & vlSelf->__PVT__device_wdata
                          [1U]));
            VL_WRITEF("%c",8,(0xffU & vlSelf->__PVT__device_wdata
                              [1U]));
            if (vlSelf->__PVT__console0__DOT__log_fd) { VL_FFLUSH_I(vlSelf->__PVT__console0__DOT__log_fd); }
        } else if ((8U == (0xffU & vlSelf->__PVT__device_addr
                           [1U]))) {
            if ((vlSelf->__PVT__device_wdata[1U] & 
                 (0U == (IData)(vlSelf->__PVT__console0__DOT__sim_finish)))) {
                __Vdly__console0__DOT__sim_finish = 1U;
            }
        }
    }
    if ((0U != (IData)(vlSelf->__PVT__console0__DOT__sim_finish))) {
        __Vdly__console0__DOT__sim_finish = (7U & ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__console0__DOT__sim_finish)));
    }
    vlSelf->__PVT__halt_from_console = (2U <= (IData)(vlSelf->__PVT__console0__DOT__sim_finish));
    vlSelf->__Vcellinp__u_bus__host_we_i[0U] = vlSelf->__PVT__host_we
        [0U];
    vlSelf->__Vcellinp__u_bus__host_addr_i[0U] = vlSelf->__PVT__host_addr
        [0U];
    vlSelf->__PVT__console0__DOT__sim_finish = __Vdly__console0__DOT__sim_finish;
}

VL_INLINE_OPT void Vtest_top_test_top___nba_sequent__TOP__test_top__1(Vtest_top_test_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtest_top_test_top___nba_sequent__TOP__test_top__1\n"); );
    // Body
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
    vlSelf->__Vcellout__u_bus__device_we_o[0U] = ((~ (IData)(vlSelf->__PVT__u_bus__DOT__device_sel_req)) 
                                                  & ((0U 
                                                      >= (IData)(vlSelf->__PVT__u_bus__DOT__host_sel_req)) 
                                                     & vlSelf->__Vcellinp__u_bus__host_we_i
                                                     [vlSelf->__PVT__u_bus__DOT__host_sel_req]));
    vlSelf->__Vcellout__u_bus__device_we_o[1U] = ((IData)(vlSelf->__PVT__u_bus__DOT__device_sel_req) 
                                                  & ((0U 
                                                      >= (IData)(vlSelf->__PVT__u_bus__DOT__host_sel_req)) 
                                                     & vlSelf->__Vcellinp__u_bus__host_we_i
                                                     [vlSelf->__PVT__u_bus__DOT__host_sel_req]));
    vlSelf->__Vcellout__u_bus__device_req_o[0U] = (
                                                   (~ (IData)(vlSelf->__PVT__u_bus__DOT__device_sel_req)) 
                                                   & ((0U 
                                                       >= (IData)(vlSelf->__PVT__u_bus__DOT__host_sel_req)) 
                                                      & vlSelf->__Vcellinp__u_bus__host_req_i
                                                      [vlSelf->__PVT__u_bus__DOT__host_sel_req]));
    if (vlSelf->__PVT__u_bus__DOT__device_sel_req) {
        if ((0U >= (IData)(vlSelf->__PVT__u_bus__DOT__host_sel_req))) {
            vlSelf->__Vcellout__u_bus__device_req_o[1U] 
                = (1U & vlSelf->__Vcellinp__u_bus__host_req_i
                   [vlSelf->__PVT__u_bus__DOT__host_sel_req]);
            vlSelf->__Vcellout__u_bus__device_addr_o[0U] = 0U;
            vlSelf->__Vcellout__u_bus__device_addr_o[1U] 
                = vlSelf->__Vcellinp__u_bus__host_addr_i
                [vlSelf->__PVT__u_bus__DOT__host_sel_req];
        } else {
            vlSelf->__Vcellout__u_bus__device_req_o[1U] = 0U;
            vlSelf->__Vcellout__u_bus__device_addr_o[0U] = 0U;
            vlSelf->__Vcellout__u_bus__device_addr_o[1U] = 0U;
        }
    } else {
        vlSelf->__Vcellout__u_bus__device_req_o[1U] = 0U;
        vlSelf->__Vcellout__u_bus__device_addr_o[0U] 
            = ((0U >= (IData)(vlSelf->__PVT__u_bus__DOT__host_sel_req))
                ? vlSelf->__Vcellinp__u_bus__host_addr_i
               [vlSelf->__PVT__u_bus__DOT__host_sel_req]
                : 0U);
        vlSelf->__Vcellout__u_bus__device_addr_o[1U] = 0U;
    }
    vlSelf->__PVT__device_we[0U] = vlSelf->__Vcellout__u_bus__device_we_o
        [0U];
    vlSelf->__PVT__device_we[1U] = vlSelf->__Vcellout__u_bus__device_we_o
        [1U];
    vlSelf->__PVT__device_req[0U] = vlSelf->__Vcellout__u_bus__device_req_o
        [0U];
    vlSelf->__PVT__device_req[1U] = vlSelf->__Vcellout__u_bus__device_req_o
        [1U];
    vlSelf->__PVT__device_addr[0U] = vlSelf->__Vcellout__u_bus__device_addr_o
        [0U];
    vlSelf->__PVT__device_addr[1U] = vlSelf->__Vcellout__u_bus__device_addr_o
        [1U];
    vlSelf->__PVT__device_rdata[0U] = (vlSelf->__PVT__device_req
                                       [0U] ? ((vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                                [(0x1ffffcU 
                                                  & vlSelf->__PVT__device_addr
                                                  [0U])] 
                                                << 0x18U) 
                                               | ((vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                                   [
                                                   (0x1fffffU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       (0x1ffffcU 
                                                        & vlSelf->__PVT__device_addr
                                                        [0U])))] 
                                                   << 0x10U) 
                                                  | ((vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                                      [
                                                      (0x1fffffU 
                                                       & ((IData)(2U) 
                                                          + 
                                                          (0x1ffffcU 
                                                           & vlSelf->__PVT__device_addr
                                                           [0U])))] 
                                                      << 8U) 
                                                     | vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                                     [
                                                     (0x1fffffU 
                                                      & ((IData)(3U) 
                                                         + 
                                                         (0x1ffffcU 
                                                          & vlSelf->__PVT__device_addr
                                                          [0U])))])))
                                        : 0U);
    vlSelf->__Vcellinp__u_bus__device_rdata_i[0U] = 
        vlSelf->__PVT__device_rdata[0U];
    vlSelf->__Vcellinp__u_bus__device_rdata_i[1U] = 
        vlSelf->__PVT__device_rdata[1U];
    if (((~ (IData)(vlSymsp->TOP.rst_i)) & (IData)(vlSelf->__PVT__u_bus__DOT__host_sel_req))) {
        vlSelf->__Vcellout__u_bus__host_rdata_o[0U] = 0U;
    } else {
        vlSelf->u_bus__DOT____Vlvbound_ha22eafa2__0 
            = vlSelf->__Vcellinp__u_bus__device_rdata_i
            [((~ (IData)(vlSymsp->TOP.rst_i)) & (IData)(vlSelf->__PVT__u_bus__DOT__device_sel_req))];
        vlSelf->__Vcellout__u_bus__host_rdata_o[0U] 
            = vlSelf->u_bus__DOT____Vlvbound_ha22eafa2__0;
    }
    vlSelf->__PVT__host_rdata[0U] = vlSelf->__Vcellout__u_bus__host_rdata_o
        [0U];
}

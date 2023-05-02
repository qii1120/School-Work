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
    // Body
    vlSelf->__PVT__exe0__DOT__mul0__DOT__mul_add = 
        (1U & vlSelf->__PVT__exe0__DOT__mul0__DOT__result[0U]);
    vlSelf->__PVT__mem_reg_we_o = ((IData)(vlSymsp->TOP.rst_i) 
                                   | (IData)(vlSelf->__PVT__exe_mem_reg_we_o));
    vlSelf->__PVT__exe0__DOT__mul0__DOT__result_tmp[0U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__result[0U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__result_tmp[1U] 
        = (IData)((0x1ffffffffULL & ((QData)((IData)(vlSelf->__PVT__exe0__DOT__mul0__DOT__reg32)) 
                                     + (QData)((IData)(
                                                       vlSelf->__PVT__exe0__DOT__mul0__DOT__result[1U])))));
    vlSelf->__PVT__exe0__DOT__mul0__DOT__result_tmp[2U] 
        = (IData)(((0x1ffffffffULL & ((QData)((IData)(vlSelf->__PVT__exe0__DOT__mul0__DOT__reg32)) 
                                      + (QData)((IData)(
                                                        vlSelf->__PVT__exe0__DOT__mul0__DOT__result[1U])))) 
                   >> 0x20U));
    vlSelf->__PVT__exe0__DOT__op1_eq_op2 = (vlSelf->__PVT__id_exe_op1_o 
                                            == vlSelf->__PVT__id_exe_op2_o);
    vlSelf->__PVT__exe0__DOT__isType_r = ((0x33U == 
                                           (0x7fU & vlSelf->__PVT__id_exe_inst_o)) 
                                          & ((0U == 
                                              (vlSelf->__PVT__id_exe_inst_o 
                                               >> 0x19U)) 
                                             | (0x20U 
                                                == 
                                                (vlSelf->__PVT__id_exe_inst_o 
                                                 >> 0x19U))));
    vlSelf->__PVT__exe0__DOT__isType_m = (IData)((0x2000033U 
                                                  == 
                                                  (0xfe00007fU 
                                                   & vlSelf->__PVT__id_exe_inst_o)));
    vlSelf->id0__DOT__inst_type_r__DOT____VdfgExtracted_he1154c64__0 
        = (((0x33U == (0x7fU & vlSelf->__PVT__if_id_inst_o)) 
            & ((0U == (vlSelf->__PVT__if_id_inst_o 
                       >> 0x19U)) | (0x20U == (vlSelf->__PVT__if_id_inst_o 
                                               >> 0x19U)))) 
           | (IData)((0x2000033U == (0xfe00007fU & vlSelf->__PVT__if_id_inst_o))));
    if ((1U & (~ (IData)(vlSymsp->TOP.rst_i)))) {
        if ((1U & (~ (vlSelf->__PVT__id_exe_inst_o 
                      >> 6U)))) {
            if ((0x20U & vlSelf->__PVT__id_exe_inst_o)) {
                if ((0x10U & vlSelf->__PVT__id_exe_inst_o)) {
                    if ((1U & (~ (vlSelf->__PVT__id_exe_inst_o 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSelf->__PVT__id_exe_inst_o 
                                      >> 2U)))) {
                            if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                                if ((1U & vlSelf->__PVT__id_exe_inst_o)) {
                                    if ((1U & (~ (IData)(vlSelf->__PVT__exe0__DOT__isType_r)))) {
                                        if (vlSelf->__PVT__exe0__DOT__isType_m) {
                                            vlSelf->__PVT__exe0__DOT__a_o = 0U;
                                            vlSelf->__PVT__exe0__DOT__b_o = 0U;
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->__PVT__id_exe_inst_o 
                                                     >> 0xeU)))) {
                                                if (
                                                    (0x2000U 
                                                     & vlSelf->__PVT__id_exe_inst_o)) {
                                                    vlSelf->__PVT__exe0__DOT__a_o 
                                                        = 
                                                        ((0x1000U 
                                                          & vlSelf->__PVT__id_exe_inst_o)
                                                          ? vlSelf->__PVT__id_exe_op1_o
                                                          : 
                                                         ((vlSelf->__PVT__id_exe_op1_o 
                                                           >> 0x1fU)
                                                           ? 
                                                          ((IData)(1U) 
                                                           + 
                                                           (~ vlSelf->__PVT__id_exe_op1_o))
                                                           : vlSelf->__PVT__id_exe_op1_o));
                                                    vlSelf->__PVT__exe0__DOT__b_o 
                                                        = vlSelf->__PVT__id_exe_op2_o;
                                                } else if (
                                                           (0x1000U 
                                                            & vlSelf->__PVT__id_exe_inst_o)) {
                                                    vlSelf->__PVT__exe0__DOT__a_o 
                                                        = 
                                                        ((vlSelf->__PVT__id_exe_op1_o 
                                                          >> 0x1fU)
                                                          ? 
                                                         ((IData)(1U) 
                                                          + 
                                                          (~ vlSelf->__PVT__id_exe_op1_o))
                                                          : vlSelf->__PVT__id_exe_op1_o);
                                                    vlSelf->__PVT__exe0__DOT__b_o 
                                                        = 
                                                        ((vlSelf->__PVT__id_exe_op2_o 
                                                          >> 0x1fU)
                                                          ? 
                                                         ((IData)(1U) 
                                                          + 
                                                          (~ vlSelf->__PVT__id_exe_op2_o))
                                                          : vlSelf->__PVT__id_exe_op2_o);
                                                } else {
                                                    vlSelf->__PVT__exe0__DOT__a_o 
                                                        = vlSelf->__PVT__id_exe_op1_o;
                                                    vlSelf->__PVT__exe0__DOT__b_o 
                                                        = vlSelf->__PVT__id_exe_op2_o;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->__PVT__id0__DOT__r_reg_we_o = vlSelf->id0__DOT__inst_type_r__DOT____VdfgExtracted_he1154c64__0;
    vlSelf->__PVT__id0__DOT__r_reg2_re_o = vlSelf->id0__DOT__inst_type_r__DOT____VdfgExtracted_he1154c64__0;
    vlSelf->__PVT__id0__DOT__r_reg1_re_o = vlSelf->id0__DOT__inst_type_r__DOT____VdfgExtracted_he1154c64__0;
    vlSelf->__PVT__exe0__DOT__mul0__DOT__S_nxt = ((0U 
                                                   == (IData)(vlSelf->__PVT__exe0__DOT__mul0__DOT__S))
                                                   ? 
                                                  ((1U 
                                                    & ((~ (IData)(
                                                                  (0U 
                                                                   != vlSelf->__PVT__exe0__DOT__a_o))) 
                                                       | (~ (IData)(
                                                                    (0U 
                                                                     != vlSelf->__PVT__exe0__DOT__b_o)))))
                                                    ? 3U
                                                    : 
                                                   ((IData)(vlSelf->__PVT__exe0__DOT__mul0__DOT__is_ready)
                                                     ? 0U
                                                     : 1U))
                                                   : 
                                                  ((1U 
                                                    == (IData)(vlSelf->__PVT__exe0__DOT__mul0__DOT__S))
                                                    ? 
                                                   ((0U 
                                                     != (IData)(vlSelf->__PVT__exe0__DOT__mul0__DOT__cnt))
                                                     ? 1U
                                                     : 3U)
                                                    : 0U));
    if (vlSymsp->TOP.rst_i) {
        vlSelf->__PVT__id_inst_o = 0x13U;
        vlSelf->__PVT__exe_mem_we_o = 0U;
        vlSelf->__PVT__exe_mem_op_o = 0U;
        vlSelf->__PVT__mem_reg_waddr_o = 0U;
        vlSelf->__PVT__exe_mem_addr_o = 0U;
        vlSelf->__PVT__exe_mem_data_o = 0U;
        vlSelf->__PVT__mem_ram_w_request_o = 0U;
        vlSelf->__PVT__exe_jump_addr_o = 0U;
        vlSelf->__PVT__exe_stallreq_o = 0U;
        vlSelf->__PVT__mem_ram_addr_o = 0U;
        vlSelf->__PVT__exe_jump_enable_o = 0U;
        vlSelf->__PVT__exe_reg_waddr_o = 0U;
        vlSelf->__PVT__exe_reg_we_o = 0U;
        vlSelf->__PVT__exe0__DOT__mult_req_o = 0U;
    } else {
        vlSelf->__PVT__id_inst_o = ((0x40U & vlSelf->__PVT__if_id_inst_o)
                                     ? ((0x20U & vlSelf->__PVT__if_id_inst_o)
                                         ? ((0x10U 
                                             & vlSelf->__PVT__if_id_inst_o)
                                             ? 0x13U
                                             : ((8U 
                                                 & vlSelf->__PVT__if_id_inst_o)
                                                 ? 
                                                ((4U 
                                                  & vlSelf->__PVT__if_id_inst_o)
                                                  ? 
                                                 ((2U 
                                                   & vlSelf->__PVT__if_id_inst_o)
                                                   ? 
                                                  ((1U 
                                                    & vlSelf->__PVT__if_id_inst_o)
                                                    ? vlSelf->__PVT__if_id_inst_o
                                                    : 0x13U)
                                                   : 0x13U)
                                                  : 0x13U)
                                                 : 
                                                ((4U 
                                                  & vlSelf->__PVT__if_id_inst_o)
                                                  ? 
                                                 ((2U 
                                                   & vlSelf->__PVT__if_id_inst_o)
                                                   ? 
                                                  ((1U 
                                                    & vlSelf->__PVT__if_id_inst_o)
                                                    ? vlSelf->__PVT__if_id_inst_o
                                                    : 0x13U)
                                                   : 0x13U)
                                                  : 
                                                 ((2U 
                                                   & vlSelf->__PVT__if_id_inst_o)
                                                   ? 
                                                  ((1U 
                                                    & vlSelf->__PVT__if_id_inst_o)
                                                    ? vlSelf->__PVT__if_id_inst_o
                                                    : 0x13U)
                                                   : 0x13U))))
                                         : 0x13U) : 
                                    ((0x20U & vlSelf->__PVT__if_id_inst_o)
                                      ? ((0x10U & vlSelf->__PVT__if_id_inst_o)
                                          ? ((8U & vlSelf->__PVT__if_id_inst_o)
                                              ? 0x13U
                                              : ((4U 
                                                  & vlSelf->__PVT__if_id_inst_o)
                                                  ? 
                                                 ((2U 
                                                   & vlSelf->__PVT__if_id_inst_o)
                                                   ? 
                                                  ((1U 
                                                    & vlSelf->__PVT__if_id_inst_o)
                                                    ? vlSelf->__PVT__if_id_inst_o
                                                    : 0x13U)
                                                   : 0x13U)
                                                  : 
                                                 ((2U 
                                                   & vlSelf->__PVT__if_id_inst_o)
                                                   ? 
                                                  ((1U 
                                                    & vlSelf->__PVT__if_id_inst_o)
                                                    ? vlSelf->__PVT__if_id_inst_o
                                                    : 0x13U)
                                                   : 0x13U)))
                                          : ((8U & vlSelf->__PVT__if_id_inst_o)
                                              ? 0x13U
                                              : ((4U 
                                                  & vlSelf->__PVT__if_id_inst_o)
                                                  ? 0x13U
                                                  : 
                                                 ((2U 
                                                   & vlSelf->__PVT__if_id_inst_o)
                                                   ? 
                                                  ((1U 
                                                    & vlSelf->__PVT__if_id_inst_o)
                                                    ? vlSelf->__PVT__if_id_inst_o
                                                    : 0x13U)
                                                   : 0x13U))))
                                      : ((0x10U & vlSelf->__PVT__if_id_inst_o)
                                          ? ((8U & vlSelf->__PVT__if_id_inst_o)
                                              ? 0x13U
                                              : ((4U 
                                                  & vlSelf->__PVT__if_id_inst_o)
                                                  ? 
                                                 ((2U 
                                                   & vlSelf->__PVT__if_id_inst_o)
                                                   ? 
                                                  ((1U 
                                                    & vlSelf->__PVT__if_id_inst_o)
                                                    ? vlSelf->__PVT__if_id_inst_o
                                                    : 0x13U)
                                                   : 0x13U)
                                                  : 
                                                 ((2U 
                                                   & vlSelf->__PVT__if_id_inst_o)
                                                   ? 
                                                  ((1U 
                                                    & vlSelf->__PVT__if_id_inst_o)
                                                    ? vlSelf->__PVT__if_id_inst_o
                                                    : 0x13U)
                                                   : 0x13U)))
                                          : ((8U & vlSelf->__PVT__if_id_inst_o)
                                              ? 0x13U
                                              : ((4U 
                                                  & vlSelf->__PVT__if_id_inst_o)
                                                  ? 0x13U
                                                  : 
                                                 ((2U 
                                                   & vlSelf->__PVT__if_id_inst_o)
                                                   ? 
                                                  ((1U 
                                                    & vlSelf->__PVT__if_id_inst_o)
                                                    ? vlSelf->__PVT__if_id_inst_o
                                                    : 0x13U)
                                                   : 0x13U))))));
        vlSelf->__PVT__exe_mem_we_o = 0U;
        vlSelf->__PVT__exe_mem_op_o = 0U;
        vlSelf->__PVT__mem_reg_waddr_o = vlSelf->__PVT__exe_mem_reg_waddr_o;
        vlSelf->__PVT__mem_ram_w_request_o = vlSelf->__PVT__exe_mem_mem_we_o;
        vlSelf->__PVT__mem_ram_addr_o = vlSelf->__PVT__exe_mem_mem_addr_o;
        if ((8U & (IData)(vlSelf->__PVT__exe_mem_mem_op_o))) {
            if ((4U & (IData)(vlSelf->__PVT__exe_mem_mem_op_o))) {
                if ((2U & (IData)(vlSelf->__PVT__exe_mem_mem_op_o))) {
                    vlSelf->__PVT__mem_ram_w_request_o = 0U;
                    vlSelf->__PVT__mem_ram_addr_o = 0U;
                }
            } else if ((1U & (~ ((IData)(vlSelf->__PVT__exe_mem_mem_op_o) 
                                 >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__exe_mem_mem_op_o)))) {
                    vlSelf->__PVT__mem_ram_w_request_o = 0U;
                    vlSelf->__PVT__mem_ram_addr_o = 0U;
                }
            }
        } else if ((4U & (IData)(vlSelf->__PVT__exe_mem_mem_op_o))) {
            vlSelf->__PVT__mem_ram_w_request_o = 0U;
            vlSelf->__PVT__mem_ram_addr_o = 0U;
        } else if ((1U & (~ ((IData)(vlSelf->__PVT__exe_mem_mem_op_o) 
                             >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__exe_mem_mem_op_o)))) {
                vlSelf->__PVT__mem_ram_w_request_o = 0U;
                vlSelf->__PVT__mem_ram_addr_o = 0U;
            }
        }
        vlSelf->__PVT__exe_jump_enable_o = 0U;
        vlSelf->__PVT__exe_reg_we_o = vlSelf->__PVT__id_exe_reg_we_o;
        if ((0x40U & vlSelf->__PVT__id_exe_inst_o)) {
            if ((0x20U & vlSelf->__PVT__id_exe_inst_o)) {
                if ((0x10U & vlSelf->__PVT__id_exe_inst_o)) {
                    vlSelf->__PVT__exe_mem_we_o = 0U;
                    vlSelf->__PVT__exe_mem_op_o = 0U;
                    vlSelf->__PVT__exe_mem_addr_o = 0U;
                    vlSelf->__PVT__exe_mem_data_o = 0U;
                    vlSelf->__PVT__exe_jump_addr_o = 0U;
                    vlSelf->__PVT__exe_stallreq_o = 0U;
                    vlSelf->__PVT__exe_reg_waddr_o = 0U;
                    vlSelf->__PVT__exe_reg_we_o = 0U;
                } else if ((8U & vlSelf->__PVT__id_exe_inst_o)) {
                    if ((4U & vlSelf->__PVT__id_exe_inst_o)) {
                        if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                            if ((1U & (~ vlSelf->__PVT__id_exe_inst_o))) {
                                vlSelf->__PVT__exe_mem_we_o = 0U;
                                vlSelf->__PVT__exe_mem_op_o = 0U;
                                vlSelf->__PVT__exe_mem_addr_o = 0U;
                                vlSelf->__PVT__exe_mem_data_o = 0U;
                                vlSelf->__PVT__exe_stallreq_o = 0U;
                                vlSelf->__PVT__exe_reg_we_o = 0U;
                            }
                            if ((1U & vlSelf->__PVT__id_exe_inst_o)) {
                                vlSelf->__PVT__exe_jump_addr_o 
                                    = (vlSelf->__PVT__id_exe_inst_addr_o 
                                       + (((- (IData)(
                                                      (vlSelf->__PVT__id_exe_inst_o 
                                                       >> 0x1fU))) 
                                           << 0x14U) 
                                          | ((0xff000U 
                                              & vlSelf->__PVT__id_exe_inst_o) 
                                             | ((0x800U 
                                                 & (vlSelf->__PVT__id_exe_inst_o 
                                                    >> 9U)) 
                                                | ((0x7e0U 
                                                    & (vlSelf->__PVT__id_exe_inst_o 
                                                       >> 0x14U)) 
                                                   | (0x1eU 
                                                      & (vlSelf->__PVT__id_exe_inst_o 
                                                         >> 0x14U)))))));
                                vlSelf->__PVT__exe_reg_waddr_o 
                                    = vlSelf->__PVT__id_exe_reg_waddr_o;
                            } else {
                                vlSelf->__PVT__exe_jump_addr_o = 0U;
                                vlSelf->__PVT__exe_reg_waddr_o = 0U;
                            }
                        } else {
                            vlSelf->__PVT__exe_mem_we_o = 0U;
                            vlSelf->__PVT__exe_mem_op_o = 0U;
                            vlSelf->__PVT__exe_mem_addr_o = 0U;
                            vlSelf->__PVT__exe_mem_data_o = 0U;
                            vlSelf->__PVT__exe_jump_addr_o = 0U;
                            vlSelf->__PVT__exe_stallreq_o = 0U;
                            vlSelf->__PVT__exe_reg_waddr_o = 0U;
                            vlSelf->__PVT__exe_reg_we_o = 0U;
                        }
                    } else {
                        vlSelf->__PVT__exe_mem_we_o = 0U;
                        vlSelf->__PVT__exe_mem_op_o = 0U;
                        vlSelf->__PVT__exe_mem_addr_o = 0U;
                        vlSelf->__PVT__exe_mem_data_o = 0U;
                        vlSelf->__PVT__exe_jump_addr_o = 0U;
                        vlSelf->__PVT__exe_stallreq_o = 0U;
                        vlSelf->__PVT__exe_reg_waddr_o = 0U;
                        vlSelf->__PVT__exe_reg_we_o = 0U;
                    }
                } else if ((4U & vlSelf->__PVT__id_exe_inst_o)) {
                    if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                        if ((1U & (~ vlSelf->__PVT__id_exe_inst_o))) {
                            vlSelf->__PVT__exe_mem_we_o = 0U;
                            vlSelf->__PVT__exe_mem_op_o = 0U;
                            vlSelf->__PVT__exe_mem_addr_o = 0U;
                            vlSelf->__PVT__exe_mem_data_o = 0U;
                            vlSelf->__PVT__exe_stallreq_o = 0U;
                            vlSelf->__PVT__exe_reg_we_o = 0U;
                        }
                        if ((1U & vlSelf->__PVT__id_exe_inst_o)) {
                            vlSelf->__PVT__exe_jump_addr_o 
                                = (vlSelf->__PVT__id_exe_op1_o 
                                   + (((- (IData)((vlSelf->__PVT__id_exe_inst_o 
                                                   >> 0x1fU))) 
                                       << 0xcU) | (vlSelf->__PVT__id_exe_inst_o 
                                                   >> 0x14U)));
                            vlSelf->__PVT__exe_reg_waddr_o 
                                = vlSelf->__PVT__id_exe_reg_waddr_o;
                        } else {
                            vlSelf->__PVT__exe_jump_addr_o = 0U;
                            vlSelf->__PVT__exe_reg_waddr_o = 0U;
                        }
                    } else {
                        vlSelf->__PVT__exe_mem_we_o = 0U;
                        vlSelf->__PVT__exe_mem_op_o = 0U;
                        vlSelf->__PVT__exe_mem_addr_o = 0U;
                        vlSelf->__PVT__exe_mem_data_o = 0U;
                        vlSelf->__PVT__exe_jump_addr_o = 0U;
                        vlSelf->__PVT__exe_stallreq_o = 0U;
                        vlSelf->__PVT__exe_reg_waddr_o = 0U;
                        vlSelf->__PVT__exe_reg_we_o = 0U;
                    }
                } else if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                    if ((1U & (~ vlSelf->__PVT__id_exe_inst_o))) {
                        vlSelf->__PVT__exe_mem_we_o = 0U;
                        vlSelf->__PVT__exe_mem_op_o = 0U;
                        vlSelf->__PVT__exe_mem_addr_o = 0U;
                        vlSelf->__PVT__exe_mem_data_o = 0U;
                        vlSelf->__PVT__exe_stallreq_o = 0U;
                        vlSelf->__PVT__exe_reg_waddr_o = 0U;
                        vlSelf->__PVT__exe_reg_we_o = 0U;
                    }
                    vlSelf->__PVT__exe_jump_addr_o 
                        = ((1U & vlSelf->__PVT__id_exe_inst_o)
                            ? ((0x4000U & vlSelf->__PVT__id_exe_inst_o)
                                ? ((0x2000U & vlSelf->__PVT__id_exe_inst_o)
                                    ? ((0x1000U & vlSelf->__PVT__id_exe_inst_o)
                                        ? (vlSelf->__PVT__id_exe_inst_addr_o 
                                           + (((- (IData)(
                                                          (vlSelf->__PVT__id_exe_inst_o 
                                                           >> 0x1fU))) 
                                               << 0xcU) 
                                              | ((0x800U 
                                                  & (vlSelf->__PVT__id_exe_inst_o 
                                                     << 4U)) 
                                                 | ((0x7e0U 
                                                     & (vlSelf->__PVT__id_exe_inst_o 
                                                        >> 0x14U)) 
                                                    | (0x1eU 
                                                       & (vlSelf->__PVT__id_exe_inst_o 
                                                          >> 7U))))))
                                        : (vlSelf->__PVT__id_exe_inst_addr_o 
                                           + (((- (IData)(
                                                          (vlSelf->__PVT__id_exe_inst_o 
                                                           >> 0x1fU))) 
                                               << 0xcU) 
                                              | ((0x800U 
                                                  & (vlSelf->__PVT__id_exe_inst_o 
                                                     << 4U)) 
                                                 | ((0x7e0U 
                                                     & (vlSelf->__PVT__id_exe_inst_o 
                                                        >> 0x14U)) 
                                                    | (0x1eU 
                                                       & (vlSelf->__PVT__id_exe_inst_o 
                                                          >> 7U)))))))
                                    : ((0x1000U & vlSelf->__PVT__id_exe_inst_o)
                                        ? (vlSelf->__PVT__id_exe_inst_addr_o 
                                           + (((- (IData)(
                                                          (vlSelf->__PVT__id_exe_inst_o 
                                                           >> 0x1fU))) 
                                               << 0xcU) 
                                              | ((0x800U 
                                                  & (vlSelf->__PVT__id_exe_inst_o 
                                                     << 4U)) 
                                                 | ((0x7e0U 
                                                     & (vlSelf->__PVT__id_exe_inst_o 
                                                        >> 0x14U)) 
                                                    | (0x1eU 
                                                       & (vlSelf->__PVT__id_exe_inst_o 
                                                          >> 7U))))))
                                        : (vlSelf->__PVT__id_exe_inst_addr_o 
                                           + (((- (IData)(
                                                          (vlSelf->__PVT__id_exe_inst_o 
                                                           >> 0x1fU))) 
                                               << 0xcU) 
                                              | ((0x800U 
                                                  & (vlSelf->__PVT__id_exe_inst_o 
                                                     << 4U)) 
                                                 | ((0x7e0U 
                                                     & (vlSelf->__PVT__id_exe_inst_o 
                                                        >> 0x14U)) 
                                                    | (0x1eU 
                                                       & (vlSelf->__PVT__id_exe_inst_o 
                                                          >> 7U))))))))
                                : ((0x2000U & vlSelf->__PVT__id_exe_inst_o)
                                    ? 0U : ((0x1000U 
                                             & vlSelf->__PVT__id_exe_inst_o)
                                             ? (vlSelf->__PVT__id_exe_inst_addr_o 
                                                + (
                                                   ((- (IData)(
                                                               (vlSelf->__PVT__id_exe_inst_o 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | ((0x800U 
                                                       & (vlSelf->__PVT__id_exe_inst_o 
                                                          << 4U)) 
                                                      | ((0x7e0U 
                                                          & (vlSelf->__PVT__id_exe_inst_o 
                                                             >> 0x14U)) 
                                                         | (0x1eU 
                                                            & (vlSelf->__PVT__id_exe_inst_o 
                                                               >> 7U))))))
                                             : (vlSelf->__PVT__id_exe_inst_addr_o 
                                                + (
                                                   ((- (IData)(
                                                               (vlSelf->__PVT__id_exe_inst_o 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | ((0x800U 
                                                       & (vlSelf->__PVT__id_exe_inst_o 
                                                          << 4U)) 
                                                      | ((0x7e0U 
                                                          & (vlSelf->__PVT__id_exe_inst_o 
                                                             >> 0x14U)) 
                                                         | (0x1eU 
                                                            & (vlSelf->__PVT__id_exe_inst_o 
                                                               >> 7U)))))))))
                            : 0U);
                } else {
                    vlSelf->__PVT__exe_mem_we_o = 0U;
                    vlSelf->__PVT__exe_mem_op_o = 0U;
                    vlSelf->__PVT__exe_mem_addr_o = 0U;
                    vlSelf->__PVT__exe_mem_data_o = 0U;
                    vlSelf->__PVT__exe_jump_addr_o = 0U;
                    vlSelf->__PVT__exe_stallreq_o = 0U;
                    vlSelf->__PVT__exe_reg_waddr_o = 0U;
                    vlSelf->__PVT__exe_reg_we_o = 0U;
                }
            } else {
                vlSelf->__PVT__exe_mem_we_o = 0U;
                vlSelf->__PVT__exe_mem_op_o = 0U;
                vlSelf->__PVT__exe_mem_addr_o = 0U;
                vlSelf->__PVT__exe_mem_data_o = 0U;
                vlSelf->__PVT__exe_jump_addr_o = 0U;
                vlSelf->__PVT__exe_stallreq_o = 0U;
                vlSelf->__PVT__exe_reg_waddr_o = 0U;
                vlSelf->__PVT__exe_reg_we_o = 0U;
            }
            vlSelf->__PVT__exe_jump_enable_o = (1U 
                                                & (IData)(
                                                          ((0x20U 
                                                            == 
                                                            (0x30U 
                                                             & vlSelf->__PVT__id_exe_inst_o)) 
                                                           & ((8U 
                                                               & vlSelf->__PVT__id_exe_inst_o)
                                                               ? (IData)(
                                                                         (7U 
                                                                          == 
                                                                          (7U 
                                                                           & vlSelf->__PVT__id_exe_inst_o)))
                                                               : 
                                                              ((4U 
                                                                & vlSelf->__PVT__id_exe_inst_o)
                                                                ? 
                                                               ((vlSelf->__PVT__id_exe_inst_o 
                                                                 >> 1U) 
                                                                & vlSelf->__PVT__id_exe_inst_o)
                                                                : 
                                                               ((vlSelf->__PVT__id_exe_inst_o 
                                                                 >> 1U) 
                                                                & (vlSelf->__PVT__id_exe_inst_o 
                                                                   & ((0x4000U 
                                                                       & vlSelf->__PVT__id_exe_inst_o)
                                                                       ? 
                                                                      ((0x2000U 
                                                                        & vlSelf->__PVT__id_exe_inst_o)
                                                                        ? 
                                                                       ((0x1000U 
                                                                         & vlSelf->__PVT__id_exe_inst_o)
                                                                         ? 
                                                                        ((vlSelf->__PVT__id_exe_op1_o 
                                                                          >= vlSelf->__PVT__id_exe_op2_o)
                                                                          ? 1U
                                                                          : 0U)
                                                                         : 
                                                                        ((vlSelf->__PVT__id_exe_op1_o 
                                                                          < vlSelf->__PVT__id_exe_op2_o)
                                                                          ? 1U
                                                                          : 0U))
                                                                        : 
                                                                       ((0x1000U 
                                                                         & vlSelf->__PVT__id_exe_inst_o)
                                                                         ? 
                                                                        (VL_GTES_III(32, vlSelf->__PVT__id_exe_op1_o, vlSelf->__PVT__id_exe_op2_o)
                                                                          ? 1U
                                                                          : 0U)
                                                                         : 
                                                                        (VL_LTS_III(32, vlSelf->__PVT__id_exe_op1_o, vlSelf->__PVT__id_exe_op2_o)
                                                                          ? 1U
                                                                          : 0U)))
                                                                       : 
                                                                      ((~ 
                                                                        (vlSelf->__PVT__id_exe_inst_o 
                                                                         >> 0xdU)) 
                                                                       & ((0x1000U 
                                                                           & vlSelf->__PVT__id_exe_inst_o)
                                                                           ? 
                                                                          (~ (IData)(vlSelf->__PVT__exe0__DOT__op1_eq_op2))
                                                                           : (IData)(vlSelf->__PVT__exe0__DOT__op1_eq_op2)))))))))));
        } else if ((0x20U & vlSelf->__PVT__id_exe_inst_o)) {
            if ((0x10U & vlSelf->__PVT__id_exe_inst_o)) {
                if ((8U & vlSelf->__PVT__id_exe_inst_o)) {
                    vlSelf->__PVT__exe_mem_we_o = 0U;
                    vlSelf->__PVT__exe_mem_op_o = 0U;
                    vlSelf->__PVT__exe_mem_addr_o = 0U;
                    vlSelf->__PVT__exe_mem_data_o = 0U;
                    vlSelf->__PVT__exe_jump_addr_o = 0U;
                    vlSelf->__PVT__exe_stallreq_o = 0U;
                    vlSelf->__PVT__exe_jump_enable_o = 0U;
                    vlSelf->__PVT__exe_reg_waddr_o = 0U;
                    vlSelf->__PVT__exe_reg_we_o = 0U;
                } else if ((4U & vlSelf->__PVT__id_exe_inst_o)) {
                    if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                        if ((1U & (~ vlSelf->__PVT__id_exe_inst_o))) {
                            vlSelf->__PVT__exe_mem_we_o = 0U;
                            vlSelf->__PVT__exe_mem_op_o = 0U;
                            vlSelf->__PVT__exe_mem_addr_o = 0U;
                            vlSelf->__PVT__exe_mem_data_o = 0U;
                            vlSelf->__PVT__exe_jump_addr_o = 0U;
                            vlSelf->__PVT__exe_stallreq_o = 0U;
                            vlSelf->__PVT__exe_jump_enable_o = 0U;
                            vlSelf->__PVT__exe_reg_we_o = 0U;
                        }
                        vlSelf->__PVT__exe_reg_waddr_o 
                            = ((1U & vlSelf->__PVT__id_exe_inst_o)
                                ? (IData)(vlSelf->__PVT__id_exe_reg_waddr_o)
                                : 0U);
                    } else {
                        vlSelf->__PVT__exe_mem_we_o = 0U;
                        vlSelf->__PVT__exe_mem_op_o = 0U;
                        vlSelf->__PVT__exe_mem_addr_o = 0U;
                        vlSelf->__PVT__exe_mem_data_o = 0U;
                        vlSelf->__PVT__exe_jump_addr_o = 0U;
                        vlSelf->__PVT__exe_stallreq_o = 0U;
                        vlSelf->__PVT__exe_jump_enable_o = 0U;
                        vlSelf->__PVT__exe_reg_waddr_o = 0U;
                        vlSelf->__PVT__exe_reg_we_o = 0U;
                    }
                } else if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                    if ((1U & (~ vlSelf->__PVT__id_exe_inst_o))) {
                        vlSelf->__PVT__exe_mem_we_o = 0U;
                        vlSelf->__PVT__exe_mem_op_o = 0U;
                        vlSelf->__PVT__exe_mem_addr_o = 0U;
                        vlSelf->__PVT__exe_mem_data_o = 0U;
                        vlSelf->__PVT__exe_jump_addr_o = 0U;
                        vlSelf->__PVT__exe_stallreq_o = 0U;
                        vlSelf->__PVT__exe_jump_enable_o = 0U;
                    }
                    if ((1U & vlSelf->__PVT__id_exe_inst_o)) {
                        vlSelf->__PVT__exe_reg_waddr_o 
                            = vlSelf->__PVT__id_exe_reg_waddr_o;
                        vlSelf->__PVT__exe_reg_we_o = 1U;
                        if (vlSelf->__PVT__exe0__DOT__isType_r) {
                            if ((0x4000U & vlSelf->__PVT__id_exe_inst_o)) {
                                if ((1U & (~ (vlSelf->__PVT__id_exe_inst_o 
                                              >> 0xdU)))) {
                                    if ((0x1000U & vlSelf->__PVT__id_exe_inst_o)) {
                                        if ((0U != 
                                             (vlSelf->__PVT__id_exe_inst_o 
                                              >> 0x19U))) {
                                            if ((0x20U 
                                                 != 
                                                 (vlSelf->__PVT__id_exe_inst_o 
                                                  >> 0x19U))) {
                                                vlSelf->__PVT__exe_reg_waddr_o = 0U;
                                                vlSelf->__PVT__exe_reg_we_o = 0U;
                                            }
                                        }
                                    }
                                }
                            } else if ((1U & (~ (vlSelf->__PVT__id_exe_inst_o 
                                                 >> 0xdU)))) {
                                if ((1U & (~ (vlSelf->__PVT__id_exe_inst_o 
                                              >> 0xcU)))) {
                                    if ((0U != (vlSelf->__PVT__id_exe_inst_o 
                                                >> 0x19U))) {
                                        if ((0x20U 
                                             != (vlSelf->__PVT__id_exe_inst_o 
                                                 >> 0x19U))) {
                                            vlSelf->__PVT__exe_reg_we_o = 0U;
                                        }
                                    }
                                }
                            }
                        } else {
                            if ((1U & (~ (IData)(vlSelf->__PVT__exe0__DOT__isType_m)))) {
                                vlSelf->__PVT__exe_reg_waddr_o = 0U;
                            }
                            if (vlSelf->__PVT__exe0__DOT__isType_m) {
                                if ((0x4000U & vlSelf->__PVT__id_exe_inst_o)) {
                                    vlSelf->__PVT__exe_reg_we_o = 0U;
                                }
                            } else {
                                vlSelf->__PVT__exe_reg_we_o = 0U;
                            }
                        }
                    } else {
                        vlSelf->__PVT__exe_reg_waddr_o = 0U;
                        vlSelf->__PVT__exe_reg_we_o = 0U;
                    }
                } else {
                    vlSelf->__PVT__exe_mem_we_o = 0U;
                    vlSelf->__PVT__exe_mem_op_o = 0U;
                    vlSelf->__PVT__exe_mem_addr_o = 0U;
                    vlSelf->__PVT__exe_mem_data_o = 0U;
                    vlSelf->__PVT__exe_jump_addr_o = 0U;
                    vlSelf->__PVT__exe_stallreq_o = 0U;
                    vlSelf->__PVT__exe_jump_enable_o = 0U;
                    vlSelf->__PVT__exe_reg_waddr_o = 0U;
                    vlSelf->__PVT__exe_reg_we_o = 0U;
                }
            } else {
                vlSelf->__PVT__exe_mem_we_o = (IData)(
                                                      (3U 
                                                       == 
                                                       (0xfU 
                                                        & vlSelf->__PVT__id_exe_inst_o)));
                if ((8U & vlSelf->__PVT__id_exe_inst_o)) {
                    vlSelf->__PVT__exe_mem_op_o = 0U;
                    vlSelf->__PVT__exe_mem_addr_o = 0U;
                    vlSelf->__PVT__exe_mem_data_o = 0U;
                    vlSelf->__PVT__exe_jump_addr_o = 0U;
                    vlSelf->__PVT__exe_stallreq_o = 0U;
                    vlSelf->__PVT__exe_jump_enable_o = 0U;
                } else if ((4U & vlSelf->__PVT__id_exe_inst_o)) {
                    vlSelf->__PVT__exe_mem_op_o = 0U;
                    vlSelf->__PVT__exe_mem_addr_o = 0U;
                    vlSelf->__PVT__exe_mem_data_o = 0U;
                    vlSelf->__PVT__exe_jump_addr_o = 0U;
                    vlSelf->__PVT__exe_stallreq_o = 0U;
                    vlSelf->__PVT__exe_jump_enable_o = 0U;
                } else if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                    if ((1U & vlSelf->__PVT__id_exe_inst_o)) {
                        vlSelf->__PVT__exe_mem_op_o 
                            = ((0U == (7U & (vlSelf->__PVT__id_exe_inst_o 
                                             >> 0xcU)))
                                ? 1U : ((1U == (7U 
                                                & (vlSelf->__PVT__id_exe_inst_o 
                                                   >> 0xcU)))
                                         ? 2U : ((2U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->__PVT__id_exe_inst_o 
                                                      >> 0xcU)))
                                                  ? 3U
                                                  : 0U)));
                        vlSelf->__PVT__exe_mem_addr_o 
                            = (vlSelf->__PVT__id_exe_op1_o 
                               + (((- (IData)((vlSelf->__PVT__id_exe_inst_o 
                                               >> 0x1fU))) 
                                   << 0xcU) | ((0xfe0U 
                                                & (vlSelf->__PVT__id_exe_inst_o 
                                                   >> 0x14U)) 
                                               | (0x1fU 
                                                  & (vlSelf->__PVT__id_exe_inst_o 
                                                     >> 7U)))));
                        vlSelf->__PVT__exe_mem_data_o 
                            = vlSelf->__PVT__id_exe_op2_o;
                    } else {
                        vlSelf->__PVT__exe_mem_op_o = 0U;
                        vlSelf->__PVT__exe_mem_addr_o = 0U;
                        vlSelf->__PVT__exe_mem_data_o = 0U;
                    }
                    if ((1U & (~ vlSelf->__PVT__id_exe_inst_o))) {
                        vlSelf->__PVT__exe_jump_addr_o = 0U;
                        vlSelf->__PVT__exe_stallreq_o = 0U;
                        vlSelf->__PVT__exe_jump_enable_o = 0U;
                    }
                } else {
                    vlSelf->__PVT__exe_mem_op_o = 0U;
                    vlSelf->__PVT__exe_mem_addr_o = 0U;
                    vlSelf->__PVT__exe_mem_data_o = 0U;
                    vlSelf->__PVT__exe_jump_addr_o = 0U;
                    vlSelf->__PVT__exe_stallreq_o = 0U;
                    vlSelf->__PVT__exe_jump_enable_o = 0U;
                }
                vlSelf->__PVT__exe_reg_waddr_o = 0U;
                vlSelf->__PVT__exe_reg_we_o = 0U;
            }
        } else if ((0x10U & vlSelf->__PVT__id_exe_inst_o)) {
            if ((8U & vlSelf->__PVT__id_exe_inst_o)) {
                vlSelf->__PVT__exe_mem_we_o = 0U;
                vlSelf->__PVT__exe_mem_op_o = 0U;
                vlSelf->__PVT__exe_mem_addr_o = 0U;
                vlSelf->__PVT__exe_mem_data_o = 0U;
                vlSelf->__PVT__exe_jump_addr_o = 0U;
                vlSelf->__PVT__exe_stallreq_o = 0U;
                vlSelf->__PVT__exe_jump_enable_o = 0U;
                vlSelf->__PVT__exe_reg_waddr_o = 0U;
                vlSelf->__PVT__exe_reg_we_o = 0U;
            } else if ((4U & vlSelf->__PVT__id_exe_inst_o)) {
                if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                    if ((1U & (~ vlSelf->__PVT__id_exe_inst_o))) {
                        vlSelf->__PVT__exe_mem_we_o = 0U;
                        vlSelf->__PVT__exe_mem_op_o = 0U;
                        vlSelf->__PVT__exe_mem_addr_o = 0U;
                        vlSelf->__PVT__exe_mem_data_o = 0U;
                        vlSelf->__PVT__exe_jump_addr_o = 0U;
                        vlSelf->__PVT__exe_stallreq_o = 0U;
                        vlSelf->__PVT__exe_jump_enable_o = 0U;
                        vlSelf->__PVT__exe_reg_we_o = 0U;
                    }
                    vlSelf->__PVT__exe_reg_waddr_o 
                        = ((1U & vlSelf->__PVT__id_exe_inst_o)
                            ? (IData)(vlSelf->__PVT__id_exe_reg_waddr_o)
                            : 0U);
                } else {
                    vlSelf->__PVT__exe_mem_we_o = 0U;
                    vlSelf->__PVT__exe_mem_op_o = 0U;
                    vlSelf->__PVT__exe_mem_addr_o = 0U;
                    vlSelf->__PVT__exe_mem_data_o = 0U;
                    vlSelf->__PVT__exe_jump_addr_o = 0U;
                    vlSelf->__PVT__exe_stallreq_o = 0U;
                    vlSelf->__PVT__exe_jump_enable_o = 0U;
                    vlSelf->__PVT__exe_reg_waddr_o = 0U;
                    vlSelf->__PVT__exe_reg_we_o = 0U;
                }
            } else if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                if ((1U & (~ vlSelf->__PVT__id_exe_inst_o))) {
                    vlSelf->__PVT__exe_mem_we_o = 0U;
                    vlSelf->__PVT__exe_mem_op_o = 0U;
                    vlSelf->__PVT__exe_mem_addr_o = 0U;
                    vlSelf->__PVT__exe_mem_data_o = 0U;
                    vlSelf->__PVT__exe_jump_addr_o = 0U;
                    vlSelf->__PVT__exe_stallreq_o = 0U;
                    vlSelf->__PVT__exe_jump_enable_o = 0U;
                }
                if ((1U & vlSelf->__PVT__id_exe_inst_o)) {
                    if ((0x4000U & vlSelf->__PVT__id_exe_inst_o)) {
                        if ((0x2000U & vlSelf->__PVT__id_exe_inst_o)) {
                            vlSelf->__PVT__exe_reg_waddr_o 
                                = vlSelf->__PVT__id_exe_reg_waddr_o;
                        } else if ((0x1000U & vlSelf->__PVT__id_exe_inst_o)) {
                            vlSelf->__PVT__exe_reg_waddr_o 
                                = vlSelf->__PVT__id_exe_reg_waddr_o;
                            if ((0U != (vlSelf->__PVT__id_exe_inst_o 
                                        >> 0x19U))) {
                                if ((0x20U != (vlSelf->__PVT__id_exe_inst_o 
                                               >> 0x19U))) {
                                    vlSelf->__PVT__exe_reg_waddr_o = 0U;
                                }
                            }
                        } else {
                            vlSelf->__PVT__exe_reg_waddr_o 
                                = vlSelf->__PVT__id_exe_reg_waddr_o;
                        }
                        if ((1U & (~ (vlSelf->__PVT__id_exe_inst_o 
                                      >> 0xdU)))) {
                            if ((0x1000U & vlSelf->__PVT__id_exe_inst_o)) {
                                if ((0U != (vlSelf->__PVT__id_exe_inst_o 
                                            >> 0x19U))) {
                                    if ((0x20U != (vlSelf->__PVT__id_exe_inst_o 
                                                   >> 0x19U))) {
                                        vlSelf->__PVT__exe_reg_we_o = 0U;
                                    }
                                }
                            }
                        }
                    } else {
                        vlSelf->__PVT__exe_reg_waddr_o 
                            = vlSelf->__PVT__id_exe_reg_waddr_o;
                    }
                } else {
                    vlSelf->__PVT__exe_reg_waddr_o = 0U;
                    vlSelf->__PVT__exe_reg_we_o = 0U;
                }
            } else {
                vlSelf->__PVT__exe_mem_we_o = 0U;
                vlSelf->__PVT__exe_mem_op_o = 0U;
                vlSelf->__PVT__exe_mem_addr_o = 0U;
                vlSelf->__PVT__exe_mem_data_o = 0U;
                vlSelf->__PVT__exe_jump_addr_o = 0U;
                vlSelf->__PVT__exe_stallreq_o = 0U;
                vlSelf->__PVT__exe_jump_enable_o = 0U;
                vlSelf->__PVT__exe_reg_waddr_o = 0U;
                vlSelf->__PVT__exe_reg_we_o = 0U;
            }
        } else {
            vlSelf->__PVT__exe_mem_we_o = 0U;
            if ((8U & vlSelf->__PVT__id_exe_inst_o)) {
                vlSelf->__PVT__exe_mem_op_o = 0U;
                vlSelf->__PVT__exe_mem_addr_o = 0U;
                vlSelf->__PVT__exe_jump_addr_o = 0U;
                vlSelf->__PVT__exe_stallreq_o = 0U;
                vlSelf->__PVT__exe_jump_enable_o = 0U;
                vlSelf->__PVT__exe_reg_waddr_o = 0U;
            } else if ((4U & vlSelf->__PVT__id_exe_inst_o)) {
                vlSelf->__PVT__exe_mem_op_o = 0U;
                vlSelf->__PVT__exe_mem_addr_o = 0U;
                vlSelf->__PVT__exe_jump_addr_o = 0U;
                vlSelf->__PVT__exe_stallreq_o = 0U;
                vlSelf->__PVT__exe_jump_enable_o = 0U;
                vlSelf->__PVT__exe_reg_waddr_o = 0U;
            } else if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                if ((1U & vlSelf->__PVT__id_exe_inst_o)) {
                    vlSelf->__PVT__exe_mem_op_o = (
                                                   (0x4000U 
                                                    & vlSelf->__PVT__id_exe_inst_o)
                                                    ? 
                                                   ((0x2000U 
                                                     & vlSelf->__PVT__id_exe_inst_o)
                                                     ? 0U
                                                     : 
                                                    ((0x1000U 
                                                      & vlSelf->__PVT__id_exe_inst_o)
                                                      ? 0xdU
                                                      : 0xcU))
                                                    : 
                                                   ((0x2000U 
                                                     & vlSelf->__PVT__id_exe_inst_o)
                                                     ? 
                                                    ((0x1000U 
                                                      & vlSelf->__PVT__id_exe_inst_o)
                                                      ? 0U
                                                      : 0xbU)
                                                     : 
                                                    ((0x1000U 
                                                      & vlSelf->__PVT__id_exe_inst_o)
                                                      ? 0xaU
                                                      : 9U)));
                    vlSelf->__PVT__exe_mem_addr_o = 
                        (vlSelf->__PVT__id_exe_op1_o 
                         + (((- (IData)((vlSelf->__PVT__id_exe_inst_o 
                                         >> 0x1fU))) 
                             << 0xcU) | (vlSelf->__PVT__id_exe_inst_o 
                                         >> 0x14U)));
                    vlSelf->__PVT__exe_reg_waddr_o 
                        = vlSelf->__PVT__id_exe_reg_waddr_o;
                } else {
                    vlSelf->__PVT__exe_mem_op_o = 0U;
                    vlSelf->__PVT__exe_mem_addr_o = 0U;
                    vlSelf->__PVT__exe_reg_waddr_o = 0U;
                }
                if ((1U & (~ vlSelf->__PVT__id_exe_inst_o))) {
                    vlSelf->__PVT__exe_jump_addr_o = 0U;
                    vlSelf->__PVT__exe_stallreq_o = 0U;
                    vlSelf->__PVT__exe_jump_enable_o = 0U;
                }
            } else {
                vlSelf->__PVT__exe_mem_op_o = 0U;
                vlSelf->__PVT__exe_mem_addr_o = 0U;
                vlSelf->__PVT__exe_jump_addr_o = 0U;
                vlSelf->__PVT__exe_stallreq_o = 0U;
                vlSelf->__PVT__exe_jump_enable_o = 0U;
                vlSelf->__PVT__exe_reg_waddr_o = 0U;
            }
            vlSelf->__PVT__exe_mem_data_o = 0U;
            vlSelf->__PVT__exe_reg_we_o = (IData)((3U 
                                                   == 
                                                   (0xfU 
                                                    & vlSelf->__PVT__id_exe_inst_o)));
        }
        vlSelf->__PVT__exe0__DOT__mult_req_o = 0U;
        if ((1U & (~ (vlSelf->__PVT__id_exe_inst_o 
                      >> 6U)))) {
            if ((0x20U & vlSelf->__PVT__id_exe_inst_o)) {
                if ((0x10U & vlSelf->__PVT__id_exe_inst_o)) {
                    if ((1U & (~ (vlSelf->__PVT__id_exe_inst_o 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSelf->__PVT__id_exe_inst_o 
                                      >> 2U)))) {
                            if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                                if ((1U & vlSelf->__PVT__id_exe_inst_o)) {
                                    if ((1U & (~ (IData)(vlSelf->__PVT__exe0__DOT__isType_r)))) {
                                        if (vlSelf->__PVT__exe0__DOT__isType_m) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->__PVT__id_exe_inst_o 
                                                     >> 0xeU)))) {
                                                vlSelf->__PVT__exe0__DOT__mult_req_o = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->__PVT__exe_stallreq_o = (((~ (IData)(vlSelf->__PVT__exe0__DOT__mult_ready_i)) 
                                      & (IData)(vlSelf->__PVT__exe0__DOT__mult_req_o)) 
                                     | ((~ (IData)(vlSelf->__PVT__exe0__DOT__div_ready_i)) 
                                        & (IData)(vlSelf->__PVT__exe0__DOT__div_req_o)));
    vlSelf->__PVT__exe0__DOT__invert_result = ((IData)(vlSelf->__PVT__exe0__DOT__mult_req_o)
                                                ? (1ULL 
                                                   + 
                                                   (~ vlSelf->__PVT__exe0__DOT__mult_result_i))
                                                : 0ULL);
    if (vlSymsp->TOP.rst_i) {
        vlSelf->__PVT__id_reg_waddr_o = 0U;
        vlSelf->__PVT__id_reg2_addr_o = 0U;
        vlSelf->__PVT__id_reg1_addr_o = 0U;
        vlSelf->__PVT__ctrl_stall_o = 0U;
        vlSelf->__PVT__exe_reg_wdata_o = 0U;
    } else {
        if ((0x40U & vlSelf->__PVT__if_id_inst_o)) {
            if ((0x20U & vlSelf->__PVT__if_id_inst_o)) {
                if ((0x10U & vlSelf->__PVT__if_id_inst_o)) {
                    vlSelf->__PVT__id_reg_waddr_o = 
                        (0x1fU & 0U);
                    vlSelf->__PVT__id_reg2_addr_o = 
                        (0x1fU & 0U);
                    vlSelf->__PVT__id_reg1_addr_o = 
                        (0x1fU & 0U);
                } else if ((8U & vlSelf->__PVT__if_id_inst_o)) {
                    vlSelf->__PVT__id_reg_waddr_o = 
                        (0x1fU & ((4U & vlSelf->__PVT__if_id_inst_o)
                                   ? ((2U & vlSelf->__PVT__if_id_inst_o)
                                       ? ((1U & vlSelf->__PVT__if_id_inst_o)
                                           ? (vlSelf->__PVT__if_id_inst_o 
                                              >> 7U)
                                           : 0U) : 0U)
                                   : 0U));
                    vlSelf->__PVT__id_reg2_addr_o = 
                        (0x1fU & 0U);
                    vlSelf->__PVT__id_reg1_addr_o = 
                        (0x1fU & 0U);
                } else if ((4U & vlSelf->__PVT__if_id_inst_o)) {
                    if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                        if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                            vlSelf->__PVT__id_reg_waddr_o 
                                = (0x1fU & (vlSelf->__PVT__if_id_inst_o 
                                            >> 7U));
                            vlSelf->__PVT__id_reg1_addr_o 
                                = (0x1fU & (vlSelf->__PVT__if_id_inst_o 
                                            >> 0xfU));
                        } else {
                            vlSelf->__PVT__id_reg_waddr_o 
                                = (0x1fU & 0U);
                            vlSelf->__PVT__id_reg1_addr_o 
                                = (0x1fU & 0U);
                        }
                    } else {
                        vlSelf->__PVT__id_reg_waddr_o 
                            = (0x1fU & 0U);
                        vlSelf->__PVT__id_reg1_addr_o 
                            = (0x1fU & 0U);
                    }
                    vlSelf->__PVT__id_reg2_addr_o = 
                        (0x1fU & 0U);
                } else {
                    vlSelf->__PVT__id_reg_waddr_o = 
                        (0x1fU & 0U);
                    if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                        if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                            vlSelf->__PVT__id_reg2_addr_o 
                                = (0x1fU & (vlSelf->__PVT__if_id_inst_o 
                                            >> 0x14U));
                            vlSelf->__PVT__id_reg1_addr_o 
                                = (0x1fU & (vlSelf->__PVT__if_id_inst_o 
                                            >> 0xfU));
                        } else {
                            vlSelf->__PVT__id_reg2_addr_o 
                                = (0x1fU & 0U);
                            vlSelf->__PVT__id_reg1_addr_o 
                                = (0x1fU & 0U);
                        }
                    } else {
                        vlSelf->__PVT__id_reg2_addr_o 
                            = (0x1fU & 0U);
                        vlSelf->__PVT__id_reg1_addr_o 
                            = (0x1fU & 0U);
                    }
                }
            } else {
                vlSelf->__PVT__id_reg_waddr_o = (0x1fU 
                                                 & 0U);
                vlSelf->__PVT__id_reg2_addr_o = (0x1fU 
                                                 & 0U);
                vlSelf->__PVT__id_reg1_addr_o = (0x1fU 
                                                 & 0U);
            }
        } else if ((0x20U & vlSelf->__PVT__if_id_inst_o)) {
            if ((0x10U & vlSelf->__PVT__if_id_inst_o)) {
                if ((8U & vlSelf->__PVT__if_id_inst_o)) {
                    vlSelf->__PVT__id_reg_waddr_o = 
                        (0x1fU & 0U);
                    vlSelf->__PVT__id_reg2_addr_o = 
                        (0x1fU & 0U);
                    vlSelf->__PVT__id_reg1_addr_o = 
                        (0x1fU & 0U);
                } else if ((4U & vlSelf->__PVT__if_id_inst_o)) {
                    vlSelf->__PVT__id_reg_waddr_o = 
                        (0x1fU & ((2U & vlSelf->__PVT__if_id_inst_o)
                                   ? ((1U & vlSelf->__PVT__if_id_inst_o)
                                       ? (vlSelf->__PVT__if_id_inst_o 
                                          >> 7U) : 0U)
                                   : 0U));
                    vlSelf->__PVT__id_reg2_addr_o = 
                        (0x1fU & 0U);
                    vlSelf->__PVT__id_reg1_addr_o = 
                        (0x1fU & 0U);
                } else if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                    if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                        if (vlSelf->id0__DOT__inst_type_r__DOT____VdfgExtracted_he1154c64__0) {
                            vlSelf->__PVT__id_reg_waddr_o 
                                = (0x1fU & (vlSelf->__PVT__if_id_inst_o 
                                            >> 7U));
                            vlSelf->__PVT__id_reg2_addr_o 
                                = (0x1fU & (vlSelf->__PVT__if_id_inst_o 
                                            >> 0x14U));
                            vlSelf->__PVT__id_reg1_addr_o 
                                = (0x1fU & (vlSelf->__PVT__if_id_inst_o 
                                            >> 0xfU));
                        } else {
                            vlSelf->__PVT__id_reg_waddr_o 
                                = (0x1fU & 0U);
                            vlSelf->__PVT__id_reg2_addr_o 
                                = (0x1fU & 0U);
                            vlSelf->__PVT__id_reg1_addr_o 
                                = (0x1fU & 0U);
                        }
                    } else {
                        vlSelf->__PVT__id_reg_waddr_o 
                            = (0x1fU & 0U);
                        vlSelf->__PVT__id_reg2_addr_o 
                            = (0x1fU & 0U);
                        vlSelf->__PVT__id_reg1_addr_o 
                            = (0x1fU & 0U);
                    }
                } else {
                    vlSelf->__PVT__id_reg_waddr_o = 
                        (0x1fU & 0U);
                    vlSelf->__PVT__id_reg2_addr_o = 
                        (0x1fU & 0U);
                    vlSelf->__PVT__id_reg1_addr_o = 
                        (0x1fU & 0U);
                }
            } else {
                vlSelf->__PVT__id_reg_waddr_o = (0x1fU 
                                                 & 0U);
                if ((8U & vlSelf->__PVT__if_id_inst_o)) {
                    vlSelf->__PVT__id_reg2_addr_o = 
                        (0x1fU & 0U);
                    vlSelf->__PVT__id_reg1_addr_o = 
                        (0x1fU & 0U);
                } else if ((4U & vlSelf->__PVT__if_id_inst_o)) {
                    vlSelf->__PVT__id_reg2_addr_o = 
                        (0x1fU & 0U);
                    vlSelf->__PVT__id_reg1_addr_o = 
                        (0x1fU & 0U);
                } else if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                    if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                        vlSelf->__PVT__id_reg2_addr_o 
                            = (0x1fU & (vlSelf->__PVT__if_id_inst_o 
                                        >> 0x14U));
                        vlSelf->__PVT__id_reg1_addr_o 
                            = (0x1fU & (vlSelf->__PVT__if_id_inst_o 
                                        >> 0xfU));
                    } else {
                        vlSelf->__PVT__id_reg2_addr_o 
                            = (0x1fU & 0U);
                        vlSelf->__PVT__id_reg1_addr_o 
                            = (0x1fU & 0U);
                    }
                } else {
                    vlSelf->__PVT__id_reg2_addr_o = 
                        (0x1fU & 0U);
                    vlSelf->__PVT__id_reg1_addr_o = 
                        (0x1fU & 0U);
                }
            }
        } else {
            if ((0x10U & vlSelf->__PVT__if_id_inst_o)) {
                if ((8U & vlSelf->__PVT__if_id_inst_o)) {
                    vlSelf->__PVT__id_reg_waddr_o = 
                        (0x1fU & 0U);
                    vlSelf->__PVT__id_reg1_addr_o = 
                        (0x1fU & 0U);
                } else if ((4U & vlSelf->__PVT__if_id_inst_o)) {
                    vlSelf->__PVT__id_reg_waddr_o = 
                        (0x1fU & ((2U & vlSelf->__PVT__if_id_inst_o)
                                   ? ((1U & vlSelf->__PVT__if_id_inst_o)
                                       ? (vlSelf->__PVT__if_id_inst_o 
                                          >> 7U) : 0U)
                                   : 0U));
                    vlSelf->__PVT__id_reg1_addr_o = 
                        (0x1fU & 0U);
                } else if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                    if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                        if ((0x2000U & vlSelf->__PVT__if_id_inst_o)) {
                            vlSelf->__PVT__id_reg_waddr_o 
                                = (0x1fU & (vlSelf->__PVT__if_id_inst_o 
                                            >> 7U));
                            vlSelf->__PVT__id_reg1_addr_o 
                                = (0x1fU & (vlSelf->__PVT__if_id_inst_o 
                                            >> 0xfU));
                        } else if ((0x1000U & vlSelf->__PVT__if_id_inst_o)) {
                            vlSelf->__PVT__id_reg_waddr_o 
                                = (0x1fU & (vlSelf->__PVT__if_id_inst_o 
                                            >> 7U));
                            vlSelf->__PVT__id_reg1_addr_o 
                                = (0x1fU & (vlSelf->__PVT__if_id_inst_o 
                                            >> 0xfU));
                        } else {
                            vlSelf->__PVT__id_reg_waddr_o 
                                = (0x1fU & (vlSelf->__PVT__if_id_inst_o 
                                            >> 7U));
                            vlSelf->__PVT__id_reg1_addr_o 
                                = (0x1fU & (vlSelf->__PVT__if_id_inst_o 
                                            >> 0xfU));
                        }
                    } else {
                        vlSelf->__PVT__id_reg_waddr_o 
                            = (0x1fU & 0U);
                        vlSelf->__PVT__id_reg1_addr_o 
                            = (0x1fU & 0U);
                    }
                } else {
                    vlSelf->__PVT__id_reg_waddr_o = 
                        (0x1fU & 0U);
                    vlSelf->__PVT__id_reg1_addr_o = 
                        (0x1fU & 0U);
                }
            } else if ((8U & vlSelf->__PVT__if_id_inst_o)) {
                vlSelf->__PVT__id_reg_waddr_o = (0x1fU 
                                                 & 0U);
                vlSelf->__PVT__id_reg1_addr_o = (0x1fU 
                                                 & 0U);
            } else if ((4U & vlSelf->__PVT__if_id_inst_o)) {
                vlSelf->__PVT__id_reg_waddr_o = (0x1fU 
                                                 & 0U);
                vlSelf->__PVT__id_reg1_addr_o = (0x1fU 
                                                 & 0U);
            } else if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                    vlSelf->__PVT__id_reg_waddr_o = 
                        (0x1fU & (vlSelf->__PVT__if_id_inst_o 
                                  >> 7U));
                    vlSelf->__PVT__id_reg1_addr_o = 
                        (0x1fU & (vlSelf->__PVT__if_id_inst_o 
                                  >> 0xfU));
                } else {
                    vlSelf->__PVT__id_reg_waddr_o = 
                        (0x1fU & 0U);
                    vlSelf->__PVT__id_reg1_addr_o = 
                        (0x1fU & 0U);
                }
            } else {
                vlSelf->__PVT__id_reg_waddr_o = (0x1fU 
                                                 & 0U);
                vlSelf->__PVT__id_reg1_addr_o = (0x1fU 
                                                 & 0U);
            }
            vlSelf->__PVT__id_reg2_addr_o = (0x1fU 
                                             & 0U);
        }
        vlSelf->__PVT__ctrl_stall_o = ((IData)(vlSelf->__PVT__exe_stallreq_o)
                                        ? 0xfU : (((IData)(vlSelf->__PVT__id_exe_inst_is_load_o) 
                                                   & (((0x1fU 
                                                        & (vlSelf->__PVT__if_id_inst_o 
                                                           >> 0xfU)) 
                                                       == (IData)(vlSelf->__PVT__id_exe_rd_o)) 
                                                      | ((0x1fU 
                                                          & (vlSelf->__PVT__if_id_inst_o 
                                                             >> 0x14U)) 
                                                         == (IData)(vlSelf->__PVT__id_exe_rd_o))))
                                                   ? 7U
                                                   : 0U));
        if ((0x40U & vlSelf->__PVT__id_exe_inst_o)) {
            if ((0x20U & vlSelf->__PVT__id_exe_inst_o)) {
                if ((0x10U & vlSelf->__PVT__id_exe_inst_o)) {
                    vlSelf->__PVT__exe_reg_wdata_o = 0U;
                } else if ((8U & vlSelf->__PVT__id_exe_inst_o)) {
                    vlSelf->__PVT__exe_reg_wdata_o 
                        = ((4U & vlSelf->__PVT__id_exe_inst_o)
                            ? ((2U & vlSelf->__PVT__id_exe_inst_o)
                                ? ((1U & vlSelf->__PVT__id_exe_inst_o)
                                    ? ((IData)(4U) 
                                       + vlSelf->__PVT__id_exe_inst_addr_o)
                                    : 0U) : 0U) : 0U);
                } else if ((4U & vlSelf->__PVT__id_exe_inst_o)) {
                    vlSelf->__PVT__exe_reg_wdata_o 
                        = ((2U & vlSelf->__PVT__id_exe_inst_o)
                            ? ((1U & vlSelf->__PVT__id_exe_inst_o)
                                ? ((IData)(4U) + vlSelf->__PVT__id_exe_inst_addr_o)
                                : 0U) : 0U);
                } else if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                    if ((1U & (~ vlSelf->__PVT__id_exe_inst_o))) {
                        vlSelf->__PVT__exe_reg_wdata_o = 0U;
                    }
                } else {
                    vlSelf->__PVT__exe_reg_wdata_o = 0U;
                }
            } else {
                vlSelf->__PVT__exe_reg_wdata_o = 0U;
            }
        } else {
            vlSelf->__PVT__exe_reg_wdata_o = ((0x20U 
                                               & vlSelf->__PVT__id_exe_inst_o)
                                               ? ((0x10U 
                                                   & vlSelf->__PVT__id_exe_inst_o)
                                                   ? 
                                                  ((8U 
                                                    & vlSelf->__PVT__id_exe_inst_o)
                                                    ? 0U
                                                    : 
                                                   ((4U 
                                                     & vlSelf->__PVT__id_exe_inst_o)
                                                     ? 
                                                    ((2U 
                                                      & vlSelf->__PVT__id_exe_inst_o)
                                                      ? 
                                                     ((1U 
                                                       & vlSelf->__PVT__id_exe_inst_o)
                                                       ? 
                                                      (vlSelf->__PVT__id_exe_op1_o 
                                                       + vlSelf->__PVT__id_exe_op2_o)
                                                       : 0U)
                                                      : 0U)
                                                     : 
                                                    ((2U 
                                                      & vlSelf->__PVT__id_exe_inst_o)
                                                      ? 
                                                     ((1U 
                                                       & vlSelf->__PVT__id_exe_inst_o)
                                                       ? 
                                                      ((IData)(vlSelf->__PVT__exe0__DOT__isType_r)
                                                        ? 
                                                       ((0x4000U 
                                                         & vlSelf->__PVT__id_exe_inst_o)
                                                         ? 
                                                        ((0x2000U 
                                                          & vlSelf->__PVT__id_exe_inst_o)
                                                          ? 
                                                         ((0x1000U 
                                                           & vlSelf->__PVT__id_exe_inst_o)
                                                           ? 
                                                          (vlSelf->__PVT__id_exe_op1_o 
                                                           & vlSelf->__PVT__id_exe_op2_o)
                                                           : 
                                                          (vlSelf->__PVT__id_exe_op1_o 
                                                           | vlSelf->__PVT__id_exe_op2_o))
                                                          : 
                                                         ((0x1000U 
                                                           & vlSelf->__PVT__id_exe_inst_o)
                                                           ? 
                                                          ((0U 
                                                            == 
                                                            (vlSelf->__PVT__id_exe_inst_o 
                                                             >> 0x19U))
                                                            ? 
                                                           (vlSelf->__PVT__id_exe_op1_o 
                                                            >> 
                                                            (0x1fU 
                                                             & vlSelf->__PVT__id_exe_op2_o))
                                                            : 
                                                           ((0x20U 
                                                             == 
                                                             (vlSelf->__PVT__id_exe_inst_o 
                                                              >> 0x19U))
                                                             ? 
                                                            VL_SHIFTRS_III(32,32,5, vlSelf->__PVT__id_exe_op1_o, 
                                                                           (0x1fU 
                                                                            & vlSelf->__PVT__id_exe_op2_o))
                                                             : 0U))
                                                           : 
                                                          (vlSelf->__PVT__id_exe_op1_o 
                                                           ^ vlSelf->__PVT__id_exe_op2_o)))
                                                         : 
                                                        ((0x2000U 
                                                          & vlSelf->__PVT__id_exe_inst_o)
                                                          ? 
                                                         ((0x1000U 
                                                           & vlSelf->__PVT__id_exe_inst_o)
                                                           ? 
                                                          ((vlSelf->__PVT__id_exe_op1_o 
                                                            < vlSelf->__PVT__id_exe_op2_o)
                                                            ? 1U
                                                            : 0U)
                                                           : 
                                                          (VL_LTS_III(32, vlSelf->__PVT__id_exe_op1_o, vlSelf->__PVT__id_exe_op2_o)
                                                            ? 1U
                                                            : 0U))
                                                          : 
                                                         ((0x1000U 
                                                           & vlSelf->__PVT__id_exe_inst_o)
                                                           ? 
                                                          (vlSelf->__PVT__id_exe_op1_o 
                                                           << 
                                                           (0x1fU 
                                                            & vlSelf->__PVT__id_exe_op2_o))
                                                           : 
                                                          ((0U 
                                                            == 
                                                            (vlSelf->__PVT__id_exe_inst_o 
                                                             >> 0x19U))
                                                            ? 
                                                           (vlSelf->__PVT__id_exe_op1_o 
                                                            + vlSelf->__PVT__id_exe_op2_o)
                                                            : 
                                                           ((0x20U 
                                                             == 
                                                             (vlSelf->__PVT__id_exe_inst_o 
                                                              >> 0x19U))
                                                             ? 
                                                            (vlSelf->__PVT__id_exe_op1_o 
                                                             - vlSelf->__PVT__id_exe_op2_o)
                                                             : 0U)))))
                                                        : 
                                                       ((IData)(vlSelf->__PVT__exe0__DOT__isType_m)
                                                         ? 
                                                        ((0x4000U 
                                                          & vlSelf->__PVT__id_exe_inst_o)
                                                          ? 0U
                                                          : 
                                                         ((0x2000U 
                                                           & vlSelf->__PVT__id_exe_inst_o)
                                                           ? 
                                                          ((0x1000U 
                                                            & vlSelf->__PVT__id_exe_inst_o)
                                                            ? (IData)(
                                                                      (vlSelf->__PVT__exe0__DOT__mult_result_i 
                                                                       >> 0x20U))
                                                            : 
                                                           ((vlSelf->__PVT__id_exe_op1_o 
                                                             >> 0x1fU)
                                                             ? (IData)(
                                                                       (vlSelf->__PVT__exe0__DOT__invert_result 
                                                                        >> 0x20U))
                                                             : (IData)(
                                                                       (vlSelf->__PVT__exe0__DOT__mult_result_i 
                                                                        >> 0x20U))))
                                                           : 
                                                          ((0x1000U 
                                                            & vlSelf->__PVT__id_exe_inst_o)
                                                            ? 
                                                           (((vlSelf->__PVT__id_exe_op1_o 
                                                              ^ vlSelf->__PVT__id_exe_op2_o) 
                                                             >> 0x1fU)
                                                             ? (IData)(
                                                                       (vlSelf->__PVT__exe0__DOT__invert_result 
                                                                        >> 0x20U))
                                                             : (IData)(
                                                                       (vlSelf->__PVT__exe0__DOT__mult_result_i 
                                                                        >> 0x20U)))
                                                            : (IData)(vlSelf->__PVT__exe0__DOT__mult_result_i))))
                                                         : 0U))
                                                       : 0U)
                                                      : 0U)))
                                                   : 0U)
                                               : ((0x10U 
                                                   & vlSelf->__PVT__id_exe_inst_o)
                                                   ? 
                                                  ((8U 
                                                    & vlSelf->__PVT__id_exe_inst_o)
                                                    ? 0U
                                                    : 
                                                   ((4U 
                                                     & vlSelf->__PVT__id_exe_inst_o)
                                                     ? 
                                                    ((2U 
                                                      & vlSelf->__PVT__id_exe_inst_o)
                                                      ? 
                                                     ((1U 
                                                       & vlSelf->__PVT__id_exe_inst_o)
                                                       ? 
                                                      (vlSelf->__PVT__id_exe_op1_o 
                                                       + vlSelf->__PVT__id_exe_op2_o)
                                                       : 0U)
                                                      : 0U)
                                                     : 
                                                    ((2U 
                                                      & vlSelf->__PVT__id_exe_inst_o)
                                                      ? 
                                                     ((1U 
                                                       & vlSelf->__PVT__id_exe_inst_o)
                                                       ? 
                                                      ((0x4000U 
                                                        & vlSelf->__PVT__id_exe_inst_o)
                                                        ? 
                                                       ((0x2000U 
                                                         & vlSelf->__PVT__id_exe_inst_o)
                                                         ? 
                                                        ((0x1000U 
                                                          & vlSelf->__PVT__id_exe_inst_o)
                                                          ? 
                                                         (vlSelf->__PVT__id_exe_op1_o 
                                                          & vlSelf->__PVT__id_exe_op2_o)
                                                          : 
                                                         (vlSelf->__PVT__id_exe_op1_o 
                                                          | vlSelf->__PVT__id_exe_op2_o))
                                                         : 
                                                        ((0x1000U 
                                                          & vlSelf->__PVT__id_exe_inst_o)
                                                          ? 
                                                         ((0U 
                                                           == 
                                                           (vlSelf->__PVT__id_exe_inst_o 
                                                            >> 0x19U))
                                                           ? 
                                                          ((0x1fU 
                                                            >= vlSelf->__PVT__id_exe_op2_o)
                                                            ? 
                                                           (vlSelf->__PVT__id_exe_op1_o 
                                                            >> vlSelf->__PVT__id_exe_op2_o)
                                                            : 0U)
                                                           : 
                                                          ((0x20U 
                                                            == 
                                                            (vlSelf->__PVT__id_exe_inst_o 
                                                             >> 0x19U))
                                                            ? 
                                                           ((0x1fU 
                                                             >= vlSelf->__PVT__id_exe_op2_o)
                                                             ? 
                                                            VL_SHIFTRS_III(32,32,32, vlSelf->__PVT__id_exe_op1_o, vlSelf->__PVT__id_exe_op2_o)
                                                             : 
                                                            (- 
                                                             (vlSelf->__PVT__id_exe_op1_o 
                                                              >> 0x1fU)))
                                                            : 0U))
                                                          : 
                                                         (vlSelf->__PVT__id_exe_op1_o 
                                                          ^ vlSelf->__PVT__id_exe_op2_o)))
                                                        : 
                                                       ((0x2000U 
                                                         & vlSelf->__PVT__id_exe_inst_o)
                                                         ? 
                                                        ((0x1000U 
                                                          & vlSelf->__PVT__id_exe_inst_o)
                                                          ? 
                                                         ((vlSelf->__PVT__id_exe_op1_o 
                                                           < vlSelf->__PVT__id_exe_op2_o)
                                                           ? 1U
                                                           : 0U)
                                                          : 
                                                         (VL_LTS_III(32, vlSelf->__PVT__id_exe_op1_o, vlSelf->__PVT__id_exe_op2_o)
                                                           ? 1U
                                                           : 0U))
                                                         : 
                                                        ((0x1000U 
                                                          & vlSelf->__PVT__id_exe_inst_o)
                                                          ? 
                                                         ((0x1fU 
                                                           >= vlSelf->__PVT__id_exe_op2_o)
                                                           ? 
                                                          (vlSelf->__PVT__id_exe_op1_o 
                                                           << vlSelf->__PVT__id_exe_op2_o)
                                                           : 0U)
                                                          : 
                                                         (vlSelf->__PVT__id_exe_op1_o 
                                                          + vlSelf->__PVT__id_exe_op2_o))))
                                                       : 0U)
                                                      : 0U)))
                                                   : 0U));
        }
    }
    vlSelf->__PVT__id_reg_we_o = (1U & ((~ (IData)(vlSymsp->TOP.rst_i)) 
                                        & ((0x40U & vlSelf->__PVT__if_id_inst_o)
                                            ? (IData)(
                                                      ((0x20U 
                                                        == 
                                                        (0x30U 
                                                         & vlSelf->__PVT__if_id_inst_o)) 
                                                       & ((8U 
                                                           & vlSelf->__PVT__if_id_inst_o)
                                                           ? (IData)(
                                                                     (7U 
                                                                      == 
                                                                      (7U 
                                                                       & vlSelf->__PVT__if_id_inst_o)))
                                                           : (IData)(
                                                                     (7U 
                                                                      == 
                                                                      (7U 
                                                                       & vlSelf->__PVT__if_id_inst_o))))))
                                            : ((0x20U 
                                                & vlSelf->__PVT__if_id_inst_o)
                                                ? (IData)(
                                                          ((0x10U 
                                                            == 
                                                            (0x18U 
                                                             & vlSelf->__PVT__if_id_inst_o)) 
                                                           & ((4U 
                                                               & vlSelf->__PVT__if_id_inst_o)
                                                               ? 
                                                              ((vlSelf->__PVT__if_id_inst_o 
                                                                >> 1U) 
                                                               & vlSelf->__PVT__if_id_inst_o)
                                                               : 
                                                              ((vlSelf->__PVT__if_id_inst_o 
                                                                >> 1U) 
                                                               & (vlSelf->__PVT__if_id_inst_o 
                                                                  & (IData)(vlSelf->__PVT__id0__DOT__r_reg_we_o))))))
                                                : (
                                                   (0x10U 
                                                    & vlSelf->__PVT__if_id_inst_o)
                                                    ? 
                                                   ((~ 
                                                     (vlSelf->__PVT__if_id_inst_o 
                                                      >> 3U)) 
                                                    & ((4U 
                                                        & vlSelf->__PVT__if_id_inst_o)
                                                        ? 
                                                       ((vlSelf->__PVT__if_id_inst_o 
                                                         >> 1U) 
                                                        & vlSelf->__PVT__if_id_inst_o)
                                                        : 
                                                       ((vlSelf->__PVT__if_id_inst_o 
                                                         >> 1U) 
                                                        & vlSelf->__PVT__if_id_inst_o)))
                                                    : (IData)(
                                                              (3U 
                                                               == 
                                                               (0xfU 
                                                                & vlSelf->__PVT__if_id_inst_o))))))));
    vlSelf->__PVT__id_reg2_re_o = (1U & ((~ (IData)(vlSymsp->TOP.rst_i)) 
                                         & ((0x40U 
                                             & vlSelf->__PVT__if_id_inst_o)
                                             ? (IData)(
                                                       (0x23U 
                                                        == 
                                                        (0x3fU 
                                                         & vlSelf->__PVT__if_id_inst_o)))
                                             : ((vlSelf->__PVT__if_id_inst_o 
                                                 >> 5U) 
                                                & ((0x10U 
                                                    & vlSelf->__PVT__if_id_inst_o)
                                                    ? (IData)(
                                                              ((3U 
                                                                == 
                                                                (0xfU 
                                                                 & vlSelf->__PVT__if_id_inst_o)) 
                                                               & (IData)(vlSelf->__PVT__id0__DOT__r_reg2_re_o)))
                                                    : (IData)(
                                                              (3U 
                                                               == 
                                                               (0xfU 
                                                                & vlSelf->__PVT__if_id_inst_o))))))));
    vlSelf->__PVT__id_reg1_re_o = (1U & ((~ (IData)(vlSymsp->TOP.rst_i)) 
                                         & ((0x40U 
                                             & vlSelf->__PVT__if_id_inst_o)
                                             ? (IData)(
                                                       ((0x20U 
                                                         == 
                                                         (0x38U 
                                                          & vlSelf->__PVT__if_id_inst_o)) 
                                                        & ((4U 
                                                            & vlSelf->__PVT__if_id_inst_o)
                                                            ? 
                                                           ((vlSelf->__PVT__if_id_inst_o 
                                                             >> 1U) 
                                                            & vlSelf->__PVT__if_id_inst_o)
                                                            : 
                                                           ((vlSelf->__PVT__if_id_inst_o 
                                                             >> 1U) 
                                                            & vlSelf->__PVT__if_id_inst_o))))
                                             : ((0x20U 
                                                 & vlSelf->__PVT__if_id_inst_o)
                                                 ? 
                                                ((0x10U 
                                                  & vlSelf->__PVT__if_id_inst_o)
                                                  ? (IData)(
                                                            ((3U 
                                                              == 
                                                              (0xfU 
                                                               & vlSelf->__PVT__if_id_inst_o)) 
                                                             & (IData)(vlSelf->__PVT__id0__DOT__r_reg1_re_o)))
                                                  : (IData)(
                                                            (3U 
                                                             == 
                                                             (0xfU 
                                                              & vlSelf->__PVT__if_id_inst_o))))
                                                 : 
                                                ((0x10U 
                                                  & vlSelf->__PVT__if_id_inst_o)
                                                  ? (IData)(
                                                            (3U 
                                                             == 
                                                             (0xfU 
                                                              & vlSelf->__PVT__if_id_inst_o)))
                                                  : (IData)(
                                                            (3U 
                                                             == 
                                                             (0xfU 
                                                              & vlSelf->__PVT__if_id_inst_o))))))));
}

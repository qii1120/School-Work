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
    // Body
    if (vlSymsp->TOP.rst_i) {
        vlSelf->__PVT__id_inst_o = 0x13U;
        vlSelf->__PVT__exe_mem_op_o = 0U;
        vlSelf->__PVT__exe_mem_we_o = 0U;
        vlSelf->__PVT__mem_reg_waddr_o = 0U;
        vlSelf->__PVT__id_reg_waddr_o = 0U;
        vlSelf->__PVT__exe_mem_addr_o = 0U;
        vlSelf->__PVT__exe_mem_data_o = 0U;
        vlSelf->__PVT__mem_ram_w_request_o = 0U;
        vlSelf->__PVT__exe_reg_waddr_o = 0U;
        vlSelf->__PVT__exe_reg_we_o = 0U;
        vlSelf->__PVT__exe_jump_addr_o = 0U;
        vlSelf->__PVT__exe_jump_enable_o = 0U;
        vlSelf->__PVT__exe_reg_wdata_o = 0U;
        vlSelf->__PVT__exe_stallreq_o = 0U;
        vlSelf->__PVT__id_reg2_addr_o = 0U;
        vlSelf->__PVT__id_reg1_addr_o = 0U;
        vlSelf->__PVT__mem_ram_addr_o = 0U;
        vlSelf->__PVT__ctrl_stall_o = 0U;
    } else {
        if ((0x40U & vlSelf->__PVT__if_id_inst_o)) {
            if ((0x20U & vlSelf->__PVT__if_id_inst_o)) {
                if ((0x10U & vlSelf->__PVT__if_id_inst_o)) {
                    vlSelf->__PVT__id_inst_o = 0x13U;
                    vlSelf->__PVT__id_reg_waddr_o = 
                        (0x1fU & 0U);
                    vlSelf->__PVT__id_reg2_addr_o = 
                        (0x1fU & 0U);
                    vlSelf->__PVT__id_reg1_addr_o = 
                        (0x1fU & 0U);
                } else if ((8U & vlSelf->__PVT__if_id_inst_o)) {
                    if ((4U & vlSelf->__PVT__if_id_inst_o)) {
                        if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                            if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                                vlSelf->__PVT__id_inst_o 
                                    = vlSelf->__PVT__if_id_inst_o;
                                vlSelf->__PVT__id_reg_waddr_o 
                                    = (0x1fU & (vlSelf->__PVT__if_id_inst_o 
                                                >> 7U));
                            } else {
                                vlSelf->__PVT__id_inst_o = 0x13U;
                                vlSelf->__PVT__id_reg_waddr_o 
                                    = (0x1fU & 0U);
                            }
                        } else {
                            vlSelf->__PVT__id_inst_o = 0x13U;
                            vlSelf->__PVT__id_reg_waddr_o 
                                = (0x1fU & 0U);
                        }
                    } else {
                        vlSelf->__PVT__id_inst_o = 0x13U;
                        vlSelf->__PVT__id_reg_waddr_o 
                            = (0x1fU & 0U);
                    }
                    vlSelf->__PVT__id_reg2_addr_o = 
                        (0x1fU & 0U);
                    vlSelf->__PVT__id_reg1_addr_o = 
                        (0x1fU & 0U);
                } else if ((4U & vlSelf->__PVT__if_id_inst_o)) {
                    if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                        if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                            vlSelf->__PVT__id_inst_o 
                                = vlSelf->__PVT__if_id_inst_o;
                            vlSelf->__PVT__id_reg_waddr_o 
                                = (0x1fU & (vlSelf->__PVT__if_id_inst_o 
                                            >> 7U));
                            vlSelf->__PVT__id_reg1_addr_o 
                                = (0x1fU & (vlSelf->__PVT__if_id_inst_o 
                                            >> 0xfU));
                        } else {
                            vlSelf->__PVT__id_inst_o = 0x13U;
                            vlSelf->__PVT__id_reg_waddr_o 
                                = (0x1fU & 0U);
                            vlSelf->__PVT__id_reg1_addr_o 
                                = (0x1fU & 0U);
                        }
                    } else {
                        vlSelf->__PVT__id_inst_o = 0x13U;
                        vlSelf->__PVT__id_reg_waddr_o 
                            = (0x1fU & 0U);
                        vlSelf->__PVT__id_reg1_addr_o 
                            = (0x1fU & 0U);
                    }
                    vlSelf->__PVT__id_reg2_addr_o = 
                        (0x1fU & 0U);
                } else {
                    if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                        if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                            vlSelf->__PVT__id_inst_o 
                                = vlSelf->__PVT__if_id_inst_o;
                            vlSelf->__PVT__id_reg2_addr_o 
                                = (0x1fU & (vlSelf->__PVT__if_id_inst_o 
                                            >> 0x14U));
                            vlSelf->__PVT__id_reg1_addr_o 
                                = (0x1fU & (vlSelf->__PVT__if_id_inst_o 
                                            >> 0xfU));
                        } else {
                            vlSelf->__PVT__id_inst_o = 0x13U;
                            vlSelf->__PVT__id_reg2_addr_o 
                                = (0x1fU & 0U);
                            vlSelf->__PVT__id_reg1_addr_o 
                                = (0x1fU & 0U);
                        }
                    } else {
                        vlSelf->__PVT__id_inst_o = 0x13U;
                        vlSelf->__PVT__id_reg2_addr_o 
                            = (0x1fU & 0U);
                        vlSelf->__PVT__id_reg1_addr_o 
                            = (0x1fU & 0U);
                    }
                    vlSelf->__PVT__id_reg_waddr_o = 
                        (0x1fU & 0U);
                }
            } else {
                vlSelf->__PVT__id_inst_o = 0x13U;
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
                    vlSelf->__PVT__id_inst_o = 0x13U;
                    vlSelf->__PVT__id_reg_waddr_o = 
                        (0x1fU & 0U);
                    vlSelf->__PVT__id_reg2_addr_o = 
                        (0x1fU & 0U);
                    vlSelf->__PVT__id_reg1_addr_o = 
                        (0x1fU & 0U);
                } else if ((4U & vlSelf->__PVT__if_id_inst_o)) {
                    if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                        if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                            vlSelf->__PVT__id_inst_o 
                                = vlSelf->__PVT__if_id_inst_o;
                            vlSelf->__PVT__id_reg_waddr_o 
                                = (0x1fU & (vlSelf->__PVT__if_id_inst_o 
                                            >> 7U));
                        } else {
                            vlSelf->__PVT__id_inst_o = 0x13U;
                            vlSelf->__PVT__id_reg_waddr_o 
                                = (0x1fU & 0U);
                        }
                    } else {
                        vlSelf->__PVT__id_inst_o = 0x13U;
                        vlSelf->__PVT__id_reg_waddr_o 
                            = (0x1fU & 0U);
                    }
                    vlSelf->__PVT__id_reg2_addr_o = 
                        (0x1fU & 0U);
                    vlSelf->__PVT__id_reg1_addr_o = 
                        (0x1fU & 0U);
                } else if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                    if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                        vlSelf->__PVT__id_inst_o = vlSelf->__PVT__if_id_inst_o;
                        if (vlSelf->__PVT__id0__DOT__inst_type_r__DOT__isType_r) {
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
                        vlSelf->__PVT__id_inst_o = 0x13U;
                        vlSelf->__PVT__id_reg_waddr_o 
                            = (0x1fU & 0U);
                        vlSelf->__PVT__id_reg2_addr_o 
                            = (0x1fU & 0U);
                        vlSelf->__PVT__id_reg1_addr_o 
                            = (0x1fU & 0U);
                    }
                } else {
                    vlSelf->__PVT__id_inst_o = 0x13U;
                    vlSelf->__PVT__id_reg_waddr_o = 
                        (0x1fU & 0U);
                    vlSelf->__PVT__id_reg2_addr_o = 
                        (0x1fU & 0U);
                    vlSelf->__PVT__id_reg1_addr_o = 
                        (0x1fU & 0U);
                }
            } else {
                if ((8U & vlSelf->__PVT__if_id_inst_o)) {
                    vlSelf->__PVT__id_inst_o = 0x13U;
                    vlSelf->__PVT__id_reg2_addr_o = 
                        (0x1fU & 0U);
                    vlSelf->__PVT__id_reg1_addr_o = 
                        (0x1fU & 0U);
                } else if ((4U & vlSelf->__PVT__if_id_inst_o)) {
                    vlSelf->__PVT__id_inst_o = 0x13U;
                    vlSelf->__PVT__id_reg2_addr_o = 
                        (0x1fU & 0U);
                    vlSelf->__PVT__id_reg1_addr_o = 
                        (0x1fU & 0U);
                } else if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                    if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                        vlSelf->__PVT__id_inst_o = vlSelf->__PVT__if_id_inst_o;
                        vlSelf->__PVT__id_reg2_addr_o 
                            = (0x1fU & (vlSelf->__PVT__if_id_inst_o 
                                        >> 0x14U));
                        vlSelf->__PVT__id_reg1_addr_o 
                            = (0x1fU & (vlSelf->__PVT__if_id_inst_o 
                                        >> 0xfU));
                    } else {
                        vlSelf->__PVT__id_inst_o = 0x13U;
                        vlSelf->__PVT__id_reg2_addr_o 
                            = (0x1fU & 0U);
                        vlSelf->__PVT__id_reg1_addr_o 
                            = (0x1fU & 0U);
                    }
                } else {
                    vlSelf->__PVT__id_inst_o = 0x13U;
                    vlSelf->__PVT__id_reg2_addr_o = 
                        (0x1fU & 0U);
                    vlSelf->__PVT__id_reg1_addr_o = 
                        (0x1fU & 0U);
                }
                vlSelf->__PVT__id_reg_waddr_o = (0x1fU 
                                                 & 0U);
            }
        } else {
            if ((0x10U & vlSelf->__PVT__if_id_inst_o)) {
                if ((8U & vlSelf->__PVT__if_id_inst_o)) {
                    vlSelf->__PVT__id_inst_o = 0x13U;
                    vlSelf->__PVT__id_reg_waddr_o = 
                        (0x1fU & 0U);
                    vlSelf->__PVT__id_reg1_addr_o = 
                        (0x1fU & 0U);
                } else if ((4U & vlSelf->__PVT__if_id_inst_o)) {
                    if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                        if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                            vlSelf->__PVT__id_inst_o 
                                = vlSelf->__PVT__if_id_inst_o;
                            vlSelf->__PVT__id_reg_waddr_o 
                                = (0x1fU & (vlSelf->__PVT__if_id_inst_o 
                                            >> 7U));
                        } else {
                            vlSelf->__PVT__id_inst_o = 0x13U;
                            vlSelf->__PVT__id_reg_waddr_o 
                                = (0x1fU & 0U);
                        }
                    } else {
                        vlSelf->__PVT__id_inst_o = 0x13U;
                        vlSelf->__PVT__id_reg_waddr_o 
                            = (0x1fU & 0U);
                    }
                    vlSelf->__PVT__id_reg1_addr_o = 
                        (0x1fU & 0U);
                } else if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                    if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                        vlSelf->__PVT__id_inst_o = vlSelf->__PVT__if_id_inst_o;
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
                        vlSelf->__PVT__id_inst_o = 0x13U;
                        vlSelf->__PVT__id_reg_waddr_o 
                            = (0x1fU & 0U);
                        vlSelf->__PVT__id_reg1_addr_o 
                            = (0x1fU & 0U);
                    }
                } else {
                    vlSelf->__PVT__id_inst_o = 0x13U;
                    vlSelf->__PVT__id_reg_waddr_o = 
                        (0x1fU & 0U);
                    vlSelf->__PVT__id_reg1_addr_o = 
                        (0x1fU & 0U);
                }
            } else if ((8U & vlSelf->__PVT__if_id_inst_o)) {
                vlSelf->__PVT__id_inst_o = 0x13U;
                vlSelf->__PVT__id_reg_waddr_o = (0x1fU 
                                                 & 0U);
                vlSelf->__PVT__id_reg1_addr_o = (0x1fU 
                                                 & 0U);
            } else if ((4U & vlSelf->__PVT__if_id_inst_o)) {
                vlSelf->__PVT__id_inst_o = 0x13U;
                vlSelf->__PVT__id_reg_waddr_o = (0x1fU 
                                                 & 0U);
                vlSelf->__PVT__id_reg1_addr_o = (0x1fU 
                                                 & 0U);
            } else if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                    vlSelf->__PVT__id_inst_o = vlSelf->__PVT__if_id_inst_o;
                    vlSelf->__PVT__id_reg_waddr_o = 
                        (0x1fU & (vlSelf->__PVT__if_id_inst_o 
                                  >> 7U));
                    vlSelf->__PVT__id_reg1_addr_o = 
                        (0x1fU & (vlSelf->__PVT__if_id_inst_o 
                                  >> 0xfU));
                } else {
                    vlSelf->__PVT__id_inst_o = 0x13U;
                    vlSelf->__PVT__id_reg_waddr_o = 
                        (0x1fU & 0U);
                    vlSelf->__PVT__id_reg1_addr_o = 
                        (0x1fU & 0U);
                }
            } else {
                vlSelf->__PVT__id_inst_o = 0x13U;
                vlSelf->__PVT__id_reg_waddr_o = (0x1fU 
                                                 & 0U);
                vlSelf->__PVT__id_reg1_addr_o = (0x1fU 
                                                 & 0U);
            }
            vlSelf->__PVT__id_reg2_addr_o = (0x1fU 
                                             & 0U);
        }
        vlSelf->__PVT__exe_mem_op_o = 0U;
        vlSelf->__PVT__exe_mem_we_o = 0U;
        vlSelf->__PVT__mem_reg_waddr_o = vlSelf->__PVT__exe_mem_reg_waddr_o;
        vlSelf->__PVT__mem_ram_w_request_o = vlSelf->__PVT__exe_mem_mem_we_o;
        vlSelf->__PVT__exe_reg_we_o = vlSelf->__PVT__id_exe_reg_we_o;
        vlSelf->__PVT__exe_jump_enable_o = 0U;
        vlSelf->__PVT__exe_stallreq_o = 0U;
        if ((0x40U & vlSelf->__PVT__id_exe_inst_o)) {
            if ((0x20U & vlSelf->__PVT__id_exe_inst_o)) {
                if ((0x10U & vlSelf->__PVT__id_exe_inst_o)) {
                    vlSelf->__PVT__exe_mem_op_o = 0U;
                    vlSelf->__PVT__exe_mem_we_o = 0U;
                    vlSelf->__PVT__exe_mem_addr_o = 0U;
                    vlSelf->__PVT__exe_mem_data_o = 0U;
                    vlSelf->__PVT__exe_reg_waddr_o = 0U;
                    vlSelf->__PVT__exe_reg_we_o = 0U;
                    vlSelf->__PVT__exe_jump_addr_o = 0U;
                    vlSelf->__PVT__exe_reg_wdata_o = 0U;
                    vlSelf->__PVT__exe_stallreq_o = 0U;
                } else if ((8U & vlSelf->__PVT__id_exe_inst_o)) {
                    if ((4U & vlSelf->__PVT__id_exe_inst_o)) {
                        if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                            if ((1U & (~ vlSelf->__PVT__id_exe_inst_o))) {
                                vlSelf->__PVT__exe_mem_op_o = 0U;
                                vlSelf->__PVT__exe_mem_we_o = 0U;
                                vlSelf->__PVT__exe_mem_addr_o = 0U;
                                vlSelf->__PVT__exe_mem_data_o = 0U;
                                vlSelf->__PVT__exe_reg_we_o = 0U;
                                vlSelf->__PVT__exe_stallreq_o = 0U;
                            }
                            if ((1U & vlSelf->__PVT__id_exe_inst_o)) {
                                vlSelf->__PVT__exe_reg_waddr_o 
                                    = vlSelf->__PVT__id_exe_reg_waddr_o;
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
                                vlSelf->__PVT__exe_reg_wdata_o 
                                    = ((IData)(4U) 
                                       + vlSelf->__PVT__id_exe_inst_addr_o);
                            } else {
                                vlSelf->__PVT__exe_reg_waddr_o = 0U;
                                vlSelf->__PVT__exe_jump_addr_o = 0U;
                                vlSelf->__PVT__exe_reg_wdata_o = 0U;
                            }
                        } else {
                            vlSelf->__PVT__exe_mem_op_o = 0U;
                            vlSelf->__PVT__exe_mem_we_o = 0U;
                            vlSelf->__PVT__exe_mem_addr_o = 0U;
                            vlSelf->__PVT__exe_mem_data_o = 0U;
                            vlSelf->__PVT__exe_reg_waddr_o = 0U;
                            vlSelf->__PVT__exe_reg_we_o = 0U;
                            vlSelf->__PVT__exe_jump_addr_o = 0U;
                            vlSelf->__PVT__exe_reg_wdata_o = 0U;
                            vlSelf->__PVT__exe_stallreq_o = 0U;
                        }
                    } else {
                        vlSelf->__PVT__exe_mem_op_o = 0U;
                        vlSelf->__PVT__exe_mem_we_o = 0U;
                        vlSelf->__PVT__exe_mem_addr_o = 0U;
                        vlSelf->__PVT__exe_mem_data_o = 0U;
                        vlSelf->__PVT__exe_reg_waddr_o = 0U;
                        vlSelf->__PVT__exe_reg_we_o = 0U;
                        vlSelf->__PVT__exe_jump_addr_o = 0U;
                        vlSelf->__PVT__exe_reg_wdata_o = 0U;
                        vlSelf->__PVT__exe_stallreq_o = 0U;
                    }
                } else if ((4U & vlSelf->__PVT__id_exe_inst_o)) {
                    if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                        if ((1U & (~ vlSelf->__PVT__id_exe_inst_o))) {
                            vlSelf->__PVT__exe_mem_op_o = 0U;
                            vlSelf->__PVT__exe_mem_we_o = 0U;
                            vlSelf->__PVT__exe_mem_addr_o = 0U;
                            vlSelf->__PVT__exe_mem_data_o = 0U;
                            vlSelf->__PVT__exe_reg_we_o = 0U;
                            vlSelf->__PVT__exe_stallreq_o = 0U;
                        }
                        if ((1U & vlSelf->__PVT__id_exe_inst_o)) {
                            vlSelf->__PVT__exe_reg_waddr_o 
                                = vlSelf->__PVT__id_exe_reg_waddr_o;
                            vlSelf->__PVT__exe_jump_addr_o 
                                = (vlSelf->__PVT__id_exe_op1_o 
                                   + (((- (IData)((vlSelf->__PVT__id_exe_inst_o 
                                                   >> 0x1fU))) 
                                       << 0xcU) | (vlSelf->__PVT__id_exe_inst_o 
                                                   >> 0x14U)));
                            vlSelf->__PVT__exe_reg_wdata_o 
                                = ((IData)(4U) + vlSelf->__PVT__id_exe_inst_addr_o);
                        } else {
                            vlSelf->__PVT__exe_reg_waddr_o = 0U;
                            vlSelf->__PVT__exe_jump_addr_o = 0U;
                            vlSelf->__PVT__exe_reg_wdata_o = 0U;
                        }
                    } else {
                        vlSelf->__PVT__exe_mem_op_o = 0U;
                        vlSelf->__PVT__exe_mem_we_o = 0U;
                        vlSelf->__PVT__exe_mem_addr_o = 0U;
                        vlSelf->__PVT__exe_mem_data_o = 0U;
                        vlSelf->__PVT__exe_reg_waddr_o = 0U;
                        vlSelf->__PVT__exe_reg_we_o = 0U;
                        vlSelf->__PVT__exe_jump_addr_o = 0U;
                        vlSelf->__PVT__exe_reg_wdata_o = 0U;
                        vlSelf->__PVT__exe_stallreq_o = 0U;
                    }
                } else if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                    if ((1U & (~ vlSelf->__PVT__id_exe_inst_o))) {
                        vlSelf->__PVT__exe_mem_op_o = 0U;
                        vlSelf->__PVT__exe_mem_we_o = 0U;
                        vlSelf->__PVT__exe_mem_addr_o = 0U;
                        vlSelf->__PVT__exe_mem_data_o = 0U;
                        vlSelf->__PVT__exe_reg_waddr_o = 0U;
                        vlSelf->__PVT__exe_reg_we_o = 0U;
                        vlSelf->__PVT__exe_reg_wdata_o = 0U;
                        vlSelf->__PVT__exe_stallreq_o = 0U;
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
                    vlSelf->__PVT__exe_mem_op_o = 0U;
                    vlSelf->__PVT__exe_mem_we_o = 0U;
                    vlSelf->__PVT__exe_mem_addr_o = 0U;
                    vlSelf->__PVT__exe_mem_data_o = 0U;
                    vlSelf->__PVT__exe_reg_waddr_o = 0U;
                    vlSelf->__PVT__exe_reg_we_o = 0U;
                    vlSelf->__PVT__exe_jump_addr_o = 0U;
                    vlSelf->__PVT__exe_reg_wdata_o = 0U;
                    vlSelf->__PVT__exe_stallreq_o = 0U;
                }
            } else {
                vlSelf->__PVT__exe_mem_op_o = 0U;
                vlSelf->__PVT__exe_mem_we_o = 0U;
                vlSelf->__PVT__exe_mem_addr_o = 0U;
                vlSelf->__PVT__exe_mem_data_o = 0U;
                vlSelf->__PVT__exe_reg_waddr_o = 0U;
                vlSelf->__PVT__exe_reg_we_o = 0U;
                vlSelf->__PVT__exe_jump_addr_o = 0U;
                vlSelf->__PVT__exe_reg_wdata_o = 0U;
                vlSelf->__PVT__exe_stallreq_o = 0U;
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
                    vlSelf->__PVT__exe_mem_op_o = 0U;
                    vlSelf->__PVT__exe_mem_we_o = 0U;
                    vlSelf->__PVT__exe_mem_addr_o = 0U;
                    vlSelf->__PVT__exe_mem_data_o = 0U;
                    vlSelf->__PVT__exe_reg_waddr_o = 0U;
                    vlSelf->__PVT__exe_reg_we_o = 0U;
                    vlSelf->__PVT__exe_jump_addr_o = 0U;
                    vlSelf->__PVT__exe_jump_enable_o = 0U;
                    vlSelf->__PVT__exe_reg_wdata_o = 0U;
                    vlSelf->__PVT__exe_stallreq_o = 0U;
                } else if ((4U & vlSelf->__PVT__id_exe_inst_o)) {
                    if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                        if ((1U & (~ vlSelf->__PVT__id_exe_inst_o))) {
                            vlSelf->__PVT__exe_mem_op_o = 0U;
                            vlSelf->__PVT__exe_mem_we_o = 0U;
                            vlSelf->__PVT__exe_mem_addr_o = 0U;
                            vlSelf->__PVT__exe_mem_data_o = 0U;
                            vlSelf->__PVT__exe_reg_we_o = 0U;
                            vlSelf->__PVT__exe_jump_addr_o = 0U;
                            vlSelf->__PVT__exe_jump_enable_o = 0U;
                            vlSelf->__PVT__exe_stallreq_o = 0U;
                        }
                        if ((1U & vlSelf->__PVT__id_exe_inst_o)) {
                            vlSelf->__PVT__exe_reg_waddr_o 
                                = vlSelf->__PVT__id_exe_reg_waddr_o;
                            vlSelf->__PVT__exe_reg_wdata_o 
                                = (vlSelf->__PVT__id_exe_op1_o 
                                   + vlSelf->__PVT__id_exe_op2_o);
                        } else {
                            vlSelf->__PVT__exe_reg_waddr_o = 0U;
                            vlSelf->__PVT__exe_reg_wdata_o = 0U;
                        }
                    } else {
                        vlSelf->__PVT__exe_mem_op_o = 0U;
                        vlSelf->__PVT__exe_mem_we_o = 0U;
                        vlSelf->__PVT__exe_mem_addr_o = 0U;
                        vlSelf->__PVT__exe_mem_data_o = 0U;
                        vlSelf->__PVT__exe_reg_waddr_o = 0U;
                        vlSelf->__PVT__exe_reg_we_o = 0U;
                        vlSelf->__PVT__exe_jump_addr_o = 0U;
                        vlSelf->__PVT__exe_jump_enable_o = 0U;
                        vlSelf->__PVT__exe_reg_wdata_o = 0U;
                        vlSelf->__PVT__exe_stallreq_o = 0U;
                    }
                } else if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                    if ((1U & (~ vlSelf->__PVT__id_exe_inst_o))) {
                        vlSelf->__PVT__exe_mem_op_o = 0U;
                        vlSelf->__PVT__exe_mem_we_o = 0U;
                        vlSelf->__PVT__exe_mem_addr_o = 0U;
                        vlSelf->__PVT__exe_mem_data_o = 0U;
                        vlSelf->__PVT__exe_jump_addr_o = 0U;
                        vlSelf->__PVT__exe_jump_enable_o = 0U;
                        vlSelf->__PVT__exe_stallreq_o = 0U;
                    }
                    if ((1U & vlSelf->__PVT__id_exe_inst_o)) {
                        if (vlSelf->__PVT__exe0__DOT__isType_r) {
                            vlSelf->__PVT__exe_reg_waddr_o 
                                = vlSelf->__PVT__id_exe_reg_waddr_o;
                            vlSelf->__PVT__exe_reg_we_o = 1U;
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
                                vlSelf->__PVT__exe_reg_wdata_o 
                                    = ((0x2000U & vlSelf->__PVT__id_exe_inst_o)
                                        ? ((0x1000U 
                                            & vlSelf->__PVT__id_exe_inst_o)
                                            ? (vlSelf->__PVT__id_exe_op1_o 
                                               & vlSelf->__PVT__id_exe_op2_o)
                                            : (vlSelf->__PVT__id_exe_op1_o 
                                               | vlSelf->__PVT__id_exe_op2_o))
                                        : ((0x1000U 
                                            & vlSelf->__PVT__id_exe_inst_o)
                                            ? ((0U 
                                                == 
                                                (vlSelf->__PVT__id_exe_inst_o 
                                                 >> 0x19U))
                                                ? (vlSelf->__PVT__id_exe_op1_o 
                                                   >> 
                                                   (0x1fU 
                                                    & vlSelf->__PVT__id_exe_op2_o))
                                                : (
                                                   (0x20U 
                                                    == 
                                                    (vlSelf->__PVT__id_exe_inst_o 
                                                     >> 0x19U))
                                                    ? 
                                                   VL_SHIFTRS_III(32,32,5, vlSelf->__PVT__id_exe_op1_o, 
                                                                  (0x1fU 
                                                                   & vlSelf->__PVT__id_exe_op2_o))
                                                    : 0U))
                                            : (vlSelf->__PVT__id_exe_op1_o 
                                               ^ vlSelf->__PVT__id_exe_op2_o)));
                            } else {
                                if ((1U & (~ (vlSelf->__PVT__id_exe_inst_o 
                                              >> 0xdU)))) {
                                    if ((1U & (~ (vlSelf->__PVT__id_exe_inst_o 
                                                  >> 0xcU)))) {
                                        if ((0U != 
                                             (vlSelf->__PVT__id_exe_inst_o 
                                              >> 0x19U))) {
                                            if ((0x20U 
                                                 != 
                                                 (vlSelf->__PVT__id_exe_inst_o 
                                                  >> 0x19U))) {
                                                vlSelf->__PVT__exe_reg_we_o = 0U;
                                            }
                                        }
                                    }
                                }
                                vlSelf->__PVT__exe_reg_wdata_o 
                                    = ((0x2000U & vlSelf->__PVT__id_exe_inst_o)
                                        ? ((0x1000U 
                                            & vlSelf->__PVT__id_exe_inst_o)
                                            ? ((vlSelf->__PVT__id_exe_op1_o 
                                                < vlSelf->__PVT__id_exe_op2_o)
                                                ? 1U
                                                : 0U)
                                            : (VL_LTS_III(32, vlSelf->__PVT__id_exe_op1_o, vlSelf->__PVT__id_exe_op2_o)
                                                ? 1U
                                                : 0U))
                                        : ((0x1000U 
                                            & vlSelf->__PVT__id_exe_inst_o)
                                            ? (vlSelf->__PVT__id_exe_op1_o 
                                               << (0x1fU 
                                                   & vlSelf->__PVT__id_exe_op2_o))
                                            : ((0U 
                                                == 
                                                (vlSelf->__PVT__id_exe_inst_o 
                                                 >> 0x19U))
                                                ? (vlSelf->__PVT__id_exe_op1_o 
                                                   + vlSelf->__PVT__id_exe_op2_o)
                                                : (
                                                   (0x20U 
                                                    == 
                                                    (vlSelf->__PVT__id_exe_inst_o 
                                                     >> 0x19U))
                                                    ? 
                                                   (vlSelf->__PVT__id_exe_op1_o 
                                                    - vlSelf->__PVT__id_exe_op2_o)
                                                    : 0U))));
                            }
                        } else {
                            vlSelf->__PVT__exe_reg_waddr_o = 0U;
                            vlSelf->__PVT__exe_reg_we_o = 0U;
                            vlSelf->__PVT__exe_reg_wdata_o = 0U;
                        }
                    } else {
                        vlSelf->__PVT__exe_reg_waddr_o = 0U;
                        vlSelf->__PVT__exe_reg_we_o = 0U;
                        vlSelf->__PVT__exe_reg_wdata_o = 0U;
                    }
                } else {
                    vlSelf->__PVT__exe_mem_op_o = 0U;
                    vlSelf->__PVT__exe_mem_we_o = 0U;
                    vlSelf->__PVT__exe_mem_addr_o = 0U;
                    vlSelf->__PVT__exe_mem_data_o = 0U;
                    vlSelf->__PVT__exe_reg_waddr_o = 0U;
                    vlSelf->__PVT__exe_reg_we_o = 0U;
                    vlSelf->__PVT__exe_jump_addr_o = 0U;
                    vlSelf->__PVT__exe_jump_enable_o = 0U;
                    vlSelf->__PVT__exe_reg_wdata_o = 0U;
                    vlSelf->__PVT__exe_stallreq_o = 0U;
                }
            } else {
                if ((8U & vlSelf->__PVT__id_exe_inst_o)) {
                    vlSelf->__PVT__exe_mem_op_o = 0U;
                    vlSelf->__PVT__exe_mem_addr_o = 0U;
                    vlSelf->__PVT__exe_mem_data_o = 0U;
                    vlSelf->__PVT__exe_jump_addr_o = 0U;
                    vlSelf->__PVT__exe_jump_enable_o = 0U;
                    vlSelf->__PVT__exe_stallreq_o = 0U;
                } else if ((4U & vlSelf->__PVT__id_exe_inst_o)) {
                    vlSelf->__PVT__exe_mem_op_o = 0U;
                    vlSelf->__PVT__exe_mem_addr_o = 0U;
                    vlSelf->__PVT__exe_mem_data_o = 0U;
                    vlSelf->__PVT__exe_jump_addr_o = 0U;
                    vlSelf->__PVT__exe_jump_enable_o = 0U;
                    vlSelf->__PVT__exe_stallreq_o = 0U;
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
                        vlSelf->__PVT__exe_jump_enable_o = 0U;
                        vlSelf->__PVT__exe_stallreq_o = 0U;
                    }
                } else {
                    vlSelf->__PVT__exe_mem_op_o = 0U;
                    vlSelf->__PVT__exe_mem_addr_o = 0U;
                    vlSelf->__PVT__exe_mem_data_o = 0U;
                    vlSelf->__PVT__exe_jump_addr_o = 0U;
                    vlSelf->__PVT__exe_jump_enable_o = 0U;
                    vlSelf->__PVT__exe_stallreq_o = 0U;
                }
                vlSelf->__PVT__exe_mem_we_o = (IData)(
                                                      (3U 
                                                       == 
                                                       (0xfU 
                                                        & vlSelf->__PVT__id_exe_inst_o)));
                vlSelf->__PVT__exe_reg_waddr_o = 0U;
                vlSelf->__PVT__exe_reg_we_o = 0U;
                vlSelf->__PVT__exe_reg_wdata_o = 0U;
            }
        } else if ((0x10U & vlSelf->__PVT__id_exe_inst_o)) {
            if ((8U & vlSelf->__PVT__id_exe_inst_o)) {
                vlSelf->__PVT__exe_mem_op_o = 0U;
                vlSelf->__PVT__exe_mem_we_o = 0U;
                vlSelf->__PVT__exe_mem_addr_o = 0U;
                vlSelf->__PVT__exe_mem_data_o = 0U;
                vlSelf->__PVT__exe_reg_waddr_o = 0U;
                vlSelf->__PVT__exe_reg_we_o = 0U;
                vlSelf->__PVT__exe_jump_addr_o = 0U;
                vlSelf->__PVT__exe_jump_enable_o = 0U;
                vlSelf->__PVT__exe_reg_wdata_o = 0U;
                vlSelf->__PVT__exe_stallreq_o = 0U;
            } else if ((4U & vlSelf->__PVT__id_exe_inst_o)) {
                if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                    if ((1U & (~ vlSelf->__PVT__id_exe_inst_o))) {
                        vlSelf->__PVT__exe_mem_op_o = 0U;
                        vlSelf->__PVT__exe_mem_we_o = 0U;
                        vlSelf->__PVT__exe_mem_addr_o = 0U;
                        vlSelf->__PVT__exe_mem_data_o = 0U;
                        vlSelf->__PVT__exe_reg_we_o = 0U;
                        vlSelf->__PVT__exe_jump_addr_o = 0U;
                        vlSelf->__PVT__exe_jump_enable_o = 0U;
                        vlSelf->__PVT__exe_stallreq_o = 0U;
                    }
                    if ((1U & vlSelf->__PVT__id_exe_inst_o)) {
                        vlSelf->__PVT__exe_reg_waddr_o 
                            = vlSelf->__PVT__id_exe_reg_waddr_o;
                        vlSelf->__PVT__exe_reg_wdata_o 
                            = (vlSelf->__PVT__id_exe_op1_o 
                               + vlSelf->__PVT__id_exe_op2_o);
                    } else {
                        vlSelf->__PVT__exe_reg_waddr_o = 0U;
                        vlSelf->__PVT__exe_reg_wdata_o = 0U;
                    }
                } else {
                    vlSelf->__PVT__exe_mem_op_o = 0U;
                    vlSelf->__PVT__exe_mem_we_o = 0U;
                    vlSelf->__PVT__exe_mem_addr_o = 0U;
                    vlSelf->__PVT__exe_mem_data_o = 0U;
                    vlSelf->__PVT__exe_reg_waddr_o = 0U;
                    vlSelf->__PVT__exe_reg_we_o = 0U;
                    vlSelf->__PVT__exe_jump_addr_o = 0U;
                    vlSelf->__PVT__exe_jump_enable_o = 0U;
                    vlSelf->__PVT__exe_reg_wdata_o = 0U;
                    vlSelf->__PVT__exe_stallreq_o = 0U;
                }
            } else if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                if ((1U & (~ vlSelf->__PVT__id_exe_inst_o))) {
                    vlSelf->__PVT__exe_mem_op_o = 0U;
                    vlSelf->__PVT__exe_mem_we_o = 0U;
                    vlSelf->__PVT__exe_mem_addr_o = 0U;
                    vlSelf->__PVT__exe_mem_data_o = 0U;
                    vlSelf->__PVT__exe_jump_addr_o = 0U;
                    vlSelf->__PVT__exe_jump_enable_o = 0U;
                    vlSelf->__PVT__exe_stallreq_o = 0U;
                }
                if ((1U & vlSelf->__PVT__id_exe_inst_o)) {
                    if ((0x4000U & vlSelf->__PVT__id_exe_inst_o)) {
                        if ((0x2000U & vlSelf->__PVT__id_exe_inst_o)) {
                            vlSelf->__PVT__exe_reg_waddr_o 
                                = vlSelf->__PVT__id_exe_reg_waddr_o;
                            vlSelf->__PVT__exe_reg_wdata_o 
                                = ((0x1000U & vlSelf->__PVT__id_exe_inst_o)
                                    ? (vlSelf->__PVT__id_exe_op1_o 
                                       & vlSelf->__PVT__id_exe_op2_o)
                                    : (vlSelf->__PVT__id_exe_op1_o 
                                       | vlSelf->__PVT__id_exe_op2_o));
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
                            vlSelf->__PVT__exe_reg_wdata_o 
                                = ((0U == (vlSelf->__PVT__id_exe_inst_o 
                                           >> 0x19U))
                                    ? ((0x1fU >= vlSelf->__PVT__id_exe_op2_o)
                                        ? (vlSelf->__PVT__id_exe_op1_o 
                                           >> vlSelf->__PVT__id_exe_op2_o)
                                        : 0U) : ((0x20U 
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
                                                  : 0U));
                        } else {
                            vlSelf->__PVT__exe_reg_waddr_o 
                                = vlSelf->__PVT__id_exe_reg_waddr_o;
                            vlSelf->__PVT__exe_reg_wdata_o 
                                = (vlSelf->__PVT__id_exe_op1_o 
                                   ^ vlSelf->__PVT__id_exe_op2_o);
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
                        vlSelf->__PVT__exe_reg_wdata_o 
                            = ((0x2000U & vlSelf->__PVT__id_exe_inst_o)
                                ? ((0x1000U & vlSelf->__PVT__id_exe_inst_o)
                                    ? ((vlSelf->__PVT__id_exe_op1_o 
                                        < vlSelf->__PVT__id_exe_op2_o)
                                        ? 1U : 0U) : 
                                   (VL_LTS_III(32, vlSelf->__PVT__id_exe_op1_o, vlSelf->__PVT__id_exe_op2_o)
                                     ? 1U : 0U)) : 
                               ((0x1000U & vlSelf->__PVT__id_exe_inst_o)
                                 ? ((0x1fU >= vlSelf->__PVT__id_exe_op2_o)
                                     ? (vlSelf->__PVT__id_exe_op1_o 
                                        << vlSelf->__PVT__id_exe_op2_o)
                                     : 0U) : (vlSelf->__PVT__id_exe_op1_o 
                                              + vlSelf->__PVT__id_exe_op2_o)));
                    }
                } else {
                    vlSelf->__PVT__exe_reg_waddr_o = 0U;
                    vlSelf->__PVT__exe_reg_we_o = 0U;
                    vlSelf->__PVT__exe_reg_wdata_o = 0U;
                }
            } else {
                vlSelf->__PVT__exe_mem_op_o = 0U;
                vlSelf->__PVT__exe_mem_we_o = 0U;
                vlSelf->__PVT__exe_mem_addr_o = 0U;
                vlSelf->__PVT__exe_mem_data_o = 0U;
                vlSelf->__PVT__exe_reg_waddr_o = 0U;
                vlSelf->__PVT__exe_reg_we_o = 0U;
                vlSelf->__PVT__exe_jump_addr_o = 0U;
                vlSelf->__PVT__exe_jump_enable_o = 0U;
                vlSelf->__PVT__exe_reg_wdata_o = 0U;
                vlSelf->__PVT__exe_stallreq_o = 0U;
            }
        } else {
            if ((8U & vlSelf->__PVT__id_exe_inst_o)) {
                vlSelf->__PVT__exe_mem_op_o = 0U;
                vlSelf->__PVT__exe_mem_addr_o = 0U;
                vlSelf->__PVT__exe_reg_waddr_o = 0U;
                vlSelf->__PVT__exe_jump_addr_o = 0U;
                vlSelf->__PVT__exe_jump_enable_o = 0U;
                vlSelf->__PVT__exe_stallreq_o = 0U;
            } else if ((4U & vlSelf->__PVT__id_exe_inst_o)) {
                vlSelf->__PVT__exe_mem_op_o = 0U;
                vlSelf->__PVT__exe_mem_addr_o = 0U;
                vlSelf->__PVT__exe_reg_waddr_o = 0U;
                vlSelf->__PVT__exe_jump_addr_o = 0U;
                vlSelf->__PVT__exe_jump_enable_o = 0U;
                vlSelf->__PVT__exe_stallreq_o = 0U;
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
                    vlSelf->__PVT__exe_jump_enable_o = 0U;
                    vlSelf->__PVT__exe_stallreq_o = 0U;
                }
            } else {
                vlSelf->__PVT__exe_mem_op_o = 0U;
                vlSelf->__PVT__exe_mem_addr_o = 0U;
                vlSelf->__PVT__exe_reg_waddr_o = 0U;
                vlSelf->__PVT__exe_jump_addr_o = 0U;
                vlSelf->__PVT__exe_jump_enable_o = 0U;
                vlSelf->__PVT__exe_stallreq_o = 0U;
            }
            vlSelf->__PVT__exe_mem_we_o = 0U;
            vlSelf->__PVT__exe_mem_data_o = 0U;
            vlSelf->__PVT__exe_reg_we_o = (IData)((3U 
                                                   == 
                                                   (0xfU 
                                                    & vlSelf->__PVT__id_exe_inst_o)));
            vlSelf->__PVT__exe_reg_wdata_o = 0U;
        }
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
    }
    vlSelf->__PVT__mem_reg_we_o = ((IData)(vlSymsp->TOP.rst_i) 
                                   | (IData)(vlSelf->__PVT__exe_mem_reg_we_o));
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
                                                                  & (IData)(vlSelf->__PVT__id0__DOT__inst_type_r__DOT__isType_r))))))
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
                                                               & (IData)(vlSelf->__PVT__id0__DOT__inst_type_r__DOT__isType_r)))
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
                                                             & (IData)(vlSelf->__PVT__id0__DOT__inst_type_r__DOT__isType_r)))
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

VL_INLINE_OPT void Vtest_top_test_top___ico_sequent__TOP__test_top__1(Vtest_top_test_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtest_top_test_top___ico_sequent__TOP__test_top__1\n"); );
    // Body
    if (vlSymsp->TOP.rst_i) {
        vlSelf->__PVT__id0__DOT__op2_o_final = 0U;
        vlSelf->__PVT__id0__DOT__op1_o_final = 0U;
        vlSelf->__PVT__mem_reg_wdata_o = 0U;
        vlSelf->__PVT__mem_ram_data_o = 0U;
    } else {
        if ((0x40U & vlSelf->__PVT__if_id_inst_o)) {
            if ((0x20U & vlSelf->__PVT__if_id_inst_o)) {
                if ((0x10U & vlSelf->__PVT__if_id_inst_o)) {
                    vlSelf->__PVT__id0__DOT__op2_o_final = 0U;
                    vlSelf->__PVT__id0__DOT__op1_o_final = 0U;
                } else if ((8U & vlSelf->__PVT__if_id_inst_o)) {
                    vlSelf->__PVT__id0__DOT__op2_o_final = 0U;
                    vlSelf->__PVT__id0__DOT__op1_o_final = 0U;
                } else if ((4U & vlSelf->__PVT__if_id_inst_o)) {
                    vlSelf->__PVT__id0__DOT__op2_o_final = 0U;
                    vlSelf->__PVT__id0__DOT__op1_o_final 
                        = ((2U & vlSelf->__PVT__if_id_inst_o)
                            ? ((1U & vlSelf->__PVT__if_id_inst_o)
                                ? vlSymsp->TOP__test_top__regfile0.__PVT__rdata1_o
                                : 0U) : 0U);
                } else if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                    if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                        vlSelf->__PVT__id0__DOT__op2_o_final 
                            = vlSymsp->TOP__test_top__regfile0.__PVT__rdata2_o;
                        vlSelf->__PVT__id0__DOT__op1_o_final 
                            = vlSymsp->TOP__test_top__regfile0.__PVT__rdata1_o;
                    } else {
                        vlSelf->__PVT__id0__DOT__op2_o_final = 0U;
                        vlSelf->__PVT__id0__DOT__op1_o_final = 0U;
                    }
                } else {
                    vlSelf->__PVT__id0__DOT__op2_o_final = 0U;
                    vlSelf->__PVT__id0__DOT__op1_o_final = 0U;
                }
            } else {
                vlSelf->__PVT__id0__DOT__op2_o_final = 0U;
                vlSelf->__PVT__id0__DOT__op1_o_final = 0U;
            }
        } else if ((0x20U & vlSelf->__PVT__if_id_inst_o)) {
            if ((0x10U & vlSelf->__PVT__if_id_inst_o)) {
                if ((8U & vlSelf->__PVT__if_id_inst_o)) {
                    vlSelf->__PVT__id0__DOT__op2_o_final = 0U;
                    vlSelf->__PVT__id0__DOT__op1_o_final = 0U;
                } else if ((4U & vlSelf->__PVT__if_id_inst_o)) {
                    vlSelf->__PVT__id0__DOT__op2_o_final = 0U;
                    vlSelf->__PVT__id0__DOT__op1_o_final 
                        = ((2U & vlSelf->__PVT__if_id_inst_o)
                            ? ((1U & vlSelf->__PVT__if_id_inst_o)
                                ? (0xfffff000U & vlSelf->__PVT__if_id_inst_o)
                                : 0U) : 0U);
                } else if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                    if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                        if (vlSelf->__PVT__id0__DOT__inst_type_r__DOT__isType_r) {
                            vlSelf->__PVT__id0__DOT__op2_o_final 
                                = vlSymsp->TOP__test_top__regfile0.__PVT__rdata2_o;
                            vlSelf->__PVT__id0__DOT__op1_o_final 
                                = vlSymsp->TOP__test_top__regfile0.__PVT__rdata1_o;
                        } else {
                            vlSelf->__PVT__id0__DOT__op2_o_final = 0U;
                            vlSelf->__PVT__id0__DOT__op1_o_final = 0U;
                        }
                    } else {
                        vlSelf->__PVT__id0__DOT__op2_o_final = 0U;
                        vlSelf->__PVT__id0__DOT__op1_o_final = 0U;
                    }
                } else {
                    vlSelf->__PVT__id0__DOT__op2_o_final = 0U;
                    vlSelf->__PVT__id0__DOT__op1_o_final = 0U;
                }
            } else if ((8U & vlSelf->__PVT__if_id_inst_o)) {
                vlSelf->__PVT__id0__DOT__op2_o_final = 0U;
                vlSelf->__PVT__id0__DOT__op1_o_final = 0U;
            } else if ((4U & vlSelf->__PVT__if_id_inst_o)) {
                vlSelf->__PVT__id0__DOT__op2_o_final = 0U;
                vlSelf->__PVT__id0__DOT__op1_o_final = 0U;
            } else if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                    vlSelf->__PVT__id0__DOT__op2_o_final 
                        = vlSymsp->TOP__test_top__regfile0.__PVT__rdata2_o;
                    vlSelf->__PVT__id0__DOT__op1_o_final 
                        = vlSymsp->TOP__test_top__regfile0.__PVT__rdata1_o;
                } else {
                    vlSelf->__PVT__id0__DOT__op2_o_final = 0U;
                    vlSelf->__PVT__id0__DOT__op1_o_final = 0U;
                }
            } else {
                vlSelf->__PVT__id0__DOT__op2_o_final = 0U;
                vlSelf->__PVT__id0__DOT__op1_o_final = 0U;
            }
        } else if ((0x10U & vlSelf->__PVT__if_id_inst_o)) {
            if ((8U & vlSelf->__PVT__if_id_inst_o)) {
                vlSelf->__PVT__id0__DOT__op2_o_final = 0U;
                vlSelf->__PVT__id0__DOT__op1_o_final = 0U;
            } else if ((4U & vlSelf->__PVT__if_id_inst_o)) {
                if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                    if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                        vlSelf->__PVT__id0__DOT__op2_o_final 
                            = (0xfffff000U & vlSelf->__PVT__if_id_inst_o);
                        vlSelf->__PVT__id0__DOT__op1_o_final 
                            = vlSelf->__PVT__if_id_inst_addr_o;
                    } else {
                        vlSelf->__PVT__id0__DOT__op2_o_final = 0U;
                        vlSelf->__PVT__id0__DOT__op1_o_final = 0U;
                    }
                } else {
                    vlSelf->__PVT__id0__DOT__op2_o_final = 0U;
                    vlSelf->__PVT__id0__DOT__op1_o_final = 0U;
                }
            } else if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                    vlSelf->__PVT__id0__DOT__op2_o_final 
                        = ((0x2000U & vlSelf->__PVT__if_id_inst_o)
                            ? (((- (IData)((vlSelf->__PVT__if_id_inst_o 
                                            >> 0x1fU))) 
                                << 0xcU) | (vlSelf->__PVT__if_id_inst_o 
                                            >> 0x14U))
                            : ((0x1000U & vlSelf->__PVT__if_id_inst_o)
                                ? (0x1fU & (vlSelf->__PVT__if_id_inst_o 
                                            >> 0x14U))
                                : (((- (IData)((vlSelf->__PVT__if_id_inst_o 
                                                >> 0x1fU))) 
                                    << 0xcU) | (vlSelf->__PVT__if_id_inst_o 
                                                >> 0x14U))));
                    vlSelf->__PVT__id0__DOT__op1_o_final 
                        = vlSymsp->TOP__test_top__regfile0.__PVT__rdata1_o;
                } else {
                    vlSelf->__PVT__id0__DOT__op2_o_final = 0U;
                    vlSelf->__PVT__id0__DOT__op1_o_final = 0U;
                }
            } else {
                vlSelf->__PVT__id0__DOT__op2_o_final = 0U;
                vlSelf->__PVT__id0__DOT__op1_o_final = 0U;
            }
        } else {
            vlSelf->__PVT__id0__DOT__op2_o_final = 0U;
            vlSelf->__PVT__id0__DOT__op1_o_final = 
                ((8U & vlSelf->__PVT__if_id_inst_o)
                  ? 0U : ((4U & vlSelf->__PVT__if_id_inst_o)
                           ? 0U : ((2U & vlSelf->__PVT__if_id_inst_o)
                                    ? ((1U & vlSelf->__PVT__if_id_inst_o)
                                        ? vlSymsp->TOP__test_top__regfile0.__PVT__rdata1_o
                                        : 0U) : 0U)));
        }
        vlSelf->__PVT__mem_reg_wdata_o = vlSelf->__PVT__exe_mem_reg_wdata_o;
        vlSelf->__PVT__mem_ram_data_o = 0U;
        if ((8U & (IData)(vlSelf->__PVT__exe_mem_mem_op_o))) {
            if ((4U & (IData)(vlSelf->__PVT__exe_mem_mem_op_o))) {
                if ((2U & (IData)(vlSelf->__PVT__exe_mem_mem_op_o))) {
                    vlSelf->__PVT__mem_reg_wdata_o 
                        = vlSelf->__PVT__exe_mem_reg_wdata_o;
                    vlSelf->__PVT__mem_ram_data_o = 0U;
                } else {
                    vlSelf->__PVT__mem_reg_wdata_o 
                        = ((1U & (IData)(vlSelf->__PVT__exe_mem_mem_op_o))
                            ? (((0U == (3U & vlSelf->__PVT__exe_mem_mem_addr_o)) 
                                | (1U == (3U & vlSelf->__PVT__exe_mem_mem_addr_o)))
                                ? (0xffffU & vlSymsp->TOP__test_top__data_ram0.__PVT__data_o)
                                : (vlSymsp->TOP__test_top__data_ram0.__PVT__data_o 
                                   >> 0x10U)) : ((0U 
                                                  == 
                                                  (3U 
                                                   & vlSelf->__PVT__exe_mem_mem_addr_o))
                                                  ? 
                                                 (0xffU 
                                                  & vlSymsp->TOP__test_top__data_ram0.__PVT__data_o)
                                                  : 
                                                 ((1U 
                                                   == 
                                                   (3U 
                                                    & vlSelf->__PVT__exe_mem_mem_addr_o))
                                                   ? 
                                                  (0xffU 
                                                   & (vlSymsp->TOP__test_top__data_ram0.__PVT__data_o 
                                                      >> 8U))
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (3U 
                                                     & vlSelf->__PVT__exe_mem_mem_addr_o))
                                                    ? 
                                                   (0xffU 
                                                    & (vlSymsp->TOP__test_top__data_ram0.__PVT__data_o 
                                                       >> 0x10U))
                                                    : 
                                                   (vlSymsp->TOP__test_top__data_ram0.__PVT__data_o 
                                                    >> 0x18U)))));
                }
            } else {
                vlSelf->__PVT__mem_reg_wdata_o = ((2U 
                                                   & (IData)(vlSelf->__PVT__exe_mem_mem_op_o))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__exe_mem_mem_op_o))
                                                    ? vlSymsp->TOP__test_top__data_ram0.__PVT__data_o
                                                    : 
                                                   (((0U 
                                                      == 
                                                      (3U 
                                                       & vlSelf->__PVT__exe_mem_mem_addr_o)) 
                                                     | (1U 
                                                        == 
                                                        (3U 
                                                         & vlSelf->__PVT__exe_mem_mem_addr_o)))
                                                     ? 
                                                    (((- (IData)(
                                                                 (1U 
                                                                  & (vlSymsp->TOP__test_top__data_ram0.__PVT__data_o 
                                                                     >> 0xfU)))) 
                                                      << 0x10U) 
                                                     | (0xffffU 
                                                        & vlSymsp->TOP__test_top__data_ram0.__PVT__data_o))
                                                     : 
                                                    (((- (IData)(
                                                                 (vlSymsp->TOP__test_top__data_ram0.__PVT__data_o 
                                                                  >> 0x1fU))) 
                                                      << 0x10U) 
                                                     | (vlSymsp->TOP__test_top__data_ram0.__PVT__data_o 
                                                        >> 0x10U))))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__exe_mem_mem_op_o))
                                                    ? 
                                                   ((0U 
                                                     == 
                                                     (3U 
                                                      & vlSelf->__PVT__exe_mem_mem_addr_o))
                                                     ? 
                                                    (((- (IData)(
                                                                 (1U 
                                                                  & (vlSymsp->TOP__test_top__data_ram0.__PVT__data_o 
                                                                     >> 7U)))) 
                                                      << 8U) 
                                                     | (0xffU 
                                                        & vlSymsp->TOP__test_top__data_ram0.__PVT__data_o))
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (3U 
                                                       & vlSelf->__PVT__exe_mem_mem_addr_o))
                                                      ? 
                                                     (((- (IData)(
                                                                  (1U 
                                                                   & (vlSymsp->TOP__test_top__data_ram0.__PVT__data_o 
                                                                      >> 0xfU)))) 
                                                       << 8U) 
                                                      | (0xffU 
                                                         & (vlSymsp->TOP__test_top__data_ram0.__PVT__data_o 
                                                            >> 8U)))
                                                      : 
                                                     ((2U 
                                                       == 
                                                       (3U 
                                                        & vlSelf->__PVT__exe_mem_mem_addr_o))
                                                       ? 
                                                      (((- (IData)(
                                                                   (1U 
                                                                    & (vlSymsp->TOP__test_top__data_ram0.__PVT__data_o 
                                                                       >> 0x17U)))) 
                                                        << 8U) 
                                                       | (0xffU 
                                                          & (vlSymsp->TOP__test_top__data_ram0.__PVT__data_o 
                                                             >> 0x10U)))
                                                       : 
                                                      (((- (IData)(
                                                                   (vlSymsp->TOP__test_top__data_ram0.__PVT__data_o 
                                                                    >> 0x1fU))) 
                                                        << 8U) 
                                                       | (vlSymsp->TOP__test_top__data_ram0.__PVT__data_o 
                                                          >> 0x18U)))))
                                                    : vlSelf->__PVT__exe_mem_reg_wdata_o));
                if ((1U & (~ ((IData)(vlSelf->__PVT__exe_mem_mem_op_o) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->__PVT__exe_mem_mem_op_o)))) {
                        vlSelf->__PVT__mem_ram_data_o = 0U;
                    }
                }
            }
        } else if ((4U & (IData)(vlSelf->__PVT__exe_mem_mem_op_o))) {
            vlSelf->__PVT__mem_reg_wdata_o = vlSelf->__PVT__exe_mem_reg_wdata_o;
            vlSelf->__PVT__mem_ram_data_o = 0U;
        } else {
            if ((1U & (~ ((IData)(vlSelf->__PVT__exe_mem_mem_op_o) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__exe_mem_mem_op_o)))) {
                    vlSelf->__PVT__mem_reg_wdata_o 
                        = vlSelf->__PVT__exe_mem_reg_wdata_o;
                }
            }
            vlSelf->__PVT__mem_ram_data_o = ((2U & (IData)(vlSelf->__PVT__exe_mem_mem_op_o))
                                              ? ((1U 
                                                  & (IData)(vlSelf->__PVT__exe_mem_mem_op_o))
                                                  ? vlSelf->__PVT__exe_mem_mem_data_o
                                                  : 
                                                 (((0U 
                                                    == 
                                                    (3U 
                                                     & vlSelf->__PVT__exe_mem_mem_addr_o)) 
                                                   | (1U 
                                                      == 
                                                      (3U 
                                                       & vlSelf->__PVT__exe_mem_mem_addr_o)))
                                                   ? 
                                                  ((0xffff0000U 
                                                    & vlSymsp->TOP__test_top__data_ram0.__PVT__data_o) 
                                                   | (0xffffU 
                                                      & vlSelf->__PVT__exe_mem_mem_data_o))
                                                   : 
                                                  ((vlSelf->__PVT__exe_mem_mem_data_o 
                                                    << 0x10U) 
                                                   | (0xffffU 
                                                      & vlSymsp->TOP__test_top__data_ram0.__PVT__data_o))))
                                              : ((1U 
                                                  & (IData)(vlSelf->__PVT__exe_mem_mem_op_o))
                                                  ? 
                                                 ((0U 
                                                   == 
                                                   (3U 
                                                    & vlSelf->__PVT__exe_mem_mem_addr_o))
                                                   ? 
                                                  ((0xffffff00U 
                                                    & vlSymsp->TOP__test_top__data_ram0.__PVT__data_o) 
                                                   | (0xffU 
                                                      & vlSelf->__PVT__exe_mem_mem_data_o))
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (3U 
                                                     & vlSelf->__PVT__exe_mem_mem_addr_o))
                                                    ? 
                                                   ((0xffff0000U 
                                                     & vlSymsp->TOP__test_top__data_ram0.__PVT__data_o) 
                                                    | ((0xff00U 
                                                        & (vlSelf->__PVT__exe_mem_mem_data_o 
                                                           << 8U)) 
                                                       | (0xffU 
                                                          & vlSymsp->TOP__test_top__data_ram0.__PVT__data_o)))
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (3U 
                                                      & vlSelf->__PVT__exe_mem_mem_addr_o))
                                                     ? 
                                                    ((0xff000000U 
                                                      & vlSymsp->TOP__test_top__data_ram0.__PVT__data_o) 
                                                     | ((0xff0000U 
                                                         & (vlSelf->__PVT__exe_mem_mem_data_o 
                                                            << 0x10U)) 
                                                        | (0xffffU 
                                                           & vlSymsp->TOP__test_top__data_ram0.__PVT__data_o)))
                                                     : 
                                                    ((vlSelf->__PVT__exe_mem_mem_data_o 
                                                      << 0x18U) 
                                                     | (0xffffffU 
                                                        & vlSymsp->TOP__test_top__data_ram0.__PVT__data_o)))))
                                                  : 0U));
        }
    }
}

VL_INLINE_OPT void Vtest_top_test_top___nba_sequent__TOP__test_top__0(Vtest_top_test_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtest_top_test_top___nba_sequent__TOP__test_top__0\n"); );
    // Init
    IData/*31:0*/ __Vdly__pc_wire;
    __Vdly__pc_wire = 0;
    IData/*31:0*/ __Vdly__if_id_inst_addr_o;
    __Vdly__if_id_inst_addr_o = 0;
    IData/*31:0*/ __Vtemp_ha8782feb__0;
    // Body
    __Vdly__if_id_inst_addr_o = vlSelf->__PVT__if_id_inst_addr_o;
    __Vdly__pc_wire = vlSelf->__PVT__pc_wire;
    vlSelf->__PVT__id_exe_reg_we_o = ((~ (IData)(vlSymsp->TOP.rst_i)) 
                                      & ((IData)((0xcU 
                                                  == 
                                                  (0xcU 
                                                   & (IData)(vlSelf->__PVT__ctrl_stall_o))))
                                          ? (IData)(vlSelf->__PVT__id_exe_reg_we_o)
                                          : ((~ (IData)(
                                                        (4U 
                                                         == 
                                                         (0xcU 
                                                          & (IData)(vlSelf->__PVT__ctrl_stall_o))))) 
                                             & ((~ (IData)(vlSelf->__PVT__exe_jump_enable_o)) 
                                                & (IData)(vlSelf->__PVT__id_reg_we_o)))));
    vlSelf->__PVT__id_exe_inst_is_load_o = ((~ (IData)(vlSymsp->TOP.rst_i)) 
                                            & ((IData)(
                                                       (0xcU 
                                                        == 
                                                        (0xcU 
                                                         & (IData)(vlSelf->__PVT__ctrl_stall_o))))
                                                ? (IData)(vlSelf->__PVT__id_exe_inst_is_load_o)
                                                : (
                                                   (~ (IData)(
                                                              (4U 
                                                               == 
                                                               (0xcU 
                                                                & (IData)(vlSelf->__PVT__ctrl_stall_o))))) 
                                                   & ((~ (IData)(vlSelf->__PVT__exe_jump_enable_o)) 
                                                      & (3U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->__PVT__id_inst_o))))));
    __Vdly__pc_wire = ((IData)(vlSelf->__PVT__ce_wire)
                        ? ((1U & (IData)(vlSelf->__PVT__ctrl_stall_o))
                            ? vlSelf->__PVT__pc_wire
                            : ((IData)(vlSelf->__PVT__exe_jump_enable_o)
                                ? vlSelf->__PVT__exe_jump_addr_o
                                : ((IData)(4U) + vlSelf->__PVT__pc_wire)))
                        : 0U);
    vlSelf->__PVT__mem_halt_o = (((3U == (IData)(vlSelf->__PVT__exe_mem_mem_op_o)) 
                                  & (0x200008U == vlSelf->__PVT__exe_mem_mem_addr_o)) 
                                 | (IData)(vlSelf->__PVT__mem_halt_o));
    if (vlSymsp->TOP.rst_i) {
        vlSelf->__PVT__id_exe_reg_waddr_o = 0U;
        vlSelf->__PVT__id_exe_rd_o = 0U;
        __Vdly__if_id_inst_addr_o = 0U;
        vlSelf->__PVT__id_exe_op2_o = 0U;
        vlSelf->__PVT__id_exe_op1_o = 0U;
        vlSelf->__PVT__id_exe_inst_o = 0x13U;
        __Vtemp_ha8782feb__0 = 0x13U;
    } else {
        if ((0xcU == (0xcU & (IData)(vlSelf->__PVT__ctrl_stall_o)))) {
            vlSelf->__PVT__id_exe_reg_waddr_o = vlSelf->__PVT__id_exe_reg_waddr_o;
            vlSelf->__PVT__id_exe_rd_o = (0x1fU & (IData)(vlSelf->__PVT__id_exe_rd_o));
            vlSelf->__PVT__id_exe_op2_o = vlSelf->__PVT__id_exe_op2_o;
            vlSelf->__PVT__id_exe_op1_o = vlSelf->__PVT__id_exe_op1_o;
            vlSelf->__PVT__id_exe_inst_o = vlSelf->__PVT__id_exe_inst_o;
        } else if ((4U == (0xcU & (IData)(vlSelf->__PVT__ctrl_stall_o)))) {
            vlSelf->__PVT__id_exe_reg_waddr_o = 0U;
            vlSelf->__PVT__id_exe_rd_o = (0x1fU & 0U);
            vlSelf->__PVT__id_exe_op2_o = 0U;
            vlSelf->__PVT__id_exe_op1_o = 0U;
            vlSelf->__PVT__id_exe_inst_o = 0x13U;
        } else if (vlSelf->__PVT__exe_jump_enable_o) {
            vlSelf->__PVT__id_exe_reg_waddr_o = 0U;
            vlSelf->__PVT__id_exe_rd_o = (0x1fU & 0U);
            vlSelf->__PVT__id_exe_op2_o = 0U;
            vlSelf->__PVT__id_exe_op1_o = 0U;
            vlSelf->__PVT__id_exe_inst_o = 0x13U;
        } else {
            vlSelf->__PVT__id_exe_reg_waddr_o = vlSelf->__PVT__id_reg_waddr_o;
            vlSelf->__PVT__id_exe_rd_o = (0x1fU & (vlSelf->__PVT__id_inst_o 
                                                   >> 7U));
            vlSelf->__PVT__id_exe_op2_o = (((((IData)(vlSelf->__PVT__id_reg2_re_o) 
                                              & (IData)(vlSelf->__PVT__exe_reg_we_o)) 
                                             & (0U 
                                                != (IData)(vlSelf->__PVT__id_reg2_addr_o))) 
                                            & ((IData)(vlSelf->__PVT__exe_reg_waddr_o) 
                                               == (IData)(vlSelf->__PVT__id_reg2_addr_o)))
                                            ? vlSelf->__PVT__exe_reg_wdata_o
                                            : (((((IData)(vlSelf->__PVT__id_reg2_re_o) 
                                                  & (IData)(vlSelf->__PVT__mem_reg_we_o)) 
                                                 & (0U 
                                                    != (IData)(vlSelf->__PVT__id_reg2_addr_o))) 
                                                & ((IData)(vlSelf->__PVT__mem_reg_waddr_o) 
                                                   == (IData)(vlSelf->__PVT__id_reg2_addr_o)))
                                                ? vlSelf->__PVT__mem_reg_wdata_o
                                                : vlSelf->__PVT__id0__DOT__op2_o_final));
            vlSelf->__PVT__id_exe_op1_o = (((((IData)(vlSelf->__PVT__id_reg1_re_o) 
                                              & (IData)(vlSelf->__PVT__exe_reg_we_o)) 
                                             & (0U 
                                                != (IData)(vlSelf->__PVT__id_reg1_addr_o))) 
                                            & ((IData)(vlSelf->__PVT__exe_reg_waddr_o) 
                                               == (IData)(vlSelf->__PVT__id_reg1_addr_o)))
                                            ? vlSelf->__PVT__exe_reg_wdata_o
                                            : (((((IData)(vlSelf->__PVT__id_reg1_re_o) 
                                                  & (IData)(vlSelf->__PVT__mem_reg_we_o)) 
                                                 & (0U 
                                                    != (IData)(vlSelf->__PVT__id_reg1_addr_o))) 
                                                & ((IData)(vlSelf->__PVT__mem_reg_waddr_o) 
                                                   == (IData)(vlSelf->__PVT__id_reg1_addr_o)))
                                                ? vlSelf->__PVT__mem_reg_wdata_o
                                                : vlSelf->__PVT__id0__DOT__op1_o_final));
            vlSelf->__PVT__id_exe_inst_o = vlSelf->__PVT__id_inst_o;
        }
        if ((6U == (6U & (IData)(vlSelf->__PVT__ctrl_stall_o)))) {
            __Vdly__if_id_inst_addr_o = vlSelf->__PVT__if_id_inst_addr_o;
            __Vtemp_ha8782feb__0 = vlSelf->__PVT__if_id_inst_o;
        } else if ((2U == (6U & (IData)(vlSelf->__PVT__ctrl_stall_o)))) {
            __Vdly__if_id_inst_addr_o = 0U;
            __Vtemp_ha8782feb__0 = 0x13U;
        } else if (vlSelf->__PVT__exe_jump_enable_o) {
            __Vdly__if_id_inst_addr_o = 0U;
            __Vtemp_ha8782feb__0 = 0x13U;
        } else {
            __Vdly__if_id_inst_addr_o = vlSelf->__PVT__pc_wire;
            __Vtemp_ha8782feb__0 = ((IData)(vlSelf->__PVT__ce_wire)
                                     ? ((vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                         [(0x1ffffcU 
                                           & vlSelf->__PVT__pc_wire)] 
                                         << 0x18U) 
                                        | ((vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                            [(0x1fffffU 
                                              & ((IData)(1U) 
                                                 + 
                                                 (0x1ffffcU 
                                                  & vlSelf->__PVT__pc_wire)))] 
                                            << 0x10U) 
                                           | ((vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                               [(0x1fffffU 
                                                 & ((IData)(2U) 
                                                    + 
                                                    (0x1ffffcU 
                                                     & vlSelf->__PVT__pc_wire)))] 
                                               << 8U) 
                                              | vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                              [(0x1fffffU 
                                                & ((IData)(3U) 
                                                   + 
                                                   (0x1ffffcU 
                                                    & vlSelf->__PVT__pc_wire)))])))
                                     : 0U);
        }
    }
    vlSelf->__PVT__if_id_inst_o = __Vtemp_ha8782feb__0;
    vlSelf->__PVT__exe_mem_mem_we_o = ((~ (IData)(vlSymsp->TOP.rst_i)) 
                                       & (IData)(vlSelf->__PVT__exe_mem_we_o));
    vlSelf->__PVT__exe_mem_reg_we_o = ((IData)(vlSymsp->TOP.rst_i) 
                                       | (IData)(vlSelf->__PVT__exe_reg_we_o));
    vlSelf->__PVT__pc_wire = __Vdly__pc_wire;
    if (vlSymsp->TOP.rst_i) {
        vlSelf->__PVT__exe_mem_reg_waddr_o = 0U;
        vlSelf->__PVT__exe_mem_mem_data_o = 0U;
        vlSelf->__PVT__exe_mem_reg_wdata_o = 0U;
        vlSelf->__PVT__id_exe_inst_addr_o = 0U;
    } else {
        vlSelf->__PVT__exe_mem_reg_waddr_o = vlSelf->__PVT__exe_reg_waddr_o;
        vlSelf->__PVT__exe_mem_mem_data_o = vlSelf->__PVT__exe_mem_data_o;
        vlSelf->__PVT__exe_mem_reg_wdata_o = vlSelf->__PVT__exe_reg_wdata_o;
        vlSelf->__PVT__id_exe_inst_addr_o = ((IData)(
                                                     (0xcU 
                                                      == 
                                                      (0xcU 
                                                       & (IData)(vlSelf->__PVT__ctrl_stall_o))))
                                              ? vlSelf->__PVT__if_id_inst_addr_o
                                              : ((IData)(
                                                         (4U 
                                                          == 
                                                          (0xcU 
                                                           & (IData)(vlSelf->__PVT__ctrl_stall_o))))
                                                  ? 0U
                                                  : 
                                                 ((IData)(vlSelf->__PVT__exe_jump_enable_o)
                                                   ? 0U
                                                   : vlSelf->__PVT__if_id_inst_addr_o)));
    }
    vlSelf->__PVT__if_id_inst_addr_o = __Vdly__if_id_inst_addr_o;
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
    vlSelf->__PVT__ce_wire = (1U & (~ (IData)(vlSymsp->TOP.rst_i)));
    vlSelf->__PVT__id0__DOT__inst_type_r__DOT__isType_r 
        = ((0x33U == (0x7fU & vlSelf->__PVT__if_id_inst_o)) 
           & ((0U == (vlSelf->__PVT__if_id_inst_o >> 0x19U)) 
              | (0x20U == (vlSelf->__PVT__if_id_inst_o 
                           >> 0x19U))));
    if (vlSymsp->TOP.rst_i) {
        vlSelf->__PVT__exe_mem_we_o = 0U;
        vlSelf->__PVT__exe_mem_data_o = 0U;
        vlSelf->__PVT__exe_stallreq_o = 0U;
        vlSelf->__PVT__exe_mem_mem_addr_o = 0U;
        vlSelf->__PVT__exe_mem_mem_op_o = 0U;
        vlSelf->__PVT__id_inst_o = 0x13U;
        vlSelf->__PVT__exe_jump_addr_o = 0U;
        vlSelf->__PVT__exe_jump_enable_o = 0U;
        vlSelf->__PVT__ctrl_stall_o = 0U;
        vlSelf->__PVT__exe_reg_waddr_o = 0U;
        vlSelf->__PVT__exe_reg_we_o = 0U;
        vlSelf->__PVT__exe_reg_wdata_o = 0U;
        vlSelf->__PVT__exe_mem_addr_o = 0U;
        vlSelf->__PVT__exe_mem_op_o = 0U;
        vlSelf->__PVT__id_reg_waddr_o = 0U;
        vlSelf->__PVT__id_reg2_addr_o = 0U;
        vlSelf->__PVT__id_reg1_addr_o = 0U;
    } else {
        vlSelf->__PVT__exe_mem_we_o = 0U;
        vlSelf->__PVT__exe_stallreq_o = 0U;
        vlSelf->__PVT__exe_mem_mem_addr_o = vlSelf->__PVT__exe_mem_addr_o;
        vlSelf->__PVT__exe_mem_mem_op_o = vlSelf->__PVT__exe_mem_op_o;
        if ((0x40U & vlSelf->__PVT__if_id_inst_o)) {
            if ((0x20U & vlSelf->__PVT__if_id_inst_o)) {
                if ((0x10U & vlSelf->__PVT__if_id_inst_o)) {
                    vlSelf->__PVT__id_inst_o = 0x13U;
                    vlSelf->__PVT__id_reg_waddr_o = 
                        (0x1fU & 0U);
                    vlSelf->__PVT__id_reg2_addr_o = 
                        (0x1fU & 0U);
                    vlSelf->__PVT__id_reg1_addr_o = 
                        (0x1fU & 0U);
                } else if ((8U & vlSelf->__PVT__if_id_inst_o)) {
                    if ((4U & vlSelf->__PVT__if_id_inst_o)) {
                        if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                            if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                                vlSelf->__PVT__id_inst_o 
                                    = vlSelf->__PVT__if_id_inst_o;
                                vlSelf->__PVT__id_reg_waddr_o 
                                    = (0x1fU & (vlSelf->__PVT__if_id_inst_o 
                                                >> 7U));
                            } else {
                                vlSelf->__PVT__id_inst_o = 0x13U;
                                vlSelf->__PVT__id_reg_waddr_o 
                                    = (0x1fU & 0U);
                            }
                        } else {
                            vlSelf->__PVT__id_inst_o = 0x13U;
                            vlSelf->__PVT__id_reg_waddr_o 
                                = (0x1fU & 0U);
                        }
                    } else {
                        vlSelf->__PVT__id_inst_o = 0x13U;
                        vlSelf->__PVT__id_reg_waddr_o 
                            = (0x1fU & 0U);
                    }
                    vlSelf->__PVT__id_reg2_addr_o = 
                        (0x1fU & 0U);
                    vlSelf->__PVT__id_reg1_addr_o = 
                        (0x1fU & 0U);
                } else if ((4U & vlSelf->__PVT__if_id_inst_o)) {
                    if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                        if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                            vlSelf->__PVT__id_inst_o 
                                = vlSelf->__PVT__if_id_inst_o;
                            vlSelf->__PVT__id_reg_waddr_o 
                                = (0x1fU & (vlSelf->__PVT__if_id_inst_o 
                                            >> 7U));
                            vlSelf->__PVT__id_reg1_addr_o 
                                = (0x1fU & (vlSelf->__PVT__if_id_inst_o 
                                            >> 0xfU));
                        } else {
                            vlSelf->__PVT__id_inst_o = 0x13U;
                            vlSelf->__PVT__id_reg_waddr_o 
                                = (0x1fU & 0U);
                            vlSelf->__PVT__id_reg1_addr_o 
                                = (0x1fU & 0U);
                        }
                    } else {
                        vlSelf->__PVT__id_inst_o = 0x13U;
                        vlSelf->__PVT__id_reg_waddr_o 
                            = (0x1fU & 0U);
                        vlSelf->__PVT__id_reg1_addr_o 
                            = (0x1fU & 0U);
                    }
                    vlSelf->__PVT__id_reg2_addr_o = 
                        (0x1fU & 0U);
                } else {
                    if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                        if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                            vlSelf->__PVT__id_inst_o 
                                = vlSelf->__PVT__if_id_inst_o;
                            vlSelf->__PVT__id_reg2_addr_o 
                                = (0x1fU & (vlSelf->__PVT__if_id_inst_o 
                                            >> 0x14U));
                            vlSelf->__PVT__id_reg1_addr_o 
                                = (0x1fU & (vlSelf->__PVT__if_id_inst_o 
                                            >> 0xfU));
                        } else {
                            vlSelf->__PVT__id_inst_o = 0x13U;
                            vlSelf->__PVT__id_reg2_addr_o 
                                = (0x1fU & 0U);
                            vlSelf->__PVT__id_reg1_addr_o 
                                = (0x1fU & 0U);
                        }
                    } else {
                        vlSelf->__PVT__id_inst_o = 0x13U;
                        vlSelf->__PVT__id_reg2_addr_o 
                            = (0x1fU & 0U);
                        vlSelf->__PVT__id_reg1_addr_o 
                            = (0x1fU & 0U);
                    }
                    vlSelf->__PVT__id_reg_waddr_o = 
                        (0x1fU & 0U);
                }
            } else {
                vlSelf->__PVT__id_inst_o = 0x13U;
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
                    vlSelf->__PVT__id_inst_o = 0x13U;
                    vlSelf->__PVT__id_reg_waddr_o = 
                        (0x1fU & 0U);
                    vlSelf->__PVT__id_reg2_addr_o = 
                        (0x1fU & 0U);
                    vlSelf->__PVT__id_reg1_addr_o = 
                        (0x1fU & 0U);
                } else if ((4U & vlSelf->__PVT__if_id_inst_o)) {
                    if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                        if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                            vlSelf->__PVT__id_inst_o 
                                = vlSelf->__PVT__if_id_inst_o;
                            vlSelf->__PVT__id_reg_waddr_o 
                                = (0x1fU & (vlSelf->__PVT__if_id_inst_o 
                                            >> 7U));
                        } else {
                            vlSelf->__PVT__id_inst_o = 0x13U;
                            vlSelf->__PVT__id_reg_waddr_o 
                                = (0x1fU & 0U);
                        }
                    } else {
                        vlSelf->__PVT__id_inst_o = 0x13U;
                        vlSelf->__PVT__id_reg_waddr_o 
                            = (0x1fU & 0U);
                    }
                    vlSelf->__PVT__id_reg2_addr_o = 
                        (0x1fU & 0U);
                    vlSelf->__PVT__id_reg1_addr_o = 
                        (0x1fU & 0U);
                } else if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                    if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                        vlSelf->__PVT__id_inst_o = vlSelf->__PVT__if_id_inst_o;
                        if (vlSelf->__PVT__id0__DOT__inst_type_r__DOT__isType_r) {
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
                        vlSelf->__PVT__id_inst_o = 0x13U;
                        vlSelf->__PVT__id_reg_waddr_o 
                            = (0x1fU & 0U);
                        vlSelf->__PVT__id_reg2_addr_o 
                            = (0x1fU & 0U);
                        vlSelf->__PVT__id_reg1_addr_o 
                            = (0x1fU & 0U);
                    }
                } else {
                    vlSelf->__PVT__id_inst_o = 0x13U;
                    vlSelf->__PVT__id_reg_waddr_o = 
                        (0x1fU & 0U);
                    vlSelf->__PVT__id_reg2_addr_o = 
                        (0x1fU & 0U);
                    vlSelf->__PVT__id_reg1_addr_o = 
                        (0x1fU & 0U);
                }
            } else {
                if ((8U & vlSelf->__PVT__if_id_inst_o)) {
                    vlSelf->__PVT__id_inst_o = 0x13U;
                    vlSelf->__PVT__id_reg2_addr_o = 
                        (0x1fU & 0U);
                    vlSelf->__PVT__id_reg1_addr_o = 
                        (0x1fU & 0U);
                } else if ((4U & vlSelf->__PVT__if_id_inst_o)) {
                    vlSelf->__PVT__id_inst_o = 0x13U;
                    vlSelf->__PVT__id_reg2_addr_o = 
                        (0x1fU & 0U);
                    vlSelf->__PVT__id_reg1_addr_o = 
                        (0x1fU & 0U);
                } else if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                    if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                        vlSelf->__PVT__id_inst_o = vlSelf->__PVT__if_id_inst_o;
                        vlSelf->__PVT__id_reg2_addr_o 
                            = (0x1fU & (vlSelf->__PVT__if_id_inst_o 
                                        >> 0x14U));
                        vlSelf->__PVT__id_reg1_addr_o 
                            = (0x1fU & (vlSelf->__PVT__if_id_inst_o 
                                        >> 0xfU));
                    } else {
                        vlSelf->__PVT__id_inst_o = 0x13U;
                        vlSelf->__PVT__id_reg2_addr_o 
                            = (0x1fU & 0U);
                        vlSelf->__PVT__id_reg1_addr_o 
                            = (0x1fU & 0U);
                    }
                } else {
                    vlSelf->__PVT__id_inst_o = 0x13U;
                    vlSelf->__PVT__id_reg2_addr_o = 
                        (0x1fU & 0U);
                    vlSelf->__PVT__id_reg1_addr_o = 
                        (0x1fU & 0U);
                }
                vlSelf->__PVT__id_reg_waddr_o = (0x1fU 
                                                 & 0U);
            }
        } else {
            if ((0x10U & vlSelf->__PVT__if_id_inst_o)) {
                if ((8U & vlSelf->__PVT__if_id_inst_o)) {
                    vlSelf->__PVT__id_inst_o = 0x13U;
                    vlSelf->__PVT__id_reg_waddr_o = 
                        (0x1fU & 0U);
                    vlSelf->__PVT__id_reg1_addr_o = 
                        (0x1fU & 0U);
                } else if ((4U & vlSelf->__PVT__if_id_inst_o)) {
                    if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                        if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                            vlSelf->__PVT__id_inst_o 
                                = vlSelf->__PVT__if_id_inst_o;
                            vlSelf->__PVT__id_reg_waddr_o 
                                = (0x1fU & (vlSelf->__PVT__if_id_inst_o 
                                            >> 7U));
                        } else {
                            vlSelf->__PVT__id_inst_o = 0x13U;
                            vlSelf->__PVT__id_reg_waddr_o 
                                = (0x1fU & 0U);
                        }
                    } else {
                        vlSelf->__PVT__id_inst_o = 0x13U;
                        vlSelf->__PVT__id_reg_waddr_o 
                            = (0x1fU & 0U);
                    }
                    vlSelf->__PVT__id_reg1_addr_o = 
                        (0x1fU & 0U);
                } else if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                    if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                        vlSelf->__PVT__id_inst_o = vlSelf->__PVT__if_id_inst_o;
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
                        vlSelf->__PVT__id_inst_o = 0x13U;
                        vlSelf->__PVT__id_reg_waddr_o 
                            = (0x1fU & 0U);
                        vlSelf->__PVT__id_reg1_addr_o 
                            = (0x1fU & 0U);
                    }
                } else {
                    vlSelf->__PVT__id_inst_o = 0x13U;
                    vlSelf->__PVT__id_reg_waddr_o = 
                        (0x1fU & 0U);
                    vlSelf->__PVT__id_reg1_addr_o = 
                        (0x1fU & 0U);
                }
            } else if ((8U & vlSelf->__PVT__if_id_inst_o)) {
                vlSelf->__PVT__id_inst_o = 0x13U;
                vlSelf->__PVT__id_reg_waddr_o = (0x1fU 
                                                 & 0U);
                vlSelf->__PVT__id_reg1_addr_o = (0x1fU 
                                                 & 0U);
            } else if ((4U & vlSelf->__PVT__if_id_inst_o)) {
                vlSelf->__PVT__id_inst_o = 0x13U;
                vlSelf->__PVT__id_reg_waddr_o = (0x1fU 
                                                 & 0U);
                vlSelf->__PVT__id_reg1_addr_o = (0x1fU 
                                                 & 0U);
            } else if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                    vlSelf->__PVT__id_inst_o = vlSelf->__PVT__if_id_inst_o;
                    vlSelf->__PVT__id_reg_waddr_o = 
                        (0x1fU & (vlSelf->__PVT__if_id_inst_o 
                                  >> 7U));
                    vlSelf->__PVT__id_reg1_addr_o = 
                        (0x1fU & (vlSelf->__PVT__if_id_inst_o 
                                  >> 0xfU));
                } else {
                    vlSelf->__PVT__id_inst_o = 0x13U;
                    vlSelf->__PVT__id_reg_waddr_o = 
                        (0x1fU & 0U);
                    vlSelf->__PVT__id_reg1_addr_o = 
                        (0x1fU & 0U);
                }
            } else {
                vlSelf->__PVT__id_inst_o = 0x13U;
                vlSelf->__PVT__id_reg_waddr_o = (0x1fU 
                                                 & 0U);
                vlSelf->__PVT__id_reg1_addr_o = (0x1fU 
                                                 & 0U);
            }
            vlSelf->__PVT__id_reg2_addr_o = (0x1fU 
                                             & 0U);
        }
        vlSelf->__PVT__exe_jump_enable_o = 0U;
        if ((0x40U & vlSelf->__PVT__id_exe_inst_o)) {
            if ((0x20U & vlSelf->__PVT__id_exe_inst_o)) {
                if ((0x10U & vlSelf->__PVT__id_exe_inst_o)) {
                    vlSelf->__PVT__exe_mem_we_o = 0U;
                    vlSelf->__PVT__exe_mem_data_o = 0U;
                    vlSelf->__PVT__exe_stallreq_o = 0U;
                } else if ((8U & vlSelf->__PVT__id_exe_inst_o)) {
                    if ((4U & vlSelf->__PVT__id_exe_inst_o)) {
                        if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                            if ((1U & (~ vlSelf->__PVT__id_exe_inst_o))) {
                                vlSelf->__PVT__exe_mem_we_o = 0U;
                                vlSelf->__PVT__exe_mem_data_o = 0U;
                                vlSelf->__PVT__exe_stallreq_o = 0U;
                            }
                        } else {
                            vlSelf->__PVT__exe_mem_we_o = 0U;
                            vlSelf->__PVT__exe_mem_data_o = 0U;
                            vlSelf->__PVT__exe_stallreq_o = 0U;
                        }
                    } else {
                        vlSelf->__PVT__exe_mem_we_o = 0U;
                        vlSelf->__PVT__exe_mem_data_o = 0U;
                        vlSelf->__PVT__exe_stallreq_o = 0U;
                    }
                } else if ((4U & vlSelf->__PVT__id_exe_inst_o)) {
                    if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                        if ((1U & (~ vlSelf->__PVT__id_exe_inst_o))) {
                            vlSelf->__PVT__exe_mem_we_o = 0U;
                            vlSelf->__PVT__exe_mem_data_o = 0U;
                            vlSelf->__PVT__exe_stallreq_o = 0U;
                        }
                    } else {
                        vlSelf->__PVT__exe_mem_we_o = 0U;
                        vlSelf->__PVT__exe_mem_data_o = 0U;
                        vlSelf->__PVT__exe_stallreq_o = 0U;
                    }
                } else if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                    if ((1U & (~ vlSelf->__PVT__id_exe_inst_o))) {
                        vlSelf->__PVT__exe_mem_we_o = 0U;
                        vlSelf->__PVT__exe_mem_data_o = 0U;
                        vlSelf->__PVT__exe_stallreq_o = 0U;
                    }
                } else {
                    vlSelf->__PVT__exe_mem_we_o = 0U;
                    vlSelf->__PVT__exe_mem_data_o = 0U;
                    vlSelf->__PVT__exe_stallreq_o = 0U;
                }
            } else {
                vlSelf->__PVT__exe_mem_we_o = 0U;
                vlSelf->__PVT__exe_mem_data_o = 0U;
                vlSelf->__PVT__exe_stallreq_o = 0U;
            }
        } else if ((0x20U & vlSelf->__PVT__id_exe_inst_o)) {
            if ((0x10U & vlSelf->__PVT__id_exe_inst_o)) {
                if ((8U & vlSelf->__PVT__id_exe_inst_o)) {
                    vlSelf->__PVT__exe_mem_we_o = 0U;
                    vlSelf->__PVT__exe_mem_data_o = 0U;
                    vlSelf->__PVT__exe_stallreq_o = 0U;
                } else if ((4U & vlSelf->__PVT__id_exe_inst_o)) {
                    if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                        if ((1U & (~ vlSelf->__PVT__id_exe_inst_o))) {
                            vlSelf->__PVT__exe_mem_we_o = 0U;
                            vlSelf->__PVT__exe_mem_data_o = 0U;
                            vlSelf->__PVT__exe_stallreq_o = 0U;
                        }
                    } else {
                        vlSelf->__PVT__exe_mem_we_o = 0U;
                        vlSelf->__PVT__exe_mem_data_o = 0U;
                        vlSelf->__PVT__exe_stallreq_o = 0U;
                    }
                } else if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                    if ((1U & (~ vlSelf->__PVT__id_exe_inst_o))) {
                        vlSelf->__PVT__exe_mem_we_o = 0U;
                        vlSelf->__PVT__exe_mem_data_o = 0U;
                        vlSelf->__PVT__exe_stallreq_o = 0U;
                    }
                } else {
                    vlSelf->__PVT__exe_mem_we_o = 0U;
                    vlSelf->__PVT__exe_mem_data_o = 0U;
                    vlSelf->__PVT__exe_stallreq_o = 0U;
                }
            } else {
                vlSelf->__PVT__exe_mem_we_o = (IData)(
                                                      (3U 
                                                       == 
                                                       (0xfU 
                                                        & vlSelf->__PVT__id_exe_inst_o)));
                if ((8U & vlSelf->__PVT__id_exe_inst_o)) {
                    vlSelf->__PVT__exe_mem_data_o = 0U;
                    vlSelf->__PVT__exe_stallreq_o = 0U;
                } else if ((4U & vlSelf->__PVT__id_exe_inst_o)) {
                    vlSelf->__PVT__exe_mem_data_o = 0U;
                    vlSelf->__PVT__exe_stallreq_o = 0U;
                } else if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                    vlSelf->__PVT__exe_mem_data_o = 
                        ((1U & vlSelf->__PVT__id_exe_inst_o)
                          ? vlSelf->__PVT__id_exe_op2_o
                          : 0U);
                    if ((1U & (~ vlSelf->__PVT__id_exe_inst_o))) {
                        vlSelf->__PVT__exe_stallreq_o = 0U;
                    }
                } else {
                    vlSelf->__PVT__exe_mem_data_o = 0U;
                    vlSelf->__PVT__exe_stallreq_o = 0U;
                }
            }
        } else if ((0x10U & vlSelf->__PVT__id_exe_inst_o)) {
            if ((8U & vlSelf->__PVT__id_exe_inst_o)) {
                vlSelf->__PVT__exe_mem_we_o = 0U;
                vlSelf->__PVT__exe_mem_data_o = 0U;
                vlSelf->__PVT__exe_stallreq_o = 0U;
            } else if ((4U & vlSelf->__PVT__id_exe_inst_o)) {
                if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                    if ((1U & (~ vlSelf->__PVT__id_exe_inst_o))) {
                        vlSelf->__PVT__exe_mem_we_o = 0U;
                        vlSelf->__PVT__exe_mem_data_o = 0U;
                        vlSelf->__PVT__exe_stallreq_o = 0U;
                    }
                } else {
                    vlSelf->__PVT__exe_mem_we_o = 0U;
                    vlSelf->__PVT__exe_mem_data_o = 0U;
                    vlSelf->__PVT__exe_stallreq_o = 0U;
                }
            } else if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                if ((1U & (~ vlSelf->__PVT__id_exe_inst_o))) {
                    vlSelf->__PVT__exe_mem_we_o = 0U;
                    vlSelf->__PVT__exe_mem_data_o = 0U;
                    vlSelf->__PVT__exe_stallreq_o = 0U;
                }
            } else {
                vlSelf->__PVT__exe_mem_we_o = 0U;
                vlSelf->__PVT__exe_mem_data_o = 0U;
                vlSelf->__PVT__exe_stallreq_o = 0U;
            }
        } else {
            vlSelf->__PVT__exe_mem_we_o = 0U;
            vlSelf->__PVT__exe_mem_data_o = 0U;
            if ((8U & vlSelf->__PVT__id_exe_inst_o)) {
                vlSelf->__PVT__exe_stallreq_o = 0U;
            } else if ((4U & vlSelf->__PVT__id_exe_inst_o)) {
                vlSelf->__PVT__exe_stallreq_o = 0U;
            } else if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                if ((1U & (~ vlSelf->__PVT__id_exe_inst_o))) {
                    vlSelf->__PVT__exe_stallreq_o = 0U;
                }
            } else {
                vlSelf->__PVT__exe_stallreq_o = 0U;
            }
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
        vlSelf->__PVT__exe_reg_we_o = vlSelf->__PVT__id_exe_reg_we_o;
        vlSelf->__PVT__exe_mem_op_o = 0U;
        if ((0x40U & vlSelf->__PVT__id_exe_inst_o)) {
            if ((0x20U & vlSelf->__PVT__id_exe_inst_o)) {
                if ((0x10U & vlSelf->__PVT__id_exe_inst_o)) {
                    vlSelf->__PVT__exe_jump_addr_o = 0U;
                    vlSelf->__PVT__exe_reg_waddr_o = 0U;
                    vlSelf->__PVT__exe_reg_we_o = 0U;
                    vlSelf->__PVT__exe_reg_wdata_o = 0U;
                    vlSelf->__PVT__exe_mem_addr_o = 0U;
                    vlSelf->__PVT__exe_mem_op_o = 0U;
                } else if ((8U & vlSelf->__PVT__id_exe_inst_o)) {
                    if ((4U & vlSelf->__PVT__id_exe_inst_o)) {
                        if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
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
                                vlSelf->__PVT__exe_reg_wdata_o 
                                    = ((IData)(4U) 
                                       + vlSelf->__PVT__id_exe_inst_addr_o);
                            } else {
                                vlSelf->__PVT__exe_jump_addr_o = 0U;
                                vlSelf->__PVT__exe_reg_waddr_o = 0U;
                                vlSelf->__PVT__exe_reg_wdata_o = 0U;
                            }
                            if ((1U & (~ vlSelf->__PVT__id_exe_inst_o))) {
                                vlSelf->__PVT__exe_reg_we_o = 0U;
                                vlSelf->__PVT__exe_mem_addr_o = 0U;
                                vlSelf->__PVT__exe_mem_op_o = 0U;
                            }
                        } else {
                            vlSelf->__PVT__exe_jump_addr_o = 0U;
                            vlSelf->__PVT__exe_reg_waddr_o = 0U;
                            vlSelf->__PVT__exe_reg_we_o = 0U;
                            vlSelf->__PVT__exe_reg_wdata_o = 0U;
                            vlSelf->__PVT__exe_mem_addr_o = 0U;
                            vlSelf->__PVT__exe_mem_op_o = 0U;
                        }
                    } else {
                        vlSelf->__PVT__exe_jump_addr_o = 0U;
                        vlSelf->__PVT__exe_reg_waddr_o = 0U;
                        vlSelf->__PVT__exe_reg_we_o = 0U;
                        vlSelf->__PVT__exe_reg_wdata_o = 0U;
                        vlSelf->__PVT__exe_mem_addr_o = 0U;
                        vlSelf->__PVT__exe_mem_op_o = 0U;
                    }
                } else if ((4U & vlSelf->__PVT__id_exe_inst_o)) {
                    if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                        if ((1U & vlSelf->__PVT__id_exe_inst_o)) {
                            vlSelf->__PVT__exe_jump_addr_o 
                                = (vlSelf->__PVT__id_exe_op1_o 
                                   + (((- (IData)((vlSelf->__PVT__id_exe_inst_o 
                                                   >> 0x1fU))) 
                                       << 0xcU) | (vlSelf->__PVT__id_exe_inst_o 
                                                   >> 0x14U)));
                            vlSelf->__PVT__exe_reg_waddr_o 
                                = vlSelf->__PVT__id_exe_reg_waddr_o;
                            vlSelf->__PVT__exe_reg_wdata_o 
                                = ((IData)(4U) + vlSelf->__PVT__id_exe_inst_addr_o);
                        } else {
                            vlSelf->__PVT__exe_jump_addr_o = 0U;
                            vlSelf->__PVT__exe_reg_waddr_o = 0U;
                            vlSelf->__PVT__exe_reg_wdata_o = 0U;
                        }
                        if ((1U & (~ vlSelf->__PVT__id_exe_inst_o))) {
                            vlSelf->__PVT__exe_reg_we_o = 0U;
                            vlSelf->__PVT__exe_mem_addr_o = 0U;
                            vlSelf->__PVT__exe_mem_op_o = 0U;
                        }
                    } else {
                        vlSelf->__PVT__exe_jump_addr_o = 0U;
                        vlSelf->__PVT__exe_reg_waddr_o = 0U;
                        vlSelf->__PVT__exe_reg_we_o = 0U;
                        vlSelf->__PVT__exe_reg_wdata_o = 0U;
                        vlSelf->__PVT__exe_mem_addr_o = 0U;
                        vlSelf->__PVT__exe_mem_op_o = 0U;
                    }
                } else if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
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
                    if ((1U & (~ vlSelf->__PVT__id_exe_inst_o))) {
                        vlSelf->__PVT__exe_reg_waddr_o = 0U;
                        vlSelf->__PVT__exe_reg_we_o = 0U;
                        vlSelf->__PVT__exe_reg_wdata_o = 0U;
                        vlSelf->__PVT__exe_mem_addr_o = 0U;
                        vlSelf->__PVT__exe_mem_op_o = 0U;
                    }
                } else {
                    vlSelf->__PVT__exe_jump_addr_o = 0U;
                    vlSelf->__PVT__exe_reg_waddr_o = 0U;
                    vlSelf->__PVT__exe_reg_we_o = 0U;
                    vlSelf->__PVT__exe_reg_wdata_o = 0U;
                    vlSelf->__PVT__exe_mem_addr_o = 0U;
                    vlSelf->__PVT__exe_mem_op_o = 0U;
                }
            } else {
                vlSelf->__PVT__exe_jump_addr_o = 0U;
                vlSelf->__PVT__exe_reg_waddr_o = 0U;
                vlSelf->__PVT__exe_reg_we_o = 0U;
                vlSelf->__PVT__exe_reg_wdata_o = 0U;
                vlSelf->__PVT__exe_mem_addr_o = 0U;
                vlSelf->__PVT__exe_mem_op_o = 0U;
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
                    vlSelf->__PVT__exe_jump_addr_o = 0U;
                    vlSelf->__PVT__exe_jump_enable_o = 0U;
                    vlSelf->__PVT__exe_reg_waddr_o = 0U;
                    vlSelf->__PVT__exe_reg_we_o = 0U;
                    vlSelf->__PVT__exe_reg_wdata_o = 0U;
                    vlSelf->__PVT__exe_mem_addr_o = 0U;
                    vlSelf->__PVT__exe_mem_op_o = 0U;
                } else if ((4U & vlSelf->__PVT__id_exe_inst_o)) {
                    if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                        if ((1U & (~ vlSelf->__PVT__id_exe_inst_o))) {
                            vlSelf->__PVT__exe_jump_addr_o = 0U;
                            vlSelf->__PVT__exe_jump_enable_o = 0U;
                            vlSelf->__PVT__exe_reg_we_o = 0U;
                            vlSelf->__PVT__exe_mem_addr_o = 0U;
                            vlSelf->__PVT__exe_mem_op_o = 0U;
                        }
                        if ((1U & vlSelf->__PVT__id_exe_inst_o)) {
                            vlSelf->__PVT__exe_reg_waddr_o 
                                = vlSelf->__PVT__id_exe_reg_waddr_o;
                            vlSelf->__PVT__exe_reg_wdata_o 
                                = (vlSelf->__PVT__id_exe_op1_o 
                                   + vlSelf->__PVT__id_exe_op2_o);
                        } else {
                            vlSelf->__PVT__exe_reg_waddr_o = 0U;
                            vlSelf->__PVT__exe_reg_wdata_o = 0U;
                        }
                    } else {
                        vlSelf->__PVT__exe_jump_addr_o = 0U;
                        vlSelf->__PVT__exe_jump_enable_o = 0U;
                        vlSelf->__PVT__exe_reg_waddr_o = 0U;
                        vlSelf->__PVT__exe_reg_we_o = 0U;
                        vlSelf->__PVT__exe_reg_wdata_o = 0U;
                        vlSelf->__PVT__exe_mem_addr_o = 0U;
                        vlSelf->__PVT__exe_mem_op_o = 0U;
                    }
                } else if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                    if ((1U & (~ vlSelf->__PVT__id_exe_inst_o))) {
                        vlSelf->__PVT__exe_jump_addr_o = 0U;
                        vlSelf->__PVT__exe_jump_enable_o = 0U;
                        vlSelf->__PVT__exe_mem_addr_o = 0U;
                        vlSelf->__PVT__exe_mem_op_o = 0U;
                    }
                    if ((1U & vlSelf->__PVT__id_exe_inst_o)) {
                        if (vlSelf->__PVT__exe0__DOT__isType_r) {
                            vlSelf->__PVT__exe_reg_waddr_o 
                                = vlSelf->__PVT__id_exe_reg_waddr_o;
                            vlSelf->__PVT__exe_reg_we_o = 1U;
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
                                vlSelf->__PVT__exe_reg_wdata_o 
                                    = ((0x2000U & vlSelf->__PVT__id_exe_inst_o)
                                        ? ((0x1000U 
                                            & vlSelf->__PVT__id_exe_inst_o)
                                            ? (vlSelf->__PVT__id_exe_op1_o 
                                               & vlSelf->__PVT__id_exe_op2_o)
                                            : (vlSelf->__PVT__id_exe_op1_o 
                                               | vlSelf->__PVT__id_exe_op2_o))
                                        : ((0x1000U 
                                            & vlSelf->__PVT__id_exe_inst_o)
                                            ? ((0U 
                                                == 
                                                (vlSelf->__PVT__id_exe_inst_o 
                                                 >> 0x19U))
                                                ? (vlSelf->__PVT__id_exe_op1_o 
                                                   >> 
                                                   (0x1fU 
                                                    & vlSelf->__PVT__id_exe_op2_o))
                                                : (
                                                   (0x20U 
                                                    == 
                                                    (vlSelf->__PVT__id_exe_inst_o 
                                                     >> 0x19U))
                                                    ? 
                                                   VL_SHIFTRS_III(32,32,5, vlSelf->__PVT__id_exe_op1_o, 
                                                                  (0x1fU 
                                                                   & vlSelf->__PVT__id_exe_op2_o))
                                                    : 0U))
                                            : (vlSelf->__PVT__id_exe_op1_o 
                                               ^ vlSelf->__PVT__id_exe_op2_o)));
                            } else {
                                if ((1U & (~ (vlSelf->__PVT__id_exe_inst_o 
                                              >> 0xdU)))) {
                                    if ((1U & (~ (vlSelf->__PVT__id_exe_inst_o 
                                                  >> 0xcU)))) {
                                        if ((0U != 
                                             (vlSelf->__PVT__id_exe_inst_o 
                                              >> 0x19U))) {
                                            if ((0x20U 
                                                 != 
                                                 (vlSelf->__PVT__id_exe_inst_o 
                                                  >> 0x19U))) {
                                                vlSelf->__PVT__exe_reg_we_o = 0U;
                                            }
                                        }
                                    }
                                }
                                vlSelf->__PVT__exe_reg_wdata_o 
                                    = ((0x2000U & vlSelf->__PVT__id_exe_inst_o)
                                        ? ((0x1000U 
                                            & vlSelf->__PVT__id_exe_inst_o)
                                            ? ((vlSelf->__PVT__id_exe_op1_o 
                                                < vlSelf->__PVT__id_exe_op2_o)
                                                ? 1U
                                                : 0U)
                                            : (VL_LTS_III(32, vlSelf->__PVT__id_exe_op1_o, vlSelf->__PVT__id_exe_op2_o)
                                                ? 1U
                                                : 0U))
                                        : ((0x1000U 
                                            & vlSelf->__PVT__id_exe_inst_o)
                                            ? (vlSelf->__PVT__id_exe_op1_o 
                                               << (0x1fU 
                                                   & vlSelf->__PVT__id_exe_op2_o))
                                            : ((0U 
                                                == 
                                                (vlSelf->__PVT__id_exe_inst_o 
                                                 >> 0x19U))
                                                ? (vlSelf->__PVT__id_exe_op1_o 
                                                   + vlSelf->__PVT__id_exe_op2_o)
                                                : (
                                                   (0x20U 
                                                    == 
                                                    (vlSelf->__PVT__id_exe_inst_o 
                                                     >> 0x19U))
                                                    ? 
                                                   (vlSelf->__PVT__id_exe_op1_o 
                                                    - vlSelf->__PVT__id_exe_op2_o)
                                                    : 0U))));
                            }
                        } else {
                            vlSelf->__PVT__exe_reg_waddr_o = 0U;
                            vlSelf->__PVT__exe_reg_we_o = 0U;
                            vlSelf->__PVT__exe_reg_wdata_o = 0U;
                        }
                    } else {
                        vlSelf->__PVT__exe_reg_waddr_o = 0U;
                        vlSelf->__PVT__exe_reg_we_o = 0U;
                        vlSelf->__PVT__exe_reg_wdata_o = 0U;
                    }
                } else {
                    vlSelf->__PVT__exe_jump_addr_o = 0U;
                    vlSelf->__PVT__exe_jump_enable_o = 0U;
                    vlSelf->__PVT__exe_reg_waddr_o = 0U;
                    vlSelf->__PVT__exe_reg_we_o = 0U;
                    vlSelf->__PVT__exe_reg_wdata_o = 0U;
                    vlSelf->__PVT__exe_mem_addr_o = 0U;
                    vlSelf->__PVT__exe_mem_op_o = 0U;
                }
            } else {
                if ((8U & vlSelf->__PVT__id_exe_inst_o)) {
                    vlSelf->__PVT__exe_jump_addr_o = 0U;
                    vlSelf->__PVT__exe_jump_enable_o = 0U;
                    vlSelf->__PVT__exe_mem_addr_o = 0U;
                    vlSelf->__PVT__exe_mem_op_o = 0U;
                } else if ((4U & vlSelf->__PVT__id_exe_inst_o)) {
                    vlSelf->__PVT__exe_jump_addr_o = 0U;
                    vlSelf->__PVT__exe_jump_enable_o = 0U;
                    vlSelf->__PVT__exe_mem_addr_o = 0U;
                    vlSelf->__PVT__exe_mem_op_o = 0U;
                } else if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                    if ((1U & (~ vlSelf->__PVT__id_exe_inst_o))) {
                        vlSelf->__PVT__exe_jump_addr_o = 0U;
                        vlSelf->__PVT__exe_jump_enable_o = 0U;
                    }
                    if ((1U & vlSelf->__PVT__id_exe_inst_o)) {
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
                    } else {
                        vlSelf->__PVT__exe_mem_addr_o = 0U;
                        vlSelf->__PVT__exe_mem_op_o = 0U;
                    }
                } else {
                    vlSelf->__PVT__exe_jump_addr_o = 0U;
                    vlSelf->__PVT__exe_jump_enable_o = 0U;
                    vlSelf->__PVT__exe_mem_addr_o = 0U;
                    vlSelf->__PVT__exe_mem_op_o = 0U;
                }
                vlSelf->__PVT__exe_reg_waddr_o = 0U;
                vlSelf->__PVT__exe_reg_we_o = 0U;
                vlSelf->__PVT__exe_reg_wdata_o = 0U;
            }
        } else if ((0x10U & vlSelf->__PVT__id_exe_inst_o)) {
            if ((8U & vlSelf->__PVT__id_exe_inst_o)) {
                vlSelf->__PVT__exe_jump_addr_o = 0U;
                vlSelf->__PVT__exe_jump_enable_o = 0U;
                vlSelf->__PVT__exe_reg_waddr_o = 0U;
                vlSelf->__PVT__exe_reg_we_o = 0U;
                vlSelf->__PVT__exe_reg_wdata_o = 0U;
                vlSelf->__PVT__exe_mem_addr_o = 0U;
                vlSelf->__PVT__exe_mem_op_o = 0U;
            } else if ((4U & vlSelf->__PVT__id_exe_inst_o)) {
                if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                    if ((1U & (~ vlSelf->__PVT__id_exe_inst_o))) {
                        vlSelf->__PVT__exe_jump_addr_o = 0U;
                        vlSelf->__PVT__exe_jump_enable_o = 0U;
                        vlSelf->__PVT__exe_reg_we_o = 0U;
                        vlSelf->__PVT__exe_mem_addr_o = 0U;
                        vlSelf->__PVT__exe_mem_op_o = 0U;
                    }
                    if ((1U & vlSelf->__PVT__id_exe_inst_o)) {
                        vlSelf->__PVT__exe_reg_waddr_o 
                            = vlSelf->__PVT__id_exe_reg_waddr_o;
                        vlSelf->__PVT__exe_reg_wdata_o 
                            = (vlSelf->__PVT__id_exe_op1_o 
                               + vlSelf->__PVT__id_exe_op2_o);
                    } else {
                        vlSelf->__PVT__exe_reg_waddr_o = 0U;
                        vlSelf->__PVT__exe_reg_wdata_o = 0U;
                    }
                } else {
                    vlSelf->__PVT__exe_jump_addr_o = 0U;
                    vlSelf->__PVT__exe_jump_enable_o = 0U;
                    vlSelf->__PVT__exe_reg_waddr_o = 0U;
                    vlSelf->__PVT__exe_reg_we_o = 0U;
                    vlSelf->__PVT__exe_reg_wdata_o = 0U;
                    vlSelf->__PVT__exe_mem_addr_o = 0U;
                    vlSelf->__PVT__exe_mem_op_o = 0U;
                }
            } else if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                if ((1U & (~ vlSelf->__PVT__id_exe_inst_o))) {
                    vlSelf->__PVT__exe_jump_addr_o = 0U;
                    vlSelf->__PVT__exe_jump_enable_o = 0U;
                    vlSelf->__PVT__exe_mem_addr_o = 0U;
                    vlSelf->__PVT__exe_mem_op_o = 0U;
                }
                if ((1U & vlSelf->__PVT__id_exe_inst_o)) {
                    if ((0x4000U & vlSelf->__PVT__id_exe_inst_o)) {
                        if ((0x2000U & vlSelf->__PVT__id_exe_inst_o)) {
                            vlSelf->__PVT__exe_reg_waddr_o 
                                = vlSelf->__PVT__id_exe_reg_waddr_o;
                            vlSelf->__PVT__exe_reg_wdata_o 
                                = ((0x1000U & vlSelf->__PVT__id_exe_inst_o)
                                    ? (vlSelf->__PVT__id_exe_op1_o 
                                       & vlSelf->__PVT__id_exe_op2_o)
                                    : (vlSelf->__PVT__id_exe_op1_o 
                                       | vlSelf->__PVT__id_exe_op2_o));
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
                            vlSelf->__PVT__exe_reg_wdata_o 
                                = ((0U == (vlSelf->__PVT__id_exe_inst_o 
                                           >> 0x19U))
                                    ? ((0x1fU >= vlSelf->__PVT__id_exe_op2_o)
                                        ? (vlSelf->__PVT__id_exe_op1_o 
                                           >> vlSelf->__PVT__id_exe_op2_o)
                                        : 0U) : ((0x20U 
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
                                                  : 0U));
                        } else {
                            vlSelf->__PVT__exe_reg_waddr_o 
                                = vlSelf->__PVT__id_exe_reg_waddr_o;
                            vlSelf->__PVT__exe_reg_wdata_o 
                                = (vlSelf->__PVT__id_exe_op1_o 
                                   ^ vlSelf->__PVT__id_exe_op2_o);
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
                        vlSelf->__PVT__exe_reg_wdata_o 
                            = ((0x2000U & vlSelf->__PVT__id_exe_inst_o)
                                ? ((0x1000U & vlSelf->__PVT__id_exe_inst_o)
                                    ? ((vlSelf->__PVT__id_exe_op1_o 
                                        < vlSelf->__PVT__id_exe_op2_o)
                                        ? 1U : 0U) : 
                                   (VL_LTS_III(32, vlSelf->__PVT__id_exe_op1_o, vlSelf->__PVT__id_exe_op2_o)
                                     ? 1U : 0U)) : 
                               ((0x1000U & vlSelf->__PVT__id_exe_inst_o)
                                 ? ((0x1fU >= vlSelf->__PVT__id_exe_op2_o)
                                     ? (vlSelf->__PVT__id_exe_op1_o 
                                        << vlSelf->__PVT__id_exe_op2_o)
                                     : 0U) : (vlSelf->__PVT__id_exe_op1_o 
                                              + vlSelf->__PVT__id_exe_op2_o)));
                    }
                } else {
                    vlSelf->__PVT__exe_reg_waddr_o = 0U;
                    vlSelf->__PVT__exe_reg_we_o = 0U;
                    vlSelf->__PVT__exe_reg_wdata_o = 0U;
                }
            } else {
                vlSelf->__PVT__exe_jump_addr_o = 0U;
                vlSelf->__PVT__exe_jump_enable_o = 0U;
                vlSelf->__PVT__exe_reg_waddr_o = 0U;
                vlSelf->__PVT__exe_reg_we_o = 0U;
                vlSelf->__PVT__exe_reg_wdata_o = 0U;
                vlSelf->__PVT__exe_mem_addr_o = 0U;
                vlSelf->__PVT__exe_mem_op_o = 0U;
            }
        } else {
            if ((8U & vlSelf->__PVT__id_exe_inst_o)) {
                vlSelf->__PVT__exe_jump_addr_o = 0U;
                vlSelf->__PVT__exe_jump_enable_o = 0U;
                vlSelf->__PVT__exe_reg_waddr_o = 0U;
                vlSelf->__PVT__exe_mem_addr_o = 0U;
                vlSelf->__PVT__exe_mem_op_o = 0U;
            } else if ((4U & vlSelf->__PVT__id_exe_inst_o)) {
                vlSelf->__PVT__exe_jump_addr_o = 0U;
                vlSelf->__PVT__exe_jump_enable_o = 0U;
                vlSelf->__PVT__exe_reg_waddr_o = 0U;
                vlSelf->__PVT__exe_mem_addr_o = 0U;
                vlSelf->__PVT__exe_mem_op_o = 0U;
            } else if ((2U & vlSelf->__PVT__id_exe_inst_o)) {
                if ((1U & (~ vlSelf->__PVT__id_exe_inst_o))) {
                    vlSelf->__PVT__exe_jump_addr_o = 0U;
                    vlSelf->__PVT__exe_jump_enable_o = 0U;
                }
                if ((1U & vlSelf->__PVT__id_exe_inst_o)) {
                    vlSelf->__PVT__exe_reg_waddr_o 
                        = vlSelf->__PVT__id_exe_reg_waddr_o;
                    vlSelf->__PVT__exe_mem_addr_o = 
                        (vlSelf->__PVT__id_exe_op1_o 
                         + (((- (IData)((vlSelf->__PVT__id_exe_inst_o 
                                         >> 0x1fU))) 
                             << 0xcU) | (vlSelf->__PVT__id_exe_inst_o 
                                         >> 0x14U)));
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
                } else {
                    vlSelf->__PVT__exe_reg_waddr_o = 0U;
                    vlSelf->__PVT__exe_mem_addr_o = 0U;
                    vlSelf->__PVT__exe_mem_op_o = 0U;
                }
            } else {
                vlSelf->__PVT__exe_jump_addr_o = 0U;
                vlSelf->__PVT__exe_jump_enable_o = 0U;
                vlSelf->__PVT__exe_reg_waddr_o = 0U;
                vlSelf->__PVT__exe_mem_addr_o = 0U;
                vlSelf->__PVT__exe_mem_op_o = 0U;
            }
            vlSelf->__PVT__exe_reg_we_o = (IData)((3U 
                                                   == 
                                                   (0xfU 
                                                    & vlSelf->__PVT__id_exe_inst_o)));
            vlSelf->__PVT__exe_reg_wdata_o = 0U;
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
                                                                  & (IData)(vlSelf->__PVT__id0__DOT__inst_type_r__DOT__isType_r))))))
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
                                                               & (IData)(vlSelf->__PVT__id0__DOT__inst_type_r__DOT__isType_r)))
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
                                                             & (IData)(vlSelf->__PVT__id0__DOT__inst_type_r__DOT__isType_r)))
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

VL_INLINE_OPT void Vtest_top_test_top___nba_sequent__TOP__test_top__1(Vtest_top_test_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtest_top_test_top___nba_sequent__TOP__test_top__1\n"); );
    // Body
    if (vlSymsp->TOP.rst_i) {
        vlSelf->__PVT__mem_ram_w_request_o = 0U;
        vlSelf->__PVT__mem_ram_addr_o = 0U;
        vlSelf->__PVT__mem_wb_reg_waddr_o = 0U;
        vlSelf->__PVT__mem_wb_reg_wdata_o = 0U;
        vlSelf->__PVT__mem_reg_waddr_o = 0U;
    } else {
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
        vlSelf->__PVT__mem_wb_reg_waddr_o = vlSelf->__PVT__mem_reg_waddr_o;
        vlSelf->__PVT__mem_wb_reg_wdata_o = vlSelf->__PVT__mem_reg_wdata_o;
        vlSelf->__PVT__mem_reg_waddr_o = vlSelf->__PVT__exe_mem_reg_waddr_o;
    }
    vlSelf->__PVT__mem_wb_reg_we_o = ((IData)(vlSymsp->TOP.rst_i) 
                                      | (IData)(vlSelf->__PVT__mem_reg_we_o));
    vlSelf->__PVT__mem_reg_we_o = ((IData)(vlSymsp->TOP.rst_i) 
                                   | (IData)(vlSelf->__PVT__exe_mem_reg_we_o));
}

VL_INLINE_OPT void Vtest_top_test_top___nba_sequent__TOP__test_top__2(Vtest_top_test_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtest_top_test_top___nba_sequent__TOP__test_top__2\n"); );
    // Body
    if (vlSymsp->TOP.rst_i) {
        vlSelf->__PVT__mem_reg_wdata_o = 0U;
        vlSelf->__PVT__mem_ram_data_o = 0U;
        vlSelf->__PVT__id0__DOT__op2_o_final = 0U;
        vlSelf->__PVT__id0__DOT__op1_o_final = 0U;
    } else {
        vlSelf->__PVT__mem_reg_wdata_o = vlSelf->__PVT__exe_mem_reg_wdata_o;
        vlSelf->__PVT__mem_ram_data_o = 0U;
        if ((8U & (IData)(vlSelf->__PVT__exe_mem_mem_op_o))) {
            if ((4U & (IData)(vlSelf->__PVT__exe_mem_mem_op_o))) {
                if ((2U & (IData)(vlSelf->__PVT__exe_mem_mem_op_o))) {
                    vlSelf->__PVT__mem_reg_wdata_o 
                        = vlSelf->__PVT__exe_mem_reg_wdata_o;
                    vlSelf->__PVT__mem_ram_data_o = 0U;
                } else {
                    vlSelf->__PVT__mem_reg_wdata_o 
                        = ((1U & (IData)(vlSelf->__PVT__exe_mem_mem_op_o))
                            ? (((0U == (3U & vlSelf->__PVT__exe_mem_mem_addr_o)) 
                                | (1U == (3U & vlSelf->__PVT__exe_mem_mem_addr_o)))
                                ? (0xffffU & vlSymsp->TOP__test_top__data_ram0.__PVT__data_o)
                                : (vlSymsp->TOP__test_top__data_ram0.__PVT__data_o 
                                   >> 0x10U)) : ((0U 
                                                  == 
                                                  (3U 
                                                   & vlSelf->__PVT__exe_mem_mem_addr_o))
                                                  ? 
                                                 (0xffU 
                                                  & vlSymsp->TOP__test_top__data_ram0.__PVT__data_o)
                                                  : 
                                                 ((1U 
                                                   == 
                                                   (3U 
                                                    & vlSelf->__PVT__exe_mem_mem_addr_o))
                                                   ? 
                                                  (0xffU 
                                                   & (vlSymsp->TOP__test_top__data_ram0.__PVT__data_o 
                                                      >> 8U))
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (3U 
                                                     & vlSelf->__PVT__exe_mem_mem_addr_o))
                                                    ? 
                                                   (0xffU 
                                                    & (vlSymsp->TOP__test_top__data_ram0.__PVT__data_o 
                                                       >> 0x10U))
                                                    : 
                                                   (vlSymsp->TOP__test_top__data_ram0.__PVT__data_o 
                                                    >> 0x18U)))));
                }
            } else {
                vlSelf->__PVT__mem_reg_wdata_o = ((2U 
                                                   & (IData)(vlSelf->__PVT__exe_mem_mem_op_o))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__exe_mem_mem_op_o))
                                                    ? vlSymsp->TOP__test_top__data_ram0.__PVT__data_o
                                                    : 
                                                   (((0U 
                                                      == 
                                                      (3U 
                                                       & vlSelf->__PVT__exe_mem_mem_addr_o)) 
                                                     | (1U 
                                                        == 
                                                        (3U 
                                                         & vlSelf->__PVT__exe_mem_mem_addr_o)))
                                                     ? 
                                                    (((- (IData)(
                                                                 (1U 
                                                                  & (vlSymsp->TOP__test_top__data_ram0.__PVT__data_o 
                                                                     >> 0xfU)))) 
                                                      << 0x10U) 
                                                     | (0xffffU 
                                                        & vlSymsp->TOP__test_top__data_ram0.__PVT__data_o))
                                                     : 
                                                    (((- (IData)(
                                                                 (vlSymsp->TOP__test_top__data_ram0.__PVT__data_o 
                                                                  >> 0x1fU))) 
                                                      << 0x10U) 
                                                     | (vlSymsp->TOP__test_top__data_ram0.__PVT__data_o 
                                                        >> 0x10U))))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__exe_mem_mem_op_o))
                                                    ? 
                                                   ((0U 
                                                     == 
                                                     (3U 
                                                      & vlSelf->__PVT__exe_mem_mem_addr_o))
                                                     ? 
                                                    (((- (IData)(
                                                                 (1U 
                                                                  & (vlSymsp->TOP__test_top__data_ram0.__PVT__data_o 
                                                                     >> 7U)))) 
                                                      << 8U) 
                                                     | (0xffU 
                                                        & vlSymsp->TOP__test_top__data_ram0.__PVT__data_o))
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (3U 
                                                       & vlSelf->__PVT__exe_mem_mem_addr_o))
                                                      ? 
                                                     (((- (IData)(
                                                                  (1U 
                                                                   & (vlSymsp->TOP__test_top__data_ram0.__PVT__data_o 
                                                                      >> 0xfU)))) 
                                                       << 8U) 
                                                      | (0xffU 
                                                         & (vlSymsp->TOP__test_top__data_ram0.__PVT__data_o 
                                                            >> 8U)))
                                                      : 
                                                     ((2U 
                                                       == 
                                                       (3U 
                                                        & vlSelf->__PVT__exe_mem_mem_addr_o))
                                                       ? 
                                                      (((- (IData)(
                                                                   (1U 
                                                                    & (vlSymsp->TOP__test_top__data_ram0.__PVT__data_o 
                                                                       >> 0x17U)))) 
                                                        << 8U) 
                                                       | (0xffU 
                                                          & (vlSymsp->TOP__test_top__data_ram0.__PVT__data_o 
                                                             >> 0x10U)))
                                                       : 
                                                      (((- (IData)(
                                                                   (vlSymsp->TOP__test_top__data_ram0.__PVT__data_o 
                                                                    >> 0x1fU))) 
                                                        << 8U) 
                                                       | (vlSymsp->TOP__test_top__data_ram0.__PVT__data_o 
                                                          >> 0x18U)))))
                                                    : vlSelf->__PVT__exe_mem_reg_wdata_o));
                if ((1U & (~ ((IData)(vlSelf->__PVT__exe_mem_mem_op_o) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->__PVT__exe_mem_mem_op_o)))) {
                        vlSelf->__PVT__mem_ram_data_o = 0U;
                    }
                }
            }
        } else if ((4U & (IData)(vlSelf->__PVT__exe_mem_mem_op_o))) {
            vlSelf->__PVT__mem_reg_wdata_o = vlSelf->__PVT__exe_mem_reg_wdata_o;
            vlSelf->__PVT__mem_ram_data_o = 0U;
        } else {
            if ((1U & (~ ((IData)(vlSelf->__PVT__exe_mem_mem_op_o) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__exe_mem_mem_op_o)))) {
                    vlSelf->__PVT__mem_reg_wdata_o 
                        = vlSelf->__PVT__exe_mem_reg_wdata_o;
                }
            }
            vlSelf->__PVT__mem_ram_data_o = ((2U & (IData)(vlSelf->__PVT__exe_mem_mem_op_o))
                                              ? ((1U 
                                                  & (IData)(vlSelf->__PVT__exe_mem_mem_op_o))
                                                  ? vlSelf->__PVT__exe_mem_mem_data_o
                                                  : 
                                                 (((0U 
                                                    == 
                                                    (3U 
                                                     & vlSelf->__PVT__exe_mem_mem_addr_o)) 
                                                   | (1U 
                                                      == 
                                                      (3U 
                                                       & vlSelf->__PVT__exe_mem_mem_addr_o)))
                                                   ? 
                                                  ((0xffff0000U 
                                                    & vlSymsp->TOP__test_top__data_ram0.__PVT__data_o) 
                                                   | (0xffffU 
                                                      & vlSelf->__PVT__exe_mem_mem_data_o))
                                                   : 
                                                  ((vlSelf->__PVT__exe_mem_mem_data_o 
                                                    << 0x10U) 
                                                   | (0xffffU 
                                                      & vlSymsp->TOP__test_top__data_ram0.__PVT__data_o))))
                                              : ((1U 
                                                  & (IData)(vlSelf->__PVT__exe_mem_mem_op_o))
                                                  ? 
                                                 ((0U 
                                                   == 
                                                   (3U 
                                                    & vlSelf->__PVT__exe_mem_mem_addr_o))
                                                   ? 
                                                  ((0xffffff00U 
                                                    & vlSymsp->TOP__test_top__data_ram0.__PVT__data_o) 
                                                   | (0xffU 
                                                      & vlSelf->__PVT__exe_mem_mem_data_o))
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (3U 
                                                     & vlSelf->__PVT__exe_mem_mem_addr_o))
                                                    ? 
                                                   ((0xffff0000U 
                                                     & vlSymsp->TOP__test_top__data_ram0.__PVT__data_o) 
                                                    | ((0xff00U 
                                                        & (vlSelf->__PVT__exe_mem_mem_data_o 
                                                           << 8U)) 
                                                       | (0xffU 
                                                          & vlSymsp->TOP__test_top__data_ram0.__PVT__data_o)))
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (3U 
                                                      & vlSelf->__PVT__exe_mem_mem_addr_o))
                                                     ? 
                                                    ((0xff000000U 
                                                      & vlSymsp->TOP__test_top__data_ram0.__PVT__data_o) 
                                                     | ((0xff0000U 
                                                         & (vlSelf->__PVT__exe_mem_mem_data_o 
                                                            << 0x10U)) 
                                                        | (0xffffU 
                                                           & vlSymsp->TOP__test_top__data_ram0.__PVT__data_o)))
                                                     : 
                                                    ((vlSelf->__PVT__exe_mem_mem_data_o 
                                                      << 0x18U) 
                                                     | (0xffffffU 
                                                        & vlSymsp->TOP__test_top__data_ram0.__PVT__data_o)))))
                                                  : 0U));
        }
        if ((0x40U & vlSelf->__PVT__if_id_inst_o)) {
            if ((0x20U & vlSelf->__PVT__if_id_inst_o)) {
                if ((0x10U & vlSelf->__PVT__if_id_inst_o)) {
                    vlSelf->__PVT__id0__DOT__op2_o_final = 0U;
                    vlSelf->__PVT__id0__DOT__op1_o_final = 0U;
                } else if ((8U & vlSelf->__PVT__if_id_inst_o)) {
                    vlSelf->__PVT__id0__DOT__op2_o_final = 0U;
                    vlSelf->__PVT__id0__DOT__op1_o_final = 0U;
                } else if ((4U & vlSelf->__PVT__if_id_inst_o)) {
                    vlSelf->__PVT__id0__DOT__op2_o_final = 0U;
                    vlSelf->__PVT__id0__DOT__op1_o_final 
                        = ((2U & vlSelf->__PVT__if_id_inst_o)
                            ? ((1U & vlSelf->__PVT__if_id_inst_o)
                                ? vlSymsp->TOP__test_top__regfile0.__PVT__rdata1_o
                                : 0U) : 0U);
                } else if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                    if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                        vlSelf->__PVT__id0__DOT__op2_o_final 
                            = vlSymsp->TOP__test_top__regfile0.__PVT__rdata2_o;
                        vlSelf->__PVT__id0__DOT__op1_o_final 
                            = vlSymsp->TOP__test_top__regfile0.__PVT__rdata1_o;
                    } else {
                        vlSelf->__PVT__id0__DOT__op2_o_final = 0U;
                        vlSelf->__PVT__id0__DOT__op1_o_final = 0U;
                    }
                } else {
                    vlSelf->__PVT__id0__DOT__op2_o_final = 0U;
                    vlSelf->__PVT__id0__DOT__op1_o_final = 0U;
                }
            } else {
                vlSelf->__PVT__id0__DOT__op2_o_final = 0U;
                vlSelf->__PVT__id0__DOT__op1_o_final = 0U;
            }
        } else if ((0x20U & vlSelf->__PVT__if_id_inst_o)) {
            if ((0x10U & vlSelf->__PVT__if_id_inst_o)) {
                if ((8U & vlSelf->__PVT__if_id_inst_o)) {
                    vlSelf->__PVT__id0__DOT__op2_o_final = 0U;
                    vlSelf->__PVT__id0__DOT__op1_o_final = 0U;
                } else if ((4U & vlSelf->__PVT__if_id_inst_o)) {
                    vlSelf->__PVT__id0__DOT__op2_o_final = 0U;
                    vlSelf->__PVT__id0__DOT__op1_o_final 
                        = ((2U & vlSelf->__PVT__if_id_inst_o)
                            ? ((1U & vlSelf->__PVT__if_id_inst_o)
                                ? (0xfffff000U & vlSelf->__PVT__if_id_inst_o)
                                : 0U) : 0U);
                } else if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                    if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                        if (vlSelf->__PVT__id0__DOT__inst_type_r__DOT__isType_r) {
                            vlSelf->__PVT__id0__DOT__op2_o_final 
                                = vlSymsp->TOP__test_top__regfile0.__PVT__rdata2_o;
                            vlSelf->__PVT__id0__DOT__op1_o_final 
                                = vlSymsp->TOP__test_top__regfile0.__PVT__rdata1_o;
                        } else {
                            vlSelf->__PVT__id0__DOT__op2_o_final = 0U;
                            vlSelf->__PVT__id0__DOT__op1_o_final = 0U;
                        }
                    } else {
                        vlSelf->__PVT__id0__DOT__op2_o_final = 0U;
                        vlSelf->__PVT__id0__DOT__op1_o_final = 0U;
                    }
                } else {
                    vlSelf->__PVT__id0__DOT__op2_o_final = 0U;
                    vlSelf->__PVT__id0__DOT__op1_o_final = 0U;
                }
            } else if ((8U & vlSelf->__PVT__if_id_inst_o)) {
                vlSelf->__PVT__id0__DOT__op2_o_final = 0U;
                vlSelf->__PVT__id0__DOT__op1_o_final = 0U;
            } else if ((4U & vlSelf->__PVT__if_id_inst_o)) {
                vlSelf->__PVT__id0__DOT__op2_o_final = 0U;
                vlSelf->__PVT__id0__DOT__op1_o_final = 0U;
            } else if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                    vlSelf->__PVT__id0__DOT__op2_o_final 
                        = vlSymsp->TOP__test_top__regfile0.__PVT__rdata2_o;
                    vlSelf->__PVT__id0__DOT__op1_o_final 
                        = vlSymsp->TOP__test_top__regfile0.__PVT__rdata1_o;
                } else {
                    vlSelf->__PVT__id0__DOT__op2_o_final = 0U;
                    vlSelf->__PVT__id0__DOT__op1_o_final = 0U;
                }
            } else {
                vlSelf->__PVT__id0__DOT__op2_o_final = 0U;
                vlSelf->__PVT__id0__DOT__op1_o_final = 0U;
            }
        } else if ((0x10U & vlSelf->__PVT__if_id_inst_o)) {
            if ((8U & vlSelf->__PVT__if_id_inst_o)) {
                vlSelf->__PVT__id0__DOT__op2_o_final = 0U;
                vlSelf->__PVT__id0__DOT__op1_o_final = 0U;
            } else if ((4U & vlSelf->__PVT__if_id_inst_o)) {
                if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                    if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                        vlSelf->__PVT__id0__DOT__op2_o_final 
                            = (0xfffff000U & vlSelf->__PVT__if_id_inst_o);
                        vlSelf->__PVT__id0__DOT__op1_o_final 
                            = vlSelf->__PVT__if_id_inst_addr_o;
                    } else {
                        vlSelf->__PVT__id0__DOT__op2_o_final = 0U;
                        vlSelf->__PVT__id0__DOT__op1_o_final = 0U;
                    }
                } else {
                    vlSelf->__PVT__id0__DOT__op2_o_final = 0U;
                    vlSelf->__PVT__id0__DOT__op1_o_final = 0U;
                }
            } else if ((2U & vlSelf->__PVT__if_id_inst_o)) {
                if ((1U & vlSelf->__PVT__if_id_inst_o)) {
                    vlSelf->__PVT__id0__DOT__op2_o_final 
                        = ((0x2000U & vlSelf->__PVT__if_id_inst_o)
                            ? (((- (IData)((vlSelf->__PVT__if_id_inst_o 
                                            >> 0x1fU))) 
                                << 0xcU) | (vlSelf->__PVT__if_id_inst_o 
                                            >> 0x14U))
                            : ((0x1000U & vlSelf->__PVT__if_id_inst_o)
                                ? (0x1fU & (vlSelf->__PVT__if_id_inst_o 
                                            >> 0x14U))
                                : (((- (IData)((vlSelf->__PVT__if_id_inst_o 
                                                >> 0x1fU))) 
                                    << 0xcU) | (vlSelf->__PVT__if_id_inst_o 
                                                >> 0x14U))));
                    vlSelf->__PVT__id0__DOT__op1_o_final 
                        = vlSymsp->TOP__test_top__regfile0.__PVT__rdata1_o;
                } else {
                    vlSelf->__PVT__id0__DOT__op2_o_final = 0U;
                    vlSelf->__PVT__id0__DOT__op1_o_final = 0U;
                }
            } else {
                vlSelf->__PVT__id0__DOT__op2_o_final = 0U;
                vlSelf->__PVT__id0__DOT__op1_o_final = 0U;
            }
        } else {
            vlSelf->__PVT__id0__DOT__op2_o_final = 0U;
            vlSelf->__PVT__id0__DOT__op1_o_final = 
                ((8U & vlSelf->__PVT__if_id_inst_o)
                  ? 0U : ((4U & vlSelf->__PVT__if_id_inst_o)
                           ? 0U : ((2U & vlSelf->__PVT__if_id_inst_o)
                                    ? ((1U & vlSelf->__PVT__if_id_inst_o)
                                        ? vlSymsp->TOP__test_top__regfile0.__PVT__rdata1_o
                                        : 0U) : 0U)));
        }
    }
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtest_top_core_top.h"

VL_ATTR_COLD void Vtest_top_core_top___eval_initial__TOP__test_top__core_top0(Vtest_top_core_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtest_top_core_top___eval_initial__TOP__test_top__core_top0\n"); );
    // Body
    vlSelf->__PVT__id_csr_we_o = 0U;
}

VL_ATTR_COLD void Vtest_top_core_top___ctor_var_reset(Vtest_top_core_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtest_top_core_top___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__rst_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__clk_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rom_ce_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rom_addr_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rom_data_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ram_ce_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ram_addr_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ram_wdata_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ram_rdata_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ram_we_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__irq_external_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__irq_software_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__irq_timer_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__int_ctrl_interrupt_type_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__int_ctrl_interrupt_en_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__int_ctrl_cause_we_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__int_ctrl_trap_casue_o = VL_RAND_RESET_I(4);
    vlSelf->__PVT__int_ctrl_epc_we_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__int_ctrl_epc_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__int_ctrl_mstatus_ie_clear_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__int_ctrl_mstatus_ie_set_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__int_ctrl_flush_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ctrl_new_pc_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ctrl_stall_o = VL_RAND_RESET_I(6);
    vlSelf->__PVT__ctrl_pc_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__pc_wire = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ce_wire = VL_RAND_RESET_I(1);
    vlSelf->__PVT__if_id_inst_addr_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__if_id_inst_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__id_reg1_addr_o = VL_RAND_RESET_I(5);
    vlSelf->__PVT__id_reg2_addr_o = VL_RAND_RESET_I(5);
    vlSelf->__PVT__id_reg1_re_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_reg2_re_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_inst_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__id_reg_we_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_reg_waddr_o = VL_RAND_RESET_I(5);
    vlSelf->__PVT__id_csr_we_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_csr_addr_o = VL_RAND_RESET_I(12);
    vlSelf->__PVT__id_exe_op1_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__id_exe_op2_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__id_exe_reg_we_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_exe_reg_waddr_o = VL_RAND_RESET_I(5);
    vlSelf->__PVT__id_exe_inst_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__id_exe_inst_addr_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__id_exe_inst_is_load_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_exe_rd_o = VL_RAND_RESET_I(5);
    vlSelf->__PVT__id_exe_csr_we_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_exe_csr_addr_o = VL_RAND_RESET_I(12);
    vlSelf->__PVT__id_exe_exception_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__exe_reg_waddr_o = VL_RAND_RESET_I(5);
    vlSelf->__PVT__exe_reg_we_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exe_reg_wdata_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__exe_mem_addr_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__exe_mem_we_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exe_mem_data_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__exe_mem_op_o = VL_RAND_RESET_I(4);
    vlSelf->__PVT__exe_stallreq_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exe_jump_enable_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exe_jump_addr_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__exe_csr_we_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exe_csr_waddr_o = VL_RAND_RESET_I(12);
    vlSelf->__PVT__exe_csr_wdata_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__exe_csr_raddr_o = VL_RAND_RESET_I(12);
    vlSelf->__PVT__exe_mem_reg_waddr_o = VL_RAND_RESET_I(5);
    vlSelf->__PVT__exe_mem_reg_we_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exe_mem_reg_wdata_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__exe_mem_mem_addr_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__exe_mem_mem_we_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exe_mem_mem_data_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__exe_mem_mem_op_o = VL_RAND_RESET_I(4);
    vlSelf->__PVT__exe_mem_csr_we_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exe_mem_csr_wdata_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__exe_mem_inst_addr_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__exe_mem_exception_o = VL_RAND_RESET_I(32);
    vlSelf->__Vcellout__exe_mem0__csr_waddr_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mem_reg_waddr_o = VL_RAND_RESET_I(5);
    vlSelf->__PVT__mem_reg_we_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_reg_wdata_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mem_mem_addr_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mem_mem_we_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_mem_data_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mem_inst_addr_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mem_csr_we_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_csr_wdata_o = VL_RAND_RESET_I(32);
    vlSelf->__Vcellout__mem0__csr_waddr_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mem_wb_reg_waddr_o = VL_RAND_RESET_I(5);
    vlSelf->__PVT__mem_wb_reg_we_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_wb_reg_wdata_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mem_wb_csr_we_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_wb_csr_waddr_o = VL_RAND_RESET_I(12);
    vlSelf->__PVT__mem_wb_csr_wdata_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mem_wb_instret_incr_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_file_csr_rdata_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__interrupt_ctrl0__DOT__S = VL_RAND_RESET_I(4);
    vlSelf->__PVT__interrupt_ctrl0__DOT__S_nxt = VL_RAND_RESET_I(4);
    vlSelf->__PVT__interrupt_ctrl0__DOT__eip = VL_RAND_RESET_I(1);
    vlSelf->__PVT__interrupt_ctrl0__DOT__tip = VL_RAND_RESET_I(1);
    vlSelf->__PVT__interrupt_ctrl0__DOT__sip = VL_RAND_RESET_I(1);
    vlSelf->__PVT__interrupt_ctrl0__DOT__exception = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ctrl0__DOT__current_pc = VL_RAND_RESET_I(32);
    vlSelf->__PVT__id0__DOT__except_mret = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id0__DOT__except_ecall = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id0__DOT__op1_o_final = VL_RAND_RESET_I(32);
    vlSelf->__PVT__id0__DOT__op2_o_final = VL_RAND_RESET_I(32);
    vlSelf->__PVT__id0__DOT__r_reg1_re_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id0__DOT__r_reg2_re_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id0__DOT__r_reg_we_o = VL_RAND_RESET_I(1);
    vlSelf->id0__DOT__inst_type_r__DOT____VdfgExtracted_he1154c64__0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exe0__DOT__isType_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exe0__DOT__isType_m = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exe0__DOT__op1_eq_op2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exe0__DOT__a_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__exe0__DOT__b_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__exe0__DOT__div_result_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__exe0__DOT__mult_req_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exe0__DOT__div_req_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exe0__DOT__div_ready_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exe0__DOT__is_div_q_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exe0__DOT__mult_result_i = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__exe0__DOT__signed_adjust = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exe0__DOT__invert_result = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__exe0__DOT__invert_result_div = VL_RAND_RESET_I(32);
    vlSelf->__PVT__exe0__DOT__csr_rdata = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        VL_RAND_RESET_W(65, vlSelf->__PVT__exe0__DOT__mul0__DOT__a_temp[__Vi0]);
    }
    vlSelf->__PVT__exe0__DOT__mul0__DOT__req = VL_RAND_RESET_I(1);
    vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__ready_o = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        VL_RAND_RESET_W(65, vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        VL_RAND_RESET_W(65, vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next1[__Vi0]);
    }
    vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__ready_o = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        VL_RAND_RESET_W(65, vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        VL_RAND_RESET_W(65, vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_RAND_RESET_W(65, vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next2[__Vi0]);
    }
    vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell1__ready_o = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_RAND_RESET_W(65, vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        VL_RAND_RESET_W(65, vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(65, vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next3[__Vi0]);
    }
    vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell2__ready_o = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(65, vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_RAND_RESET_W(65, vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(65, vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next4[__Vi0]);
    }
    vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell3__ready_o = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(65, vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell3__result_o[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(65, vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell3__a_i[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        VL_RAND_RESET_W(65, vlSelf->__PVT__exe0__DOT__mul0__DOT__a_next5[__Vi0]);
    }
    vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell4__ready_o = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        VL_RAND_RESET_W(65, vlSelf->exe0__DOT__mul0__DOT____Vcellout__mult_cell4__result_o[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(65, vlSelf->exe0__DOT__mul0__DOT____Vcellinp__mult_cell4__a_i[__Vi0]);
    }
    vlSelf->exe0__DOT__mul0__DOT____VdfgExtracted_hccf441aa__0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exe0__DOT__mul0__DOT__mult_cellB__DOT__unnamedblk1__DOT__device = VL_RAND_RESET_I(32);
    vlSelf->__PVT__exe0__DOT__mul0__DOT__mult_cellB__DOT__unnamedblk2__DOT__device = VL_RAND_RESET_I(32);
    vlSelf->__PVT__exe0__DOT__mul0__DOT__mult_cell0__DOT__unnamedblk1__DOT__device = VL_RAND_RESET_I(32);
    vlSelf->__PVT__exe0__DOT__mul0__DOT__mult_cell0__DOT__unnamedblk2__DOT__device = VL_RAND_RESET_I(32);
    vlSelf->__PVT__exe0__DOT__mul0__DOT__mult_cell1__DOT__unnamedblk1__DOT__device = VL_RAND_RESET_I(32);
    vlSelf->__PVT__exe0__DOT__mul0__DOT__mult_cell1__DOT__unnamedblk2__DOT__device = VL_RAND_RESET_I(32);
    vlSelf->__PVT__exe0__DOT__mul0__DOT__mult_cell2__DOT__unnamedblk1__DOT__device = VL_RAND_RESET_I(32);
    vlSelf->__PVT__exe0__DOT__mul0__DOT__mult_cell2__DOT__unnamedblk2__DOT__device = VL_RAND_RESET_I(32);
    vlSelf->__PVT__exe0__DOT__mul0__DOT__mult_cell3__DOT__unnamedblk1__DOT__device = VL_RAND_RESET_I(32);
    vlSelf->__PVT__exe0__DOT__mul0__DOT__mult_cell3__DOT__unnamedblk2__DOT__device = VL_RAND_RESET_I(32);
    vlSelf->__PVT__exe0__DOT__mul0__DOT__mult_cell4__DOT__unnamedblk1__DOT__device = VL_RAND_RESET_I(32);
    vlSelf->__PVT__exe0__DOT__mul0__DOT__mult_cell4__DOT__unnamedblk2__DOT__device = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(65, vlSelf->exe0__DOT__mul0__DOT__mult_cell4__DOT____Vlvbound_h51c51eb9__0);
    vlSelf->__PVT__exe0__DOT__div0__DOT__reg32 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(65, vlSelf->__PVT__exe0__DOT__div0__DOT__result);
    vlSelf->__PVT__exe0__DOT__div0__DOT__cnt = VL_RAND_RESET_I(6);
    vlSelf->__PVT__exe0__DOT__div0__DOT__S = VL_RAND_RESET_I(3);
    vlSelf->__PVT__exe0__DOT__div0__DOT__S_next = VL_RAND_RESET_I(3);
    vlSelf->__PVT__exe0__DOT__div0__DOT__div_sub = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, vlSelf->__PVT__exe0__DOT__div0__DOT__result_tmp);
    vlSelf->__PVT__csr0__DOT__mcycle = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__csr0__DOT__minstret = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__csr0__DOT__mstatus_mpie = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr0__DOT__mstatus_mie = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr0__DOT__mie_external = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr0__DOT__mie_timer = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr0__DOT__mie_software = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr0__DOT__w_mie = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr0__DOT__mtvec = VL_RAND_RESET_I(32);
    vlSelf->__PVT__csr0__DOT__mscratch = VL_RAND_RESET_I(32);
    vlSelf->__PVT__csr0__DOT__mepc = VL_RAND_RESET_I(32);
    vlSelf->__PVT__csr0__DOT__cause = VL_RAND_RESET_I(4);
    vlSelf->__PVT__csr0__DOT__cause_rem = VL_RAND_RESET_I(27);
    vlSelf->__PVT__csr0__DOT__interrupt_type = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr0__DOT__w_mcause = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr0__DOT__mip_external = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr0__DOT__mip_timer = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr0__DOT__mip_software = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr0__DOT__mtval = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__if_id_inst_addr_o = VL_RAND_RESET_I(32);
}

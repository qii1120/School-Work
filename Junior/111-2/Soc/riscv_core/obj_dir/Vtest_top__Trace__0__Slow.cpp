// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtest_top__Syms.h"


VL_ATTR_COLD void Vtest_top___024root__trace_init_sub__TOP__0(Vtest_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_top___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+114,"rst_i", false,-1);
    tracep->declBit(c+115,"clk_i", false,-1);
    tracep->declBit(c+116,"halt_o", false,-1);
}

VL_ATTR_COLD void Vtest_top___024root__trace_init_sub__TOP__test_top__0(Vtest_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_top___024root__trace_init_sub__TOP__test_top__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+114,"rst_i", false,-1);
    tracep->declBit(c+115,"clk_i", false,-1);
    tracep->declBit(c+36,"halt_o", false,-1);
    tracep->declBus(c+2,"ctrl_stall_o", false,-1, 5,0);
    tracep->declBit(c+3,"ctrl_flush_jump_o", false,-1);
    tracep->declBus(c+4,"ctrl_new_pc_o", false,-1, 31,0);
    tracep->declBus(c+37,"pc_wire", false,-1, 31,0);
    tracep->declBit(c+38,"ce_wire", false,-1);
    tracep->declBus(c+37,"if_inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+117,"if_inst_o", false,-1, 31,0);
    tracep->declBus(c+39,"if_id_inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+40,"if_id_inst_o", false,-1, 31,0);
    tracep->declBus(c+5,"id_inst_o", false,-1, 31,0);
    tracep->declBus(c+39,"id_inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+6,"id_op1_o", false,-1, 31,0);
    tracep->declBus(c+7,"id_op2_o", false,-1, 31,0);
    tracep->declBit(c+8,"id_reg_we_o", false,-1);
    tracep->declBus(c+9,"id_reg_waddr_o", false,-1, 4,0);
    tracep->declBus(c+10,"id_reg1_addr_o", false,-1, 4,0);
    tracep->declBus(c+11,"id_reg2_addr_o", false,-1, 4,0);
    tracep->declBit(c+12,"id_reg1_re_o", false,-1);
    tracep->declBit(c+13,"id_reg2_re_o", false,-1);
    tracep->declBit(c+41,"id_stallreq_o", false,-1);
    tracep->declBus(c+14,"reg1_data_o", false,-1, 31,0);
    tracep->declBus(c+15,"reg2_data_o", false,-1, 31,0);
    tracep->declBit(c+42,"id_exe_inst_is_load_o", false,-1);
    tracep->declBus(c+43,"id_exe_rd_o", false,-1, 4,0);
    tracep->declBus(c+44,"id_exe_op1_o", false,-1, 31,0);
    tracep->declBus(c+45,"id_exe_op2_o", false,-1, 31,0);
    tracep->declBit(c+46,"id_exe_reg_we_o", false,-1);
    tracep->declBus(c+47,"id_exe_reg_waddr_o", false,-1, 4,0);
    tracep->declBus(c+48,"id_exe_inst_o", false,-1, 31,0);
    tracep->declBus(c+49,"id_exe_inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+16,"exe_reg_waddr_o", false,-1, 4,0);
    tracep->declBit(c+17,"exe_reg_we_o", false,-1);
    tracep->declBus(c+18,"exe_reg_wdata_o", false,-1, 31,0);
    tracep->declBus(c+19,"exe_mem_addr_o", false,-1, 31,0);
    tracep->declBus(c+20,"exe_mem_data_o", false,-1, 31,0);
    tracep->declBit(c+21,"exe_mem_we_o", false,-1);
    tracep->declBus(c+22,"exe_mem_op_o", false,-1, 3,0);
    tracep->declBit(c+23,"exe_stallreq_o", false,-1);
    tracep->declBit(c+3,"exe_jump_enable_o", false,-1);
    tracep->declBus(c+4,"exe_jump_addr_o", false,-1, 31,0);
    tracep->declBus(c+50,"exe_mem_reg_waddr_o", false,-1, 4,0);
    tracep->declBit(c+51,"exe_mem_reg_we_o", false,-1);
    tracep->declBus(c+52,"exe_mem_reg_wdata_o", false,-1, 31,0);
    tracep->declBus(c+53,"exe_mem_mem_addr_o", false,-1, 31,0);
    tracep->declBus(c+54,"exe_mem_mem_data_o", false,-1, 31,0);
    tracep->declBit(c+55,"exe_mem_mem_we_o", false,-1);
    tracep->declBus(c+56,"exe_mem_mem_op_o", false,-1, 3,0);
    tracep->declBus(c+24,"mem_reg_waddr_o", false,-1, 4,0);
    tracep->declBit(c+25,"mem_reg_we_o", false,-1);
    tracep->declBus(c+26,"mem_reg_wdata_o", false,-1, 31,0);
    tracep->declBus(c+27,"mem_ram_addr_o", false,-1, 31,0);
    tracep->declBit(c+28,"mem_ram_w_request_o", false,-1);
    tracep->declBus(c+29,"mem_ram_data_o", false,-1, 31,0);
    tracep->declBit(c+36,"mem_halt_o", false,-1);
    tracep->declBus(c+30,"ram_data_o", false,-1, 31,0);
    tracep->declBus(c+57,"mem_wb_reg_waddr_o", false,-1, 4,0);
    tracep->declBit(c+58,"mem_wb_reg_we_o", false,-1);
    tracep->declBus(c+59,"mem_wb_reg_wdata_o", false,-1, 31,0);
    tracep->pushNamePrefix("ctrl0 ");
    tracep->declBit(c+114,"rst_i", false,-1);
    tracep->declBit(c+41,"stallreq_from_id_i", false,-1);
    tracep->declBit(c+23,"stallreq_from_exe_i", false,-1);
    tracep->declBit(c+3,"jump_enable_i", false,-1);
    tracep->declBus(c+4,"jump_addr_i", false,-1, 31,0);
    tracep->declBus(c+2,"stall_o", false,-1, 5,0);
    tracep->declBit(c+3,"flush_jump_o", false,-1);
    tracep->declBus(c+4,"new_pc_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe0 ");
    tracep->declBit(c+114,"rst_i", false,-1);
    tracep->declBus(c+44,"op1_i", false,-1, 31,0);
    tracep->declBus(c+45,"op2_i", false,-1, 31,0);
    tracep->declBit(c+46,"reg_we_i", false,-1);
    tracep->declBus(c+47,"reg_waddr_i", false,-1, 4,0);
    tracep->declBus(c+48,"inst_i", false,-1, 31,0);
    tracep->declBus(c+49,"inst_addr_i", false,-1, 31,0);
    tracep->declBus(c+16,"reg_waddr_o", false,-1, 4,0);
    tracep->declBit(c+17,"reg_we_o", false,-1);
    tracep->declBus(c+18,"reg_wdata_o", false,-1, 31,0);
    tracep->declBus(c+19,"mem_addr_o", false,-1, 31,0);
    tracep->declBus(c+20,"mem_data_o", false,-1, 31,0);
    tracep->declBit(c+21,"mem_we_o", false,-1);
    tracep->declBus(c+22,"mem_op_o", false,-1, 3,0);
    tracep->declBit(c+23,"stallreq_o", false,-1);
    tracep->declBus(c+4,"jump_addr_o", false,-1, 31,0);
    tracep->declBit(c+3,"jump_enable_o", false,-1);
    tracep->declBus(c+60,"opcode", false,-1, 6,0);
    tracep->declBus(c+61,"funct3", false,-1, 2,0);
    tracep->declBus(c+62,"funct7", false,-1, 6,0);
    tracep->declBit(c+63,"isType_r", false,-1);
    tracep->declBus(c+64,"load_addr_offset", false,-1, 31,0);
    tracep->declBus(c+65,"store_addr_offset", false,-1, 31,0);
    tracep->declBit(c+66,"op1_eq_op2", false,-1);
    tracep->declBus(c+49,"pc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe_mem0 ");
    tracep->declBit(c+114,"rst_i", false,-1);
    tracep->declBit(c+115,"clk_i", false,-1);
    tracep->declBus(c+2,"stall_i", false,-1, 5,0);
    tracep->declBus(c+16,"reg_waddr_i", false,-1, 4,0);
    tracep->declBit(c+17,"reg_we_i", false,-1);
    tracep->declBus(c+18,"reg_wdata_i", false,-1, 31,0);
    tracep->declBus(c+19,"mem_addr_i", false,-1, 31,0);
    tracep->declBus(c+20,"mem_data_i", false,-1, 31,0);
    tracep->declBit(c+21,"mem_we_i", false,-1);
    tracep->declBus(c+22,"mem_op_i", false,-1, 3,0);
    tracep->declBus(c+50,"reg_waddr_o", false,-1, 4,0);
    tracep->declBit(c+51,"reg_we_o", false,-1);
    tracep->declBus(c+52,"reg_wdata_o", false,-1, 31,0);
    tracep->declBus(c+53,"mem_addr_o", false,-1, 31,0);
    tracep->declBus(c+54,"mem_data_o", false,-1, 31,0);
    tracep->declBit(c+55,"mem_we_o", false,-1);
    tracep->declBus(c+56,"mem_op_o", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id0 ");
    tracep->declBit(c+114,"rst_i", false,-1);
    tracep->declBus(c+39,"inst_addr_i", false,-1, 31,0);
    tracep->declBus(c+40,"inst_i", false,-1, 31,0);
    tracep->declBus(c+14,"reg1_rdata_i", false,-1, 31,0);
    tracep->declBus(c+15,"reg2_rdata_i", false,-1, 31,0);
    tracep->declBus(c+43,"exe_rd_i", false,-1, 4,0);
    tracep->declBit(c+42,"pre_inst_is_load_i", false,-1);
    tracep->declBit(c+41,"stallreq_o", false,-1);
    tracep->declBus(c+10,"reg1_raddr_o", false,-1, 4,0);
    tracep->declBus(c+11,"reg2_raddr_o", false,-1, 4,0);
    tracep->declBit(c+12,"reg1_re_o", false,-1);
    tracep->declBit(c+13,"reg2_re_o", false,-1);
    tracep->declBus(c+5,"inst_o", false,-1, 31,0);
    tracep->declBus(c+39,"inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+6,"op1_o", false,-1, 31,0);
    tracep->declBus(c+7,"op2_o", false,-1, 31,0);
    tracep->declBit(c+8,"reg_we_o", false,-1);
    tracep->declBus(c+9,"reg_waddr_o", false,-1, 4,0);
    tracep->declBus(c+16,"exe_reg_waddr_i", false,-1, 4,0);
    tracep->declBus(c+18,"exe_reg_wdata_i", false,-1, 31,0);
    tracep->declBit(c+17,"exe_reg_we_i", false,-1);
    tracep->declBus(c+24,"mem_reg_waddr_i", false,-1, 4,0);
    tracep->declBus(c+26,"mem_reg_wdata_i", false,-1, 31,0);
    tracep->declBit(c+25,"mem_reg_we_i", false,-1);
    tracep->declBus(c+31,"op1_o_final", false,-1, 31,0);
    tracep->declBus(c+32,"op2_o_final", false,-1, 31,0);
    tracep->declBus(c+67,"opcode", false,-1, 6,0);
    tracep->declBus(c+68,"rd", false,-1, 4,0);
    tracep->declBus(c+69,"i_reg1_raddr_o", false,-1, 4,0);
    tracep->declBus(c+70,"r_reg1_raddr_o", false,-1, 4,0);
    tracep->declBus(c+118,"i_reg2_raddr_o", false,-1, 4,0);
    tracep->declBus(c+71,"r_reg2_raddr_o", false,-1, 4,0);
    tracep->declBit(c+119,"i_reg1_re_o", false,-1);
    tracep->declBit(c+72,"r_reg1_re_o", false,-1);
    tracep->declBit(c+120,"i_reg2_re_o", false,-1);
    tracep->declBit(c+72,"r_reg2_re_o", false,-1);
    tracep->declBus(c+14,"i_op1_o", false,-1, 31,0);
    tracep->declBus(c+33,"r_op1_o", false,-1, 31,0);
    tracep->declBus(c+73,"i_op2_o", false,-1, 31,0);
    tracep->declBus(c+34,"r_op2_o", false,-1, 31,0);
    tracep->declBit(c+119,"i_reg_we_o", false,-1);
    tracep->declBit(c+72,"r_reg_we_o", false,-1);
    tracep->declBus(c+74,"i_reg_waddr_o", false,-1, 4,0);
    tracep->declBus(c+75,"r_reg_waddr_o", false,-1, 4,0);
    tracep->declBus(c+76,"rs1", false,-1, 4,0);
    tracep->declBus(c+77,"rs2", false,-1, 4,0);
    tracep->declBit(c+41,"is_load_hazard", false,-1);
    tracep->pushNamePrefix("inst_type_i ");
    tracep->declBus(c+40,"inst_i", false,-1, 31,0);
    tracep->declBus(c+14,"reg1_rdata_i", false,-1, 31,0);
    tracep->declBus(c+15,"reg2_rdata_i", false,-1, 31,0);
    tracep->declBus(c+69,"reg1_raddr_o", false,-1, 4,0);
    tracep->declBus(c+118,"reg2_raddr_o", false,-1, 4,0);
    tracep->declBit(c+119,"reg1_re_o", false,-1);
    tracep->declBit(c+120,"reg2_re_o", false,-1);
    tracep->declBus(c+14,"op1_o", false,-1, 31,0);
    tracep->declBus(c+73,"op2_o", false,-1, 31,0);
    tracep->declBit(c+119,"reg_we_o", false,-1);
    tracep->declBus(c+74,"reg_waddr_o", false,-1, 4,0);
    tracep->declBus(c+78,"funct3", false,-1, 2,0);
    tracep->declBus(c+68,"rd", false,-1, 4,0);
    tracep->declBus(c+76,"rs1", false,-1, 4,0);
    tracep->declBus(c+77,"rs2", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("inst_type_r ");
    tracep->declBus(c+40,"inst_i", false,-1, 31,0);
    tracep->declBus(c+14,"reg1_rdata_i", false,-1, 31,0);
    tracep->declBus(c+15,"reg2_rdata_i", false,-1, 31,0);
    tracep->declBus(c+70,"reg1_raddr_o", false,-1, 4,0);
    tracep->declBus(c+71,"reg2_raddr_o", false,-1, 4,0);
    tracep->declBit(c+72,"reg1_re_o", false,-1);
    tracep->declBit(c+72,"reg2_re_o", false,-1);
    tracep->declBus(c+33,"op1_o", false,-1, 31,0);
    tracep->declBus(c+34,"op2_o", false,-1, 31,0);
    tracep->declBit(c+72,"reg_we_o", false,-1);
    tracep->declBus(c+75,"reg_waddr_o", false,-1, 4,0);
    tracep->declBus(c+67,"opcode", false,-1, 6,0);
    tracep->declBus(c+78,"funct3", false,-1, 2,0);
    tracep->declBus(c+79,"funct7", false,-1, 6,0);
    tracep->declBus(c+77,"shamt", false,-1, 4,0);
    tracep->declBus(c+68,"rd", false,-1, 4,0);
    tracep->declBus(c+76,"rs1", false,-1, 4,0);
    tracep->declBus(c+77,"rs2", false,-1, 4,0);
    tracep->declBit(c+72,"isType_r", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("id_exe0 ");
    tracep->declBit(c+114,"rst_i", false,-1);
    tracep->declBit(c+115,"clk_i", false,-1);
    tracep->declBus(c+2,"stall_i", false,-1, 5,0);
    tracep->declBit(c+3,"flush_jump_i", false,-1);
    tracep->declBus(c+6,"op1_i", false,-1, 31,0);
    tracep->declBus(c+7,"op2_i", false,-1, 31,0);
    tracep->declBit(c+8,"reg_we_i", false,-1);
    tracep->declBus(c+9,"reg_waddr_i", false,-1, 4,0);
    tracep->declBus(c+5,"inst_i", false,-1, 31,0);
    tracep->declBus(c+39,"inst_addr_i", false,-1, 31,0);
    tracep->declBus(c+44,"op1_o", false,-1, 31,0);
    tracep->declBus(c+45,"op2_o", false,-1, 31,0);
    tracep->declBit(c+46,"reg_we_o", false,-1);
    tracep->declBus(c+47,"reg_waddr_o", false,-1, 4,0);
    tracep->declBus(c+48,"inst_o", false,-1, 31,0);
    tracep->declBit(c+42,"inst_is_load_o", false,-1);
    tracep->declBus(c+43,"rd_o", false,-1, 4,0);
    tracep->declBus(c+49,"inst_addr_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if_id0 ");
    tracep->declBit(c+115,"clk_i", false,-1);
    tracep->declBit(c+114,"rst_i", false,-1);
    tracep->declBus(c+2,"stall_i", false,-1, 5,0);
    tracep->declBit(c+3,"flush_jump_i", false,-1);
    tracep->declBus(c+37,"inst_addr_i", false,-1, 31,0);
    tracep->declBus(c+117,"inst_i", false,-1, 31,0);
    tracep->declBus(c+39,"inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+40,"inst_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem0 ");
    tracep->declBit(c+115,"clk_i", false,-1);
    tracep->declBit(c+114,"rst_i", false,-1);
    tracep->declBus(c+50,"reg_waddr_i", false,-1, 4,0);
    tracep->declBit(c+51,"reg_we_i", false,-1);
    tracep->declBus(c+52,"reg_wdata_i", false,-1, 31,0);
    tracep->declBus(c+30,"ram_data_i", false,-1, 31,0);
    tracep->declBit(c+55,"mem_we_i", false,-1);
    tracep->declBus(c+53,"mem_addr_i", false,-1, 31,0);
    tracep->declBus(c+54,"mem_data_i", false,-1, 31,0);
    tracep->declBus(c+56,"mem_op_i", false,-1, 3,0);
    tracep->declBus(c+27,"ram_addr_o", false,-1, 31,0);
    tracep->declBit(c+28,"ram_w_request_o", false,-1);
    tracep->declBus(c+29,"ram_data_o", false,-1, 31,0);
    tracep->declBus(c+24,"reg_waddr_o", false,-1, 4,0);
    tracep->declBit(c+25,"reg_we_o", false,-1);
    tracep->declBus(c+26,"reg_wdata_o", false,-1, 31,0);
    tracep->declBit(c+36,"halt_o", false,-1);
    tracep->declBus(c+80,"ram_addr_offset", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_wb0 ");
    tracep->declBit(c+114,"rst_i", false,-1);
    tracep->declBit(c+115,"clk_i", false,-1);
    tracep->declBus(c+2,"stall_i", false,-1, 5,0);
    tracep->declBus(c+24,"reg_waddr_i", false,-1, 4,0);
    tracep->declBit(c+25,"reg_we_i", false,-1);
    tracep->declBus(c+26,"reg_wdata_i", false,-1, 31,0);
    tracep->declBus(c+57,"reg_waddr_o", false,-1, 4,0);
    tracep->declBit(c+58,"reg_we_o", false,-1);
    tracep->declBus(c+59,"reg_wdata_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc_reg0 ");
    tracep->declBit(c+115,"clk_i", false,-1);
    tracep->declBit(c+114,"rst_i", false,-1);
    tracep->declBus(c+2,"stall_i", false,-1, 5,0);
    tracep->declBit(c+3,"flush_jump_i", false,-1);
    tracep->declBus(c+4,"new_pc_i", false,-1, 31,0);
    tracep->declBus(c+37,"pc_o", false,-1, 31,0);
    tracep->declBit(c+38,"ce_o", false,-1);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vtest_top___024root__trace_init_sub__TOP__test_top__regfile0__0(Vtest_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_top___024root__trace_init_sub__TOP__test_top__regfile0__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+115,"clk_i", false,-1);
    tracep->declBit(c+114,"rst_i", false,-1);
    tracep->declBit(c+58,"we_i", false,-1);
    tracep->declBus(c+57,"waddr_i", false,-1, 4,0);
    tracep->declBus(c+59,"wdata_i", false,-1, 31,0);
    tracep->declBit(c+12,"re1_i", false,-1);
    tracep->declBus(c+10,"raddr1_i", false,-1, 4,0);
    tracep->declBit(c+13,"re2_i", false,-1);
    tracep->declBus(c+11,"raddr2_i", false,-1, 4,0);
    tracep->declBus(c+14,"rdata1_o", false,-1, 31,0);
    tracep->declBus(c+15,"rdata2_o", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+81+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->declBus(c+1,"i", false,-1, 31,0);
}

VL_ATTR_COLD void Vtest_top___024root__trace_init_sub__TOP__test_top__data_ram0__0(Vtest_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_top___024root__trace_init_sub__TOP__test_top__data_ram0__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+121,"RAM_SIZE", false,-1, 31,0);
    tracep->declBus(c+122,"RAM_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBit(c+115,"clk_i", false,-1);
    tracep->declBit(c+114,"rst_i", false,-1);
    tracep->declBus(c+27,"addr_i", false,-1, 31,0);
    tracep->declBit(c+28,"we_i", false,-1);
    tracep->declBus(c+29,"data_i", false,-1, 31,0);
    tracep->declBus(c+30,"data_o", false,-1, 31,0);
    tracep->declBit(c+38,"inst_ce_i", false,-1);
    tracep->declBus(c+37,"pc_i", false,-1, 31,0);
    tracep->declBus(c+117,"inst_o", false,-1, 31,0);
    tracep->declBus(c+35,"addr4", false,-1, 20,0);
    tracep->declBus(c+113,"rom_addr4", false,-1, 20,0);
}

VL_ATTR_COLD void Vtest_top___024root__trace_init_top(Vtest_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_top___024root__trace_init_top\n"); );
    // Body
    Vtest_top___024root__trace_init_sub__TOP__0(vlSelf, tracep);
    tracep->pushNamePrefix("test_top ");
    Vtest_top___024root__trace_init_sub__TOP__test_top__0(vlSelf, tracep);
    tracep->pushNamePrefix("data_ram0 ");
    Vtest_top___024root__trace_init_sub__TOP__test_top__data_ram0__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regfile0 ");
    Vtest_top___024root__trace_init_sub__TOP__test_top__regfile0__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtest_top___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtest_top___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtest_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtest_top___024root__trace_register(Vtest_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_top___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtest_top___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtest_top___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtest_top___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtest_top___024root__trace_full_sub_0(Vtest_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtest_top___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_top___024root__trace_full_top_0\n"); );
    // Init
    Vtest_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtest_top___024root*>(voidSelf);
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtest_top___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtest_top___024root__trace_full_sub_0(Vtest_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_top___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSymsp->TOP__test_top__regfile0.__PVT__i),32);
    bufp->fullCData(oldp+2,(vlSymsp->TOP__test_top.__PVT__ctrl_stall_o),6);
    bufp->fullBit(oldp+3,(vlSymsp->TOP__test_top.__PVT__exe_jump_enable_o));
    bufp->fullIData(oldp+4,(vlSymsp->TOP__test_top.__PVT__exe_jump_addr_o),32);
    bufp->fullIData(oldp+5,(vlSymsp->TOP__test_top.__PVT__id_inst_o),32);
    bufp->fullIData(oldp+6,((((((IData)(vlSymsp->TOP__test_top.__PVT__id_reg1_re_o) 
                                & (IData)(vlSymsp->TOP__test_top.__PVT__exe_reg_we_o)) 
                               & (0U != (IData)(vlSymsp->TOP__test_top.__PVT__id_reg1_addr_o))) 
                              & ((IData)(vlSymsp->TOP__test_top.__PVT__exe_reg_waddr_o) 
                                 == (IData)(vlSymsp->TOP__test_top.__PVT__id_reg1_addr_o)))
                              ? vlSymsp->TOP__test_top.__PVT__exe_reg_wdata_o
                              : (((((IData)(vlSymsp->TOP__test_top.__PVT__id_reg1_re_o) 
                                    & (IData)(vlSymsp->TOP__test_top.__PVT__mem_reg_we_o)) 
                                   & (0U != (IData)(vlSymsp->TOP__test_top.__PVT__id_reg1_addr_o))) 
                                  & ((IData)(vlSymsp->TOP__test_top.__PVT__mem_reg_waddr_o) 
                                     == (IData)(vlSymsp->TOP__test_top.__PVT__id_reg1_addr_o)))
                                  ? vlSymsp->TOP__test_top.__PVT__mem_reg_wdata_o
                                  : vlSymsp->TOP__test_top.__PVT__id0__DOT__op1_o_final))),32);
    bufp->fullIData(oldp+7,((((((IData)(vlSymsp->TOP__test_top.__PVT__id_reg2_re_o) 
                                & (IData)(vlSymsp->TOP__test_top.__PVT__exe_reg_we_o)) 
                               & (0U != (IData)(vlSymsp->TOP__test_top.__PVT__id_reg2_addr_o))) 
                              & ((IData)(vlSymsp->TOP__test_top.__PVT__exe_reg_waddr_o) 
                                 == (IData)(vlSymsp->TOP__test_top.__PVT__id_reg2_addr_o)))
                              ? vlSymsp->TOP__test_top.__PVT__exe_reg_wdata_o
                              : (((((IData)(vlSymsp->TOP__test_top.__PVT__id_reg2_re_o) 
                                    & (IData)(vlSymsp->TOP__test_top.__PVT__mem_reg_we_o)) 
                                   & (0U != (IData)(vlSymsp->TOP__test_top.__PVT__id_reg2_addr_o))) 
                                  & ((IData)(vlSymsp->TOP__test_top.__PVT__mem_reg_waddr_o) 
                                     == (IData)(vlSymsp->TOP__test_top.__PVT__id_reg2_addr_o)))
                                  ? vlSymsp->TOP__test_top.__PVT__mem_reg_wdata_o
                                  : vlSymsp->TOP__test_top.__PVT__id0__DOT__op2_o_final))),32);
    bufp->fullBit(oldp+8,(vlSymsp->TOP__test_top.__PVT__id_reg_we_o));
    bufp->fullCData(oldp+9,(vlSymsp->TOP__test_top.__PVT__id_reg_waddr_o),5);
    bufp->fullCData(oldp+10,(vlSymsp->TOP__test_top.__PVT__id_reg1_addr_o),5);
    bufp->fullCData(oldp+11,(vlSymsp->TOP__test_top.__PVT__id_reg2_addr_o),5);
    bufp->fullBit(oldp+12,(vlSymsp->TOP__test_top.__PVT__id_reg1_re_o));
    bufp->fullBit(oldp+13,(vlSymsp->TOP__test_top.__PVT__id_reg2_re_o));
    bufp->fullIData(oldp+14,(vlSymsp->TOP__test_top__regfile0.__PVT__rdata1_o),32);
    bufp->fullIData(oldp+15,(vlSymsp->TOP__test_top__regfile0.__PVT__rdata2_o),32);
    bufp->fullCData(oldp+16,(vlSymsp->TOP__test_top.__PVT__exe_reg_waddr_o),5);
    bufp->fullBit(oldp+17,(vlSymsp->TOP__test_top.__PVT__exe_reg_we_o));
    bufp->fullIData(oldp+18,(vlSymsp->TOP__test_top.__PVT__exe_reg_wdata_o),32);
    bufp->fullIData(oldp+19,(vlSymsp->TOP__test_top.__PVT__exe_mem_addr_o),32);
    bufp->fullIData(oldp+20,(vlSymsp->TOP__test_top.__PVT__exe_mem_data_o),32);
    bufp->fullBit(oldp+21,(vlSymsp->TOP__test_top.__PVT__exe_mem_we_o));
    bufp->fullCData(oldp+22,(vlSymsp->TOP__test_top.__PVT__exe_mem_op_o),4);
    bufp->fullBit(oldp+23,(vlSymsp->TOP__test_top.__PVT__exe_stallreq_o));
    bufp->fullCData(oldp+24,(vlSymsp->TOP__test_top.__PVT__mem_reg_waddr_o),5);
    bufp->fullBit(oldp+25,(vlSymsp->TOP__test_top.__PVT__mem_reg_we_o));
    bufp->fullIData(oldp+26,(vlSymsp->TOP__test_top.__PVT__mem_reg_wdata_o),32);
    bufp->fullIData(oldp+27,(vlSymsp->TOP__test_top.__PVT__mem_ram_addr_o),32);
    bufp->fullBit(oldp+28,(vlSymsp->TOP__test_top.__PVT__mem_ram_w_request_o));
    bufp->fullIData(oldp+29,(vlSymsp->TOP__test_top.__PVT__mem_ram_data_o),32);
    bufp->fullIData(oldp+30,(vlSymsp->TOP__test_top__data_ram0.__PVT__data_o),32);
    bufp->fullIData(oldp+31,(vlSymsp->TOP__test_top.__PVT__id0__DOT__op1_o_final),32);
    bufp->fullIData(oldp+32,(vlSymsp->TOP__test_top.__PVT__id0__DOT__op2_o_final),32);
    bufp->fullIData(oldp+33,(((IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_r)
                               ? vlSymsp->TOP__test_top__regfile0.__PVT__rdata1_o
                               : 0U)),32);
    bufp->fullIData(oldp+34,(((IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_r)
                               ? vlSymsp->TOP__test_top__regfile0.__PVT__rdata2_o
                               : 0U)),32);
    bufp->fullIData(oldp+35,((0x1ffffcU & vlSymsp->TOP__test_top.__PVT__mem_ram_addr_o)),21);
    bufp->fullBit(oldp+36,(vlSymsp->TOP__test_top.__PVT__mem_halt_o));
    bufp->fullIData(oldp+37,(vlSymsp->TOP__test_top.__PVT__pc_wire),32);
    bufp->fullBit(oldp+38,(vlSymsp->TOP__test_top.__PVT__ce_wire));
    bufp->fullIData(oldp+39,(vlSymsp->TOP__test_top.__PVT__if_id_inst_addr_o),32);
    bufp->fullIData(oldp+40,(vlSymsp->TOP__test_top.__PVT__if_id_inst_o),32);
    bufp->fullBit(oldp+41,(((IData)(vlSymsp->TOP__test_top.__PVT__id_exe_inst_is_load_o) 
                            & (((0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                          >> 0xfU)) 
                                == (IData)(vlSymsp->TOP__test_top.__PVT__id_exe_rd_o)) 
                               | ((0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                            >> 0x14U)) 
                                  == (IData)(vlSymsp->TOP__test_top.__PVT__id_exe_rd_o))))));
    bufp->fullBit(oldp+42,(vlSymsp->TOP__test_top.__PVT__id_exe_inst_is_load_o));
    bufp->fullCData(oldp+43,(vlSymsp->TOP__test_top.__PVT__id_exe_rd_o),5);
    bufp->fullIData(oldp+44,(vlSymsp->TOP__test_top.__PVT__id_exe_op1_o),32);
    bufp->fullIData(oldp+45,(vlSymsp->TOP__test_top.__PVT__id_exe_op2_o),32);
    bufp->fullBit(oldp+46,(vlSymsp->TOP__test_top.__PVT__id_exe_reg_we_o));
    bufp->fullCData(oldp+47,(vlSymsp->TOP__test_top.__PVT__id_exe_reg_waddr_o),5);
    bufp->fullIData(oldp+48,(vlSymsp->TOP__test_top.__PVT__id_exe_inst_o),32);
    bufp->fullIData(oldp+49,(vlSymsp->TOP__test_top.__PVT__id_exe_inst_addr_o),32);
    bufp->fullCData(oldp+50,(vlSymsp->TOP__test_top.__PVT__exe_mem_reg_waddr_o),5);
    bufp->fullBit(oldp+51,(vlSymsp->TOP__test_top.__PVT__exe_mem_reg_we_o));
    bufp->fullIData(oldp+52,(vlSymsp->TOP__test_top.__PVT__exe_mem_reg_wdata_o),32);
    bufp->fullIData(oldp+53,(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_addr_o),32);
    bufp->fullIData(oldp+54,(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_data_o),32);
    bufp->fullBit(oldp+55,(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_we_o));
    bufp->fullCData(oldp+56,(vlSymsp->TOP__test_top.__PVT__exe_mem_mem_op_o),4);
    bufp->fullCData(oldp+57,(vlSymsp->TOP__test_top.__PVT__mem_wb_reg_waddr_o),5);
    bufp->fullBit(oldp+58,(vlSymsp->TOP__test_top.__PVT__mem_wb_reg_we_o));
    bufp->fullIData(oldp+59,(vlSymsp->TOP__test_top.__PVT__mem_wb_reg_wdata_o),32);
    bufp->fullCData(oldp+60,((0x7fU & vlSymsp->TOP__test_top.__PVT__id_exe_inst_o)),7);
    bufp->fullCData(oldp+61,((7U & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+62,((vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                              >> 0x19U)),7);
    bufp->fullBit(oldp+63,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__isType_r));
    bufp->fullIData(oldp+64,((((- (IData)((vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                           >> 0x1fU))) 
                               << 0xcU) | (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                           >> 0x14U))),32);
    bufp->fullIData(oldp+65,((((- (IData)((vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                           >> 0x1fU))) 
                               << 0xcU) | ((0xfe0U 
                                            & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                               >> 0x14U)) 
                                           | (0x1fU 
                                              & (vlSymsp->TOP__test_top.__PVT__id_exe_inst_o 
                                                 >> 7U))))),32);
    bufp->fullBit(oldp+66,(vlSymsp->TOP__test_top.__PVT__exe0__DOT__op1_eq_op2));
    bufp->fullCData(oldp+67,((0x7fU & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)),7);
    bufp->fullCData(oldp+68,((0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                       >> 7U))),5);
    bufp->fullCData(oldp+69,((0x1fU & ((0x2000U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                        ? (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                           >> 0xfU)
                                        : ((0x1000U 
                                            & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                            ? (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                               >> 0xfU)
                                            : (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                               >> 0xfU))))),5);
    bufp->fullCData(oldp+70,(((IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_r)
                               ? (0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                           >> 0xfU))
                               : 0U)),5);
    bufp->fullCData(oldp+71,(((IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_r)
                               ? (0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                           >> 0x14U))
                               : 0U)),5);
    bufp->fullBit(oldp+72,(vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_r));
    bufp->fullIData(oldp+73,(((0x2000U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                               ? (((- (IData)((vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                               >> 0x1fU))) 
                                   << 0xcU) | (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                               >> 0x14U))
                               : ((0x1000U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                   ? (0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                               >> 0x14U))
                                   : (((- (IData)((vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                   >> 0x1fU))) 
                                       << 0xcU) | (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                                   >> 0x14U))))),32);
    bufp->fullCData(oldp+74,((0x1fU & ((0x2000U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                        ? (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                           >> 7U) : 
                                       ((0x1000U & vlSymsp->TOP__test_top.__PVT__if_id_inst_o)
                                         ? (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                            >> 7U) : 
                                        (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                         >> 7U))))),5);
    bufp->fullCData(oldp+75,(((IData)(vlSymsp->TOP__test_top.__PVT__id0__DOT__inst_type_r__DOT__isType_r)
                               ? (0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                           >> 7U)) : 0U)),5);
    bufp->fullCData(oldp+76,((0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+77,((0x1fU & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+78,((7U & (vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+79,((vlSymsp->TOP__test_top.__PVT__if_id_inst_o 
                              >> 0x19U)),7);
    bufp->fullCData(oldp+80,((3U & vlSymsp->TOP__test_top.__PVT__exe_mem_mem_addr_o)),2);
    bufp->fullIData(oldp+81,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[0]),32);
    bufp->fullIData(oldp+82,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[1]),32);
    bufp->fullIData(oldp+83,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[2]),32);
    bufp->fullIData(oldp+84,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[3]),32);
    bufp->fullIData(oldp+85,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[4]),32);
    bufp->fullIData(oldp+86,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[5]),32);
    bufp->fullIData(oldp+87,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[6]),32);
    bufp->fullIData(oldp+88,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[7]),32);
    bufp->fullIData(oldp+89,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[8]),32);
    bufp->fullIData(oldp+90,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[9]),32);
    bufp->fullIData(oldp+91,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[10]),32);
    bufp->fullIData(oldp+92,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[11]),32);
    bufp->fullIData(oldp+93,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[12]),32);
    bufp->fullIData(oldp+94,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[13]),32);
    bufp->fullIData(oldp+95,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[14]),32);
    bufp->fullIData(oldp+96,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[15]),32);
    bufp->fullIData(oldp+97,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[16]),32);
    bufp->fullIData(oldp+98,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[17]),32);
    bufp->fullIData(oldp+99,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[18]),32);
    bufp->fullIData(oldp+100,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[19]),32);
    bufp->fullIData(oldp+101,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[20]),32);
    bufp->fullIData(oldp+102,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[21]),32);
    bufp->fullIData(oldp+103,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[22]),32);
    bufp->fullIData(oldp+104,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[23]),32);
    bufp->fullIData(oldp+105,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[24]),32);
    bufp->fullIData(oldp+106,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[25]),32);
    bufp->fullIData(oldp+107,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[26]),32);
    bufp->fullIData(oldp+108,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[27]),32);
    bufp->fullIData(oldp+109,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[28]),32);
    bufp->fullIData(oldp+110,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[29]),32);
    bufp->fullIData(oldp+111,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[30]),32);
    bufp->fullIData(oldp+112,(vlSymsp->TOP__test_top__regfile0.__PVT__regs[31]),32);
    bufp->fullIData(oldp+113,((0x1ffffcU & vlSymsp->TOP__test_top.__PVT__pc_wire)),21);
    bufp->fullBit(oldp+114,(vlSelf->rst_i));
    bufp->fullBit(oldp+115,(vlSelf->clk_i));
    bufp->fullBit(oldp+116,(vlSelf->halt_o));
    bufp->fullIData(oldp+117,(((IData)(vlSymsp->TOP__test_top.__PVT__ce_wire)
                                ? ((vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                    [(0x1ffffcU & vlSymsp->TOP__test_top.__PVT__pc_wire)] 
                                    << 0x18U) | ((vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                                  [
                                                  (0x1fffffU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      (0x1ffffcU 
                                                       & vlSymsp->TOP__test_top.__PVT__pc_wire)))] 
                                                  << 0x10U) 
                                                 | ((vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                                     [
                                                     (0x1fffffU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0x1ffffcU 
                                                          & vlSymsp->TOP__test_top.__PVT__pc_wire)))] 
                                                     << 8U) 
                                                    | vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                                    [
                                                    (0x1fffffU 
                                                     & ((IData)(3U) 
                                                        + 
                                                        (0x1ffffcU 
                                                         & vlSymsp->TOP__test_top.__PVT__pc_wire)))])))
                                : 0U)),32);
    bufp->fullCData(oldp+118,(0U),5);
    bufp->fullBit(oldp+119,(1U));
    bufp->fullBit(oldp+120,(0U));
    bufp->fullIData(oldp+121,(0x200000U),32);
    bufp->fullIData(oldp+122,(0x15U),32);
}

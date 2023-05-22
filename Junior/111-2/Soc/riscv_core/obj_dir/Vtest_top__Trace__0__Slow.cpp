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
    tracep->declBit(c+253,"clk_i", false,-1);
    tracep->declBit(c+254,"rst_i", false,-1);
    tracep->declBit(c+255,"halt_o", false,-1);
}

VL_ATTR_COLD void Vtest_top___024root__trace_init_sub__TOP__test_top__0(Vtest_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_top___024root__trace_init_sub__TOP__test_top__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+253,"clk_i", false,-1);
    tracep->declBit(c+254,"rst_i", false,-1);
    tracep->declBit(c+114,"halt_o", false,-1);
    tracep->declBus(c+261,"NrDevices", false,-1, 31,0);
    tracep->declBus(c+262,"NrHosts", false,-1, 31,0);
    tracep->declBus(c+263,"MemSize", false,-1, 31,0);
    tracep->declBus(c+264,"MemAddrWidth", false,-1, 31,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBit(c+10+i*1,"host_req", true,(i+0));
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBit(c+11+i*1,"host_gnt", true,(i+0));
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+15+i*1,"host_addr", true,(i+0), 31,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBit(c+16+i*1,"host_we", true,(i+0));
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+17+i*1,"host_wdata", true,(i+0), 31,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+18+i*1,"host_rdata", true,(i+0), 31,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+19+i*1,"device_req", true,(i+0));
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+21+i*1,"device_addr", true,(i+0), 31,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+23+i*1,"device_we", true,(i+0));
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+25+i*1,"device_wdata", true,(i+0), 31,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+27+i*1,"device_rdata", true,(i+0), 31,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+1+i*1,"cfg_device_addr_base", true,(i+0), 31,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+3+i*1,"cfg_device_addr_mask", true,(i+0), 31,0);
    }
    tracep->declBit(c+114,"halt_from_console", false,-1);
    tracep->declBit(c+115,"inst_ce_o", false,-1);
    tracep->declBus(c+116,"pc_o", false,-1, 31,0);
    tracep->declBus(c+256,"inst_o", false,-1, 31,0);
    tracep->pushNamePrefix("console0 ");
    tracep->declBit(c+265,"FlushOnChar", false,-1);
    tracep->declBit(c+253,"clk_i", false,-1);
    tracep->declBit(c+254,"rst_i", false,-1);
    tracep->declBit(c+29,"req_i", false,-1);
    tracep->declBit(c+30,"we_i", false,-1);
    tracep->declBus(c+31,"addr_i", false,-1, 31,0);
    tracep->declBus(c+32,"wdata_i", false,-1, 31,0);
    tracep->declBit(c+114,"halt_o", false,-1);
    tracep->declBus(c+266,"CHAR_OUT_ADDR", false,-1, 7,0);
    tracep->declBus(c+267,"SIM_CTRL_ADDR", false,-1, 7,0);
    tracep->declBus(c+33,"ctrl_addr", false,-1, 7,0);
    tracep->declBus(c+117,"sim_finish", false,-1, 2,0);
    tracep->declBus(c+118,"log_fd", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_bus ");
    tracep->declBus(c+268,"NrDevices", false,-1, 31,0);
    tracep->declBus(c+269,"NrHosts", false,-1, 31,0);
    tracep->declBus(c+270,"DataWidth", false,-1, 31,0);
    tracep->declBus(c+270,"AddressWidth", false,-1, 31,0);
    tracep->declBit(c+253,"clk_i", false,-1);
    tracep->declBit(c+254,"rst_i", false,-1);
    for (int i = 0; i < 1; ++i) {
        tracep->declBit(c+12+i*1,"host_req_i", true,(i+0));
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBit(c+13+i*1,"host_gnt_o", true,(i+0));
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+34+i*1,"host_addr_i", true,(i+0), 31,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBit(c+35+i*1,"host_we_i", true,(i+0));
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+36+i*1,"host_wdata_i", true,(i+0), 31,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+37+i*1,"host_rdata_o", true,(i+0), 31,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+38+i*1,"device_req_o", true,(i+0));
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+40+i*1,"device_addr_o", true,(i+0), 31,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+42+i*1,"device_we_o", true,(i+0));
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+44+i*1,"device_wdata_o", true,(i+0), 31,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+46+i*1,"device_rdata_i", true,(i+0), 31,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+5+i*1,"cfg_device_addr_base", true,(i+0), 31,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+7+i*1,"cfg_device_addr_mask", true,(i+0), 31,0);
    }
    tracep->declBus(c+269,"NumBitsHostSel", false,-1, 31,0);
    tracep->declBus(c+269,"NumBitsDeviceSel", false,-1, 31,0);
    tracep->declBus(c+14,"host_sel_req", false,-1, 0,0);
    tracep->declBus(c+257,"host_sel_resp", false,-1, 0,0);
    tracep->declBus(c+48,"device_sel_req", false,-1, 0,0);
    tracep->declBus(c+258,"device_sel_resp", false,-1, 0,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+271,"host", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+272,"device", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+272,"device", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->declBus(c+273,"host", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtest_top___024root__trace_init_sub__TOP__test_top__core_top0__0(Vtest_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_top___024root__trace_init_sub__TOP__test_top__core_top0__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+254,"rst_i", false,-1);
    tracep->declBit(c+253,"clk_i", false,-1);
    tracep->declBit(c+115,"rom_ce_o", false,-1);
    tracep->declBus(c+116,"rom_addr_o", false,-1, 31,0);
    tracep->declBus(c+256,"rom_data_i", false,-1, 31,0);
    tracep->declBit(c+259,"ram_ce_o", false,-1);
    tracep->declBus(c+49,"ram_addr_o", false,-1, 31,0);
    tracep->declBus(c+50,"ram_wdata_o", false,-1, 31,0);
    tracep->declBus(c+51,"ram_rdata_i", false,-1, 31,0);
    tracep->declBit(c+52,"ram_we_o", false,-1);
    tracep->declBus(c+116,"if_inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+256,"if_inst_o", false,-1, 31,0);
    tracep->declBus(c+51,"ram_data_o", false,-1, 31,0);
    tracep->declBit(c+53,"ctrl_flush_jump_o", false,-1);
    tracep->declBus(c+54,"ctrl_new_pc_o", false,-1, 31,0);
    tracep->declBus(c+55,"ctrl_stall_o", false,-1, 5,0);
    tracep->declBus(c+116,"pc_wire", false,-1, 31,0);
    tracep->declBit(c+115,"ce_wire", false,-1);
    tracep->declBus(c+119,"if_id_inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+120,"if_id_inst_o", false,-1, 31,0);
    tracep->declBus(c+56,"id_reg1_addr_o", false,-1, 4,0);
    tracep->declBus(c+57,"id_reg2_addr_o", false,-1, 4,0);
    tracep->declBit(c+58,"id_reg1_re_o", false,-1);
    tracep->declBit(c+59,"id_reg2_re_o", false,-1);
    tracep->declBus(c+60,"id_inst_o", false,-1, 31,0);
    tracep->declBus(c+61,"id_op1_o", false,-1, 31,0);
    tracep->declBus(c+62,"id_op2_o", false,-1, 31,0);
    tracep->declBit(c+63,"id_reg_we_o", false,-1);
    tracep->declBus(c+64,"id_reg_waddr_o", false,-1, 4,0);
    tracep->declBus(c+119,"id_inst_addr_o", false,-1, 31,0);
    tracep->declBit(c+121,"id_stallreq_o", false,-1);
    tracep->declBit(c+65,"id_csr_we_o", false,-1);
    tracep->declBus(c+66,"id_csr_addr_o", false,-1, 11,0);
    tracep->declBus(c+122,"id_exe_op1_o", false,-1, 31,0);
    tracep->declBus(c+123,"id_exe_op2_o", false,-1, 31,0);
    tracep->declBit(c+124,"id_exe_reg_we_o", false,-1);
    tracep->declBus(c+125,"id_exe_reg_waddr_o", false,-1, 4,0);
    tracep->declBus(c+126,"id_exe_inst_o", false,-1, 31,0);
    tracep->declBus(c+127,"id_exe_inst_addr_o", false,-1, 31,0);
    tracep->declBit(c+128,"id_exe_inst_is_load_o", false,-1);
    tracep->declBus(c+129,"id_exe_rd_o", false,-1, 4,0);
    tracep->declBit(c+130,"id_exe_csr_we_o", false,-1);
    tracep->declBus(c+131,"id_exe_csr_addr_o", false,-1, 11,0);
    tracep->declBus(c+67,"exe_reg_waddr_o", false,-1, 4,0);
    tracep->declBit(c+68,"exe_reg_we_o", false,-1);
    tracep->declBus(c+69,"exe_reg_wdata_o", false,-1, 31,0);
    tracep->declBus(c+70,"exe_mem_addr_o", false,-1, 31,0);
    tracep->declBit(c+71,"exe_mem_we_o", false,-1);
    tracep->declBus(c+72,"exe_mem_data_o", false,-1, 31,0);
    tracep->declBus(c+73,"exe_mem_op_o", false,-1, 3,0);
    tracep->declBit(c+74,"exe_stallreq_o", false,-1);
    tracep->declBit(c+53,"exe_jump_enable_o", false,-1);
    tracep->declBus(c+54,"exe_jump_addr_o", false,-1, 31,0);
    tracep->declBit(c+75,"exe_csr_we_o", false,-1);
    tracep->declBus(c+76,"exe_csr_waddr_o", false,-1, 11,0);
    tracep->declBus(c+77,"exe_csr_wdata_o", false,-1, 31,0);
    tracep->declBus(c+78,"exe_csr_raddr_o", false,-1, 11,0);
    tracep->declBus(c+132,"exe_mem_reg_waddr_o", false,-1, 4,0);
    tracep->declBit(c+133,"exe_mem_reg_we_o", false,-1);
    tracep->declBus(c+134,"exe_mem_reg_wdata_o", false,-1, 31,0);
    tracep->declBus(c+135,"exe_mem_mem_addr_o", false,-1, 31,0);
    tracep->declBit(c+136,"exe_mem_mem_we_o", false,-1);
    tracep->declBus(c+137,"exe_mem_mem_data_o", false,-1, 31,0);
    tracep->declBus(c+138,"exe_mem_mem_op_o", false,-1, 3,0);
    tracep->declBit(c+139,"exe_mem_csr_we_o", false,-1);
    tracep->declBus(c+140,"exe_mem_csr_waddr_o", false,-1, 11,0);
    tracep->declBus(c+141,"exe_mem_csr_wdata_o", false,-1, 31,0);
    tracep->declBus(c+79,"mem_reg_waddr_o", false,-1, 4,0);
    tracep->declBit(c+80,"mem_reg_we_o", false,-1);
    tracep->declBus(c+81,"mem_reg_wdata_o", false,-1, 31,0);
    tracep->declBus(c+49,"mem_mem_addr_o", false,-1, 31,0);
    tracep->declBit(c+52,"mem_mem_we_o", false,-1);
    tracep->declBus(c+50,"mem_mem_data_o", false,-1, 31,0);
    tracep->declBit(c+259,"mem_mem_ce_o", false,-1);
    tracep->declBit(c+82,"mem_csr_we_o", false,-1);
    tracep->declBus(c+83,"mem_csr_waddr_o", false,-1, 11,0);
    tracep->declBus(c+84,"mem_csr_wdata_o", false,-1, 31,0);
    tracep->declBus(c+142,"mem_wb_reg_waddr_o", false,-1, 4,0);
    tracep->declBit(c+143,"mem_wb_reg_we_o", false,-1);
    tracep->declBus(c+144,"mem_wb_reg_wdata_o", false,-1, 31,0);
    tracep->declBit(c+145,"mem_wb_csr_we_o", false,-1);
    tracep->declBus(c+146,"mem_wb_csr_waddr_o", false,-1, 11,0);
    tracep->declBus(c+147,"mem_wb_csr_wdata_o", false,-1, 31,0);
    tracep->declBit(c+148,"mem_wb_instret_incr_o", false,-1);
    tracep->declBus(c+85,"reg1_data_o", false,-1, 31,0);
    tracep->declBus(c+86,"reg2_data_o", false,-1, 31,0);
    tracep->declBus(c+87,"csr_file_csr_rdata_o", false,-1, 31,0);
    tracep->pushNamePrefix("csr0 ");
    tracep->declBit(c+253,"clk_i", false,-1);
    tracep->declBit(c+254,"rst_i", false,-1);
    tracep->declBus(c+78,"raddr_i", false,-1, 11,0);
    tracep->declBus(c+87,"rdata_o", false,-1, 31,0);
    tracep->declBit(c+145,"we_i", false,-1);
    tracep->declBus(c+146,"waddr_i", false,-1, 11,0);
    tracep->declBus(c+147,"wdata_i", false,-1, 31,0);
    tracep->declBit(c+148,"instret_incr_i", false,-1);
    tracep->declBus(c+274,"CSR_MVENDORID_VALUE", false,-1, 31,0);
    tracep->declBus(c+275,"CSR_MARCHID_VALUE", false,-1, 31,0);
    tracep->declBus(c+274,"CSR_MIMPID_VALUE", false,-1, 31,0);
    tracep->declBus(c+274,"CSR_MHARTID", false,-1, 31,0);
    tracep->declBus(c+276,"mxl", false,-1, 1,0);
    tracep->declBus(c+277,"mextensions", false,-1, 25,0);
    tracep->declBus(c+278,"misa", false,-1, 31,0);
    tracep->declQuad(c+149,"mcycle", false,-1, 63,0);
    tracep->declQuad(c+151,"minstret", false,-1, 63,0);
    tracep->declBus(c+153,"mstatus", false,-1, 31,0);
    tracep->declBit(c+154,"w_mstatus", false,-1);
    tracep->declBus(c+279,"mie", false,-1, 31,0);
    tracep->declBus(c+280,"mtvec", false,-1, 31,0);
    tracep->declBus(c+281,"mscratch", false,-1, 31,0);
    tracep->declBus(c+282,"mepc", false,-1, 31,0);
    tracep->declBus(c+283,"mcause", false,-1, 31,0);
    tracep->declBus(c+284,"mip", false,-1, 31,0);
    tracep->declBus(c+285,"mtval", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ctrl0 ");
    tracep->declBit(c+254,"rst_i", false,-1);
    tracep->declBit(c+121,"stallreq_from_id_i", false,-1);
    tracep->declBit(c+74,"stallreq_from_exe_i", false,-1);
    tracep->declBit(c+53,"jump_enable_i", false,-1);
    tracep->declBus(c+54,"jump_addr_i", false,-1, 31,0);
    tracep->declBus(c+55,"stall_o", false,-1, 5,0);
    tracep->declBit(c+53,"flush_jump_o", false,-1);
    tracep->declBus(c+54,"new_pc_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe0 ");
    tracep->declBit(c+254,"rst_i", false,-1);
    tracep->declBit(c+253,"clk_i", false,-1);
    tracep->declBus(c+122,"op1_i", false,-1, 31,0);
    tracep->declBus(c+123,"op2_i", false,-1, 31,0);
    tracep->declBit(c+124,"reg_we_i", false,-1);
    tracep->declBus(c+125,"reg_waddr_i", false,-1, 4,0);
    tracep->declBus(c+126,"inst_i", false,-1, 31,0);
    tracep->declBus(c+127,"inst_addr_i", false,-1, 31,0);
    tracep->declBit(c+130,"csr_we_i", false,-1);
    tracep->declBus(c+131,"csr_addr_i", false,-1, 11,0);
    tracep->declBus(c+87,"csr_rdata_i", false,-1, 31,0);
    tracep->declBus(c+78,"csr_raddr_o", false,-1, 11,0);
    tracep->declBus(c+67,"reg_waddr_o", false,-1, 4,0);
    tracep->declBit(c+68,"reg_we_o", false,-1);
    tracep->declBus(c+69,"reg_wdata_o", false,-1, 31,0);
    tracep->declBus(c+70,"mem_addr_o", false,-1, 31,0);
    tracep->declBus(c+72,"mem_data_o", false,-1, 31,0);
    tracep->declBit(c+71,"mem_we_o", false,-1);
    tracep->declBus(c+73,"mem_op_o", false,-1, 3,0);
    tracep->declBus(c+77,"csr_wdata_o", false,-1, 31,0);
    tracep->declBus(c+76,"csr_waddr_o", false,-1, 11,0);
    tracep->declBit(c+75,"csr_we_o", false,-1);
    tracep->declBit(c+74,"stallreq_o", false,-1);
    tracep->declBus(c+54,"jump_addr_o", false,-1, 31,0);
    tracep->declBit(c+53,"jump_enable_o", false,-1);
    tracep->declBit(c+82,"mem_csr_we_i", false,-1);
    tracep->declBus(c+83,"mem_csr_waddr_i", false,-1, 11,0);
    tracep->declBus(c+84,"mem_csr_wdata_i", false,-1, 31,0);
    tracep->declBus(c+155,"opcode", false,-1, 6,0);
    tracep->declBus(c+156,"funct3", false,-1, 2,0);
    tracep->declBus(c+157,"funct7", false,-1, 6,0);
    tracep->declBit(c+158,"isType_r", false,-1);
    tracep->declBit(c+159,"isType_m", false,-1);
    tracep->declBus(c+160,"load_addr_offset", false,-1, 31,0);
    tracep->declBus(c+161,"store_addr_offset", false,-1, 31,0);
    tracep->declBit(c+162,"op1_eq_op2", false,-1);
    tracep->declBus(c+127,"pc", false,-1, 31,0);
    tracep->declBus(c+88,"a_o", false,-1, 31,0);
    tracep->declBus(c+89,"b_o", false,-1, 31,0);
    tracep->declBus(c+163,"div_result_i", false,-1, 31,0);
    tracep->declBit(c+90,"mult_req_o", false,-1);
    tracep->declBit(c+91,"div_req_o", false,-1);
    tracep->declBit(c+164,"mult_ready_i", false,-1);
    tracep->declBit(c+165,"div_ready_i", false,-1);
    tracep->declBit(c+92,"is_div_q_i", false,-1);
    tracep->declQuad(c+166,"mult_result_i", false,-1, 63,0);
    tracep->declBit(c+168,"is_a_neg", false,-1);
    tracep->declBit(c+169,"is_b_neg", false,-1);
    tracep->declBit(c+170,"signed_adjust", false,-1);
    tracep->declQuad(c+93,"invert_result", false,-1, 63,0);
    tracep->declBus(c+95,"invert_result_div", false,-1, 31,0);
    tracep->declBus(c+96,"csr_rdata", false,-1, 31,0);
    tracep->pushNamePrefix("div0 ");
    tracep->declBus(c+270,"XLEN", false,-1, 31,0);
    tracep->declBit(c+253,"clk_i", false,-1);
    tracep->declBit(c+254,"rst_i", false,-1);
    tracep->declBus(c+88,"a_i", false,-1, 31,0);
    tracep->declBus(c+89,"b_i", false,-1, 31,0);
    tracep->declBit(c+91,"req_i", false,-1);
    tracep->declBit(c+92,"is_q_i", false,-1);
    tracep->declBus(c+163,"result_o", false,-1, 31,0);
    tracep->declBit(c+165,"ready_o", false,-1);
    tracep->declBit(c+97,"is_a_zero", false,-1);
    tracep->declBit(c+98,"is_b_zero", false,-1);
    tracep->declBus(c+88,"op_a", false,-1, 31,0);
    tracep->declBus(c+89,"op_b", false,-1, 31,0);
    tracep->declBit(c+171,"is_calc_done", false,-1);
    tracep->declBus(c+172,"reg32", false,-1, 31,0);
    tracep->declArray(c+173,"result", false,-1, 64,0);
    tracep->declBus(c+176,"cnt", false,-1, 5,0);
    tracep->declBus(c+177,"quotient", false,-1, 31,0);
    tracep->declBus(c+178,"remainder", false,-1, 31,0);
    tracep->declBus(c+286,"S_IDLE", false,-1, 2,0);
    tracep->declBus(c+287,"S_CALC", false,-1, 2,0);
    tracep->declBus(c+288,"S_DONE", false,-1, 2,0);
    tracep->declBus(c+179,"S", false,-1, 2,0);
    tracep->declBus(c+99,"S_next", false,-1, 2,0);
    tracep->declBit(c+180,"div_sub", false,-1);
    tracep->declQuad(c+181,"sub_tmp", false,-1, 32,0);
    tracep->declArray(c+183,"result_tmp", false,-1, 64,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mul0 ");
    tracep->declBus(c+270,"XLEN", false,-1, 31,0);
    tracep->declBit(c+253,"clk_i", false,-1);
    tracep->declBit(c+254,"rst_i", false,-1);
    tracep->declBus(c+88,"a_i", false,-1, 31,0);
    tracep->declBus(c+89,"b_i", false,-1, 31,0);
    tracep->declBit(c+90,"req_i", false,-1);
    tracep->declBit(c+164,"ready_o", false,-1);
    tracep->declQuad(c+166,"result_o", false,-1, 63,0);
    tracep->declBit(c+100,"is_a_zero", false,-1);
    tracep->declBit(c+101,"is_b_zero", false,-1);
    tracep->declBus(c+88,"op_a", false,-1, 31,0);
    tracep->declBus(c+89,"op_b", false,-1, 31,0);
    tracep->declBit(c+186,"is_calc_done", false,-1);
    tracep->declBus(c+187,"reg32", false,-1, 31,0);
    tracep->declArray(c+188,"result", false,-1, 64,0);
    tracep->declBus(c+191,"cnt", false,-1, 5,0);
    tracep->declBus(c+286,"S_IDLE", false,-1, 2,0);
    tracep->declBus(c+287,"S_CALC", false,-1, 2,0);
    tracep->declBus(c+288,"S_DONE", false,-1, 2,0);
    tracep->declBus(c+192,"S", false,-1, 2,0);
    tracep->declBus(c+102,"S_nxt", false,-1, 2,0);
    tracep->declBit(c+193,"mul_add", false,-1);
    tracep->declBus(c+187,"adder_opa", false,-1, 31,0);
    tracep->declBus(c+194,"adder_opb", false,-1, 31,0);
    tracep->declQuad(c+195,"adder_tmp", false,-1, 32,0);
    tracep->declArray(c+197,"result_tmp", false,-1, 64,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("exe_mem0 ");
    tracep->declBit(c+254,"rst_i", false,-1);
    tracep->declBit(c+253,"clk_i", false,-1);
    tracep->declBus(c+67,"reg_waddr_i", false,-1, 4,0);
    tracep->declBit(c+68,"reg_we_i", false,-1);
    tracep->declBus(c+69,"reg_wdata_i", false,-1, 31,0);
    tracep->declBus(c+70,"mem_addr_i", false,-1, 31,0);
    tracep->declBus(c+72,"mem_data_i", false,-1, 31,0);
    tracep->declBit(c+71,"mem_we_i", false,-1);
    tracep->declBus(c+73,"mem_op_i", false,-1, 3,0);
    tracep->declBus(c+132,"reg_waddr_o", false,-1, 4,0);
    tracep->declBit(c+133,"reg_we_o", false,-1);
    tracep->declBus(c+134,"reg_wdata_o", false,-1, 31,0);
    tracep->declBus(c+135,"mem_addr_o", false,-1, 31,0);
    tracep->declBus(c+137,"mem_data_o", false,-1, 31,0);
    tracep->declBit(c+136,"mem_we_o", false,-1);
    tracep->declBus(c+138,"mem_op_o", false,-1, 3,0);
    tracep->declBit(c+75,"csr_we_i", false,-1);
    tracep->declBus(c+103,"csr_waddr_i", false,-1, 31,0);
    tracep->declBus(c+77,"csr_wdata_i", false,-1, 31,0);
    tracep->declBit(c+139,"csr_we_o", false,-1);
    tracep->declBus(c+200,"csr_waddr_o", false,-1, 31,0);
    tracep->declBus(c+141,"csr_wdata_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id0 ");
    tracep->declBit(c+254,"rst_i", false,-1);
    tracep->declBus(c+119,"inst_addr_i", false,-1, 31,0);
    tracep->declBus(c+120,"inst_i", false,-1, 31,0);
    tracep->declBus(c+85,"reg1_rdata_i", false,-1, 31,0);
    tracep->declBus(c+86,"reg2_rdata_i", false,-1, 31,0);
    tracep->declBus(c+129,"exe_rd_i", false,-1, 4,0);
    tracep->declBit(c+128,"pre_inst_is_load_i", false,-1);
    tracep->declBit(c+121,"stallreq_o", false,-1);
    tracep->declBus(c+56,"reg1_raddr_o", false,-1, 4,0);
    tracep->declBus(c+57,"reg2_raddr_o", false,-1, 4,0);
    tracep->declBit(c+58,"reg1_re_o", false,-1);
    tracep->declBit(c+59,"reg2_re_o", false,-1);
    tracep->declBus(c+60,"inst_o", false,-1, 31,0);
    tracep->declBus(c+119,"inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+61,"op1_o", false,-1, 31,0);
    tracep->declBus(c+62,"op2_o", false,-1, 31,0);
    tracep->declBit(c+63,"reg_we_o", false,-1);
    tracep->declBus(c+64,"reg_waddr_o", false,-1, 4,0);
    tracep->declBus(c+67,"exe_reg_waddr_i", false,-1, 4,0);
    tracep->declBus(c+69,"exe_reg_wdata_i", false,-1, 31,0);
    tracep->declBit(c+68,"exe_reg_we_i", false,-1);
    tracep->declBus(c+79,"mem_reg_waddr_i", false,-1, 4,0);
    tracep->declBus(c+81,"mem_reg_wdata_i", false,-1, 31,0);
    tracep->declBit(c+80,"mem_reg_we_i", false,-1);
    tracep->declBit(c+65,"csr_we_o", false,-1);
    tracep->declBus(c+66,"csr_addr_o", false,-1, 11,0);
    tracep->declBus(c+104,"op1_o_final", false,-1, 31,0);
    tracep->declBus(c+105,"op2_o_final", false,-1, 31,0);
    tracep->declBus(c+201,"opcode", false,-1, 6,0);
    tracep->declBus(c+202,"rd", false,-1, 4,0);
    tracep->declBus(c+203,"i_reg1_raddr_o", false,-1, 4,0);
    tracep->declBus(c+204,"r_reg1_raddr_o", false,-1, 4,0);
    tracep->declBus(c+289,"i_reg2_raddr_o", false,-1, 4,0);
    tracep->declBus(c+205,"r_reg2_raddr_o", false,-1, 4,0);
    tracep->declBit(c+290,"i_reg1_re_o", false,-1);
    tracep->declBit(c+206,"r_reg1_re_o", false,-1);
    tracep->declBit(c+291,"i_reg2_re_o", false,-1);
    tracep->declBit(c+207,"r_reg2_re_o", false,-1);
    tracep->declBus(c+85,"i_op1_o", false,-1, 31,0);
    tracep->declBus(c+106,"r_op1_o", false,-1, 31,0);
    tracep->declBus(c+208,"i_op2_o", false,-1, 31,0);
    tracep->declBus(c+107,"r_op2_o", false,-1, 31,0);
    tracep->declBit(c+290,"i_reg_we_o", false,-1);
    tracep->declBit(c+209,"r_reg_we_o", false,-1);
    tracep->declBus(c+210,"i_reg_waddr_o", false,-1, 4,0);
    tracep->declBus(c+211,"r_reg_waddr_o", false,-1, 4,0);
    tracep->declBus(c+212,"rs1", false,-1, 4,0);
    tracep->declBus(c+213,"rs2", false,-1, 4,0);
    tracep->declBit(c+121,"is_load_hazard", false,-1);
    tracep->pushNamePrefix("inst_type_i ");
    tracep->declBus(c+120,"inst_i", false,-1, 31,0);
    tracep->declBus(c+85,"reg1_rdata_i", false,-1, 31,0);
    tracep->declBus(c+86,"reg2_rdata_i", false,-1, 31,0);
    tracep->declBus(c+203,"reg1_raddr_o", false,-1, 4,0);
    tracep->declBus(c+289,"reg2_raddr_o", false,-1, 4,0);
    tracep->declBit(c+290,"reg1_re_o", false,-1);
    tracep->declBit(c+291,"reg2_re_o", false,-1);
    tracep->declBus(c+85,"op1_o", false,-1, 31,0);
    tracep->declBus(c+208,"op2_o", false,-1, 31,0);
    tracep->declBit(c+290,"reg_we_o", false,-1);
    tracep->declBus(c+210,"reg_waddr_o", false,-1, 4,0);
    tracep->declBus(c+214,"funct3", false,-1, 2,0);
    tracep->declBus(c+202,"rd", false,-1, 4,0);
    tracep->declBus(c+212,"rs1", false,-1, 4,0);
    tracep->declBus(c+213,"rs2", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("inst_type_r ");
    tracep->declBus(c+120,"inst_i", false,-1, 31,0);
    tracep->declBus(c+85,"reg1_rdata_i", false,-1, 31,0);
    tracep->declBus(c+86,"reg2_rdata_i", false,-1, 31,0);
    tracep->declBus(c+204,"reg1_raddr_o", false,-1, 4,0);
    tracep->declBus(c+205,"reg2_raddr_o", false,-1, 4,0);
    tracep->declBit(c+206,"reg1_re_o", false,-1);
    tracep->declBit(c+207,"reg2_re_o", false,-1);
    tracep->declBus(c+106,"op1_o", false,-1, 31,0);
    tracep->declBus(c+107,"op2_o", false,-1, 31,0);
    tracep->declBit(c+209,"reg_we_o", false,-1);
    tracep->declBus(c+211,"reg_waddr_o", false,-1, 4,0);
    tracep->declBus(c+201,"opcode", false,-1, 6,0);
    tracep->declBus(c+214,"funct3", false,-1, 2,0);
    tracep->declBus(c+215,"funct7", false,-1, 6,0);
    tracep->declBus(c+213,"shamt", false,-1, 4,0);
    tracep->declBus(c+202,"rd", false,-1, 4,0);
    tracep->declBus(c+212,"rs1", false,-1, 4,0);
    tracep->declBus(c+213,"rs2", false,-1, 4,0);
    tracep->declBit(c+216,"isType_r", false,-1);
    tracep->declBit(c+217,"isType_m", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("id_exe0 ");
    tracep->declBit(c+254,"rst_i", false,-1);
    tracep->declBit(c+253,"clk_i", false,-1);
    tracep->declBus(c+55,"stall_i", false,-1, 5,0);
    tracep->declBit(c+53,"flush_jump_i", false,-1);
    tracep->declBus(c+61,"op1_i", false,-1, 31,0);
    tracep->declBus(c+62,"op2_i", false,-1, 31,0);
    tracep->declBit(c+63,"reg_we_i", false,-1);
    tracep->declBus(c+64,"reg_waddr_i", false,-1, 4,0);
    tracep->declBus(c+60,"inst_i", false,-1, 31,0);
    tracep->declBus(c+119,"inst_addr_i", false,-1, 31,0);
    tracep->declBus(c+122,"op1_o", false,-1, 31,0);
    tracep->declBus(c+123,"op2_o", false,-1, 31,0);
    tracep->declBit(c+124,"reg_we_o", false,-1);
    tracep->declBus(c+125,"reg_waddr_o", false,-1, 4,0);
    tracep->declBus(c+126,"inst_o", false,-1, 31,0);
    tracep->declBit(c+128,"inst_is_load_o", false,-1);
    tracep->declBus(c+129,"rd_o", false,-1, 4,0);
    tracep->declBus(c+127,"inst_addr_o", false,-1, 31,0);
    tracep->declBit(c+65,"csr_we_i", false,-1);
    tracep->declBus(c+66,"csr_addr_i", false,-1, 11,0);
    tracep->declBit(c+130,"csr_we_o", false,-1);
    tracep->declBus(c+131,"csr_addr_o", false,-1, 11,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if_id0 ");
    tracep->declBit(c+253,"clk_i", false,-1);
    tracep->declBit(c+254,"rst_i", false,-1);
    tracep->declBus(c+55,"stall_i", false,-1, 5,0);
    tracep->declBit(c+53,"flush_jump_i", false,-1);
    tracep->declBus(c+116,"inst_addr_i", false,-1, 31,0);
    tracep->declBus(c+256,"inst_i", false,-1, 31,0);
    tracep->declBus(c+119,"inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+120,"inst_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem0 ");
    tracep->declBit(c+253,"clk_i", false,-1);
    tracep->declBit(c+254,"rst_i", false,-1);
    tracep->declBus(c+132,"reg_waddr_i", false,-1, 4,0);
    tracep->declBit(c+133,"reg_we_i", false,-1);
    tracep->declBus(c+134,"reg_wdata_i", false,-1, 31,0);
    tracep->declBus(c+51,"ram_data_i", false,-1, 31,0);
    tracep->declBit(c+136,"mem_we_i", false,-1);
    tracep->declBus(c+135,"mem_addr_i", false,-1, 31,0);
    tracep->declBus(c+137,"mem_data_i", false,-1, 31,0);
    tracep->declBus(c+138,"mem_op_i", false,-1, 3,0);
    tracep->declBus(c+49,"ram_addr_o", false,-1, 31,0);
    tracep->declBit(c+52,"ram_w_request_o", false,-1);
    tracep->declBus(c+50,"ram_data_o", false,-1, 31,0);
    tracep->declBit(c+259,"ram_ce_o", false,-1);
    tracep->declBus(c+79,"reg_waddr_o", false,-1, 4,0);
    tracep->declBit(c+80,"reg_we_o", false,-1);
    tracep->declBus(c+81,"reg_wdata_o", false,-1, 31,0);
    tracep->declBit(c+139,"csr_we_i", false,-1);
    tracep->declBus(c+218,"csr_waddr_i", false,-1, 31,0);
    tracep->declBus(c+141,"csr_wdata_i", false,-1, 31,0);
    tracep->declBit(c+82,"csr_we_o", false,-1);
    tracep->declBus(c+108,"csr_waddr_o", false,-1, 31,0);
    tracep->declBus(c+84,"csr_wdata_o", false,-1, 31,0);
    tracep->declBus(c+219,"ram_addr_offset", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_wb0 ");
    tracep->declBit(c+254,"rst_i", false,-1);
    tracep->declBit(c+253,"clk_i", false,-1);
    tracep->declBus(c+79,"reg_waddr_i", false,-1, 4,0);
    tracep->declBit(c+80,"reg_we_i", false,-1);
    tracep->declBus(c+81,"reg_wdata_i", false,-1, 31,0);
    tracep->declBus(c+142,"reg_waddr_o", false,-1, 4,0);
    tracep->declBit(c+143,"reg_we_o", false,-1);
    tracep->declBus(c+144,"reg_wdata_o", false,-1, 31,0);
    tracep->declBit(c+82,"csr_we_i", false,-1);
    tracep->declBus(c+83,"csr_waddr_i", false,-1, 11,0);
    tracep->declBus(c+84,"csr_wdata_i", false,-1, 31,0);
    tracep->declBit(c+145,"csr_we_o", false,-1);
    tracep->declBus(c+146,"csr_waddr_o", false,-1, 11,0);
    tracep->declBus(c+147,"csr_wdata_o", false,-1, 31,0);
    tracep->declBit(c+148,"instret_incr_o", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc_reg0 ");
    tracep->declBit(c+253,"clk_i", false,-1);
    tracep->declBit(c+254,"rst_i", false,-1);
    tracep->declBus(c+55,"stall_i", false,-1, 5,0);
    tracep->declBit(c+53,"flush_jump_i", false,-1);
    tracep->declBus(c+54,"new_pc_i", false,-1, 31,0);
    tracep->declBus(c+116,"pc_o", false,-1, 31,0);
    tracep->declBit(c+115,"ce_o", false,-1);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vtest_top___024root__trace_init_sub__TOP__test_top__data_ram0__0(Vtest_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_top___024root__trace_init_sub__TOP__test_top__data_ram0__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+292,"RAM_SIZE", false,-1, 31,0);
    tracep->declBus(c+293,"RAM_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBit(c+253,"clk_i", false,-1);
    tracep->declBit(c+109,"ce_i", false,-1);
    tracep->declBus(c+110,"addr_i", false,-1, 31,0);
    tracep->declBit(c+111,"we_i", false,-1);
    tracep->declBus(c+112,"data_i", false,-1, 31,0);
    tracep->declBus(c+260,"data_o", false,-1, 31,0);
    tracep->declBit(c+115,"inst_ce_i", false,-1);
    tracep->declBus(c+116,"pc_i", false,-1, 31,0);
    tracep->declBus(c+256,"inst_o", false,-1, 31,0);
    tracep->declBus(c+113,"addr4", false,-1, 20,0);
    tracep->declBus(c+220,"rom_addr4", false,-1, 20,0);
}

VL_ATTR_COLD void Vtest_top___024root__trace_init_sub__TOP__test_top__core_top0__regfile0__0(Vtest_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_top___024root__trace_init_sub__TOP__test_top__core_top0__regfile0__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+253,"clk_i", false,-1);
    tracep->declBit(c+254,"rst_i", false,-1);
    tracep->declBit(c+143,"we_i", false,-1);
    tracep->declBus(c+142,"waddr_i", false,-1, 4,0);
    tracep->declBus(c+144,"wdata_i", false,-1, 31,0);
    tracep->declBit(c+58,"re1_i", false,-1);
    tracep->declBus(c+56,"raddr1_i", false,-1, 4,0);
    tracep->declBit(c+59,"re2_i", false,-1);
    tracep->declBus(c+57,"raddr2_i", false,-1, 4,0);
    tracep->declBus(c+85,"rdata1_o", false,-1, 31,0);
    tracep->declBus(c+86,"rdata2_o", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+221+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->declBus(c+9,"i", false,-1, 31,0);
}

VL_ATTR_COLD void Vtest_top___024root__trace_init_top(Vtest_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_top___024root__trace_init_top\n"); );
    // Body
    Vtest_top___024root__trace_init_sub__TOP__0(vlSelf, tracep);
    tracep->pushNamePrefix("test_top ");
    Vtest_top___024root__trace_init_sub__TOP__test_top__0(vlSelf, tracep);
    tracep->pushNamePrefix("core_top0 ");
    Vtest_top___024root__trace_init_sub__TOP__test_top__core_top0__0(vlSelf, tracep);
    tracep->pushNamePrefix("regfile0 ");
    Vtest_top___024root__trace_init_sub__TOP__test_top__core_top0__regfile0__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("data_ram0 ");
    Vtest_top___024root__trace_init_sub__TOP__test_top__data_ram0__0(vlSelf, tracep);
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
    VlWide<3>/*95:0*/ __Vtemp_h9e2dce8b__0;
    VlWide<3>/*95:0*/ __Vtemp_h4ceb91ff__0;
    // Body
    bufp->fullIData(oldp+1,(vlSymsp->TOP__test_top.__PVT__cfg_device_addr_base[0]),32);
    bufp->fullIData(oldp+2,(vlSymsp->TOP__test_top.__PVT__cfg_device_addr_base[1]),32);
    bufp->fullIData(oldp+3,(vlSymsp->TOP__test_top.__PVT__cfg_device_addr_mask[0]),32);
    bufp->fullIData(oldp+4,(vlSymsp->TOP__test_top.__PVT__cfg_device_addr_mask[1]),32);
    bufp->fullIData(oldp+5,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__cfg_device_addr_base[0]),32);
    bufp->fullIData(oldp+6,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__cfg_device_addr_base[1]),32);
    bufp->fullIData(oldp+7,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__cfg_device_addr_mask[0]),32);
    bufp->fullIData(oldp+8,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__cfg_device_addr_mask[1]),32);
    bufp->fullIData(oldp+9,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__i),32);
    bufp->fullBit(oldp+10,(vlSymsp->TOP__test_top.__PVT__host_req[0]));
    bufp->fullBit(oldp+11,(vlSymsp->TOP__test_top.__PVT__host_gnt[0]));
    bufp->fullBit(oldp+12,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_req_i[0]));
    bufp->fullBit(oldp+13,(vlSymsp->TOP__test_top.__Vcellout__u_bus__host_gnt_o[0]));
    bufp->fullBit(oldp+14,(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req));
    bufp->fullIData(oldp+15,(vlSymsp->TOP__test_top.__PVT__host_addr[0]),32);
    bufp->fullBit(oldp+16,(vlSymsp->TOP__test_top.__PVT__host_we[0]));
    bufp->fullIData(oldp+17,(vlSymsp->TOP__test_top.__PVT__host_wdata[0]),32);
    bufp->fullIData(oldp+18,(vlSymsp->TOP__test_top.__PVT__host_rdata[0]),32);
    bufp->fullBit(oldp+19,(vlSymsp->TOP__test_top.__PVT__device_req[0]));
    bufp->fullBit(oldp+20,(vlSymsp->TOP__test_top.__PVT__device_req[1]));
    bufp->fullIData(oldp+21,(vlSymsp->TOP__test_top.__PVT__device_addr[0]),32);
    bufp->fullIData(oldp+22,(vlSymsp->TOP__test_top.__PVT__device_addr[1]),32);
    bufp->fullBit(oldp+23,(vlSymsp->TOP__test_top.__PVT__device_we[0]));
    bufp->fullBit(oldp+24,(vlSymsp->TOP__test_top.__PVT__device_we[1]));
    bufp->fullIData(oldp+25,(vlSymsp->TOP__test_top.__PVT__device_wdata[0]),32);
    bufp->fullIData(oldp+26,(vlSymsp->TOP__test_top.__PVT__device_wdata[1]),32);
    bufp->fullIData(oldp+27,(vlSymsp->TOP__test_top.__PVT__device_rdata[0]),32);
    bufp->fullIData(oldp+28,(vlSymsp->TOP__test_top.__PVT__device_rdata[1]),32);
    bufp->fullBit(oldp+29,(vlSymsp->TOP__test_top.__PVT__device_req
                           [1U]));
    bufp->fullBit(oldp+30,(vlSymsp->TOP__test_top.__PVT__device_we
                           [1U]));
    bufp->fullIData(oldp+31,(vlSymsp->TOP__test_top.__PVT__device_addr
                             [1U]),32);
    bufp->fullIData(oldp+32,(vlSymsp->TOP__test_top.__PVT__device_wdata
                             [1U]),32);
    bufp->fullCData(oldp+33,((0xffU & vlSymsp->TOP__test_top.__PVT__device_addr
                              [1U])),8);
    bufp->fullIData(oldp+34,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_addr_i[0]),32);
    bufp->fullBit(oldp+35,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_we_i[0]));
    bufp->fullIData(oldp+36,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_wdata_i[0]),32);
    bufp->fullIData(oldp+37,(vlSymsp->TOP__test_top.__Vcellout__u_bus__host_rdata_o[0]),32);
    bufp->fullBit(oldp+38,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_req_o[0]));
    bufp->fullBit(oldp+39,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_req_o[1]));
    bufp->fullIData(oldp+40,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_addr_o[0]),32);
    bufp->fullIData(oldp+41,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_addr_o[1]),32);
    bufp->fullBit(oldp+42,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_we_o[0]));
    bufp->fullBit(oldp+43,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_we_o[1]));
    bufp->fullIData(oldp+44,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_wdata_o[0]),32);
    bufp->fullIData(oldp+45,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_wdata_o[1]),32);
    bufp->fullIData(oldp+46,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__device_rdata_i[0]),32);
    bufp->fullIData(oldp+47,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__device_rdata_i[1]),32);
    bufp->fullBit(oldp+48,(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__device_sel_req));
    bufp->fullIData(oldp+49,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_mem_addr_o),32);
    bufp->fullIData(oldp+50,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_mem_data_o),32);
    bufp->fullIData(oldp+51,(vlSymsp->TOP__test_top.__PVT__host_rdata
                             [0U]),32);
    bufp->fullBit(oldp+52,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_mem_we_o));
    bufp->fullBit(oldp+53,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_enable_o));
    bufp->fullIData(oldp+54,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_addr_o),32);
    bufp->fullCData(oldp+55,(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o),6);
    bufp->fullCData(oldp+56,(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_addr_o),5);
    bufp->fullCData(oldp+57,(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_addr_o),5);
    bufp->fullBit(oldp+58,(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_re_o));
    bufp->fullBit(oldp+59,(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_re_o));
    bufp->fullIData(oldp+60,(vlSymsp->TOP__test_top__core_top0.__PVT__id_inst_o),32);
    bufp->fullIData(oldp+61,((((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_re_o) 
                                 & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_we_o)) 
                                & (0U != (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_addr_o))) 
                               & ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_waddr_o) 
                                  == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_addr_o)))
                               ? vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_wdata_o
                               : (((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_re_o) 
                                     & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_reg_we_o)) 
                                    & (0U != (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_addr_o))) 
                                   & ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_reg_waddr_o) 
                                      == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_addr_o)))
                                   ? vlSymsp->TOP__test_top__core_top0.__PVT__mem_reg_wdata_o
                                   : vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__op1_o_final))),32);
    bufp->fullIData(oldp+62,((((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_re_o) 
                                 & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_we_o)) 
                                & (0U != (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_addr_o))) 
                               & ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_waddr_o) 
                                  == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_addr_o)))
                               ? vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_wdata_o
                               : (((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_re_o) 
                                     & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_reg_we_o)) 
                                    & (0U != (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_addr_o))) 
                                   & ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_reg_waddr_o) 
                                      == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_addr_o)))
                                   ? vlSymsp->TOP__test_top__core_top0.__PVT__mem_reg_wdata_o
                                   : vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__op2_o_final))),32);
    bufp->fullBit(oldp+63,(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg_we_o));
    bufp->fullCData(oldp+64,(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg_waddr_o),5);
    bufp->fullBit(oldp+65,(vlSymsp->TOP__test_top__core_top0.__PVT__id_csr_we_o));
    bufp->fullSData(oldp+66,(vlSymsp->TOP__test_top__core_top0.__PVT__id_csr_addr_o),12);
    bufp->fullCData(oldp+67,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_waddr_o),5);
    bufp->fullBit(oldp+68,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_we_o));
    bufp->fullIData(oldp+69,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_wdata_o),32);
    bufp->fullIData(oldp+70,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_addr_o),32);
    bufp->fullBit(oldp+71,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_we_o));
    bufp->fullIData(oldp+72,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_data_o),32);
    bufp->fullCData(oldp+73,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_op_o),4);
    bufp->fullBit(oldp+74,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_stallreq_o));
    bufp->fullBit(oldp+75,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_we_o));
    bufp->fullSData(oldp+76,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_waddr_o),12);
    bufp->fullIData(oldp+77,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_wdata_o),32);
    bufp->fullSData(oldp+78,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_raddr_o),12);
    bufp->fullCData(oldp+79,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_reg_waddr_o),5);
    bufp->fullBit(oldp+80,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_reg_we_o));
    bufp->fullIData(oldp+81,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_reg_wdata_o),32);
    bufp->fullBit(oldp+82,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_csr_we_o));
    bufp->fullSData(oldp+83,((0xfffU & vlSymsp->TOP__test_top__core_top0.__Vcellout__mem0__csr_waddr_o)),12);
    bufp->fullIData(oldp+84,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_csr_wdata_o),32);
    bufp->fullIData(oldp+85,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__rdata1_o),32);
    bufp->fullIData(oldp+86,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__rdata2_o),32);
    bufp->fullIData(oldp+87,(vlSymsp->TOP__test_top__core_top0.__PVT__csr_file_csr_rdata_o),32);
    bufp->fullIData(oldp+88,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__a_o),32);
    bufp->fullIData(oldp+89,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__b_o),32);
    bufp->fullBit(oldp+90,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mult_req_o));
    bufp->fullBit(oldp+91,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__div_req_o));
    bufp->fullBit(oldp+92,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__is_div_q_i));
    bufp->fullQData(oldp+93,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__invert_result),64);
    bufp->fullIData(oldp+95,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__invert_result_div),32);
    bufp->fullIData(oldp+96,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__csr_rdata),32);
    bufp->fullBit(oldp+97,((0U == vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__a_o)));
    bufp->fullBit(oldp+98,((0U == vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__b_o)));
    bufp->fullCData(oldp+99,(((0U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__div0__DOT__S))
                               ? ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__div_req_o)
                                   ? (((0U == vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__a_o) 
                                       | (0U == vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__b_o))
                                       ? 3U : 1U) : 0U)
                               : ((1U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__div0__DOT__S))
                                   ? ((0U != (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__div0__DOT__cnt))
                                       ? 1U : 3U) : 0U))),3);
    bufp->fullBit(oldp+100,((1U & (~ (IData)((0U != vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__a_o))))));
    bufp->fullBit(oldp+101,((1U & (~ (IData)((0U != vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__b_o))))));
    bufp->fullCData(oldp+102,(((0U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__S))
                                ? ((1U & ((~ (IData)(
                                                     (0U 
                                                      != vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__a_o))) 
                                          | (~ (IData)(
                                                       (0U 
                                                        != vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__b_o)))))
                                    ? 3U : ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mult_ready_i)
                                             ? 0U : 1U))
                                : ((1U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__S))
                                    ? ((0U != (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__cnt))
                                        ? 1U : 3U) : 0U))),3);
    bufp->fullIData(oldp+103,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_waddr_o),32);
    bufp->fullIData(oldp+104,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__op1_o_final),32);
    bufp->fullIData(oldp+105,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__op2_o_final),32);
    bufp->fullIData(oldp+106,(((IData)(vlSymsp->TOP__test_top__core_top0.id0__DOT__inst_type_r__DOT____VdfgExtracted_he1154c64__0)
                                ? vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__rdata1_o
                                : 0U)),32);
    bufp->fullIData(oldp+107,(((IData)(vlSymsp->TOP__test_top__core_top0.id0__DOT__inst_type_r__DOT____VdfgExtracted_he1154c64__0)
                                ? vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__rdata2_o
                                : 0U)),32);
    bufp->fullIData(oldp+108,(vlSymsp->TOP__test_top__core_top0.__Vcellout__mem0__csr_waddr_o),32);
    bufp->fullBit(oldp+109,(vlSymsp->TOP__test_top.__PVT__device_req
                            [0U]));
    bufp->fullIData(oldp+110,(vlSymsp->TOP__test_top.__PVT__device_addr
                              [0U]),32);
    bufp->fullBit(oldp+111,(vlSymsp->TOP__test_top.__PVT__device_we
                            [0U]));
    bufp->fullIData(oldp+112,(vlSymsp->TOP__test_top.__PVT__device_wdata
                              [0U]),32);
    bufp->fullIData(oldp+113,((0x1ffffcU & vlSymsp->TOP__test_top.__PVT__device_addr
                               [0U])),21);
    bufp->fullBit(oldp+114,(vlSymsp->TOP__test_top.__PVT__halt_from_console));
    bufp->fullBit(oldp+115,(vlSymsp->TOP__test_top__core_top0.__PVT__ce_wire));
    bufp->fullIData(oldp+116,(vlSymsp->TOP__test_top__core_top0.__PVT__pc_wire),32);
    bufp->fullCData(oldp+117,(vlSymsp->TOP__test_top.__PVT__console0__DOT__sim_finish),3);
    bufp->fullIData(oldp+118,(vlSymsp->TOP__test_top.__PVT__console0__DOT__log_fd),32);
    bufp->fullIData(oldp+119,(vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_addr_o),32);
    bufp->fullIData(oldp+120,(vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o),32);
    bufp->fullBit(oldp+121,(((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_is_load_o) 
                             & (((0x1fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                           >> 0xfU)) 
                                 == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_rd_o)) 
                                | ((0x1fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                             >> 0x14U)) 
                                   == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_rd_o))))));
    bufp->fullIData(oldp+122,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o),32);
    bufp->fullIData(oldp+123,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o),32);
    bufp->fullBit(oldp+124,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_reg_we_o));
    bufp->fullCData(oldp+125,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_reg_waddr_o),5);
    bufp->fullIData(oldp+126,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o),32);
    bufp->fullIData(oldp+127,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_addr_o),32);
    bufp->fullBit(oldp+128,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_is_load_o));
    bufp->fullCData(oldp+129,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_rd_o),5);
    bufp->fullBit(oldp+130,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_csr_we_o));
    bufp->fullSData(oldp+131,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_csr_addr_o),12);
    bufp->fullCData(oldp+132,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_reg_waddr_o),5);
    bufp->fullBit(oldp+133,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_reg_we_o));
    bufp->fullIData(oldp+134,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_reg_wdata_o),32);
    bufp->fullIData(oldp+135,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_addr_o),32);
    bufp->fullBit(oldp+136,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_we_o));
    bufp->fullIData(oldp+137,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_data_o),32);
    bufp->fullCData(oldp+138,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o),4);
    bufp->fullBit(oldp+139,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_csr_we_o));
    bufp->fullSData(oldp+140,((0xfffU & vlSymsp->TOP__test_top__core_top0.__Vcellout__exe_mem0__csr_waddr_o)),12);
    bufp->fullIData(oldp+141,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_csr_wdata_o),32);
    bufp->fullCData(oldp+142,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_reg_waddr_o),5);
    bufp->fullBit(oldp+143,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_reg_we_o));
    bufp->fullIData(oldp+144,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_reg_wdata_o),32);
    bufp->fullBit(oldp+145,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_we_o));
    bufp->fullSData(oldp+146,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_waddr_o),12);
    bufp->fullIData(oldp+147,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_wdata_o),32);
    bufp->fullBit(oldp+148,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_instret_incr_o));
    bufp->fullQData(oldp+149,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mcycle),64);
    bufp->fullQData(oldp+151,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__minstret),64);
    bufp->fullIData(oldp+153,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mstatus),32);
    bufp->fullBit(oldp+154,(((0x300U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_waddr_o)) 
                             & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_we_o))));
    bufp->fullCData(oldp+155,((0x7fU & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)),7);
    bufp->fullCData(oldp+156,((7U & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+157,((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                               >> 0x19U)),7);
    bufp->fullBit(oldp+158,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__isType_r));
    bufp->fullBit(oldp+159,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__isType_m));
    bufp->fullIData(oldp+160,((((- (IData)((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                            >> 0x1fU))) 
                                << 0xcU) | (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                            >> 0x14U))),32);
    bufp->fullIData(oldp+161,((((- (IData)((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                  >> 7U))))),32);
    bufp->fullBit(oldp+162,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__op1_eq_op2));
    bufp->fullIData(oldp+163,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__div_result_i),32);
    bufp->fullBit(oldp+164,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mult_ready_i));
    bufp->fullBit(oldp+165,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__div_ready_i));
    bufp->fullQData(oldp+166,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mult_result_i),64);
    bufp->fullBit(oldp+168,((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                             >> 0x1fU)));
    bufp->fullBit(oldp+169,((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o 
                             >> 0x1fU)));
    bufp->fullBit(oldp+170,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__signed_adjust));
    bufp->fullBit(oldp+171,((1U & (~ (IData)((0U != (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__div0__DOT__cnt)))))));
    bufp->fullIData(oldp+172,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__div0__DOT__reg32),32);
    bufp->fullWData(oldp+173,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__div0__DOT__result),65);
    bufp->fullCData(oldp+176,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__div0__DOT__cnt),6);
    bufp->fullIData(oldp+177,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__div0__DOT__result[0U]),32);
    bufp->fullIData(oldp+178,(((vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__div0__DOT__result[2U] 
                                << 0x1fU) | (vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__div0__DOT__result[1U] 
                                             >> 1U))),32);
    bufp->fullCData(oldp+179,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__div0__DOT__S),3);
    bufp->fullBit(oldp+180,((vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__div0__DOT__result[1U] 
                             >= vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__div0__DOT__reg32)));
    bufp->fullQData(oldp+181,((0x1ffffffffULL & ((QData)((IData)(
                                                                 vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__div0__DOT__result[1U])) 
                                                 - (QData)((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__div0__DOT__reg32))))),33);
    __Vtemp_h9e2dce8b__0[0U] = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__div0__DOT__result[0U];
    __Vtemp_h9e2dce8b__0[1U] = (IData)((0x1ffffffffULL 
                                        & ((QData)((IData)(
                                                           vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__div0__DOT__result[1U])) 
                                           - (QData)((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__div0__DOT__reg32)))));
    __Vtemp_h9e2dce8b__0[2U] = (IData)(((0x1ffffffffULL 
                                         & ((QData)((IData)(
                                                            vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__div0__DOT__result[1U])) 
                                            - (QData)((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__div0__DOT__reg32)))) 
                                        >> 0x20U));
    bufp->fullWData(oldp+183,(__Vtemp_h9e2dce8b__0),65);
    bufp->fullBit(oldp+186,((1U & (~ (IData)((0U != (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__cnt)))))));
    bufp->fullIData(oldp+187,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__reg32),32);
    bufp->fullWData(oldp+188,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__result),65);
    bufp->fullCData(oldp+191,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__cnt),6);
    bufp->fullCData(oldp+192,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__S),3);
    bufp->fullBit(oldp+193,((1U & vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__result[0U])));
    bufp->fullIData(oldp+194,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__result[1U]),32);
    bufp->fullQData(oldp+195,((0x1ffffffffULL & ((QData)((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__reg32)) 
                                                 + (QData)((IData)(
                                                                   vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__result[1U]))))),33);
    __Vtemp_h4ceb91ff__0[0U] = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__result[0U];
    __Vtemp_h4ceb91ff__0[1U] = (IData)((0x1ffffffffULL 
                                        & ((QData)((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__reg32)) 
                                           + (QData)((IData)(
                                                             vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__result[1U])))));
    __Vtemp_h4ceb91ff__0[2U] = (IData)(((0x1ffffffffULL 
                                         & ((QData)((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__reg32)) 
                                            + (QData)((IData)(
                                                              vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__result[1U])))) 
                                        >> 0x20U));
    bufp->fullWData(oldp+197,(__Vtemp_h4ceb91ff__0),65);
    bufp->fullIData(oldp+200,(vlSymsp->TOP__test_top__core_top0.__Vcellout__exe_mem0__csr_waddr_o),32);
    bufp->fullCData(oldp+201,((0x7fU & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)),7);
    bufp->fullCData(oldp+202,((0x1fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                        >> 7U))),5);
    bufp->fullCData(oldp+203,((0x1fU & ((0x2000U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                         ? (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                            >> 0xfU)
                                         : ((0x1000U 
                                             & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                             ? (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                >> 0xfU)
                                             : (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                >> 0xfU))))),5);
    bufp->fullCData(oldp+204,(((IData)(vlSymsp->TOP__test_top__core_top0.id0__DOT__inst_type_r__DOT____VdfgExtracted_he1154c64__0)
                                ? (0x1fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                            >> 0xfU))
                                : 0U)),5);
    bufp->fullCData(oldp+205,(((IData)(vlSymsp->TOP__test_top__core_top0.id0__DOT__inst_type_r__DOT____VdfgExtracted_he1154c64__0)
                                ? (0x1fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                            >> 0x14U))
                                : 0U)),5);
    bufp->fullBit(oldp+206,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__r_reg1_re_o));
    bufp->fullBit(oldp+207,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__r_reg2_re_o));
    bufp->fullIData(oldp+208,(((0x2000U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                ? (((- (IData)((vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                >> 0x1fU))) 
                                    << 0xcU) | (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                >> 0x14U))
                                : ((0x1000U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                    ? (0x1fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                >> 0x14U))
                                    : (((- (IData)(
                                                   (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                    >> 0x1fU))) 
                                        << 0xcU) | 
                                       (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                        >> 0x14U))))),32);
    bufp->fullBit(oldp+209,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__r_reg_we_o));
    bufp->fullCData(oldp+210,((0x1fU & ((0x2000U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                         ? (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                            >> 7U) : 
                                        ((0x1000U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                          ? (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                             >> 7U)
                                          : (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                             >> 7U))))),5);
    bufp->fullCData(oldp+211,(((IData)(vlSymsp->TOP__test_top__core_top0.id0__DOT__inst_type_r__DOT____VdfgExtracted_he1154c64__0)
                                ? (0x1fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                            >> 7U))
                                : 0U)),5);
    bufp->fullCData(oldp+212,((0x1fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+213,((0x1fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+214,((7U & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+215,((vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                               >> 0x19U)),7);
    bufp->fullBit(oldp+216,(((0x33U == (0x7fU & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) 
                             & ((0U == (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                        >> 0x19U)) 
                                | (0x20U == (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                             >> 0x19U))))));
    bufp->fullBit(oldp+217,((IData)((0x2000033U == 
                                     (0xfe00007fU & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)))));
    bufp->fullIData(oldp+218,((0xfffU & vlSymsp->TOP__test_top__core_top0.__Vcellout__exe_mem0__csr_waddr_o)),32);
    bufp->fullCData(oldp+219,((3U & vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_addr_o)),2);
    bufp->fullIData(oldp+220,((0x1ffffcU & vlSymsp->TOP__test_top__core_top0.__PVT__pc_wire)),21);
    bufp->fullIData(oldp+221,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[0]),32);
    bufp->fullIData(oldp+222,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[1]),32);
    bufp->fullIData(oldp+223,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[2]),32);
    bufp->fullIData(oldp+224,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[3]),32);
    bufp->fullIData(oldp+225,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[4]),32);
    bufp->fullIData(oldp+226,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[5]),32);
    bufp->fullIData(oldp+227,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[6]),32);
    bufp->fullIData(oldp+228,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[7]),32);
    bufp->fullIData(oldp+229,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[8]),32);
    bufp->fullIData(oldp+230,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[9]),32);
    bufp->fullIData(oldp+231,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[10]),32);
    bufp->fullIData(oldp+232,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[11]),32);
    bufp->fullIData(oldp+233,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[12]),32);
    bufp->fullIData(oldp+234,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[13]),32);
    bufp->fullIData(oldp+235,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[14]),32);
    bufp->fullIData(oldp+236,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[15]),32);
    bufp->fullIData(oldp+237,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[16]),32);
    bufp->fullIData(oldp+238,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[17]),32);
    bufp->fullIData(oldp+239,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[18]),32);
    bufp->fullIData(oldp+240,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[19]),32);
    bufp->fullIData(oldp+241,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[20]),32);
    bufp->fullIData(oldp+242,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[21]),32);
    bufp->fullIData(oldp+243,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[22]),32);
    bufp->fullIData(oldp+244,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[23]),32);
    bufp->fullIData(oldp+245,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[24]),32);
    bufp->fullIData(oldp+246,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[25]),32);
    bufp->fullIData(oldp+247,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[26]),32);
    bufp->fullIData(oldp+248,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[27]),32);
    bufp->fullIData(oldp+249,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[28]),32);
    bufp->fullIData(oldp+250,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[29]),32);
    bufp->fullIData(oldp+251,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[30]),32);
    bufp->fullIData(oldp+252,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[31]),32);
    bufp->fullBit(oldp+253,(vlSelf->clk_i));
    bufp->fullBit(oldp+254,(vlSelf->rst_i));
    bufp->fullBit(oldp+255,(vlSelf->halt_o));
    bufp->fullIData(oldp+256,(((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ce_wire)
                                ? ((vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                    [(0x1ffffcU & vlSymsp->TOP__test_top__core_top0.__PVT__pc_wire)] 
                                    << 0x18U) | ((vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                                  [
                                                  (0x1fffffU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      (0x1ffffcU 
                                                       & vlSymsp->TOP__test_top__core_top0.__PVT__pc_wire)))] 
                                                  << 0x10U) 
                                                 | ((vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                                     [
                                                     (0x1fffffU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         (0x1ffffcU 
                                                          & vlSymsp->TOP__test_top__core_top0.__PVT__pc_wire)))] 
                                                     << 8U) 
                                                    | vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                                    [
                                                    (0x1fffffU 
                                                     & ((IData)(3U) 
                                                        + 
                                                        (0x1ffffcU 
                                                         & vlSymsp->TOP__test_top__core_top0.__PVT__pc_wire)))])))
                                : 0U)),32);
    bufp->fullBit(oldp+257,(((~ (IData)(vlSelf->rst_i)) 
                             & (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req))));
    bufp->fullBit(oldp+258,(((~ (IData)(vlSelf->rst_i)) 
                             & (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__device_sel_req))));
    bufp->fullBit(oldp+259,((1U & (~ (IData)(vlSelf->rst_i)))));
    bufp->fullIData(oldp+260,((vlSymsp->TOP__test_top.__PVT__device_req
                               [0U] ? ((vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                        [(0x1ffffcU 
                                          & vlSymsp->TOP__test_top.__PVT__device_addr
                                          [0U])] << 0x18U) 
                                       | ((vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                           [(0x1fffffU 
                                             & ((IData)(1U) 
                                                + (0x1ffffcU 
                                                   & vlSymsp->TOP__test_top.__PVT__device_addr
                                                   [0U])))] 
                                           << 0x10U) 
                                          | ((vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                              [(0x1fffffU 
                                                & ((IData)(2U) 
                                                   + 
                                                   (0x1ffffcU 
                                                    & vlSymsp->TOP__test_top.__PVT__device_addr
                                                    [0U])))] 
                                              << 8U) 
                                             | vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                             [(0x1fffffU 
                                               & ((IData)(3U) 
                                                  + 
                                                  (0x1ffffcU 
                                                   & vlSymsp->TOP__test_top.__PVT__device_addr
                                                   [0U])))])))
                                : 0U)),32);
    bufp->fullIData(oldp+261,(2U),32);
    bufp->fullIData(oldp+262,(1U),32);
    bufp->fullIData(oldp+263,(0x200000U),32);
    bufp->fullIData(oldp+264,(0x15U),32);
    bufp->fullBit(oldp+265,(1U));
    bufp->fullCData(oldp+266,(4U),8);
    bufp->fullCData(oldp+267,(8U),8);
    bufp->fullIData(oldp+268,(2U),32);
    bufp->fullIData(oldp+269,(1U),32);
    bufp->fullIData(oldp+270,(0x20U),32);
    bufp->fullIData(oldp+271,(0xffffffffU),32);
    bufp->fullIData(oldp+272,(2U),32);
    bufp->fullIData(oldp+273,(1U),32);
    bufp->fullIData(oldp+274,(0U),32);
    bufp->fullIData(oldp+275,(0x16U),32);
    bufp->fullCData(oldp+276,(1U),2);
    bufp->fullIData(oldp+277,(0x1100U),26);
    bufp->fullIData(oldp+278,(0x40001100U),32);
    bufp->fullIData(oldp+279,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mie),32);
    bufp->fullIData(oldp+280,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mtvec),32);
    bufp->fullIData(oldp+281,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mscratch),32);
    bufp->fullIData(oldp+282,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mepc),32);
    bufp->fullIData(oldp+283,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mcause),32);
    bufp->fullIData(oldp+284,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mip),32);
    bufp->fullIData(oldp+285,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mtval),32);
    bufp->fullCData(oldp+286,(0U),3);
    bufp->fullCData(oldp+287,(1U),3);
    bufp->fullCData(oldp+288,(3U),3);
    bufp->fullCData(oldp+289,(0U),5);
    bufp->fullBit(oldp+290,(1U));
    bufp->fullBit(oldp+291,(0U));
    bufp->fullIData(oldp+292,(0x200000U),32);
    bufp->fullIData(oldp+293,(0x15U),32);
}

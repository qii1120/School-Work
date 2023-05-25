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
    tracep->declBit(c+920,"clk_i", false,-1);
    tracep->declBit(c+921,"rst_i", false,-1);
    tracep->declBit(c+922,"halt_o", false,-1);
}

VL_ATTR_COLD void Vtest_top___024root__trace_init_sub__TOP__test_top__0(Vtest_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_top___024root__trace_init_sub__TOP__test_top__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+920,"clk_i", false,-1);
    tracep->declBit(c+921,"rst_i", false,-1);
    tracep->declBit(c+147,"halt_o", false,-1);
    tracep->declBus(c+934,"NrDevices", false,-1, 31,0);
    tracep->declBus(c+935,"NrHosts", false,-1, 31,0);
    tracep->declBus(c+936,"MemSize", false,-1, 31,0);
    tracep->declBus(c+937,"MemAddrWidth", false,-1, 31,0);
    for (int i = 0; i < 1; ++i) {
        tracep->declBit(c+14+i*1,"host_req", true,(i+0));
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBit(c+15+i*1,"host_gnt", true,(i+0));
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+19+i*1,"host_addr", true,(i+0), 31,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBit(c+20+i*1,"host_we", true,(i+0));
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+75+i*1,"host_wdata", true,(i+0), 31,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+76+i*1,"host_rdata", true,(i+0), 31,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBit(c+77+i*1,"device_req", true,(i+0));
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+80+i*1,"device_addr", true,(i+0), 31,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBit(c+83+i*1,"device_we", true,(i+0));
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+86+i*1,"device_wdata", true,(i+0), 31,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+89+i*1,"device_rdata", true,(i+0), 31,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+1+i*1,"cfg_device_addr_base", true,(i+0), 31,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+4+i*1,"cfg_device_addr_mask", true,(i+0), 31,0);
    }
    tracep->declBit(c+147,"halt_from_console", false,-1);
    tracep->declBit(c+938,"irq_external", false,-1);
    tracep->declBit(c+148,"clint_irq_software_o", false,-1);
    tracep->declBit(c+149,"clint_irq_timer_o", false,-1);
    tracep->declBit(c+150,"inst_ce_o", false,-1);
    tracep->declBus(c+151,"pc_o", false,-1, 31,0);
    tracep->declBus(c+923,"inst_o", false,-1, 31,0);
    tracep->pushNamePrefix("clint0 ");
    tracep->declBit(c+920,"clk_i", false,-1);
    tracep->declBit(c+921,"rst_i", false,-1);
    tracep->declBit(c+92,"req_i", false,-1);
    tracep->declBit(c+93,"we_i", false,-1);
    tracep->declBus(c+94,"addr_i", false,-1, 31,0);
    tracep->declBus(c+95,"data_i", false,-1, 31,0);
    tracep->declBus(c+96,"data_o", false,-1, 31,0);
    tracep->declBit(c+149,"timer_irq_o", false,-1);
    tracep->declBit(c+148,"software_irq_o", false,-1);
    tracep->declBus(c+939,"MSIP_BASE", false,-1, 15,0);
    tracep->declBus(c+940,"MTIMECMP_BASE", false,-1, 15,0);
    tracep->declBus(c+941,"TIME_ADDR", false,-1, 15,0);
    tracep->declBus(c+97,"raddr", false,-1, 15,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+152+i*1,"mtime_mem", true,(i+0), 31,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+154+i*1,"mtimecmp_mem", true,(i+0), 31,0);
    }
    tracep->declBus(c+156,"msip_mem", false,-1, 31,0);
    tracep->declQuad(c+157,"mtime", false,-1, 63,0);
    tracep->declQuad(c+159,"mtimecmp", false,-1, 63,0);
    tracep->declQuad(c+161,"msip", false,-1, 63,0);
    tracep->declBit(c+163,"carry", false,-1);
    tracep->declBit(c+98,"is_time_addr0", false,-1);
    tracep->declBit(c+99,"is_time_addr1", false,-1);
    tracep->declBit(c+100,"is_mtimecmp_addr0", false,-1);
    tracep->declBit(c+101,"is_mtimecmp_addr1", false,-1);
    tracep->declBit(c+102,"is_msip_addr", false,-1);
    tracep->declQuad(c+164,"time_interval", false,-1, 63,0);
    tracep->declBit(c+166,"is_timeout", false,-1);
    tracep->declBit(c+167,"is_mtimecmp_nonzero", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("console0 ");
    tracep->declBit(c+942,"FlushOnChar", false,-1);
    tracep->declBit(c+920,"clk_i", false,-1);
    tracep->declBit(c+921,"rst_i", false,-1);
    tracep->declBit(c+103,"req_i", false,-1);
    tracep->declBit(c+104,"we_i", false,-1);
    tracep->declBus(c+105,"addr_i", false,-1, 31,0);
    tracep->declBus(c+106,"wdata_i", false,-1, 31,0);
    tracep->declBit(c+147,"halt_o", false,-1);
    tracep->declBus(c+943,"CHAR_OUT_ADDR", false,-1, 7,0);
    tracep->declBus(c+944,"SIM_CTRL_ADDR", false,-1, 7,0);
    tracep->declBus(c+107,"ctrl_addr", false,-1, 7,0);
    tracep->declBus(c+168,"sim_finish", false,-1, 2,0);
    tracep->declBus(c+169,"log_fd", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_bus ");
    tracep->declBus(c+945,"NrDevices", false,-1, 31,0);
    tracep->declBus(c+946,"NrHosts", false,-1, 31,0);
    tracep->declBus(c+947,"DataWidth", false,-1, 31,0);
    tracep->declBus(c+947,"AddressWidth", false,-1, 31,0);
    tracep->declBit(c+920,"clk_i", false,-1);
    tracep->declBit(c+921,"rst_i", false,-1);
    for (int i = 0; i < 1; ++i) {
        tracep->declBit(c+16+i*1,"host_req_i", true,(i+0));
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBit(c+17+i*1,"host_gnt_o", true,(i+0));
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+21+i*1,"host_addr_i", true,(i+0), 31,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBit(c+22+i*1,"host_we_i", true,(i+0));
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+108+i*1,"host_wdata_i", true,(i+0), 31,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+109+i*1,"host_rdata_o", true,(i+0), 31,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBit(c+110+i*1,"device_req_o", true,(i+0));
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+113+i*1,"device_addr_o", true,(i+0), 31,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBit(c+116+i*1,"device_we_o", true,(i+0));
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+119+i*1,"device_wdata_o", true,(i+0), 31,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+122+i*1,"device_rdata_i", true,(i+0), 31,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+7+i*1,"cfg_device_addr_base", true,(i+0), 31,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+10+i*1,"cfg_device_addr_mask", true,(i+0), 31,0);
    }
    tracep->declBus(c+946,"NumBitsHostSel", false,-1, 31,0);
    tracep->declBus(c+948,"NumBitsDeviceSel", false,-1, 31,0);
    tracep->declBus(c+18,"host_sel_req", false,-1, 0,0);
    tracep->declBus(c+924,"host_sel_resp", false,-1, 0,0);
    tracep->declBus(c+125,"device_sel_req", false,-1, 1,0);
    tracep->declBus(c+126,"device_sel_resp", false,-1, 1,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+949,"host", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+950,"device", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+950,"device", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->declBus(c+951,"host", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtest_top___024root__trace_init_sub__TOP__test_top__core_top0__0(Vtest_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_top___024root__trace_init_sub__TOP__test_top__core_top0__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+921,"rst_i", false,-1);
    tracep->declBit(c+920,"clk_i", false,-1);
    tracep->declBit(c+150,"rom_ce_o", false,-1);
    tracep->declBus(c+151,"rom_addr_o", false,-1, 31,0);
    tracep->declBus(c+923,"rom_data_i", false,-1, 31,0);
    tracep->declBit(c+925,"ram_ce_o", false,-1);
    tracep->declBus(c+23,"ram_addr_o", false,-1, 31,0);
    tracep->declBus(c+127,"ram_wdata_o", false,-1, 31,0);
    tracep->declBus(c+128,"ram_rdata_i", false,-1, 31,0);
    tracep->declBit(c+24,"ram_we_o", false,-1);
    tracep->declBit(c+938,"irq_external_i", false,-1);
    tracep->declBit(c+148,"irq_software_i", false,-1);
    tracep->declBit(c+149,"irq_timer_i", false,-1);
    tracep->declBus(c+151,"if_inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+923,"if_inst_o", false,-1, 31,0);
    tracep->declBus(c+128,"ram_data_o", false,-1, 31,0);
    tracep->declBit(c+170,"int_ctrl_interrupt_type_o", false,-1);
    tracep->declBit(c+916,"int_ctrl_interrupt_en_o", false,-1);
    tracep->declBit(c+171,"int_ctrl_cause_we_o", false,-1);
    tracep->declBus(c+172,"int_ctrl_trap_casue_o", false,-1, 3,0);
    tracep->declBit(c+173,"int_ctrl_epc_we_o", false,-1);
    tracep->declBus(c+926,"int_ctrl_epc_o", false,-1, 31,0);
    tracep->declBit(c+174,"int_ctrl_mstatus_ie_clear_o", false,-1);
    tracep->declBit(c+175,"int_ctrl_mstatus_ie_set_o", false,-1);
    tracep->declBit(c+952,"int_ctrl_flush_o", false,-1);
    tracep->declBus(c+176,"int_ctrl_new_pc_o", false,-1, 31,0);
    tracep->declBit(c+129,"ctrl_flush_jump_o", false,-1);
    tracep->declBit(c+916,"ctrl_flush_int_o", false,-1);
    tracep->declBus(c+130,"ctrl_new_pc_o", false,-1, 31,0);
    tracep->declBus(c+131,"ctrl_stall_o", false,-1, 5,0);
    tracep->declBus(c+927,"ctrl_pc_o", false,-1, 31,0);
    tracep->declBus(c+151,"pc_wire", false,-1, 31,0);
    tracep->declBit(c+150,"ce_wire", false,-1);
    tracep->declBus(c+917,"if_id_inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+177,"if_id_inst_o", false,-1, 31,0);
    tracep->declBus(c+25,"id_reg1_addr_o", false,-1, 4,0);
    tracep->declBus(c+26,"id_reg2_addr_o", false,-1, 4,0);
    tracep->declBit(c+27,"id_reg1_re_o", false,-1);
    tracep->declBit(c+28,"id_reg2_re_o", false,-1);
    tracep->declBus(c+29,"id_inst_o", false,-1, 31,0);
    tracep->declBus(c+928,"id_op1_o", false,-1, 31,0);
    tracep->declBus(c+929,"id_op2_o", false,-1, 31,0);
    tracep->declBit(c+30,"id_reg_we_o", false,-1);
    tracep->declBus(c+31,"id_reg_waddr_o", false,-1, 4,0);
    tracep->declBus(c+917,"id_inst_addr_o", false,-1, 31,0);
    tracep->declBit(c+178,"id_stallreq_o", false,-1);
    tracep->declBit(c+32,"id_csr_we_o", false,-1);
    tracep->declBus(c+33,"id_csr_addr_o", false,-1, 11,0);
    tracep->declBus(c+34,"id_exception_o", false,-1, 31,0);
    tracep->declBus(c+179,"id_exe_op1_o", false,-1, 31,0);
    tracep->declBus(c+180,"id_exe_op2_o", false,-1, 31,0);
    tracep->declBit(c+181,"id_exe_reg_we_o", false,-1);
    tracep->declBus(c+182,"id_exe_reg_waddr_o", false,-1, 4,0);
    tracep->declBus(c+183,"id_exe_inst_o", false,-1, 31,0);
    tracep->declBus(c+918,"id_exe_inst_addr_o", false,-1, 31,0);
    tracep->declBit(c+184,"id_exe_inst_is_load_o", false,-1);
    tracep->declBus(c+185,"id_exe_rd_o", false,-1, 4,0);
    tracep->declBit(c+186,"id_exe_csr_we_o", false,-1);
    tracep->declBus(c+187,"id_exe_csr_addr_o", false,-1, 11,0);
    tracep->declBus(c+188,"id_exe_exception_o", false,-1, 31,0);
    tracep->declBus(c+35,"exe_reg_waddr_o", false,-1, 4,0);
    tracep->declBit(c+36,"exe_reg_we_o", false,-1);
    tracep->declBus(c+132,"exe_reg_wdata_o", false,-1, 31,0);
    tracep->declBus(c+37,"exe_mem_addr_o", false,-1, 31,0);
    tracep->declBit(c+38,"exe_mem_we_o", false,-1);
    tracep->declBus(c+39,"exe_mem_data_o", false,-1, 31,0);
    tracep->declBus(c+40,"exe_mem_op_o", false,-1, 3,0);
    tracep->declBit(c+930,"exe_stallreq_o", false,-1);
    tracep->declBit(c+129,"exe_jump_enable_o", false,-1);
    tracep->declBus(c+133,"exe_jump_addr_o", false,-1, 31,0);
    tracep->declBit(c+41,"exe_csr_we_o", false,-1);
    tracep->declBus(c+42,"exe_csr_waddr_o", false,-1, 11,0);
    tracep->declBus(c+43,"exe_csr_wdata_o", false,-1, 31,0);
    tracep->declBus(c+44,"exe_csr_raddr_o", false,-1, 11,0);
    tracep->declBus(c+918,"exe_inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+188,"exe_exception_o", false,-1, 31,0);
    tracep->declBus(c+189,"exe_mem_reg_waddr_o", false,-1, 4,0);
    tracep->declBit(c+190,"exe_mem_reg_we_o", false,-1);
    tracep->declBus(c+191,"exe_mem_reg_wdata_o", false,-1, 31,0);
    tracep->declBus(c+192,"exe_mem_mem_addr_o", false,-1, 31,0);
    tracep->declBit(c+193,"exe_mem_mem_we_o", false,-1);
    tracep->declBus(c+194,"exe_mem_mem_data_o", false,-1, 31,0);
    tracep->declBus(c+195,"exe_mem_mem_op_o", false,-1, 3,0);
    tracep->declBit(c+196,"exe_mem_csr_we_o", false,-1);
    tracep->declBus(c+197,"exe_mem_csr_waddr_o", false,-1, 11,0);
    tracep->declBus(c+198,"exe_mem_csr_wdata_o", false,-1, 31,0);
    tracep->declBus(c+919,"exe_mem_inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+199,"exe_mem_exception_o", false,-1, 31,0);
    tracep->declBus(c+45,"mem_reg_waddr_o", false,-1, 4,0);
    tracep->declBit(c+46,"mem_reg_we_o", false,-1);
    tracep->declBus(c+134,"mem_reg_wdata_o", false,-1, 31,0);
    tracep->declBus(c+23,"mem_mem_addr_o", false,-1, 31,0);
    tracep->declBit(c+24,"mem_mem_we_o", false,-1);
    tracep->declBus(c+127,"mem_mem_data_o", false,-1, 31,0);
    tracep->declBit(c+925,"mem_mem_ce_o", false,-1);
    tracep->declBus(c+931,"mem_inst_addr_o", false,-1, 31,0);
    tracep->declBit(c+47,"mem_csr_we_o", false,-1);
    tracep->declBus(c+48,"mem_csr_waddr_o", false,-1, 11,0);
    tracep->declBus(c+49,"mem_csr_wdata_o", false,-1, 31,0);
    tracep->declBus(c+199,"mem_exception_o", false,-1, 31,0);
    tracep->declBus(c+200,"mem_wb_reg_waddr_o", false,-1, 4,0);
    tracep->declBit(c+201,"mem_wb_reg_we_o", false,-1);
    tracep->declBus(c+202,"mem_wb_reg_wdata_o", false,-1, 31,0);
    tracep->declBit(c+203,"mem_wb_csr_we_o", false,-1);
    tracep->declBus(c+204,"mem_wb_csr_waddr_o", false,-1, 11,0);
    tracep->declBus(c+205,"mem_wb_csr_wdata_o", false,-1, 31,0);
    tracep->declBit(c+206,"mem_wb_instret_incr_o", false,-1);
    tracep->declBus(c+50,"reg1_data_o", false,-1, 31,0);
    tracep->declBus(c+51,"reg2_data_o", false,-1, 31,0);
    tracep->declBus(c+52,"csr_file_csr_rdata_o", false,-1, 31,0);
    tracep->declBit(c+207,"csr_mstatus_ie_o", false,-1);
    tracep->declBit(c+208,"csr_mie_external_o", false,-1);
    tracep->declBit(c+209,"csr_mie_timer_o", false,-1);
    tracep->declBit(c+210,"csr_mie_software_o", false,-1);
    tracep->declBit(c+211,"csr_mip_external_o", false,-1);
    tracep->declBit(c+212,"csr_mip_timer_o", false,-1);
    tracep->declBit(c+213,"csr_mip_software_o", false,-1);
    tracep->declBus(c+214,"csr_mtvec_o", false,-1, 31,0);
    tracep->declBus(c+215,"csr_epc_o", false,-1, 31,0);
    tracep->pushNamePrefix("csr0 ");
    tracep->declBit(c+920,"clk_i", false,-1);
    tracep->declBit(c+921,"rst_i", false,-1);
    tracep->declBus(c+44,"raddr_i", false,-1, 11,0);
    tracep->declBus(c+52,"rdata_o", false,-1, 31,0);
    tracep->declBit(c+203,"we_i", false,-1);
    tracep->declBus(c+204,"waddr_i", false,-1, 11,0);
    tracep->declBus(c+205,"wdata_i", false,-1, 31,0);
    tracep->declBit(c+206,"instret_incr_i", false,-1);
    tracep->declBit(c+149,"irq_timer_i", false,-1);
    tracep->declBit(c+148,"irq_software_i", false,-1);
    tracep->declBit(c+938,"irq_external_i", false,-1);
    tracep->declBit(c+207,"mstatus_ie_o", false,-1);
    tracep->declBit(c+208,"mie_external_o", false,-1);
    tracep->declBit(c+209,"mie_timer_o", false,-1);
    tracep->declBit(c+210,"mie_software_o", false,-1);
    tracep->declBit(c+211,"mip_external_o", false,-1);
    tracep->declBit(c+212,"mip_timer_o", false,-1);
    tracep->declBit(c+213,"mip_software_o", false,-1);
    tracep->declBus(c+214,"mtvec_o", false,-1, 31,0);
    tracep->declBus(c+215,"epc_o", false,-1, 31,0);
    tracep->declBit(c+170,"interrupt_type_i", false,-1);
    tracep->declBit(c+171,"cause_we_i", false,-1);
    tracep->declBus(c+172,"cause_i", false,-1, 3,0);
    tracep->declBit(c+173,"epc_we_i", false,-1);
    tracep->declBus(c+926,"epc_i", false,-1, 31,0);
    tracep->declBit(c+174,"mstatus_ie_clear_i", false,-1);
    tracep->declBit(c+175,"mstatus_ie_set_i", false,-1);
    tracep->declBus(c+953,"CSR_MVENDORID_VALUE", false,-1, 31,0);
    tracep->declBus(c+954,"CSR_MARCHID_VALUE", false,-1, 31,0);
    tracep->declBus(c+953,"CSR_MIMPID_VALUE", false,-1, 31,0);
    tracep->declBus(c+953,"CSR_MHARTID", false,-1, 31,0);
    tracep->declBus(c+955,"mxl", false,-1, 1,0);
    tracep->declBus(c+956,"mextensions", false,-1, 25,0);
    tracep->declBus(c+957,"misa", false,-1, 31,0);
    tracep->declQuad(c+216,"mcycle", false,-1, 63,0);
    tracep->declQuad(c+218,"minstret", false,-1, 63,0);
    tracep->declBus(c+220,"mstatus", false,-1, 31,0);
    tracep->declBit(c+221,"mstatus_mpie", false,-1);
    tracep->declBit(c+207,"mstatus_mie", false,-1);
    tracep->declBus(c+958,"mstatus_mpp", false,-1, 1,0);
    tracep->declBit(c+222,"w_mstatus", false,-1);
    tracep->declBus(c+223,"mie", false,-1, 31,0);
    tracep->declBit(c+208,"mie_external", false,-1);
    tracep->declBit(c+209,"mie_timer", false,-1);
    tracep->declBit(c+210,"mie_software", false,-1);
    tracep->declBit(c+224,"w_mie", false,-1);
    tracep->declBus(c+214,"mtvec", false,-1, 31,0);
    tracep->declBit(c+225,"w_mtvec", false,-1);
    tracep->declBus(c+226,"mscratch", false,-1, 31,0);
    tracep->declBit(c+227,"w_mscratch", false,-1);
    tracep->declBus(c+215,"mepc", false,-1, 31,0);
    tracep->declBit(c+228,"w_mepc", false,-1);
    tracep->declBus(c+229,"mcause", false,-1, 31,0);
    tracep->declBus(c+230,"cause", false,-1, 3,0);
    tracep->declBus(c+231,"cause_rem", false,-1, 26,0);
    tracep->declBit(c+232,"interrupt_type", false,-1);
    tracep->declBit(c+233,"w_mcause", false,-1);
    tracep->declBus(c+234,"mip", false,-1, 31,0);
    tracep->declBit(c+211,"mip_external", false,-1);
    tracep->declBit(c+212,"mip_timer", false,-1);
    tracep->declBit(c+213,"mip_software", false,-1);
    tracep->declBus(c+235,"mtval", false,-1, 31,0);
    tracep->declBit(c+236,"w_mtval", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ctrl0 ");
    tracep->declBit(c+920,"clk_i", false,-1);
    tracep->declBit(c+921,"rst_i", false,-1);
    tracep->declBit(c+178,"stallreq_from_id_i", false,-1);
    tracep->declBit(c+930,"stallreq_from_exe_i", false,-1);
    tracep->declBit(c+129,"jump_en_i", false,-1);
    tracep->declBus(c+133,"jump_addr_i", false,-1, 31,0);
    tracep->declBus(c+931,"pc_i", false,-1, 31,0);
    tracep->declBus(c+131,"stall_o", false,-1, 5,0);
    tracep->declBit(c+129,"flush_jump_o", false,-1);
    tracep->declBit(c+916,"flush_int_o", false,-1);
    tracep->declBus(c+130,"new_pc_o", false,-1, 31,0);
    tracep->declBus(c+176,"isr_pc_i", false,-1, 31,0);
    tracep->declBit(c+916,"int_en_i", false,-1);
    tracep->declBus(c+927,"pc_o", false,-1, 31,0);
    tracep->declBus(c+237,"current_pc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe0 ");
    tracep->declBit(c+921,"rst_i", false,-1);
    tracep->declBit(c+920,"clk_i", false,-1);
    tracep->declBus(c+179,"op1_i", false,-1, 31,0);
    tracep->declBus(c+180,"op2_i", false,-1, 31,0);
    tracep->declBit(c+181,"reg_we_i", false,-1);
    tracep->declBus(c+182,"reg_waddr_i", false,-1, 4,0);
    tracep->declBus(c+183,"inst_i", false,-1, 31,0);
    tracep->declBus(c+918,"inst_addr_i", false,-1, 31,0);
    tracep->declBit(c+186,"csr_we_i", false,-1);
    tracep->declBus(c+187,"csr_addr_i", false,-1, 11,0);
    tracep->declBus(c+52,"csr_rdata_i", false,-1, 31,0);
    tracep->declBus(c+44,"csr_raddr_o", false,-1, 11,0);
    tracep->declBus(c+35,"reg_waddr_o", false,-1, 4,0);
    tracep->declBit(c+36,"reg_we_o", false,-1);
    tracep->declBus(c+132,"reg_wdata_o", false,-1, 31,0);
    tracep->declBus(c+37,"mem_addr_o", false,-1, 31,0);
    tracep->declBus(c+39,"mem_data_o", false,-1, 31,0);
    tracep->declBit(c+38,"mem_we_o", false,-1);
    tracep->declBus(c+40,"mem_op_o", false,-1, 3,0);
    tracep->declBus(c+43,"csr_wdata_o", false,-1, 31,0);
    tracep->declBus(c+42,"csr_waddr_o", false,-1, 11,0);
    tracep->declBit(c+41,"csr_we_o", false,-1);
    tracep->declBus(c+918,"inst_addr_o", false,-1, 31,0);
    tracep->declBit(c+916,"flush_int_i", false,-1);
    tracep->declBit(c+930,"stallreq_o", false,-1);
    tracep->declBus(c+133,"jump_addr_o", false,-1, 31,0);
    tracep->declBit(c+129,"jump_enable_o", false,-1);
    tracep->declBit(c+47,"mem_csr_we_i", false,-1);
    tracep->declBus(c+48,"mem_csr_waddr_i", false,-1, 11,0);
    tracep->declBus(c+49,"mem_csr_wdata_i", false,-1, 31,0);
    tracep->declBus(c+188,"exception_i", false,-1, 31,0);
    tracep->declBus(c+188,"exception_o", false,-1, 31,0);
    tracep->declBus(c+238,"opcode", false,-1, 6,0);
    tracep->declBus(c+239,"funct3", false,-1, 2,0);
    tracep->declBus(c+240,"funct7", false,-1, 6,0);
    tracep->declBit(c+241,"isType_r", false,-1);
    tracep->declBit(c+242,"isType_m", false,-1);
    tracep->declBus(c+243,"load_addr_offset", false,-1, 31,0);
    tracep->declBus(c+244,"store_addr_offset", false,-1, 31,0);
    tracep->declBit(c+245,"op1_eq_op2", false,-1);
    tracep->declBus(c+918,"pc", false,-1, 31,0);
    tracep->declBus(c+53,"a_o", false,-1, 31,0);
    tracep->declBus(c+54,"b_o", false,-1, 31,0);
    tracep->declBus(c+246,"div_result_i", false,-1, 31,0);
    tracep->declBit(c+55,"mult_req_o", false,-1);
    tracep->declBit(c+56,"div_req_o", false,-1);
    tracep->declBit(c+932,"mult_ready_i", false,-1);
    tracep->declBit(c+247,"div_ready_i", false,-1);
    tracep->declBit(c+57,"is_div_q_i", false,-1);
    tracep->declQuad(c+135,"mult_result_i", false,-1, 63,0);
    tracep->declBit(c+248,"is_a_neg", false,-1);
    tracep->declBit(c+249,"is_b_neg", false,-1);
    tracep->declBit(c+250,"signed_adjust", false,-1);
    tracep->declQuad(c+137,"invert_result", false,-1, 63,0);
    tracep->declBus(c+58,"invert_result_div", false,-1, 31,0);
    tracep->declBus(c+59,"csr_rdata", false,-1, 31,0);
    tracep->pushNamePrefix("div0 ");
    tracep->declBus(c+947,"XLEN", false,-1, 31,0);
    tracep->declBit(c+920,"clk_i", false,-1);
    tracep->declBit(c+921,"rst_i", false,-1);
    tracep->declBus(c+53,"a_i", false,-1, 31,0);
    tracep->declBus(c+54,"b_i", false,-1, 31,0);
    tracep->declBit(c+56,"req_i", false,-1);
    tracep->declBit(c+57,"is_q_i", false,-1);
    tracep->declBit(c+916,"flush_i", false,-1);
    tracep->declBus(c+246,"result_o", false,-1, 31,0);
    tracep->declBit(c+247,"ready_o", false,-1);
    tracep->declBit(c+60,"is_a_zero", false,-1);
    tracep->declBit(c+61,"is_b_zero", false,-1);
    tracep->declBus(c+53,"op_a", false,-1, 31,0);
    tracep->declBus(c+54,"op_b", false,-1, 31,0);
    tracep->declBit(c+251,"is_calc_done", false,-1);
    tracep->declBus(c+252,"reg32", false,-1, 31,0);
    tracep->declArray(c+253,"result", false,-1, 64,0);
    tracep->declBus(c+256,"cnt", false,-1, 5,0);
    tracep->declBus(c+257,"quotient", false,-1, 31,0);
    tracep->declBus(c+258,"remainder", false,-1, 31,0);
    tracep->declBus(c+959,"S_IDLE", false,-1, 2,0);
    tracep->declBus(c+960,"S_CALC", false,-1, 2,0);
    tracep->declBus(c+961,"S_DONE", false,-1, 2,0);
    tracep->declBus(c+259,"S", false,-1, 2,0);
    tracep->declBus(c+62,"S_next", false,-1, 2,0);
    tracep->declBit(c+260,"div_sub", false,-1);
    tracep->declQuad(c+261,"sub_tmp", false,-1, 32,0);
    tracep->declArray(c+263,"result_tmp", false,-1, 64,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mul0 ");
    tracep->declBus(c+947,"XLEN", false,-1, 31,0);
    tracep->declBit(c+920,"clk_i", false,-1);
    tracep->declBit(c+921,"rst_i", false,-1);
    tracep->declBit(c+55,"req_i", false,-1);
    tracep->declBit(c+916,"flush_i", false,-1);
    tracep->declBus(c+53,"a_i", false,-1, 31,0);
    tracep->declBus(c+54,"b_i", false,-1, 31,0);
    tracep->declBit(c+932,"ready_o", false,-1);
    tracep->declQuad(c+135,"result_o", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declArray(c+266+i*3,"a_temp", true,(i+0), 64,0);
    }
    tracep->declBus(c+362,"ready_temp", false,-1, 5,0);
    tracep->declBit(c+63,"is_a_zero", false,-1);
    tracep->declBit(c+64,"is_b_zero", false,-1);
    tracep->declBit(c+139,"req", false,-1);
    for (int i = 0; i < 16; ++i) {
        tracep->declArray(c+363+i*3,"a_next1", true,(i+0), 64,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declArray(c+411+i*3,"a_next2", true,(i+0), 64,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declArray(c+435+i*3,"a_next3", true,(i+0), 64,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declArray(c+447+i*3,"a_next4", true,(i+0), 64,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declArray(c+453+i*3,"a_next5", true,(i+0), 64,0);
    }
    tracep->pushNamePrefix("mult_cell0 ");
    tracep->declBus(c+947,"XLEN", false,-1, 31,0);
    tracep->declBus(c+947,"NrInputs", false,-1, 31,0);
    tracep->declBus(c+962,"NrOutput", false,-1, 31,0);
    tracep->declBit(c+920,"clk_i", false,-1);
    tracep->declBit(c+921,"rst_i", false,-1);
    tracep->declBit(c+456,"en_i", false,-1);
    tracep->declBit(c+140,"flush_i", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declArray(c+457+i*3,"a_i", true,(i+0), 64,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declArray(c+553+i*3,"result_o", true,(i+0), 64,0);
    }
    tracep->declBit(c+601,"ready_o", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+602,"device", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+603,"device", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("mult_cell1 ");
    tracep->declBus(c+947,"XLEN", false,-1, 31,0);
    tracep->declBus(c+962,"NrInputs", false,-1, 31,0);
    tracep->declBus(c+963,"NrOutput", false,-1, 31,0);
    tracep->declBit(c+920,"clk_i", false,-1);
    tracep->declBit(c+921,"rst_i", false,-1);
    tracep->declBit(c+601,"en_i", false,-1);
    tracep->declBit(c+140,"flush_i", false,-1);
    for (int i = 0; i < 16; ++i) {
        tracep->declArray(c+604+i*3,"a_i", true,(i+0), 64,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declArray(c+652+i*3,"result_o", true,(i+0), 64,0);
    }
    tracep->declBit(c+676,"ready_o", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+677,"device", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+678,"device", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("mult_cell2 ");
    tracep->declBus(c+947,"XLEN", false,-1, 31,0);
    tracep->declBus(c+963,"NrInputs", false,-1, 31,0);
    tracep->declBus(c+964,"NrOutput", false,-1, 31,0);
    tracep->declBit(c+920,"clk_i", false,-1);
    tracep->declBit(c+921,"rst_i", false,-1);
    tracep->declBit(c+676,"en_i", false,-1);
    tracep->declBit(c+140,"flush_i", false,-1);
    for (int i = 0; i < 8; ++i) {
        tracep->declArray(c+679+i*3,"a_i", true,(i+0), 64,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declArray(c+703+i*3,"result_o", true,(i+0), 64,0);
    }
    tracep->declBit(c+715,"ready_o", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+716,"device", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+717,"device", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("mult_cell3 ");
    tracep->declBus(c+947,"XLEN", false,-1, 31,0);
    tracep->declBus(c+964,"NrInputs", false,-1, 31,0);
    tracep->declBus(c+948,"NrOutput", false,-1, 31,0);
    tracep->declBit(c+920,"clk_i", false,-1);
    tracep->declBit(c+921,"rst_i", false,-1);
    tracep->declBit(c+715,"en_i", false,-1);
    tracep->declBit(c+140,"flush_i", false,-1);
    for (int i = 0; i < 4; ++i) {
        tracep->declArray(c+718+i*3,"a_i", true,(i+0), 64,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declArray(c+730+i*3,"result_o", true,(i+0), 64,0);
    }
    tracep->declBit(c+736,"ready_o", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+737,"device", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+738,"device", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("mult_cell4 ");
    tracep->declBus(c+947,"XLEN", false,-1, 31,0);
    tracep->declBus(c+948,"NrInputs", false,-1, 31,0);
    tracep->declBus(c+946,"NrOutput", false,-1, 31,0);
    tracep->declBit(c+920,"clk_i", false,-1);
    tracep->declBit(c+921,"rst_i", false,-1);
    tracep->declBit(c+736,"en_i", false,-1);
    tracep->declBit(c+140,"flush_i", false,-1);
    for (int i = 0; i < 2; ++i) {
        tracep->declArray(c+739+i*3,"a_i", true,(i+0), 64,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declArray(c+745+i*3,"result_o", true,(i+0), 64,0);
    }
    tracep->declBit(c+748,"ready_o", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+749,"device", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+750,"device", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("mult_cellB ");
    tracep->declBus(c+947,"XLEN", false,-1, 31,0);
    tracep->declBus(c+947,"NrInputs", false,-1, 31,0);
    tracep->declBit(c+920,"clk_i", false,-1);
    tracep->declBit(c+921,"rst_i", false,-1);
    tracep->declBit(c+139,"en_i", false,-1);
    tracep->declBit(c+140,"flush_i", false,-1);
    tracep->declBus(c+53,"a_i", false,-1, 31,0);
    tracep->declBus(c+54,"b_i", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declArray(c+751+i*3,"result_o", true,(i+0), 64,0);
    }
    tracep->declBit(c+456,"ready_o", false,-1);
    tracep->declArray(c+65,"r", false,-1, 64,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+847,"device", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+848,"device", false,-1, 31,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("exe_mem0 ");
    tracep->declBit(c+921,"rst_i", false,-1);
    tracep->declBit(c+920,"clk_i", false,-1);
    tracep->declBus(c+35,"reg_waddr_i", false,-1, 4,0);
    tracep->declBit(c+36,"reg_we_i", false,-1);
    tracep->declBus(c+132,"reg_wdata_i", false,-1, 31,0);
    tracep->declBus(c+37,"mem_addr_i", false,-1, 31,0);
    tracep->declBus(c+39,"mem_data_i", false,-1, 31,0);
    tracep->declBit(c+38,"mem_we_i", false,-1);
    tracep->declBus(c+40,"mem_op_i", false,-1, 3,0);
    tracep->declBus(c+189,"reg_waddr_o", false,-1, 4,0);
    tracep->declBit(c+190,"reg_we_o", false,-1);
    tracep->declBus(c+191,"reg_wdata_o", false,-1, 31,0);
    tracep->declBus(c+192,"mem_addr_o", false,-1, 31,0);
    tracep->declBus(c+194,"mem_data_o", false,-1, 31,0);
    tracep->declBit(c+193,"mem_we_o", false,-1);
    tracep->declBus(c+195,"mem_op_o", false,-1, 3,0);
    tracep->declBit(c+41,"csr_we_i", false,-1);
    tracep->declBus(c+68,"csr_waddr_i", false,-1, 31,0);
    tracep->declBus(c+43,"csr_wdata_i", false,-1, 31,0);
    tracep->declBit(c+196,"csr_we_o", false,-1);
    tracep->declBus(c+849,"csr_waddr_o", false,-1, 31,0);
    tracep->declBus(c+198,"csr_wdata_o", false,-1, 31,0);
    tracep->declBus(c+918,"inst_addr_i", false,-1, 31,0);
    tracep->declBus(c+919,"inst_addr_o", false,-1, 31,0);
    tracep->declBit(c+916,"flush_int_i", false,-1);
    tracep->declBus(c+188,"exception_i", false,-1, 31,0);
    tracep->declBus(c+199,"exception_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id0 ");
    tracep->declBit(c+921,"rst_i", false,-1);
    tracep->declBus(c+917,"inst_addr_i", false,-1, 31,0);
    tracep->declBus(c+177,"inst_i", false,-1, 31,0);
    tracep->declBus(c+50,"reg1_rdata_i", false,-1, 31,0);
    tracep->declBus(c+51,"reg2_rdata_i", false,-1, 31,0);
    tracep->declBus(c+185,"exe_rd_i", false,-1, 4,0);
    tracep->declBit(c+184,"pre_inst_is_load_i", false,-1);
    tracep->declBit(c+178,"stallreq_o", false,-1);
    tracep->declBus(c+25,"reg1_raddr_o", false,-1, 4,0);
    tracep->declBus(c+26,"reg2_raddr_o", false,-1, 4,0);
    tracep->declBit(c+27,"reg1_re_o", false,-1);
    tracep->declBit(c+28,"reg2_re_o", false,-1);
    tracep->declBus(c+29,"inst_o", false,-1, 31,0);
    tracep->declBus(c+917,"inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+928,"op1_o", false,-1, 31,0);
    tracep->declBus(c+929,"op2_o", false,-1, 31,0);
    tracep->declBit(c+30,"reg_we_o", false,-1);
    tracep->declBus(c+31,"reg_waddr_o", false,-1, 4,0);
    tracep->declBus(c+35,"exe_reg_waddr_i", false,-1, 4,0);
    tracep->declBus(c+132,"exe_reg_wdata_i", false,-1, 31,0);
    tracep->declBit(c+36,"exe_reg_we_i", false,-1);
    tracep->declBus(c+45,"mem_reg_waddr_i", false,-1, 4,0);
    tracep->declBus(c+134,"mem_reg_wdata_i", false,-1, 31,0);
    tracep->declBit(c+46,"mem_reg_we_i", false,-1);
    tracep->declBit(c+32,"csr_we_o", false,-1);
    tracep->declBus(c+33,"csr_addr_o", false,-1, 11,0);
    tracep->declBus(c+34,"exception_o", false,-1, 31,0);
    tracep->declBit(c+69,"except_mret", false,-1);
    tracep->declBit(c+70,"except_ecall", false,-1);
    tracep->declBus(c+141,"op1_o_final", false,-1, 31,0);
    tracep->declBus(c+71,"op2_o_final", false,-1, 31,0);
    tracep->declBus(c+850,"opcode", false,-1, 6,0);
    tracep->declBus(c+851,"rd", false,-1, 4,0);
    tracep->declBus(c+852,"i_reg1_raddr_o", false,-1, 4,0);
    tracep->declBus(c+853,"r_reg1_raddr_o", false,-1, 4,0);
    tracep->declBus(c+965,"i_reg2_raddr_o", false,-1, 4,0);
    tracep->declBus(c+854,"r_reg2_raddr_o", false,-1, 4,0);
    tracep->declBit(c+966,"i_reg1_re_o", false,-1);
    tracep->declBit(c+855,"r_reg1_re_o", false,-1);
    tracep->declBit(c+938,"i_reg2_re_o", false,-1);
    tracep->declBit(c+856,"r_reg2_re_o", false,-1);
    tracep->declBus(c+50,"i_op1_o", false,-1, 31,0);
    tracep->declBus(c+72,"r_op1_o", false,-1, 31,0);
    tracep->declBus(c+857,"i_op2_o", false,-1, 31,0);
    tracep->declBus(c+73,"r_op2_o", false,-1, 31,0);
    tracep->declBit(c+966,"i_reg_we_o", false,-1);
    tracep->declBit(c+858,"r_reg_we_o", false,-1);
    tracep->declBus(c+859,"i_reg_waddr_o", false,-1, 4,0);
    tracep->declBus(c+860,"r_reg_waddr_o", false,-1, 4,0);
    tracep->declBus(c+861,"rs1", false,-1, 4,0);
    tracep->declBus(c+862,"rs2", false,-1, 4,0);
    tracep->declBit(c+178,"is_load_hazard", false,-1);
    tracep->pushNamePrefix("inst_type_i ");
    tracep->declBus(c+177,"inst_i", false,-1, 31,0);
    tracep->declBus(c+50,"reg1_rdata_i", false,-1, 31,0);
    tracep->declBus(c+51,"reg2_rdata_i", false,-1, 31,0);
    tracep->declBus(c+852,"reg1_raddr_o", false,-1, 4,0);
    tracep->declBus(c+965,"reg2_raddr_o", false,-1, 4,0);
    tracep->declBit(c+966,"reg1_re_o", false,-1);
    tracep->declBit(c+938,"reg2_re_o", false,-1);
    tracep->declBus(c+50,"op1_o", false,-1, 31,0);
    tracep->declBus(c+857,"op2_o", false,-1, 31,0);
    tracep->declBit(c+966,"reg_we_o", false,-1);
    tracep->declBus(c+859,"reg_waddr_o", false,-1, 4,0);
    tracep->declBus(c+863,"funct3", false,-1, 2,0);
    tracep->declBus(c+851,"rd", false,-1, 4,0);
    tracep->declBus(c+861,"rs1", false,-1, 4,0);
    tracep->declBus(c+862,"rs2", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("inst_type_r ");
    tracep->declBus(c+177,"inst_i", false,-1, 31,0);
    tracep->declBus(c+50,"reg1_rdata_i", false,-1, 31,0);
    tracep->declBus(c+51,"reg2_rdata_i", false,-1, 31,0);
    tracep->declBus(c+853,"reg1_raddr_o", false,-1, 4,0);
    tracep->declBus(c+854,"reg2_raddr_o", false,-1, 4,0);
    tracep->declBit(c+855,"reg1_re_o", false,-1);
    tracep->declBit(c+856,"reg2_re_o", false,-1);
    tracep->declBus(c+72,"op1_o", false,-1, 31,0);
    tracep->declBus(c+73,"op2_o", false,-1, 31,0);
    tracep->declBit(c+858,"reg_we_o", false,-1);
    tracep->declBus(c+860,"reg_waddr_o", false,-1, 4,0);
    tracep->declBus(c+850,"opcode", false,-1, 6,0);
    tracep->declBus(c+863,"funct3", false,-1, 2,0);
    tracep->declBus(c+864,"funct7", false,-1, 6,0);
    tracep->declBus(c+862,"shamt", false,-1, 4,0);
    tracep->declBus(c+851,"rd", false,-1, 4,0);
    tracep->declBus(c+861,"rs1", false,-1, 4,0);
    tracep->declBus(c+862,"rs2", false,-1, 4,0);
    tracep->declBit(c+865,"isType_r", false,-1);
    tracep->declBit(c+866,"isType_m", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("id_exe0 ");
    tracep->declBit(c+921,"rst_i", false,-1);
    tracep->declBit(c+920,"clk_i", false,-1);
    tracep->declBus(c+131,"stall_i", false,-1, 5,0);
    tracep->declBit(c+129,"flush_jump_i", false,-1);
    tracep->declBit(c+916,"flush_int_i", false,-1);
    tracep->declBus(c+928,"op1_i", false,-1, 31,0);
    tracep->declBus(c+929,"op2_i", false,-1, 31,0);
    tracep->declBit(c+30,"reg_we_i", false,-1);
    tracep->declBus(c+31,"reg_waddr_i", false,-1, 4,0);
    tracep->declBus(c+29,"inst_i", false,-1, 31,0);
    tracep->declBus(c+917,"inst_addr_i", false,-1, 31,0);
    tracep->declBus(c+179,"op1_o", false,-1, 31,0);
    tracep->declBus(c+180,"op2_o", false,-1, 31,0);
    tracep->declBit(c+181,"reg_we_o", false,-1);
    tracep->declBus(c+182,"reg_waddr_o", false,-1, 4,0);
    tracep->declBus(c+183,"inst_o", false,-1, 31,0);
    tracep->declBit(c+184,"inst_is_load_o", false,-1);
    tracep->declBus(c+185,"rd_o", false,-1, 4,0);
    tracep->declBus(c+918,"inst_addr_o", false,-1, 31,0);
    tracep->declBit(c+32,"csr_we_i", false,-1);
    tracep->declBus(c+33,"csr_addr_i", false,-1, 11,0);
    tracep->declBit(c+186,"csr_we_o", false,-1);
    tracep->declBus(c+187,"csr_addr_o", false,-1, 11,0);
    tracep->declBus(c+34,"exception_i", false,-1, 31,0);
    tracep->declBus(c+188,"exception_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if_id0 ");
    tracep->declBit(c+920,"clk_i", false,-1);
    tracep->declBit(c+921,"rst_i", false,-1);
    tracep->declBus(c+131,"stall_i", false,-1, 5,0);
    tracep->declBit(c+129,"flush_jump_i", false,-1);
    tracep->declBit(c+916,"flush_int_i", false,-1);
    tracep->declBus(c+151,"inst_addr_i", false,-1, 31,0);
    tracep->declBus(c+923,"inst_i", false,-1, 31,0);
    tracep->declBus(c+917,"inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+177,"inst_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("interrupt_ctrl0 ");
    tracep->declBit(c+920,"clk_i", false,-1);
    tracep->declBit(c+921,"rst_i", false,-1);
    tracep->declBus(c+199,"exception_i", false,-1, 31,0);
    tracep->declBus(c+927,"pc_i", false,-1, 31,0);
    tracep->declBit(c+207,"mstatus_ie_i", false,-1);
    tracep->declBit(c+208,"mie_external_i", false,-1);
    tracep->declBit(c+209,"mie_timer_i", false,-1);
    tracep->declBit(c+210,"mie_sw_i", false,-1);
    tracep->declBit(c+211,"mip_external_i", false,-1);
    tracep->declBit(c+212,"mip_timer_i", false,-1);
    tracep->declBit(c+213,"mip_sw_i", false,-1);
    tracep->declBus(c+214,"mtvec_i", false,-1, 31,0);
    tracep->declBus(c+215,"epc_i", false,-1, 31,0);
    tracep->declBit(c+170,"interrupt_type_o", false,-1);
    tracep->declBit(c+171,"cause_we_o", false,-1);
    tracep->declBus(c+172,"trap_casue_o", false,-1, 3,0);
    tracep->declBit(c+173,"epc_we_o", false,-1);
    tracep->declBus(c+926,"epc_o", false,-1, 31,0);
    tracep->declBit(c+174,"mstatus_ie_clear_o", false,-1);
    tracep->declBit(c+175,"mstatus_ie_set_o", false,-1);
    tracep->declBit(c+916,"interrupt_en_o", false,-1);
    tracep->declBus(c+176,"new_pc_o", false,-1, 31,0);
    tracep->declBus(c+867,"S", false,-1, 3,0);
    tracep->declBus(c+868,"S_nxt", false,-1, 3,0);
    tracep->declBus(c+967,"RESET", false,-1, 3,0);
    tracep->declBus(c+968,"OPERATING", false,-1, 3,0);
    tracep->declBus(c+969,"TRAP_TAKEN", false,-1, 3,0);
    tracep->declBus(c+970,"TRAP_RETURN", false,-1, 3,0);
    tracep->declBit(c+869,"mret", false,-1);
    tracep->declBit(c+870,"ecall", false,-1);
    tracep->declBit(c+871,"eip", false,-1);
    tracep->declBit(c+872,"tip", false,-1);
    tracep->declBit(c+873,"sip", false,-1);
    tracep->declBit(c+874,"ip", false,-1);
    tracep->declBit(c+875,"trap_happened", false,-1);
    tracep->declBus(c+876,"mtvec_base", false,-1, 29,0);
    tracep->declBus(c+877,"trap_mux_out", false,-1, 31,0);
    tracep->declBus(c+878,"vec_mux_out", false,-1, 31,0);
    tracep->declBus(c+879,"base_offset", false,-1, 31,0);
    tracep->declBit(c+880,"exception", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem0 ");
    tracep->declBit(c+920,"clk_i", false,-1);
    tracep->declBit(c+921,"rst_i", false,-1);
    tracep->declBus(c+189,"reg_waddr_i", false,-1, 4,0);
    tracep->declBit(c+190,"reg_we_i", false,-1);
    tracep->declBus(c+191,"reg_wdata_i", false,-1, 31,0);
    tracep->declBus(c+128,"ram_data_i", false,-1, 31,0);
    tracep->declBit(c+193,"mem_we_i", false,-1);
    tracep->declBus(c+192,"mem_addr_i", false,-1, 31,0);
    tracep->declBus(c+194,"mem_data_i", false,-1, 31,0);
    tracep->declBus(c+195,"mem_op_i", false,-1, 3,0);
    tracep->declBus(c+23,"ram_addr_o", false,-1, 31,0);
    tracep->declBit(c+24,"ram_w_request_o", false,-1);
    tracep->declBus(c+127,"ram_data_o", false,-1, 31,0);
    tracep->declBit(c+925,"ram_ce_o", false,-1);
    tracep->declBus(c+45,"reg_waddr_o", false,-1, 4,0);
    tracep->declBit(c+46,"reg_we_o", false,-1);
    tracep->declBus(c+134,"reg_wdata_o", false,-1, 31,0);
    tracep->declBit(c+196,"csr_we_i", false,-1);
    tracep->declBus(c+881,"csr_waddr_i", false,-1, 31,0);
    tracep->declBus(c+198,"csr_wdata_i", false,-1, 31,0);
    tracep->declBit(c+47,"csr_we_o", false,-1);
    tracep->declBus(c+74,"csr_waddr_o", false,-1, 31,0);
    tracep->declBus(c+49,"csr_wdata_o", false,-1, 31,0);
    tracep->declBus(c+919,"inst_addr_i", false,-1, 31,0);
    tracep->declBus(c+931,"inst_addr_o", false,-1, 31,0);
    tracep->declBus(c+199,"exception_i", false,-1, 31,0);
    tracep->declBus(c+199,"exception_o", false,-1, 31,0);
    tracep->declBus(c+882,"ram_addr_offset", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_wb0 ");
    tracep->declBit(c+921,"rst_i", false,-1);
    tracep->declBit(c+920,"clk_i", false,-1);
    tracep->declBus(c+45,"reg_waddr_i", false,-1, 4,0);
    tracep->declBit(c+46,"reg_we_i", false,-1);
    tracep->declBus(c+134,"reg_wdata_i", false,-1, 31,0);
    tracep->declBus(c+200,"reg_waddr_o", false,-1, 4,0);
    tracep->declBit(c+201,"reg_we_o", false,-1);
    tracep->declBus(c+202,"reg_wdata_o", false,-1, 31,0);
    tracep->declBit(c+47,"csr_we_i", false,-1);
    tracep->declBus(c+48,"csr_waddr_i", false,-1, 11,0);
    tracep->declBus(c+49,"csr_wdata_i", false,-1, 31,0);
    tracep->declBit(c+203,"csr_we_o", false,-1);
    tracep->declBus(c+204,"csr_waddr_o", false,-1, 11,0);
    tracep->declBus(c+205,"csr_wdata_o", false,-1, 31,0);
    tracep->declBit(c+206,"instret_incr_o", false,-1);
    tracep->declBit(c+916,"flush_int_i", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc_reg0 ");
    tracep->declBit(c+920,"clk_i", false,-1);
    tracep->declBit(c+921,"rst_i", false,-1);
    tracep->declBus(c+131,"stall_i", false,-1, 5,0);
    tracep->declBit(c+129,"flush_jump_i", false,-1);
    tracep->declBit(c+916,"flush_int_i", false,-1);
    tracep->declBus(c+130,"new_pc_i", false,-1, 31,0);
    tracep->declBus(c+151,"pc_o", false,-1, 31,0);
    tracep->declBit(c+150,"ce_o", false,-1);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vtest_top___024root__trace_init_sub__TOP__test_top__data_ram0__0(Vtest_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_top___024root__trace_init_sub__TOP__test_top__data_ram0__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+971,"RAM_SIZE", false,-1, 31,0);
    tracep->declBus(c+972,"RAM_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBit(c+920,"clk_i", false,-1);
    tracep->declBit(c+142,"ce_i", false,-1);
    tracep->declBus(c+143,"addr_i", false,-1, 31,0);
    tracep->declBit(c+144,"we_i", false,-1);
    tracep->declBus(c+145,"data_i", false,-1, 31,0);
    tracep->declBus(c+933,"data_o", false,-1, 31,0);
    tracep->declBit(c+150,"inst_ce_i", false,-1);
    tracep->declBus(c+151,"pc_i", false,-1, 31,0);
    tracep->declBus(c+923,"inst_o", false,-1, 31,0);
    tracep->declBus(c+146,"addr4", false,-1, 20,0);
    tracep->declBus(c+883,"rom_addr4", false,-1, 20,0);
}

VL_ATTR_COLD void Vtest_top___024root__trace_init_sub__TOP__test_top__core_top0__regfile0__0(Vtest_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_top___024root__trace_init_sub__TOP__test_top__core_top0__regfile0__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+920,"clk_i", false,-1);
    tracep->declBit(c+921,"rst_i", false,-1);
    tracep->declBit(c+201,"we_i", false,-1);
    tracep->declBus(c+200,"waddr_i", false,-1, 4,0);
    tracep->declBus(c+202,"wdata_i", false,-1, 31,0);
    tracep->declBit(c+27,"re1_i", false,-1);
    tracep->declBus(c+25,"raddr1_i", false,-1, 4,0);
    tracep->declBit(c+28,"re2_i", false,-1);
    tracep->declBus(c+26,"raddr2_i", false,-1, 4,0);
    tracep->declBus(c+50,"rdata1_o", false,-1, 31,0);
    tracep->declBus(c+51,"rdata2_o", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+884+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->declBus(c+13,"i", false,-1, 31,0);
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
    VlWide<3>/*95:0*/ __Vtemp_hbd51cd3a__0;
    VlWide<3>/*95:0*/ __Vtemp_h9e2dce8b__0;
    // Body
    bufp->fullIData(oldp+1,(vlSymsp->TOP__test_top.__PVT__cfg_device_addr_base[0]),32);
    bufp->fullIData(oldp+2,(vlSymsp->TOP__test_top.__PVT__cfg_device_addr_base[1]),32);
    bufp->fullIData(oldp+3,(vlSymsp->TOP__test_top.__PVT__cfg_device_addr_base[2]),32);
    bufp->fullIData(oldp+4,(vlSymsp->TOP__test_top.__PVT__cfg_device_addr_mask[0]),32);
    bufp->fullIData(oldp+5,(vlSymsp->TOP__test_top.__PVT__cfg_device_addr_mask[1]),32);
    bufp->fullIData(oldp+6,(vlSymsp->TOP__test_top.__PVT__cfg_device_addr_mask[2]),32);
    bufp->fullIData(oldp+7,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__cfg_device_addr_base[0]),32);
    bufp->fullIData(oldp+8,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__cfg_device_addr_base[1]),32);
    bufp->fullIData(oldp+9,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__cfg_device_addr_base[2]),32);
    bufp->fullIData(oldp+10,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__cfg_device_addr_mask[0]),32);
    bufp->fullIData(oldp+11,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__cfg_device_addr_mask[1]),32);
    bufp->fullIData(oldp+12,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__cfg_device_addr_mask[2]),32);
    bufp->fullIData(oldp+13,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__i),32);
    bufp->fullBit(oldp+14,(vlSymsp->TOP__test_top.__PVT__host_req[0]));
    bufp->fullBit(oldp+15,(vlSymsp->TOP__test_top.__PVT__host_gnt[0]));
    bufp->fullBit(oldp+16,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_req_i[0]));
    bufp->fullBit(oldp+17,(vlSymsp->TOP__test_top.__Vcellout__u_bus__host_gnt_o[0]));
    bufp->fullBit(oldp+18,(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req));
    bufp->fullIData(oldp+19,(vlSymsp->TOP__test_top.__PVT__host_addr[0]),32);
    bufp->fullBit(oldp+20,(vlSymsp->TOP__test_top.__PVT__host_we[0]));
    bufp->fullIData(oldp+21,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_addr_i[0]),32);
    bufp->fullBit(oldp+22,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_we_i[0]));
    bufp->fullIData(oldp+23,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_mem_addr_o),32);
    bufp->fullBit(oldp+24,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_mem_we_o));
    bufp->fullCData(oldp+25,(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_addr_o),5);
    bufp->fullCData(oldp+26,(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_addr_o),5);
    bufp->fullBit(oldp+27,(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_re_o));
    bufp->fullBit(oldp+28,(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_re_o));
    bufp->fullIData(oldp+29,(vlSymsp->TOP__test_top__core_top0.__PVT__id_inst_o),32);
    bufp->fullBit(oldp+30,(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg_we_o));
    bufp->fullCData(oldp+31,(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg_waddr_o),5);
    bufp->fullBit(oldp+32,(vlSymsp->TOP__test_top__core_top0.__PVT__id_csr_we_o));
    bufp->fullSData(oldp+33,(vlSymsp->TOP__test_top__core_top0.__PVT__id_csr_addr_o),12);
    bufp->fullIData(oldp+34,((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__except_ecall) 
                               << 1U) | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__except_mret))),32);
    bufp->fullCData(oldp+35,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_waddr_o),5);
    bufp->fullBit(oldp+36,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_we_o));
    bufp->fullIData(oldp+37,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_addr_o),32);
    bufp->fullBit(oldp+38,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_we_o));
    bufp->fullIData(oldp+39,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_data_o),32);
    bufp->fullCData(oldp+40,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_op_o),4);
    bufp->fullBit(oldp+41,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_we_o));
    bufp->fullSData(oldp+42,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_waddr_o),12);
    bufp->fullIData(oldp+43,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_wdata_o),32);
    bufp->fullSData(oldp+44,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_raddr_o),12);
    bufp->fullCData(oldp+45,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_reg_waddr_o),5);
    bufp->fullBit(oldp+46,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_reg_we_o));
    bufp->fullBit(oldp+47,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_csr_we_o));
    bufp->fullSData(oldp+48,((0xfffU & vlSymsp->TOP__test_top__core_top0.__Vcellout__mem0__csr_waddr_o)),12);
    bufp->fullIData(oldp+49,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_csr_wdata_o),32);
    bufp->fullIData(oldp+50,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__rdata1_o),32);
    bufp->fullIData(oldp+51,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__rdata2_o),32);
    bufp->fullIData(oldp+52,(vlSymsp->TOP__test_top__core_top0.__PVT__csr_file_csr_rdata_o),32);
    bufp->fullIData(oldp+53,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__a_o),32);
    bufp->fullIData(oldp+54,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__b_o),32);
    bufp->fullBit(oldp+55,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mult_req_o));
    bufp->fullBit(oldp+56,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__div_req_o));
    bufp->fullBit(oldp+57,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__is_div_q_i));
    bufp->fullIData(oldp+58,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__invert_result_div),32);
    bufp->fullIData(oldp+59,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__csr_rdata),32);
    bufp->fullBit(oldp+60,((0U == vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__a_o)));
    bufp->fullBit(oldp+61,((0U == vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__b_o)));
    bufp->fullCData(oldp+62,(((0U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__div0__DOT__S))
                               ? ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__div_req_o)
                                   ? (((0U == vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__a_o) 
                                       | (0U == vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__b_o))
                                       ? 3U : 1U) : 0U)
                               : ((1U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__div0__DOT__S))
                                   ? ((0U != (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__div0__DOT__cnt))
                                       ? 1U : 3U) : 0U))),3);
    bufp->fullBit(oldp+63,((1U & (~ (IData)((0U != vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__a_o))))));
    bufp->fullBit(oldp+64,((1U & (~ (IData)((0U != vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__b_o))))));
    __Vtemp_hbd51cd3a__0[0U] = vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__a_o;
    __Vtemp_hbd51cd3a__0[1U] = 0U;
    __Vtemp_hbd51cd3a__0[2U] = 0U;
    bufp->fullWData(oldp+65,(__Vtemp_hbd51cd3a__0),65);
    bufp->fullIData(oldp+68,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_csr_waddr_o),32);
    bufp->fullBit(oldp+69,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__except_mret));
    bufp->fullBit(oldp+70,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__except_ecall));
    bufp->fullIData(oldp+71,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__op2_o_final),32);
    bufp->fullIData(oldp+72,(((IData)(vlSymsp->TOP__test_top__core_top0.id0__DOT__inst_type_r__DOT____VdfgExtracted_he1154c64__0)
                               ? vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__rdata1_o
                               : 0U)),32);
    bufp->fullIData(oldp+73,(((IData)(vlSymsp->TOP__test_top__core_top0.id0__DOT__inst_type_r__DOT____VdfgExtracted_he1154c64__0)
                               ? vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__rdata2_o
                               : 0U)),32);
    bufp->fullIData(oldp+74,(vlSymsp->TOP__test_top__core_top0.__Vcellout__mem0__csr_waddr_o),32);
    bufp->fullIData(oldp+75,(vlSymsp->TOP__test_top.__PVT__host_wdata[0]),32);
    bufp->fullIData(oldp+76,(vlSymsp->TOP__test_top.__PVT__host_rdata[0]),32);
    bufp->fullBit(oldp+77,(vlSymsp->TOP__test_top.__PVT__device_req[0]));
    bufp->fullBit(oldp+78,(vlSymsp->TOP__test_top.__PVT__device_req[1]));
    bufp->fullBit(oldp+79,(vlSymsp->TOP__test_top.__PVT__device_req[2]));
    bufp->fullIData(oldp+80,(vlSymsp->TOP__test_top.__PVT__device_addr[0]),32);
    bufp->fullIData(oldp+81,(vlSymsp->TOP__test_top.__PVT__device_addr[1]),32);
    bufp->fullIData(oldp+82,(vlSymsp->TOP__test_top.__PVT__device_addr[2]),32);
    bufp->fullBit(oldp+83,(vlSymsp->TOP__test_top.__PVT__device_we[0]));
    bufp->fullBit(oldp+84,(vlSymsp->TOP__test_top.__PVT__device_we[1]));
    bufp->fullBit(oldp+85,(vlSymsp->TOP__test_top.__PVT__device_we[2]));
    bufp->fullIData(oldp+86,(vlSymsp->TOP__test_top.__PVT__device_wdata[0]),32);
    bufp->fullIData(oldp+87,(vlSymsp->TOP__test_top.__PVT__device_wdata[1]),32);
    bufp->fullIData(oldp+88,(vlSymsp->TOP__test_top.__PVT__device_wdata[2]),32);
    bufp->fullIData(oldp+89,(vlSymsp->TOP__test_top.__PVT__device_rdata[0]),32);
    bufp->fullIData(oldp+90,(vlSymsp->TOP__test_top.__PVT__device_rdata[1]),32);
    bufp->fullIData(oldp+91,(vlSymsp->TOP__test_top.__PVT__device_rdata[2]),32);
    bufp->fullBit(oldp+92,(vlSymsp->TOP__test_top.__PVT__device_req
                           [0U]));
    bufp->fullBit(oldp+93,(vlSymsp->TOP__test_top.__PVT__device_we
                           [0U]));
    bufp->fullIData(oldp+94,(vlSymsp->TOP__test_top.__PVT__device_addr
                             [0U]),32);
    bufp->fullIData(oldp+95,(vlSymsp->TOP__test_top.__PVT__device_wdata
                             [0U]),32);
    bufp->fullIData(oldp+96,(vlSymsp->TOP__test_top.__Vcellout__clint0__data_o),32);
    bufp->fullSData(oldp+97,((0xffffU & vlSymsp->TOP__test_top.__PVT__device_addr
                              [0U])),16);
    bufp->fullBit(oldp+98,((0xbff8U == (0xffffU & vlSymsp->TOP__test_top.__PVT__device_addr
                                        [0U]))));
    bufp->fullBit(oldp+99,((0xbffcU == (0xffffU & vlSymsp->TOP__test_top.__PVT__device_addr
                                        [0U]))));
    bufp->fullBit(oldp+100,((0x4000U == (0xffffU & 
                                         vlSymsp->TOP__test_top.__PVT__device_addr
                                         [0U]))));
    bufp->fullBit(oldp+101,((0x4004U == (0xffffU & 
                                         vlSymsp->TOP__test_top.__PVT__device_addr
                                         [0U]))));
    bufp->fullBit(oldp+102,((0U == (0xffffU & vlSymsp->TOP__test_top.__PVT__device_addr
                                    [0U]))));
    bufp->fullBit(oldp+103,(vlSymsp->TOP__test_top.__PVT__device_req
                            [2U]));
    bufp->fullBit(oldp+104,(vlSymsp->TOP__test_top.__PVT__device_we
                            [2U]));
    bufp->fullIData(oldp+105,(vlSymsp->TOP__test_top.__PVT__device_addr
                              [2U]),32);
    bufp->fullIData(oldp+106,(vlSymsp->TOP__test_top.__PVT__device_wdata
                              [2U]),32);
    bufp->fullCData(oldp+107,((0xffU & vlSymsp->TOP__test_top.__PVT__device_addr
                               [2U])),8);
    bufp->fullIData(oldp+108,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__host_wdata_i[0]),32);
    bufp->fullIData(oldp+109,(vlSymsp->TOP__test_top.__Vcellout__u_bus__host_rdata_o[0]),32);
    bufp->fullBit(oldp+110,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_req_o[0]));
    bufp->fullBit(oldp+111,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_req_o[1]));
    bufp->fullBit(oldp+112,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_req_o[2]));
    bufp->fullIData(oldp+113,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_addr_o[0]),32);
    bufp->fullIData(oldp+114,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_addr_o[1]),32);
    bufp->fullIData(oldp+115,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_addr_o[2]),32);
    bufp->fullBit(oldp+116,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_we_o[0]));
    bufp->fullBit(oldp+117,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_we_o[1]));
    bufp->fullBit(oldp+118,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_we_o[2]));
    bufp->fullIData(oldp+119,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_wdata_o[0]),32);
    bufp->fullIData(oldp+120,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_wdata_o[1]),32);
    bufp->fullIData(oldp+121,(vlSymsp->TOP__test_top.__Vcellout__u_bus__device_wdata_o[2]),32);
    bufp->fullIData(oldp+122,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__device_rdata_i[0]),32);
    bufp->fullIData(oldp+123,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__device_rdata_i[1]),32);
    bufp->fullIData(oldp+124,(vlSymsp->TOP__test_top.__Vcellinp__u_bus__device_rdata_i[2]),32);
    bufp->fullCData(oldp+125,(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__device_sel_req),2);
    bufp->fullCData(oldp+126,(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__device_sel_resp),2);
    bufp->fullIData(oldp+127,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_mem_data_o),32);
    bufp->fullIData(oldp+128,(vlSymsp->TOP__test_top.__PVT__host_rdata
                              [0U]),32);
    bufp->fullBit(oldp+129,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_enable_o));
    bufp->fullIData(oldp+130,(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_new_pc_o),32);
    bufp->fullCData(oldp+131,(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_stall_o),6);
    bufp->fullIData(oldp+132,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_reg_wdata_o),32);
    bufp->fullIData(oldp+133,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_jump_addr_o),32);
    bufp->fullIData(oldp+134,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_reg_wdata_o),32);
    bufp->fullQData(oldp+135,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mult_result_i),64);
    bufp->fullQData(oldp+137,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__invert_result),64);
    bufp->fullBit(oldp+139,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__req));
    bufp->fullBit(oldp+140,((1U & (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__req)))));
    bufp->fullIData(oldp+141,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__op1_o_final),32);
    bufp->fullBit(oldp+142,(vlSymsp->TOP__test_top.__PVT__device_req
                            [1U]));
    bufp->fullIData(oldp+143,(vlSymsp->TOP__test_top.__PVT__device_addr
                              [1U]),32);
    bufp->fullBit(oldp+144,(vlSymsp->TOP__test_top.__PVT__device_we
                            [1U]));
    bufp->fullIData(oldp+145,(vlSymsp->TOP__test_top.__PVT__device_wdata
                              [1U]),32);
    bufp->fullIData(oldp+146,((0x1ffffcU & vlSymsp->TOP__test_top.__PVT__device_addr
                               [1U])),21);
    bufp->fullBit(oldp+147,(vlSymsp->TOP__test_top.__PVT__halt_from_console));
    bufp->fullBit(oldp+148,((0U != vlSymsp->TOP__test_top.__PVT__clint0__DOT__msip_mem)));
    bufp->fullBit(oldp+149,(((~ (IData)((((((QData)((IData)(
                                                            vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem
                                                            [1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem
                                                             [0U]))) 
                                          - vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtimecmp) 
                                         >> 0x3fU))) 
                             & (0ULL != vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtimecmp))));
    bufp->fullBit(oldp+150,(vlSymsp->TOP__test_top__core_top0.__PVT__ce_wire));
    bufp->fullIData(oldp+151,(vlSymsp->TOP__test_top__core_top0.__PVT__pc_wire),32);
    bufp->fullIData(oldp+152,(vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem[0]),32);
    bufp->fullIData(oldp+153,(vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem[1]),32);
    bufp->fullIData(oldp+154,(vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtimecmp_mem[0]),32);
    bufp->fullIData(oldp+155,(vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtimecmp_mem[1]),32);
    bufp->fullIData(oldp+156,(vlSymsp->TOP__test_top.__PVT__clint0__DOT__msip_mem),32);
    bufp->fullQData(oldp+157,((((QData)((IData)(vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem
                                                [1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem
                                                            [0U])))),64);
    bufp->fullQData(oldp+159,(vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtimecmp),64);
    bufp->fullQData(oldp+161,((QData)((IData)(vlSymsp->TOP__test_top.__PVT__clint0__DOT__msip_mem))),64);
    bufp->fullBit(oldp+163,((0xffffffffU == vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem
                             [0U])));
    bufp->fullQData(oldp+164,(((((QData)((IData)(vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem
                                                 [1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem
                                                             [0U]))) 
                               - vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtimecmp)),64);
    bufp->fullBit(oldp+166,((1U & (~ (IData)((((((QData)((IData)(
                                                                 vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem
                                                                 [1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtime_mem
                                                                  [0U]))) 
                                               - vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtimecmp) 
                                              >> 0x3fU))))));
    bufp->fullBit(oldp+167,((0ULL == vlSymsp->TOP__test_top.__PVT__clint0__DOT__mtimecmp)));
    bufp->fullCData(oldp+168,(vlSymsp->TOP__test_top.__PVT__console0__DOT__sim_finish),3);
    bufp->fullIData(oldp+169,(vlSymsp->TOP__test_top.__PVT__console0__DOT__log_fd),32);
    bufp->fullBit(oldp+170,(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_interrupt_type_o));
    bufp->fullBit(oldp+171,(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_cause_we_o));
    bufp->fullCData(oldp+172,(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_trap_casue_o),4);
    bufp->fullBit(oldp+173,(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_epc_we_o));
    bufp->fullBit(oldp+174,(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_mstatus_ie_clear_o));
    bufp->fullBit(oldp+175,(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_mstatus_ie_set_o));
    bufp->fullIData(oldp+176,(((8U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S))
                                ? ((4U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S))
                                    ? 0U : ((2U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S))
                                             ? 0U : 
                                            ((1U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S))
                                              ? 0U : vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mepc)))
                                : ((4U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S))
                                    ? ((2U & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S))
                                        ? 0U : ((1U 
                                                 & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S))
                                                 ? 0U
                                                 : 
                                                ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_interrupt_type_o)
                                                  ? 
                                                 ((1U 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mtvec)
                                                   ? 
                                                  ((0xfffffffcU 
                                                    & vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mtvec) 
                                                   + 
                                                   ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_trap_casue_o) 
                                                    << 2U))
                                                   : 
                                                  (0xfffffffcU 
                                                   & vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mtvec))
                                                  : 
                                                 (0xfffffffcU 
                                                  & vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mtvec))))
                                    : 0U))),32);
    bufp->fullIData(oldp+177,(vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o),32);
    bufp->fullBit(oldp+178,(((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_is_load_o) 
                             & (((0x1fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                           >> 0xfU)) 
                                 == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_rd_o)) 
                                | ((0x1fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                             >> 0x14U)) 
                                   == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_rd_o))))));
    bufp->fullIData(oldp+179,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o),32);
    bufp->fullIData(oldp+180,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o),32);
    bufp->fullBit(oldp+181,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_reg_we_o));
    bufp->fullCData(oldp+182,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_reg_waddr_o),5);
    bufp->fullIData(oldp+183,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o),32);
    bufp->fullBit(oldp+184,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_is_load_o));
    bufp->fullCData(oldp+185,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_rd_o),5);
    bufp->fullBit(oldp+186,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_csr_we_o));
    bufp->fullSData(oldp+187,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_csr_addr_o),12);
    bufp->fullIData(oldp+188,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_exception_o),32);
    bufp->fullCData(oldp+189,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_reg_waddr_o),5);
    bufp->fullBit(oldp+190,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_reg_we_o));
    bufp->fullIData(oldp+191,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_reg_wdata_o),32);
    bufp->fullIData(oldp+192,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_addr_o),32);
    bufp->fullBit(oldp+193,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_we_o));
    bufp->fullIData(oldp+194,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_data_o),32);
    bufp->fullCData(oldp+195,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_op_o),4);
    bufp->fullBit(oldp+196,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_csr_we_o));
    bufp->fullSData(oldp+197,((0xfffU & vlSymsp->TOP__test_top__core_top0.__Vcellout__exe_mem0__csr_waddr_o)),12);
    bufp->fullIData(oldp+198,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_csr_wdata_o),32);
    bufp->fullIData(oldp+199,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_exception_o),32);
    bufp->fullCData(oldp+200,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_reg_waddr_o),5);
    bufp->fullBit(oldp+201,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_reg_we_o));
    bufp->fullIData(oldp+202,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_reg_wdata_o),32);
    bufp->fullBit(oldp+203,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_we_o));
    bufp->fullSData(oldp+204,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_waddr_o),12);
    bufp->fullIData(oldp+205,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_wdata_o),32);
    bufp->fullBit(oldp+206,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_instret_incr_o));
    bufp->fullBit(oldp+207,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mstatus_mie));
    bufp->fullBit(oldp+208,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mie_external));
    bufp->fullBit(oldp+209,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mie_timer));
    bufp->fullBit(oldp+210,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mie_software));
    bufp->fullBit(oldp+211,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mip_external));
    bufp->fullBit(oldp+212,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mip_timer));
    bufp->fullBit(oldp+213,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mip_software));
    bufp->fullIData(oldp+214,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mtvec),32);
    bufp->fullIData(oldp+215,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mepc),32);
    bufp->fullQData(oldp+216,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mcycle),64);
    bufp->fullQData(oldp+218,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__minstret),64);
    bufp->fullIData(oldp+220,((0x1800U | (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mstatus_mpie) 
                                           << 7U) | 
                                          ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mstatus_mie) 
                                           << 3U)))),32);
    bufp->fullBit(oldp+221,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mstatus_mpie));
    bufp->fullBit(oldp+222,(((0x300U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_waddr_o)) 
                             & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_we_o))));
    bufp->fullIData(oldp+223,((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mie_external) 
                                << 0xbU) | (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mie_timer) 
                                             << 7U) 
                                            | ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mie_software) 
                                               << 3U)))),32);
    bufp->fullBit(oldp+224,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__w_mie));
    bufp->fullBit(oldp+225,(((0x305U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_waddr_o)) 
                             & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_we_o))));
    bufp->fullIData(oldp+226,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mscratch),32);
    bufp->fullBit(oldp+227,(((0x340U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_waddr_o)) 
                             & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_we_o))));
    bufp->fullBit(oldp+228,(((0x341U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_waddr_o)) 
                             & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_we_o))));
    bufp->fullIData(oldp+229,((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__interrupt_type) 
                                << 0x1fU) | ((vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__cause_rem 
                                              << 4U) 
                                             | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__cause)))),32);
    bufp->fullCData(oldp+230,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__cause),4);
    bufp->fullIData(oldp+231,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__cause_rem),27);
    bufp->fullBit(oldp+232,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__interrupt_type));
    bufp->fullBit(oldp+233,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__w_mcause));
    bufp->fullIData(oldp+234,((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mip_external) 
                                << 0xbU) | (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mip_timer) 
                                             << 7U) 
                                            | ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mip_software) 
                                               << 3U)))),32);
    bufp->fullIData(oldp+235,(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mtval),32);
    bufp->fullBit(oldp+236,(((0x343U == (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_waddr_o)) 
                             & (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__mem_wb_csr_we_o))));
    bufp->fullIData(oldp+237,(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl0__DOT__current_pc),32);
    bufp->fullCData(oldp+238,((0x7fU & vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o)),7);
    bufp->fullCData(oldp+239,((7U & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+240,((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                               >> 0x19U)),7);
    bufp->fullBit(oldp+241,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__isType_r));
    bufp->fullBit(oldp+242,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__isType_m));
    bufp->fullIData(oldp+243,((((- (IData)((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                            >> 0x1fU))) 
                                << 0xcU) | (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                            >> 0x14U))),32);
    bufp->fullIData(oldp+244,((((- (IData)((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_o 
                                                  >> 7U))))),32);
    bufp->fullBit(oldp+245,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__op1_eq_op2));
    bufp->fullIData(oldp+246,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__div_result_i),32);
    bufp->fullBit(oldp+247,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__div_ready_i));
    bufp->fullBit(oldp+248,((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op1_o 
                             >> 0x1fU)));
    bufp->fullBit(oldp+249,((vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_op2_o 
                             >> 0x1fU)));
    bufp->fullBit(oldp+250,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__signed_adjust));
    bufp->fullBit(oldp+251,((1U & (~ (IData)((0U != (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__div0__DOT__cnt)))))));
    bufp->fullIData(oldp+252,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__div0__DOT__reg32),32);
    bufp->fullWData(oldp+253,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__div0__DOT__result),65);
    bufp->fullCData(oldp+256,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__div0__DOT__cnt),6);
    bufp->fullIData(oldp+257,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__div0__DOT__result[0U]),32);
    bufp->fullIData(oldp+258,(((vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__div0__DOT__result[2U] 
                                << 0x1fU) | (vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__div0__DOT__result[1U] 
                                             >> 1U))),32);
    bufp->fullCData(oldp+259,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__div0__DOT__S),3);
    bufp->fullBit(oldp+260,((vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__div0__DOT__result[1U] 
                             >= vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__div0__DOT__reg32)));
    bufp->fullQData(oldp+261,((0x1ffffffffULL & ((QData)((IData)(
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
    bufp->fullWData(oldp+263,(__Vtemp_h9e2dce8b__0),65);
    bufp->fullWData(oldp+266,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_temp[0]),65);
    bufp->fullWData(oldp+269,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_temp[1]),65);
    bufp->fullWData(oldp+272,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_temp[2]),65);
    bufp->fullWData(oldp+275,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_temp[3]),65);
    bufp->fullWData(oldp+278,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_temp[4]),65);
    bufp->fullWData(oldp+281,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_temp[5]),65);
    bufp->fullWData(oldp+284,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_temp[6]),65);
    bufp->fullWData(oldp+287,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_temp[7]),65);
    bufp->fullWData(oldp+290,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_temp[8]),65);
    bufp->fullWData(oldp+293,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_temp[9]),65);
    bufp->fullWData(oldp+296,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_temp[10]),65);
    bufp->fullWData(oldp+299,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_temp[11]),65);
    bufp->fullWData(oldp+302,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_temp[12]),65);
    bufp->fullWData(oldp+305,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_temp[13]),65);
    bufp->fullWData(oldp+308,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_temp[14]),65);
    bufp->fullWData(oldp+311,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_temp[15]),65);
    bufp->fullWData(oldp+314,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_temp[16]),65);
    bufp->fullWData(oldp+317,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_temp[17]),65);
    bufp->fullWData(oldp+320,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_temp[18]),65);
    bufp->fullWData(oldp+323,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_temp[19]),65);
    bufp->fullWData(oldp+326,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_temp[20]),65);
    bufp->fullWData(oldp+329,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_temp[21]),65);
    bufp->fullWData(oldp+332,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_temp[22]),65);
    bufp->fullWData(oldp+335,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_temp[23]),65);
    bufp->fullWData(oldp+338,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_temp[24]),65);
    bufp->fullWData(oldp+341,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_temp[25]),65);
    bufp->fullWData(oldp+344,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_temp[26]),65);
    bufp->fullWData(oldp+347,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_temp[27]),65);
    bufp->fullWData(oldp+350,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_temp[28]),65);
    bufp->fullWData(oldp+353,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_temp[29]),65);
    bufp->fullWData(oldp+356,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_temp[30]),65);
    bufp->fullWData(oldp+359,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_temp[31]),65);
    bufp->fullCData(oldp+362,((((IData)(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cell4__ready_o) 
                                << 5U) | (((IData)(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cell3__ready_o) 
                                           << 4U) | 
                                          (((IData)(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cell2__ready_o) 
                                            << 3U) 
                                           | (((IData)(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cell1__ready_o) 
                                               << 2U) 
                                              | (((IData)(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cell0__ready_o) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cellB__ready_o))))))),6);
    bufp->fullWData(oldp+363,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_next1[0]),65);
    bufp->fullWData(oldp+366,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_next1[1]),65);
    bufp->fullWData(oldp+369,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_next1[2]),65);
    bufp->fullWData(oldp+372,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_next1[3]),65);
    bufp->fullWData(oldp+375,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_next1[4]),65);
    bufp->fullWData(oldp+378,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_next1[5]),65);
    bufp->fullWData(oldp+381,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_next1[6]),65);
    bufp->fullWData(oldp+384,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_next1[7]),65);
    bufp->fullWData(oldp+387,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_next1[8]),65);
    bufp->fullWData(oldp+390,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_next1[9]),65);
    bufp->fullWData(oldp+393,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_next1[10]),65);
    bufp->fullWData(oldp+396,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_next1[11]),65);
    bufp->fullWData(oldp+399,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_next1[12]),65);
    bufp->fullWData(oldp+402,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_next1[13]),65);
    bufp->fullWData(oldp+405,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_next1[14]),65);
    bufp->fullWData(oldp+408,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_next1[15]),65);
    bufp->fullWData(oldp+411,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_next2[0]),65);
    bufp->fullWData(oldp+414,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_next2[1]),65);
    bufp->fullWData(oldp+417,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_next2[2]),65);
    bufp->fullWData(oldp+420,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_next2[3]),65);
    bufp->fullWData(oldp+423,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_next2[4]),65);
    bufp->fullWData(oldp+426,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_next2[5]),65);
    bufp->fullWData(oldp+429,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_next2[6]),65);
    bufp->fullWData(oldp+432,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_next2[7]),65);
    bufp->fullWData(oldp+435,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_next3[0]),65);
    bufp->fullWData(oldp+438,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_next3[1]),65);
    bufp->fullWData(oldp+441,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_next3[2]),65);
    bufp->fullWData(oldp+444,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_next3[3]),65);
    bufp->fullWData(oldp+447,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_next4[0]),65);
    bufp->fullWData(oldp+450,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_next4[1]),65);
    bufp->fullWData(oldp+453,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__a_next5[0]),65);
    bufp->fullBit(oldp+456,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cellB__ready_o));
    bufp->fullWData(oldp+457,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[0]),65);
    bufp->fullWData(oldp+460,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[1]),65);
    bufp->fullWData(oldp+463,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[2]),65);
    bufp->fullWData(oldp+466,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[3]),65);
    bufp->fullWData(oldp+469,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[4]),65);
    bufp->fullWData(oldp+472,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[5]),65);
    bufp->fullWData(oldp+475,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[6]),65);
    bufp->fullWData(oldp+478,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[7]),65);
    bufp->fullWData(oldp+481,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[8]),65);
    bufp->fullWData(oldp+484,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[9]),65);
    bufp->fullWData(oldp+487,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[10]),65);
    bufp->fullWData(oldp+490,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[11]),65);
    bufp->fullWData(oldp+493,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[12]),65);
    bufp->fullWData(oldp+496,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[13]),65);
    bufp->fullWData(oldp+499,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[14]),65);
    bufp->fullWData(oldp+502,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[15]),65);
    bufp->fullWData(oldp+505,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[16]),65);
    bufp->fullWData(oldp+508,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[17]),65);
    bufp->fullWData(oldp+511,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[18]),65);
    bufp->fullWData(oldp+514,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[19]),65);
    bufp->fullWData(oldp+517,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[20]),65);
    bufp->fullWData(oldp+520,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[21]),65);
    bufp->fullWData(oldp+523,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[22]),65);
    bufp->fullWData(oldp+526,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[23]),65);
    bufp->fullWData(oldp+529,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[24]),65);
    bufp->fullWData(oldp+532,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[25]),65);
    bufp->fullWData(oldp+535,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[26]),65);
    bufp->fullWData(oldp+538,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[27]),65);
    bufp->fullWData(oldp+541,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[28]),65);
    bufp->fullWData(oldp+544,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[29]),65);
    bufp->fullWData(oldp+547,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[30]),65);
    bufp->fullWData(oldp+550,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell0__a_i[31]),65);
    bufp->fullWData(oldp+553,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[0]),65);
    bufp->fullWData(oldp+556,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[1]),65);
    bufp->fullWData(oldp+559,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[2]),65);
    bufp->fullWData(oldp+562,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[3]),65);
    bufp->fullWData(oldp+565,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[4]),65);
    bufp->fullWData(oldp+568,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[5]),65);
    bufp->fullWData(oldp+571,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[6]),65);
    bufp->fullWData(oldp+574,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[7]),65);
    bufp->fullWData(oldp+577,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[8]),65);
    bufp->fullWData(oldp+580,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[9]),65);
    bufp->fullWData(oldp+583,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[10]),65);
    bufp->fullWData(oldp+586,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[11]),65);
    bufp->fullWData(oldp+589,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[12]),65);
    bufp->fullWData(oldp+592,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[13]),65);
    bufp->fullWData(oldp+595,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[14]),65);
    bufp->fullWData(oldp+598,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cell0__result_o[15]),65);
    bufp->fullBit(oldp+601,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cell0__ready_o));
    bufp->fullIData(oldp+602,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__mult_cell0__DOT__unnamedblk1__DOT__device),32);
    bufp->fullIData(oldp+603,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__mult_cell0__DOT__unnamedblk2__DOT__device),32);
    bufp->fullWData(oldp+604,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[0]),65);
    bufp->fullWData(oldp+607,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[1]),65);
    bufp->fullWData(oldp+610,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[2]),65);
    bufp->fullWData(oldp+613,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[3]),65);
    bufp->fullWData(oldp+616,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[4]),65);
    bufp->fullWData(oldp+619,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[5]),65);
    bufp->fullWData(oldp+622,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[6]),65);
    bufp->fullWData(oldp+625,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[7]),65);
    bufp->fullWData(oldp+628,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[8]),65);
    bufp->fullWData(oldp+631,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[9]),65);
    bufp->fullWData(oldp+634,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[10]),65);
    bufp->fullWData(oldp+637,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[11]),65);
    bufp->fullWData(oldp+640,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[12]),65);
    bufp->fullWData(oldp+643,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[13]),65);
    bufp->fullWData(oldp+646,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[14]),65);
    bufp->fullWData(oldp+649,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell1__a_i[15]),65);
    bufp->fullWData(oldp+652,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[0]),65);
    bufp->fullWData(oldp+655,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[1]),65);
    bufp->fullWData(oldp+658,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[2]),65);
    bufp->fullWData(oldp+661,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[3]),65);
    bufp->fullWData(oldp+664,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[4]),65);
    bufp->fullWData(oldp+667,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[5]),65);
    bufp->fullWData(oldp+670,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[6]),65);
    bufp->fullWData(oldp+673,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cell1__result_o[7]),65);
    bufp->fullBit(oldp+676,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cell1__ready_o));
    bufp->fullIData(oldp+677,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__mult_cell1__DOT__unnamedblk1__DOT__device),32);
    bufp->fullIData(oldp+678,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__mult_cell1__DOT__unnamedblk2__DOT__device),32);
    bufp->fullWData(oldp+679,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i[0]),65);
    bufp->fullWData(oldp+682,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i[1]),65);
    bufp->fullWData(oldp+685,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i[2]),65);
    bufp->fullWData(oldp+688,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i[3]),65);
    bufp->fullWData(oldp+691,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i[4]),65);
    bufp->fullWData(oldp+694,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i[5]),65);
    bufp->fullWData(oldp+697,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i[6]),65);
    bufp->fullWData(oldp+700,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell2__a_i[7]),65);
    bufp->fullWData(oldp+703,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o[0]),65);
    bufp->fullWData(oldp+706,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o[1]),65);
    bufp->fullWData(oldp+709,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o[2]),65);
    bufp->fullWData(oldp+712,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cell2__result_o[3]),65);
    bufp->fullBit(oldp+715,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cell2__ready_o));
    bufp->fullIData(oldp+716,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__mult_cell2__DOT__unnamedblk1__DOT__device),32);
    bufp->fullIData(oldp+717,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__mult_cell2__DOT__unnamedblk2__DOT__device),32);
    bufp->fullWData(oldp+718,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell3__a_i[0]),65);
    bufp->fullWData(oldp+721,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell3__a_i[1]),65);
    bufp->fullWData(oldp+724,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell3__a_i[2]),65);
    bufp->fullWData(oldp+727,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell3__a_i[3]),65);
    bufp->fullWData(oldp+730,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cell3__result_o[0]),65);
    bufp->fullWData(oldp+733,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cell3__result_o[1]),65);
    bufp->fullBit(oldp+736,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cell3__ready_o));
    bufp->fullIData(oldp+737,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__mult_cell3__DOT__unnamedblk1__DOT__device),32);
    bufp->fullIData(oldp+738,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__mult_cell3__DOT__unnamedblk2__DOT__device),32);
    bufp->fullWData(oldp+739,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell4__a_i[0]),65);
    bufp->fullWData(oldp+742,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellinp__mult_cell4__a_i[1]),65);
    bufp->fullWData(oldp+745,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cell4__result_o[0]),65);
    bufp->fullBit(oldp+748,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cell4__ready_o));
    bufp->fullIData(oldp+749,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__mult_cell4__DOT__unnamedblk1__DOT__device),32);
    bufp->fullIData(oldp+750,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__mult_cell4__DOT__unnamedblk2__DOT__device),32);
    bufp->fullWData(oldp+751,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[0]),65);
    bufp->fullWData(oldp+754,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[1]),65);
    bufp->fullWData(oldp+757,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[2]),65);
    bufp->fullWData(oldp+760,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[3]),65);
    bufp->fullWData(oldp+763,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[4]),65);
    bufp->fullWData(oldp+766,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[5]),65);
    bufp->fullWData(oldp+769,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[6]),65);
    bufp->fullWData(oldp+772,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[7]),65);
    bufp->fullWData(oldp+775,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[8]),65);
    bufp->fullWData(oldp+778,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[9]),65);
    bufp->fullWData(oldp+781,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[10]),65);
    bufp->fullWData(oldp+784,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[11]),65);
    bufp->fullWData(oldp+787,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[12]),65);
    bufp->fullWData(oldp+790,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[13]),65);
    bufp->fullWData(oldp+793,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[14]),65);
    bufp->fullWData(oldp+796,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[15]),65);
    bufp->fullWData(oldp+799,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[16]),65);
    bufp->fullWData(oldp+802,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[17]),65);
    bufp->fullWData(oldp+805,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[18]),65);
    bufp->fullWData(oldp+808,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[19]),65);
    bufp->fullWData(oldp+811,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[20]),65);
    bufp->fullWData(oldp+814,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[21]),65);
    bufp->fullWData(oldp+817,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[22]),65);
    bufp->fullWData(oldp+820,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[23]),65);
    bufp->fullWData(oldp+823,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[24]),65);
    bufp->fullWData(oldp+826,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[25]),65);
    bufp->fullWData(oldp+829,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[26]),65);
    bufp->fullWData(oldp+832,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[27]),65);
    bufp->fullWData(oldp+835,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[28]),65);
    bufp->fullWData(oldp+838,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[29]),65);
    bufp->fullWData(oldp+841,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[30]),65);
    bufp->fullWData(oldp+844,(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cellB__result_o[31]),65);
    bufp->fullIData(oldp+847,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__mult_cellB__DOT__unnamedblk1__DOT__device),32);
    bufp->fullIData(oldp+848,(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__mult_cellB__DOT__unnamedblk2__DOT__device),32);
    bufp->fullIData(oldp+849,(vlSymsp->TOP__test_top__core_top0.__Vcellout__exe_mem0__csr_waddr_o),32);
    bufp->fullCData(oldp+850,((0x7fU & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)),7);
    bufp->fullCData(oldp+851,((0x1fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                        >> 7U))),5);
    bufp->fullCData(oldp+852,((0x1fU & ((0x2000U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                         ? (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                            >> 0xfU)
                                         : ((0x1000U 
                                             & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                             ? (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                >> 0xfU)
                                             : (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                                >> 0xfU))))),5);
    bufp->fullCData(oldp+853,(((IData)(vlSymsp->TOP__test_top__core_top0.id0__DOT__inst_type_r__DOT____VdfgExtracted_he1154c64__0)
                                ? (0x1fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                            >> 0xfU))
                                : 0U)),5);
    bufp->fullCData(oldp+854,(((IData)(vlSymsp->TOP__test_top__core_top0.id0__DOT__inst_type_r__DOT____VdfgExtracted_he1154c64__0)
                                ? (0x1fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                            >> 0x14U))
                                : 0U)),5);
    bufp->fullBit(oldp+855,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__r_reg1_re_o));
    bufp->fullBit(oldp+856,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__r_reg2_re_o));
    bufp->fullIData(oldp+857,(((0x2000U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
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
    bufp->fullBit(oldp+858,(vlSymsp->TOP__test_top__core_top0.__PVT__id0__DOT__r_reg_we_o));
    bufp->fullCData(oldp+859,((0x1fU & ((0x2000U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                         ? (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                            >> 7U) : 
                                        ((0x1000U & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)
                                          ? (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                             >> 7U)
                                          : (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                             >> 7U))))),5);
    bufp->fullCData(oldp+860,(((IData)(vlSymsp->TOP__test_top__core_top0.id0__DOT__inst_type_r__DOT____VdfgExtracted_he1154c64__0)
                                ? (0x1fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                            >> 7U))
                                : 0U)),5);
    bufp->fullCData(oldp+861,((0x1fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+862,((0x1fU & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+863,((7U & (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+864,((vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                               >> 0x19U)),7);
    bufp->fullBit(oldp+865,(((0x33U == (0x7fU & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)) 
                             & ((0U == (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                        >> 0x19U)) 
                                | (0x20U == (vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o 
                                             >> 0x19U))))));
    bufp->fullBit(oldp+866,((IData)((0x2000033U == 
                                     (0xfe00007fU & vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_o)))));
    bufp->fullCData(oldp+867,(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S),4);
    bufp->fullCData(oldp+868,(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__S_nxt),4);
    bufp->fullBit(oldp+869,((1U & vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_exception_o)));
    bufp->fullBit(oldp+870,((1U & (vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_exception_o 
                                   >> 1U))));
    bufp->fullBit(oldp+871,(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__eip));
    bufp->fullBit(oldp+872,(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__tip));
    bufp->fullBit(oldp+873,(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__sip));
    bufp->fullBit(oldp+874,(((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__eip) 
                             | ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__tip) 
                                | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__sip)))));
    bufp->fullBit(oldp+875,((1U & (((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mstatus_mie) 
                                    & ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__eip) 
                                       | ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__tip) 
                                          | (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__sip)))) 
                                   | (vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_exception_o 
                                      >> 1U)))));
    bufp->fullIData(oldp+876,((vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mtvec 
                               >> 2U)),30);
    bufp->fullIData(oldp+877,(((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_interrupt_type_o)
                                ? ((1U & vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mtvec)
                                    ? ((0xfffffffcU 
                                        & vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mtvec) 
                                       + ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_trap_casue_o) 
                                          << 2U)) : 
                                   (0xfffffffcU & vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mtvec))
                                : (0xfffffffcU & vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mtvec))),32);
    bufp->fullIData(oldp+878,(((1U & vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mtvec)
                                ? ((0xfffffffcU & vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mtvec) 
                                   + ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_trap_casue_o) 
                                      << 2U)) : (0xfffffffcU 
                                                 & vlSymsp->TOP__test_top__core_top0.__PVT__csr0__DOT__mtvec))),32);
    bufp->fullIData(oldp+879,(((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_trap_casue_o) 
                               << 2U)),32);
    bufp->fullBit(oldp+880,(vlSymsp->TOP__test_top__core_top0.__PVT__interrupt_ctrl0__DOT__exception));
    bufp->fullIData(oldp+881,((0xfffU & vlSymsp->TOP__test_top__core_top0.__Vcellout__exe_mem0__csr_waddr_o)),32);
    bufp->fullCData(oldp+882,((3U & vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_mem_addr_o)),2);
    bufp->fullIData(oldp+883,((0x1ffffcU & vlSymsp->TOP__test_top__core_top0.__PVT__pc_wire)),21);
    bufp->fullIData(oldp+884,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[0]),32);
    bufp->fullIData(oldp+885,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[1]),32);
    bufp->fullIData(oldp+886,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[2]),32);
    bufp->fullIData(oldp+887,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[3]),32);
    bufp->fullIData(oldp+888,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[4]),32);
    bufp->fullIData(oldp+889,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[5]),32);
    bufp->fullIData(oldp+890,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[6]),32);
    bufp->fullIData(oldp+891,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[7]),32);
    bufp->fullIData(oldp+892,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[8]),32);
    bufp->fullIData(oldp+893,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[9]),32);
    bufp->fullIData(oldp+894,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[10]),32);
    bufp->fullIData(oldp+895,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[11]),32);
    bufp->fullIData(oldp+896,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[12]),32);
    bufp->fullIData(oldp+897,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[13]),32);
    bufp->fullIData(oldp+898,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[14]),32);
    bufp->fullIData(oldp+899,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[15]),32);
    bufp->fullIData(oldp+900,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[16]),32);
    bufp->fullIData(oldp+901,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[17]),32);
    bufp->fullIData(oldp+902,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[18]),32);
    bufp->fullIData(oldp+903,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[19]),32);
    bufp->fullIData(oldp+904,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[20]),32);
    bufp->fullIData(oldp+905,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[21]),32);
    bufp->fullIData(oldp+906,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[22]),32);
    bufp->fullIData(oldp+907,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[23]),32);
    bufp->fullIData(oldp+908,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[24]),32);
    bufp->fullIData(oldp+909,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[25]),32);
    bufp->fullIData(oldp+910,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[26]),32);
    bufp->fullIData(oldp+911,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[27]),32);
    bufp->fullIData(oldp+912,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[28]),32);
    bufp->fullIData(oldp+913,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[29]),32);
    bufp->fullIData(oldp+914,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[30]),32);
    bufp->fullIData(oldp+915,(vlSymsp->TOP__test_top__core_top0__regfile0.__PVT__regs[31]),32);
    bufp->fullBit(oldp+916,(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_interrupt_en_o));
    bufp->fullIData(oldp+917,(vlSymsp->TOP__test_top__core_top0.__PVT__if_id_inst_addr_o),32);
    bufp->fullIData(oldp+918,(vlSymsp->TOP__test_top__core_top0.__PVT__id_exe_inst_addr_o),32);
    bufp->fullIData(oldp+919,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_mem_inst_addr_o),32);
    bufp->fullBit(oldp+920,(vlSelf->clk_i));
    bufp->fullBit(oldp+921,(vlSelf->rst_i));
    bufp->fullBit(oldp+922,(vlSelf->halt_o));
    bufp->fullIData(oldp+923,(((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__ce_wire)
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
    bufp->fullBit(oldp+924,(((~ (IData)(vlSelf->rst_i)) 
                             & (IData)(vlSymsp->TOP__test_top.__PVT__u_bus__DOT__host_sel_req))));
    bufp->fullBit(oldp+925,((1U & (~ (IData)(vlSelf->rst_i)))));
    bufp->fullIData(oldp+926,(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_epc_o),32);
    bufp->fullIData(oldp+927,(vlSymsp->TOP__test_top__core_top0.__PVT__ctrl_pc_o),32);
    bufp->fullIData(oldp+928,((((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg1_re_o) 
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
    bufp->fullIData(oldp+929,((((((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__id_reg2_re_o) 
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
    bufp->fullBit(oldp+930,(vlSymsp->TOP__test_top__core_top0.__PVT__exe_stallreq_o));
    bufp->fullIData(oldp+931,(vlSymsp->TOP__test_top__core_top0.__PVT__mem_inst_addr_o),32);
    bufp->fullBit(oldp+932,(((~ ((IData)(vlSelf->rst_i) 
                                 | (~ (IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__req)))) 
                             & ((IData)(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____VdfgExtracted_hccf441aa__0) 
                                | ((IData)(vlSymsp->TOP__test_top__core_top0.__PVT__exe0__DOT__mul0__DOT__req) 
                                   & (IData)(vlSymsp->TOP__test_top__core_top0.exe0__DOT__mul0__DOT____Vcellout__mult_cell4__ready_o))))));
    bufp->fullIData(oldp+933,((vlSymsp->TOP__test_top.__PVT__device_req
                               [1U] ? ((vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                        [(0x1ffffcU 
                                          & vlSymsp->TOP__test_top.__PVT__device_addr
                                          [1U])] << 0x18U) 
                                       | ((vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                           [(0x1fffffU 
                                             & ((IData)(1U) 
                                                + (0x1ffffcU 
                                                   & vlSymsp->TOP__test_top.__PVT__device_addr
                                                   [1U])))] 
                                           << 0x10U) 
                                          | ((vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                              [(0x1fffffU 
                                                & ((IData)(2U) 
                                                   + 
                                                   (0x1ffffcU 
                                                    & vlSymsp->TOP__test_top.__PVT__device_addr
                                                    [1U])))] 
                                              << 8U) 
                                             | vlSymsp->TOP__test_top__data_ram0.__PVT__mem
                                             [(0x1fffffU 
                                               & ((IData)(3U) 
                                                  + 
                                                  (0x1ffffcU 
                                                   & vlSymsp->TOP__test_top.__PVT__device_addr
                                                   [1U])))])))
                                : 0U)),32);
    bufp->fullIData(oldp+934,(3U),32);
    bufp->fullIData(oldp+935,(1U),32);
    bufp->fullIData(oldp+936,(0x200000U),32);
    bufp->fullIData(oldp+937,(0x15U),32);
    bufp->fullBit(oldp+938,(0U));
    bufp->fullSData(oldp+939,(0U),16);
    bufp->fullSData(oldp+940,(0x4000U),16);
    bufp->fullSData(oldp+941,(0xbff8U),16);
    bufp->fullBit(oldp+942,(1U));
    bufp->fullCData(oldp+943,(4U),8);
    bufp->fullCData(oldp+944,(8U),8);
    bufp->fullIData(oldp+945,(3U),32);
    bufp->fullIData(oldp+946,(1U),32);
    bufp->fullIData(oldp+947,(0x20U),32);
    bufp->fullIData(oldp+948,(2U),32);
    bufp->fullIData(oldp+949,(0xffffffffU),32);
    bufp->fullIData(oldp+950,(3U),32);
    bufp->fullIData(oldp+951,(1U),32);
    bufp->fullBit(oldp+952,(vlSymsp->TOP__test_top__core_top0.__PVT__int_ctrl_flush_o));
    bufp->fullIData(oldp+953,(0U),32);
    bufp->fullIData(oldp+954,(0x16U),32);
    bufp->fullCData(oldp+955,(1U),2);
    bufp->fullIData(oldp+956,(0x1100U),26);
    bufp->fullIData(oldp+957,(0x40001100U),32);
    bufp->fullCData(oldp+958,(3U),2);
    bufp->fullCData(oldp+959,(0U),3);
    bufp->fullCData(oldp+960,(1U),3);
    bufp->fullCData(oldp+961,(3U),3);
    bufp->fullIData(oldp+962,(0x10U),32);
    bufp->fullIData(oldp+963,(8U),32);
    bufp->fullIData(oldp+964,(4U),32);
    bufp->fullCData(oldp+965,(0U),5);
    bufp->fullBit(oldp+966,(1U));
    bufp->fullCData(oldp+967,(1U),4);
    bufp->fullCData(oldp+968,(2U),4);
    bufp->fullCData(oldp+969,(4U),4);
    bufp->fullCData(oldp+970,(8U),4);
    bufp->fullIData(oldp+971,(0x200000U),32);
    bufp->fullIData(oldp+972,(0x15U),32);
}

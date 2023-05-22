// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtest_top_regfile.h"

void Vtest_top_regfile::readRegister(uint32_t raddr, uint32_t& val) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtest_top_regfile::readRegister\n"); );
    // Body
    val = this->__PVT__regs[(0x1fU & raddr)];
}

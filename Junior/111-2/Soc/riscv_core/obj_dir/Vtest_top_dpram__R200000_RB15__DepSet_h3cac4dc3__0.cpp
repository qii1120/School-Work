// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtest_top_dpram__R200000_RB15.h"

void Vtest_top_dpram__R200000_RB15::readByte(uint32_t byte_addr, uint32_t& val) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtest_top_dpram__R200000_RB15::readByte\n"); );
    // Body
    val = this->__PVT__mem[(0x1fffffU & byte_addr)];
}

void Vtest_top_dpram__R200000_RB15::writeByte(uint32_t byte_addr, uint32_t val) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtest_top_dpram__R200000_RB15::writeByte\n"); );
    // Body
    this->__PVT__mem[(0x1fffffU & byte_addr)] = val;
}

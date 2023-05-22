// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtest_top__Syms.h"
#include "Vtest_top.h"
#include "Vtest_top___024root.h"
#include "Vtest_top_test_top.h"
#include "Vtest_top_core_top.h"
#include "Vtest_top_dpram__R200000_RB15.h"
#include "Vtest_top_regfile.h"

// FUNCTIONS
Vtest_top__Syms::~Vtest_top__Syms()
{
}

Vtest_top__Syms::Vtest_top__Syms(VerilatedContext* contextp, const char* namep, Vtest_top* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__test_top{this, Verilated::catName(namep, "test_top")}
    , TOP__test_top__core_top0{this, Verilated::catName(namep, "test_top.core_top0")}
    , TOP__test_top__core_top0__regfile0{this, Verilated::catName(namep, "test_top.core_top0.regfile0")}
    , TOP__test_top__data_ram0{this, Verilated::catName(namep, "test_top.data_ram0")}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.test_top = &TOP__test_top;
    TOP__test_top.core_top0 = &TOP__test_top__core_top0;
    TOP__test_top__core_top0.regfile0 = &TOP__test_top__core_top0__regfile0;
    TOP__test_top.data_ram0 = &TOP__test_top__data_ram0;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__test_top.__Vconfigure(true);
    TOP__test_top__core_top0.__Vconfigure(true);
    TOP__test_top__core_top0__regfile0.__Vconfigure(true);
    TOP__test_top__data_ram0.__Vconfigure(true);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
    }
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTEST_TOP__SYMS_H_
#define VERILATED_VTEST_TOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtest_top.h"

// INCLUDE MODULE CLASSES
#include "Vtest_top___024root.h"
#include "Vtest_top_test_top.h"
#include "Vtest_top_core_top.h"
#include "Vtest_top_dpram__R200000_RB15.h"
#include "Vtest_top_regfile.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class Vtest_top__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtest_top* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtest_top___024root            TOP;
    Vtest_top_test_top             TOP__test_top;
    Vtest_top_core_top             TOP__test_top__core_top0;
    Vtest_top_regfile              TOP__test_top__core_top0__regfile0;
    Vtest_top_dpram__R200000_RB15  TOP__test_top__data_ram0;

    // CONSTRUCTORS
    Vtest_top__Syms(VerilatedContext* contextp, const char* namep, Vtest_top* modelp);
    ~Vtest_top__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard

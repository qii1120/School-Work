# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vtest_top.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 0
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vtest_top \
	Vtest_top___024root__DepSet_h23aaccb8__0 \
	Vtest_top___024root__DepSet_h76c3b2a4__0 \
	Vtest_top_test_top__DepSet_h43df7e51__0 \
	Vtest_top_core_top__DepSet_h0a0c36c8__0 \
	Vtest_top_dpram__R200000_RB15__DepSet_h5d83a859__0 \
	Vtest_top_dpram__R200000_RB15__DepSet_h3cac4dc3__0 \
	Vtest_top_regfile__DepSet_h717a3bd1__0 \
	Vtest_top_regfile__DepSet_h2873dd4b__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vtest_top___024root__Slow \
	Vtest_top___024root__DepSet_h23aaccb8__0__Slow \
	Vtest_top___024root__DepSet_h76c3b2a4__0__Slow \
	Vtest_top_test_top__Slow \
	Vtest_top_test_top__DepSet_h43df7e51__0__Slow \
	Vtest_top_test_top__DepSet_h56d91fcb__0__Slow \
	Vtest_top_core_top__Slow \
	Vtest_top_core_top__DepSet_h0a0c36c8__0__Slow \
	Vtest_top_core_top__DepSet_h8f25d834__0__Slow \
	Vtest_top_dpram__R200000_RB15__Slow \
	Vtest_top_dpram__R200000_RB15__DepSet_h3cac4dc3__0__Slow \
	Vtest_top_regfile__Slow \
	Vtest_top_regfile__DepSet_h2873dd4b__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vtest_top__Dpi \
	Vtest_top__Trace__0 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vtest_top__Syms \
	Vtest_top__Trace__0__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \
	verilated_vcd_c \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-

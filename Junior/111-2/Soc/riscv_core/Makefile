TOP = test_top
GTKWAVE = gtkwave

V_SRC = $(wildcard ./vsrc/*.v)
V_SRC += $(wildcard ./vsrc/soc/*.v)
V_SRC += $(wildcard ./vsrc/device/*.v)
V_SRC += $(wildcard ./vsrc/core/*.v)
V_SRC += $(wildcard ./vsrc/core/exe/*.v)
V_SRC += $(wildcard ./vsrc/core/id/*.v)
V_SRC += $(wildcard ./vsrc/core/if/*.v)
V_SRC += $(wildcard ./vsrc/core/mem/*.v)
V_SRC += $(wildcard ./vsrc/core/wb/*.v)
V_SRC += $(wildcard ./vsrc/core/ctrl/*.v)

TESTBENCH_SRC = $(wildcard ./tb/*.cpp)
VTOP = ./vsrc/soc/${TOP}.v
INC = -Ivsrc/core/include
PROG = test
PROG_S = $(wildcard ./test_src/*.S)

.DEFAULT_GOAL := all
all: vhdl

obj_dir/V${TOP}.mk: ${V_SRC} ${TESTBENCH_SRC} 
	verilator -Wall --cc --exe --build ${TESTBENCH_SRC} ${INC} ${V_SRC} --trace
	
obj_dir/V${TOP}.exe : obj_dir/V${TOP}.mk
	$(MAKE) -C obj_dir -f V$(TOP).mk

test_src/${PROG}.bin:
	$(MAKE) -C test_src

.PHONY : vhdl
vhdl: obj_dir/V${TOP}.mk

.PHONY : run
run: test_src/${PROG}.bin obj_dir/V${TOP}.exe 
	obj_dir/V${TOP} test_src/${PROG}.bin

.PHONY : wave
wave: run
	${GTKWAVE} wave.vcd

.PHONY : clean
clean:
	rm -rf obj_dir wave.vcd
	rm -rf test_src/*.elf test_src/*.bin
verilator counter.v --exe testbench.cpp --cc
make -C obj_dir -f Vcounter.mk
./obj_dir/Vcounter
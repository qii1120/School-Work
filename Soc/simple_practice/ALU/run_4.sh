verilator -Wall --cc --exe --build testbench_4.cpp ALU_4.v --trace
make -C obj_dir -f VALU_4.mk
./obj_dir/VALU_4
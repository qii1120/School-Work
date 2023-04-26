verilator -Wall --cc --exe --build testbench_1.cpp ALU_1.v --trace
make -C obj_dir -f VALU_1.mk
./obj_dir/VALU_1
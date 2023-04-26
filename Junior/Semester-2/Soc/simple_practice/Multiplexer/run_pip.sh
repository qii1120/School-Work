verilator -Wall --cc --exe --build testbench_pip.cpp mul_pip.v --trace
make -C obj_dir -f Vmul_pip.mk
./obj_dir/Vmul_pip
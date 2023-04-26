verilator -Wall --cc --exe --build testbench.cpp mul.v --trace
make -C obj_dir -f Vmul.mk
./obj_dir/Vmul
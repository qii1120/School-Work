verilator -Wall --cc --exe --build testbench.cpp rom.v --trace
make -C obj_dir -f Vrom.mk
./obj_dir/Vrom
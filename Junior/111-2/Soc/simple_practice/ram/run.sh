verilator -Wall --cc --exe --build testbench.cpp ram.v --trace
make -C obj_dir -f Vram.mk
./obj_dir/Vram
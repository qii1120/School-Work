verilator -Wall --cc --exe --build testbench.cpp mux_case.v --trace
make -C obj_dir -f Vmux_case.mk
./obj_dir/Vmux_case
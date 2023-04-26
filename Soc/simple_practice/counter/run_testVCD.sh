verilator -Wall --cc --exe --build testbenchVCD.cpp counter.v --trace
make -C obj_dir -f Vcounter.mk
./obj_dir/Vcounter
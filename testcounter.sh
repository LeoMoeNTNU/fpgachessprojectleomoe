verilator -Wall -cc hw/counter.sv --exe tests/testcounter.cpp
make -C obj_dir -f Vcounter.mk Vcounter
./obj_dir/Vcounter
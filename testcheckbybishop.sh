verilator --binary types/chesstypes.sv hw/checkbybishop.sv tests/testcheckbybishop.sv --top testcheckbybishop
./obj_dir/Vtestcheckbybishop

rm ./obj_dir/Vtestcheckbybishop
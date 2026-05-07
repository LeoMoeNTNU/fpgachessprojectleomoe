verilator --binary types/chesstypes.sv hw/checkbyqueen.sv tests/testcheckbyqueen.sv --top testcheckbyqueen
./obj_dir/Vtestcheckbyqueen

rm ./obj_dir/Vtestcheckbyqueen
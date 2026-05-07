verilator --binary types/chesstypes.sv hw/checkbytower.sv tests/testcheckbytower.sv --top testcheckbytower
./obj_dir/Vtestcheckbytower

rm ./obj_dir/Vtestcheckbytower
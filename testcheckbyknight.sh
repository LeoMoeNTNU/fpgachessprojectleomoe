verilator --binary types/chesstypes.sv hw/checkbyknight.sv tests/testcheckbyknight.sv --top testcheckbyknight
./obj_dir/Vtestcheckbyknight

rm ./obj_dir/Vtestcheckbyknight
verilator --binary types/chesstypes.sv hw/checkfrompawn.sv tests/testcheckfrompawn.sv --top testcheckfrompawn
./obj_dir/Vtestcheckfrompawn

rm ./obj_dir/Vtestcheckfrompawn
verilator --binary types/chesstypes.sv heuristics/materialcount.sv tests/testmaterialcount.sv --top testmaterialcount
./obj_dir/Vtestmaterialcount

rm ./obj_dir/Vtestmaterialcount
verilator --binary types/chesstypes.sv heuristics/materialcount2.sv tests/testmaterialcount.sv --top testmaterialcount
./obj_dir/Vtestmaterialcount

rm ./obj_dir/Vtestmaterialcount
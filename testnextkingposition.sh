verilator --binary types/chesstypes.sv hw/nextkingpositions.sv tests/testnextkingposition.sv --top testnextkingposition
./obj_dir/Vtestnextkingposition

rm ./obj_dir/Vtestnextkingposition
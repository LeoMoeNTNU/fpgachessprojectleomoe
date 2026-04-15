verilator --timing --binary types/chesstypes.sv movegens/kingmoves.sv movegens/tests/kingmovestest.sv --top kingmovestest
./obj_dir/Vkingmovestest

rm ./obj_dir/Vkingmovestest


verilator --timing --binary types/chesstypes.sv tests/testcastling.sv \
    hw/checkbybishop.sv hw/checkbyknight.sv \
    hw/checkbyqueen.sv hw/checkbytower.sv hw/checkfrompawn.sv \
    hw/threatened.sv hw/castling.sv \
     --top testcastling
./obj_dir/Vtestcastling

rm ./obj_dir/Vtestcastling

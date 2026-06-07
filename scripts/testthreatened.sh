verilator --binary types/chesstypes.sv hw/checkbybishop.sv hw/checkbyknight.sv hw/checkbyqueen hw/checkbytower hw/checkfrompawn hw/threatened.sv tests/testthreatened.sv --top testthreatened
./obj_dir/Vtestthreatened

rm ./obj_dir/Vtestthreatened
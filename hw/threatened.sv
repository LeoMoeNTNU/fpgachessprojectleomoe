import chesstypes::*;
/*
I think the right thing is to give it: 
1. the board. 
2. the player I am checking for. 
3. the coordinate, which is 6 bits. 
bear in mind that they use the name checkby... when this doesnt really have anything to do with a check. 
For this reason I am not actually using the valid signal. 
*/

/*
 input  fullpiece_t board [63:0],
    input  logic [5:0] kingPosition,

    input color_t playing,
*/


module threatened (
    input fullpiece_t [63:0] board,
    input color_t playing,
    input logic [5:0] coord,

    output logic attacked
    


);
    logic [4:0] attacked_arr;
    logic [4:0] valid_arr;

    checkbybishop cbb(  
        .board(board),
        .kingPosition(coord),
        .playing(playing),
        .attacked(attacked_arr[0]),
        .valid(valid_arr[0])
    );
    checkbyknight cbk(
             .board(board),
        .kingPosition(coord),
        .playing(playing),
        .attacked(attacked_arr[1]),
        .valid(valid_arr[1])
    
    );
    checkbyqueen cbq(
        .board(board),
        .kingPosition(coord),
        .playing(playing),
        .attacked(attacked_arr[2]),
        .valid(valid_arr[2])
    );
    checkbytower cbt(
        .board(board),
        .kingPosition(coord),
        .playing(playing),
        .attacked(attacked_arr[3]),
        .valid(valid_arr[3])
    );
    checkfrompawn cfp(
        .board(board),
        .kingPosition(coord),
        .playing(playing),
        .attacked(attacked_arr[4]),
        .valid(valid_arr[4])
    );
    
    assign attacked=
    cbb.attacked|
    cbk.attacked|
    cbq.attacked|
    cbt.attacked|
    cfp.attacked;



endmodule
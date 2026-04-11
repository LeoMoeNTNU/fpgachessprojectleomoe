import import chesstypes::*;
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

    checkbybishop cbb(
        .board(board),
        .kingPosition(coord),
        .playing(playing)
    );
    checkbyknight cbk(
             .board(board),
        .kingPosition(coord),
        .playing(playing)
    
    );
    checkbyqueen cbq(
        .board(board),
        .kingPosition(coord),
        .playing(playing)
    );
    checkbytower cbt(
        .board(board),
        .kingPosition(coord),
        .playing(playing)
    );
    checkfrompawn cfp(
        .board(board),
        .kingPosition(coord),
        .playing(playing)
    );
    
    assign attacked=cbb.attacked|cbk.attacked|cbq.attacked|cbt.attacked|cfp.attacked;



endmodule
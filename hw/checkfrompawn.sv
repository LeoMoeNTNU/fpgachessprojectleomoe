//made by Leo:

import chesstypes::*;
//import chesstypes::color_t;
//import chesstypes::fullpiece_t;
//import chesstypes::piece_t;

/*
    // Correct row/col functions
    function automatic logic [2:0] row(input logic [5:0] index);
        return index[5:3];
    endfunction

    function automatic logic [2:0] col(input logic [5:0] index);
        return index[2:0];
    endfunction
*/

module checkfrompawn (
    input  fullpiece_t board [63:0],
    input  logic [5:0] kingPosition,

    output logic attacked,
    output logic valid,

    output logic out_attackedfromright,//for debugging
    output logic out_attackedfromleft,

    output logic [5:0] out_rightpawnattack,
    output logic [5:0] out_leftpawnattack,

    output logic[2:0] out_row,
    output logic[2:0] out_col
);

    logic [2:0] row;
    logic [2:0] col;


    color_t playing;
    logic leftattackvalid;
    logic rightattackvalid;
    logic [2:0] coltoattackfrom;

    logic [5:0] leftpawnattack;
    logic [5:0] rightpawnattack;

    logic attackedfromleft;
    logic attackedfromright;

    always_comb begin : combinatorial     

    row =chesstypes::row(kingPosition);
    col=chesstypes::col(kingPosition);
    playing =board[kingPosition].color;
   
    valid = ((board[kingPosition].piece)==KING);

    leftattackvalid=1;
    rightattackvalid=1;

    coltoattackfrom=(playing==WHITE)?col+3'b001:col+3'b111;
    /*
    if(playing==WHITE && col==7) begin
        leftattackvalid = 1'b0;
        rightattackvalid = 1'b0;
    end
    if(playing==BLACK && col==0) begin
       leftattackvalid =1'b0;
       rightattackvalid =1'b0; 
    end
     */

    if(row==0)
        leftattackvalid =1'b0;
    if(row==7)
        rightattackvalid =1'b0;
    
    leftpawnattack=fullcoord(row-1,coltoattackfrom);
    rightpawnattack=fullcoord(row+1,coltoattackfrom);

    attackedfromleft=
        board[leftpawnattack].color!=playing&&
        board[leftpawnattack].piece==PAWN&&
        leftattackvalid;
    
    attackedfromright=
        board[rightpawnattack].color!=playing&&
        board[rightpawnattack].piece==PAWN&&
        rightattackvalid;
    
    attacked=attackedfromleft|attackedfromright;

    //the 2 lines below are for debug
    out_attackedfromright=attackedfromright;
    out_attackedfromleft=attackedfromleft;
    out_rightpawnattack=rightpawnattack;
    out_leftpawnattack=leftpawnattack;
    out_row=row;
    out_col=col;

    end

endmodule

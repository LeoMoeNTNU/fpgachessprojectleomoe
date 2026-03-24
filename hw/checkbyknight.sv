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

module checkbyknight (
    input  fullpiece_t board [63:0],
    input  logic [5:0] kingPosition,

    input color_t playing,

    output logic attacked,
    output logic valid//says if there in fact is a king here at all!

);
    logic upleft;
    logic upright;
    logic leftup;
    logic leftdown;
    logic downright;
    logic downleft;
    logic rightdown;
    logic rightup;
    logic [2:0] row;
    logic [2:0] col;

        always_comb begin: combinatorial

        row=chesstypes::row(kingPosition);
    col=chesstypes::col(kingPosition);

    valid=(board[fullcoord(row,col)].color==playing&&board[fullcoord(row,col)].piece==KING);

    upleft= (row-1<row)&& (col+2>col)&& board[fullcoord(row-1,col+2)].color!=playing&&board[fullcoord(row-1,col+2)].piece==KNIGHT;
    upright= (row+1>row)&& (col+2>col)&& board[fullcoord(row+1,col+2)].color!=playing&&board[fullcoord(row+1,col+2)].piece==KNIGHT;

    leftup= (row-2<row)&& (col+1>col)&& board[fullcoord(row-2,col+1)].color!=playing&&board[fullcoord(row-2,col+1)].piece==KNIGHT;
    leftdown= (row-2<row)&& (col-1<col)&& board[fullcoord(row-2,col-1)].color!=playing&&board[fullcoord(row-2,col-1)].piece==KNIGHT;

    downright=(row+1>row)&& (col-2<col)&& board[fullcoord(row+1,col-2)].color!=playing&&board[fullcoord(row+1,col-2)].piece==KNIGHT;
    downleft=  (row-1<row)&& (col-2<col)&& board[fullcoord(row-1,col-2)].color!=playing&&board[fullcoord(row-1,col-2)].piece==KNIGHT;

    rightdown=(row+2>row)&& (col-1<col)&& board[fullcoord(row+2,col-1)].color!=playing&&board[fullcoord(row+2,col-1)].piece==KNIGHT;
    rightup=(row+2>row)&& (col+1>col)&& board[fullcoord(row+2,col+1)].color!=playing&&board[fullcoord(row+2,col+1)].piece==KNIGHT;
            
    attacked=upleft|upright|leftup|leftdown|downright|downleft|rightdown|rightup;

        end


endmodule
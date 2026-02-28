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

module checkbytower (
    input  fullpiece_t board [63:0],
    input  logic [5:0] kingPosition,

    output logic attacked,
    output logic valid,

    output logic out_righttowerattack,
    output logic out_lefttowerattack,

    output logic[2:0] out_row,
    output logic[2:0] out_col,

    output logic [1:0] out_status_col [7:0]
);

    `define ENEMYROOK 2'b00
    `define EMPTY 2'b01
    `define NOTENEMYROOK 2'b10
    `define EXTRA 2'b11 //just extra because itd what to do with it...



    logic [2:0] row;
    logic [2:0] col;
    logic lefttowerattack;
    logic righttowerattack;
    fullpiece_t wholecol [7:0];
    logic [1:0] status_col [7:0];
    color_t playing;


    always_comb begin: combinatorial
   
    playing=board[kingPosition].color;
    row=chesstypes::row(kingPosition);
    col=chesstypes::col(kingPosition);

    for(int i=0;i<8;i=i+1)begin
        wholecol[i] =board[fullcoord(3'(i),col)];

    end
    for(int i=0;i<8;i=i+1)begin
        status_col[i]=(wholecol[i].piece==EMPTY)?(`EMPTY):((wholecol[i].color!=playing&&wholecol[i].piece==ROOK)?`ENEMYROOK:`NOTENEMYROOK);    
    end

    lefttowerattack=
    ((row-1)<row&&status_col[row-1]==`ENEMYROOK)||((status_col[row-1]==`EMPTY)&
    ((row-2)<row&&status_col[row-2]==`ENEMYROOK)||((status_col[row-2]==`EMPTY)&
    ((row-3)<row&&status_col[row-3]==`ENEMYROOK)||((status_col[row-3]==`EMPTY)&
    ((row-4)<row&&status_col[row-4]==`ENEMYROOK)||((status_col[row-4]==`EMPTY)&
    ((row-5)<row&&status_col[row-5]==`ENEMYROOK)||((status_col[row-5]==`EMPTY)&
    ((row-6)<row&&status_col[row-6]==`ENEMYROOK)||((status_col[row-6]==`EMPTY)&
    ((row-7)<row&&status_col[row-7]==`ENEMYROOK)


    ))))));

    righttowerattack=0;

    attacked=lefttowerattack|righttowerattack;


     out_lefttowerattack=lefttowerattack; 
    out_righttowerattack=righttowerattack;
    out_row=row;
    out_col=col;
    out_status_col=status_col;


    end

endmodule
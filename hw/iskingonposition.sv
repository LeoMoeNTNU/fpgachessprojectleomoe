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

module iskingonposition (
    input  fullpiece_t board [63:0],
    input  logic [5:0] kingPosition,
    //input  color_t playing,
    output logic kinghere
);

    assign kinghere = ((board[kingPosition].piece)==KING);
    

endmodule

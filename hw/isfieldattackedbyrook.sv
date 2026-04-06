//made by Leo:

//import chesstypes::*;
import chesstypes::color_t;
import chesstypes::fullpiece_t;


/*
    // Correct row/col functions
    function automatic logic [2:0] row(input logic [5:0] index);
        return index[5:3];
    endfunction

    function automatic logic [2:0] col(input logic [5:0] index);
        return index[2:0];
    endfunction
*/

//not started...+

module iskingonposition (
    input  fullpiece_t board [63:0],
    input  logic [5:0] field,
    input  color_t playing,
    output logic kinghere
);

    assign kinghere = ((board[kingPosition].piece)==KING);
    

endmodule

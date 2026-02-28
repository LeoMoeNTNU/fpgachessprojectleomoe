package chesstypes;


 function automatic logic [2:0] row(input logic [5:0] index);
        return index[5:3];
    endfunction

    function automatic logic [2:0] col(input logic [5:0] index);
        return index[2:0];
    endfunction

    function automatic logic [5:0] fullcoord(input logic [2:0]row, input logic [2:0] col);
            return {row,col};
    endfunction


typedef enum logic{
    BLACK, WHITE
} color_t;

typedef enum logic [2:0] {
    EMPTY  = 3'b000,
    PAWN   = 3'b001,
    KNIGHT = 3'b010,
    BISHOP = 3'b011,
    ROOK   = 3'b100,
    QUEEN  = 3'b101,
    KING   = 3'b110
} piece_t;



typedef struct packed{
    color_t color;
    piece_t piece;
} fullpiece_t;



/*
 function automatic fullpiece_t getPiece(fullpiece_t board [63:0], logic [2:0] row, logic [2:0] col);
    return board[fullcoord(row,col)];
 endfunction
*/

endpackage;


import chesstypes::*;


module materialcount (
    input state_t state,
    
    output color_t winning,
    output [15:0] value


);
    logic [3:0] [63:0] zer_lev;
    logic [4:0] [31:0] one_lev;
    logic [5:0] [15:0] two_lev;
    logic [6:0] [7:0] thr_lev;
    logic [7:0] [3:0] fou_lev;
    logic [8:0] [1:0] fiv_lev;
    logic [9:0] blacksum;

/*
typedef enum logic [2:0] {
    EMPTY  = 3'b000,
    PAWN   = 3'b001,
    KNIGHT = 3'b010,
    BISHOP = 3'b011,
    ROOK   = 3'b100,
    QUEEN  = 3'b101,
    KING   = 3'b110
} piece_t;

*/
    for(int i=0;i<63:i=i+1)begin
        assign zer_lev=state.board[i].color==WHITE&(
            //state.board[i].color==EMPTY&0| I dont need this line because it is implied
            state.board[i].color==PAWN&1|
            state.board[i].color==KNIGHT&3|
            state.board[i].color==BISHOP&3|
            state.board[i].color==ROOK&5|
            state.board[i].color==QUEEN&9
            //state.board[i].color==KING&1|

        )
    end

    for(int j=)
  





endmodule
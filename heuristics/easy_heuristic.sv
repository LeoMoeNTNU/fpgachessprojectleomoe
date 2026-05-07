import chesstypes::*;


module materialcount (
    input state_t state,
    
    output color_t winning,
    output [15:0] value


);
    //`define ENEMYBISHOP 2'b00
    localparam QUEEN_VALUE = 900;
    localparam ROOK_VALUE = 500;
    localparam KNIGHT_VALUE = 300;
    localparam BISHOP_VALUE = 320;
    localparam PAWN_VALUE = 100;

    localparam COUNT_WIDTH = $clog2(QUEEN_VALUE * 16);

    logic [63:0] [3:0]black_zer_lev;
    logic [31:0] [4:0]black_one_lev;
    logic [15:0] [5:0]black_two_lev;
    logic [7:0] [6:0]black_thr_lev;
    logic [3:0] [7:0]black_fou_lev;
    logic [1:0] [8:0]black_fiv_lev;
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
    /*
    for(i=0;i<63;i=i+1)begin
        assign black_zer_lev[i]=(state.board[i].color==WHITE)?(
            //state.board[i].color==EMPTY&0| I dont need this line because it is implied
            state.board[i].piece==PAWN&1|
            state.board[i].piece==KNIGHT&3|
            state.board[i].piece==BISHOP&3|
            state.board[i].piece==ROOK&5|
            state.board[i].piece==QUEEN&9
            //state.board[i].color==KING&1|

        ):0;
    end
    */
    genvar i;
generate
    for (i = 0; i < 64; i++) begin : gen_values
        assign black_zer_lev[i] =
            (state.board[i].color == BLACK) ? (
                (state.board[i].piece == PAWN)   ? 1 :
                (state.board[i].piece == KNIGHT) ? 3 :
                (state.board[i].piece == BISHOP) ? 3 :
                (state.board[i].piece == ROOK)   ? 5 :
                (state.board[i].piece == QUEEN)  ? 9 :
                0
            ) : 0;
    end
endgenerate

    
    for(i=0;i<32;i=i+1)begin
        assign black_one_lev[i]=black_zer_lev[2*i]+black_zer_lev[2*i+1];
    end

    for(i=0;i<16;i=i+1)begin
        assign black_two_lev[i]=black_one_lev[2*i]+black_black_one_lev[2*i+1];
    end

    for(i=0;i<8;i=i+1)begin
        assign black_thr_lev[i]=black_two_lev[2*i]+black_two_lev[2*i+1];
    end

    for(i=0;i<4;i=i+1)begin
        assign black_fou_lev[i]=black_thr_lev[2*i]+black_thr_lev[2*i+1];
    end

    for(i=0;i<2;i=i+1)begin
        assign black_fiv_lev[i]=black_fou_lev[2*i]+black_fou_lev[2*i+1];
    end
    assign blacksum=black_fiv_lev[0]+black_fiv_lev[1];

    assign winning=BLACK;
    assign value={6'd0,blacksum};

  





endmodule
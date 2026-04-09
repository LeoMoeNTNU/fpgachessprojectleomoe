import chesstypes::*;


module materialcount (
    input state_t state,
    
    output color_t winning,
    output [15:0] value


);
    logic [63:0] [3:0] zer_lev;
    logic [31:0] [4:0]one_lev;
    logic [15:0] [5:0]two_lev;
    logic [7:0] [6:0]thr_lev;
    logic [3:0] [7:0]fou_lev;
    logic [1:0] [8:0]fiv_lev;
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
        assign zer_lev[i]=(state.board[i].color==WHITE)?(
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
        assign zer_lev[i] =
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
        assign one_lev[i]=zer_lev[2*i]+zer_lev[2*i+1];
    end

    for(i=0;i<16;i=i+1)begin
        assign two_lev[i]=one_lev[2*i]+one_lev[2*i+1];
    end

    for(i=0;i<8;i=i+1)begin
        assign thr_lev[i]=two_lev[2*i]+two_lev[2*i+1];
    end

    for(i=0;i<4;i=i+1)begin
        assign fou_lev[i]=thr_lev[2*i]+thr_lev[2*i+1];
    end

    for(i=0;i<2;i=i+1)begin
        assign fiv_lev[i]=fou_lev[2*i]+fou_lev[2*i+1];
    end
    assign blacksum=fiv_lev[0]+fiv_lev[1];

    assign winning=BLACK;
    assign value={6'd0,blacksum};

  





endmodule
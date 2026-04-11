import chesstypes::*;


module materialcount (
    input state_t state,
    output logic signed [31:0] value
);
    localparam QUEEN_VALUE  = 900;
    localparam ROOK_VALUE   = 500;
    localparam KNIGHT_VALUE = 300;
    localparam BISHOP_VALUE = 320;
    localparam PAWN_VALUE   = 100;
    
    localparam COUNT_WIDTH = $clog2(QUEEN_VALUE + 1) + 1;
    
    function automatic logic signed [COUNT_WIDTH-1:0] get_piece_value (piece_t piece);
        return  (piece == PAWN)   ?  PAWN_VALUE:
                (piece == KNIGHT) ? KNIGHT_VALUE :
                (piece == BISHOP) ? BISHOP_VALUE :
                (piece == ROOK)   ? ROOK_VALUE :
                (piece == QUEEN)  ? QUEEN_VALUE :
                0;
    endfunction

    logic signed [63:0] [COUNT_WIDTH-1:0] zer_lev;
    logic signed [31:0] [COUNT_WIDTH:0]   one_lev;
    logic signed [15:0] [COUNT_WIDTH+1:0] two_lev;
    logic signed [7:0]  [COUNT_WIDTH+2:0] thr_lev;
    logic signed [3:0]  [COUNT_WIDTH+3:0] fou_lev;
    logic signed [1:0]  [COUNT_WIDTH+4:0] fiv_lev;
    logic signed        [COUNT_WIDTH+5:0] six_lev;

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
            logic [COUNT_WIDTH-1:0] piece_value;
            assign piece_value = get_piece_value(state.board[i].piece);
            assign zer_lev[i] = (state.board[i].color == WHITE) ? piece_value : -piece_value;
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

    assign six_lev = fiv_lev[0] + fiv_lev[1];

    //assign value = {six_lev[COUNT_WIDTH+5],(32-COUNT_WIDTH-5)'d0,six_lev[]}
    assign value = {{(32-$bits(six_lev)){six_lev[$bits(six_lev)-1]}}, six_lev};
endmodule
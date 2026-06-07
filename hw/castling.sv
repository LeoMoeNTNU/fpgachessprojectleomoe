import chesstypes::*;
/*
TODO:
I can hardwire in exactly which pieces that it has to check. 
This one will specifically only check those pieces.
It will have a bunch of pieces available. 

so basically what it will do is that it will check the 6 positions that matter. 
if white, the input is what it is. 
if black, it is what it is. 

*/

/*
module threatened (
    input fullpiece_t [63:0] board,
    input color_t playing,
    input logic [5:0] coord,

    output logic attacked
    );
typedef struct packed {
    fullpiece_t [63:0] board;
    logic [7:0] whitekingposition;
    logic [7:0] blackkingposition;
    logic playing;
    logic enpassantlegal;
    logic [7:0] enpassantposition;
    logic [3:0]castlingallowed;
} state_t;
*/

module castling(
    input state_t state,
    
    output logic leftcastleallowed,
    output logic rightcastleallowed


);

    logic [5:0] threat;

    // verilator lint_off NULLPORT
    castling_test dut(
        .state(state),
        .leftcastleallowed(leftcastleallowed),
        .rightcastleallowed(rightcastleallowed),
        .threat(threat),
        .out_lefttile_threatened(out_lefttile_threatened),
        .out_righttile_threatened(out_righttile_threatened)
    );
    // verilator lint_on NULLPORT



endmodule


module castling_test (
    input state_t state,
    
    output logic leftcastleallowed,
    output logic rightcastleallowed,
    output logic [5:0] threat,
    output out_lefttile_threatened,
    output out_righttile_threatened


);

logic [2:0] col;
assign col= (state.playing==WHITE)?3'd7:3'd0;
logic lefttiles_unthreatened;
logic righttiles_unthreatened;
logic lefttile_threatened;
logic righttile_threatened;

threatened t0(
    .board(state.board),
    .playing(state.playing),
    //.coord({3'd1,col}),
        .coord({col,3'd1}),

    .attacked(threat[0])
);
threatened t1(
    .board(state.board),
    .playing(state.playing),
    //.coord({3'd2,col}),
    .coord({col,3'd2}),

    .attacked(threat[1])
);
threatened t2(
    .board(state.board),
    .playing(state.playing),
    //.coord({3'd3,col}),
    .coord({col,3'd3}),

    .attacked(threat[2])
);
threatened t3(
    .board(state.board),
    .playing(state.playing),
    //.coord({3'd4,col}),
        .coord({col,3'd4}),

    .attacked(threat[3])
);
threatened t4(
    .board(state.board),
    .playing(state.playing),
    //.coord({3'd5,col}),
    .coord({col,3'd5}),

    .attacked(threat[4])
);
threatened t5(
    .board(state.board),
    .playing(state.playing),

    //.coord({3'd6,col}),
    .coord({col,3'd6}),
    .attacked(threat[5])
);

    assign lefttile_threatened=threat[0]|threat[1]|threat[2]|threat[3];

    assign righttile_threatened= threat[3]|threat[4]|threat[5];
    assign leftcastleallowed=(state.playing==WHITE)?
    (whiteleftcastlingallowed(state)&!lefttile_threatened)
    :
    (blackleftcastlingallowed(state)&!lefttile_threatened);
    
    assign rightcastleallowed=(state.playing==WHITE)?
    (whiterightcastlingallowed(state)&!righttile_threatened)
    :
    (blackrightcastlingallowed(state)&!righttile_threatened);

    assign out_lefttile_threatened=lefttile_threatened;
    assign out_righttile_threatened=righttile_threatened;

endmodule
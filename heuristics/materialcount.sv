import chesstypes::*;


module materialcount (
    state_t state,
    
    input color_t playing,

    output color_t winning,
    output [15:0] value


);
    logic [15:0] blacksum;
    logic [15:0] whitesum;

    logic [3:0] blackvalues [63:0];
    logic [3:0] whitevalues [63:0];

      always_comb begin: combinatorial

    for(int i=0;i<64;i=i+1)begin
        case(state.board[i])
            {WHITE,EMPTY}:blackvalues[i]=0;whitevalues[i]=0;
            {WHITE,PAWN}:blackvalues[i]=0;whitevalues[i]=1;
        blacksum+=blackvalues[i];
        whitesum+=whitevalues[i];
    end

    value=whitesum>blacksum?whitesum-blacksum:blacksum-whitesum
    winning=whitesum>blacksum?WHITE:BLACK;
      end





endmodule
import chesstypes::*;


module materialcount (
    input state_t state,
    
    output color_t winning,
    output [15:0] value


);
    logic [15:0] blacksum;
    logic [15:0] whitesum;

    logic [3:0] blackvalues [63:0];
    logic [3:0] whitevalues [63:0];

      always_comb begin: combinatorial
      
    blacksum=0;
    whitesum=0;
      

    for(int i=0;i<64;i=i+1)begin

        case({state.board[i].color,state.board[i].piece})
            {WHITE,EMPTY}:begin 
                blackvalues[i]=0;whitevalues[i]=0;
            end
            {WHITE,PAWN}:begin
                blackvalues[i]=0;whitevalues[i]=1;
            end
            {WHITE,KNIGHT}:begin 
                blackvalues[i]=0;whitevalues[i]=3;
            end
            {WHITE,BISHOP}:begin 
                blackvalues[i]=0;whitevalues[i]=3;
            end
            {WHITE,ROOK}:begin 
                blackvalues[i]=0;whitevalues[i]=5;
            end
            {WHITE,QUEEN}:begin 
                blackvalues[i]=0;whitevalues[i]=9;
            end
            {WHITE,KING}:begin 
                blackvalues[i]=0;whitevalues[i]=0;
            end

            {BLACK,EMPTY}:begin 
                blackvalues[i]=0;whitevalues[i]=0;
            end
            {BLACK,PAWN}:begin
                blackvalues[i]=1;whitevalues[i]=0;
            end
            {BLACK,KNIGHT}:begin 
                blackvalues[i]=3;whitevalues[i]=0;
            end
            {BLACK,BISHOP}:begin 
                $display("found a black bishop!");
                blackvalues[i]=3;whitevalues[i]=0;
            end
            {BLACK,ROOK}:begin 
                blackvalues[i]=5;whitevalues[i]=0;
            end
            {BLACK,QUEEN}:begin 
                blackvalues[i]=9;whitevalues[i]=0;
            end
            {BLACK,KING}:begin 
                blackvalues[i]=0;whitevalues[i]=0;
            end
            
            default: begin
                blackvalues[i]=0;whitevalues[i]=0;
            end
        endcase
        blacksum+={12'd0,blackvalues[i]};
        whitesum+={12'd0,whitevalues[i]};
    end

    value=(whitesum>blacksum)?(whitesum-blacksum):(blacksum-whitesum);
    winning=(whitesum>blacksum)?WHITE:BLACK;
      end





endmodule
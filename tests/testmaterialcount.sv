import chesstypes::*;

module testmaterialcount;

    state_t state;
    
    color_t winning;
    logic [15:0] value;

    materialcount dut(
        .state(state),
        .winning(winning),
        .value(value)
    );

    task clearinput();
        for(int i=0;i<64;i=i+1)begin
            state.board[i].color=BLACK; //could really be either black or white and it shouldnt matter.
            state.board[i].piece=EMPTY;
        end
        state.playing=WHITE;//unimportant for this heuristic. 
        
    endtask

    initial begin
        $display("TEST:setting empty board and checking that it is fact zero.");
        clearinput();

        if(value!=0)begin
            $display("the value should be 0 but it is %0d",value);

        end

        $display("TEST: inserting a simple black queen and seeing what's up");
    clearinput();
    
    state.board[20].color=BLACK;
    state.board[20].piece=QUEEN;
    #2
    if(winning!=BLACK)begin
        $display("black should be winning but isn't?");
    end
    if(value!=9)begin
        $display("value should be 9 but is %0d",value);
    end

    $display("TEST: inserting some material on both sides and then checking if the balance is right");
    
    clearinput();
     #2
     if(value!=0)begin
        $display("value should be 0 after we reset again, but is %0d",value);
    end

    
    state.board[20].color=BLACK;
    state.board[20].piece=ROOK;
  state.board[10].color=WHITE;
    state.board[10].piece=ROOK;
    
/*
  state.board[7].color=BLACK;
    state.board[7].piece=PAWN;

      state.board[54].color=WHITE;
    state.board[54].piece=KING;
*/

    #10
    if(winning!=BLACK)$display("black should be winning but isn't");
    if(value!=5)$display("black advantage should be 5 but is %0d",value);




        $finish;
    end

endmodule
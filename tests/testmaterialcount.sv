import chesstypes::*;

module testmaterialcount;

    state_t state;
    
    logic signed [31:0] value;

    materialcount dut(
        .state(state),
        .value(value)
    );
/*
    task clearinput();
        for(int i = 0; i < 64; i++)begin
            state.board[i].color=BLACK; //could really be either black or white and it shouldnt matter.
            state.board[i].piece=EMPTY;
        end
        state.playing=WHITE;//unimportant for this heuristic. 
        
    endtask
*/

    initial begin
        $display("TEST:setting empty board and checking that it is fact zero.");

        state = '0;    
        state.board[20] = '{color:BLACK, piece:QUEEN};

        #1

        if(value != -900) begin
            $display("value should be -900 but is %0d",value);
        end

        $display("TEST: inserting some material on both sides and then checking if the balance is right");
        
        #1
    
    //clearinput();
    // state.board[20].piece=EMPTY;
        state = '0;

        #1

        if(value!=0)begin
            $display("value should be 0 after we reset again, but is %0d",value);
        end

    
        state.board[20].color = BLACK;
        state.board[20].piece = ROOK;
        state.board[10].color = WHITE;
        state.board[10].piece = ROOK;

        #1
    
/*
  state.board[7].color=BLACK;
    state.board[7].piece=PAWN;

      state.board[54].color=WHITE;
    state.board[54].piece=KING;
*/

        if(value!=0)$display("black advantage should be 0 but is %0d",value);

        #1


        $finish;
    end

endmodule
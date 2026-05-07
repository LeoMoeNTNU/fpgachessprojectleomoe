import chesstypes::*;

module testcheckfrompawn;
/*INTERFACE

    input fullpiece_t board [63:0],
    input  logic [5:0] kingPosition,

    output logic attacked,
    output logic valid
*/

fullpiece_t board[63:0];
logic [5:0] kingPosition;

logic attacked;
logic valid;
color_t playing;
logic out_attackedfromright;
logic out_attackedfromleft;
logic [5:0] out_rightpawnattack;
logic [5:0] out_leftpawnattack;
logic[2:0] out_row;
logic [2:0] out_col;

 checkfrompawn_eval dut (
        .board(board),
        .kingPosition(kingPosition),
        .attacked(attacked),
        .playing(playing),
        .valid(valid),
        .out_attackedfromright(out_attackedfromright),
        .out_attackedfromleft(out_attackedfromleft),
        .out_rightpawnattack(out_rightpawnattack),
        .out_leftpawnattack(out_leftpawnattack),
        .out_row(out_row),
        .out_col(out_col)
    );

    task clearBoard();
        for (int i = 0; i < 64; i++) begin
            board[i].piece  = EMPTY;
            board[i].color = WHITE;   // color doesn't matter for EMPTY
        end
    endtask

    always begin

    end


    initial begin

        logic [2:0] row;
        logic [2:0] col;
        logic [5:0] attackingposition;
        $display("TEST:first easy test with empty board");
        clearBoard();
        kingPosition=0;

        #2

        if(attacked)begin
            $display("for some reason we are attacked on an empty board");
        end
        if(valid)begin
            $display("for some reason it thinks there is a king at 0");
        end

        $display("TEST: checking that it uses valid");
        row = 3'd2;
        col= 3'd4;
        board[fullcoord(row,col)].color=WHITE;
        board[fullcoord(row,col)].piece=KING;
        kingPosition=fullcoord(row,col);

        #10
        if(!valid)begin
            $display("for some reason valid is %0d instead of true even though kingPosition has been inserted!",valid);
        end

        if(out_attackedfromleft)
            $display("attacked from left shouldnt happen because there are no pawns. ");
        if(out_attackedfromright)
            $display("attacked from right also shouldnt happen");

        $display("TEST: second middle of the board test with white king and black pawn!");

        playing=WHITE;
        attackingposition=fullcoord(row+1,col+1);
        board[fullcoord(row,col)].color=WHITE;
        //  $display("putting a pawn on (%d,%d)",row+1,col+1);
        board[attackingposition].color=BLACK;
        board[attackingposition].piece=PAWN;

        #2

        //$display("left pawn attack is from from row,col (%0d,%0d)", chesstypes::row(out_leftpawnattack),chesstypes::col(out_leftpawnattack));
        //$display("right pawn attack is from row, col (%0d,%0d)", chesstypes::row(out_rightpawnattack),chesstypes::col(out_rightpawnattack));
        
        if(out_row!=row||out_col!=col)
            $display("we tried inputting (%0d,%0d) but the component thinks we are on (%0d, %0d)",row,col,out_row,out_col);
        if(!valid)begin
            $display("it should be valid because there is a king there!");
        end
        if(!attacked)begin
            $display("the king is not attacked even if it should be!");

        if(!out_attackedfromright)
            $display("it should be attacked from the right");
        if(out_attackedfromleft)
            $display("idk why it is attacked from the left");

        end


        $display("TEST: black king close to white pawn!");
        clearBoard();
        row=3'd6;
        col=3'd4;
        playing=BLACK;
        kingPosition=fullcoord(row,col);
        board[fullcoord(row,col)].color=BLACK;
        board[fullcoord(row,col)].piece=KING;
        attackingposition=fullcoord(row+1,col-1);
        board[attackingposition].color=WHITE;
        board[attackingposition].piece=PAWN;
        #2

        if(!attacked)$display("it should be attacked right now...");

        $display("TEST: black king close but not threatened by white pawn!(not made yet)");
            clearBoard();
        row=3'd1;
        col=3'd4;
        playing=BLACK;
        kingPosition=fullcoord(row,col);
        board[fullcoord(row,col)].color=BLACK;
        board[fullcoord(row,col)].piece=KING;
        attackingposition=fullcoord(row+2,col-1);
        board[attackingposition].color=WHITE;
        board[attackingposition].piece=PAWN;
        #2

        if(attacked)$display("it should NOT be attacked right now...");

        $display("TEST:several tests with other pieces just to be sure.(not made yet)");

        $display("TEST:making sure that it doesnt go over corners!(not made yet)");
        
        $finish;





    end



endmodule
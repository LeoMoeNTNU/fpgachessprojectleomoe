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
logic out_attackedfromright;
logic out_attackedfromleft;
logic [5:0] out_rightpawnattack;
logic [5:0] out_leftpawnattack;
logic[2:0] out_row;
logic [2:0] out_col;

 checkfrompawn dut (
        .board(board),
        .kingPosition(kingPosition),
        .attacked(attacked),
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
        logic [5:0] attackingposposition;
        $display("first easy test with empty board");
        clearBoard();
        kingPosition=0;

        #2

        if(attacked)begin
            $display("for some reason we are attacked on an empty board");
        end
        if(valid)begin
            $display("for some reason it thinks there is a king at 0");
        end

        row = 3'd2;
        col= 3'd4;
        //getPiece(board,row,col).piece=KING;
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

        $display("second middle of the board test with white king and black pawn!");

        attackingposposition=fullcoord(row+1,col+1);
        board[fullcoord(row,col)].color=WHITE;
        //  $display("putting a pawn on (%d,%d)",row+1,col+1);
        board[attackingposposition].color=BLACK;
        board[attackingposposition].piece=PAWN;

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
        $finish;





    end



endmodule
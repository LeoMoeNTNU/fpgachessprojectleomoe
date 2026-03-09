import chesstypes::*;

module testcheckbybishop;
/*INTERFACE

    input  fullpiece_t board [63:0],
    input  logic [5:0] kingPosition,

    output logic attacked,
    output logic valid,

    output logic out_attackedfromright,//for debugging
    output logic out_attackedfromleft,

    output logic out_righttowerattack,
    output logic out_lefttowerattack,

    output logic[2:0] out_row,
    output logic[2:0] out_col
*/

fullpiece_t board[63:0];
logic [5:0] kingPosition;
color_t playing;

logic attacked;
logic valid;




 checkbybishop dut (
        .board(board),
        .kingPosition(kingPosition),
        .playing(playing),
        .attacked(attacked),
        .valid(valid)
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

        

        
        
        $display("TEST: empty board");
        clearBoard();
        kingPosition=0;

        #1
        if(valid)begin
            $display("This shouldnt be valid as there is no king on the board!");
        end
        if(attacked)begin
            $display("for some reason we are attacked on an empty board");
            
        end

        $display("TEST basic bishop threatening from plus plus");
        clearBoard();
        kingPosition=fullcoord(3'd0,3'd4);
        playing=WHITE;
        board[kingPosition].piece=KING;
        board[kingPosition].color=WHITE;

        board[fullcoord(3'd1,3'd5)].piece=BISHOP;
        board[fullcoord(3'd1,3'd5)].color=BLACK;
        #2
        if(~valid)begin
            $display("this should be validly pointing at king");
        end
        if(~attacked)begin
            $display("this should be a valid attack at the king!");
        end





        $finish;





    end



endmodule
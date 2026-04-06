import chesstypes::*;

module testcheckbyknight;
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




 checkbyknight dut (
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

    task testknightattack(int x1, int x2, int y1, int y2);
       
        $display("TEST: empty board, king (%0d,%0d) enemy knight (%0d,%0d) ",x1,x2,y1,y2);
        clearBoard();
        kingPosition=fullcoord(3'(x1),3'(x2));
        playing=BLACK;
        board[kingPosition].piece=KING;
        board[kingPosition].color=BLACK;

        board[fullcoord(3'(y1),3'(y2))].piece=KNIGHT;
        board[fullcoord(3'(y1),3'(y2))].color=WHITE;
        #2
        if(~valid)begin
            $display("this should be validly pointing at king");
        end
        if(~attacked)begin
            $display("(%0d,%0d), (%0d,%0d) isnt an attack!",x1,x2,y1,y2);
        end
       
    endtask

 task testknightattackfalse(int x1, int x2, int y1, int y2);
       
        $display("TEST: empty board, king (%0d,%0d) enemy knight (%0d,%0d) (assuming false)",x1,x2,y1,y2);
        clearBoard();
        kingPosition=fullcoord(3'(x1),3'(x2));
        playing=BLACK;
        board[kingPosition].piece=KING;
        board[kingPosition].color=BLACK;

        board[fullcoord(3'(y1),3'(y2))].piece=KNIGHT;
        board[fullcoord(3'(y1),3'(y2))].color=WHITE;
        #2
        if(~valid)begin
            $display("this should be validly pointing at king");
        end
        if(attacked)begin
            $display("(%0d,%0d), (%0d,%0d) isnt an attack!",x1,x2,y1,y2);
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


        testknightattack(0,0,1,2);
        testknightattack(0,0,2,1);

        
        testknightattackfalse(5,5,6,6);

        testknightattack(5,5,4,3);
                testknightattackfalse(5,5,4,4);

                        testknightattackfalse(0,0,6,7);




        








        $finish;





    end



endmodule
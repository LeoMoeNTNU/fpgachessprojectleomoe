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

    task testbishopattack(int x1, int x2, int y1, int y2);
       
        $display("TEST: empty board, king (%0d,%0d) enemy bishop (%0d,%0d) ",x1,x2,y1,y2);
        clearBoard();
        kingPosition=fullcoord(3'(x1),3'(x2));
        playing=BLACK;
        board[kingPosition].piece=KING;
        board[kingPosition].color=BLACK;

        board[fullcoord(3'(y1),3'(y2))].piece=BISHOP;
        board[fullcoord(3'(y1),3'(y2))].color=WHITE;
        #2
        if(~valid)begin
            $display("this should be validly pointing at king");
        end
        if(~attacked)begin
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

        $display("TEST basic bishop threatening in all directions:");
        clearBoard();
        kingPosition=fullcoord(3'd4,3'd4);
        playing=WHITE;
        board[kingPosition].piece=KING;
        board[kingPosition].color=WHITE;

        board[fullcoord(3'd5,3'd5)].piece=BISHOP;
        board[fullcoord(3'd5,3'd5)].color=BLACK;
        #2
        if(~valid)begin
            $display("this should be validly pointing at king");
        end
        if(~attacked)begin
            $display("this should be a valid attack at the king!");
        end

        board[fullcoord(3'd5,3'd5)].piece=EMPTY;

        #2 

        if(attacked)begin
            $display("shouldn't be attacked here!");
        end
        if(~valid)begin
            $display("should be valid!");
        end

        board[fullcoord(3'd3,3'd3)].piece=BISHOP;
        board[fullcoord(3'd3,3'd3)].color=BLACK;
        #2
        if(~valid)begin
            $display("this should be validly pointing at king");
        end
        if(~attacked)begin
            $display("this should be a valid attack at the king!");
        end

        board[fullcoord(3'd3,3'd3)].piece=EMPTY;
        #2
        if(attacked)begin
            $display("shouldn't be attacked here!");
        end
        if(~valid)begin
            $display("should be valid!");
        end


        
        board[fullcoord(3'd5,3'd3)].piece=BISHOP;
        board[fullcoord(3'd5,3'd3)].color=BLACK;
        #2
        if(~valid)begin
            $display("this should be validly pointing at king");
        end
        if(~attacked)begin
            $display("this should be a valid attack at the king!");
        end

        board[fullcoord(3'd5,3'd3)].piece=EMPTY;
        #2
        if(attacked)begin
            $display("shouldn't be attacked here!");
        end
        if(~valid)begin
            $display("should be valid!");
        end


         board[fullcoord(3'd3,3'd5)].piece=BISHOP;
        board[fullcoord(3'd3,3'd5)].color=BLACK;
        #2
        if(~valid)begin
            $display("this should be validly pointing at king");
        end
        if(~attacked)begin
            $display("this should be a valid attack at the king!");
        end

        board[fullcoord(3'd3,3'd5)].piece=EMPTY;
        #2
        if(attacked)begin
            $display("shouldn't be attacked here!");
        end
        if(~valid)begin
            $display("should be valid!");
        end
        #2
        
   testbishopattack(3,3,5,5);
        
        
                testbishopattack(2,2,5,5);

        testbishopattack(1,1,5,5);

         testbishopattack(1,1,4,4);

            testbishopattack(0,0,7,7);


            testbishopattack(7,7,0,0);

                        testbishopattack(7,0,0,7);

                                    testbishopattack(1,2,5,6);








        $finish;





    end



endmodule
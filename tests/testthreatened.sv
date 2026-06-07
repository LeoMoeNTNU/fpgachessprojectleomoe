import chesstypes::*;

module testthreatened;


fullpiece_t [63:0] board;
color_t playing;

logic [5:0] coord;
color_t attacked;


/*
  input fullpiece_t [63:0] board,
    input color_t playing,
    input logic [5:0] coord,

    output logic attacked
    
*/
    state_t state;
  



 threatened dut (
        .board(board),
        .playing(playing),
        .coord(coord),
        .attacked(attacked)
    );

    task clearBoard();
        for (int i = 0; i < 64; i++) begin
            board[i].piece  = EMPTY;
            board[i].color = WHITE;   // color doesn't matter for EMPTY
        end
    endtask

    task testqueenattack(int x1, int x2, int y1, int y2);
       
        $display("TEST: empty board, king (%0d,%0d) enemy queen (%0d,%0d) ",x1,x2,y1,y2);
        clearBoard();
        coord=fullcoord(3'(x1),3'(x2));
        playing=BLACK;
        board[coord].piece=KING;
        board[coord].color=BLACK;

        board[fullcoord(3'(y1),3'(y2))].piece=QUEEN;
        board[fullcoord(3'(y1),3'(y2))].color=WHITE;
        #2

        if(~attacked)begin
            $display("(%0d,%0d), (%0d,%0d) isnt an attack!",x1,x2,y1,y2);
        end
       
    endtask

     task testqueenattackfalse(int x1, int x2, int y1, int y2);
       
        $display("TEST: empty board, king (%0d,%0d) enemy queen (%0d,%0d) (ASSUMING FALSE)",x1,x2,y1,y2);
        clearBoard();
        coord=fullcoord(3'(x1),3'(x2));
        playing=BLACK;
        board[coord].piece=KING;
        board[coord].color=BLACK;

        board[fullcoord(3'(y1),3'(y2))].piece=QUEEN;
        board[fullcoord(3'(y1),3'(y2))].color=WHITE;
        #2
  
        if(attacked)begin
            $display("(%0d,%0d), (%0d,%0d) isnt an attack!",x1,x2,y1,y2);
        end
       
    endtask


    initial begin

        

        
        
        $display("TEST: empty board");
        clearBoard();
        coord=0;

        #1
        if(attacked)begin
            $display("for some reason we are attacked on an empty board");
            
        end

        $display("TEST basic queen threatening in all directions:");
        clearBoard();
        coord=fullcoord(3'd4,3'd4);
        playing=WHITE;
        board[coord].piece=KING;
        board[coord].color=WHITE;

        board[fullcoord(3'd5,3'd5)].piece=QUEEN;
        board[fullcoord(3'd5,3'd5)].color=BLACK;
        #2

        if(~attacked)begin
            $display("this should be a valid attack at the king!");
        end

        board[fullcoord(3'd5,3'd5)].piece=EMPTY;

        #2 

        if(attacked)begin
            $display("shouldn't be attacked here!");
        end

        board[fullcoord(3'd3,3'd3)].piece=QUEEN;
        board[fullcoord(3'd3,3'd3)].color=BLACK;
        #2

        if(~attacked)begin
            $display("this should be a valid attack at the king!");
        end

        board[fullcoord(3'd3,3'd3)].piece=EMPTY;
        #2
        if(attacked)begin
            $display("shouldn't be attacked here!");
        end
        
        board[fullcoord(3'd5,3'd3)].piece=QUEEN;
        board[fullcoord(3'd5,3'd3)].color=BLACK;
        #2

        if(~attacked)begin
            $display("this should be a valid attack at the king!");
        end

        board[fullcoord(3'd5,3'd3)].piece=EMPTY;
        #2
        if(attacked)begin
            $display("shouldn't be attacked here!");
        end
  


         board[fullcoord(3'd3,3'd5)].piece=QUEEN;
        board[fullcoord(3'd3,3'd5)].color=BLACK;
        #2

        if(~attacked)begin
            $display("this should be a valid attack at the king!");
        end

        board[fullcoord(3'd3,3'd5)].piece=EMPTY;
        #2
        if(attacked)begin
            $display("shouldn't be attacked here!");
        end

        #2
        
   testqueenattack(3,3,5,5);
        
        
                testqueenattack(2,2,5,5);

        testqueenattack(1,1,5,5);

         testqueenattack(1,1,4,4);

            testqueenattack(0,0,7,7);


            testqueenattack(7,7,0,0);

                        testqueenattack(7,0,0,7);

                                    testqueenattack(1,2,5,6);

testqueenattack(1,1,5,1);
        testqueenattack(1,3,5,3);

                testqueenattack(7,7,7,5);


                        testqueenattack(0,0,0,7);


        testqueenattackfalse(0, 0, 1, 3);

                testqueenattackfalse(3, 5, 1, 4);


        


        $display("TEST: checking that back rank is safe, as it should be");
        state=get("rnbqk2r/pppp3p/4Pnp1/4bp2/2B2p2/2NP1N2/PPP3PP/R1BQK2R b KQkq - 2 8");
        board=state.board;
        playing=state.playing;
        printstate(state);
        for(int i=0;i<8;i=i+1)begin
            coord=6'(i);
            #1
            if(attacked)$display("piece number %0d shouldn't be threatened!",i);
        end
        $display("TEST: the backrank on this simplified position should be unthreatened!");
        state=get("2qk4/2p5/8/8/8/8/2P5/2QK4 b - - 0 1");
        board=state.board;
        playing=state.playing;
        printstate(state);
        for(int i=0;i<8;i=i+1)begin
            coord=6'(i);
            #1
            if(attacked)begin 
                $display("piece number %0d shouldn't be threatened!",coord);

            end
        
        end

        $display("TEST:here, almost nothing should be threatened!");
        state=get("qp4k1/pp6/8/8/5K2/8/8/8 w - - 0 1");
        board=state.board;
        playing=state.playing;
        for(int i=0;i<64;i=i+1)begin
            coord=6'(i);
            #100
            if(board[coord].piece==EMPTY&&attacked)$display("piece number %0d shouldn't be threatened!",coord);
        end




        $finish;





    end



endmodule
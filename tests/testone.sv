import chesstypes::*;
//import chesstypes::color_t;
//import chesstypes::fullpiece_t;
//import chesstypes::piece_t;

module testone;

    // DUT inputs
    fullpiece_t board [63:0];
    logic [5:0] kingPosition;
    

    // DUT output
    logic kinghere;

    // Instantiate the DUT
    iskingonposition dut (
        .board(board),
        .kingPosition(kingPosition),
        .kinghere(kinghere)
    );

    // Helper task to clear the board
    task clearBoard();
        for (int i = 0; i < 64; i++) begin
            board[i].piece  = EMPTY;
            board[i].color = WHITE;   // color doesn't matter for EMPTY
        end
    endtask

    initial begin
        $display("=== Starting checking where king is ===");

        // ---------------------------------------------------------
        // TEST 1: place king!
        // ---------------------------------------------------------
        clearBoard();
        
        //kingPosition={3'd4,3'd2};
        kingPosition=6'b101010;
        board[6'b101010].piece  = KING;



        //board[{3'd4, 3'd2}].color = BLACK;
        #1 
           $display("Test 1 attacked = %0d (expected 1)", kinghere);

        kingPosition=6'b000000;
        #10
                   $display("Test 1 attacked = %0d (expected 0)", kinghere);

        kingPosition= 6'b000000;
        #1 
                     $display("Test 1 attacked = %0d (expected 0)", kinghere);



        $finish;
    end

endmodule


import chesstypes::*;
//import chesstypes::color_t;
//import chesstypes::fullpiece_t;
//import chesstypes::piece_t;

module testnextkingposition;

//interface:
/*
module nextkingpositions(
    input fullpiece_t board [63:0],
    input logic req,
    input logic clk,
    output logic ack,
    output logic valid,
    output logic position [5:0]
    

)

*/

    // DUT inputs
    fullpiece_t board [63:0];
    logic req;
    logic clk;
    
    

    // DUT output
    logic ack;
    logic valid;
    logic [5:0] position ;
    logic [1:0] out_state;
    logic [2:0] out_counter;

    // Instantiate the DUT
    nextkingpositions dut (
        .board(board),
        .req(req),
        .clk(clk),
        .ack(ack),
        .valid(valid),
        .position(position),
        .out_state(out_state),
        .out_counter(out_counter)

    );

    // Helper task to clear the board
    task clearBoard();
        for (int i = 0; i < 64; i++) begin
            board[i].piece  = EMPTY;
            board[i].color = WHITE;   // color doesn't matter for EMPTY
        end
    endtask

    // Clock generator
  always
  begin
    #1 clk = 1;
    #1 clk = 0;
  end

    initial begin
        $display("=== Checking if we can get the ack from the req ===");

        // ---------------------------------------------------------
        // TEST 1: place king!
        // ---------------------------------------------------------
        clearBoard();
        
        req=1;
        if(ack!=0)
            $display("initializes with wrong value");
        if(out_state!=0)
            $display("initializes with wrong state");
        if(out_counter!=0)
            $display("initializes with wrong counter");


        for (int i = 0; i < 7; i = i + 1) begin
            #2 
            if(ack!=0)
                $display("did we get the ack? Result: %0d (expected 0)", ack);
            if(out_state!=2'b01)
               $display("in here the state is %0d (expected 01)",out_state);
            if(out_counter!=3'(i))
               $display("counter: %0d ",out_counter);

        end

         #2 
            if(ack!=1)
                $display("did we get the ack? Result: %0d (expected 0)", ack);
            
            if(out_state!=2'(1))
                $display("in here the state is %0d (expected 01)",out_state);
            if(out_counter!=3'(7))
               $display("counter: %0d ",out_counter);
        /*
        #2 


           $display("did we get the ack? Result: %0d (expected 0)", ack);
           $display("in here the state is %0d (expected 01)",out_state);
           $display("counter: %0d ",out_counter);
        #2
        $display("did we get the ack? Result: %0d (expected 1)", ack);
                   $display("in here the state is %0d (expected 01)",out_state);
                              $display("counter: %0d ",out_counter);


        #2
        $display("did we get the ack? Result: %0d (expected 1)", ack);
                   $display("in here the state is %0d (expected 01)",out_state);
                              $display("counter: %0d ",out_counter);



         #2
        $display("did we get the ack? Result: %0d (expected 1)", ack);
                   $display("in here the state is %0d (expected 01)",out_state);
                              $display("counter: %0d ",out_counter);

          #2
        $display("did we get the ack? Result: %0d (expected 1)", ack);
                   $display("in here the state is %0d (expected 01)",out_state);
                              $display("counter: %0d ",out_counter);

          #2
        $display("did we get the ack? Result: %0d (expected 1)", ack);
                   $display("in here the state is %0d (expected 01)",out_state);
                              $display("counter: %0d ",out_counter);
        
          #2
        $display("did we get the ack? Result: %0d (expected 1)", ack);
                   $display("in here the state is %0d (expected 01)",out_state);
                              $display("counter: %0d ",out_counter);

          #2
        $display("did we get the ack? Result: %0d (expected 1)", ack);
                   $display("in here the state is %0d (expected 01)",out_state);
                              $display("counter: %0d ",out_counter);
          #2
        $display("did we get the ack? Result: %0d (expected 1)", ack);
                   $display("in here the state is %0d (expected 01)",out_state);
                              $display("counter: %0d ",out_counter);

                                #2
        $display("did we get the ack? Result: %0d (expected 1)", ack);
                   $display("in here the state is %0d (expected 01)",out_state);
                              $display("counter: %0d ",out_counter);

                                #2
        $display("did we get the ack? Result: %0d (expected 1)", ack);
                   $display("in here the state is %0d (expected 01)",out_state);
                              $display("counter: %0d ",out_counter);


                              
          #2
        $display("did we get the ack? Result: %0d (expected 1)", ack);
                   $display("in here the state is %0d (expected 01)",out_state);
                              $display("counter: %0d ",out_counter);
          #2
        $display("did we get the ack? Result: %0d (expected 1)", ack);
                   $display("in here the state is %0d (expected 01)",out_state);
                              $display("counter: %0d ",out_counter);

                                #2
        $display("did we get the ack? Result: %0d (expected 1)", ack);
                   $display("in here the state is %0d (expected 01)",out_state);
                              $display("counter: %0d ",out_counter);

                                #2
        $display("did we get the ack? Result: %0d (expected 1)", ack);
                   $display("in here the state is %0d (expected 01)",out_state);
                              $display("counter: %0d ",out_counter);

        $display("done with the 1 length skips!");



        */


        /* ILL USE THIS LATER!

        #100
        $display("did we get the ack? Result: %0d (expected 1)", ack);
        $display("in here the state is %0d (expected 01)",out_state);
                   $display("counter: %0d ",out_counter);


        req=0;

        #6
        $display("did we get the ack turned back down? Result: %0d (expected 0)", ack);
                   $display("in here the state is %0d (expected 00)",out_state);
                              $display("counter: %0d ",out_counter);
        */


        $finish;
    end

endmodule


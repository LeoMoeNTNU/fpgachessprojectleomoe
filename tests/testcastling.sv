import chesstypes::*;

module testcastling;
    
    /*
    module castling (
    input state_t state,
    
    output logic leftcastleallowed,
    output logic rightcastleallowed
);
    */
    state_t state;
    logic leftcastleallowed;
    logic rightcastleallowed;
    logic [5:0] threat;
    logic out_lefttile_threatened;
    logic out_righttile_threatened;
    castling_test dut(
        .state(state),
        .leftcastleallowed(leftcastleallowed),
        .rightcastleallowed(rightcastleallowed),
        .threat(threat),
        .out_lefttile_threatened(out_lefttile_threatened),
        .out_righttile_threatened(out_righttile_threatened)

    );



    initial begin
        $display("TEST: allowed on an empty board!");
        printstate(state);
        
        state= get("rnbqkbnr/pppppppp/8/8/8/8/PPPPPPPP/RNBQKBNR");
        #1
        printstate(state);
        $display("TEST: a simple board!");
        state=get("r1bq1rk1/pppnppbp/3p1np1/8/2PP2PP/2NBP3/PP3P2/R1BQK1NR b KQ g3 0 7");
        #1
        //printstate(state);
        if(state.playing!=BLACK)$display("TEST:black should be playing should be playing!");
        if(leftcastleallowed)$display("left castling should be allowed!");//This is incorrect and I dont know why...
        if(rightcastleallowed)$display("right castling shouldn't be allowed!");

        $display("TEST:black isnt allowed to castle because horse in the middle");
        state=get("rnbqk1nr/pppp2bp/6p1/4Pp2/2B2p2/2N5/PPPP2PP/R1BQK1NR w KQkq - 1 6");
        #1
        //printstate(state);
        if(state.playing!=WHITE)$display("white is supposed to be playing!");
        if(rightcastleallowed)$display("rightcastle shouldnt be allowed!");
        if(leftcastleallowed)$display("left castle not allowed!");

        $display("TEST: black should be allowed to castle on the right side!");
        state=get("rnbqk2r/pppp3p/4Pnp1/4bp2/2B2p2/2NP1N2/PPP3PP/R1BQK2R b KQkq - 2 8");
        $display("rightcastle should be valid!");
        #1
        if(!rightcastleallowed)begin 
            printstate(state);
        end
        if(state.playing!=BLACK)$display("black is playing");

        if(!blackrightcastlingallowed(state))
        begin 
            $display("technically it should be allowed to castle right");
        end
        
        
        for(int i=0;i<6;i++)begin
            if(threat[i])$display("threat number %0d is attacked",i);

            printtile(state.board[6'(i)]);
            $display();
        end
        
        if(out_righttile_threatened)$display("right tile shouldnt be threatened");
        /*
        It is an or statement and it should really not be true in this instance. 
        
        */
        if(leftcastleallowed)$display("left castle is not allowed");
        
        
        $display("TEST:another position where black should be allowed castling!");
        state=get("rnb1k2r/ppppq2p/B4np1/4bp2/5p2/2NP1N2/PPP3PP/R1BQK2R b KQkq - 2 8");
        #1
        printstate(state);
        if(state.playing!=BLACK)$display("black is playing!");
        if(leftcastleallowed)$display("left castle shouldnt be allowed!");
        if(!rightcastleallowed)$display("right castle shouldnt be allowed!");
        $display("TEST: A position in which white should be allowed to right castle!");
        state=get("rnbqk2r/ppppp1bp/5np1/5p2/5P2/6PN/PPPPP1BP/RNBQK2R w KQkq - 4 5");
        #1
        if(state.playing!=WHITE)$display("white is supposed to be the one playing!");
        if(leftcastleallowed)$display("left castle shouldn't be allowed!");
        if(!rightcastleallowed)$display("right castle should be allowed");
        if(!whiterightcastlingallowed(state))$display("technically, it should be allowed!");
        if(!whiteleftcastlingallowed(state))$display("technically, white has left castling");
        if(!blackrightcastlingallowed(state))$display("must be an error!");
        if(!blackleftcastlingallowed(state))$display("black has left-castling!");
        $finish;
    end

endmodule
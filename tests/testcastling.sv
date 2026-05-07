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
    logic [7:0] threat;
    castling_test dut(
        .state(state),
        .leftcastleallowed(leftcastleallowed),
        .rightcastleallowed(rightcastleallowed),
        .threat(threat)
    );



    initial begin
        $display("TEST: allowed on an empty board!");
        printstate(state);
        
        state= get("rnbqkbnr/pppppppp/8/8/8/8/PPPPPPPP/RNBQKBNR");
        printstate(state);
        state=get("4k2r/6r1/8/8/8/8/3R4/R3K3wQk");
        if(state.playing!=WHITE)$display("white should be playing!");
        if(!leftcastleallowed)$display("left castling should be allowed!");//This is incorrect and I dont know why...
        if(rightcastleallowed)$display("right castling shouldn't be allowed!");

        $finish;
    end

endmodule
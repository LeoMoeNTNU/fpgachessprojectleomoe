import chesstypes::*;

module kingmovestest;
    logic ready;
    state_t state;
    logic [7:0] position;
    logic clk;

    logic [3:0] test_counter;
    state_t out_state;
    logic validoutstate;
    logic valid;

    kingmoves dut(
        .ready(ready),
        .state(state),
        .position(position),
        .clk(clk),
        .test_counter(test_counter),
        .out_state(out_state),
        .validoutstate(validoutstate),
        .valid(valid)
    );

     // Clock generator
  always
  begin
    #1 clk = 1;
    #1 clk = 0;
  end

    initial begin
        $display("TEST1: basic protocol");
        if(valid!=0)$display("why is it not zero at the beginning?");
        if(test_counter!=0)$display("the counter should be 0");
        ready=1;
        #30//I haven't calculated the actual thing. 
        if(valid!=1)$display("the valid should be 1 now!");
        ready=0;
        #10
        if(valid!=0)$display("why didn't it go back then?");



        $finish;

    end



endmodule

/*
module kingmoves (

    input logic ready,
    input state_t state,  
    input logic [7:0] position,  
    input logic clk, 
  
    output logic test_counter
    output state_t out_state,//this one gives a new chess state.
    output logic validoutstate,//this one says if the state above is valid. 
    output logic valid//this one is used with ready. it says when the input is done. 
  
);
*/
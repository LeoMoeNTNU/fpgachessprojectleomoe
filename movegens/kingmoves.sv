import chesstypes::*;

/* to know:
castling goes away for all of them. 
my plan is to simply have a counter. 
then I need to build an is-castling allowed. This is a bit of a big component. 



*/
module kingmoves (

    input logic ready,
    input state_t state,  
    input logic [7:0] position,  
    input logic clk, 
  
    output logic [3:0] test_counter,
    output state_t out_state,//this one gives a new chess state.
    output logic validoutstate,//this one says if the state above is valid. 
    output logic valid//this one is used with ready. it says when the input is done. 
  
);
    logic [1:0] state_protocol,next_protocol;
    logic [3:0] counter,next_counter;
     `define WAIT 2'b00
    `define CALC 2'b01
    `define ANSWRD 2'b10
    `define RECEIVED 2'b11


    always_comb begin: combinatorial
        test_counter=counter;

    case(state_protocol)
       `WAIT: begin//ends when we receive ready in. ready=0, valid=0
            valid=0;
            next_protocol=(ready)?`CALC: `WAIT;
            next_counter=0;
       end 
       `CALC:begin //ready=1, valid=0
        //ends when we send valid out. In this instance, we just do calc and when done we change the internal state.  
        //on the next state, we have valid=1 out. 
            next_counter=counter+1;
            next_protocol= (counter>=5)?`ANSWRD:`CALC;
            valid=0;
       end
       `ANSWRD:begin // ready =1, valid=1
            valid=1;
            next_counter=0;
            next_protocol=(!ready)?`RECEIVED:`ANSWRD;
       end
       `RECEIVED:begin//ready=0, valid=0
            //only thing to happen in this protocol step is that we turn down the valid as well. I dont need to work much for this. 
            next_protocol=`WAIT;
            valid=0;
            next_counter=0;
       end
    endcase

    end

      always_ff @(posedge clk) begin
        
        state_protocol<=next_protocol;
        counter<=next_counter;
    end
endmodule
import chesstypes::*;

module nextkingpositions(
    input fullpiece_t board [63:0],
    input logic req,
    input logic clk,
    output logic ack,
    output logic valid,
    output logic [5:0] position, 
    output logic [1:0] out_state,
    output logic [2:0] out_counter
);
    logic [1:0] state,next_state;
    `define WAIT 2'b00
    `define CALC 2'b01
    `define ANSWRD 2'b10
    `define RECEIVED 2'b11

    logic [2:0] counter, next_counter;

    always_comb begin : combinatorial
        valid=0;
        position=6'b000000;
        next_state=state;
        out_state=state;

        next_counter=0;
        out_counter=counter;


        case(state)
            `WAIT: begin
                ack=0;
                if(req) begin
                next_state=`CALC;
                end    
            end
            
            `CALC:  
                begin
                ack=0;
                if(counter!=3'd7)begin
                    next_counter=counter+1;
                end else begin
                    next_state=`ANSWRD;
                    ack=1;
                end

            end

            `ANSWRD:
                begin
                    ack=1;
                    if(!req) begin
                        next_state=`RECEIVED;
                    end

                end
            `RECEIVED:
            begin
                ack=1;
                next_state=`WAIT;
            end
        endcase
    end

    always_ff @(posedge clk) begin
        
        state<=next_state;
        counter<=next_counter;
    end

//what this module needs to have:
//internal state for req, ack. 
//internal state for a counter that goes up to 8.
//which is a register, frankly. 
//for now, my plan is to churn out all of the 8, one cycle after each other. 
//in the future, I may decide that this is too slow!
endmodule
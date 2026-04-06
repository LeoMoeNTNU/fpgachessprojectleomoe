import chesstypes::*;

module nextkingpositions2(
    input logic start,

    input logic [5:0] pos,

    input logic clk,

    output logic [2:0] number,

    output logic active, //active refers to whether it is doing work.

    output logic [2:0] row,

    output logic [2:0] col,

    output logic [5:0] out_pos,

    output logic valid //valid specifically refers to whether the row + col move is valid. 
); 
    logic [2:0] next_number;
    logic next_active;

    logic [2:0] init_row;
    logic [2:0] init_col;
    logic [2:0] addtorow;
    logic [2:0] addtocol;
    logic invalid;

    logic [5:0] stored_pos;
    logic [5:0] next_stored_pos;

`define INACTIVE 1'b0
`define ACTIVE 1'b1

always_comb begin : combinatorial
    next_active=active;
    //addtorow=1;//default
    //addtocol=1;//default

    out_pos=stored_pos;
    next_stored_pos=stored_pos;    


    case(active)
        `INACTIVE:begin
            addtorow=3'b000;//-1
            addtocol=3'b000;
            if(start)begin
                next_active=`ACTIVE;
                next_stored_pos=pos;
            end
        end

        `ACTIVE:begin
            addtorow=3'b000;//-1
            addtocol=3'b000;
            
            next_number=number+1;
            case(number)
                0: begin
                    addtorow=3'b001;
                    addtocol=3'b000;

                end
                1: begin
                    addtorow=3'b001;
                    addtocol=3'b001;

                end
                2: begin
                    addtorow=3'b000;
                    addtocol=3'b001;

                end

                3: begin
                    addtorow=3'b111;
                    addtocol=3'b001;
                end
                4: begin
                    addtorow=3'b111;
                    addtocol=3'b000;
                end
                5: begin
                    addtorow=3'b111;
                    addtocol=3'b111;
                end
                6: begin
                    addtorow=3'b000;
                    addtocol=3'b111;
                end
                7: begin
                    addtorow=3'b001;
                    addtocol=3'b111;
                end

            endcase
            if(number==3'd7)begin
                next_active=`INACTIVE;
                next_number=0;
            end
        end

    endcase


    init_row=chesstypes::row(stored_pos);
    init_col=chesstypes::col(stored_pos);
    row=init_row+addtorow;
    col=init_col+addtocol;
    invalid=         
        (init_row==3'b000&&addtorow==3'b111)|
        (init_row==3'b111&&addtorow==3'b001)|
        (init_col==3'b000&&addtocol==3'b111)|
        (init_col==3'b111&&addtocol==3'b001);
    valid=!invalid;

    

end

always_ff @(posedge clk) begin
    number<=next_number;
    active<=next_active;
    stored_pos<=next_stored_pos;
        
        
    end

endmodule
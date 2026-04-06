import chesstypes::*;
//import chesstypes::color_t;
//import chesstypes::fullpiece_t;
//import chesstypes::piece_t;

module testnextkingposition2;

//interface:
/*

    input logic start,

    input logic [5:0] pos,

    input logic clk,

    output logic [2:0] number,

    output logic active, //active refers to whether it is doing work.

    output logic [2:0] row,

    output logic [2:0] col,

    output logic valid //valid specifically refers to whether the row + col move is valid.




); 
*/

    // DUT inputs
    logic start;
    logic [5:0] pos;
    logic clk;
    

    // DUT output
    logic [2:0] number;
    logic active;
    logic [2:0] row;
    logic [2:0] col;
    logic valid;
    logic [5:0] out_pos;

    // Instantiate the DUT
    nextkingpositions2 dut (
        .start(start),
        .pos(pos),
        .clk(clk),
        .number(number),
        .active(active),
        .row(row),
        .col(col),
        .valid(valid),
        .out_pos(out_pos)

    );

    function automatic integer rowfromnumber (input [5:0] a, input[2:0] number);
	begin
        int base=int'(chesstypes::row(a));

        case(number)
            0:rowfromnumber= base+1;
            1:rowfromnumber= base+1;
            2:rowfromnumber= base;
            3:rowfromnumber= base-1;
            4:rowfromnumber= base-1;
            5:rowfromnumber= base-1;
            6:rowfromnumber= base;
            7:rowfromnumber= base+1;
    endcase
	end
    endfunction

    function automatic integer colfromnumber (input [5:0] a, input[2:0] number);
	begin
        int base=int'(chesstypes::col(a));

        case(number)
            0:colfromnumber= base;
            1:colfromnumber= base+1;
            2:colfromnumber= base+1;
            3:colfromnumber= base+1;
            4:colfromnumber= base;
            5:colfromnumber= base-1;
            6:colfromnumber= base-1;
            7:colfromnumber= base-1;
    endcase
	end
    endfunction

    function automatic shouldbevalid(input [5:0] in, input [2:0] number);
    begin
        int base_row=int'(chesstypes::row(in));
        int base_col=int'(chesstypes::col(in));

        int row_i;
        int col_i;
        case(number)
            0:begin

                row_i=base_row+1;
                col_i=base_col;
            end
            1:begin
                row_i=base_row+1;
                col_i=base_col+1;

            end

            2:begin
                row_i=base_row;
                col_i=base_col+1;
            end
            3:begin
                row_i=base_row-1;
                col_i=base_col+1;

            end
            4:begin
                row_i=base_row-1;
                col_i=base_col;
            end
            5:begin
                row_i=base_row-1;
                col_i=base_col-1;

            end
            6:begin
                row_i=base_row;
                col_i=base_col-1;
            end
            7:begin
                row_i=base_row+1;
                col_i=base_col-1;
            end
        endcase
    shouldbevalid=
        (row_i>=0)&
        (row_i<=7)&
        (col_i>=0)&
        (col_i<=7);


    end
    endfunction

    task automatic testposition(logic [2:0] rowin,colin);

        // ---------------------------------------------------------
        // TEST 1: give the position.
        // ---------------------------------------------------------
        
        
        logic [2:0] local_row=rowin;
        logic [2:0] local_col=colin;
        $display("=== Checking that the protocol works for %0d, %0d",rowin,colin);

        pos={local_row,local_col};
        start=1;

        if(active!=0)
            $display("it should be active in the beginning!");
        if(number!=0)
            $display("the output should be 0!");
        
        for (int i = 0; i < 8; i = i + 1) begin
            #2    
            if(active!=1)
                $display("should be active!");
            
            if(number!=3'(i))
                $display("counter: %0d ",number);
            


            /*
            The idea here: first we do the valid-check. If the valid check is correct, then we are all good. 
            If the valid check is correct and it churns out wrong values that is bad. 
            If the valid check is correct and it is invalid, then who cares :)

            */
            if(valid!=shouldbevalid(pos,number))
                $display("valid is false, which it shouldn't be!");
            if(valid)begin
                

            if(int'(row)!=rowfromnumber(pos,number))
                $display("row coming out is %0d and not %0d",int'(row) ,rowfromnumber(pos,number));

            if(int'(col)!=colfromnumber(pos,number))
                $display("col coming out is %0d and not %0d",int'(col) ,colfromnumber(pos,number));  
            end
             
            //$display("%0d",rowandcolforindex(pos,3'(i)));



        end
        
       
    endtask
   

    // Clock generator
  always
  begin
    #1 clk = 1;
    #1 clk = 0;
  end

    initial begin
       

        testposition(3'd2,3'd2);
        #2
        testposition(3'd0,3'd0);
        #2
        testposition(3'd7,3'd4);
        #2
        testposition(3'd6,3'd1);



       
                
       


        $finish;
    end

endmodule


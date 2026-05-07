module counter #(parameter WIDTH=4)(
    input clk,
    input rst,
    input enable,
    output reg[WIDTH-1:0] count
);

    always @(posedge clk or posedge rst) begin
        if(rst)
            count <=0;
            else if( enable)
                count <=count +1;
    end

endmodule

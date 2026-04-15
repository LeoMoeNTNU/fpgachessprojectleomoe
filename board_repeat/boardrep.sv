
import movevector::*;
/*
What this one needs: two rows, one for white and one for black. Each are long and linked. 
It also needs a bunch of or's
The input, I guess, is 50 moves.
I could potentially also have to write the colors that is for the input. 
I actually dont think it matters. We just give it 50 *12 bits and then it splits it into 2 and checks for board repetitions on these.  
Also, if they arent all zero, then it should also output that. 

What will happen is that I will have these two lists of 25 moves. 
I will also have a list of vectors. 
In each of the vectors, I will use the move as a moveIn. 
As such I will have the first vector.
Then, each repeatedstate will see if both sides have repeated state. 
    If black has repeated state, but white doesn't, then that is important. 
*/


module boardrep(
    input logic [11:0] [49:0] moves,
    output logic draw
);

    logic [11:0] [24:0] leftmoves;
    logic [11:0] [24:0] rightmoves;
    logic [49:0] repeatedstate;

    movevector [24:0] leftvectors;
    movevector [24:0] rightvectors;

    logic [7:0] [49:0] counter;


    always_comb begin: combinatorial
        leftvectors[0].vectorIn=144'd0;
        rightvectors[0].vectorIn=144'd0;

        for(int i=0;i<25;i=i+1)begin
            leftmoves[i]=moves[2*i];
            rightmoves[i]=moves[2*i+1];

        end


        //what this for loop in going to do is set the vectors so that they make sense.
        //This means to set it so that we start with 0 at the top and then we flush through the thing. 

        for(int i=0;i<25;i=i+1)begin
            leftvectors[i].moveIn=leftmoves[i];
            rightvectors[i].moveIn
        end


        for(int i=1;i<25;i=i+1)begin
            leftvectors[i].vectorIn=leftvectors[i-1].vectorOut;
        end


        //this for loop is going to set up the repeatedstate, and it will do it by
        counter[0]=0;
        //These are the odd ones. 
        for(int i=1; i<50;i=i+2)begin
            
            counter[i]=counter[i-1]+(leftvectors[i+1].iszero+rightvectors[i].iszero);
        end
        for(int i=2;i<50;i=i+2)begin
            counter[i]=counter[i-1]+(leftvectors[i].iszero+rightvectors[i].iszero);
        end

        draw=counter[49]>=2;

    end

endmodule
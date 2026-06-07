//made by Leo:

//This movevector is responsible for both checking if the thing going out is zero and to output it so that we can have a chain on it. 
//If the move is used, then we dont modify highestindexIn, but if none of them are true, we do. 
module movevector (
    input logic [11:0] vectorIn [11:0],
    input logic [3:0] highestindexIn,
    input logic [11:0] moveIn,    

    output logic [11:0] vectorOut [11:0],
    output logic iszero,
    output logic [3:0] highestindex

);

function automatic logic [5:0] from(input logic [11:0] fromto);
            return fromto[11:6];
    endfunction
    function automatic logic [5:0] to(input logic [11:0] fromto);
            return fromto[5:0];
    endfunction

    logic [3:0] index;//we need 4 bits to index in an 11 index array. 
    logic taken [11:0];
    logic somethingtaken;

    logic [11:0] vectorBetween[11:0];


    always_comb begin: combinatorial

    //There are several things that will happen in this for loop. 
    //The first is that, it may have to zero out completely. 
    //The second is that we may change the from, to. 
    //The third is that we keep track if either of the two happened. 
        //If neither of them happened, we will
    for(int i=0;i<12;i=i+1)begin
        taken[i]=(to(vectorIn[i])==from(moveIn));
        vectorBetween[i]=taken[i]?
                                ((from(vectorIn[i])==to(moveIn))? 12'd0 : {from(vectorIn[i]),to(moveIn)}):
                        vectorIn[i];
        //If to=from and from=to, then we have to zero it out. 
        //I could write this move effectively with the |= operator. 
        vectorOut[i]=vectorBetween[i];
    end

    
    somethingtaken = 1'b0;
    for (int i = 0; i < 12; i++)begin
        somethingtaken |= taken[i];
    end
    highestindex=highestindexIn;
    if(!somethingtaken)begin

        vectorOut[highestindexIn]=moveIn;
        highestindex=highestindexIn+1;
    end
    //and here I want to set the other vector out's to just be vector between.
    
    iszero=1'b1;
    for(int i=0;i<12;i=i+1)
        iszero&=(vectorOut[i]==12'b0);
    //iszero=|{vectorOut};//This one probably has to be inverted at the end. 



    end

endmodule
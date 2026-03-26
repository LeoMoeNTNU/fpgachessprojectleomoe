module testmovevector;
     logic [11:0] vectorIn [11:0];
     logic [3:0] highestindexIn;
     logic [11:0] moveIn;    

     logic [11:0] vectorOut [11:0];
     logic iszero;
     logic [3:0] highestindex;

     movevector dut(
        .vectorIn(vectorIn),
        .highestindexIn(highestindexIn),
        .moveIn(moveIn),
        .vectorOut(vectorOut),
        .iszero(iszero),
        .highestindex(highestindex)
     );

     task setinputzero();
        for(int i=0; i<12;i=i+1)begin
            
            vectorIn[i]=0;
        end
     endtask


     initial begin
        $display("TEST: inserting a basic one!");
        setinputzero();
        highestindexIn=0;
        moveIn={6'd2,6'd5};
        #2
        if(iszero)begin
            $display("This shouldn't be zero but is");            

        end
        if(highestindex!=1)begin
            $display("the highestindex out is %0d instead of 1",highestindex);
        end
        if((vectorOut[4'd0])!={6'd2,6'd5})begin
            $display("vectorOut may be displaying odd values, I am not sure yet...");
        end

        for(int i=1;i<12;i=i+1)begin
            if(vectorOut[4'(i)]!=12'b0)$display("cell number %0d is %0d instead of zero!",i,vectorOut[4'(i)]);
        
        end

        $display("TEST: list of two things, one adds on to a previous and index shouldnt increase!");
        setinputzero();
        vectorIn[0]={6'd32,6'd15};
        vectorIn[1]={6'd12,6'd11};

        highestindexIn=2;
        moveIn={6'd15,6'd14};
        #2
        if(highestindex!=2)begin
            $display("highestIndex should be 2 instead of %0d",highestindex);

        end
        if(vectorOut[0][5:0]!=6'd14)begin
            $display("vectorout 0 should be 14 instead of %0d",vectorOut[0][5:0]);
        end

        $finish;
     end
endmodule
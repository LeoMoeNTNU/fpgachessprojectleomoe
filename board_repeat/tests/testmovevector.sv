

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

    // function automatic logic [11:0] str_to_move(string str);
    //     logic [11:0] move;
    //     int x, y;
    //     if(sscanf(str, "%d,%d", x, y) == 2)begin
    //         move = {x[5:0], y[5:0]};
    //     end else begin
    //         move = 12'b0;
    //     end
    //     return move;
    // endfunction

    function automatic string move_to_str(logic [11:0] move);
        logic [5:0] from, to;
        from = move[11:6];
        to = move[5:0];

        return $sformatf("%d to %d", from, to);
    endfunction

    function automatic void print_vector(logic [11:0] vector [11:0]);
        for(int i=0; i<12; i=i+1)begin
            $display("vector[%0d]: %s", i, move_to_str(vector[i]));
        end
        $display("\n");
    endfunction

     initial begin
        $display("TEST: inserting a basic one!");
        setinputzero();
        print_vector(vectorIn);
        highestindexIn=0;
        moveIn={6'd2,6'd5};
        
        #1
        
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
        
        print_vector(vectorOut);

        #1

        $display("TEST: list of two things, one adds on to a previous and index shouldnt increase!");
        setinputzero();
        vectorIn[0]={6'd32,6'd15};
        vectorIn[1]={6'd12,6'd11};

        highestindexIn=2;
        moveIn={6'd15,6'd14};
        
        #1
        if(highestindex!=2)begin
            $display("highestIndex should be 2 instead of %0d",highestindex);

        end
        if(vectorOut[0][5:0]!=6'd14)begin
            $display("vectorout 0 should be 14 instead of %0d",vectorOut[0][5:0]);
        end
        if(iszero)$display("it isnt zero so idk why it says so!");

        $display("TEST: does it zero out?");
        setinputzero();
        vectorIn[4]={6'd32,6'd12};
        moveIn={6'd12,6'd32};
        #1
        if(~iszero)$display("in this test we should've gotten 0");

        $finish;
     end
endmodule
import chesstypes::*;

module testcheckbytower;
/*INTERFACE

    input  fullpiece_t board [63:0],
    input  logic [5:0] kingPosition,

    output logic attacked,
    output logic valid,

    output logic out_attackedfromright,//for debugging
    output logic out_attackedfromleft,

    output logic out_righttowerattack,
    output logic out_lefttowerattack,

    output logic[2:0] out_row,
    output logic[2:0] out_col
*/

fullpiece_t board[63:0];
logic [5:0] kingPosition;

logic attacked;
logic valid;

logic out_righttowerattack;
logic out_lefttowerattack;
logic[2:0] out_row;
logic [2:0] out_col;
logic [1:0] out_status_col [7:0];


 checkbytower dut (
        .board(board),
        .kingPosition(kingPosition),
        .attacked(attacked),
        .valid(valid),
  
        .out_righttowerattack(out_righttowerattack),
        .out_lefttowerattack(out_lefttowerattack),
        .out_row(out_row),
        .out_col(out_col),
        .out_status_col(out_status_col)
    );

    task clearBoard();
        for (int i = 0; i < 64; i++) begin
            board[i].piece  = EMPTY;
            board[i].color = WHITE;   // color doesn't matter for EMPTY
        end
    endtask

    always begin

    end


    initial begin

        logic [2:0] row;
        logic [2:0] col;

        logic [2:0] towerrow;
        logic [2:0] towercol;
        logic [5:0] attackingposposition;
        logic [1:0] status_looking_at;
        
        
        $display("first easy test with empty board");
        clearBoard();
        kingPosition=0;

        #2

        if(attacked)begin
            $display("for some reason we are attacked on an empty board");
            if(out_lefttowerattack)begin
                $display(" the attack comes from the left tower: %0d",out_lefttowerattack);
            end
            if(out_righttowerattack)begin
                $display("there is an attack from the right: %0d",out_righttowerattack);
            end
        end

        /*
        if(valid)begin
            $display("for some reason it thinks there is a king at 0");
        end
        */

        row = 3'd4;
        col= 3'd4;

        kingPosition=fullcoord(row,col);
        board[fullcoord(row,col)].piece=KING;                
        board[fullcoord(row,col)].color=BLACK;

        #2//This one doesnt do anything because it isn't clocked.
        
        towerrow=3'd2;
        towercol=col;

        board[fullcoord(towerrow,towercol)].piece=ROOK;
        board[fullcoord(towerrow,towercol)].color=WHITE;

        #100


        /*
        if(!valid)begin
            $display("for some reason valid is %0d instead of true even though kingPosition has been inserted!",valid);
        end
        */

        if(~attacked)begin
            $display("why are we not attacked???");
            if(!out_lefttowerattack)begin
                $display("we are not attacked on the left, which we should be!");
            end
            if(out_righttowerattack)begin
                $display("we are attacked on the right, which we shouldnt be!");
            end
            for(int i=0;i<8;i=i+1)begin
                status_looking_at=out_status_col[3'(i)];
                if(status_looking_at==2'b00)begin
                    $display("status %0d: ENEMYROOK",i);
                
                end
                if(status_looking_at==2'b01)begin
                    $display("status %0d: EMPTY",i);
                
                end
                if(status_looking_at==2'b10)begin
                    $display("status %0d: NOTENEMYROOK",i);
                
                end


            end
        end



        $finish;





    end



endmodule
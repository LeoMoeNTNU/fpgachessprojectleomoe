//made by Leo:

import chesstypes::*;
//import chesstypes::color_t;
//import chesstypes::fullpiece_t;
//import chesstypes::piece_t;

/*
    // Correct row/col functions
    function automatic logic [2:0] row(input logic [5:0] index);
        return index[5:3];
    endfunction

    function automatic logic [2:0] col(input logic [5:0] index);
        return index[2:0];
    endfunction
*/

module checkbybishop (
    input  fullpiece_t board [63:0],
    input  logic [5:0] kingPosition,

    input color_t playing,

    output logic attacked,
    output logic valid//says if there in fact is a king here at all!

);

    `define ENEMYBISHOP 2'b00
    `define EMPTY 2'b01
    `define NOTENEMYBISHOP 2'b10
    `define EXTRA 2'b11 //just extra because itd what to do with it...



    logic [2:0] row;
    logic [2:0] col;
    logic attack1;
    logic attack2;
    logic attack3;
    logic attack4;
    fullpiece_t plusplus [7:0];
    fullpiece_t plusminus [7:0];
    logic [1:0] status_plusplus [7:0];
    logic [1:0] status_plusminus [7:0];


    always_comb begin: combinatorial
    row=chesstypes::row(kingPosition);
    col=chesstypes::col(kingPosition);

    valid=(board[fullcoord(row,col)].color==playing&&board[fullcoord(row,col)].piece==KING);

    for(int i=0;i<8;i=i+1)begin
        plusplus[i] =board[fullcoord(row+3'(i),col+3'(i))];

    end

    for(int i=0;i<8;i=i+1)begin
        plusminus[i] =board[fullcoord(row+3'(i),col-3'(i))];

    end
    /*
    EXPLANATORY NOTE: The reason we have +,+ and +- is to creat the one going (upright or down left) and 
    the other one going (upleft or downright)
    */


    for(int i=0;i<8;i=i+1)begin
        status_plusplus[i]=(plusplus[i].piece==EMPTY)?(`EMPTY):((plusplus[i].color!=playing&&plusplus[i].piece==BISHOP)?`ENEMYBISHOP:`NOTENEMYBISHOP);    
    end

    for(int i=0;i<8;i=i+1)begin
        status_plusminus[i]=(plusminus[i].piece==EMPTY)?(`EMPTY):((plusminus[i].color!=playing&&plusminus[i].piece==BISHOP)?`ENEMYBISHOP:`NOTENEMYBISHOP);    
    end

    attack1=
    ((row-1)<row&&(col-1)<col&&status_plusplus[row-1]==`ENEMYBISHOP)||((status_plusplus[row-1]==`EMPTY)&
    ((row-2)<row&&(col-2)<col&&status_plusplus[row-2]==`ENEMYBISHOP)||((status_plusplus[row-2]==`EMPTY)&
    ((row-3)<row&&(col-3)<col&&status_plusplus[row-3]==`ENEMYBISHOP)||((status_plusplus[row-3]==`EMPTY)&
    ((row-4)<row&&(col-4)<col&&status_plusplus[row-4]==`ENEMYBISHOP)||((status_plusplus[row-4]==`EMPTY)&
    ((row-5)<row&&(col-5)<col&&status_plusplus[row-5]==`ENEMYBISHOP)||((status_plusplus[row-5]==`EMPTY)&
    ((row-6)<row&&(col-6)<col&&status_plusplus[row-6]==`ENEMYBISHOP)||((status_plusplus[row-6]==`EMPTY)&
    ((row-7)<row&&(col-7)<col&&status_plusplus[row-7]==`ENEMYBISHOP)


    ))))));


    attack2=
    ((row+1)>row&&(col-1)<col&&status_plusplus[row+1]==`ENEMYBISHOP)||((status_plusplus[row+1]==`EMPTY)&
    ((row+2)>row&&(col-2)<col&&status_plusplus[row+2]==`ENEMYBISHOP)||((status_plusplus[row+2]==`EMPTY)&
    ((row+3)>row&&(col-3)<col&&status_plusplus[row+3]==`ENEMYBISHOP)||((status_plusplus[row+3]==`EMPTY)&
    ((row+4)>row&&(col-4)<col&&status_plusplus[row+4]==`ENEMYBISHOP)||((status_plusplus[row+4]==`EMPTY)&
    ((row+5)>row&&(col-5)<col&&status_plusplus[row+5]==`ENEMYBISHOP)||((status_plusplus[row+5]==`EMPTY)&
    ((row+6)>row&&(col-6)<col&&status_plusplus[row+6]==`ENEMYBISHOP)||((status_plusplus[row+6]==`EMPTY)&
    ((row+7)>row&&(col-7)<col&&status_plusplus[row+7]==`ENEMYBISHOP)


    ))))));

    attack3=
    ((row-1)<row&&(col+1)>col&&status_plusminus[row-1]==`ENEMYBISHOP)||((status_plusminus[row-1]==`EMPTY)&
    ((row-2)<row&&(col+2)>col&&status_plusminus[row-2]==`ENEMYBISHOP)||((status_plusminus[row-2]==`EMPTY)&
    ((row-3)<row&&(col+3)>col&&status_plusminus[row-3]==`ENEMYBISHOP)||((status_plusminus[row-3]==`EMPTY)&
    ((row-4)<row&&(col+4)>col&&status_plusminus[row-4]==`ENEMYBISHOP)||((status_plusminus[row-4]==`EMPTY)&
    ((row-5)<row&&(col+5)>col&&status_plusminus[row-5]==`ENEMYBISHOP)||((status_plusminus[row-5]==`EMPTY)&
    ((row-6)<row&&(col+6)>col&&status_plusminus[row-6]==`ENEMYBISHOP)||((status_plusminus[row-6]==`EMPTY)&
    ((row-7)<row&&(col+7)>col&&status_plusminus[row-7]==`ENEMYBISHOP)


    ))))));

     attack4=
    ((row+1)>row&&(col-1)<col&&status_plusminus[row+1]==`ENEMYBISHOP)||((status_plusminus[row+1]==`EMPTY)&
    ((row+2)>row&&(col-2)<col&&status_plusminus[row+2]==`ENEMYBISHOP)||((status_plusminus[row+2]==`EMPTY)&
    ((row+3)>row&&(col-3)<col&&status_plusminus[row+3]==`ENEMYBISHOP)||((status_plusminus[row+3]==`EMPTY)&
    ((row+4)>row&&(col-4)<col&&status_plusminus[row+4]==`ENEMYBISHOP)||((status_plusminus[row+4]==`EMPTY)&
    ((row+5)>row&&(col-5)<col&&status_plusminus[row+5]==`ENEMYBISHOP)||((status_plusminus[row+5]==`EMPTY)&
    ((row+6)>row&&(col-6)<col&&status_plusminus[row+6]==`ENEMYBISHOP)||((status_plusminus[row+6]==`EMPTY)&
    ((row+7)>row&&(col-7)<col&&status_plusminus[row+7]==`ENEMYBISHOP)


    ))))));

    

  



    attacked=attack1|attack2|attack3|attack4;




    end

endmodule
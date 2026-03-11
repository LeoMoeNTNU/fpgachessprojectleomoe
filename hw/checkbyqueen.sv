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

module checkbyqueen (
    input  fullpiece_t board [63:0],
    input  logic [5:0] kingPosition,

    input color_t playing,

    output logic attacked,
    output logic valid//says if there in fact is a king here at all!

);

    `define ENEMYQUEEN 2'b00
    `define EMPTY 2'b01
    `define NOTENEMYQUEEN 2'b10
    `define EXTRA 2'b11 //just extra because itd what to do with it...



    logic [2:0] row;
    logic [2:0] col;
    logic attack1;
    logic attack2;
    logic attack3;
    logic attack4;
    logic lefttowerattack;
    logic righttowerattack;
    logic uptowerattack;
    logic downtowerattack;
    fullpiece_t plusplus [7:0];
    fullpiece_t plusminus [7:0];
    logic [1:0] status_plusplus [7:0];
    logic [1:0] status_plusminus [7:0];
        fullpiece_t wholecol [7:0];
    fullpiece_t wholerow [7:0];
    logic [1:0] status_col [7:0];
    logic [1:0] status_row [7:0];


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
        status_plusplus[i]=(plusplus[i].piece==EMPTY)?(`EMPTY):((plusplus[i].color!=playing&&plusplus[i].piece==QUEEN)?`ENEMYQUEEN:`NOTENEMYQUEEN);    
    end

    for(int i=0;i<8;i=i+1)begin
        status_plusminus[i]=(plusminus[i].piece==EMPTY)?(`EMPTY):((plusminus[i].color!=playing&&plusminus[i].piece==QUEEN)?`ENEMYQUEEN:`NOTENEMYQUEEN);    
    end



     for(int i=0;i<8;i=i+1)begin
        wholecol[i] =board[fullcoord(3'(i),col)];

    end

    for(int i=0;i<8;i=i+1)begin
        wholerow[i] =board[fullcoord(row,3'(i))];

    end


    for(int i=0;i<8;i=i+1)begin
        status_col[i]=(wholecol[i].piece==EMPTY)?(`EMPTY):((wholecol[i].color!=playing&&wholecol[i].piece==QUEEN)?`ENEMYQUEEN:`NOTENEMYQUEEN);    
    end

    for(int i=0;i<8;i=i+1)begin
        status_row[i]=(wholerow[i].piece==EMPTY)?(`EMPTY):((wholerow[i].color!=playing&&wholerow[i].piece==QUEEN)?`ENEMYQUEEN:`NOTENEMYQUEEN);    
    end

    attack1=
    ((row-1)<row&&(col-1)<col&&status_plusplus[row-1]==`ENEMYQUEEN)||((status_plusplus[row-1]==`EMPTY)&
    ((row-2)<row&&(col-2)<col&&status_plusplus[row-2]==`ENEMYQUEEN)||((status_plusplus[row-2]==`EMPTY)&
    ((row-3)<row&&(col-3)<col&&status_plusplus[row-3]==`ENEMYQUEEN)||((status_plusplus[row-3]==`EMPTY)&
    ((row-4)<row&&(col-4)<col&&status_plusplus[row-4]==`ENEMYQUEEN)||((status_plusplus[row-4]==`EMPTY)&
    ((row-5)<row&&(col-5)<col&&status_plusplus[row-5]==`ENEMYQUEEN)||((status_plusplus[row-5]==`EMPTY)&
    ((row-6)<row&&(col-6)<col&&status_plusplus[row-6]==`ENEMYQUEEN)||((status_plusplus[row-6]==`EMPTY)&
    ((row-7)<row&&(col-7)<col&&status_plusplus[row-7]==`ENEMYQUEEN)


    ))))));


    attack2=
    ((row+1)>row&&(col+1)>col&&status_plusplus[row+1]==`ENEMYQUEEN)||((status_plusplus[row+1]==`EMPTY)&
    ((row+2)>row&&(col+2)>col&&status_plusplus[row+2]==`ENEMYQUEEN)||((status_plusplus[row+2]==`EMPTY)&
    ((row+3)>row&&(col+3)>col&&status_plusplus[row+3]==`ENEMYQUEEN)||((status_plusplus[row+3]==`EMPTY)&
    ((row+4)>row&&(col+4)>col&&status_plusplus[row+4]==`ENEMYQUEEN)||((status_plusplus[row+4]==`EMPTY)&
    ((row+5)>row&&(col+5)>col&&status_plusplus[row+5]==`ENEMYQUEEN)||((status_plusplus[row+5]==`EMPTY)&
    ((row+6)>row&&(col+6)>col&&status_plusplus[row+6]==`ENEMYQUEEN)||((status_plusplus[row+6]==`EMPTY)&
    ((row+7)>row&&(col+7)>col&&status_plusplus[row+7]==`ENEMYQUEEN)


    ))))));

    attack3=
    ((row-1)<row&&(col+1)>col&&status_plusminus[row-1]==`ENEMYQUEEN)||((status_plusminus[row-1]==`EMPTY)&
    ((row-2)<row&&(col+2)>col&&status_plusminus[row-2]==`ENEMYQUEEN)||((status_plusminus[row-2]==`EMPTY)&
    ((row-3)<row&&(col+3)>col&&status_plusminus[row-3]==`ENEMYQUEEN)||((status_plusminus[row-3]==`EMPTY)&
    ((row-4)<row&&(col+4)>col&&status_plusminus[row-4]==`ENEMYQUEEN)||((status_plusminus[row-4]==`EMPTY)&
    ((row-5)<row&&(col+5)>col&&status_plusminus[row-5]==`ENEMYQUEEN)||((status_plusminus[row-5]==`EMPTY)&
    ((row-6)<row&&(col+6)>col&&status_plusminus[row-6]==`ENEMYQUEEN)||((status_plusminus[row-6]==`EMPTY)&
    ((row-7)<row&&(col+7)>col&&status_plusminus[row-7]==`ENEMYQUEEN)


    ))))));

     attack4=
    ((row+1)>row&&(col-1)<col&&status_plusminus[row+1]==`ENEMYQUEEN)||((status_plusminus[row+1]==`EMPTY)&
    ((row+2)>row&&(col-2)<col&&status_plusminus[row+2]==`ENEMYQUEEN)||((status_plusminus[row+2]==`EMPTY)&
    ((row+3)>row&&(col-3)<col&&status_plusminus[row+3]==`ENEMYQUEEN)||((status_plusminus[row+3]==`EMPTY)&
    ((row+4)>row&&(col-4)<col&&status_plusminus[row+4]==`ENEMYQUEEN)||((status_plusminus[row+4]==`EMPTY)&
    ((row+5)>row&&(col-5)<col&&status_plusminus[row+5]==`ENEMYQUEEN)||((status_plusminus[row+5]==`EMPTY)&
    ((row+6)>row&&(col-6)<col&&status_plusminus[row+6]==`ENEMYQUEEN)||((status_plusminus[row+6]==`EMPTY)&
    ((row+7)>row&&(col-7)<col&&status_plusminus[row+7]==`ENEMYQUEEN)


    ))))));

     lefttowerattack=
    ((row-1)<row&&status_col[row-1]==`ENEMYQUEEN)||((status_col[row-1]==`EMPTY)&
    ((row-2)<row&&status_col[row-2]==`ENEMYQUEEN)||((status_col[row-2]==`EMPTY)&
    ((row-3)<row&&status_col[row-3]==`ENEMYQUEEN)||((status_col[row-3]==`EMPTY)&
    ((row-4)<row&&status_col[row-4]==`ENEMYQUEEN)||((status_col[row-4]==`EMPTY)&
    ((row-5)<row&&status_col[row-5]==`ENEMYQUEEN)||((status_col[row-5]==`EMPTY)&
    ((row-6)<row&&status_col[row-6]==`ENEMYQUEEN)||((status_col[row-6]==`EMPTY)&
    ((row-7)<row&&status_col[row-7]==`ENEMYQUEEN)


    ))))));

    righttowerattack=
     ((row+1)>row&&status_col[row+1]==`ENEMYQUEEN)||((status_col[row+1]==`EMPTY)&
    ((row+2)>row&&status_col[row+2]==`ENEMYQUEEN)||((status_col[row+2]==`EMPTY)&
    ((row+3)>row&&status_col[row+3]==`ENEMYQUEEN)||((status_col[row+3]==`EMPTY)&
    ((row+4)>row&&status_col[row+4]==`ENEMYQUEEN)||((status_col[row+4]==`EMPTY)&
    ((row+5)>row&&status_col[row+5]==`ENEMYQUEEN)||((status_col[row+5]==`EMPTY)&
    ((row+6)>row&&status_col[row+6]==`ENEMYQUEEN)||((status_col[row+6]==`EMPTY)&
    ((row+7)>row&&status_col[row+7]==`ENEMYQUEEN)


    ))))));

    uptowerattack=
    ((col+1)>col&&status_row[col+1]==`ENEMYQUEEN)||((status_row[col+1]==`EMPTY)&
    ((col+2)>col&&status_row[col+2]==`ENEMYQUEEN)||((status_row[col+2]==`EMPTY)&
    ((col+3)>col&&status_row[col+3]==`ENEMYQUEEN)||((status_row[col+3]==`EMPTY)&
    ((col+4)>col&&status_row[col+4]==`ENEMYQUEEN)||((status_row[col+4]==`EMPTY)&
    ((col+5)>col&&status_row[col+5]==`ENEMYQUEEN)||((status_row[col+5]==`EMPTY)&
    ((col+6)>col&&status_row[col+6]==`ENEMYQUEEN)||((status_row[col+6]==`EMPTY)&
    ((col+7)>col&&status_row[col+7]==`ENEMYQUEEN)


    ))))));

      downtowerattack=
    ((col-1)<col&&status_row[col-1]==`ENEMYQUEEN)||((status_row[col-1]==`EMPTY)&
    ((col-2)<col&&status_row[col-2]==`ENEMYQUEEN)||((status_row[col-2]==`EMPTY)&
    ((col-3)<col&&status_row[col-3]==`ENEMYQUEEN)||((status_row[col-3]==`EMPTY)&
    ((col-4)<col&&status_row[col-4]==`ENEMYQUEEN)||((status_row[col-4]==`EMPTY)&
    ((col-5)<col&&status_row[col-5]==`ENEMYQUEEN)||((status_row[col-5]==`EMPTY)&
    ((col-6)<col&&status_row[col-6]==`ENEMYQUEEN)||((status_row[col-6]==`EMPTY)&
    ((col-7)<col&&status_row[col-7]==`ENEMYQUEEN)


    ))))));

    attacked=
    attack1|
    attack2|
    attack3|
    attack4|
    uptowerattack|
    downtowerattack|
    lefttowerattack|
    righttowerattack;




    end

endmodule
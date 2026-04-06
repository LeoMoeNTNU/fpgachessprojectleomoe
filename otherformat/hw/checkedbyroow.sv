//This one will figure out a bunch of stuff. 
//We will input the color and then check the position of the king of that color. 
//Then we will check if anyone is in between them. 
//This should all the super doable!
import chesstypes::*;

module checkbyrook(
    input board_t board,
    input color_t playing,

    output logic attacked,

    output logic out_sharing_row_or_col1,//This just checks if they are on the same row. 
    output logic out_sharing_row1
);

    always_comb begin: combinatorial
    if(playing==WHITE)begin
        out_sharing_row1==(chesstypes::row(WHITEKING)==chesstypes::row(BLACKROOK1));
        //I need more than this of course because I need to check if 
    end


    end



endmodule
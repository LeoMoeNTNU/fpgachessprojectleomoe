import chesstypes::*;

/* to know:
castling goes away for all of them. 
my plan is to simply have a counter. 
then I need to build an is-castling allowed. This is a bit of a big component. 



*/
module kingmoves (

    input logic ready,
    input state_t state,  
        input logic [7:0] position,   
  
    output state_t out_state,
    output logic validoutstate,
    output logic valid
  

);
    logic [1:0] state;

    //This one will simply just go the full round. 
    //In addition to finding the 


endmodule
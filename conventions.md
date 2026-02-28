# row refers to A,B,C,D and col refers to 1,2,3,4

## row being low refers to left side and row being high to right side. 

# I pass in kingposition a lot. 

## The reason is that I need to verify if there is a check before making moves. 
Verifying if there is a check is a lot faster if I already know where the king is. 
This also means that, when moving the king, this also needs to be moved. 
There is an argument here that I should keep track of where all the pieces is constantly. 
These are 16 pieces for each color, which is a lot less than checking 64 tiles to get a move. 

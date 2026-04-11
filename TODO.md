# actually finish the heuristic. It only works for black right now. 

# in order to finish kingmoves, I need to also build a component that figures out if youre allowed to castle. 

# to do this I need a component that checks if a piece is threatened. 
This I almost have, so I just have to implement it. 

# I have roughly written boardrep but it still needs a lot of testing and verification. 
There are also probably syntax errors. 
This will be super integral to the whole thing, so at some point I will retunr to it and make it really good, potentially. 

# more tests for materialcount. 
I have written some, but I could have written a lot more. As of now, idk yet. 

# more tests on movevector: 
Test with several moves. 
Check that it can zero out and keep going up. 


# more tests on testcheckfrom pawn
It seems to be working but we never know with these things. 
At least some boundary tests would be nice. 

# generalized script for testing simple components. 
having a bunch of shell scripts that are barely different seems a bit superfluous.  

## The heuristic should probably emphasize captures or supported threats 
It should also be fairly aggressive because it should only look at 4-10 moves most of the time. 

# check for repeated state 
This may be a difficult component to write. 
I guess It needs to know what has been changed and then it can use this to quickly check. 
The three move repeat does several things:
    board state the same with the same possible movements 3 times. 
    does every pawn movement indicate an unreversible movement?
As such I kind of only have to remember a few movements most of the time. 
At most 16 pieces can do movements. 
 
 # how to generate a random legal move: 
There are 2 versions of this. 
The plan for now is to iterate over all the tiles. 
If the tile doesn't have a piece of the correct color, skip. 
If it does have a tile of the correct color, then we have a component that gives all of the legal new moves until it says that it is done. 
For each of these, we will maintain a top 8 that we will pick from randomly. Maybe it will be a weighted average, but who knows. 
If there is no legal move, idk how to deal with this. 

# random: some linear shift and a seed or something like that. 

# I can make my move-finder run in parallell, but this will incurr some issues.
I guess the plan is to do it sequentially first, make tests and then parallellize. 
That component shouldn't have the random in it, just the move generators and it produces the top 8 moves. 

# In my move-thing, there will be something outside of the check-for-board-repeat. 
We wont actually maintain all the last moves. 
Instead, we will have a thing that checks if the move is either a pawn move or a capture. 
I guess this is something that someone else will output. 
As such, this is something that will be output somewhere. 
My guess is that there is a component that outputs possible moves and tells us if it a capture or not. 
After this, we in parallell run a heuristic on it and we check if it is repetitive. 
As such, we will have a component that updates it.
I think the way we do this, is simply that, for each move, we know if it is a draw or a heuristic.
When we eval the moves, we both keep their score and we remember if it nulls out the story. 
As such, the only thing that this component does is that it has two commands, which are: 
    1. increment and add the new move at the bottom. 
    2. zero out everything. 

# make the standard board state. 

# make the board generators. 
The board generators need to output whether or not something was taken. 

# all the components that check for checks are actually components that I could be using in a lot of ways. 
To do this, I should change the names from checkby... to threatenedby... 
This may incur the cost that I need to change a few things. 
Should I instead just make a map of what is threatened from where and roll with it like that?
This is a completely different type of component but I think it would be better in that way. 





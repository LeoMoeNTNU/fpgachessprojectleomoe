# more tests on testcheckfrom pawn
It seems to be working but we never know with these things. 
At least some boundary tests would be nice. 

# generalized script for testing simple components. 
having a bunch of shell scripts that are barely different seems a bit superfluous.  

# heuristics. 
I made the interface. The next step will probably be to just add the material value. 
To do this, I wil have to have a summing system, either with .sum or I just implement something myself!

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
In both of these, the weighted average should be very heavily weighted for either threats or captures. 



## One is to look at all the possible moves and then do a weighted average. This is probably what I will end up with. 
## The other is picking a random piece. 
    This can be done by picking a random tile until the random tile is where there is a legal move. 
    And then do a random move from there, which I don't know how to do. 

# Cooking idea: 
We can look at solely the top 8 moves using the heuristic. 
Then we will need a lot less lookahead, which is pretty great. 





/*
Abril Gonzalez
February 2019

LeetCode Problem 657. Robot Return to Origin
There is a robot starting at position (0, 0), the origin, on a 2D plane. 
Given a sequence of its moves, judge if this robot ends up at (0, 0)
 after it completes its moves.

Runtime: O(n)

*/

class Solution {
public:
    bool judgeCircle(string moves) {
        int upMoves = 0;
        int downMoves = 0;
        int leftMoves = 0;
        int rightMoves = 0;
        
        //Count how many times the robot has moved up or down
        for(int i=0; i < moves.length(); i++){
            if(moves[i] == 'U')
                upMoves++;
            if(moves[i] == 'D')
                downMoves++;
            if(moves[i] == 'L')
                leftMoves++;
            if(moves[i] == 'R')
                rightMoves++;
        }
        
        if(upMoves == downMoves && leftMoves == rightMoves)
            return true;
        else
            return false;
        
    }
};
/*
    Abril Marina Gonzalez Ramirez
    August 2019
    
    LeetCode Problem 1021. Remove Outermost Parentheses

    Return S after removing the outermost parentheses of 
    every primitive string in the primitive decomposition of S.

    Runtime: O(n)
*/

class Solution {
public:
    string removeOuterParentheses(string S) {
        string answer = "";
        int open, close, start = 0;
        
        // Primitive = number of open parentheses == closed
        for(int i=0; i < S.length(); i++){
            if(S[i] == '(')
                open++;
            else
                close++;
            if(open == close){
                answer += S.substr(start+1, i-start-1);
                start = i + 1;
            }
        }
        
        cout << answer << endl;
        return answer;
    }
};
/*
    Abril Marina Gonzalez Ramirez
    May 2019
    
    LeetCode Problem 1047. Remove All Adjacent Duplicates In String
    Given a string S of lowercase letters, a duplicate removal consists of choosing two adjacent and equal letters, and removing them.

    We repeatedly make duplicate removals on S until we no longer can.

    Return the final string after all such duplicate removals have been made.  It is guaranteed the answer is unique.

    Runtime: O(n)
*/
class Solution {
public:
    string removeDuplicates(string S) {
        // Check that string is at least 2 chars long
        if(S.length() < 2)
            return S;
        
        int current = 0;
        int forward = 1;
        
        
        for(int i=0; i < S.length()-1; ++i){
            if(S.length() == 0)
                return "";
            
            if(S[i] == S[i+1]){
                S.erase(i,2);
                i = -1;
            }
        }
        
        return S;
    }
};
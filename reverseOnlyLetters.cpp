/*
Abril Gonzalez
February 2019

LeetCode Problem 917. Reverse Only Letters
Given a string S, return the "reversed" string where all characters 
that are not a letter stay in the same place, and all letters reverse their positions.

*/
class Solution {
public:
    string reverseOnlyLetters(string S) {
        int frontI = 0;
        int backI = S.length()-1;
        
        // Iterate through string
        while(frontI < backI){
            // Check if both chars are letters
            while((S[frontI] > 122) ||
                  (S[frontI] < 97 && S[frontI] > 90) ||
                  (S[frontI] < 65) && frontI <= backI){
                //If no letters to reverse are found
                if(frontI >= backI)
                    return S;
                frontI++;
            }
            while((S[backI] > 122) ||
                  (S[backI] < 97 && S[backI] > 90) ||
                  (S[backI] < 65) && frontI <= backI){
                backI--;
            }
            // Swap both letters
            swap(S[frontI],S[backI]);
            frontI++;
            backI--;
        }
        
        return S;
    }
};
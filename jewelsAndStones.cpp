/*
Abril Gonzalez
February 2019


LeetCode Problem 771. Jewels and Stones
You're given strings J representing the types of stones that are jewels, and S representing the stones you have.  
Each character in S is a type of stone you have.  You want to know how many of the stones you have are also jewels.

The letters in J are guaranteed distinct, and all characters in J and S are letters.
Letters are case sensitive, so "a" is considered a different type of stone from "A".

Runtime: O(n)

*/

class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int countJewels = 0;
        
        // Set of Jewels for all ASCII chars
        int jewelSet[256] = {0};
        
        // Set as 1 for all jewels
        for(int i=0; i < J.length(); i++){
            jewelSet[J.at(i)] = 1;
        }
        
        // Find chars in S that are also in jewelSet
        for(int i=0; i < S.length(); i++){
            if(jewelSet[S.at(i)] == 1)
                countJewels++;
        }
        
        return countJewels;
    }
};
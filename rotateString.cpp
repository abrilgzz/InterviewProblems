/*
Abril Gonzalez
February 2019


LeetCode Problem 796. Rotate String
We are given two strings, A and B.

A shift on A consists of taking string A and moving the leftmost character to the rightmost position. 
For example, if A = 'abcde', then it will be 'bcdea' after one shift on A. 
Return True if and only if A can become B after some number of shifts on A.

Runtime: O(n)

*/

class Solution {
public:
    bool rotateString(string A, string B) {
        if(A.length() != B.length())
            return false;
        
        // Duplicate the first string by concatenating it to itself
        string concatenatedA = A + A;
        
        // Try to find B in the concatenation of string A
        if(concatenatedA.find(B) != string::npos)
            return true;
        else
            return false;
    }
};
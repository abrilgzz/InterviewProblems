/*
Abril Gonzalez
February 2019

LeetCode Problem 905. Sort Array By Parity
Given an array A of non-negative integers, return an array consisting of all the even 
elements of A, followed by all the odd elements of A.

Runtime: O(n)

*/

class Solution {
public:
    
    vector<int> sortArrayByParity(vector<int>& A) {
        // Vectors of even and odd numbers
        vector<int> evenNumbers;
        vector<int> oddNumbers;
        
        // Sort elements into two vectors by parity
        for(int i=0; i < A.size(); i++){
            if(A[i] % 2 == 0)
                evenNumbers.push_back(A[i]);
            else
                oddNumbers.push_back(A[i]);
        }
        
        // Insert oddNumbers into evenNumbers vector
        evenNumbers.insert(evenNumbers.end(), oddNumbers.begin(), oddNumbers.end());
        return evenNumbers;
    }
};
/*
Abril Gonzalez
February 2019


LeetCode Problem 977. Squares of a Sorted Array
Given an array of integers A sorted in non-decreasing order, 
return an array of the squares of each number, also in sorted non-decreasing order.

Runtime: O(n)

*/
class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        vector<int> answer;
        
        // Push all squares into a new vector
        for(int i=0; i < A.size(); i++){
            answer.push_back(pow(A[i], 2));
        }
        
        // Sort 
        sort(answer.begin(), answer.end());
        
        return answer;
        
    }
};
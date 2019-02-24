/*
Abril Gonzalez
February 2019


LeetCode Problem 118. Pascal's Triangle
Given a non-negative integer numRows, generate the first numRows of Pascal's triangle.
In Pascal's triangle, each number is the sum of the two numbers directly above it.

Runtime: O(n^1.5 )

*/


class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> answerPascal;
        
        if(numRows == 0)
            return {};
        
        // Push back first row
        //answerPascal.push_back({1});
        vector<int> firstRow = {1};
        answerPascal.push_back(firstRow);
        
        for(int i = 1; i < numRows; i++){
            vector<int> currentRow;
            // Insert 1 at the beginning of each row
            currentRow.push_back({1});
            
            vector<int> previousRow = answerPascal[i-1];
            
            // Insert numbers that go in between as the sum 
            for(int j = 0; j < previousRow.size() - 1; j++){
                currentRow.push_back(previousRow[j] + previousRow[j+1]);
            }
            // Insert 1 at the end of each row
            currentRow.push_back({1});
            
            // Push final row into answer matrix
            answerPascal.push_back(currentRow);
        }
        
        return answerPascal;
    }
};
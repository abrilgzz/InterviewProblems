/*
Abril Gonzalez
February 2019

LeetCode Problem 832. Flipping an Image
Given a binary matrix A, we want to flip the image horizontally, 
then invert it, and return the resulting image.

Runtime: O(n^2)

*/

class Solution {
public:
    // Function that reverses each row
    void reverseRow(vector<int>& row){
        int front = 0;
        int back = row.size()-1;
        
        while(front < back){
            swap(row[front], row[back]);
            front++;
            back--;
        }
    }
    
    // Function that inverts each row
    void invertRow(vector<int>& row){
        for(int i=0; i < row.size(); i++){
            if(row[i] == 0)
                row[i] = 1;
            else
                row[i] = 0;
        }        
    }
    
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        for(int i=0; i < A.size(); i++){
            reverseRow(A[i]);
            invertRow(A[i]);
        }
        
        return A;
    }
};
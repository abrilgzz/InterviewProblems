/*
Abril Gonzalez
February 2019

LeetCode Problem 852. Peak Index in a Mountain Array
Let's call an array A a mountain if the following properties hold:

- A.length >= 3
- There exists some 0 < i < A.length - 1 such that
    A[0] < A[1] < ... A[i-1] < A[i] > A[i+1] > ... > A[A.length - 1]

Given an array that is definitely a mountain, return any i such that
A[0] < A[1] < ... A[i-1] < A[i] > A[i+1] > ... > A[A.length - 1].

Runtime: O(n)

*/
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) {
        int peakHeight = 0;
        int peakIndex = 0;
        
        // Find the largest int in vector, save its index
        for(int i=0; i < A.size(); i++){
            if(A[i] > peakHeight){
                peakHeight = A[i];
                peakIndex = i;
            }
        }

        return peakIndex;
    }
};
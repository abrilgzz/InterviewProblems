/*
    Abril Marina Gonzalez Ramirez
    August 2019
    
    LeetCode Problem 53. Maximum subarray
    Given an integer array nums, find the contiguous subarray 
    (containing at least one number) which has the largest sum and return its sum.

    Runtime: O(n)
*/
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // Implementation of Kadane's algorithm
        int currentSum = nums[0];
        int totalSum = nums[0];
        
        for(int i=1; i < nums.size(); i++){
            currentSum = max(nums[i], currentSum + nums[i]);
            if(currentSum > totalSum)
                totalSum = currentSum;
        }
        
        return totalSum;
    }
};
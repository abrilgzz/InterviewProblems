/*
Abril Gonzalez
January 2019

LeetCode Problem 26. Remove Duplicates from Sorted Array
Given a sorted array nums, remove the duplicates in-place such that each element appear only once and return the new length.

Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.

Runtime: O(n)

*/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count = 0;
        

        for(int i = 1; i < nums.size(); i++){
            if(nums[i] == nums[i-1]) 
                count++;
            else 
                nums[i-count] = nums[i];
        }   
        
        return nums.size()-count;
        
    }
};
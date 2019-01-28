/*
Abril Gonzalez
January 2019

LeetCode Problem 169. Majority Element
Given an array of size n, find the majority element. The majority element is the element that appears more than ⌊ n/2 ⌋ times.
You may assume that the array is non-empty and the majority element always exist in the array.

Runtime: O(n)

*/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> numsMap;

    
        // Insert ints from vector into map
        for(int i=0; i<nums.size();i++){
            // Return if a value is found with n/2
            if (numsMap[nums[i]] == (nums.size() / 2))
                return nums[i];
            else
                // Increase the value for each key at each occurrence
                numsMap[nums[i]]++;
        }
        
        return -1;
        
    }
};
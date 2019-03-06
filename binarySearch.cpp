/*
    Abril Marina Gonzalez Ramirez
    March 2019
    
    LeetCode Problem 704. Binary Search
    Given a sorted (in ascending order) integer array nums of n elements 
    and a target value, write a function to search target in nums.
    If target exists, then return its index, otherwise return -1.
    
    Runtime: O(log n)
*/

class Solution {
public:
    int search(vector<int>& nums, int target) {
        // Declare initial indices
        int first = 0;              
        int last = nums.size()-1;   
        
        // If vector contains only one number
        if(first == last){
            if(nums[first] == target)
                return first;
            else
                return -1;
        }
        
        while(first <= last){
            // Get mid
            int mid = first + (last - first)/2;
            
            // Target is found
            if(nums[mid] == target)
                return mid;
            
            // Look for target on the left partition
            else if(nums[mid] > target){
                last = mid-1;
            }
            // Look for target on the right partition
            else{
                first = mid+1;
            }
        }
        
        return -1;
        
    }
};
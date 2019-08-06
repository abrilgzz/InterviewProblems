/*
    Abril Marina Gonzalez Ramirez
    August 2019
    
    LeetCode Problem 33. Search in Rotated Sorted Array
    Suppose an array sorted in ascending order is rotated at 
    some pivot unknown to you beforehand. (i.e., [0,1,2,4,5,6,7] might become [4,5,6,7,0,1,2]).

    You are given a target value to search. If found in the array return its index, 
    otherwise return -1.

    You may assume no duplicate exists in the array.

    Runtime: O(log n)
*/
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size()-1;
        
        // Binary search with pivot
        while(left <= right){
            int mid = (left + right) / 2;
            if(nums[mid] == target){
                return mid;
            }
            // Rotation exists, target is on the right
            if(nums[mid] > nums[right]){  
                if(target < nums[mid] && target >= nums[left])
                    right = mid - 1;
                else
                    left = mid + 1;
            }
            // Rotation exists, target is on the left
            else if(nums[mid] < nums[left]){
                if(target > nums[mid] && target <= nums[right])
                    left = mid + 1;
                else
                    right = mid - 1;
            }
            // Normal binary search
            else{
                if(target < nums[mid])
                    right = mid - 1;
                else
                    left = mid + 1;
            }
        }
        // Target is not in array
        return -1;
    }
};
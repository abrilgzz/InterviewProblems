/*
Abril Gonzalez
February 2019


LeetCode Problem 540. Single Element in a Sorted Array
Given a sorted array consisting of only integers where every element appears twice except for one element 
which appears once. Find this single element that appears only once.

Runtime: O(log n)

*/

class Solution {
public:
    
    int binarySearch(vector<int>& nums, int left, int right){
        // Calculate the pivot or the element in the middle
        int pivot = (left+right) / 2;
        
        // Return the element if it is on the left or right of the (sub)vector
        if(right - left == 1){
            if(left % 2 == 0)
                return nums[left];
            else
                return nums[right];
        }
        
        // Check left and right of pivot
        // Numbers to its sides are different, then single element is found
        if( (nums[pivot] != nums[pivot+1]) && (nums[pivot] != nums[pivot-1]))
            return nums[pivot];
        
        // Binary search to find the element recursively 
        if(nums[pivot] == nums[pivot-1]){
            if((pivot - 1) % 2 == 0)
                return binarySearch(nums, pivot, right);
            else
                return binarySearch(nums, left, pivot); 
        }
        else{
            if(pivot % 2 == 0)
                return binarySearch(nums, pivot, right);
            else
                return binarySearch(nums, left, pivot);
        }
    }
    
    int singleNonDuplicate(vector<int>& nums) {
        /*
            If there is always a single element in a sorted array of duplicates,
            use binary search to determine where it is.
        */
        return binarySearch(nums, 0, (nums.size()-1 ));
    }
};
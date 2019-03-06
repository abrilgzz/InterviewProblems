/*
    Abril Marina Gonzalez Ramirez
    March 2019
    
    LeetCode Problem 27. Remove Element
    Given an array nums and a value val, remove all instances of that value in-place and return the new length.
    Do not allocate extra space for another array, you must do this by modifying 
    the input array in-place with O(1) extra memory.
    
    The order of elements can be changed. 
    It doesn't matter what you leave beyond the new length.
    
    Runtime: O(n)
*/
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        // Check if it is an empty vector
        if(nums.size() == 0)
            return 0;
        
        // Traverse vector
        for (int i = 0; i < nums.size(); i++){
            // If value at index is equal to val
            if (nums[i] == val){
                // Erase this number from vector
                nums.erase(nums.begin()+i);
                // Move index back
                i--;
            }
        }
        
        return nums.size();
    }
};
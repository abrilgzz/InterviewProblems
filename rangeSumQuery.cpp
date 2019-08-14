/*
    Abril Marina Gonzalez Ramirez
    August 2019
    
    LeetCode Problem 303. Range Sum Query - Immutable
    Given an integer array nums, find the sum of the elements between indices i and j (i ≤ j), inclusive.


*/
class NumArray {
public:
    // Stores sum from 0 to i
    vector<int> memory = {0};
    
    NumArray(vector<int>& nums) {
        int sum = 0;
        for(int i=0; i < nums.size(); i++){
            sum += nums[i];
            memory.push_back(sum);
        }
    }
    
    int sumRange(int i, int j) {
        return memory[j+1] - memory[i];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(i,j);
 */
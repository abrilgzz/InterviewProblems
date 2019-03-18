/*
    Abril Marina Gonzalez Ramirez
    March 2019
    
    LeetCode Problem 1. Two Sum
    Given an array of integers, return indices of the 
    two numbers such that they add up to a specific target.
   
    You may assume that each input would have exactly one solution, 
    and you may not use the same element twice.
    
    Runtime: O(n)
*/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> complements;
        vector<int> answer;
        
        for(int i=0; i < nums.size(); i++){
            // Check if you have found the complement previously
            auto it = complements.find(nums[i]);
            if(it == complements.end()){
                // Push the complement (target-number) of each number 
                // into a map and store its index
                complements[target-nums[i]] = i; 
            }
            else{
                answer.push_back(it->second);
                answer.push_back(i);
                return answer;
            }   
        }
        
        return answer;
        
    }
};
/*
    Abril Marina Gonzalez Ramirez
    May 2019
    
    LeetCode Problem 485. Max Consecutive Ones
    Given a binary array, find the maximum number of consecutive 1s in this array.

    Runtime: O(n)
*/
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int countOnes = 0;
        int maxConsecutiveOnes = 0;
        
        // Iterate through array
        for(int i=0; i < nums.size(); ++i){
            if(nums[i] == 1){
                countOnes++;
                if(countOnes > maxConsecutiveOnes)
                    maxConsecutiveOnes = countOnes;
            }
            else
                countOnes = 0;
        }
        
        return maxConsecutiveOnes;
        
    }
};
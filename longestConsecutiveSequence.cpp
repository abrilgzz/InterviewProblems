/*
Abril Gonzalez
February 2019

LeetCode Problem 128. Longest Consecutive Sequence
Given an unsorted array of integers, find the length of the longest consecutive elements sequence.

Runtime: O(n)

*/
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set <int> mySet;
        
        for(int i=0; i < nums.size(); i++){
            mySet.insert(nums[i]);
        }
        
        int longest =0;
        for(set<int>::iterator it=mySet.begin(); it!=mySet.end(); it++){
            if(mySet.find(*it-1) == mySet.end()){
                int current = *it;
                int count = 1;
                while(mySet.find(current+1) != mySet.end()){
                    count++;
                    current++;
                }
                longest = max(longest,count);
            }
        }
        return longest;
    }
};
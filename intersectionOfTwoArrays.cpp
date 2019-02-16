/*
Abril Gonzalez
February 2019


LeetCode Problem 349. Intersection of Two Arrays
Given two arrays, write a function to compute their intersection.

Runtime: O(n)

*/

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int largest = 1;
        
        if(nums1.size() < nums2.size())
            largest = 2;
            
        set<int> largerSet;
        set<int> smallerSet;
        
        vector<int> answer;
        
        if(largest == 1){
            // Insert all the numbers from the largest vector into largerSet
            for(int i=0; i < nums1.size(); i++){
                largerSet.insert(nums1[i]);
            }
            
            // Insert all the numbers from the smaller vector into smallerSet
            for(int i=0; i < nums2.size(); i++){
                smallerSet.insert(nums2[i]);
            }
        }
        else{
            for(int i=0; i < nums2.size(); i++){
                largerSet.insert(nums2[i]);
            }
            
            for(int i=0; i < nums1.size(); i++){
                smallerSet.insert(nums1[i]);
            }
        }
        // Look for all the elements in smallerSet that appear in largerSet
        for(set<int>::iterator it=smallerSet.begin(); it != smallerSet.end(); it++){
            
            set<int>::iterator it2 = largerSet.find(*it);
            
            if(it2 != largerSet.end())
                answer.push_back(*it);
        }
        
        return answer;
    }
};
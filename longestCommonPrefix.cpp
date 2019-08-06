/*
    Abril Marina Gonzalez Ramirez
    August 2019
    
    LeetCode Problem 14. Longest Common Prefix
    Write a function to find the longest common prefix string amongst an array of strings.
    If there is no common prefix, return an empty string "".

    Runtime: O(n)
*/
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string answer = "";
        
        if(strs.size() == 0)
            return answer;
        
        // Sort words to find the shortest and longest word
        sort(strs.begin(), strs.end());
        
        string first = strs[0]; // Shortest word
        string last = strs[strs.size()-1];  // Longest word
        
        // Get the limit of the prefix, could be the whole first word
        int limit = first.length();
        
        // Compare only first and last words
        for(int i = 0; i < limit; i++){
            if(first[i] == last[i]){
                answer += first[i];
            }
            else
                break;
        }
        
        return answer;        
    }
};
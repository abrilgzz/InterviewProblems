/*
Abril Gonzalez
February 2019

LeetCode Problem 242. Valid Anagram
We are given two strings, A and B.

Given two strings s and t , write a function to determine if t is an anagram of s.

Runtime: O(n)

*/
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length())
            return false;
        
        // Create array for all 26 letters
        int array[26] = {0};
        
        // Count how many times each letter has been seen for first string and increase its count
        for(int i=0; i < s.length(); i++){
            array[s[i]-'a']++;
        }
        
        // Count how many times each letter has been seen for second string and decrease it 
        for(int i=0; i < t.length(); i++){
            array[t[i]-'a']--;
        }
        
        // Iterate through array and if you fi
        for(int i=0; i < 26; i++){
            if(array[i] != 0)
                return false;
        }
        
        return true;
        
    }
};
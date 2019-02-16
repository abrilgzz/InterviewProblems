/*
Abril Gonzalez
February 2019


LeetCode Problem 125. Valid Palindrome
Given a string, determine if it is a palindrome, 
considering only alphanumeric characters and ignoring cases.

Runtime: O(n)

*/

class Solution {
public:
    string getAlphaNum(string s){
        string cleanString;
        
        for(int i = 0; i < s.length(); i++){
            // Ignore cases
            s[i] = tolower(s[i]);
            
            // Leave only letters and numbers
            if(isalpha(s[i]) || isdigit(s[i]))
                cleanString+=s[i];
        }
        
        return cleanString;     
    }
    
    
    bool isPalindrome(string s) {   
        // Get only alphanumeric characters
        string newString = getAlphaNum(s);
        
        // Check if it is a palindrome
        int back = newString.length() - 1;
        
        for(int front = 0; front < newString.length()/2; front++){
            if(newString[front] != newString[back]){
                return false;
            }
            back--;
        }
        
        return true;
    }
};
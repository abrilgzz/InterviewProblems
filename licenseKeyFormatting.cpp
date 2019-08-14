/*
    Abril Marina Gonzalez Ramirez
    August 2019
    
    LeetCode Problem 482. License Key Formatting
    You are given a license key represented as a string S which consists only 
    alphanumeric character and dashes. The string is separated into N+1 groups by N dashes.

    Given a number K, we would want to reformat the strings such that each group contains 
    exactly K characters, except for the first group which could be shorter than K, 
    but still must contain at least one character. Furthermore, there must be a dash inserted between 
    two groups and all lowercase letters should be converted to uppercase.

    Given a non-empty string S and a number K, format the string according to the rules 
    described above.

    Runtime: O(n)
*/
class Solution {
public:
    string licenseKeyFormatting(string S, int K) {
        string answer = "";
        // Every (k+1)th char from the tail of the string must be '-'
        
        // Start from the end of the string
        for(int i=S.length()-1; i >= 0; i--){
            // Ignore '-'
            if(S[i] != '-'){
                // Check if it is a (k+1)th char from the tail
                if(answer.length() % (K+1) == K){
                    answer += '-';
                }
                // Add to the answer string
                answer += toupper(S[i]);
            }
        }
        
        // Reverse final answer
        reverse(answer.begin(), answer.end());
        return answer;
    }
};
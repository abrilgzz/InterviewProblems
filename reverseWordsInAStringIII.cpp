/*
    Abril Marina Gonzalez Ramirez
    March 2019
    
    LeetCode Problem 557. Reverse Words in a String III
    Given a string, you need to reverse the order of characters in 
    each word within a sentence while still preserving whitespace and 
    initial word order.
    
    Runtime: O(n)
*/
class Solution {
public:
    string reverseWords(string s) {
        int stringSize = s.length();
    
        // Indices to tokenize string
        int initial = 0;
        int last = 0;
        int whitespace = 0;
        
        // Traverse string
        while(initial < s.length()){
            // Find last letter of word
            while(s[last] != ' ' && last != s.length()){
                last++;
            }
            whitespace = last;
            last--;
            
            // Swap letters in word
            while(initial < last){
                swap(s[initial], s[last]);
                initial++;
                last--;
            }
            
            // Move pointers forward
            initial = whitespace + 1;
            last = initial;
        }
        
        return s;
    }
};
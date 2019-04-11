/*
    Abril Marina Gonzalez Ramirez
    April 2019
    
    LeetCode Problem 520. Detect Capital
    Given a word, you need to judge whether the usage of capitals in it is right or not.
    We define the usage of capitals in a word to be right when one of the following cases holds:

    1. All letters in this word are capitals, like "USA".
    2. All letters in this word are not capitals, like "leetcode".
    3. Only the first letter in this word is capital if it has more than one letter, like "Google".
    
    Otherwise, we define that this word doesn't use capitals in a right way.

    Runtime: O(n)
*/
class Solution {
public:
    bool detectCapitalUse(string word) {
        // Check if word is only one char
        if(word.length() == 1)
            return true;
        
        bool firstUpper = false;
        bool restUpper = false;
        
        // Check if first word is capital
        if(isupper(word[0]))
            firstUpper = true;
        
        if(isupper(word[1]))
            restUpper = true;
        
        // Check that word contains only upper case letters
        if(firstUpper && restUpper){
            for(int i = 2; i < word.length(); i++){
                if(!isupper(word[i]))
                    return false;
            }
        }
        // Check that only the first letter is upper case
        else if(firstUpper && !restUpper){
            for(int i = 2; i < word.length(); i++){
                if(isupper(word[i]))
                    return false;
            }
        }
        // If the first word is lower case, check that all the rest are
        else if(!firstUpper){
            for(int i = 1; i < word.length(); i++){
                if(isupper(word[i]))
                    return false;
            }
        }
        return true;
    }
};
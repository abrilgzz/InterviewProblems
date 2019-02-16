/*
Abril Gonzalez
February 2019


LeetCode Problem 709. To Lower Case
Implement function ToLowerCase() that has a 
tring parameter str, and returns the same string in lowercase.

Runtime: O(n)

*/

class Solution {
public:
    string toLowerCase(string str) {
        
        // Convert to lower case ascii char
        // A = 65
        // a = 97
        for(int i=0; i < str.length(); i++){
            if(str[i] >= 65 && str[i] <= 90){
                str[i] = str[i] + 32;
            }
        }
        
        return str;
        
    }
};
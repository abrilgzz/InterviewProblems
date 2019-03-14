/*
    Abril Marina Gonzalez Ramirez
    March 2019
    
    LeetCode Problem 415. Add Strings
    Given two non-negative integers num1 and num2 
    represented as string, return the sum of num1 and num2.
    
    Runtime: O(n)
*/
class Solution {
public:
    string addStrings(string num1, string num2) {
        string resultString = "";
        int carry = 0;
        
        // Find the large and short string
        string large = (num1.length() >= num2.length()) ? num1 : num2;
        string small = (num1.length() < num2.length()) ? num1 : num2;
        
        // Fill smallest string with 0s
        while(small.length() < large.length()){
            small = "0" + small;
        }
        
        // Traverse the strings backwards
        for(int i=large.length()-1; i >= 0; i--){
            int result = 0;
            
            // Check if sum of two digits is greater or equal to 10
            if((large[i] - 48) + (small[i] - 48) + carry >= 10){
                result = (large[i] - 48) + (small[i] - 48) - 10 + carry;
                carry = 1;
            }
            else{
                result = (large[i] - 48) + (small[i] - 48) + carry;
                carry = 0;
            }
            
            // Append resulting digit to resultString
            resultString = to_string(result) + resultString;
        }
        
        // If there is still a carry left at the end, append it to the beginning
        if(carry == 1)
            resultString = to_string(carry) + resultString;
        
        return resultString;
    }
};
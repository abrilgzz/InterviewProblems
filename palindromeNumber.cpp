/*
Abril Gonzalez
February 2019


LeetCode Problem 9. Palindrome Number
Determine whether an integer is a palindrome.
An integer is a palindrome when it reads the same backward as forward.

*/

class Solution {
public:
    bool isPalindrome(int x) {
        // If number is negative, return false
        if(x < 0)
            return false;
        // If number is one digit, return true
        if(x < 10)
            return true;
        // If number is a multiple of ten, return false
        if(x % 10 == 0)
            return false;
        
        
        // newNumber to be calculated and original number
        int newNumber = 0;
        int originalNumber = x;
        
        while(x != 0){
            int residue = x % 10;
            
            // If newNumber exceeds the size of an int
            if(newNumber > (2147483647 / 10))
                return false;
            
            // Add the residue plus the newNumber * 10
            newNumber = (newNumber * 10) + residue;
        
            x /= 10;
        }
        
        if(newNumber == originalNumber)
            return true;
        else
            return false;
    }
};
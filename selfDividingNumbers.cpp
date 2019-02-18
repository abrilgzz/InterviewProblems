/*
Abril Gonzalez
February 2019

LeetCode Problem 728. Self Dividing Numbers
A self-dividing number is a number that is divisible by every digit it contains.

For example, 128 is a self-dividing number because 128 % 1 == 0, 128 % 2 == 0, and 128 % 8 == 0.

Also, a self-dividing number is not allowed to contain the digit zero.

Given a lower and upper number bound, output a list of every possible self dividing number, 
including the bounds if possible.


Runtime: O(n)

*/

class Solution {
public:
    // Function that checks if every digit of the number is self-dividing
    bool isSelfDividing(int number){
        
        // Convert number to string
        string numberStr = to_string(number);
        
        for(int i=0; i < numberStr.length(); i++){
            // Convert char to int digit
            int digitInt = numberStr[i] - '0';         
            
            // Check it does not have a 0
            if(digitInt == 0)
                return false;
            if(number % digitInt != 0)
                return false;
        }
        
        return true;
    }
    
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> answer;
        
        while(left <= right){
            if(isSelfDividing(left))
                answer.push_back(left);
            left++;
        }
        
        return answer;
    }
};
/*
Abril Gonzalez
February 2019

LeetCode Problem 476. Number Complement
Given a positive integer, output its complement number. 
The complement strategy is to flip the bits of its binary representation.


--nts: re-do problem but without using strings

*/

class Solution {
public:
    // Function that converts num to a binary string
    string toBinaryStr(int num){
        string binStr = "";
        int residue = -1;
        
        while(num != 0){
            residue = num % 2;
            num = num / 2;
            if(residue == 0)
                binStr += '0';
            else if(residue == 1)
                binStr += '1';
        }
        
        // Reverse the string, because we appended to the end of the string
        reverse(binStr.begin(), binStr.end());   
        
        return binStr;   
    }
    
    int convertBinStrToInt(string str){
        int exp = 0;
        int number = 0;
        
        // Calculate the binary value for the string 
        for(int i=str.length()-1; i > 0; i--){
            if(str[i] == '1'){
                number += pow(2, exp);
            }
            exp++;
        }
        
        return number;
    }
        
    int findComplement(int num) {
        string binStr = toBinaryStr(num);
        
        // Get the complement string by swapping 0s for 1s and viceversa
        for(int i=0; i < binStr.length(); i++){
            if(binStr[i] == '1')
                binStr[i] = '0';
            else
                binStr[i] = '1';
        }
        
        return convertBinStrToInt(binStr);
    }
};
/*
Abril Gonzalez
February 2019

LeetCode Problem 345. Reverse Vowels of a String

Write a function that takes a string as input and reverse only the vowels of a string.

Runtime: O(n)

*/

class Solution {
public:
    // Method that receives char and checks if it is a vowel
    bool isVowel(char c){
        if(c == 'a' || c == 'e' || c == 'i'
           || c == 'o' || c == 'u' ||
          c == 'A' || c == 'E' || c == 'I'
           || c == 'O' || c == 'U')
            return true;
        else
            return false;
    }
    
    string reverseVowels(string s) {
        if(s.length() <= 1)
            return s;
        
       // Indeces at the beggining and end of the string 
        int front = 0;
        int back = s.length()-1;        
            
        // Iterate through string from front and back
        while(front < back){
            // Move forward until you find a vowel
            while( (front < back) && !isVowel(s[front])){
                front++;
            }
            // Move backwards until you find a vowel
            while( (back > front) && !isVowel(s[back])){
                back--;
            }
            // Swap these vowels
            swap(s[front], s[back]);
            front++;
            back--;
        }
        return s;
    }
};
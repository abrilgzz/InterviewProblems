/*
Abril Gonzalez
February 2019


LeetCode Problem 344. Reverse String
Write a function that reverses a string. 
The input string is given as an array of characters char[].

Do not allocate extra space for another array, you must do this by modifying the 
input array in-place with O(1) extra memory.

Runtime: O(n)

*/

class Solution {
public:
    void reverseString(vector<char>& s) {
        // Indeces at front and back of vector
        int front = 0;
        int back = s.size()-1;
        
        // Swap left and right chars
        while(front < back){
            swap(s[front], s[back]);
            front++;
            back--;
        }
        
    }
};
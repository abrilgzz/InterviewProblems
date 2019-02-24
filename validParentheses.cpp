/*
Abril Gonzalez
February 2019

LeetCode Problem 20. Valid Parentheses
Given a string containing just the characters 
'(', ')', '{', '}', '[' and ']', determine if the input string is valid.

Runtime: O(n)

*/
class Solution {
public:
    bool isValid(string s) {
        stack<char> myStack;
        
        for(int i=0; i < s.length(); i++){
            // If it is an opening parenthesis, push it into stack
            if(s[i] == '(' || s[i] == '{' || s[i] == '[')
                myStack.push(s[i]);
            // Check top of the stack to see if it matches
            else if (!myStack.empty()  &&
                     ((s[i] == ')' && myStack.top() == '(') 
                    || (s[i] == ']' && myStack.top() == '[' )
                    || s[i] == '}' && myStack.top() == '{'))
                myStack.pop();
            else
                return false;
        }
        
        // Check if stack is empty
        if(myStack.empty())
            return true;
        else
            return false;
        
    }
};
/*
    Abril Marina Gonzalez Ramirez
    August 2019
    
    LeetCode Problem 989. Add to Array-Form of Integer
    For a non-negative integer X, the array-form of X is an array of its digits in left 
    to right order.  For example, if X = 1231, then the array form is [1,2,3,1].

    Given the array-form A of a non-negative integer X, return the array-form of the integer X+K.

    Runtime: O(n)
*/
class Solution {
public:
    vector<int> addToArrayForm(vector<int>& A, int K) {
        vector<int> answer;
        int lastDigit1 = 0;
        int lastDigit2 = 0;
        int carry = 0;
        
        // Add numbers from the end
        // Continue as long as one of both numbers exist
        while(!A.empty() || K != 0)
        {
            // Get the last digits
            if(A.empty())
                lastDigit1 = 0;
            else
                lastDigit1 = A.back();
            
            lastDigit2 = K % 10;
            
            // Add digits and carry
            int sum = lastDigit1 + lastDigit2 + carry;
            
            
            answer.push_back(sum % 10);
            carry = sum / 10;

            // Remove the last digits from both numbers
            if(A.empty() == NULL)
                A.pop_back();
            K = K / 10;
        }
        // Check if carry exists
        if(carry != 0)
            answer.push_back(carry);

        // Reverse the answer
        reverse(answer.begin(), answer.end());

        // Return the answer in vector format
        return answer; 
    }
};
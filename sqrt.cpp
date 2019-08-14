/*
    Abril Marina Gonzalez Ramirez
    August 2019
    
    LeetCode Problem 69. Sqrt(x)
    Implement int sqrt(int x).

    Compute and return the square root of x, 
    where x is guaranteed to be a non-negative integer.

    Since the return type is an integer, the decimal digits are 
    truncated and only the integer part of the result is returned.

    Runtime: O(n)
*/
class Solution {
public:
    int mySqrt(int x) {
        // Binary search approach
        int low = 0;
        int high = x;
        int mid;
        
        // Avoid mid = 0;
        if(x < 2)
            return x;
        
        while(low < high){
            mid = (low + high) / 2;
            if(x/mid >= mid)
                low = mid + 1;
            else
                high = mid;
        }
        return high - 1;
    }
};
/*
Abril Gonzalez
February 2019


LeetCode Problem 509. Fibonacci Number

The Fibonacci numbers, commonly denoted F(n) form a sequence, called the Fibonacci sequence,
such that each number is the sum of the two preceding ones, starting from 0 and 1.

Runtime: O(n)

*/

class Solution {
public:
    int fib(int N) {
        // Cases for N=0 and N=1
        if(N == 0)
            return 0;
        if(N == 1)
            return 1;
        
        // Array where fib numbers are stored for each index
        int fibNumbers[50] = {0};
        fibNumbers[0] = 0;
        fibNumbers[1] = 1;
                
        // Check if N has already been calculated
        if(fibNumbers[N] == 0){
            // Use of memoization
            fibNumbers[N] = (fib(N-1) + fib(N-2));
            return fibNumbers[N];
        }
        
         cout << "N: " << N << " fibNumbers[N]: " << fibNumbers[N] << endl;
        
        
        return fibNumbers[N];
    }
    
    
    
};
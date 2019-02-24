/*
Abril Gonzalez
February 2019


LeetCode Problem 204. Count Primes
Count the number of prime numbers less than a non-negative number, n.

Runtime: O(n^1.5)

*/

class Solution {
public:
    // Function that returns true if a number is prime
    bool isPrime(int n){
        if(n <= 1)
            return false;
        
        for(int i=2; i*i <= n; i++){
            if(n % i == 0)
                return false;
        }
        
        return true;
    }
    
    int countPrimes(int n) {
        int countP = 0;
        
        for(int i=1; i < n; i++){
            if(isPrime(i))
                countP++;
        }
        
        return countP;
    }
};
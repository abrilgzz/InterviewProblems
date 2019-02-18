/*
Abril Gonzalez
February 2019

LeetCode Problem 942. DI String Match
Given a string S that only contains "I" (increase) or "D" (decrease), let N = S.length.

Return any permutation A of [0, 1, ..., N] such that for all i = 0, ..., N-1:

If S[i] == "I", then A[i] < A[i+1]
If S[i] == "D", then A[i] > A[i+1]

Runtime: O(n)

*/

class Solution {
public:
    vector<int> diStringMatch(string S) {
        vector <int> answer;
        int firstNumber = 0;
        int lastNumber = S.length();
        
        for(int i=0; i < S.length(); i++){
            if(S[i] == 'I'){
                answer.push_back(firstNumber);
                firstNumber++;
            }
            if(S[i] == 'D'){
                answer.push_back(lastNumber);
                lastNumber--;
            }
        }
        // Include missing first number
        answer.push_back(firstNumber);
        
        return answer;      
    }
};
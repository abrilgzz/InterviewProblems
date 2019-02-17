/*
Abril Gonzalez
February 2019


LeetCode 961. N-Repeated Element in Size 2N Array
In a array A of size 2N, there are N+1 unique elements, 
and exactly one of these elements is repeated N times.

Return the element repeated N times.

Runtime: O(n)

*/

class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        int timesRepeated = A.size()/2;
        
        map<int,int> numbersMap;
        
        // Map the number and times it appears
        for(int i=0; i < A.size(); i++){
            numbersMap[A[i]]++;
        }
        
        // Find the number repeated N times
        for(map<int,int>::iterator it = numbersMap.begin();
           it != numbersMap.end(); it++){
            if(it->second == timesRepeated)
                return it->first;
        }
        
        return -1;
    }
};
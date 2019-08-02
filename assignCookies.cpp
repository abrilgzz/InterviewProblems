/*
    Abril Marina Gonzalez Ramirez
    August 2019
    
    LeetCode Problem 455. Assign Cookies
    Assume you are an awesome parent and want to give your children some cookies. 
    But, you should give each child at most one cookie. 
    Each child i has a greed factor gi, which is the minimum size of a cookie that 
    the child will be content with; and each cookie j has a size sj. 
    If sj >= gi, we can assign the cookie j to the child i, and the child i will be
    content.
    Your goal is to maximize the number of your content children and output the 
    maximum number.

    Runtime: O(n)
*/

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int answer = 0;
        int pointerG = 0;
        int pointerS = 0;
        
        // Sort both vectors
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        
        while(pointerG < g.size() && pointerS < s.size()){
            if(g[pointerG] <= s[pointerS]){
                // A cookie can satisfy child, increase count and move pointers forward
                answer++;
                pointerG++;
                pointerS++;
            }
            else{
                // Check if next cookie would satisfy least greedy child
                pointerS++;
            }
        }
        
        return answer;
        
    }
};


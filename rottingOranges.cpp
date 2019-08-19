/*
    Abril Marina Gonzalez Ramirez
    August 2019
    
    LeetCode Problem 994. Rotting Oranges
    In a given grid, each cell can have one of three values:

    the value 0 representing an empty cell;
    the value 1 representing a fresh orange;
    the value 2 representing a rotten orange.
    Every minute, any fresh orange that is adjacent (4-directionally) to a rotten 
    orange becomes rotten.

    Return the minimum number of minutes that must elapse until no cell has a fresh orange. 
    If this is impossible, return -1 instead.

    Runtime: O(n * m * (n + m))
    Scanning n + m times (maximum distance between two cells) through all grid cells.
*/
class Solution {
public:
    int orangesRotting(vector<vector<int>>& v) {
        int answer = 0;
        int fresh = 0;
        int n = v.size();
        int m = v[0].size();
        
        queue<pair<int,int>> q;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(v[i][j] == 2){
                    // Push into queue the coordinates of rotten orange
                    q.push({i,j});
                }
                if(v[i][j] == 1)
                    // Increase count of fresh oranges
                    fresh++;
            }
        }
        
        // Breadth-first search
        while(!q.empty()){
            int hasRotten = 0;
            int queueSize = q.size();
            
            while(queueSize > 0){
                auto a = q.front();
                q.pop();

                int i = a.first;
                int j = a.second;
                
                // Check all adj directions for oranges that can rot
                if(i > 0){
                    if(v[i-1][j] == 1){
                        fresh--;
                        v[i-1][j] = 2;
                        q.push({i-1, j});
                        hasRotten = 1;
                    }
                }
                if(j > 0){
                    if(v[i][j-1] == 1){
                        fresh--;
                        v[i][j-1] = 2;
                        q.push({i, j-1});
                        hasRotten = 1;
                    }
                }
                if(i < n-1){
                    if(v[i+1][j] == 1){
                        fresh--;
                        v[i+1][j] = 2;
                        q.push({i+1, j});
                        hasRotten = 1;
                    }
                }
                if(j < m-1){
                    if(v[i][j+1] == 1){
                        fresh--;
                        v[i][j+1] = 2;
                        q.push({i, j+1});
                        hasRotten = 1;
                    }
                }
                queueSize--;
            }
            answer += hasRotten;
        }
        
        // Check if all oranges are rotten
        if(fresh == 0)
            return answer;
        else
            return -1;
    }
};
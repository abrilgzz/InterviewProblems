/*
    Abril Marina Gonzalez Ramirez
    March 2019
    
    LeetCode Problem 200. Number of Islands
    Given a 2d grid map of '1's (land) and '0's (water), count the number of islands. 
    An island is surrounded by water and is formed by connecting adjacent lands 
    horizontally or vertically. 
    You may assume all four edges of the grid are all surrounded by water.
    
    Runtime: O(V+E)
    * In DFS, we traverse each V node exactly once.
    In this problem, each node or grid point knows its neighbors/adjacent nodes, 
    and we are traversing each node and all its neighbors just once in linear time.
*/

class Solution {
public:
    // Depth-first search function that visits neighbors
    void DFS(vector<vector<char>>&grid, int x, int y){
        // Change current visited land to 0
        grid[x][y] = '0';
        
        // Search neighboring lands
        if(x > 0 && grid[x-1][y] == '1')
            DFS(grid, x-1, y);
        if(y > 0 && grid[x][y-1] == '1')
            DFS(grid, x, y-1);
        if(x < grid.size()-1 && grid[x+1][y] == '1')
            DFS(grid, x+1, y);
        if(y < grid[0].size()-1 && grid[x][y+1] == '1')
            DFS(grid, x, y+1);
    }
    
    int numIslands(vector<vector<char>>& grid) {
        // Check if grid is empty
        if(grid.size() == 0)
            return 0;
        
        int answer = 0;
        
        // Traverse grid to find first '1'/land
        for(int i=0; i < grid.size(); i++){
            for(int j=0; j < grid[0].size(); j++){
                if(grid[i][j] == '1'){
                    answer++;
                    DFS(grid, i, j);
                }
            }
        }
        return answer;
    }
};
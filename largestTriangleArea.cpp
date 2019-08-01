/*
Abril Gonzalez
February 2019

LeetCode Problem 812. Largest Triangle Area
You have a list of points in the plane. 
Return the area of the largest triangle that can be formed by any 3 of the points.

*/
class Solution {
public:
    // Function that calculates the area of a triangle
    double calculateArea(int base, int height){
        
        cout << "base: " << base << " height: " << height << " area: " << (base * height) / 2 << endl;
        return (base * height) / 2;
    }
    
    double largestTriangleArea(vector<vector<int>>& points) {
        double largestArea = 0;
        
        int topX = 0;
        int topY = 0;
        
        // Find the farthest X and Y coordinates
        for(int i=0; i < points.size(); i++){
            topX = max(topX, points[i][0]);
            topY = max(topY, points[i][1]);
        }
        
        // Calculate area using these points
        largestArea = calculateArea(topX, topY);
        
        return largestArea; 
        
    }
};
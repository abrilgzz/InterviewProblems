/*
Abril Gonzalez
February 2019


LeetCode Problem 973. K Closest Points to Origin

We have a list of points on the plane.  Find the K closest points to the origin (0, 0).

Runtime: O(n)

*/

class Solution {
public:
    // Function that calculates distance from point to origin
    double calcDistToOrigin(vector<int> point){
        return sqrt( (pow((point[0]),2) - 0) + (pow((point[1]),2) - 0) );
    }
    
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
        vector<pair<int,double>> pointsDistance;
        pair<int,double> point;
        
        vector<vector<int>> answer;
        
        // Make a pair with the index of the point and its distance
        for(int i=0; i < points.size(); i++){
            pointsDistance.push_back(make_pair(i,calcDistToOrigin(points[i])));
        }
        
        // Sort by distance using a lambda function
        sort(pointsDistance.begin(),pointsDistance.end(), [](auto a, auto b) {
            return a.second < b.second;
        });
        
        // Push into answer vector only the K needed points
        for(int i = 0; i < K; i++) {
            answer.push_back(points[pointsDistance[i].first]);
        }
        
        return answer;

    }
};
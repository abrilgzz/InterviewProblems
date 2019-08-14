/*
    Abril Marina Gonzalez Ramirez
    August 2019
    
    LeetCode Problem 437. Path Sum III
    You are given a binary tree in which each node contains an integer value.

    Find the number of paths that sum to a given value.

    The path does not need to start or end at the root or a leaf, 
    but it must go downwards (traveling only from parent nodes to child nodes).

    Runtime: O(n^2)
*/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int sumUp(TreeNode* root, int prev, int& sum){
        if(root == NULL)
            return 0;
        
        int current = prev + root->val;
        
        // Returning number of paths that make up sum
        // If current is equal to sum, then add this path
        return (current == sum) + sumUp(root->left, current, sum) + 
            sumUp(root->right, current, sum);   
    }
    
    int pathSum(TreeNode* root, int sum) {
        if(root == NULL)
            return 0;
        return sumUp(root, 0, sum) + pathSum(root->left, sum) + pathSum(root->right, sum);
    }
    
};
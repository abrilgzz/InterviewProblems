/*
    Abril Marina Gonzalez Ramirez
    March 2019
    
    LeetCode Problem 543. Diameter of Binary Tree
    Given a binary tree, you need to compute the length of the diameter of the tree.
    The diameter of a binary tree is the length of the longest path between any two 
    nodes in a tree. This path may or may not pass through the root
    
    Runtime: O(n)
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
    
    int diameter = 0;
    
    int diameterOfBinaryTree(TreeNode* root){
        // Call helper function with starting root
        getDepth(root);
        
        // Return final value for diameter
        return diameter;
    }
    
    // Helper function to determine the depth of subtrees
    int getDepth(TreeNode* root) {
        if(!root)
            return 0;
        
        // Get depth recursively for each subtree
        int heightLeft = getDepth(root->left);
        int heightRight = getDepth(root->right);
        
        // Update diameter
        if(heightLeft + heightRight > diameter)
            diameter = heightLeft + heightRight;
        
        
        return 1 + max(heightLeft, heightRight);    
    }
};
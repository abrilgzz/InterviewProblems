/*
Abril Gonzalez
February 2019

LeetCode Problem 101. Symmetric Tree
Given a binary tree, check whether it is a mirror of itself (ie, symmetric around its center).
For example, this binary tree [1,2,2,3,4,4,3] is symmetric.

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
    bool isSameTree(TreeNode* node1, TreeNode* node2){
        // If both are null, return true
        if(!node1 && !node2)
            return true;
        
        // If one of them exists, but the other does not
        // or if their values are not the same, return false
        if(!node1 || !node2 || node1->val != node2->val)
            return false;
        
        // Check with its mirrored leaf nodes
        return isSameTree(node1->right, node2->left)
                && isSameTree(node1->left, node2->right);
    }
    
    bool isSymmetric(TreeNode* root) {
        if(!root)
            return true;
        
        // Check if mirrored leaves are the same
        return isSameTree(root->left, root->right);
    }
};
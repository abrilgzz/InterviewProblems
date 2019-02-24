/*
Abril Gonzalez
February 2019

LeetCode Problem 104. Maximum Depth of Binary Tree
Given a binary tree, find its maximum depth.

The maximum depth is the number of nodes along the longest 
path from the root node down to the farthest leaf node.

Note: A leaf is a node with no children.

Runtime: O(n)

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
    int maxDepth(TreeNode* root) {
        if(!root)
            return 0;
        
        // Get the maximum depth from all its children plus the root
        return 1 + max(maxDepth(root->left), maxDepth(root->right));
    }
};
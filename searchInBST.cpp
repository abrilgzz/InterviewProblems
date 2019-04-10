/*
Abril Gonzalez
February 2019


LeetCode Problem 700. Search in a Binary Search Tree

Given the root node of a binary search tree (BST) and a value. 
You need to find the node in the BST that the node's value equals the given value. 
Return the subtree rooted with that node. 
If such node doesn't exist, you should return NULL.

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
    TreeNode* searchBST(TreeNode* root, int val) {
        // Check if node is empty
        if(root == NULL)
            return NULL;
        
         // Return the node if its value is the given val 
        if(root->val == val)
            return root;
        
        // Look in left and right subtrees
        if(root->val > val)
            return searchBST(root->left, val);
        else
            return searchBST(root->right, val);
        
    }
};
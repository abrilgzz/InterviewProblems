/*
    Abril Marina Gonzalez Ramirez
    March 2019
    
    LeetCode Problem 814. Binary Tree Pruning
    We are given the head node root of a binary tree, 
    where additionally every node's value is either a 0 or a 1.
    
    Return the same tree where every subtree (of the given tree) 
    not containing a 1 has been removed.
    
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
    TreeNode* pruneTree(TreeNode* root) {
        if(!root)
            return NULL;
        
        root->left = pruneTree(root->left);
        root->right = pruneTree(root->right);
        
        if(root->left == NULL && root->right == NULL && root->val == 0)
            return NULL;
        else
            return root;
    }
};
/*
Abril Gonzalez
February 2019

LeetCode Problem 617. Merge Two Binary Trees
Given two binary trees and imagine that when you put 
one of them to cover the other, some nodes of the two trees are
overlapped while the others are not.
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
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {        
        if(!t2)
            return t1;
        
        if(!t1)
            return t2;
        
        // Merge nodes into t1
        if(t1 && t2)
            t1->val = (t1->val + t2->val);
        
        // Recursive calls for left and right
        t1->left = mergeTrees(t1->left, t2->left);
        t1->right = mergeTrees(t1->right, t2->right);
        
        return t1;
    }
};
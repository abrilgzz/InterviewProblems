/*
Abril Gonzalez
February 2019

LeetCode Problem 100. Same Tree
Given two binary trees, write a function to check if they are the same or not.

Two binary trees are considered the same if they are structurally identical and 
the nodes have the same value.

Runtime: O(n)

*/

**
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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        // If one of the nodes is NULL, return false
        if((p && !q) || (!p && q))
            return false;
        
        // If both nodes are NULL, return true
        if(!p && !q)
            return true;
        
        // If the value of the nodes are equal, check recursively for left and right
        if(p->val == q->val)
            return isSameTree(p->left,q->left) && isSameTree(p->right,q->right);
        else
            return false;
        
    }
};
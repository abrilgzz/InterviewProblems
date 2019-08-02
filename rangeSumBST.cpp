/*
    Abril Marina Gonzalez Ramirez
    August 2019
    
    LeetCode Problem 938. Range Sum of BST
    Given the root node of a binary search tree, return the sum of values of all nodes with value between L and R (inclusive).

    The binary search tree is guaranteed to have unique values.

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
    int rangeSumBST(TreeNode* root, int L, int R) {
        if(root == NULL)
            return 0;
        
        // Check if root's value is within the range
        if(root->val >= L && root->val <= R)
            return root->val + rangeSumBST(root->left, L, R) + rangeSumBST(root->right, L, R);
        else
            return rangeSumBST(root->left, L, R) + rangeSumBST(root->right, L, R);
    }
};
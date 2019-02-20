/*
Abril Gonzalez
February 2019

LeetCode Problem 965. Univalued Binary Tree

A binary tree is univalued if every node in the tree has the same value.
Return true if and only if the given tree is univalued.

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
    // Function that traverses tree in Pre-order (NLR)
    bool traverseTree(TreeNode* root, int value){
        if(!root)
            return true;
        if(root->val == value)
            return traverseTree(root->left, value) &&
                    traverseTree(root->right, value);
        else
            return false;
    }
    
    bool isUnivalTree(TreeNode* root) {
        // Get the value of the root
        int value = root->val;
        // Call function that does the Pre-order traversal
        return traverseTree(root, value);
    }
};
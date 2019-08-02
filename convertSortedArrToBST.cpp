/*
    Abril Marina Gonzalez Ramirez
    August 2019
    
    LeetCode Problem 108. Convert Sorted Array to Binary Search Tree
    Given an array where elements are sorted in ascending order, convert it to a 
    height balanced BST.

    For this problem, a height-balanced binary tree is defined as a binary tree in
    which the depth of the two subtrees of every node never differ by more than 1.

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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return sortedArrayToBST(nums, 0, nums.size()-1);
    }
    
    TreeNode* sortedArrayToBST(vector<int>& nums, int l, int r){
        if(l > r)
            return 0;
        else if(l == r)
            return new TreeNode(nums[l]);
        
        // Calculate middle
        int mid = l + (r - l) / 2;
        // Create new root node
        TreeNode* root = new TreeNode(nums[mid]);
        // Add children nodes
        root->left = sortedArrayToBST(nums, l, mid-1);
        root->right = sortedArrayToBST(nums, mid+1, r);
        
        return root;
    }
};
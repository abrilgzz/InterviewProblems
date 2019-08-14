/*
    Abril Marina Gonzalez Ramirez
    August 2019
    
    LeetCode Problem 872. Leaf-Similar Trees
    Consider all the leaves of a binary tree.
    From left to right order, the values of those leaves form a leaf value sequence.

    Two binary trees are considered leaf-similar if their leaf value sequence is the same.
    
    Return true if and only if the two given trees with head nodes root1 and root2 are leaf-similar

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
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        // Create a vector to store leaf nodes for each tree
        vector<int> leavesT1;
        vector<int> leavesT2;
        
        // Fill vector with leaf nodes for each tree
        fillLeavesVector(leavesT1, root1);
        fillLeavesVector(leavesT2, root2);

        // Check if they have the same amount of leaf nodes
        if(leavesT1.size() != leavesT2.size())
            return false;
        else
            for(int i=0; i < leavesT1.size(); i++){
                if(leavesT1[i] != leavesT2[i])
                    return false;
            }
        
        return true;
    }
    
    void fillLeavesVector(vector<int>& leavesVector, TreeNode* root){
        if(root == NULL)
            return;
        
        if(root->left == NULL && root->right == NULL)
            leavesVector.push_back(root->val);
        else{
            if(root->left != NULL)
                fillLeavesVector(leavesVector, root->left);
            if(root->right != NULL)
                fillLeavesVector(leavesVector, root->right);
        }
    }
};
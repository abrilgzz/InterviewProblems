/*
    Abril Marina Gonzalez Ramirez
    August 2019
    
    LeetCode Problem 1022. Sum of Root To Leaf Binary Numbers

    Given a binary tree, each node has value 0 or 1.  
    Each root-to-leaf path represents a binary number starting with the most 
    significant bit.  For example, if the path is 0 -> 1 -> 1 -> 0 -> 1, 
    then this could represent 01101 in binary, which is 13.

    For all leaves in the tree, consider the numbers represented by the path 
    from the root to that leaf.

    Return the sum of these numbers.

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
    int sum = 0;
    
    int sumRootToLeaf(TreeNode* root) {
        vector<int> number;
        depthFirstSearch(root, number);
        return sum;
    }
    
    void depthFirstSearch(TreeNode* root, vector<int>& number){
        if(root == NULL)
            return;
        
        // Add node's value to the vector that holds the chars
        number.push_back(root->val);
        
        // Check if it is a leaf node to convert it to integer
        if(root->left == NULL && root->right == NULL)
            sum += convertToInt(number);
        
        // Continue search
        depthFirstSearch(root->left, number);
        depthFirstSearch(root->right, number);
        
        // Remove leaf node from number being constructed
        number.pop_back();
    }
    
    int convertToInt(vector<int> &number){
        int intNumber = 0;
        
        for(int i = 0; i < number.size(); i++){
            intNumber += number[i] * pow(2, number.size()-i-1);
        }
        return intNumber;
    }
};
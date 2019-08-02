/*
    Abril Marina Gonzalez Ramirez
    August 2019
    
    LeetCode Problem 968. Binary Tree Cameras
    Given a binary tree, we install cameras on the nodes of the tree. 

    Each camera at a node can monitor its parent, itself, and its immediate children.

    Calculate the minimum number of cameras needed to monitor all nodes of the tree.
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
    int cameraCount = 0;
    
    // State = 0 -> Node has no children (leaf node)
    // State = 1 -> Node has camera
    // State = 2 -> Node is covered by parent
    
    int depthFirstSearch(TreeNode* root){
        if(root == NULL)
            return 1;
        if(root->left == NULL && root->right == NULL)   // Leaf node
            return 0;
        
        // Search left and right subtrees
        int stateLeft = depthFirstSearch(root->left);
        int stateRight = depthFirstSearch(root->right);
        
        // Check if any of node's children are leave nodes, place camera
        if(stateLeft == 0 || stateRight == 0){
            cameraCount++;
            return 2;
        }
        // Check if node is already covered, remove camera 
        else if(stateLeft == 2 || stateRight == 2){
            return 1;
        }
        return 0;
    }
    
    int minCameraCover(TreeNode* root) {
        if(depthFirstSearch(root) == 0)
            cameraCount++;
        
        return cameraCount;
    }
};
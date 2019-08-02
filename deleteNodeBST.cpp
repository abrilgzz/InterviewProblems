
/*
    Abril Marina Gonzalez Ramirez
    August 2019
    
    LeetCode Problem 450. Delete Node in a BST
    Given a root node reference of a BST and a key, delete the node with the given key in the BST. Return the root node reference (possibly updated) of the BST.

    Basically, the deletion can be divided into two stages:
    Search for a node to remove.
    If the node is found, delete the node.
    Note: Time complexity should be O(height of tree).

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
    TreeNode* inorderSuccessor(TreeNode* root){
        while(root->left){
            root = root->left;
        }
        return root;
    }
    
    TreeNode* deleteNode(TreeNode* root, int key) {
        
        if(root == NULL)
            return NULL;
        
        if(root->val == key){
            // If node is a leaf, delete it 
            if(root->left == NULL && root->right == NULL){
                delete root;
                return NULL;
            }
            // Node has only one child, make this node the parent
            else if(root->left == NULL || root->right == NULL){
                if(root->left == NULL)
                    root = root->right;
                else
                    root = root->left;
            }
            else{   // Node has two children, find Inorder successor
                TreeNode* newParent = inorderSuccessor(root->right);
                root->val = newParent->val;
                root->right = deleteNode(root->right, newParent->val);
            }
        }
        // Move left or right depending on key
        else if(root->val > key){
            root->left = deleteNode(root->left, key);
        }
        else
            root->right = deleteNode(root->right, key);
        
        return root;
    }
};
/*
Abril Gonzalez
February 2019

LeetCode Problem 237. Delete Node in a Linked List

Write a function to delete a node (except the tail) in a singly linked list, given only access to that node.
Runtime: O(n)

*/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        // Replace node value with its neighbor's value
        node->val = node->next->val;
        
        // Connect node with its neighbor's neighbor
        node->next = node->next->next;
    }
};
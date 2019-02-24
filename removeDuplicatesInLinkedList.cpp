/*
Abril Gonzalez
February 2019

LeetCode Problem 83. Remove Duplicates from Sorted List

Given a sorted linked list, delete all duplicates such that each element appear only once.
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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* node = head;
        
        // Check if current node and its next are valid
        while(node && node->next){
            // If the value of the node and its neighbors are the same,
            // connect it to its neighbor's neighbor
            if(node->val == node->next->val)
                node->next = node->next->next;
            // Else, update the pointer
            else
                node = node->next;
        }
        
        return head;
    }
};
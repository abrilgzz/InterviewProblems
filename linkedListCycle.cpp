/*
Abril Gonzalez
February 2019

LeetCode Problem 141. Linked List Cycle
Given a linked list, determine if it has a cycle in it.

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
    bool hasCycle(ListNode *head) {
        // Edge case; list is empty   
        if(head == NULL)
            return false;
        // Edge case; list contains only one node
        if(head->next == NULL)
            return false;
        
        // Implementation of Floyd's cycle-finding algorithm
        ListNode *slow = head;
        ListNode *fast = head->next;
        
        while(fast != NULL && fast->next != NULL){
            if(fast == slow)
                return true;
            else{
                slow = slow->next;
                fast = fast->next->next;
            }
        }
        
        return false;
        
    }
};
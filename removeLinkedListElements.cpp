/*
    Abril Marina Gonzalez Ramirez
    March 2019
    
    LeetCode Problem 203. Remove Linked List Elements
    Remove all elements from a linked list of integers that have value val.
    
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
    ListNode* removeElements(ListNode* head, int val) {
        // List is empty
        if(!head)
            return NULL;
        
        // Auxiliary node to traverse list
        ListNode* current = head;

        // Check the first node
        while(head->val == val){
            current = head->next;
            head = current;
            // Lists consists of only nodes with values equal to val, returns empty list
            if(!head)
                return NULL;
        }
        
        // Traverse the list
        while(current->next){
            // Check if next node's value is equal to val
            if(current->next->val == val){
                // Skip over this node
                current->next = current->next->next;
            }
            // Move pointer forward
            else{
                current = current->next;
            }
        }
        
        // Return the head to the original list
        return head;
    }
};
/*
    Abril Marina Gonzalez Ramirez
    March 2019
    
    LeetCode Problem 206. Reverse Linked List
    Reverse a singly linked list.
    
    Iterative version.
    
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
    ListNode* reverseList(ListNode* head) {
        // In case the list is empty
        if(!head)
            return NULL;
        
        // Create 3 pointers to traverse list
        ListNode* current = head;
        ListNode* previous = NULL;
        ListNode* next = NULL;
        
        //Traverse list until current reaches NULL
        while(current){
            // Place the pointer to the next node
            next = current->next;
            // Reverse connection
            current->next = previous;
            // Move pointers forward
            previous = current;
            current = next;
        }
        
        // Place the head node at the new beginning
        head = previous;
        
        return head;
    }
};
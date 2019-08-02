/*
    Abril Marina Gonzalez Ramirez
    August 2019
    
    LeetCode Problem 142. Linked List Cycle II
    Given a linked list, return the node where the cycle begins. 
    If there is no cycle, return null.

    To represent a cycle in the given linked list, we use an integer pos which 
    represents the position (0-indexed) in the linked list where tail connects to. 
    If pos is -1, then there is no cycle in the linked list.

    Note: Do not modify the linked list.
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
    ListNode *detectCycle(ListNode *head) {
        if(head == NULL)
            return NULL;
        
        if(head->next == NULL)
            return NULL;
        
        // Floyd's cycle finder algorithm
        ListNode *slow = head;
        ListNode *fast = head;
        bool hasCycle = false;
        
        while(fast != NULL && fast->next != NULL && hasCycle == false){
            slow = slow->next;
            fast = fast->next->next;
            
            if(slow == fast)
                hasCycle = true;
        }
        
        if(hasCycle == true){
            // Place slow at the start 
            slow = head;
            while(slow != fast){
                // Move pointers at the same speed
                slow = slow->next;
                fast = fast->next;
            }
            return slow;
        }
        else
            return NULL;
        
    }
};
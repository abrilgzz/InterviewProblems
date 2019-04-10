/*
    Abril Marina Gonzalez Ramirez
    April 2019
    
    LeetCode Problem 19. Remove Nth Node From End of List
    Given a linked list, remove the n-th node from the end of list and return its head.
    
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(!head)
            return NULL;
        
        ListNode* current = head;
        ListNode* forward = head;
        
        // Separate nodes n spaces
        while(n > 0 && forward){
                forward = forward->next;
                n--;
            }
        
        // In case N = size of linked list
        if(!forward){
            head = current->next;
            delete current;
            return head;
        }
        
        // Move pointers forward
        while(forward->next){
                current = current->next;
                forward = forward->next;
        }
        
        // Delete Nth from end node
        if(forward->next == NULL)
            {
                ListNode *aux = current->next;
                current->next = aux->next;
                delete aux;
            }
        
        return head;
    }
};
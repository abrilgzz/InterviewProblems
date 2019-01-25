/*
Abril Gonzalez
January 2019


LeetCode Problem 61. Rotate List
Given a linked list, rotate the list to the right by k places, where k is non-negative

Runtime: O(n)

*/
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        
        // Edge cases
        // Check if list is empty, size = 1, k = 0
        if(head == NULL || head->next == NULL || k == 0)
            return head;
        
        
        // List is at least made up of one node
        ListNode* lastNode = head;
        int size = 1;
        
        // Find last element, count how many nodes there are 
        while(lastNode->next != NULL){
            lastNode = lastNode->next;
            size++;
        }
        
    
        // Find the position of the new tail and the new head
        // Using mod in case k is larger than the size of the list
        int newTailPos = size - ((k%size)+1);
        ListNode* newTail = head;
        ListNode* newHead = head;
        
        while(newTailPos != 0){
            newTail = newTail->next;
            newTailPos--;
        }
        
        // Ensure that the newTail is valid
        if(newTail->next == NULL){
                return newHead;
        }
        else{
            newHead = newTail->next;
            
            // Connect the end of the list with the head
            lastNode->next = head;
        
            // Set tail's next node to NULL
            newTail->next =  NULL;
        
            return newHead;
        }
    }
};
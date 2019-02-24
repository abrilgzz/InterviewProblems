/*
Abril Gonzalez
February 2019


LeetCode Problem 876. Middle of the Linked List
Given a non-empty, singly linked list with head node head, 
return a middle node of linked list.

If there are two middle nodes, return the second middle node.

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
    ListNode* middleNode(ListNode* head) {
        int size = 0;
        ListNode* node = head;
        
        // Traverse linked list to get its size
        while(node){
            size++;
            node = node->next;
        }
        
        int count = 1;
        
        // Move the head until it reaches the middle node
        while(count < (size/2 + 1)){
            head = head->next;
            count++;
        }
        
        return head;
    }
};
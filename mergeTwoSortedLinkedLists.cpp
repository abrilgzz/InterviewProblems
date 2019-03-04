/*
    Abril Marina Gonzalez Ramirez
    March 2019
    
    LeetCode Problem 21. Merge Two Sorted Lists
    Merge two sorted linked lists and return it as a new list. 
    The new list should be made by splicing together the nodes of the first two lists.
    
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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        // Edge cases: lists are empty, one list is empty
        if(!l1 && !l2)
            return NULL;
        if(!l1)
            return l2;
        if(!l2)
            return l1;
        
        // Node that will hold the head of the new merged list
        ListNode* l3 = NULL;
        
        // Set the first node of the new list
        if(l1->val <= l2->val){
            l3 = l1;
            l1 = l1->next;
        }
        else{
            l3 = l2;
            l2 = l2->next;
        }
        
        // Auxiliar pointer to traverse lists
        ListNode* l3aux = l3;
        
        // Check all nodes of both lists
        while(l1 && l2){
            // Compare values
            if(l1->val <= l2->val){
                l3aux->next = l1;
                l1 = l1->next;
            }
            else{
                l3aux->next = l2;
                l2 = l2->next;
            }
            // Move helper node forward
            l3aux = l3aux->next;
        }
        
        // Add all remaining nodes of either list (l1 or l2) to the new list
        if(l1){
            l3aux->next = l1;
        }
        else if(l2){
            l3aux->next = l2;
        }
        
        
        // Return the pointer to the head of l3
        return l3;
    }
};
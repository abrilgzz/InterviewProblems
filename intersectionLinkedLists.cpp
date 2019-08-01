/*
    Abril Marina Gonzalez Ramirez
    August 2019
    
    LeetCode Problem 160. Intersection of Two Linked Lists
    Write a program to find the node at which the intersection of two singly linked lists begins.
    
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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        if(headA == NULL || headB == NULL)
            return NULL;
        
        ListNode *pointerA = headA;
        ListNode *pointerB = headB;
        
        bool endA = false;
        bool endB = false;
        
        // Traverse LL until pointers meet
        while(pointerA != pointerB){
            pointerA = pointerA->next;  // Move pointerA forward
            if(pointerA == NULL){       // If you reach the end of list A
                if(endA)
                    return NULL;        // and if endA has not been switched to true, return NULL
                pointerA = headB;       // change pointerA to the head to list B
                endA = true;            // mark that you have reached the end of list A
            }
            pointerB = pointerB->next;  // Move pointerB forward... same as before
            if(pointerB == NULL){
                if(endB)
                    return NULL;
                pointerB = headA;
                endB = true;
            }
        }
        
        return pointerA;
    }
};
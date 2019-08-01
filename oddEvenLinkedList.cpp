/*
    Abril Marina Gonzalez Ramirez
    July 2019
    
    LeetCode Problem 328. Odd Even Linked List
    Given a singly linked list, group all odd nodes together followed by the even nodes.
    Please note here we are talking about the node number and not the value in the nodes.
    
    You should try to do it in place. The program should run in O(1) space complexity and O(nodes)
    time complexity.

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
    ListNode* oddEvenList(ListNode* head) {
        if(head == NULL)
            return head;
        ListNode* odd = head;
        ListNode* even = head->next;
        ListNode* firstEven = even;
        
        while(even && even->next){
            odd->next = even->next;
            odd = even->next;
            even->next = odd->next;
            even = odd->next;
        }
        
        odd->next = firstEven;
        
        return head;
    }
};
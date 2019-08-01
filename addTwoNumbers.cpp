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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        
        // Declare new linked list to store results
        ListNode* l3head = new ListNode(0);
        
        // Pointer to traverse list
        ListNode* l3 = l3head;
        
        
        while(l1 || l2){
            // New node to store value
            ListNode* newNode3 = new ListNode(0);
            l3->next = newNode3;
            
            // Get values from each node
            int l1val = (l1) ? l1->val : 0;
            int l2val = (l2) ? l2->val : 0;
            
            // Check added values
            if ((l1val + l2val + carry) > 9){
                if (carry == 1){
                    newNode3->val = l1val + l2val - 10 + 1;
                    carry = 1;
                }
                else{
                    newNode3->val = l1val + l2val - 10;
                    carry = 1;
                }
            }
            else{
                if (carry == 1){
                    newNode3->val = l1val + l2val + 1;
                    carry = 0;
                }
                else{
                    newNode3->val = l1val + l2val;
                    carry = 0;
                }
            }
            if(l1)
                l1 = l1->next;
            if(l2)
                l2 = l2->next;
        }
        
        // Check if there is still a carry left
        if (carry == 1){
            ListNode* lastNode = new ListNode(1);
            l3->next = lastNode;
            carry = 0;
        }
        
        return l3head;
        
    }
};
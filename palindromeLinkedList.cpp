/*
    Abril Marina Gonzalez Ramirez
    March 2019
    
    LeetCode Problem 704. Binary Search
    Given a singly linked list, determine if it is a palindrome.
    
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
    bool isPalindrome(ListNode* head) {
        vector<int> listVector;
        int i=0;
        
        // Put list values into an array
        while(head){
            listVector.push_back(head->val);
            head = head->next;
        }
        
        int front = 0;
        int back = listVector.size()-1;
        
        // Check if it is a palindrome
        while(front <= back){
            if(listVector[front] != listVector[back])
                return false;
            front++;
            back--;
        }
        
        return true;
    }
};
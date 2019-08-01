/*
    Abril Marina Gonzalez Ramirez
    August 2019
    
    LeetCode Problem 817. Linked List Components
    We are given head, the head node of a linked list containing unique integer values.
    
    We are also given the list G, a subset of the values in the linked list.
    
    Return the number of connected components in G, where two values are connected if they
    appear consecutively in the linked list.
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
    int numComponents(ListNode* head, vector<int>& G) {
        unordered_set<int> mySet;
        int answer = 0;
        ListNode* pointer = head;
        
        // Push all values of G into a set
        for(int i=0; i < G.size(); i++){
            mySet.insert(G[i]);
        }
        
        // Count connected components from numbers found in set
        while(pointer != NULL){
            if(mySet.count(pointer->val)){
                answer++;
                while(pointer != NULL && mySet.count(pointer->val))
                    pointer = pointer->next;
            }
            else
                pointer = pointer->next;
        }
        
        // Delete pointers
        delete pointer;
        return answer;
    }
};
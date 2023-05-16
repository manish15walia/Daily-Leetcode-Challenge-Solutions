/* https://leetcode.com/problems/swap-nodes-in-pairs/description/ */

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    void swap(ListNode* node){
        if(node==NULL){
            return;
        }
        ListNode* first = node->next;
        ListNode* second = NULL;
        if(first!=NULL){
            second = first->next;
        }
        if(second!=NULL){
            ListNode* secondNext = second->next;
            second->next = first;
            node->next = second;
            first->next = secondNext;
            swap(first);
        }
    }
    ListNode* swapPairs(ListNode* head) {
        ListNode* dummy = new ListNode();
        dummy->next = head;
        swap(dummy);
        return dummy->next;
    }
        
};

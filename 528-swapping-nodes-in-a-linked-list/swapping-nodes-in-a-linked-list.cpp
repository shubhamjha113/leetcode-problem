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
    ListNode* swapNodes(ListNode* head, int k) {
        if(!head->next) return head;
        ListNode* left =  head,*right = head;
        k--;
        while(k--){
            right = right->next;
        }
        ListNode* temp = right;
        while(right->next){
            right = right->next;
            left = left->next;
        }
        swap(left->val,temp->val);
        return head;
    }
};
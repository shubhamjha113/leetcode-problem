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
        if(!head && !head->next) return head;
        ListNode* left =  NULL,*right = head,*temp = head;
        int count =0;
        while(temp){
            count++;
            if(k==count){
                left = temp;
            }
            temp = temp->next;
        }

        for(int i=0;i<count-k;i++){
            right = right->next;
        }
        swap(left->val , right->val);
        return head;
        
    }
};
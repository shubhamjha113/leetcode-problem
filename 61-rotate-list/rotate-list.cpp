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
    ListNode* rotateRight(ListNode* head, int k) {
        if(k==0 || head ==NULL || head->next==NULL) return head;
        int count =1;
        ListNode * tail = head;
        while(tail->next){
            tail = tail->next;
            count++;
        }
        k = k % count;
        count -=k;
        if(k==0) return head;

        ListNode* curr=head,*prev = NULL;
        while(count--){
            prev = curr;
            curr = curr->next;
        }
        prev->next=NULL;
        tail->next = head;
        return curr;
    }
};
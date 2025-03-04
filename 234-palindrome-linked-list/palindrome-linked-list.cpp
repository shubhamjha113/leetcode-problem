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
    bool isPalindrome(ListNode* head) {
        ListNode* temp = head;
        int count =0;
        while(temp){
            count++;
            temp = temp->next;
        }
        if(count==1) return 1;
        count/=2;

        ListNode* curr = head,*prev = NULL;
        while(count--){
            prev = curr;
            curr = curr->next;
        }

        prev->next = NULL;
        //reverse remaining list

        ListNode* fut;
        prev = NULL;
        while(curr){
            fut =curr->next;
            curr->next = prev;
            prev=curr;
            curr = fut;
        }

        ListNode* head1=head,*head2=prev;

        //cheak values 

        while(head1){
            if(head1->val != head2->val){
                return 0;
            }
            else{
                head1=head1->next;
                head2 = head2->next;
            }
        }
        return 1;
    }
};
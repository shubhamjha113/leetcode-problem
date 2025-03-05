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
    // ListNode* Rev(ListNode* curr,ListNode* prev){
    //     if(curr==NULL){
    //         return prev;
    //     }

    //     ListNode* fut = curr->next;
    //     curr->next = prev;
    //     return Rev(fut,curr);
    // }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    //    l1=Rev(l1,NULL);
    //    l2=Rev(l2,NULL);

       ListNode* curr1=l1,*curr2=l2;
       ListNode* head=new ListNode(0);
       ListNode* tail=head;
       int sum, carry =0;
       while(curr1 && curr2){
             sum=curr1->val + curr2->val +carry;
            tail->next = new ListNode(sum%10);
            carry = sum/10;
            tail = tail->next;
            curr1 = curr1->next;
            curr2=curr2->next;
        }
        while(curr1){
            sum = curr1->val + carry;
            tail->next = new ListNode(sum%10);
            tail = tail->next;
            curr1=curr1->next;
            carry=sum/10;
        }
        while(curr2){
             sum = curr2->val + carry;
            tail->next = new ListNode(sum%10);
            tail = tail->next;
            curr2=curr2->next;
            carry=sum/10;
        }

        while(carry>0){
            tail->next = new ListNode(carry%10);
            carry /=10;
            tail = tail->next;
        }
        return head->next;
    }
};
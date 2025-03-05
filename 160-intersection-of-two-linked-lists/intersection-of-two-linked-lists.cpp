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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode*curr1=headA,*curr2=headB;
        int c1=0,c2=0;
        while(curr1){
            c1++;
            curr1=curr1->next;
        }
        while(curr2){
            c2++;
            curr2=curr2->next;
        }
        int diff = abs(c1-c2);
        curr1=headA;
        curr2=headB;
        while(diff--){
            if(c1>c2){
                curr1=curr1->next;
            }
            else{
                curr2=curr2->next;
            }
        }
        while(curr1 && curr2){
            if(curr1==curr2){
                return curr1;
            }
            else{
                curr1=curr1->next;
                curr2=curr2->next;
            }
        }
        return NULL;
    }
};
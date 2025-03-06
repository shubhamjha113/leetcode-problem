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
    ListNode* reverseKGroup(ListNode* head, int k) {
     ListNode* first = new ListNode(0);
        first->next = head;
        head = first;
        int x;
        ListNode* second,*prev,*curr,*front;
        while(first->next)
        {
            ListNode* temp = first->next;
            int count = 0;
            while (temp && count < k) {
                temp = temp->next;
                count++;
            }
            if (count < k) break;

            x=k;
            second = first->next;
            prev = first;
            curr=first->next;
            while(x && curr){
                front=curr->next;
                curr->next = prev;
                prev = curr;
                curr=front;
                x--;
            }
            first->next = prev;
            second->next = curr;
            first = second;
        }
        first = head;
        head = head->next;
        delete first;
        return head;

    }      
};
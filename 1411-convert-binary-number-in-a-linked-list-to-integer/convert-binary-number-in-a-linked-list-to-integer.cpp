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
    int getDecimalValue(ListNode* head) {
        ListNode* temp = head;
        int ans = 0,count =0;
        while(temp){
            count++;
            temp = temp->next;
        }
        temp = head;
        while(temp){
            if(temp->val == 1){
                count--;
                ans += 1<<count;
                temp  = temp->next;
            }
            else{
                temp = temp->next;
                count--;
            }
        }
        return ans;
    }
};
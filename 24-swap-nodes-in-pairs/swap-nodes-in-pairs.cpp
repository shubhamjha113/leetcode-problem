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
    ListNode* swapPairs(ListNode* head) {
         if (!head) return head;
        vector<int> temp;
        ListNode* x = head;
        while(x){
            temp.push_back(x->val);
            x = x->next;
        }

        for(int i=0;i<temp.size()-1;i = i+2){
            swap(temp[i],temp[i+1]);
        }

        x = head;
        int ind = 0;
        while(x){
            x->val = temp[ind];
            x = x->next;
            ind++;
        }
        return head;
    }
};
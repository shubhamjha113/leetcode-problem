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
        vector<int> st;
        ListNode* temp = head;
        while(temp){
            st.push_back(temp->val);
            temp = temp->next;
        }
        int n = st.size();
        swap(st[k-1],st[n-k]);
        temp = head;
        int i=0;
        while(temp){
            temp->val = st[i];
            i++;
            temp = temp->next;
        }
        return head;
    }
};
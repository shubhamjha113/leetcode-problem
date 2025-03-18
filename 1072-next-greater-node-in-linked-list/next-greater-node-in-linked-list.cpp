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
    vector<int> nextLargerNodes(ListNode* head) {
        ListNode* temp = head;
        vector<int> copy;
        while(temp){
            copy.push_back(temp->val);
            temp = temp->next;
        }
       int n = copy.size();
        
        vector<int> ans(n,0);
        stack<int> st;
        for(int i=0;i<n;i++){
            while(!st.empty() && copy[st.top()]<copy[i]){
                ans[st.top()]= copy[i];
                st.pop();
            }
            st.push(i);
        }
        return ans;
    }
};
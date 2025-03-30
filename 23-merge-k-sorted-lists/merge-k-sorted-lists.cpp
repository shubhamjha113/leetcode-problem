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
    class Compare{
      public:
      bool operator()(ListNode* a,ListNode* b){
          return a->val > b->val;
      }
  };

    ListNode* mergeKLists(vector<ListNode*>& lists) {
         priority_queue<ListNode* , vector<ListNode*>,Compare> p;

         for(auto it:lists){
            if(it) p.push(it);
         }
        
        ListNode* root = new ListNode(0);
        ListNode* tail = root;
        ListNode* temp;
        while(!p.empty()){
            temp = p.top();
            p.pop();
            tail->next = temp;
            tail = tail->next;
            if(temp->next){
                p.push(temp->next);
            }
        }
        return root->next;
    }
};
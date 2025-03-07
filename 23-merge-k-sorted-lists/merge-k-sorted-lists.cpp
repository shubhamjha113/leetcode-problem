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

    ListNode* merge(ListNode* head1,ListNode* head2){
      ListNode* head = new ListNode(0);
      ListNode* tail = head;
      while(head1 && head2){
          if(head1->val <= head2->val){
              tail->next = head1;
              head1 = head1->next;
              tail = tail->next;
              tail->next = NULL;
          }
          else{
              tail->next = head2;
              head2 = head2->next;
              tail = tail->next;
              tail->next = NULL;
          }
      }
      if(head1){
          tail->next = head1;
      }
      else{
          tail->next = head2;
      }
      return head->next;
    }
    
    void mergesort(vector<ListNode*>& lists,int start,int end){
        if(start>=end){
            return;
        }

        int mid = start + (end-start)/2;
        mergesort(lists,start,mid);
        mergesort(lists,mid+1,end);
        lists[start] = merge(lists[start],lists[mid+1]);
    }

    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.empty()) return NULL;
        mergesort(lists,0,lists.size()-1);
       
        return lists[0];
    }
};
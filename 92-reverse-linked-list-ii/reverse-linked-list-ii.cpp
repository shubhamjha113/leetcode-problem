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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
         if (!head || !head->next) return head; // Edge case: Empty list or single node

    ListNode* dummy = new ListNode(0); // Dummy node to handle edge cases
    dummy->next = head;
    ListNode* first = dummy; 

    // Move `first` to the node just before the sublist that needs to be reversed
    for (int i = 1; i < left; i++) {
        first = first->next;
    }

    // Reverse the sublist
    ListNode* prev = NULL, *curr = first->next, *fut = NULL;
    ListNode* second = curr; // This will be the new tail of the reversed sublist
    for (int i = 0; i <= (right - left); i++) {
        fut = curr->next;
        curr->next = prev;
        prev = curr;
        curr = fut;
    }
        first->next =prev;
        second->next = curr;
        return dummy->next;
    }
};
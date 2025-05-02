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
    vector<int> arr;
    Solution(ListNode* head) {
        while (head) {
            arr.push_back(head->val);
            head = head->next;
        }
    }

    int getRandom() {
        int idx = rand() % arr.size();  
        return arr[idx];
    }
};


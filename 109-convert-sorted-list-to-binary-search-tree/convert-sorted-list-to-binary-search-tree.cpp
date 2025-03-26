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
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
TreeNode* buildBST(vector<int> &tree,int s,int e){
      if(s>e) return NULL;
      
      int mid = s +(e-s+1)/2;
      TreeNode* root = new TreeNode(tree[mid]);
      root->left = buildBST(tree,s,mid-1);
      root->right = buildBST(tree , mid+1,e);
      return root;
  }
  


    TreeNode* sortedListToBST(ListNode* head) {
        vector<int> tree;
        while(head){
            tree.push_back(head->val);
            head = head->next;
        }
        return buildBST(tree,0,tree.size()-1);
    }
};
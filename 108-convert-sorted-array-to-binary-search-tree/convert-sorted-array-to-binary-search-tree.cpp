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
TreeNode* arrToBST(vector<int> &nums,int s,int e){
      if(s>e) return NULL;
      int mid = s+(e-s)/2;
      TreeNode* temp = new TreeNode(nums[mid]);
      temp->left = arrToBST(nums,s,mid-1);
      temp->right=arrToBST(nums,mid+1,e);
      return temp;
      
      
  }

    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return arrToBST(nums,0,nums.size()-1);
    }
};
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

void small(TreeNode* root, int &k,int &ans){
    if(!root) return;
    small(root->left,k,ans);
    k--;
    if(k==0){
        ans = root->val;
        return;
    }
    small(root->right,k,ans);
}
    int kthSmallest(TreeNode* root, int k) {
        
        if(!root) return 0;
        int ans=0;
        small(root,k,ans);
        return ans;
    }
};
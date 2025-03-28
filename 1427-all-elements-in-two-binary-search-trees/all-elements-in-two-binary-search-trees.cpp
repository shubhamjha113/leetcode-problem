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
void inorder(TreeNode* root,vector<int> &ans){
    if(!root) return;
    inorder(root->left,ans);
    ans.push_back(root->val);
    inorder(root->right,ans);
}

    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> ans1,ans2;
        inorder(root1,ans1);
        inorder(root2,ans2);
        ans1.insert(ans1.end(),ans2.begin(),ans2.end());
        sort(ans1.begin(),ans1.end());
        return ans1;

    }
};
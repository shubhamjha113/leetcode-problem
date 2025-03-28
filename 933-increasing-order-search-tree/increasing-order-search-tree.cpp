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
TreeNode* createBST(vector<int>& ans, int& i) {
    if (i >= ans.size()) return NULL;

    TreeNode* head = new TreeNode(ans[i]);
    i++;
    head->right = createBST(ans, i);

    return head;
}

void inorder(TreeNode* root,vector<int> &ans){
    if(!root) return;
    inorder(root->left,ans);
    ans.push_back(root->val);
    inorder(root->right,ans);
}
    TreeNode* increasingBST(TreeNode* root) {
        vector<int> ans;
        inorder(root,ans);
        int i=0;
        return createBST(ans,i);
    }
};
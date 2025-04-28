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
    void solve(TreeNode* &root,int &index,int &mini){
        if(!root) return;

        if(!root->left && !root->right){
            index++;
            mini = min(mini,index);
            //backtrack
            index--;
            return;
        }

        index++;
        solve(root->left, index, mini);
        solve(root->right, index, mini);
        //backtrack
        index--;
    }

    int minDepth(TreeNode* root) {
        if (!root) return 0;

        int index = 0;
        int mini = INT_MAX;

        solve(root, index, mini);

        return mini;
    }
};
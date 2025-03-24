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

bool getpath(TreeNode *root, vector<string> &ans, vector<string> &temp) {
    if (!root) return false;

    ans.push_back(to_string(root->val));

    
    if (!root->left && !root->right) {
        string path = "";
        for (int i = 0; i < ans.size(); i++) {
            path += ans[i];
            if (i != ans.size() - 1) path += "->";
        }
        temp.push_back(path);
    }
    
    getpath(root->left, ans, temp);
    getpath(root->right, ans, temp);
    ans.pop_back();
    return true;
}



    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> temp;
        vector<string> ans;
	if(!root) return temp;
	getpath(root,ans,temp);
	return temp;
    }
};
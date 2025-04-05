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
    unordered_map<int,int> mp;
    void inorder(TreeNode* root){
        if(!root) return;
        inorder(root->left);
        mp[root->val]++;
        inorder(root->right);
    }

    vector<int> findMode(TreeNode* root) {
        vector<int> ans;

        inorder(root);
        int maxFreq=0;
        for(auto it:mp){
            if(it.second>maxFreq){
                maxFreq=it.second;
                ans={};
                ans.push_back(it.first);
            }
            else if(it.second == maxFreq){
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};
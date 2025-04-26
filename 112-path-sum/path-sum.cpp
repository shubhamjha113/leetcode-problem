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
    void fill(TreeNode* root,vector<int> temp,int targetSum,int sum,bool &ans){
        if(!root) return;
        sum+=root->val;
        temp.push_back(root->val);
        if(!root->left && !root->right){
            if(sum==targetSum){
                ans=true;
            }
            return;
        }
        fill(root->left,temp,targetSum,sum,ans);
        fill(root->right,temp,targetSum,sum,ans);
    }


    bool hasPathSum(TreeNode* root, int targetSum) {
        vector<int> temp;
        int sum=0;
        bool ans=false;
        fill(root,temp,targetSum,sum,ans);
        return ans;
    }
};
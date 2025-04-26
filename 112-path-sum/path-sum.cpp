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
    void fill(TreeNode* root,int targetSum,int sum,bool &ans){
        if(!root) return;
        sum+=root->val;
        
        if(!root->left && !root->right){
            if(sum==targetSum){
                ans=true;
            }
            return;
        }
        fill(root->left,targetSum,sum,ans);
        fill(root->right,targetSum,sum,ans);
    }


    bool hasPathSum(TreeNode* root, int targetSum) {
       
        int sum=0;
        bool ans=false;
        fill(root,targetSum,sum,ans);
        return ans;
    }
};
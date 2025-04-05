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
    vector<int> ans;
    int currNum=0,currFreq =0,maxFreq =0;

    void inorder(TreeNode* root){
        if(!root) return;
        inorder(root->left);
        if(root->val==currNum){
            currFreq++;
        }
        else{
            currNum=root->val;
            currFreq=1;
        }

        if(currFreq>maxFreq){
            maxFreq = currFreq;
            ans={};
        }

        if(currFreq==maxFreq){
            ans.push_back(root->val);
        }



        inorder(root->right);
    }

    vector<int> findMode(TreeNode* root) {
        inorder(root);
        return ans;
    }
};
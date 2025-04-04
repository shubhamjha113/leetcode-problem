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
void inorder(TreeNode* &root,vector<int> &ans){
    if(!root) return;

    inorder(root->left,ans);
    ans.push_back(root->val);
    inorder(root->right,ans);
}

    bool findTarget(TreeNode* root, int k) {
        vector<int> ans;
        inorder(root,ans);

        //-------using map -------------
        // unordered_map<int,int> mpp;
        // for(int i=0;i<ans.size();i++){
        //     int sum = k-ans[i];
        //     if(mpp.find(sum) != mpp.end()){
        //         return true;
        //     }
        //     mpp[ans[i]]=i;
        // }
        // return false;

        // optimize approach using two pointer
        int left = 0,right = ans.size()-1;
        while(left < right){
            int sum = ans[left]+ans[right];
            if(sum == k) return true;
            else if(sum<k) left++;
            else right--;
        }

        return false;
    }
};
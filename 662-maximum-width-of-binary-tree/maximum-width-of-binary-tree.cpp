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
    int widthOfBinaryTree(TreeNode* root) {
        long long ans =0;
        if(!root) return 0;
        queue<pair<TreeNode*,long long >>q;
        q.push({root,0});
        while(!q.empty()){
            long long  n = q.size();
            long long  s = q.front().second;
            long long  e = q.back().second;
            ans = max(ans,e-s+1);
            while(n--){
                TreeNode* temp= q.front().first;
                int index = q.front().second;
                q.pop();
                if(temp->left){
                    q.push({temp->left,(long long)2*index});
                }
                if(temp->right){
                    q.push({temp->right,(long long)2*index+1});
                }
                
            }

        }
        return (int)ans;
    }
};
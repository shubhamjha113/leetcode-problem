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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        if(!root) return ans;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int n = q.size();
            ans.push_back(q.front()->val);
            while(n--){
                TreeNode* temp = q.front();
                q.pop();
                if(temp->right) q.push(temp->right);
                if(temp->left) q.push(temp->left);
            }
        }
        return ans;
    }
};

/* RECURRSIVE APPROACH
    void right(TreeNode* root,int level,vector<int> &ans){
        if(!root) return;
        if(level==ans.size()) ans.push_back(root->val);

        right(root->right,level+1,ans);
        right(root->left,level+1,ans);
    }

    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        if(!root) return ans;
        right(root,0,ans);
        return ans;
    }

*/
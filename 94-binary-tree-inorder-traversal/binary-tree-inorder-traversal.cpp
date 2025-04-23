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
    vector<int> inorderTraversal(TreeNode* root) {
        stack<TreeNode*> st;
        stack<bool> visited;
        vector<int> ans;
        if(!root) return ans;
        st.push(root);
        visited.push(0);
        while(!st.empty()){
            TreeNode* temp = st.top();
            st.pop();
            bool flag = visited.top();
            visited.pop();
            if(!flag)
            {
                if(temp->right){
                    st.push(temp->right);
                    visited.push(0);
                }
                    st.push(temp);
                    visited.push(1);
                if(temp->left){
                    st.push(temp->left);
                    visited.push(0);
                }
            }
            else{
                ans.push_back(temp->val);
            }
            
        }
        return ans;
    }
};
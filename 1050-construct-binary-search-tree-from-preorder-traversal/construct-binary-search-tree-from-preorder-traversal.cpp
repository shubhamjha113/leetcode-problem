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
    TreeNode* BST(vector<int> &preorder,int &index,int upper,int lower){
        if(index == preorder.size() || preorder[index]<lower || preorder[index]>upper){
            return NULL;
        } 

        TreeNode* root = new TreeNode(preorder[index++]);
        root->left = BST(preorder,index,root->val,lower);
        root->right = BST(preorder,index,upper , root->val);
        return root;
    }

    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int index=0;
        int upper = INT_MAX;
        int lower = INT_MIN;
        return BST(preorder,index,upper,lower);
    }
};
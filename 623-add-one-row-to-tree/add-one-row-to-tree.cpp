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
    TreeNode* add(TreeNode* root,int curr,int val,int depth){
        if(!root) return NULL;

        if(curr==depth-1){
            TreeNode* leftTemp = root->left;
            TreeNode* rightTemp = root->right;

            root->left=new TreeNode(val);
            root->right=new TreeNode(val);

            root->left->left= leftTemp;
            root->right->right = rightTemp;
            return root;
        }
       root->left= add(root->left,curr+1,val,depth);
       root->right =  add(root->right,curr+1,val,depth);
        return root;
    }


    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth==1){
            TreeNode* newRoot=new TreeNode(val);
            newRoot->left = root;
            return newRoot;
        }
        int curr=1;
        return add(root,curr,val,depth);
    }
};
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
    void recoverTree(TreeNode* root) {
        TreeNode* first = NULL,*second=NULL,*last = NULL,*present = NULL;
        while(root){
            if(!root->left){
                last = present;
                present = root;
                if(last && last->val > present->val){
                    if(!first){
                        first = last;
                    }
                    second = present;
                }
                root = root->right;
            }
            else{//root left exist
                TreeNode* curr = root->left;
                while(curr->right && curr->right != root){
                    curr = curr->right;
                }
                if(curr->right == NULL){//that side not traversd
                    curr->right = root;
                    root = root->left;
                }
                else{ // that side traversed
                    curr->right = NULL;
                    last = present;
                    present = root;
                    if(last && last->val > present->val){
                        if(!first){
                            first = last;
                        }
                        second = present;
                    }
                    root = root->right;
                }
            }
        }
        
        if(first && second){
            swap(first->val , second->val);
        }
    }
};
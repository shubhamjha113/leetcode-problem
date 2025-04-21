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
    TreeNode* replaceValueInTree(TreeNode* root) {
        if(!root) return root;
        queue<TreeNode*> q;
        vector<int> levelSum;
        q.push(root);
        while(!q.empty()){
            int n = q.size();
            int currSum=0;
            while(n--){
                TreeNode* temp = q.front();
                q.pop();
                currSum += temp->val;
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }
            levelSum.push_back(currSum);
        }
        int i=1;
        q.push(root);
        root->val=0;
        while(!q.empty()){
            int n = q.size();
           
            while(n--){
                TreeNode* temp = q.front();
                q.pop();
                int siblingSum = (temp->left != NULL) ? temp->left->val :0;
                siblingSum +=(temp->right != NULL) ? temp->right->val :0;

                if(temp->left){
                    temp->left->val = levelSum[i] - siblingSum;
                    q.push(temp->left);
                } 
                if(temp->right){
                    temp->right->val = levelSum[i] - siblingSum;
                    q.push(temp->right);
                } 
            }
            i++;
            
        }
        return root;


    }
};
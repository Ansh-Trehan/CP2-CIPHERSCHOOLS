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
    void help(TreeNode* root) {
        if(root==NULL)  return;
        if(root->left==NULL && root->right==NULL)   return;
        
        if(root->left==NULL && root->right!=NULL){
            help(root->right);
        }
        
        if(root->left!=NULL && root->right==NULL){
            root->right = root->left;
            root->left = NULL;
            help(root->right);
        }
        
        if(root->left && root->right){
            TreeNode *temp = root->left;
            while(temp->right!=NULL){
                temp = temp->right;
            }
            
            temp->right = root->right;
            root->right = root->left;
            root->left = NULL;
            
            help(root->right);
        }
        
        
    }

    void flatten(TreeNode* root) {
        TreeNode* temp = root;
        help(temp);
    }

};

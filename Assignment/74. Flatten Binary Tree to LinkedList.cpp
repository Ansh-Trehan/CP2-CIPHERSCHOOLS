//https://leetcode.com/problems/flatten-binary-tree-to-linked-list/

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
class Solution
{
    public:
    void flatten(TreeNode* root)
    {
        flatten1(root);   
    }
    TreeNode* flatten1(TreeNode* root)
    {
        if (root == NULL)
            return NULL;
        root->right = flatten1(root->right);
        root->left = flatten1(root->left);        
        TreeNode* temp = root->right;        
        root->right = root->left;
        root->left = NULL;
        TreeNode *temp2 = root;
        while(temp2 && temp2->right)
            temp2 = temp2->right;
        if (temp2)
        {
            temp2->right = temp;
            temp2->left = NULL;
        }
        return root;
    }
};
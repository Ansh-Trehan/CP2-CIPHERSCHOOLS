//https://leetcode.com/problems/validate-binary-search-tree/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution
{
    public:
    bool isValidBST(TreeNode* root, long int upper, long int lower)
    {
        if(root==nullptr)
            return true;
        bool res = true;
        if(root->val <= lower || root->val >= upper)
            return false;
        if(root->left!=nullptr)
            res = res && isValidBST(root->left, root->val, lower);
        if(root->right!=nullptr)
            res = res && isValidBST(root->right, upper, root->val);
        return res;
    }
    bool isValidBST(TreeNode* root)
    {
        return isValidBST(root, (long int)1e12, (long int)-1e12);
    }
};
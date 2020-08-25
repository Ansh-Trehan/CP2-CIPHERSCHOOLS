//https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q)
    {
        if (root == NULL)
            return NULL;
        if (root == p || root == q)
            return root;
        TreeNode *lt = lowestCommonAncestor(root->left, p, q);
        TreeNode *rt = lowestCommonAncestor(root->right, p, q);
        if (lt && rt)
            return root;
        else if (lt)
            return lt;
        return rt;
    }
};
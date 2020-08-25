//https://leetcode.com/problems/binary-tree-tilt/

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
    int tilt = 0;
    public:
    int findTilt(TreeNode* root)
    {
        if(root == NULL) return 0;
        solve(root);
        return tilt;
    }
    
    int solve(TreeNode* r)
    {
        if(r == NULL) return 0;
        int left = solve(r->left);
        int right = solve(r->right);
        tilt += abs(left-right);
        return r->val + left + right;
    }
};
//https://leetcode.com/problems/binary-tree-maximum-path-sum/

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
    int maxSum(TreeNode* root,int& res)
    {
        if(!root)
            return 0;
        int maxl=maxSum(root->left,res);
        int maxr=maxSum(root->right,res);
        res=max(max(maxl+maxr+root->val,max(maxl+root->val,maxr+root->val)),res);
        return max(root->val,max(maxr+root->val,maxl+root->val));
    }
    
    int maxPathSum(TreeNode* root)
    {
        int res=INT_MIN;
        int sum=maxSum(root,res);
        return max(res,sum);
    }
};
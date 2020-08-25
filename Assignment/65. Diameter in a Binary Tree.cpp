//https://leetcode.com/problems/diameter-of-binary-tree/

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
    int diaHelper(TreeNode* root, int& height)
    {
        if(!root)
        {
            height = 0;
            return 0;
        }
        int leftHeight = 0;
        int rightHeight = 0;
        int leftDia = diaHelper(root->left, leftHeight);
        int rightDia = diaHelper(root->right, rightHeight);
        height = max(leftHeight, rightHeight) + 1;
		return max(max(leftDia,rightDia), leftHeight + rightHeight);
    }
    
    int diameterOfBinaryTree(TreeNode* root)
    {
        int height = 0;
        return diaHelper(root, height);
    }
};
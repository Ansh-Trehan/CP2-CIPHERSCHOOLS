//https://leetcode.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal/

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
    TreeNode* helper(vector<int>& in,vector<int>& pre,int inS,int inE,int preS,int preE)
    {
        if(inS>inE) return NULL;
        int rootData=pre[preS];
        int rootIndex=-1;
        for(int i=inS;i<=inE;i++)
            if(in[i]==rootData)
            {
                rootIndex=i;
                break;
            }
        int lInS=inS;
        int lInE=rootIndex-1;
        int lPreS=preS+1;
        int lPreE=lInE-lInS+lPreS;
        int rPreS=lPreE+1;
        int rPreE=preE;
        int rInS=rootIndex+1;
        int rInE=inE;
        TreeNode *root=new TreeNode(rootData);
        root->left=helper(in,pre,lInS,lInE,lPreS,lPreE);
        root->right=helper(in,pre,rInS,rInE,rPreS,rPreE);
        return root;
    }
    public:
    TreeNode* buildTree(vector<int>& pre, vector<int>& in)
    {
        int n=pre.size();
        return helper(in,pre,0,n-1,0,n-1);
    }
};
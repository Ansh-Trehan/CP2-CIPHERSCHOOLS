//https://leetcode.com/problems/cousins-in-binary-tree/

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
    bool isCousins(TreeNode* root, int x, int y)
    {
        queue<pair<TreeNode *,int>> q;
        pair<TreeNode *,int> p;
        TreeNode * temp;
        int parent1,parent2,s,flag1=0,flag2=0;
        q.push(make_pair(root,0));
        while(!q.empty())
        {
            s=q.size();
            for(int i=0;i<s;i++)
            {
                p=q.front();
                root=p.first;
                q.pop();
                if(root->val==x)
                {
                    flag1=1;
                    parent1=p.second;
                }
                if(root->val==y)
                {
                    flag2=1;
                    parent2=p.second;
                }
                if(root->left!=NULL)
                    q.push(make_pair(root->left,root->val));
                if(root->right!=NULL)
                    q.push(make_pair(root->right,root->val));
            }
            if((flag1==0 && flag2==1) ||(flag1==1 &&flag2==0))
                return false;
            if(flag1==1 && flag2==1)
            {
                if(parent1==parent2)
                    return false;
                else
                    return true;
            }
        }
        return true;
    }
};
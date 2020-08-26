//https://leetcode.com/problems/maximal-rectangle/

int areaa(vector<int> a)
{
    int i=0,ans=0;
    stack<int> s;
    while(i<a.size())
    {
        if(s.empty() || a[i]>=a[s.top()])
        {
            s.push(i);
            i++;
        }
        else
        {
            int topp=s.top();
            s.pop();
            int ar=a[topp]*(s.empty()?i:i-s.top()-1);
            ans=max(ans,ar);
        }
    }
    while(!s.empty())
    {
            int topp=s.top();
            s.pop();
            int ar=a[topp]*(s.empty()?i:i-s.top()-1);
            ans=max(ans,ar);
    }
    return(ans);
}
class Solution
{
public:
    int maximalRectangle(vector<vector<char>>& mat)
    {
        int ans=0;
        vector<int> v;
        for(int i=0;i<mat.size();i++)
        {
            if(i==0)
                for(int j=0;j<mat[i].size();j++)
                    v.push_back(mat[i][j]-'0');
            else
                for(int j=0;j<mat[i].size();j++)
                {
                    if(mat[i][j]=='1')
                    v[j]+=mat[i][j]-'0';
                    else
                        v[j]=0;
                }
            int temp=areaa(v);
            ans=max(temp,ans);
        }
        return(ans);
        
    }
};
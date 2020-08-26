//https://leetcode.com/problems/shortest-path-in-binary-matrix/

class Solution
{
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid)
    {
        vector<pair<int,int>> dir = {{1,0},{0,1},{-1,0},{0,-1},{1,-1},{-1,1},{1,1},{-1,-1}};
        int n = grid.size();
        if(grid[0][0]==1||grid[n-1][n-1]==1)
            return -1;
        queue<pair<int,int>> q;
        q.push({0,0});
        grid[0][0]=1;
        while(!q.empty())
        {
            auto ab = q.front();
            int i = ab.first;
            int j = ab.second;
            if(i==n-1&&j==n-1)
                return grid[n-1][n-1];
            q.pop();
            for(auto num:dir)
            {
                int ii = i + num.first;
                int jj = j + num.second;
                if(ii>=0&&ii<n&&jj>=0&&jj<n&&grid[ii][jj]==0)
                {
                    q.push({ii,jj});
                    grid[ii][jj] = grid[i][j]+1;
                }
            }
        }
        return -1;
    }
};
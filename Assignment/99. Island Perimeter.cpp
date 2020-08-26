//https://leetcode.com/problems/island-perimeter/

class Solution
{
public:
    int islandPerimeter(vector<vector<int>>& grid)
    {
        int ret = 0;
        for(int i=0; i<grid.size(); i++)
            for(int j=0; j<grid[i].size(); j++)
                if(grid[i][j])
                {
                    int tmp = 4;
                    if(i-1 >= 0 && grid[i-1][j])
                        tmp--;
                    if(i+1 < grid.size() && grid[i+1][j])
                        tmp--;
                    if(j-1 >=0 && grid[i][j-1])
                        tmp--;
                    if(j+1 < grid[i].size() && grid[i][j+1])
                        tmp--;
                    ret += tmp;
                }
        return ret;
    }
};
//https://leetcode.com/problems/unique-paths/

class Solution
{
public:
    int uniquePaths(int m, int n)
    {
        int F[m][n];
        for (int i = 0; i < n; i++)
            F[0][i] = 1;
        for (int j = 1; j < m; j++)
            F[j][0] = 1;
        for (int i = 1; i < n; i++)
            for (int j = 1; j < m; j++)
                F[j][i] = F[j-1][i] + F[j][i-1];
        return F[m-1][n-1];
    }
};
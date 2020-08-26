//https://leetcode.com/problems/maximal-square/

class Solution
{
public:
    int maximalSquare(vector<vector<char>> &matrix)
    {
        if (matrix.empty() || matrix[0].empty())
            return 0;
        int m = matrix.size();
        int n = matrix[0].size();
        vector<vector<int>> squareSides(m + 1, vector<int>(n + 1, 0));
        int maxSqaureSide = 0;
        for (int i = 1; i <= m; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (matrix[i - 1][j - 1] == '1')
                {
                    int temp = min(squareSides[i - 1][j - 1], squareSides[i - 1][j]);
                    temp = min(temp, squareSides[i][j - 1]);
                    temp++;
                    if (maxSqaureSide < temp)
                        maxSqaureSide = temp;
                    squareSides[i][j] = temp;
                }
            }
        }
        return maxSqaureSide * maxSqaureSide;
    }
};
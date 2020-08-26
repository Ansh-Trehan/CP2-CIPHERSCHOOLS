//https://leetcode.com/problems/edit-distance/

class Solution
{
public:
    int minDistance(string word1, string word2)
    {
        int n = word1.size(), m = word2.size(), tmp, aux;
        vector<int> dp(m+1);
        for(int i=0;i<=n;++i)
            for(int j=0;j<=m;++j)
            {
                aux = dp[j];
                if (i == 0 or j == 0)
                    dp[j] = (i == 0 ? j : i);
                else
                    dp[j] = (word1[i-1]==word2[j-1] ? tmp : min({dp[j], dp[j-1], tmp}) + 1);
                tmp = aux;
            }
        return dp[m];
    }
};
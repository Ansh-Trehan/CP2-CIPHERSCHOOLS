//https://leetcode.com/problems/n-th-tribonacci-number/

class Solution
{
public:
    int soln(int n, vector<int>&dp)
    {
        if(dp[n] == -1)
        {
            int result = soln(n-1,dp)+soln(n-2,dp)+soln(n-3,dp);
            dp[n] = result;            
        }
        return dp[n];
    }
    int tribonacci(int n)
    {
        vector<int> dp(max(3,n+1),-1);
        dp[0] = 0;
        dp[1] = 1;
        dp[2] = 1;
        return soln(n,dp);
    }
};
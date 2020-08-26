//https://leetcode.com/problems/longest-increasing-subsequence/

class Solution
{
public:
    int lengthOfLIS(vector<int>& nums)
    {
        int n=nums.size();
        if(n==0)
            return 0;
        vector dp(n,1);
        int answer=1;
        for(int i=1;i<n;i++)
        {
            int m=0;
            for(int j=i-1;j>=0;j--)
            {
                if(nums[j]<nums[i])
                    m=max(m,dp[j]);
            }
            dp[i]=m+1;
            answer=max(answer,dp[i]);
        }
        return answer;
    }
};
//https://leetcode.com/problems/target-sum/

class Solution
{
public:
    int fw(vector<int>& nums, int i, int sum, int S, vector<vector<int>>& mem)
    {
        if(i==nums.size()&&sum==S)
            return 1;
        if(i==nums.size()&&sum!=S)
            return 0;
        if(mem[i][sum+1000]!=-1)
            return mem[i][sum+1000];
        int a=fw(nums,i+1,sum+nums[i],S,mem);
        int b=fw(nums,i+1,sum-nums[i],S,mem);
        mem[i][sum+1000]=a+b;
        return a+b;        
    }
    int findTargetSumWays(vector<int>& nums, int S)
    {
        vector<vector<int>> mem(nums.size()+1,vector<int> (2001,-1));
        return fw(nums,0,0,S,mem);    
    }
};
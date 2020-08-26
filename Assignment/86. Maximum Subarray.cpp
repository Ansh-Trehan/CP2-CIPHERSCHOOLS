//https://leetcode.com/problems/maximum-subarray/

class Solution
{
public:
    int maxSubArray(vector<int>& nums)
    {
        int max = nums[0];
        if(nums.size() == 0)
            return 0;
        for(int i = 1; i < nums.size(); i++)
        {  
            if(nums[i-1] > 0)
                nums[i] += nums[i-1];
            if(nums[i] > max)
                max = nums[i];
        }  
        return max;
    }
};
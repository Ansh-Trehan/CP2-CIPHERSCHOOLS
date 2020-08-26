//https://leetcode.com/problems/maximum-product-subarray/

class Solution
{
public:
    int maxProduct(vector<int>& nums)
    {
        int currMax = nums[0];
        int currMin = nums[0];
        int totMax = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            int tmp = currMax;
            currMax = max(max(nums[i] * currMax, nums[i] * currMin), nums[i]);
            currMin = min(min(nums[i] * tmp, nums[i] * currMin), nums[i]);
            if (currMax > totMax)
                totMax = currMax;
        }   
        return totMax;
    }
};
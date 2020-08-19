//https://leetcode.com/problems/shuffle-the-array/

class Solution
{
    public:
    vector<int> shuffle(vector<int>& nums, int n)
    {
        int temp;
        vector<int> newv;
        for(int i=0;i<n;i++)
        {
          newv.push_back(nums[i]);
          newv.push_back(nums[i+n]);
        }
        return newv;
    }
};
//https://leetcode.com/problems/subsets-ii/

int K;
vector<vector<int>> ans;

void soln(int first, vector<int> nums,vector<int> local)
{
    if(local.size()==K)
    {
        ans.push_back(local);
        return;
    }
    for(int i=first; i<nums.size(); i++)
        if(i==first || nums[i]!=nums[i-1])
        {
            local.push_back(nums[i]);
            soln(i+1,nums,local);
            local.pop_back();
        }
    return;
}
class Solution
{
    public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums)
    {
        vector<int> local;
        ans.clear();
        sort(nums.begin(),nums.end());
        for(K=0; K<=nums.size(); K++)
            soln(0,nums,local);
        return ans;
    }
};
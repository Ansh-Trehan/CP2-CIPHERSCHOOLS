// https://leetcode.com/problems/top-k-frequent-elements/

class Solution
{
    public:
    vector<int> topKFrequent(vector<int>& nums, int k)
    {
        int n;
        n=nums.size();
        vector<int> v;
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++)
            mp[nums[i]]++;
        priority_queue<pair<int,int>> pq;
        for(auto x:mp)
            pq.push({x.second,x.first});
        for(int i=0;i<k;i++)
        {
            v.push_back(pq.top().second);
            pq.pop();
        }
        return v;
    }
};
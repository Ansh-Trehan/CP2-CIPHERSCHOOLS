//https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/

#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> naray;
        
        for(int i=0;i<nums.size();i++)
        {
            int count=0;
            for(int j=0;j<nums.size();j++)
            {
                if(nums[i]>nums[j])
                    count+=1;
            }
            naray.push_back(count);
        }
        return naray;
    }
};
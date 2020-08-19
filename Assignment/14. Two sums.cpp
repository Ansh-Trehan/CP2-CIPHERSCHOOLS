//https://leetcode.com/problems/two-sum/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> V;
        
        for(int i=0;i<nums.size()-1;i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if (nums[i]+nums[j]== target)
                {
                    V.push_back(i);
                    
                    V.push_back(j);
                }
            }
        }
    
        return V;
    }
};
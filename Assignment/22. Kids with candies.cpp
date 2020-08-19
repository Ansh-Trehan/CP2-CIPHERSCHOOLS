//https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/

class Solution
{
public:
    vector<bool> kidsWithCandies(vector<int>& can, int ecan)
    {
        int m = *max_element(can.begin(),can.end());
        vector<bool> v;
        for(int i=0;i<can.size();i++)
        {
            if((can[i]+ecan) >= m) v.push_back(true);
            else v.push_back(false);
        }
        return v;
    }
};
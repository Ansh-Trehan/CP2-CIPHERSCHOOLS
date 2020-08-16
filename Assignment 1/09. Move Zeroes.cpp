//https://leetcode.com/problems/move-zeroes/

class Solution {
public:
    void moveZeroes(vector<int>& num)
    {
        int n = num.size();
        int z = 0;
        for (int i = 0; i < n; i++)
        {
            z += (num[i] == 0);
        }
        vector<int> sol;
        for (int i = 0; i < n; i++)
        {
            if (num[i] != 0)
            {
                sol.push_back(num[i]);
            }
        }
        while (z--)
        {
            sol.push_back(0);
        }
        for (int i = 0; i < n; i++)
        {
            num[i] = sol[i];
        }
    }
};
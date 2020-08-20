// https://leetcode.com/problems/longest-substring-without-repeating-characters/

class Solution
{
    public:
    int lengthOfLongestSubstring(string s)
    {
        int res = 0, i = 0;      
        vector<int> lastIndex(256, -1);
        for (int j = 0; j < s.size(); j++)
        {
            i = max(i, lastIndex[s[j]] + 1);
            res = max(res, j - i + 1);
            lastIndex[s[j]] = j;
        }
        return res;
    }
};
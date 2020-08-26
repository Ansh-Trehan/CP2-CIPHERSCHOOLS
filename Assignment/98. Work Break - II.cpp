//https://leetcode.com/problems/word-break-ii/

class Solution
{
public:
    vector<string> r;
    map<string, vector<string>> dp;
    vector<string> backT(string s, set<string> & dict)
    {
        vector<string> t;
        if(dict.find(s)!=dict.end())          
            t.push_back(s);
        if(dp.find(s)!=dp.end())
            return dp[s];
        string sub;
        for(int i=0;i<s.size();i++)
        {
            sub+=s[i];
            if(dict.find(sub)!=dict.end())
            {
                vector<string>temp = backT(s.substr(i+1), dict);
                if(temp.size()>0)
                    for(auto x:temp)
                        t.push_back(sub + ' '+x);
            }
        }
        dp[s] = t;
        return t;
    }
    vector<string> wordBreak(string s, vector<string>& wordDict)
    {
        set<string> dict;        
        for(auto x:wordDict)
            dict.insert(x);
        return backT(s, dict);        
    }
};
//https://leetcode.com/problems/letter-tile-possibilities/

class Solution
{
    void soln(string str, int level, int &count)
    {
        count++;
        for(int i=level; i<str.length(); i++)
        {
            if(i!=level && str[i]==str[level])
                continue;
            swap(str[i], str[level]);
            soln(str, level+1, count);
        }
    }
public:
    int numTilePossibilities(string str)
    {
        int count=-1;
        sort(str.begin(), str.end());
        soln(str, 0, count);
        return count;
    }
};
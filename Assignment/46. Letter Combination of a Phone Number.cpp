//https://leetcode.com/problems/letter-combinations-of-a-phone-number/

class Solution
{
private:
    vector<vector<char>> letters = {{}, {}, {'a', 'b', 'c'}, {'d', 'e', 'f'}, {'g', 'h', 'i'}, {'j', 'l', 'k'}, {'m', 'n', 'o'}, {'p', 'q', 'r', 's'}, {'t', 'u', 'v'}, {'w', 'x', 'y', 'z'}};

public:
    vector<string> letterCombinations(string digits)
    {
        vector<string> currList, newList;
        if (digits.empty())
            return currList;
        int firstDigit = digits.at(0)  - 48;
        digits = digits.substr(1);
        for (int i = 0; i < letters[firstDigit].size(); i++)
        {
            currList.push_back(string(1, letters[firstDigit][i]));
        }
        for (char const& c: digits)
        {
            int letterIndex = c - 48;
            for (int i = 0; i < letters[letterIndex].size(); i++)
            {
                string s(1, letters[letterIndex][i]); 
                for (int j = 0; j < currList.size(); j++)
                    newList.push_back(currList[j] + s);
            }
            currList = newList;
            newList.clear();
        }
        return currList;
    }
};
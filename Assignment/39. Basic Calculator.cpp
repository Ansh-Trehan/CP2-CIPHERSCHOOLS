//https://leetcode.com/problems/basic-calculator-ii/

class Solution
{
public:
    int calculate(string s)
    {
        int nums;
        int res = 0, n = 0, sign = 1;
        char pre_op = ' ';
        for(auto c : s)
        {
            if(c == ' ') continue;
            if(isdigit(c))
            {
                n = n * 10 + (c - '0');
            }
            else
            {
                if(pre_op == '*' || pre_op == '/')
                {
                    int a = nums;
                    n = pre_op == '*' ? a * n : a / n;
                    pre_op = ' ';
                }
                if(c == '*' || c == '/')
                {
                    pre_op = c;
                    nums = n;
                    n = 0;
                }
                else
                {
                    res += sign * n;
                    sign = c == '+' ? 1 : -1;
                    n = 0;
                }
            }
        }
        if(pre_op != ' ')
            n = pre_op == '*' ? nums * n : nums / n;
        return res + sign * n;
    }
};
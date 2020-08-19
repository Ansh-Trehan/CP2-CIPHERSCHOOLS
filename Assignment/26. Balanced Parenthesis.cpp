//https://leetcode.com/problems/valid-parentheses/

class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> S;
        for(int i=0;i<s.size();i++)
        {
            char c=s[i];
            if(c=='(' || c=='[' || c=='{') S.push(c);
            else
            {
                if(S.empty()) return false;
                if(c==')' && S.top()=='(') S.pop(); 
                else if(c==']' && S.top()=='[') S.pop() ;
                else if(c=='}' && S.top()=='{') S.pop();
                else return false;
            }
        }
        return S.empty();
    }
};
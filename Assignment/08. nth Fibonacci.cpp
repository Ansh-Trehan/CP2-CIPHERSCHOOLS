//https://leetcode.com/problems/fibonacci-number/

#include<iostream>
using namespace std;
class Solution
{
    public:
    int fib(int n)
    {
        int a=0,b=1,c=a+b,i=2;
        if (n==0)
            c=0;
	    while(i<n)
	    {
	    	a = b;
	    	b = c;
	    	c = a+b;
	    	i = i + 1;
	    }
        return c;
    }
};
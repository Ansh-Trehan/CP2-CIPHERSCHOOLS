//https://www.geeksforgeeks.org/minimize-the-maximum-difference-between-adjacent-elements-in-an-array/

#include <bits/stdc++.h> 
using namespace std;

int main() 
{ 
	int n,k;
	cout<<"Enter N, K";
	cin>>n>>k; 
	int a[n];
	cout<<"Enter Array";
	for (int i = 0; i < n; i++)
		cin>>a[i];
	int minDiff = INT_MAX;
	for (int i = 0; i < (1 << n); i++)
	{
		int cnt = __builtin_popcount(i);
		if (cnt == n - k)
		{
			vector<int> temp; 
			for (int j = 0; j < n; j++)
			{ 
				if ((i & (1 << j)) != 0) 
					temp.push_back(a[j]); 
			} 
			int maxDiff = INT_MIN; 
			for (int j = 0; j < temp.size() - 1; j++)
			{ 
				maxDiff = max(maxDiff, 
				temp[j + 1] - temp[j]); 
			} 
			minDiff = min(minDiff, maxDiff); 
		}
	}
	cout<<minDiff;
	return 0; 
} 
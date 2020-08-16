
#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 
	int n;
	cout<<"Enter N";
	cin>>n; 
	int a[n];
	cout<<"Enter Array";
	for (int i = 0; i < n; i++)
		cin>>a[i];
	for (int k=1; k<=n; k++) 
	{
		int maxOfMin = INT_MIN;
		for (int i = 0; i <= n-k; i++) 
		{
			int min = a[i]; 
			for (int j = 1; j < k; j++) 
			{ 
				if (a[i+j] < min) 
					min = a[i+j]; 
			}
			if (min > maxOfMin)
			maxOfMin = min;
		}
		cout << maxOfMin << " ";
	}
	return 0; 
} 
//https://www.geeksforgeeks.org/first-negative-integer-every-window-size-k/

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
	bool flag;
	for (int i = 0; i<(n-k+1); i++)		 
	{ 
		flag = false;
		for (int j = 0; j<k; j++) 
		{
			if (a[i+j] < 0) 
			{ 
				cout << a[i+j] << " "; 
				flag = true; 
				break; 
			} 
		} 
		if (!flag) 
			cout << "0" << " "; 
	}
	return 0; 
} 

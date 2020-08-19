//https://www.geeksforgeeks.org/check-if-the-given-array-is-mirror-inverse/

#include<bits/stdc++.h> 
using namespace std;

int main() 
{
	int n;
	int flag=1;
	cout<<"Enter size of array";
	cin>>n;
	int arr[n];
	cout<<"Enter Array";
	for (int i = 0; i < n; i++)
	{
		cin>>arr[i];
	}
	for (int i = 0; i < n; i++) 
	{
		if (arr[arr[i]] != i) 
			flag=0; 
	}
	if (flag==0)
		cout<<"No";
	else
		cout<<"Yes";
	return 0; 
}
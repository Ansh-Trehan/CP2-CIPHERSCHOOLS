//https://www.geeksforgeeks.org/equilibrium-index-of-an-array/

#include <bits/stdc++.h> 
using namespace std; 

int equilibrium(int arr[], int n) 
{ 
	int i, j; 
	
	return -1; 
} 
int main() 
{
	int n;
	cout<<"Enter length of array";
	cin>>n;
	int arr[n], leftsum, rightsum;
	for (int i = 0; i < n; i++)
		cin>>arr[i];
	for (int i = 0; i < n; ++i) 
	{
		leftsum = 0; 
		for (int j = 0; j < i; j++) 
			leftsum += arr[j];
		rightsum = 0; 
		for (int j = i + 1; j < n; j++) 
			rightsum += arr[j];
		if (leftsum == rightsum)
		{
			cout<<i;
			break;
		}
	}
	return 0; 
}
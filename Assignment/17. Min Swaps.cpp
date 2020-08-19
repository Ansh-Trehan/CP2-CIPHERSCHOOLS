//https://www.geeksforgeeks.org/minimum-swaps-required-bring-elements-less-equal-k-together/

#include <iostream> 
using namespace std;

int main()
{
	int n,k;
	cout<<"N = ";
	cin>>n;
	int arr[n];
	for (int i = 0; i < n; i++)
		cin>>arr[i];
	cout<<"K = ";
	cin>>k; 
	int count = 0; 
	for (int i = 0; i < n; ++i) 
		if (arr[i] <= k) 
			++count;
	int bad = 0; 
	for (int i = 0; i < count; ++i) 
		if (arr[i] > k) 
			++bad;
	int ans = bad; 
	for (int i = 0, j = count; j < n; ++i, ++j) {
		if (arr[i] > k) 
			--bad;
		if (arr[j] > k) 
			++bad;
		ans = min(ans, bad); 
	} 
	cout<<ans; 
	return 0; 
} 
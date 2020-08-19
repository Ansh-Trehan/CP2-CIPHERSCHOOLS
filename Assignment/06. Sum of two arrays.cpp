//https://www.geeksforgeeks.org/add-two-numbers-represented-by-two-arrays/

#include <bits/stdc++.h> 
using namespace std; 
int calc(int a[], int b[], int n, int m) 
{
	int sum[n];
	int i = n-1, j = m-1, k = n-1;
	int c = 0, s = 0;
	while (j >= 0)
	{
		s = a[i] + b[j] + c; 
		sum[k] = (s % 10);
		c = s / 10; 
		k--; 
		i--; 
		j--; 
	}
	while (i >= 0)
	{
		s = a[i] + c;
		sum[k] = (s % 10);
		c = s / 10;
		i--; 
		k--; 
	}
	int ans = 0;
	if (c)
		ans = 10;
	for (int i = 0; i <= n - 1; i++)
	{ 
		ans += sum[i]; 
		ans *= 10; 
	}
	return ans / 10; 
}

int main() 
{
	int n1,n2;
	cout<<"Enter size of arrays"<<endl;
	cin>>n1>>n2;
	int a[n1],b[n2];
	cout<<"Enter array 1"<<endl;
	for (int i = 0; i < n1; i++)
	{
		cin>>a[i];
	}
	cout<<"Enter array 1"<<endl;
	for (int i = 0; i < n2; i++)
	{
		cin>>b[i];
	}
	int n = sizeof(a) / sizeof(a[0]); 
	int m = sizeof(b) / sizeof(b[0]); 
	if (n >= m)
		cout<<calc(a, b, n, m)<<endl;
	else
		cout<<calc(b, a, m, n)<<endl;
	return 0; 
} 
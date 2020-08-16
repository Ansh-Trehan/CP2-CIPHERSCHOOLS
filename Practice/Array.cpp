#include<iostream>
using namespace std;
int main()
{
	int a[100] = {0};
	for(int i=0;i<100;i++)
		cout<<a[i]<<endl;
	a[11] = 23;
	cout<<a[4];
	int b[] = {7,8,9,10};
	cout<<sizeof(b)<<endl;
	cout<<sizeof(int)<<endl;
	int x;
	cout<<sizeof(x)<<endl;
	cout<< sizeof(b)/sizeof(b[0]);
	cout<<sizeof(long long int);
	return 0;
}
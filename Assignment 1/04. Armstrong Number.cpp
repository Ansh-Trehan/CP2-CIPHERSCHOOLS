//https://www.geeksforgeeks.org/java-program-to-check-armstrong-number/

#include<bits/stdc++.h> 
using namespace std; 

int calcPower(int x, int y) 
{ 
	if (y == 0) 
		return 1; 
	if (y%2 == 0) 
		return calcPower(x, y/2)*calcPower(x, y/2); 
	return x*calcPower(x, y/2)*calcPower(x, y/2); 
} 

int calcOrder(int x) 
{ 
	int n = 0; 
	while (x) 
	{ 
		n++; 
		x = x/10; 
	} 
	return n; 
}

bool check(int x) 
{ 
	int n = calcOrder(x); 
	int temp = x, sum = 0; 
	while (temp) 
	{ 
		int r = temp%10; 
		sum += calcPower(r, n); 
		temp = temp/10; 
	}
	return (sum == x); 
}

int main() 
{ 
	int x;
	cin>>x;
	cout<<check(x)<<endl;
}
//https://www.geeksforgeeks.org/program-to-print-solid-and-hollow-rhombus-patterns/

#include <bits/stdc++.h>
using namespace std;
int main() 
{ 
	int n;
	cin>>n;
	for (int i=0; i<n; i++) 
	{ 
		for (int j=0; j<n-i; j++) 
			cout << " ";
		for (int j=0; j<n; j++) 
			cout << "*";
		cout << "\n"; 
	}
	for (int i=0; i<n; i++) 
    {
		for (int j=0; j<n-i; j++) 
			cout << " ";
		if (i==0 || i==n-1) 
			for (int j=0; j<n; j++) 
				cout << "*";
		else
			for (int j=0; j<n; j++) 
				if (j==0 || j==n-1) 
					cout << "*"; 
				else
					cout << " ";
		cout << "\n";
	}
	return 0; 
}
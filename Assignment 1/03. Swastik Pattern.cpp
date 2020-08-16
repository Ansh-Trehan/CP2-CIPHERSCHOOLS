//https://www.geeksforgeeks.org/swastika-patternprogram-to-print-swastika-pattern/

#include <bits/stdc++.h> 
using namespace std; 

int main() 
{
int x, y;
cin>>x>>y;
for (int i = 0; i < x; i++)
{ 
	for (int j = 0; j < y; j++)
	{
		if (i < x / 2)
		{ 
			if (j < y / 2)`
			{
				if (j == 0) 
					cout << "*";
				else
					cout << " " << " "; 
			}
			else if (j == y / 2) 
				cout << " *"; 
			else
			{ 
			if (i == 0) 
				cout << " *"; 
			} 
		} 
		else if (i == x / 2) 
			cout << "* "; 
		else
		{
			if (j == y / 2 || j == y - 1) 
				cout << "* ";
			else if (i == x - 1)
			{
				if (j <= y / 2 || j == y - 1) 
					cout << "* "; 
				else
					cout << " " << " "; 
			} 
			else
				cout << " " << " "; 
		} 
	} 
	cout << "\n";
}
return 0; 
} 
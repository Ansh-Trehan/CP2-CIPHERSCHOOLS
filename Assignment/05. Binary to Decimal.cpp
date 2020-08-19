//https://www.geeksforgeeks.org/program-binary-decimal-conversion/

#include <iostream> 
using namespace std; 

int main() 
{ 
	int num;
	cin>>num; 
	int dec = 0; 
	int base = 1; 
	int temp = num; 
	while (temp)
	{ 
		int last = temp % 10; 
		temp = temp / 10; 
		dec += last * base; 
		base = base * 2; 
	} 
	cout<<dec;
} 
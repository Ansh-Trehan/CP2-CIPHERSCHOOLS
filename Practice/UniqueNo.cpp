#include <bits/stdc++.h> 
using namespace std; 

int UniqueNo(int arr[], int n){ 
	int res = 0; 
	for (int i = 0; i < n; i++) 
		res = res ^ arr[i]; 
	return res; 
} 

int main(){ 
	int arr[] = { 3, 5, 7, 3, 2, 5, 2, 1, 1 }; 
	int n = sizeof(arr) / sizeof(arr[0]); 
	cout << UniqueNo(arr, n); 
	return 0; 
}
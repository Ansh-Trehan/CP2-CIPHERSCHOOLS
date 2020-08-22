#include<bits/stdc++.h>
using namespace std;

void sortK(int arr[], int n, int k){
	priority_queue<int, vector<int>, greater<int> > pq(arr, arr + k + 1);

	int index = 0;
	for(int i=k+1; i<n; i++){
		arr[index++] = pq.top();
		pq.pop();
		pq.push(arr[i]);
	}

	while(!pq.empty()){
		arr[index++] = pq.top();
		pq.pop();
	}
}

int main(){
	int arr[] = {6, 5, 3, 2, 8, 10, 9};

	sortK(arr, 7, 3);

	for(int i=0; i<7; i++){
		cout<<arr[i]<<" ";
	}

	return 0;
}
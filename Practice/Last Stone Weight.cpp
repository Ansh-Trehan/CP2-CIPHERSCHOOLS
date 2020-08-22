#include<bits/stdc++.h>
using namespace std;

int RockFight(vector<int>& arr){
	priority_queue<int> pq(arr.begin(), arr.end());

	while(pq.size()>1){
		int x = pq.top();
		pq.pop();

		int y = pq.top();
		pq.pop();

		if(x>y){
			pq.push(x-y);
		}
	}

	return pq.empty() ? 0 : pq.top();
}

int main(){
	vector<int> vec;
	vec.push_back(2);
	vec.push_back(7);
	vec.push_back(4);
	vec.push_back(1);
	vec.push_back(8);
	vec.push_back(1);

	int ans = RockFight(vec);
	cout<<ans;

	return 0;
}

#include<bits/stdc++.h>
using namespace std;

int Flights(int n, vector<vector<int> >& flights, int src, int dest, int k){
	vector<vector<int> >dp(k+2, vector<int>(n, INT_MAX));

	for(int i=0; i<=k+1; i++){
		dp[i][src] = 0;
	}

	for(int i=1; i<=k+1; i++){
		for(auto &f: flights){
			if(dp[i-1][f[0]] != INT_MAX){
				dp[i][f[1]] = min(dp[i][f[1]], dp[i-1][f[0]] + f[2]);
			}
		}
	}

	return dp[k+1][dest] == INT_MAX ? -1 : dp[k+1][dest];
	
}

int main(){
	int n = 3;
	vector<vector<int> > flights;
	vector<int> vec;
	vec.push_back(0);
	vec.push_back(1);
	vec.push_back(100);
	flights.push_back(vec);
	vec.clear();

	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(100);
	flights.push_back(vec);
	vec.clear();

	vec.push_back(0);
	vec.push_back(2);
	vec.push_back(500);
	flights.push_back(vec);
	vec.clear();

	int src=0, dest=2, k=1;

	int ans = Flights(n, flights, src, dest, k);
	cout<<ans;

	return 0;
}
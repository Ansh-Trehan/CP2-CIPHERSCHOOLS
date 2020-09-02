#include<bits/stdc++.h>
using namespace std;

class comp{
public:
	bool operator()(pair<int, int> a, pair<int, int> b){
		int x1 = a.first * a.first;
		int y1 = a.second * a.second;
		int x2 = b.first * b.first;
		int y2 = b.second * b.second;

		return (x1+y1) > (x2+y2);
	}
};

vector<pair<int, int> > MobileTower(int x[], int y[], int n, int k){
	priority_queue<pair<int, int>, vector<pair<int, int> >, comp > pq;

	for(int i=0; i<n; i++){
		pq.push(make_pair(x[i], y[i]));
	}

	vector<pair<int, int> > res;

	for(int i=0; i<k; i++){
		pair<int, int> p = pq.top();
		pq.pop();
		res.push_back(p);
	}

	return res;
}

int main(){
	int x[] = {1, -2, 5};
	int y[] = {1, 2, 4};

	int n=3, k=2;
	vector<pair<int, int> >ans = MobileTower(x, y, n, k);

	for(int i=0; i<k; i++){
		cout<<ans[i].first<<" "<<ans[i].second<<endl;
	}

	return 0;
}
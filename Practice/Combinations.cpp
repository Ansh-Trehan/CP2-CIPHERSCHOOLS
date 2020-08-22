#include<bits/stdc++.h>
using namespace std;

vector<int> SumCombination(vector<int>& A, vector<int>& B, int K){
	sort(A.begin(), A.end());
	sort(B.begin(), B.end());

	int N = A.size();

	priority_queue<pair<int, pair<int, int> > > pq;

	set<pair<int, int> > st;

	pq.push(make_pair(A[N-1] + B[N-1], make_pair(N-1, N-1) ) );

	st.insert(make_pair(N-1, N-1));

	vector<int> ans;

	for(int count=0; count<K; count++){
		pair<int, pair<int, int> > temp = pq.top();
		pq.pop();

		ans.push_back(temp.first);

		int i = temp.second.first;
		int j = temp.second.second;

		int sum = A[i-1] + B[j];

		pair<int, int> t1 = make_pair(i-1, j);

		if(st.find(t1) == st.end()){
			pq.push(make_pair(sum, t1));
			st.insert(t1);
		}

		sum = A[i] + B[j-1];
		t1 = make_pair(i, j-1);

		if(st.find(t1) == st.end()){
			pq.push(make_pair(sum, t1));
			st.insert(t1);
		}
	}

	return ans;
}

int main(){
	vector<int> A;
	A.push_back(4);
	A.push_back(2);
	A.push_back(5);
	A.push_back(1);

	vector<int> B;
	B.push_back(8);
	B.push_back(0);
	B.push_back(3);
	B.push_back(5);

	vector<int> ans = SumCombination(A, B, 3);
	for(int i=0; i<ans.size(); i++){
		cout<<ans[i]<<" ";
	}

	return 0;
}
#include <bits/stdc++.h>

using namespace std;

struct cmp{
    bool operator()(pair<int,int>a, pair<int, int>b){
        return a.second<b.second;
    }
}cmp;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n, s, e, ans;
        ans=1;

        vector<pair<int, int>> vec;

        cin>>n;
        for(int i=0; i<n; i++){
            cin>>s>>e;
            vec.push_back(make_pair(s,e));
        }

        sort(vec.begin(), vec.end(), cmp);

        int temp = vec[0].second;

        for(int i=1; i<n; i++){
            if(vec[i].first>=temp){
                temp = vec[i].second;
                ans++;
            }
        }

        cout<<ans<<endl;

    }
    
    return 0;
}

/*
# Time complexity
O(n*logn)

# Space Complexity
O(n)
*/

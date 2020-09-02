#include <bits/stdc++.h>
using namespace std;

int numSquares(int n) {
    if (n <= 0) {
        return 0;
    }
    vector<int> countPerfectSquares(n + 1, INT_MAX);
    countPerfectSquares[0] = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j * j <= i; j++) {
            countPerfectSquares[i] =
                    min(countPerfectSquares[i], countPerfectSquares[i - j * j] + 1);
        }
    }

    return countPerfectSquares.back();
}

int main() {
    int test;
    cin>>test;
    for(int i=0;i<test;i++){
        int n;
        cin>>n;
        cout<<numSquares(n)<<endl;
    }

    return 0;
}
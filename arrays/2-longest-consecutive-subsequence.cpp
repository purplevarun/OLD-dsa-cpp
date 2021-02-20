#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define null nullptr
#define vi vector <int>
#define pb push_back
#define all(x) x.begin(),x.end()
int maxCount (vi A) {
    int N = *max_element(all(A)) + 1;
    vi dp(N,0);
    int count = 0, maxcount = 0;
    for (int i:A) dp[i] = 1;
    for (int i=0;i<N;i++) {
        if (dp[i]==0){
            count = 0;
        }
        else {
            count++;
        }
        maxcount = max (count,maxcount);
    }
    return maxcount;
}
int32_t main () {
    vi A {1,3,5,8,2,3,9,7,6}; // TC 1 Answer = 5
    // vi A {10,8,6,4,2,1,3,9}; // TC 2 Answer = 4
    cout << maxCount (A);
}
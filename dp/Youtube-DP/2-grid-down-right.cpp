#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define null nullptr
#define vi vector <int>
#define pb push_back
#define all(x) x.begin(),x.end()
map <string,int> dp;
int path (int n, int m) {
    string key = to_string(n) + "," + to_string(m);
    if (dp.find(key)!=dp.end()) return dp[key];
    if (n==0 || m==0) return 0;
    if (n==1 && m==1) return 1;
    dp[key] = path (n-1,m) + path (n,m-1);
    return dp[key];
}
int32_t main () {
    int N,M; cin >> N >> M;
    cout << path (N,M) << endl;
}
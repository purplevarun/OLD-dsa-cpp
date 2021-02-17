#include <bits/stdc++.h>
using namespace std;
#define int unsigned long long
#define null nullptr
map <string, int> dp;
int numOfPaths (int n, int m) {
    string key = to_string (n) + "," + to_string (m);
    if (dp.find(key) != dp.end()) return dp[key];
    if (n==0 || m==0) return 0;
    if (n==1 && m==1) return 1;
    dp[key] = numOfPaths(n-1,m) + numOfPaths(n,m-1);
    return dp[key]; 
}
signed main () {
    int n = 100, m = 26;
    cout << numOfPaths (n,m) << endl;
}
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define null nullptr
map <int,int> dp;
int fibo (int n) {
    if (dp.find(n)!=dp.end()) return dp[n];
    if (n == 0) return 0;
    if (n <= 2) return 1;
    dp[n] = fibo (n-1) + fibo (n-2);
    return dp[n];
}
signed main () {
    int n = 60;
    cout << fibo (n) << endl;
}
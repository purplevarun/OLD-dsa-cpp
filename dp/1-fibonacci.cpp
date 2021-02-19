#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define null nullptr
map <int,int> dp; // dp to store fibonacci numbers
int fibo (int n) {
    if (dp.find(n)!=dp.end()) return dp[n]; // check if dp contains number
    if (n == 0) return 0;
    if (n <= 2) return 1;
    dp[n] = fibo (n-1) + fibo (n-2); // store answer in dp
    return dp[n];
}
int32_t main (int32_t argc, char** argv) {
    int N;
    if (argc <= 1) N = 50;
    else N = atoi(argv [1]);
    cout << N << "th fibonacci number = " << fibo ( N ) << endl;
}
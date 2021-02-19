#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define null nullptr
#define vi vector <int>
#define pb push_back
#define all(x) x.begin(),x.end()
map <int,bool> dp;
bool canSum (int N, vi A) {
    if (dp.find(N)!=dp.end()) return dp[N];
    if (N == 0) return true;
    if (N < 0) return false;
    for (int i:A) {
        if (canSum (N - i, A)) {
            dp [N] = true;
            return true;
        }
    }
    dp [N] = false;
    return false;
}
int32_t main () {
    // int N = 7; vi A {2,3}; // TC 1 Answer = Yes
    // int N = 9; vi A {2,4}; // TC 2 Answer = No
    int N = 300; vi A {7,14}; // TC 3 Answer = No
    if (canSum(N,A)) cout << "Yes";
    else cout << "No";

}
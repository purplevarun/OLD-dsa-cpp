#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define null nullptr
#define vi vector <int>
#define pb push_back
#define all(x) x.begin(),x.end()
vi howSum (int N, vi A) {
    vi temp;
    if (N == 0) return temp;
    if (N < 0) return {-1};
    for (int i : A) {
        vi B = howSum (N-i,A);
        if (B != {-1}) {
            B.pb(i);
            return B;
        }
    }
    return {-1};
}
int32_t main () {
    int N = 7; vi A {2,3}; // TC 1 Answer = {3,2,2}
    // int N = 9; vi A {2,4}; // TC 2 Answer = Not Possible
    // int N = 300; vi A {7,14}; // TC 3 Answer = Not Possible
    // int N = 100; vi A {2,48,1,3}; // TC 4 Answer = {48,48,3,1}
    sort (all(A)); reverse (all(A));
    vi result = howSum (N,A);
}
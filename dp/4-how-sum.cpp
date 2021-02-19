#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define null nullptr
#define vi vector <int>
#define pb push_back
#define all(x) x.begin(),x.end()
void print (vi X) {
    int n = X.size();
    if (n == 1 && X[0] == -1) {cout << "Not Possible";return;}
    for (int i=0;i<n;i++) cout << i << ", ";
    cout << X[n-1];
}
vi howSum (int N, vi A) {
    return {-1};
}
int32_t main () {
    int N = 7; vi A {2,3}; // TC 1 Answer = {3,2,2}
    // int N = 9; vi A {2,4}; // TC 2 Answer = Not Possible
    // int N = 300; vi A {7,14}; // TC 3 Answer = Not Possible
    // int N = 100; vi A {2,48,1,3}; // TC 4 Answer = {48,48,3,1}
    sort (all(A));
    vi result = howSum (N,A);
    print (result);
}
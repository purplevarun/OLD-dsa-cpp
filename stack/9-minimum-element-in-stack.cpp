/*
    Minimum element in stack in O(1) space
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define null nullptr
#define vi vector <int>
#define pb push_back
#define all(x) x.begin(),x.end()
int minElement;
stack <int> s;
int getMin () {
    if (s.empty()) return -1;
    else return minElement;
}
int32_t main () {
    vi A {}; // TC 1
    // for (int i:A)
    cout << minElement;
}
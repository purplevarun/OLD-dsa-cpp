#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define null nullptr
#define vi vector <int>
#define pb push_back
#define all(x) x.begin(),x.end()
bool canSum (int target, vi A) {
    if (target == 0) return true;
    if (target < 0) return false;
    for (int i:A) {
        if (canSum (target - i, A)) return true;
    }
    return false;
}
int32_t main () {
    // int target = 7; vi A {2,3}; // TC 1 Answer = Yes
    // int target = 9; vi A {2,4}; // TC 2 Answer = No
    int target = 300; vi A {7,14}; // TC 3 Answer = No
    if (canSum(target,A)) cout << "Yes" << endl;
    else cout << "No" << endl;
}
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define null nullptr
#define vi vector <int>
#define pb push_back
#define all(x) x.begin(),x.end()
bool canSum (int target, vi arr) {
    if (target == 0) return true;
    if (target < 0) return false;
    for (int i:arr) {
        if (canSum (target - i, arr)) return true;
    }
    return false;
}
int32_t main (int32_t argc, char** argv) {
    int target = atoi (argv[1]);
    vi arr;
    for (int i=2;i<argc;i++) arr.pb(atoi(argv[i]));
    cout << canSum (target,arr) << endl;
}
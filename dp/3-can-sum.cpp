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
    int target,N; cin >> target >> N;
    vi A(N);
    for (int i=0;i<N;i++) cin >> A[i];
    if (canSum(target,A)) cout << "Yes" << endl;
    else cout << "No" << endl;
}
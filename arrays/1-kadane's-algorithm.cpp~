#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define null nullptr
#define vi vector <int>
#define pb push_back
#define all(x) x.begin(),x.end()
int maxSum (vi A) {
    int maxsum = 0, sum = 0;
    for (int i:A) {
        sum+=i;
        maxsum = max (maxsum,sum);
        if (sum < 0) sum = 0;
    }
    return maxsum;
}
int32_t main () {
    // vi A {-2,-5,3,1,-1,2}; // TC 1 Answer = 5
    vi A {-5,-10,-1,-2,1,-5,2}; // TC 2 Answer = 2
    cout << maxSum (A) << endl;
}
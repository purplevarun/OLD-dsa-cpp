#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define null nullptr
#define vi vector <int>
#define pb push_back
#define all(x) x.begin(),x.end()
int32_t main () {
    vi A {10,9,8,7,6,5,4,3,2,1};
    int N = A.size();
    int target = 1;
    int idx = -1;
    int low = 0, high = N-1;
    while (low <= high) {
        int mid = (low+high)/2;
        if (A[mid] == target) {
            idx = mid;
            break;
        }       
        if (target > A[mid]) high = mid-1;
        else low = mid+1; 
    }
    cout << idx;
}
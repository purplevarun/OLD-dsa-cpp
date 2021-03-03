#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define null nullptr
#define vi vector <int>
#define pb push_back
#define all(x) x.begin(),x.end()
int32_t main () {
    vi A {1,2,3,4,5,6,7,8,9,10};
    int target = 8;
    int N = A.size();
    int low = 0, high = N-1, mid;
    int idx = -1;
    while (low <= high) {
        mid = (low+high)/2;
        if (A[mid] == target) {
            idx = mid;
            break;
        }
        else if (target < A[mid]){
            high = mid;
            continue;
        }
        else if (target > A[mid]){
            low = mid+1;
            continue;
        }
    }
    cout << idx;
}
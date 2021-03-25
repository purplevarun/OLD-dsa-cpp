// find element in nearly sorted array
#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define vi vector<int>
#define pb push_back
int solve (vi A, int X) {
    // return index of element in nearly sorted array
    int N = A.size();
    int low = 0, high = N-1;
    int mid;
    while (low <= high) {
        mid = low + (high - low)/2;
        if (A[mid] == X) return mid;
        if (mid-1 >= low && A[mid-1]==X) return mid-1;
        if (mid+1 <= high && A[mid+1]==X) return mid+1;
        if (X > A[mid]) low = mid+2;
        if (X < A[mid]) high = mid-2;
    }
    return -1;
}
int32_t main (){
    // compare X with mid - 1, mid, mid + 1
    vi A {10, 3, 40, 20, 50, 80, 70};
    int X = 3;
    cout << solve (A, X);
}
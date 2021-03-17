//
#include <bits/stdc++.h>
using namespace std;
#define int int64_t
#define vi vector<int>
#define pb push_back
// function to find minimum element index in Log2(N) time
int getMinElementIndex(vi A) {
    int N = A.size();
    int low = 0, high = N-1;
    while (low <= high) {
        if (low == high) return low;

        int mid = low + (high - low)/2;

        if (mid < high && A[mid+1] < A[mid]) return mid+1;

        if (low < mid && A[mid] < A[mid+1]) return mid;

        if (A[high] > A[mid]) {
            high = mid-1;
            continue;
        }

        if (A[low] < A[mid]) {
            low = mid+1;
            continue;
        }
    }
    return -1;
}
int binary_search(vi A,int low,int high,int X) {
    // cout << "low = " << low << " high = " << high << endl;
    if (low > high) return -1;
    int mid = low + (high - low)/2;
    if (A[mid] == X) return mid;
    if (X > A[mid]) return binary_search(A,mid+1,high,X);
    return binary_search(A,low,mid-1,X);
}
int32_t main () {
    vi A {11,12,15,18,2,5,6,8};
    int X = 5;
    int idx = getMinElementIndex(A);
    // cout << "Minimum element position = " << idx << endl;
    // check left side
    int left = binary_search(A,0,idx-1,X);
    // check right side
    // cout << "now calling right" << endl;
    int right = binary_search(A,idx,A.size()-1,X);
    // cout << "left = " << left << " right = " << right << endl;
    if (left == -1) cout << right;
    else cout << left;   
}

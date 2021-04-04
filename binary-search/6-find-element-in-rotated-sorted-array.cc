#include <bits/stdc++.h>
using namespace std;
#define int int64_t
#define vi vector<int>
#define pb push_back
int minElementIndex (vi A){
    int N = A.size();
    int low = 0, high = N-1;
    int ans = 0;
    while (low <= high) {
        if (low == high) {
            ans = low;
            break;
        }
        int mid = low + (high - low) / 2;
        if (mid < high && A[mid+1] < A[mid]){
            ans = mid+1;
            break;
        }
        if (mid > low && A[mid] < A[mid-1]){
            ans = mid;
            break;
        }
        if (A[high] > A[mid]) {
            high = mid-1;
            continue;
        }
        if (A[low] < A[mid]) {
            low = mid+1;
            continue;
        }   
    }
    return ans;
}
int findElementInRotatedArray(vi A,int X){
    int index = minElementIndex (A);
    return index;
}
int32_t main () {
    vi A {11,12,15,18,2,5,6,8};
    int X = 12;
    cout << findElementInRotatedArray(A,X);           
}

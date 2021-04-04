#include <bits/stdc++.h>
using namespace std;
#define int int64_t
#define vi vector<int>
#define pb push_back
int findElementInRotatedArray(vi A,int X){
    int low = 0, high = A.size()-1;
    while (low <= high) {
        int mid = low + (high - low)/2;
        if (A[mid] == X) return mid;

        if (A[low] < A[high]) { \
            // perform normal binary search
            if (A[mid] > X) high = mid-1;
            else low = mid+1;
        }
        else if (A[mid] < A[low]) {
            // 
            if (A[mid] < X && X <= A[high]) low = mid+1;
            else high = mid-1;
        }
        else {
            if (A[mid] > X && X >= A[low]) high = mid-1;
            else low = mid+1;
        }
    }
    return -1;
}
int32_t main () {
    vi A {11,12,15,18,2,5,6,8};
    int X = 12;
    cout << findElementInRotatedArray(A,X);           
}

#include <bits/stdc++.h>
using namespace std;
#define int int64_t
#define vi vector<int>
#define pb push_back
int minElementIndex (vi A){
    int low = 0, high = A.size()-1;
    while (low <= high) {
        if (low == high) return low;
        int mid = low + (high-low)/2;
        if (A[mid] < A[mid-1])
            return mid;
        if (A[mid+1] < A[mid])
            return mid+1;
        
    }
}
int findElementInRotatedArray(vi A,int X){
    int index = minElementIndex (A);
}
int32_t main () {
    vi A {11,12,15,18,2,5,6,8};
    int X = 12;
    cout << findElementInRotatedArray(A,X);           
}

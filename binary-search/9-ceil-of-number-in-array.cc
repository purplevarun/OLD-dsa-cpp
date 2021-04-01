#include <bits/stdc++.h>
using namespace std;
#define int int64_t
#define vi vector <int>
int solve (vi A, int X){
    int N = A.size ();
    int low = 0, high = N-1;
    int res;
    while (low <= high) {
        int mid = low + (high-low)/2;
        if (X == A[mid]) return X;
        if (X > A[mid]) {
            low = mid + 1;
        }
        if (X < A[mid]) {
            res = mid;
            high = mid - 1;
        }
    }
    return res;
}
int32_t main (){
    vi A {1,2,3,4,8,10,10,12,19};
    int X = 5;
    int Answer = 4; // index of 8 which is the ceil of 5
    if (solve (A,X) == Answer) 
        cout << "TC Passed" << endl;
    else 
        cout << "TC Failed" << endl;
}
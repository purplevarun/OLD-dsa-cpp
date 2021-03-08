/*
    Author : Varun Kedia - purplevarun@gmail.com
    https://practice.geeksforgeeks.org/problems/number-of-occurrence2259/1
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define null nullptr
#define vi vector <int>
#define pb push_back
#define all(x) x.begin(),x.end()
int32_t main () {
    // Solving in O(LogN) time
    vi A {2,4,10,10,10,18,20};
    int X = 10;
    int first = -1, last = -1, high, low, N = A.size();
    low = 0, high = N-1;
    while (low <= high) {
        int mid = low + (high - low)/2;
        if (X == A[mid]) {
            first = mid;
            high = mid-1;
        }
        else if (X < A[mid]) high = mid - 1;
        else if (X > A[mid]) low = mid + 1;
    }
    low = 0, high = N-1,last=first;
    while (low <= high) {
        int mid = low + (high-low)/2;
        if (X == A[mid]) {
            last = mid;
            low = mid+1;
        }
        else if (X < A[mid]) high = mid - 1;
        else if (X > A[mid]) low = mid + 1;
    }
    int ans = -1;
    if (first != -1) ans = last - first + 1;
    cout << ans;
}

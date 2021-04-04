/*
    Author : Varun Kedia - purplevarun@gmail.com
    https://practice.geeksforgeeks.org/problems/rotation4723/1
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define null nullptr
#define vi vector<int>
#define pb push_back
#define all(x) x.begin(), x.end()
int solve (vi A){
    int N = A.size();
    int low = 0, high = N-1;
    while (low <= high) {
        if (low == high) {
            return low;
        }
        int mid = low + (high - low) / 2;
        
        if (mid < high && A[mid+1] < A[mid]){
            return mid+1;
        }
        if (mid > low && A[mid] < A[mid-1]){
            return mid;
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
    return -1;
}
int32_t main()
{
    vi A{10, 12, 15, 2, 4, 6,8}; // Answer = 3
    // vi A{3,4,5,6,1,2}; // Answer = 4

    // find index of smallest element using BS
    cout << solve (A) << endl;
}
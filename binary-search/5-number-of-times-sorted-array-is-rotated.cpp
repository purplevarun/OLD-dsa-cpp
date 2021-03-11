/*
    Author : Varun Kedia - purplevarun@gmail.com
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define null nullptr
#define vi vector<int>
#define pb push_back
#define all(x) x.begin(), x.end()
int32_t main()
{
    vi A{8, 10, 12, 15, 2, 4, 6}; // Answer = 3
    // find index of smallest element using BS
    int N = A.size();
    int low = 0, high = N-1;
    int ans;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        
        int previous = (mid+N-1)%N;
        int next = (mid+1)%N;

        if (A[mid] <= A[previous] && A[mid] <= A[next]){
            ans = mid;
            break;
        }
        if (A[mid] > A[low]) {
            // means this part is sorted
            low = mid+1;
        }
        else if (A[mid] < A[high]) {
            // means this part is sorted
            high = mid-1;
        }
    }
    cout << ans;
}
/*
    binary search question 1

    https://practice.geeksforgeeks.org/problems/who-will-win-1587115621/1 --- this is good

    https://leetcode.com/problems/binary-search/ -- but this is better
*/
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
    int low = 0, high = N-1;
    int idx = -1;
    while (low <= high) {
        int mid = low + (high-low)/2; // prevents integer overflow
        if (A[mid] == target) {
            idx = mid;
            break;
        }
        else if (target < A[mid]){
            high = mid-1;
            continue;
        }
        else if (target > A[mid]){
            low = mid+1;
            continue;
        }
    }
    cout << idx;
}

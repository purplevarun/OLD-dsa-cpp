/*
    Author : Varun Kedia - purplevarun@gmail.com
    https://practice.geeksforgeeks.org/problems/first-and-last-occurrences-of-x3116/1
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define null nullptr
#define vi vector <int>
#define pb push_back
#define all(x) x.begin(),x.end()
int32_t main () {
    vi A {2,4,10,10,10,18,20}; // TC 1 Answer = 2,4
    int X = 10; // element to search
    // ----------------------------------------------
    int low = 0, high = A.size() - 1;
    int first = -1, last = -1;
    // finding first occurence
    while (low <= high) {
        int mid = low + (high - low)/2;
        if (X == A[mid]) {
            first = mid;
            high = mid-1;
        }
        else if (X < A[mid]) {
            high = mid-1;
        }
        else if (X > A[mid]) {
            low = mid+1;
        }
    }
    low = 0, high = A.size()-1;
    
    while (low <= high) {
        int mid = low + (high - low)/2;
        if (X == A[mid]) {
            last = mid;
            end = mid+1;
        }
        else if (X < A[mid]) {
            high = mid-1;
        }
        else if (X > A[mid]) {
            low = mid+1;
        }
    }
    cout << first << ", " << last << endl;
    // ----------------------------------------------
    // BRUTE FORCE O(N)
    // cout << lower_bound(all(A),10) - A.begin() << ", " << upper_bound(all(A),10) - A.begin() << endl;
}
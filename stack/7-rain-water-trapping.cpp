/*
    Stack ? Not really
    https://practice.geeksforgeeks.org/problems/trapping-rain-water-1587115621/1
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define null nullptr
#define vi vector <int>
#define pb push_back
#define all(x) x.begin(),x.end()
int32_t main () {
    // vi A {3,0,0,2,0,4}; // TC 1 Answer = 10
    // vi A {0,1,0,2,1,0,1,3,2,1,2,1}; // TC 2 Answer = 6
    vi A {7,4,0,9}; // TC 3 Answer = 10
    int N = A.size ();
    // --------------------------------
    vi Left(N); // to store max element in left array
    vi Right(N); // to store max element in right array
    vi Water(N); // to store water above each building
    Left[0] = A[0];
    for (int i=1;i<N;i++) {
        Left[i] = max (Left[i-1],A[i]);
    }
    Right[N-1] = A[N-1];
    for (int i=N-2;i>=0;i--) {
        Right[i] = max (Right[i+1],A[i]);
    }
    for (int i=0;i<N;i++) {
        Water[i] = min (Left[i],Right[i])-A[i];
    }
    cout << accumulate(all(Water),0);
} 
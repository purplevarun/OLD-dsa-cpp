#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define null nullptr
#define vi vector <int>
#define pb push_back
#define all(x) x.begin(),x.end()
int32_t main () {
    // given : height of bars
    // vi A {6,2,5,4,5,1,6}; // TC 1 Answer = 12
    vi A {1,2,3,4,5}; // TC 2 Answer = 9
    int N = A.size();
    // -------------------------
    vi NSR; // to store index of nearest smallest to right
    vi NSL; // to store index of nearest smallest to left
    
    // -------------------------
    // BRUTE FORCE
    // int maxArea=0;
    // for (int i=0;i<N;i++) {
    //     int count = 1;
    //     int height = A[i];
    //     int j = i-1; // stack alert
    //     while (j>=0 && A[j]>=height){count++,j--;}
    //     j=i+1;
    //     while (j<N && A[j]>=height){count++,j++;}
    //     int area = count*height;
    //     // cout << "A[i] = " << A[i] << " and Area = " << area << endl;
    //     maxArea = max (maxArea,area);
    // }    
    // cout << maxArea << endl;
}
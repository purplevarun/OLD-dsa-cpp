/*
    Nearest Smaller to Left
    Stack Question 3
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define null nullptr
#define vi vector <int>
#define pb push_back
#define all(x) x.begin(),x.end()
int32_t main () {
    // vi A {4,5,2,10,8}; // TC 1 Answer = {-1,4,-1,2,2}
    // vi A {1,2,3,4,5}; // TC 2 Answer = {-1,1,2,3,4}
    vi A {1,1,1,1};
    int N = A.size ();
    vi Result;
    //  ----------------------
    stack <int> s;
    for (int i=0;i<N;i++) {
        if (s.empty() == true) Result.pb(-1);
        else {
            if (s.top() < A[i]) Result.pb(s.top());
            else {
                while (s.empty()==false && s.top() >= A[i]) {
                    s.pop ();
                }
                if (s.empty()) Result.pb(-1);
                else Result.pb(s.top());
            }
        }
        s.push(A[i]);
    }
    //  ----------------------
    // BRUTE FORCE
    // for (int i=0;i<N;i++) {
    //     int temp = -1;
    //     for (int j=0;j<i;j++) {
    //         if (A[j] < A[i]) {
    //             temp = A[j];
    //         }
    //     }
    //     Result.pb(temp);
    // }
    for (int i:Result) cout << i << " " ;
}
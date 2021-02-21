/*
    Nearest Smaller to Right
    Stack Question 4
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define null nullptr
#define vi vector <int>
#define pb push_back
#define all(x) x.begin(),x.end()
int32_t main () {
    vi A {4,5,2,10,8}; // TC 1 Answer = {2,2,-1,8,-1}
    int N = A.size ();
    vi Result;
    // --------------------------------------
    stack <int> s;
    for (int i=N-1;i>=0;i--) {
        if (s.empty()) Result.pb(-1);
        else {
            if (s.top() < A[i]) Result.pb(s.top());
            else {
                while (s.empty() == false && s.top() >= A[i])
                    s.pop();
                if (s.empty ()) Result.pb(-1);
                else Result.pb(s.top());
            }
        }
        s.push(A[i]);
    }
    reverse (all(Result));
    // --------------------------------------
    // BRUTE FORCE
    // for (int i=0;i<N;i++) {
    //     int temp = -1;
    //     for (int j=i+1;j<N;j++) {
    //         if (A[j]<A[i]) {
    //             temp = A[j];
    //             break;
    //         }
    //     }
    //     Result.pb(temp);
    // }
    for(int i:Result) cout << i << " ";
}
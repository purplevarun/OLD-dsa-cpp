/*
    Nearest Greater to Left
    Stack Question 2
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define null nullptr
#define vi vector <int>
#define pb push_back
#define all(x) x.begin(),x.end()
void print (vi X){
    if (X.size()==0) return;
    for (int i=0;i<X.size()-1;i++)
        cout << X[i] << ", ";
    cout << X[X.size()-1] << endl;
}
void print (stack <int> S){
    // cout << "Top = " << S.top() << endl;
    while (S.empty() == false) {
        cout << S.top () << endl;
        S.pop();
    }
}
signed main () {
    // vi A {1,3,2,4}; // TC 1 Answer = {-1,-1,3,-1}
    vi A {1,3,0,0,1,2,4}; // TC 2 Answer = {-1,-1,3,3,3,3,-1}
    // vi A {3,2,1}; // TC 3 Answer = {-1,3,2}
    // vi A {17,18,5,4,6,1}; // TC 4 Answer = {-1,-1,18,5,18,6}
    int N = A.size();
    vi Result;
    // -------------------------------------
    stack <int> s;
    for (int i=0;i<N;i++) {
        if (s.empty()) {
            Result.pb(-1);
        }
        else {
            if (s.top() > A[i]){
                Result.pb(s.top());
            }
            else {
                while (s.empty()==false && s.top() <= A[i]){
                    s.pop();
                }
                if (s.empty()) Result.pb(-1);
                else Result.pb(s.top());
            }
        }
        s.push(A[i]);

    }
    print (Result);
    // -------------------------------------
    // BRUTE FORCE
    // for (int i=0;i<N;i++) {
    //     int key = A [i];
    //     bool check = false;
    //     int pos;
    //     for (int j=0;j<i;j++) { // stack alert
    //         if (A[j]>key) {
    //             check = true;
    //             pos = j;
    //         }
    //     }
    //     if (check) Result.push_back (A[pos]);
    //     else Result.push_back (-1); 
    // }
    // print (Result);
}
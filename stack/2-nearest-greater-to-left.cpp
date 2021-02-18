/*
    Nearest Greater to Left
    Stack Question 2
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define null nullptr
#define vi vector <int>
#define all(x) x.begin(),x.end()
void print (vi X){
    if (X.size()==0) return;
    for (int i=0;i<X.size()-1;i++)
        cout << X[i] << ", ";
    cout << X[X.size()-1] << endl;
}
signed main () {
    // vi A {1,3,2,4}; // TC 1 Answer = {-1,-1,3,-1}
    // vi A {1,3,0,0,1,2,4}; // TC 2 Answer = {-1,-1,3,3,3,3,-1}
    // vi A {3,2,1}; // TC 3 Answer = {-1,3,2}
    vi A {17,18,5,4,6,1}; // TC 4 Answer = {-1,-1,18,5,18,6}
    int N = A.size();
    vi Result;
    // -------------------------------------
    // BRUTE FORCE
    for (int i=0;i<N;i++) {
        int key = A [i];
        bool check = false;
        int pos;
        for (int j=0;j<i;j++) {
            if (A[j]>key) {
                check = true;
                pos = j;
            }
        }
        if (check) Result.push_back (A[pos]);
        else Result.push_back (-1); 
    }
    print (Result);
}
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define null nullptr
#define vi vector <int>
void print (vi X){
    for (int i=0;i<X.size()-1;i++)
        cout << X[i] << ", ";
    cout << X[X.size()-1] << endl;
}
signed main () {
    // Nearest greatest to the right
    vi A {1,3,2,4}; // TC 1 Answer = {3,4,4,-1}
    // vi A {1,3,0,0,1,2,4}; // TC 2 Answer = {3,4,1,1,2,4,-1}
    int N = A.size();
    vi Result;
    //-------------------------
    // Brute Force
    for (int i=0;i<N;i++) {
        int key = A[i];
        bool check = false;
        for (int j=i+1;j<N;j++) {
            int X = A[j];
            if (X > key) {
                Result.push_back(X);
                check = true;
                break;
            }
        }
        if (!check) Result.push_back(-1);
    }
    print (Result);
}
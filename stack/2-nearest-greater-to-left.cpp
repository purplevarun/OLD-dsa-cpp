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
    vi A {1,3,2,4}; // TC 1 Answer = {-1,-1,3,-1}
}
#include <bits/stdc++.h>
using namespace std;
#define int int64_t
#define vi vector <int>
int32_t main (){
    vi A {1,2,3,4,8,10,10,12,19};
    int X = 5;
    int Answer = 8;
    if (solve (A,X) == Answer) cout << "TC Passed" << endl;
    else cout << "TC Failed" << endl;
}
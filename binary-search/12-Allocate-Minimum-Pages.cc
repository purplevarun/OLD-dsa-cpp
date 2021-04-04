#include <bits/stdc++.h>
using namespace std;
#define int int64_t
#define vi vector <int>
int solve (vi A, int K) {
    int low = *max_element(A.begin(),A.end());
    int high = accumulate(A.begin(),A.end(),0);
    int result = -1;
}
int32_t main (){
    vi A {10,20,30,40};
    int K = 2;
}
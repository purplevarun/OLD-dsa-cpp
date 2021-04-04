#include <bits/stdc++.h>
using namespace std;
#define int int64_t
#define vi vector <int>
bool isValid (vi A, int low, int high,int K) {
    int students = 1;
    int sum = 0;
    
}
int solve (vi A, int K) {
    if (K > A.size())
        return -1;
    int low = *max_element(A.begin(),A.end());
    int high = accumulate(A.begin(),A.end(),0);
    int result = -1;
    while (low <= high) {
        int mid = low + (high-low)/2;
        if (isValid ()){
            result = mid;
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
}
int32_t main (){
    vi A {10,20,30,40};
    int K = 2;
}
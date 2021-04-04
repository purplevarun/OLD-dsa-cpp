#include <bits/stdc++.h>
using namespace std;
#define int int64_t
#define vi vector <int>
bool isValid (vi A, int K, int Max) {
    int students = 1;
    int sum = 0;
    for (int i=0;i<A.size();i++){
        sum += A[i];
        if (sum > Max){
            students ++;
            sum = A[i];
        }
        if (students > K)
            return false;
    }
    return true;
}
int solve (vi A, int K) {
    if (K > A.size())
        return -1;
    int low = *max_element(A.begin(),A.end());
    int high = accumulate(A.begin(),A.end(),0);
    int result = -1;
    while (low <= high) {
        int mid = low + (high-low)/2;
        if (isValid (A, K, mid)){
            result = mid;
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return result;
}
int32_t main (){
    vi A {10,20,30,40};
    int K = 2;
    cout << solve (A,K) << endl;
}
#include <bits/stdc++.h>
using namespace std;
#define int int64_t
#define vc vector <char>
char solve (vc A, char X) {
    int low = 0, high = A.size() - 1;
    char res;
    while (low <= high){
        int mid = low+high; mid/=2;
        if (X == A[mid]) {
            low = mid + 1;
        }
        if (X > A[mid]) {
            low = mid + 1;
        }
        if (X < A[mid]) {
            res = A[mid];
            high = mid - 1;
        }
    }
    return res;
}
int32_t main (){
    vc A {'a','c','f','h'};
    char X = 'f';
    cout << solve (A,X) << endl;
}
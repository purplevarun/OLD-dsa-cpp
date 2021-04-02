// find Nth Ugly number using DP
#include <bits/stdc++.h>
using namespace std;
#define int int64_t
#define vi vector <int>
int Ugly (int N) {
    int ugly[n];
    int i2 = 0, i3 = 0, i5 = 0;
    int nextugly = 1;
    int next2 = 2, next3 = 3, next5 = 5;
    ugly[0] = 1;
    for (int i = 1; i < n; i++) {
        nextugly = min(next2, min(next3, next5));
        ugly[i] = nextugly;
        if (nextugly == next2) {
            i2++;
            next2 = ugly[i2] * 2;
        }
        if (nextugly == next3) {
            i3++;
            next3 = ugly[i3] * 3;
        }
        if (nextugly == next5) {
            i5++;
            next5 = ugly[i5] * 5;
        }
    }
    return nextugly;    
}
int32_t main (){
    int N = 150; // 

}
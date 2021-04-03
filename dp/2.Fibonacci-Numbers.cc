// Nth Fibonacci Number
// https://practice.geeksforgeeks.org/problems/nth-fibonacci-number1335/1
#include <bits/stdc++.h>
using namespace std;
#define int int64_t
#define vi vector <int>
map <int,int> dp;
int fibo (int N) {
    if (dp.find(N)!=dp.end())
        return dp[N];
    if (N<=1){
        return N;
    }
    dp[N] = fibo(N-1) + fibo(N-2);
    return dp[N];
}
int32_t main (){
    int N = 50;
    // cout << fibo (N) << endl;    
    bigint a(10);
    bigint b(5);
    bigint c = a.substract(b);
    cout << c.print() << endl;
    
}
/*
    Minimum element in stack in O(1) space
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define null nullptr
#define vi vector <int>
#define pb push_back
#define all(x) x.begin(),x.end()
int minElement;
int getMin (stack<int> &s) {
    if (s.empty()) return -1;
    else return minElement;
}
void push (stack<int> &s,int x) {
    if (s.empty()) {
        s.push(x);
        minElement = x;
    }
    else {
        if (x >= minElement)
            s.push (x);
        else {
            s.push (2*x - minElement);
            minElement = x;
        }
    }
}
int32_t main () {
    vi A {}; // TC 1
    stack <int> s;
    for (int i:A) push (s,i);
    cout << getMin (s);
}
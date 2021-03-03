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
int top (stack<int> &s) {
    if (s.empty()) return -1;
    if (s.top() >= minElement) return s.top();
    else return minElement;
}
int pop (stack<int> &s) {
    if (s.empty()) return -1;
    if (s.top() >= minElement){
        int temp = s.top ();
        s.pop();
        return temp;
    }
    else {
        int flag = s.top();
        s.pop();
        int prevMin = minElement;
        minElement = 2*minElement - flag;
        return prevMin;
    }
}
int32_t main () {
    vi A {18, 19, 29, 15, 16}; // TC 1
    stack <int> s;
    for (int i:A) {
        push (s,i);
    }
    pop(s);
    pop(s);
    cout << getMin(s);
    
}
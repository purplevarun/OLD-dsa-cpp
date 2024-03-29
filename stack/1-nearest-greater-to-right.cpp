/* 
    Nearest greatest element to the right
    // Next Largest Element
    ~ Varun Kedia
    Stack Question 1
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
    vi A {1,3,2,4}; // TC 1 Answer = {3,4,4,-1}
    // vi A {1,3,0,0,1,2,4}; // TC 2 Answer = {3,4,1,1,2,4,-1}
    // vi A {3,2,1}; // TC 3 Answer = {-1,-1,-1}
    // vi A {17,18,5,4,6,1}; // TC 4 Answer = {18,-1,6,6,-1,-1}
    int N = A.size();
    vi Result;
    //-------------------------
    stack <int> s;
    for (int i=N-1;i>=0;i--) {
        if (s.empty()) {
            Result.push_back(-1);
        }
        else 
        {
            if (s.top() > A[i]) {
                Result.push_back(s.top());
            }
            else{
                while (!s.empty() && s.top() <= A[i]){
                    s.pop();
                }
                if (s.empty()) Result.push_back(-1);
                else Result.push_back(s.top());
            }
        }
        s.push(A[i]);
    }
    reverse (all(Result));
    print (Result);
    //-------------------------
    // Brute Force
    // for (int i=0;i<N;i++) {
    //     int key = A[i];
    //     bool check = false;
    //     for (int j=i+1;j<N;j++) { // stack alert
    //         int X = A[j];
    //         if (X > key) {
    //             Result.push_back(X);
    //             check = true;
    //             break;
    //         }
    //     }
    //     if (!check) Result.push_back(-1);
    // }
    // print (Result);
}
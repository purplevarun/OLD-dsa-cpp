/*
    Stack Problem 7
    Maximum Area formed by 1's in an binary Matrix
    https://practice.geeksforgeeks.org/problems/max-rectangle/1
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define null nullptr
#define vi vector <int>
#define pb push_back
#define all(x) x.begin(),x.end()
int MAH (vi A){
    int N = A.size();
    // -------------------------
    vi Right(N); // to store index of nearest smallest to right
    vi Left(N); // to store index of nearest smallest to left
    vi Width(N); // to store eligible widths of each bar
    vi Area(N); // to store area of each bar
    stack <pair<int,int>> s;
    int pseudo_index;
    // finding NSL indexes
    pseudo_index = -1;
    for (int i=0;i<N;i++) {
        if (s.empty()) {
            Left[i] = pseudo_index;
        }
        else {
            if (s.top().first < A[i]) {
                Left[i] = s.top().second;
            }
            else {
                while (s.empty()==false && s.top().first >= A[i]) {
                    s.pop();
                }
                if (s.empty()) Left[i] = pseudo_index;
                else Left[i] = s.top().second;
            }
        }
        s.push({A[i],i});
    }
    while (!s.empty()) s.pop(); // emptying stack
    // finding NSR indexes
    pseudo_index = N;
    for (int i=N-1;i>=0;i--){
        if (s.empty())
            Right[i] = pseudo_index;
        else {
            if (s.top().first < A[i])
                Right[i] = s.top().second;
            else {
                while (s.empty()==false && s.top().first >= A[i])
                    s.pop();
                if (s.empty()) Right[i] = pseudo_index;
                else Right[i] = s.top().second;
            }    
        }
        s.push({A[i],i});
    }
    for (int i=0;i<N;i++){
        Width[i] = Right[i] - Left[i] - 1;
        Area[i] = Width[i] * A[i];
    }
    return *max_element(all(Area));
}
int32_t main () {
    vector<vi> A {{0,1,1,0},{1,1,1,1},{1,1,1,1},{1,1,0,0}}; // TC 1 Answer = 8
    for (auto i:A){
        cout << MAH(i) << endl;
    }
}
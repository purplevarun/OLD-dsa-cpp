/*
    Stack Problem 6
    Maximum Area Histogram
    https://practice.geeksforgeeks.org/problems/maximum-rectangular-area-in-a-histogram-1587115620/1
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define null nullptr
#define vi vector <int>
#define pb push_back
#define all(x) x.begin(),x.end()
int32_t main () {
    // given : height of bars
    vi A {6,2,5,4,5,1,6}; // TC 1 Answer = 12
    // vi A {1,2,3,4,5}; // TC 2 Answer = 9
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
    cout << *max_element(all(Area));
    // -------------------------
    // BRUTE FORCE
    // int maxArea=0;
    // for (int i=0;i<N;i++) {
    //     int count = 1;
    //     int height = A[i];
    //     int j = i-1; // stack alert
    //     while (j>=0 && A[j]>=height){count++,j--;}
    //     j=i+1; // stack alert
    //     while (j<N && A[j]>=height){count++,j++;}
    //     int area = count*height;
    //     // cout << "A[i] = " << A[i] << " and Area = " << area << endl;
    //     maxArea = max (maxArea,area);
    // }    
    // cout << maxArea << endl;
}
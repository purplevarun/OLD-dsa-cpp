#include <bits/stdc++.h>
using namespace std;
#define int int64_t
#define vi vector <int>
pair <int,int> search (vector<vi> A,int X){
    int N = A.size(), M = A[0].size();
    int i = 0, j = M-1;
    while (i>=0 && i<N && j>=0 && j<M){
        if (A[i][j] == X)
            return make_pair(i,j);
        if (A[i][j] > X){
            j--;
        }
        if (A[i][j] < X){
            i++;
        }
    }
    return make_pair(-1,-1);
}
int32_t main (){
    vector <vi> A {
        {10,20,30,40},
        {15,25,35,45},
        {27,29,37,48},
        {32,33,39,50}
    };
    int X = 39;
    pair<int,int> ans = search(A,X);
    cout << ans.first << ", " << ans.second << endl;
}
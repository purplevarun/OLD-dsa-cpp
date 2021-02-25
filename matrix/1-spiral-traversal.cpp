#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define null nullptr
#define vi vector <int>
#define vivi vector <vi>
#define pb push_back
#define all(x) x.begin(),x.end()
vi spiral (vivi A) {
    int rows = A.size();
    int cols = A[0].size();
    vi result;
    int x = 0, y = 0;
    while (x < rows && y < cols) {
        // adding first row
        for (int i=y;i<cols;i++)
            result.pb(A[x][i]);
        x++;
        // adding last column
        for (int i=x;i<rows;i++)
            result.pb(A[i][cols-1]);
        cols--;
        // adding last row
        if (x < rows) {
            for (int i=cols-1;i>=y;i--)
                result.pb(A[rows-1][i]);
            rows--;
        }
        // adding first column
        if (y < cols) {
            for (int i=rows-1;i>=x;i--)
                result.pb(A[i][y]);
            y++;
        }
    }
    return result;
}
int32_t main () {
    vivi A {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    for (auto i:A) {
        for (auto j:i) cout << j << " ";
        cout << endl;
    }
    cout << "Answer = ";
    vi result = spiral (A);
    for (auto i:result) cout << i << " ";
}
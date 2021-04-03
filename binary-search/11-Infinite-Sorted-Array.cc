// varun kedia
#include <bits/stdc++.h>
using namespace std;
#define int int64_t
#define vi vector <int>
#define vii vector<vector<int>>
#define pi pair<int,int>
#define all(x) x.begin(),x.end()
#define readvi(v,n) vi v(n);for(auto &i:v)cin>>i;
#define debugvi(v) for(auto i:v) cout<<i<<",";cout<<endl;
#define pb push_back
#define mp make_pair
#define um unordered_map
#define vipi vector<pair<int,int>>
#ifdef  VARUN_JUDGE
#define DEBUG true
#else 
#define DEBUG false
#endif
// -----------------------------------
void solve () {
    
}
// -----------------------------------
int32_t main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    clock_t START=clock();
    // --------------
    int T = 1;
    // cin >> T;
    while (T--){
    solve ();
    }
    // --------------
    clock_t END=clock();
    if(DEBUG){
    double TIME=double(END-START);
    TIME/=double(CLOCKS_PER_SEC);
    cerr << "EXECUTION TIME = ";
    cerr<<fixed<<setprecision(4)<<TIME<<endl;
    }
}
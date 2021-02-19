#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define null nullptr
#define vs vector <string>
#define pb push_back
#define all(x) x.begin(),x.end()
map <string,bool> dp;
bool canWord (string S, vs A) {
    if (dp.find (S) != dp.end ()) return dp[S];
    if (S == "") return true;
    for (string i : A) {
        if (S.rfind(i,0)==0) { // if S starts with i
            if (canWord(S.substr(i.length()),A)) {
                dp[S] = true;
                return true;
            }
        }
    }
    dp[S] = false;
    return false;
}
int32_t main () {
    // TC 1 - Yes
    // string S = "abcdef";
    // vs A {"ab","abc","cd","def","abcd"}; 
    // TC 2 - No
    string S = "eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeef";
    vs A {"e","eeee","eeeeeeee","eeeeee"};
    if (canWord(S,A)) cout << "Yes";
    else cout << "No";
}
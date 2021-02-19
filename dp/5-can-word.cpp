#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define null nullptr
#define vs vector <string>
#define pb push_back
#define all(x) x.begin(),x.end()
bool canWord (string S, vs A) {
    if (S == "") return true;
    for (string i : A) {
        if (S.rfind(i,0)==0) { // if S starts with i
            if (canWord(S.substr(i.length()),A)) return true;
        }
    }
    return false;
}
int32_t main () {
    // TC 1 - Yes
    // string S = "abcdef";
    // vs A {"ab","abc","cd","def","abcd"}; 
    // TC 2 - No
    string S = "eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeef";
    vs A {"e","eeee","eeeeeeee","eeeeee"};
    if (canWord(S,A)) cout << "Yes";
    else cout << "No";
}
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define null nullptr
#define vi vector <int>
#define pb push_back
#define all(x) x.begin(),x.end()
class node {
    public:
    int value;
    node *next;
    node (int value){
        this -> value = value;
        this -> next = null;
    }
};
int32_t main () {
    node* X = new node (5);
    cout << X->next << endl;
}
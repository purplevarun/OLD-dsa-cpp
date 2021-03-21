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
    node* A = new node (1);
    node* B = new node (1);
    node* C = new node (1);
    node* D = new node (1);
    A -> next = B;
    B -> next = C;
    C -> next = D;
    D -> next = B;
    set <node*> seen;
    bool loop = false;
    while (A != null) {
        if (seen.find(A)!=seen.end()){
            loop = true;
            break;
        }
        seen.insert(A);
        A = A -> next;
    }
    if (loop) cout << "There is loop";
    else cout << "No loop";
}


#include <bits/stdc++.h>
#define null nullptr
using namespace std;
class node {
    public:
    int value;
    node *left,*right;
    public: node(int value){
        this->value = value;
        this->left = this->right = null;
    }
};
int main () {
    node* root = new node(5);
    cout << root << endl;
    cout << root->value << endl;
    cout << root->left << endl;
}
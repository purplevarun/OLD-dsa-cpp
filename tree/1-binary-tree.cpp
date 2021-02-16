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
void preorder (node* root){
    if (root == null) return;
    cout << root -> value << endl;
    preorder (root -> left);
    preorder (root -> right);
}
int main () {
    node* root = null;
    root = new node (3);
    root -> left = new node (5);
    root -> right = new node (2);
    root -> right -> left = new node (10);
    preorder (root);
}
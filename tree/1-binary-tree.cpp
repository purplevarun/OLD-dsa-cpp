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
    cout << root -> value << " ";
    preorder (root -> left);
    preorder (root -> right);
}
void inorder (node* root){
    if (root == null) return;
    inorder (root -> left);
    cout << root -> value << " ";
    inorder (root -> right);
}
node* insert (node* root, int x) {
    if (root == null) {
        root = new node (x);
    }
    else {
        queue <node*> q;
        q.push (root);
        while (q.empty() == false) {
            node* temp = q.front ();
            q.pop ();
            if (temp -> left == null) {
                temp -> left = new node (x);
                break;
            }
            else q.push (temp -> left);
            if (temp -> right == null) {
                temp -> right = new node (x);
                break;
            }
            else q.push (temp -> right);
        }
    }
    return root;
}
int main () {
    node* root = null;
    // root = new node (3);
    // root -> left = new node (5);
    // root -> right = new node (2);
    // root -> right -> left = new node (10);
    for (int i = 1;i<=7;i++) root = insert(root,i);
    preorder (root);
    cout << '\n' << endl;
    inorder (root);
}
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
    else if (root -> value > x) root -> left = insert (root -> left, x);
    else root -> right = insert (root -> right, x);
    return root;
}
int height (node* root) {
    if (root == null) return 0;
    return 1 + max (height(root -> left),height(root -> right));
}
void thisLevel (node* root, int L) {
    if (L == 1) {
        if (root -> left == null && root -> right == null) cout << root -> value << " L-" << " R-" << endl;
        else if (root -> left == null) cout << root -> value << " L-" << " R" << root->right->value <<endl;
        else if (root -> right == null) cout << root -> value << " L" << root->left->value << " R-" << endl;
        else cout << root -> value << " L"<< root->left->value << " R" << root->right->value << endl;
    }
    else{
        thisLevel(root -> left, L-1);
        thisLevel(root -> right, L-1);
    }
}
void display (node* root) {
    int h = height (root);
    for (int i=1;i<=h;i++) {
        thisLevel(root,i);
    }
}
int main () {
    node* root;
    root = insert (root,5);
    root = insert (root,3);
    root = insert (root,7);
    root = insert (root,4);
    display (root);
}
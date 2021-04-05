#include <bits/stdc++.h>
using namespace std;
struct Node {
	Node *left;
	Node *right;
};
void insert (int N, Node* head) {
	Node *curr = head;
	for (int i=31;i>=0;i--){
		int b = (N>>i)&1;
		if (b == 0){
			if (curr->left == nullptr){
				curr->left = new Node();
			}
			curr = curr->left;
		}
		else {
			if (curr->right == nullptr){
				curr->right = new Node();
			}
			curr = curr->right;
		}
	}
}
int findMaxXorPair(Node* head, int A[],int N){
	
	return 0;
}
int32_t main (){
	cout << "hello world" << endl;
}

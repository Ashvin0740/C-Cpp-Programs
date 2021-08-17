#include<iostream>
using namespace std;

class node{
public:
	int data;
	node*left;
	node*right;

	node(int d){
		data = d;
		left =NULL;
		right = NULL;
	}
};
node * buildTree() {
	int d;
	cin>>d;
	if(d == -1){
		return NULL;
	}
	node * root = new node(d);
	root->left = buildTree();
	root->right = buildTree();
	return root;
}
void printPost(node * root){
	if(root == NULL){
		return;
	}
	// left root right
	printPost(root->left);
	printPost(root->right);
    	cout << root->data<<" ";
}

int main() {
	node* root = buildTree();


	printPost(root);

	return 0;
}
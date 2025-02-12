#include<iostream>
#include<queue>
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

int Sum(node* root){
    if(root == NULL) {
        return 0;
    }
    return root->data + Sum(root->left)+Sum(root->right);
} 
int Count(node* root){
    if(root == NULL) {
        return 0;
    }
    return 1 + Count(root->left)+Count(root->right);
}
int main() {
	node* root = buildTree();
	cout<< Sum(root);
    cout<<endl;
    cout<< Count(root);

	return 0;
}
#include<iostream>
#include<queue>
#include<vector>
#include<map>
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
void traverseTree(node*root, int d, map<int,vector<int>> &m){
    if(root == NULL) {
        return; 
    }
    m[d].push_back(root->data);
    traverseTree(root->left,d-1,m);
    traverseTree(root->right,d+1,m);
}
void verticalOrderPrint(node*root){
    map<int,vector<int>> m;
    int d =0;
    traverseTree(root, d, m);

    for(auto p:m){
        int key = p.first;
        vector<int> line = p.second;

        for(auto data : line){
            cout << data << " ";
        }
        cout << endl;
    }
    return;
}
int main() {
	// node* root = buildTree();
	// Bsf(root);
    // Pair f = maxSubSetSum(root);
    // cout<<"Max Sum : "<< max(f.inc,f.exc);
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
        root->left->right = new node(5);

        root->right->left = new node(6);
        root->right->right = new node(7);
        root->right->left->right = new node(8);
        root->right->right->right = new node(9);
verticalOrderPrint(root);

	return 0;
}
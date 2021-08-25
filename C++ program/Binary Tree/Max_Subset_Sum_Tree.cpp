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
void Bsf(node * root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node*f = q.front();
    if(f == NULL){
        cout<< endl;
        q.pop();
        if(!q.empty()){
            q.push(NULL);
        }
    }else{
        cout<<f->data<<",";
        q.pop();

        if(f->left){
            q.push(f->left);
        }
        if(f->right){
            q.push(f->right);
        }
    }
}
return;
}

class Pair{
    public:
        int inc;
        int exc;
};
Pair maxSubSetSum(node*root) {
    Pair f;
    if(root == NULL){
        f.inc = f.exc =0;
        return f;
    }
    Pair left = maxSubSetSum(root->left);
    Pair right = maxSubSetSum(root->right);

    f.inc = root->data + left.exc +right.exc;
    f.exc = max(left.inc,left.exc) + max(right.inc, right.exc);
    return f;


}
int main() {
	node* root = buildTree();
	Bsf(root);
    Pair f = maxSubSetSum(root);
    cout<<"Max Sum : "<< max(f.inc,f.exc);
	return 0;
}
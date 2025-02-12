#include <iostream>
#include<queue>
using namespace std;

class node{
    public:
        int data;
        node*left;
        node*right;
        node(int d){
            data = d;
            left = NULL;
            right = NULL;
        }
};

//Accepts the old root node & data and returns the new root node 
node* insertInBST(node *root,int data){
    //Base Case
    if(root==NULL){
        return new node(data);
    }
    //Rec Case - Insert in the Subtree and Update Pointers
    if(data<=root->data){
        root->left = insertInBST(root->left,data);
    }
    else{
        root->right = insertInBST(root->right,data);
    }
    return root;
}
bool SearchNode(node*root, int data){
    if(root == NULL){
        return false;
    }
    if(root->data == data){
        return data;
    }
    if(data<=root->data){
        return SearchNode(root->left,data);
    }else{
        return SearchNode(root->right,data);
    }
}
node* build(){
    //Read a list of numbers till -1 and also these numbers will be inserted into BST
    int d;
    cin>>d;

    node*root = NULL;

    while(d!=-1){
        root = insertInBST(root,d);
        cin>>d;
    }
    return root;
}
//Print the BST Level By Level
void bfs(node *root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* f = q.front();
        if(f==NULL){
            cout<<endl;
            q.pop();
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
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
//Inorder Print
void inorder(node*root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<",";
    inorder(root->right);
}

int main(){ 
    node*root = build();
    cout<<endl;
    bfs(root);
    cout<< "ans :";
    inorder(root);
    cout<<endl;
    cout<<"Enter Number:";
    int s;
    cin>>s;
    cout<<"The Number you search is ";
    if(SearchNode(root,s)){
        cout<<"present";
    }else{
        cout<<"Not present";
    }
return 0;
}












#include<bits/stdc++.h>
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
class LinkedList{
    public:
        node*head;
        node*tail;
};

LinkedList flatten(node*root){
    LinkedList l;

    if(root==NULL){
        l.head = l.tail = NULL;
        return l;
    }
    // Leaf Node
    if(root->left == NULL && root->right==NULL){
        l.head = l.tail = root;
        return l;
    }
    // Left is Not NULL
    if(root->left!=NULL && root->right==NULL){
        LinkedList leftLL = flatten(root->left);
        leftLL.tail->right = root;

        l.head = leftLL.head;
        l.tail = root;
        return l;
    }
    //Right is Not NULL
    if(root->left==NULL && root->right!=NULL){
        LinkedList rightLL = flatten(root->right);
        root->right = rightLL.head;

        l.head = root;
        l.tail  = rightLL.tail;
        return l;
    }
    //Both Sides are not NULL
    LinkedList leftLL = flatten(root->left);
    LinkedList rightLL = flatten(root->right);

    leftLL.tail->right = root;
    root->right = rightLL.head;

    l.head = leftLL.head;
    l.tail = rightLL.tail;
    return l;

}

int main(){ 
    node*root = build();
    inorder(root);
    cout<<endl;
    bfs(root);
    cout<<endl;
    
    LinkedList l = flatten(root);
    node*temp = l.head;

    while(temp!=NULL){
        cout<< temp->data <<" --> ";
        temp = temp->right;
    }
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;

    
return 0;
}











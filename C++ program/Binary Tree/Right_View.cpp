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
void printRightview(node*root, int level, int &maxlevel)
{
    if(root == NULL){
        return;
    }
    if(maxlevel<level){
        cout<< root->data<< " ";
        maxlevel = level;
    }
    printRightview(root->right,level+1,maxlevel);
    printRightview(root->left,level+1,maxlevel);
}
int main(){ 
   node*root = NULL;
   cin>> root;
   cout<<root <<endl;
   int maxlevel = -1;
   printRightview(root,0,maxlevel);
return 0;
}











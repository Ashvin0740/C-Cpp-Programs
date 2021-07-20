#include<iostream>
using namespace std;

class node{
public:
    int data;
    node*next;

    node(int d){
        data = d;
        next = NULL;
    }
};
void insert(node*&head,int data){
    node* n = new node(data);
    node* temp = head;
    n->next = head;

    if(temp != NULL){
        while(temp->next != head){
            temp = temp ->next;
        }
        temp ->next = n;
    }else{
        n->next = n;
    }
    head = n;  
}
void print(node*head){
    node*temp = head;
    while(temp->next!=head){
        cout<<temp->data<<" ";
        temp = temp->next;
    }

    cout<<temp ->data<<endl;
    cout<<endl;
    return;
}

//delete the node 

node* getnode(node*head, int data){
    node*temp = head;
    while(temp->next !=head){
        if(temp->data == data){
            return temp;
        }
        temp = temp->next;
    }
    if(temp->data == data){
        return temp;
    }
    return NULL;
}

void deleteNode(node*&head, int data){
    node*del = getnode(head,data);
    if(del==NULL){
        return;
    }
    if(head == del){
        head = del->next;
    }
    node*temp = head;
    while(temp->next!=del){
        temp = temp ->next;
    }
    temp->next = del->next;
    delete del;

}
int main(){
    node*head = NULL;
    insert(head,1);
    insert(head,2);
    insert(head,3);
    insert(head,4);
    insert(head,5);
    insert(head,6);
    print(head);
    int key;
    cin>>key;
    deleteNode(head,key);
    print(head);
        cin>>key;

    deleteNode(head,key);
    print(head);

    return 0;
}
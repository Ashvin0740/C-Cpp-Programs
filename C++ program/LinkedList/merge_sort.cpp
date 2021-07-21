#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node * next;

    Node(int num){
        data = num;
        next = NULL;
    }
};
Node *addBehind(Node*head, Node* newNode){
    if(head == NULL){
        return newNode;
    }
    Node*temp = head;
    while(temp->next != NULL){
        temp = temp ->next;
    }
    temp->next = newNode;
    return head;
}
void addToFront(Node* &head, Node* nodeToAdd){
    if(head == NULL){
        head = nodeToAdd;
        return; 
    }
    nodeToAdd -> next = head;
    head = nodeToAdd;
}

Node* takeInput(){
    int num;
    Node * head =NULL;
    cin>>num;
    int x;
    for(int i=0; i<num; i++){
        cin>>x;
        Node*temp = new Node(x);
        head = addBehind(head,temp);
    }
    return head;
}

void print(Node *head){
    Node *temp = head;
    while(temp != NULL){
        cout<<temp->data << "->";
        temp = temp->next;
    }
    cout<<endl;
}

Node *merge(Node *head1, Node *head2){
    if(head1 ==NULL){
        return head2;
    }
    if(head2 == NULL){
        return head1;
    }
    if(head1->data < head2->data){
        head1->next = merge(head1->next,head2);
        return head1;
    }
    else{
        head2 -> next = merge( head1 , head2 -> next);
		return head2;
    }
}

int main(){
	int testCases;
	cin >>testCases;

	while(testCases-- > 0)
	{
		Node *head1 = takeInput();
		Node *head2 = takeInput();

		Node *head3 = merge( head1 , head2 );

		print(head3);
	}

	return 0;
}


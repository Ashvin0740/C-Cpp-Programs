/*Problem Name: Kth element from last in linked list
Problem Difficulty: None
Problem Constraints: n < 10^5
Problem Description:
Given a linked list with n nodes. Find the k<sup>th</sup> element from last without computing the length of the linked list.

Input Format: First line contains space separated integers representing the node values of the linked list. The list ends when the input comes as '-1'. The next line contains a single integer k.
Sample Input: 1 2 3 4 5 6 -1
3
Output Format: Output a single line containing the node value at the kth element from last.
Sample Output: 4
*/

#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node*next;

    Node(int num){
        data = num;
        next = NULL;
    }
};
Node * addBehind(Node*head, Node*newNode){
    if(head == NULL){
        return newNode;
    }
    Node*temp = head;
    while(temp->next != NULL){
        temp =  temp->next; 
    }
    temp->next = newNode;
    return head;
}
void addTOFront(Node* &head, Node* nodeToAdd){
    if(head==NULL){
        head = nodeToAdd;
        return;
    }
    nodeToAdd->next = head;
    head = nodeToAdd;
}
Node* takeInput(){
    int num;
    Node *head = NULL;
    while(cin>>num && num != -1){
        Node*newNode =new Node(num);
        head = addBehind(head,newNode);
    }
    return head;
}

void print(Node* head){
    Node *temp = head;
    while(temp != NULL){
        cout<<temp->data<<",";
        temp = temp->next;
    }
cout<< endl;

}
int kthElem( Node *head , int k)
{
	Node *temp = head;

	for( int i = 0 ; i < k ; i++ )
	{
		temp = temp -> next;
	}

	while(1)
	{
		if( temp == NULL )
		{
			return (head -> data);
		}
		
		head = head -> next;
		temp = temp -> next;
	}
}

int main()
{
	Node *head = takeInput();
	int n;
	cin >> n;

	cout << kthElem( head , n);
	return 0;
}

#include<iostream>
#include<stack>

using namespace std;
void insertAtBottom(stack<int> &s,int x){
    //base case
    if(s.empty()){
        s.push(x);
        return;
    }
    //rec case
    int data = s.top();
    s.pop();
    insertAtBottom(s,x);
    s.push(data);
}
void reverseStack(stack<int> &s){
    //base case
    if(s.empty()){
        return;
    }
        //pick the element at top & insert it at the bottom
        int x = s.top();
        s.pop();
        reverseStack(s);
        insertAtBottom(s,x);
}


int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    reverseStack(s);
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }

    return 0;

}
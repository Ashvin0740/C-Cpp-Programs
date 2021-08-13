#include<iostream>
#include<queue>

using namespace std;

class Queue {
    int *arr;
    int f ,r, cs, ms;

public:
    Queue(int ds = 5){
        arr = new int[ds];
        f = 0;
        cs = 0;
        ms = ds;
        r = ms - 1;
    }
    bool full() {
        return cs = ms;
    }
    bool empty(){
        return cs  ==0;
    }
    void push(int data){
        if(!full()){
            r = (r + 1) % ms;
            arr[r] = data;
            cs++;
        }
    }
    void pop(){
        if(!empty()){
            f  = (f+1) % ms;
            cs--;
        }
    }
    int front() {
        // if(!empty())
        return arr[f];
        
    }

    ~Queue(){
        if(arr != NULL){
            delete [] arr;
            arr= NULL;
        }
    }
};
int main() {
    Queue q(100);
    // for(int i =1; i<10; i++) {
    //     q.push(i);
    // }
        q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);

    q.pop();
    q.pop();

    q.push(8);
    while(!q.empty()){
        cout<<q.front() << " ";
        q.pop();
    }
    return 0;
}
#include <iostream>
using namespace std;

int last_occ(int *a, int n, int key){
    if(n == 0) {
        return -1;
    }
    int i = last_occ(a+1, n-1, key);
    if(i == -1){
        if(a[0] == key){
            return 0;
        }else {
            return -1;
        }
    }
    return i +1;
}

int main() {

int arr[] = {1,2,3,4,5,7,6,7,8,9,10};
int key = 7;
int n = sizeof(arr)/sizeof(int);

cout<< last_occ(arr,n,key) << endl;
    return 0;
}
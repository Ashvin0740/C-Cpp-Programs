#include <iostream>
using namespace std;

int firstOcc(int *a, int n, int key) {
    if(n ==0){
        return -1;
    }
    if(a[0] == key) {
        return 0;
    }
    int i =firstOcc(a+1, n-1, key);
    if(i == -1){
        return -1;
    }
    return i+1;
}
int linearSearch(int *a, int key,int i,  int n)
{
    if(i == n){
        return -1;
    }if(a[i] == key) {
        return i;
    }
    return linearSearch(a, i+1, n, key);
}

int main() {

int arr[] = {1,2,3,4,5,7,6,7,8,9,10};
int key = 7;
int n = sizeof(arr)/sizeof(int);

// cout << firstOcc(arr,n,key);
// cout << linearSearch(arr,i,n,key);
    return 0;
}
#include<iostream>

using namespace std;
int bubble_sort(int a[], int n){
    if(n == 1){
        return;
    }
    for(int j =0; j<n-1; j++){
        if(a[j] > a[j+1]){
            swap(a[j], a[j+1]);
        }
    }
    bubble_sort(a, n-1);
}
// bubble sort recursion more bater way
int bubble_sort_recursion(int a[], int n, int j){
    if(n ==1){
        return;
    }
    if(j == n-1){
        return bubble_sort_recursion(a,0,n-1);
    }
    if(a[j] > a[j+1]){
        swap(a[j], a[j+1]);
    }
    bubble_sort_recursion(a,j+1, n);
    return;
} 


int main() {
    int a[] = {4,5,6,1,2,3};
    int n = 6;
    cout << bubble_sort(a,n);
    cout<< bubble_sort_recursion(a, n , 0);
    return 0;
}
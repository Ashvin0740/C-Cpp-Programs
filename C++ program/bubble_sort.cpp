#include<iostream>
using namespace std;
void bubble_sort(int a[], int n){
    for(int i = 1; i<n; i++){

        for(int j=0; j<=(n-i-1); j++){
            if(a[j] > a[j+1]){
                swap(a[j], a[j+1]);
            }
        }
    }
}

int main() {
    int n, key;
    cin >> n;

    int a[1000];
    cout << "Enter the element:  ";

    for(int i = 0; i<n; i++){
        cin >> a[i];
    }
    bubble_sort(a,n);
     cout << "sorted list is:  ";

        for(int i=0;i<n; i++){
            //  cout << "sorted list is";
            cout << a[i] <<" ,";
        }
       return 0;

}
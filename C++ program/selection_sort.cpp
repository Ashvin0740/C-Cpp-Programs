#include<iostream>
using namespace std;
void selection_sort(int a[], int n){
    for(int i = 0; i<n-1; i++){
        int min_inded = i;
        for(int j = i; j<n; j++){
            if(a[j] < a[min_inded]){
            min_inded = j;
            }
        }
        swap(a[i], a[min_inded]);
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
    selection_sort(a,n);
     cout << "sorted list is:  ";

        for(int i=0;i<n; i++){
            //  cout << "sorted list is";
            cout << a[i] <<" ,";
        }
       return 0;

}
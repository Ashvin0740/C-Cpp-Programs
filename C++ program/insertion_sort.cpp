#include<iostream>
using namespace std;

void insertion_sort(int arr[], int n){

	for(int i =0; i<= n-1; i++){

		int e = arr[i];
		int j = i-1;
		while(j >= 0 and arr[j] > e){
			arr[j +1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = e;
	}
}

int main() {
    int n, key;
    cin >> n;

    int a[1000];
    cout << "Enter The Element:  ";

    for(int i = 0; i<n; i++){
        cin >> a[i];
    }
    insertion_sort(a,n);
     cout << "Sorted List is :  ";

        for(int i=0;i<n; i++){
            //  cout << "sorted list is";
            cout << a[i] <<" ,";
        }
       return 0;

}
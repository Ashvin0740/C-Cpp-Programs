#include<iostream>

using namespace std;
int find_mid(int a[], int n, int key){
    int s = 0;
    int e = n-1;
    while(s<=0){
        int mid = (s+e)/2;
        if(a[mid] == key){
            return mid;
        }
        else if(a[s] <= a[mid]){
            if(key >= a[s] && key <=a[mid]){
                e = mid -1;
            }else {
                s = mid +1;
            }
        }else{
       if(key <= a[e] && key >=a[mid]){
                s = mid +1;
            }else {
                e = mid -1;
            }
        }
    }
    return -1;
}

int main() {
    int n ;
    cin >> n;
    int a[10000000];
    for(int i =0; i<n; i++){
        cin >> a[i];
    }
    int key;
    cin >> key;

    cout << find_mid(a,n,key) << endl;
    return 0;

}
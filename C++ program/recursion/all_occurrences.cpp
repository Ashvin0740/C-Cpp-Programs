#include <iostream>
using namespace std;

int all_occ(int *a, int i, int n, int key,int *out, int j ){
    if(i == n) {
        return j;
    }
    if(a[i] == key) {
out[j] =i; 
return all_occ(a, i+1, n ,key, out, j+1);
    }
   return all_occ(a, i+1, n ,key, out, j);
}
int main() {

int arr[] = {1,2,3,4,5,7,6,7,8,9,10};
int key = 7;

int n = sizeof(arr)/sizeof(int);
int output[100];
int cnt = all_occ(arr,0,n,key,output,0);
for(int k =0; k<cnt; k++) {
    cout << output[k]<< " ,";
}
cout <<"Count "<<cnt << endl;
    return 0;
}
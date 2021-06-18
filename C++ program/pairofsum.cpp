#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int t;
    cin>>t;
    int l=0;
    int r=n-1;
    while(l<r){
        if(a[l]+a[r]==t){
            cout<<a[l]<<" and "<<a[r]<<endl;
            l++;
            r--;
        }else if(a[l]+a[r]<t){
            l++;
        }else{
            r--;
        }
        
    }
    return 0;
}


    

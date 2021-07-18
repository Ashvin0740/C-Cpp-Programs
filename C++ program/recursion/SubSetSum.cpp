#include<iostream>
#include<vector>
#include<cstring>
#include<algorithm>

using namespace std;
int CountSubSet(vector<int> arr, int n,int i, int x){
        if(i==n){
            if(x==0){
                return 1;
            }else{
                return 0;
            }
        }
        int inc = CountSubSet(arr,n,i+1,x-arr[i]);
        int exc = CountSubSet(arr,n,i+1,x);

        return inc+exc;
 }

int main(){
    vector<int> arr{1,2,3,4,5,6};
    int x = 6;

    cout << CountSubSet(arr,arr.size()-1,0,x);
    return 0;
}
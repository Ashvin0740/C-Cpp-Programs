#include<iostream>
#include<climits>

using namespace std;

int main() {
    int n,key ;
    cin>>n;

    int a[1000];

    for(int i =0;i<n;i++){
        cin >> a[i];
    }
    int largest = INT_MAX;
    int smallest = INT_MIN;

    for(int i=0; i<n; i++){
        if(a[i] > largest){
            largest = a[i];
        }
        if(a[i] < smallest){
            smallest = a[i];
        }

    }

    cout << "largest: " << largest<< endl;
    cout << "smallest" << smallest << endl;



    return 0;
}
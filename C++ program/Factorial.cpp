#include<iostream>

using namespace std;
// first method

// int main(){
// int n ;
// cin>> n;
// int fat  = 1;
// for(int i =1; i<=n; i++){
//     fat = fat * i;
// }
// // return 0;
// cout << fat<<endl;
// return 0;
// }

// second method
int factorial(int n){
if( n == 0 || n==1){
    return 1;
    }
    int fat = 1;
    for(int i=1;i<=n;i++)
    {
            fat = fat * i;
    }
    return fat;
}
int main(){
    int n;
    cin>>n;
    // factorial(n);
    cout <<" Factorial of "<<n<< " is: " << factorial(n) << endl;
    return 0;
}


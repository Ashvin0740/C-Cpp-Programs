#include<iostream>
using namespace std;


int main(){

    int a[] = {1,2,5,4,8,9,12,15,18};
    int s = 5;
    int i =0;
    int  j = sizeof(a)/sizeof(int )-1;


    while(i<j){
        int current_sum = a[i] + a[j];
    if (current_sum > s){
        j--;
    }else if(current_sum < s){
        i++;
    }else if(current_sum == s){
        cout << a[i] << "and" << a[j] << endl;
        i++;
        j--;
    }
}
    return 0;

}
    

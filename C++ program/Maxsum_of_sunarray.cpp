#include<iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int a[1000];
    int cumsum[1000] = {0};
    int maximumSum = 0;
    int currentSum = 0;

    int left =-1;
    int right = -1;

    cin>>a[0];
    cumsum[0] = a[0];
    for(int i=1; i<n; i++){
        cin>>a[i];
        cumsum[i] = cumsum[i-1] + a[i];
    }

    for(int i=0; i< n;i++){
        for(int j=i; j<n; j++){

            currentSum = 0;
            currentSum = cumsum[j] - cumsum[i-1];
            if(currentSum> maximumSum){
                maximumSum = currentSum;
                left = i;
                right = j;
            }
        }
    }
    cout << "The maximum SubArray is: ";
    for(int k = left; k<=right;k++){
        cout << a[k] << " ";
    }
        cout<<endl;

        cout << "The sum of maximumSum is: " << maximumSum <<endl;

    return 0;
}
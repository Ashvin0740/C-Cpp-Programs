#include<iostream>
using namespace std;

int profit(int N, int C, int *wt, int *prices){
  if(N==0 || C==0){
      return 0;
  }
    // start from last(r ---->l)
  int ans = 0;
  int inc =0;
  int exc = 0;
  // including last element
  if(wt[N-1] <= C)
        inc = prices[N-1] + profit(N-1,C-wt[N-1],wt,prices);
  // excluding 
        exc = profit(N-1,C,wt,prices);
        ans = max(inc,exc);
    return ans;
}

int main () {
    int weights[] = {1, 2, 3 ,4};
    int prices[] = {40, 20, 30, 100};
    int N=4;
    int C = 7;
    cout << profit(N,C,weights,prices);
     return 0;

}
#include<iostream>

using namespace std;

int coutDigitZero(int n){

	int ans = 0;
	// int p = 5;

	for(int i = 5; i<=n; i= i*5){
		ans = ans +n/i;
		
	// while ((n/p) > 0){
	// 	ans += (n/p);
	// 	p = p*5;
	}
	return ans;
}
int main () {
	long long int n ;
	cin >> n;

 cout << coutDigitZero(n) << endl;

 return 0;
}
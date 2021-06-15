#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;


	// first path
	cout<<"*";
	for(int i =1;i<=(n-3)/2; i++){
		cout<< " ";
	}
	for(int i = 1; i<=(n+1)/2; i++){
		cout<<"*";
	}
	cout<<endl;

	//second component
	for(int row = 1; row<=(n-3)/2; row++){
		cout<<"*";
		for(int i =1;i<=(n-3)/2; i++){
		cout<< " ";
		}
		cout<< "*"<< endl;
	}
// third part
 for (int i = 1; i<=n; i++){
	 cout << "*";
 }
 cout << endl;
 
 //fourth component
		for(int row = 1; row<=(n-3)/2; row++){
		
		for(int i =1;i<=(n-3)/2+1; i++){
		cout<< " ";
		}
		cout<< "*";
		for(int i =1;i<=(n-3)/2; i++){
		cout<< " ";
		}
		cout<< "*"<< endl;
	}

	//fifth part

	for(int i = 1; i<=(n+1)/2; i++){
		cout<<"*";
	}
	for(int i =1;i<=(n-3)/2; i++){
		cout<< " ";
	}
	cout << "*";
	cout<<endl;

	return 0;

}


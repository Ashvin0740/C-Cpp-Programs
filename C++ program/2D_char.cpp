#include<iostream>

using namespace std;

int main() {
    char a[][10] = {{'a','b','\0'}, {'b','d', 'f','\0'}};
    char b[][10] = {{"abc"}, {"des"}}; 

    cout << a[0] << endl;
        cout << b[1] << endl;

    return 0;

}
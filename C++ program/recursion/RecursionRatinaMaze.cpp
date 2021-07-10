#include<iostream>
using namespace std;
bool Meze(char maze[10][10], int soln[10][10], int i,int j, int m, int n){
    if( i == m && j == n){
        soln[m][n] =1;
        for(int i=0; i<=m; i++){
            for(int j =0; j<=n; j++){
                cout << soln[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
        return true;
    }
    if(i>m || j>n){
        return false;
    }
    if(maze[i][j] == 'x'){
        return false;
    }
    soln[i][j] = 1;
    bool rightSuccess = Meze(maze,soln,i,j+1,m,n);
    bool leftSuccess = Meze(maze,soln,i+1,j,m,n);
     soln[i][j] = 0;

    if(rightSuccess || leftSuccess){
        return true;
    }
    return false;
}

int main() {
    char maze[10][10] {
                      "00x0",
                      "000x",
                      "0x00",
                      "0000",
                       };
int soln[10][10] = {0};
int m=4, n =4;
bool ans = Meze(maze,soln,0,0,m-1,n-1);
if(ans = false){
    cout<<"path not found !";
}
    return 0;
}
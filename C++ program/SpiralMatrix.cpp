class Solution {
public:
vector<int> spiralOrder(vector<vector<int>>& A) {
    
    int n=A.size();
    int m=A[0].size();
    int startRow=0;
    int endRow=n-1;
    int startCol=0;
    int endCol=m-1;
    vector<int> arr;
    int dir=0;

    while(startRow<=endRow && startCol<=endCol){

        if(dir==0){    
        for(int i=startCol;i<=endCol;i++){
               arr.push_back(A[startRow][i]);       
        }
        startRow++;
        dir++;
        }

        else if(dir==1){
        for(int i=startRow;i<=endRow;i++){
           arr.push_back(A[i][endCol]);
        }
        endCol--;
        dir++;
        }

        else if(dir==2){
        for(int i=endCol;i>=startCol;i--){
           arr.push_back(A[endRow][i]);
        }
        endRow--;
        dir++;
        }

        else if(dir=3){
        for(int i=endRow;i>=startRow;i--){
            arr.push_back(A[i][startCol]);
        }
        startCol++;
        dir=0;
        }
        else break;
  
    }

     return arr;
    
    }
};
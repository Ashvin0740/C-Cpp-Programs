class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
  vector<vector<int>> result (n, vector<int>(n));

        int top=0,bottom = n-1,left = 0,right = n-1;
        int val = 1;
        while(left<=right && top<=bottom){
        for(int i=left; i<= right; i++){
            result[top][i] = val++;
            
        }
            top++;
        for(int i = top; i<=bottom;i++){
            result[i][right] = val++;
          
        }
              right--;
        for(int i=right; i>=left; i--){
            result[bottom][i] = val++;
          
        }
              bottom--;
        for(int i=bottom; i>=top; i--){
            result[i][left] = val++;
           
            }
             left++;
        }
        return result;
    }
};
class Solution {
public:

    bool solve(vector<vector<char>>& board){
        for(int i=0; i<board.size(); i++) {
            for(int j=0; j<board[0].size(); j++) {
                if(board[i][j] == '.'){
                    for(char c='1';c<='9';c++){
                        if(isValid(board,i,j,c)){
                            board[i][j] =c;
                            
                            if(solve(board))
                                return true;
                            else
                                board[i][j] = '.';
                        }
                    }
                    return false;
                }
                
            }
        }
        return true;
    }
    
    bool isValid(vector<vector<char>>& board, int row, int col, char c){
        for(int i = 0; i < 9; i++) {
            if(board[i][col] == c || board[row][i] == c) 
                return false; 
        
            if(board[3 * (row / 3) + i / 3][3 * (col / 3) + i % 3] == c) 
                return false; 
        }
        return true;
    }
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }

};
// class Solution {
// public:
//     bool isEmpty(vector<vector<char>>& board,int &x,int &y){
//         for(int i=0;i<9;i++){
//             for(int j=0;j<9;j++){
//                 if(board[i][j]=='.'){
//                     x=i;
//                     y=j;
//                     return true;
//                 }
//             }
//         }
//         return false;
//     }
    
//     bool isValid(int val,vector<vector<char>>& board, int x, int y){
//         for(int i=0;i<9;i++){
//             if(board[i][y]==val) return false;
//         }
        
//         for(int j=0;j<9;j++){
//             if(board[x][j]==val) return false;
//         }
        
//         int cur_row=(x/3)*3;
//         int cur_col=(y/3)*3;
//         for(int i=0;i<3;i++){
//             for(int j=0;j<3;j++){
//                 if(board[i+cur_row][j+cur_col]==val) return false;
//             }
//         }
//         return true;
//     }
    
//     bool dfs(vector<vector<char>>& board){
//         int x,y;
//         if(!isEmpty(board,x,y)){
//             return true;
//         }
        
//         for(int i=1;i<=9;i++){
//             if(isValid(i+'0',board,x,y)){
//                 board[x][y]=i+'0';
//                 if(dfs(board)){
//                     return true;
//                 }
//                 board[x][y]='.';
//             }
//         }
//         return false;
//     }
    
//     void solveSudoku(vector<vector<char>>& board) {
//         dfs(board);
//     }

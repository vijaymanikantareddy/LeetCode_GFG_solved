class Solution {
public:
    void dfs(vector<vector<int>>& board, int row, int col, vector<vector<int>>& v){
        
        int oneCount = 0;
        int zeroCount = 0;
        int n = board.size();
        int m = board[0].size();
        for(int i = -1 ; i <= 1 ; i++){
            for(int j = -1 ; j <= 1 ; j++){
                if(i == 0 && j == 0){
                    continue;
                }
                int nrow = row+i;
                int ncol = col+j;
                if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m){
                    if(board[nrow][ncol]){
                       oneCount++; 
                    }else{
                        zeroCount++;
                    }
                }
            }
        }
        if(board[row][col]){
            if(oneCount < 2){
                v[row][col] = 0;
            }else if(oneCount == 2 || oneCount == 3){
                v[row][col] = 1;
            }else if(oneCount > 3){
                v[row][col] = 0;
            }
        }else{
            if(oneCount == 3){
                v[row][col] = 1;
            }
        }
        
    }
    void gameOfLife(vector<vector<int>>& board) {
        int n = board.size();
        int m = board[0].size();
        vector<vector<int>> v = board;
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                dfs(board, i, j, v);
            }
        }
        board = v;
    }
};
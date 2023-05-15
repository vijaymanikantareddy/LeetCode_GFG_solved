class Solution {
public:
    bool dfs(vector<vector<char>>& board, string word, int row, int col, int index, vector<vector<bool>>& vis){
        if(index == word.size()){
            return true;
        }
        int n = board.size();
        int m = board[0].size();
        vis[row][col] = true;
        int rows[] = {0, 0, -1, 1};
        int cols[] = {-1, 1, 0, 0};
        for(int i = 0 ; i < 4 ; i++){
            int nrow = row+rows[i];
            int ncol = col+cols[i];
            if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && !vis[nrow][ncol] && board[nrow][ncol] == word[index]){
                if(dfs(board, word, nrow, ncol, index+1, vis)){
                    return true;
                }
            }
        }
        vis[row][col] = false;
        return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int n = board.size();
        int m = board[0].size();
        vector<vector<bool>> vis(n, vector<bool>(m, false));
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                if(board[i][j] == word[0]){
                    if(dfs(board, word, i, j, 1, vis)){
                        return true;
                    }
                }
            }
        }
        return false;
    }
};
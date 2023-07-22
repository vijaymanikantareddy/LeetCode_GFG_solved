class Solution {
public:
    bool checkRow(vector<vector<char>>& board, char ch, int row){
        int cnt = 0;
        for(int i = 0 ; i < board[row].size() ; i++){
            if(board[row][i] == ch && ch != '.'){
                cnt++;
            }
        }
        return (cnt <= 1);
    }
    bool checkCol(vector<vector<char>>& board, char ch, int col){
        int cnt = 0;
        for(int i = 0 ; i < board[0].size() ; i++){
            if(board[i][col] == ch && ch != '.'){
                cnt++;
            }
        }
        return (cnt <= 1);
    }
    bool checkGrid(vector<vector<char>>& board, char ch, int row, int col){
        int cnt = 0;
        row = row-(row%3);
        col = col-(col%3);
        for(int i = 0 ; i < 3 ; i++){
            for(int j = 0 ; j < 3 ; j++){
                if(ch == board[row+i][col+j] && ch != '.'){
                    cnt++;
                }
            }
        }
        return (cnt <= 1);
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i = 0 ; i < board.size() ; i++){
            for(int j = 0 ; j < board[i].size() ; j++){
                char ch = board[i][j];
                if(ch != '.' && (checkRow(board, ch, i) == false || checkCol(board, ch, j) == false) || checkGrid(board, ch, i, j) == false){
                    return false;
                }
            }
        }
        return true;
    }
};
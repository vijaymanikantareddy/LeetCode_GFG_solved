//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool dfs(vector<vector<char>>& board, vector<vector<bool>>& vis, int row, int col, int index, string word){
        if(index == word.size()){
            return true;
        }
        vis[row][col] = true;
        int n = board.size();
        int m = board[0].size();
        int rows[] = {-1, 1, 0, 0};
        int cols[] = {0, 0, 1, -1};
        for(int i = 0 ; i < 4 ; i++){
            int nrow = row+rows[i];
            int ncol = col+cols[i];
            if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && index < word.size() && board[nrow][ncol] == word[index] && !vis[nrow][ncol]){
                if(dfs(board, vis, nrow, ncol, index+1, word)){
                    return true;
                }
            }
        }
        vis[row][col]= false;
        return false;
    }
    bool isWordExist(vector<vector<char>>& mat, string& word) {
        // Code here
        int n = mat.size();
        int m = mat[0].size();
        vector<vector<bool>> vis(n, vector<bool>(m, false));
        for(int row = 0 ; row < n ; row++){
            for(int col = 0 ; col < m ; col++){
                if(mat[row][col] == word[0] && !vis[row][col]){
                   if(dfs(mat, vis, row, col, 1, word)){
                       return true;
                   }
                }
            }
        }
        return false;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> mat(n, vector<char>(m, '*'));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> mat[i][j];
        string word;
        cin >> word;
        Solution obj;
        bool ans = obj.isWordExist(mat, word);
        if (ans)
            cout << "true\n";
        else
            cout << "false\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends
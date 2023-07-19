//{ Driver Code Starts
// Initial template for C++

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
        for(int i =-1 ; i <= 1; i++){
            for(int j = -1 ; j <= 1; j++){
                if(i==0 && j == 0) continue;
                int nrow = row+i;
                int ncol = col+j;
                if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && index < word.size() 
                && board[nrow][ncol] == word[index] && !vis[nrow][ncol]){
                    if(dfs(board, vis, nrow, ncol, index+1, word)){
                        return true;
                    }
                }
            }
        }
        vis[row][col] = false;
        return false;
    }
	vector<string> wordBoggle(vector<vector<char> >& board, vector<string>& dictionary) {
	    // Code here
	    int n = board.size();
	    int m = board[0].size();
	    set<string> res;
	    for(string word: dictionary){
	        vector<vector<bool>> vis(n, vector<bool>(m, false));
	        for(int row = 0 ; row < n ; row++){
                for(int col = 0 ; col < m ; col++){
                    if(board[row][col] == word[0] && !vis[row][col]){
                       if(dfs(board, vis, row, col, 1, word)){
                           res.insert(word);
                       }
                    }
                }
            }
	    }
	    return vector<string>(res.begin(), res.end());
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<string> dictionary;
        for (int i = 0; i < N; ++i) {
            string s;
            cin >> s;
            dictionary.push_back(s);
        }
        
        int R, C;
        cin >> R >> C;
        vector<vector<char> > board(R);
        for (int i = 0; i < R; i++) {
            board[i].resize(C);
            for (int j = 0; j < C; j++) cin >> board[i][j];
        }
        Solution obj;
        vector<string> output = obj.wordBoggle(board, dictionary);
        if (output.size() == 0)
            cout << "-1";
        else {
            sort(output.begin(), output.end());
            for (int i = 0; i < output.size(); i++) cout << output[i] << " ";
        }
        cout << endl;
    }
}

// } Driver Code Ends
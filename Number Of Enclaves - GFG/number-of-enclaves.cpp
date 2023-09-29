//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    void change(vector<vector<int>>& grid, vector<vector<int>>& vis, int row, int col){
        vis[row][col] = 1;
        grid[row][col] = 0;
        int n = grid.size();
        int m = grid[0].size();
        int dr[] = {1, -1, 0, 0};
        int dc[] = {0, 0, 1, -1};
        for(int i = 0 ; i < 4 ; i++){
            int nrow = dr[i]+row;
            int ncol = dc[i]+col;
            if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && grid[nrow][ncol] && !vis[nrow][ncol]){
                change(grid, vis, nrow, ncol);
            }
        }
    }
    
  public:
    int numberOfEnclaves(vector<vector<int>> &grid) {
        // Code here
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> vis(n, vector<int>(m, 0));
        for(int i = 0 ; i < m ; i++){
            if(grid[0][i] && vis[0][i] == 0){
                change(grid, vis, 0, i);
            }
            if(grid[n-1][i] && vis[n-1][i] == 0){
                change(grid, vis, n-1, i);
            }
        }
        for(int i = 0 ; i < n ; i++){
            if(grid[i][0] && vis[i][0]==0){
                change(grid, vis, i, 0);
            }
            if(grid[i][m-1] && vis[i][m-1] == 0){
                change(grid, vis, i, m-1);
            }
        }
        
        int res = 0;
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                if(grid[i][j]){
                    res++;
                }
            }
        }
        return res;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        cout << obj.numberOfEnclaves(grid) << endl;
    }
}
// } Driver Code Ends
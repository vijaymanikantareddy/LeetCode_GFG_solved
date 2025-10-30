class Solution {
  public:
    void dfs(vector<vector<char>>& grid, vector<vector<int>>& vis, int n, int m, int row, int col){
        vis[row][col] = 1;
        int dx[] = {0, 0, 1, -1};
        int dy[] = {1, -1, 0, 0};
        for(int i = 0 ; i < 4 ; i++){
            int nrow = row + dx[i];
            int ncol = col + dy[i];
            if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && grid[nrow][ncol] == 'O' && !vis[nrow][ncol]){
                dfs(grid, vis, n, m, nrow, ncol);
            }
        }
    }
    void fill(vector<vector<char>>& grid) {
        // Code here
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> vis(n, vector<int>(m, 0));
        for(int i = 0 ; i < n ; i++){
            if(grid[i][0] == 'O' && vis[i][0] == 0){
                dfs(grid, vis, n, m, i, 0);
            }
            if(grid[i][m - 1] == 'O' && vis[i][m - 1] == 0){
                dfs(grid, vis, n, m, i, m - 1);
            }
        }
        for(int i = 0 ; i < m ; i++){
            if(grid[0][i] == 'O' && vis[0][i] == 0){
                dfs(grid, vis, n, m, 0, i);
            }
            if(grid[n - 1][i] == 'O' && vis[n - 1][i] == 0){
                dfs(grid, vis, n, m, n - 1, i);
            }
        }
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                if(grid[i][j] == 'O' && !vis[i][j]){
                    grid[i][j] = 'X';
                }
            }
        }
        return ;
    }
};
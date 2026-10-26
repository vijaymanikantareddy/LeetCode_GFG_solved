class Solution {
public:
    void dfs(vector<vector<int>>& grid, int row, int col, vector<vector<int>>& vis, long long &s){
        vis[row][col] = 1;
        s += grid[row][col];
        int n = grid.size();
        int m = grid[0].size();
        int dr[] = {1, -1, 0, 0};
        int dc[] = {0, 0, 1, -1};
        for(int i = 0 ; i < 4 ; i++){
            int nrow = dr[i]+row;
            int ncol = dc[i]+col;
            if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && grid[nrow][ncol] > 0 && !vis[nrow][ncol]){
                dfs(grid, nrow, ncol, vis, s);
            }
        }
    }
    int countIslands(vector<vector<int>>& grid, int k) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> vis(n, vector<int>(m, 0));

        int res = 0;
        
        for(int i = 0; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                if(grid[i][j] > 0 && !vis[i][j]){
                    long long s = 0;
                    dfs(grid, i, j, vis, s);
                    if(s % k == 0) res++;
                }
            }
        }
        return res;
    }
};
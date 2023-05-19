class Solution {
public:
    void dfs(vector<vector<int>>& grid, int row, int col, int& mx){
        ++mx;
        grid[row][col] = 0;
        int n = grid.size();
        int m = grid[0].size();
        int dr[] = {1, -1, 0, 0};
        int dc[] = {0, 0, 1, -1};
        for(int i = 0 ; i < 4 ; i++){
            int nrow = row+dr[i];
            int ncol = col+dc[i];
            if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && grid[nrow][ncol]){
                dfs(grid, nrow, ncol, mx);
            }
        }
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int res = 0;
        int mx = 0;
        int n = grid.size();
        int m = grid[0].size();
        for(int i = 0 ; i < n ; i++){
            for(int j = 0; j < m ; j++){
                if(grid[i][j]){
                    mx = 0;
                    dfs(grid, i, j, mx);
                    res = res > mx? res: mx;
                }
            }
        }
        return res;
    }
};
class Solution {
public:
    void dfs(vector<vector<char>>& grid, int row, int col){
        int n = grid.size();
        int m = grid[0].size();
        grid[row][col] = '0';
        int dr[] = {1, -1, 0, 0};
        int dc[] = {0, 0, -1, 1};
        for(int i = 0 ; i < 4 ; i++){
            int nrow = row+dr[i];
            int ncol = col+dc[i];
            if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && grid[nrow][ncol] =='1'){
                dfs(grid, nrow, ncol);
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int res = 0;
        int n = grid.size();
        int m = grid[0].size();
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                if(grid[i][j] == '1'){
                    dfs(grid, i, j);
                    res++;
                }
            }
        }
        return res;
    }
};
class Solution {
public:
    int fun(vector<vector<int>>& grid, int r, int c, int n, int m, 
        vector<vector<int>>& dp){
        if(r == n - 1 && c == m - 1){
            return grid[r][c];
        }
        if(r >= n or c >= m){
            return 1e5;
        }
        if(dp[r][c] != -1) return dp[r][c];
        int right = grid[r][c] + fun(grid, r, c + 1, n, m, dp);
        int down = grid[r][c] + fun(grid, r + 1, c, n, m, dp);
        return dp[r][c] = min(right, down);
    }
    int minPathSum(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> dp(n, vector<int>(m, -1));
        int a = fun(grid, 0, 0, n, m, dp);
        // for(int i = 0 ; i < n ; i++){
        //     for(int j = 0 ; j < m ; j++){
        //         cout << dp[i][j] << " ";
        //     }
        //     cout << endl;
        // }
        return a;
    }
};
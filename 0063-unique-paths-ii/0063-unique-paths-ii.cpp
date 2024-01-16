class Solution {
public:
    int solve(vector<vector<int>>& obstacleGrid, vector<vector<int>>& dp, int n, int m, int i, int j){
        if(i == n-1 && j == m-1 && obstacleGrid[i][j] != 1) return 1;
        if(i >= n || j >= m) return 0;
        if(obstacleGrid[i][j] == 1){
            return 0;
        }
        if(dp[i][j] != -1) return dp[i][j];
        int down = solve(obstacleGrid, dp, n, m, i+1, j);
        int right = solve(obstacleGrid, dp, n, m, i, j+1);
        return dp[i][j] = down + right;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int n = obstacleGrid.size();
        int m = obstacleGrid[0].size();
        vector<vector<int>> dp(n, vector<int>(m, -1));
        return solve(obstacleGrid, dp, n, m, 0, 0);
    }
};
class Solution {
public:
    int fun(vector<vector<int>>& triangle, int n, vector<vector<int>>& dp, int r, int c){
        if(r >= n || c >= triangle[r].size()){
            return 0;
        }
        if(dp[r][c] != 1e6) return dp[r][c];
        return dp[r][c] = triangle[r][c] + min(fun(triangle, n, dp, r+1, c), fun(triangle, n, dp, r+1, c+1)); 
}
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
        int la = triangle.back().size();
        vector<vector<int>> dp(n, vector<int>(la, 1e6));
        return dp[0][0] = fun(triangle, n, dp, 0, 0);
    }
};
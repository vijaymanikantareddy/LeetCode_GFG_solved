class Solution {
  public:
    long long solve(int n, int m, int k, vector<vector<int>>& mat, vector<vector<vector<long long>>>& dp, int r, int c){
        if(r == n || c == m || k < 0) return 0;
        if(r == n-1 && c == m-1){
            if(k == mat[r][c]) return 1;
            return 0;
        }
        if(dp[r][c][k] != -1) return dp[r][c][k];
        long long a = solve(n, m, k-mat[r][c], mat, dp, r+1, c);
        long long b = solve(n, m, k-mat[r][c], mat, dp, r, c+1);
        return dp[r][c][k] = a+b;
    }
    int numberOfPath(vector<vector<int>>& mat, int k) {
        // Code Here
        int n = mat.size();
        int m = mat[0].size();
        vector<vector<vector<long long>>> dp(n, vector<vector<long long>>(m, vector<long long>(k+1, -1)));
        return solve(n, m, k, mat, dp, 0, 0);
        
    }
};
class Solution {
  public:
    
    int maxGold(vector<vector<int>>& mat) {
        // code here
        int n = mat.size(), m = mat[0].size();
        vector<vector<int>> dp(n, vector<int>(m, 0));
        for(int i = 0 ; i < n ; i++){
            dp[i][m - 1] = mat[i][m - 1];
        }
        
        for(int col = m - 2 ; col >= 0 ; col--){
            for(int row = 0 ; row < n ; row++){
                int right = dp[row][col + 1];
                int rightUp = (row - 1 >= 0)? dp[row - 1][col + 1]: 0;
                int rightDown = (row + 1 < n)? dp[row + 1][col + 1]: 0;
                dp[row][col] = mat[row][col] + max({right, rightUp, rightDown});
            }
        }
        
        int res = 0;
        for(int i = 0 ; i < n ; i++){
            res = max(res, dp[i][0]);
        }
        return res;
        
        
    }
};
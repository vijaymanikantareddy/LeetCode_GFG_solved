class Solution {
public:
    
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        vector<vector<int>> dp(n, vector<int>(n, 1e4+1));
        for(int i = 0 ; i < n ; i++){
            dp[n-1][i] = matrix[n-1][i];
        }
        for(int i = n-2 ; i >= 0 ; i--){
            for(int j = 0 ; j < n ; j++){
                int a, b, c;
                a = b = c = 1e4+1;
                if(j-1 >= 0) a = matrix[i][j] + dp[i+1][j-1];
                if(j+1 < n) c = matrix[i][j] + dp[i+1][j+1];
                b = matrix[i][j] + dp[i+1][j];
                dp[i][j] = min({a, b, c});
            }
        }
        int res = INT_MAX;
        for(int i = 0 ; i < n ; i++){
            res = min(res, dp[0][i]);
        }
        return res;
    }
};
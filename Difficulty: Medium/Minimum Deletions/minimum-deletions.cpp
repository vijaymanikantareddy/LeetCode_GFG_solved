class Solution {
  public:
    int minDeletions(string s) {
        // code here
        string r = s;
        int n = s.size();
        reverse(r.begin(), r.end());
        vector<vector<int>> dp(n+1, vector<int>(n+1, 0));
        for(int i = 1 ; i <= n ; i++){
            for(int j = 1 ; j <= n ; j++){
                if(s[i-1] == r[j-1]){
                    dp[i][j] = 1 + dp[i-1][j-1];
                }else{
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
                }
            }
        }
        return n - dp[n][n];
    }
};
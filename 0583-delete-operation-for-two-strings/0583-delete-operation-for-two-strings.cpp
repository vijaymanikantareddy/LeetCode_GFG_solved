class Solution {
public:
    int fun(vector<vector<int>>& dp, string a, string b, int n, int m){
        if(n < 0) return m + 1;
        if(m < 0) return n + 1;
        if(dp[n][m] != -1) return dp[n][m];
        int take = 1e5, nottake = 1e5;
        if(a[n] == b[m]){
            take = fun(dp, a, b, n - 1, m - 1);
        }
        else nottake = 1 + min(fun(dp, a, b, n - 1, m), fun(dp, a, b, n, m - 1));
        return dp[n][m] = min(take, nottake);
    }
    int minDistance(string word1, string word2) {
        int n = word1.size(), m = word2.size();
        vector<vector<int>> dp(n, vector<int>(m, -1));
        return fun(dp, word1, word2, n - 1, m - 1);
    }
};
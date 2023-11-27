class Solution {
public:
    int solve(vector<vector<int>>& adj, vector<vector<int>>& dp, int i, int n){
    int mod = 1e9+7;
    if(n == 1) return 1;
    if(i == 5) return 0;
    if(dp[i][n] != -1) return dp[i][n];
    int ans = 0;
    for(auto it: adj[i]){
        ans = (ans + solve(adj, dp, it, n-1))%mod;
    }
    return dp[i][n] = ans;
}
    int knightDialer(int n) {
        int mod = 1e9+7;
        int ans = 0;
        vector<vector<int>> adj = {
            {4, 6}, {6, 8}, {7, 9}, {4, 8}, {0, 3, 9}, 
            {}, {0, 1, 7}, {2, 6}, {1, 3}, {2, 4} 
        };
        vector<vector<int>> dp(10, vector<int>(n+1, -1));
        for(int i = 0 ; i <= 9 ; i++){
            ans = (ans + solve(adj, dp, i, n))%mod;
        }
        return ans%mod;
    }
};
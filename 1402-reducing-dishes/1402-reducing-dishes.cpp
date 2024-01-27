class Solution {
public:
    int solve(vector<vector<int>>& dp, vector<int>& s, int n, int i, int t){
        if(i >= n || t > n) return 0;
        if(dp[i][t] != -1){
            return dp[i][t];
        }
        int take = s[i]*t + solve(dp, s, n, i+1, t+1);
        int nottake = solve(dp, s, n, i+1, t);
        return dp[i][t] = max(take, nottake);
    }
    int maxSatisfaction(vector<int>& satisfaction) {
        int n = satisfaction.size();
        sort(satisfaction.begin(), satisfaction.end());
        vector<vector<int>> dp(n, vector<int>(n+1, -1));
        return solve(dp, satisfaction, n, 0, 1);
    }
};
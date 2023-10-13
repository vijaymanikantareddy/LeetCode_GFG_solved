class Solution {
public:
    int fun(vector<int> cost, vector<int>& dp, int ind){
        if(ind >= cost.size()){
            return 0;
        }
        if(dp[ind] != -1){
            return dp[ind];
        }
        int a = cost[ind] + fun(cost, dp, ind+1);
        int b = cost[ind] + fun(cost, dp, ind+2);
        return dp[ind] = min(a, b);
    }
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> dp(cost.size(), -1);
        dp[0] = fun(cost, dp, 0);
        dp[1] = fun(cost, dp, 1);
        return min(dp[0], dp[1]);
    }
};
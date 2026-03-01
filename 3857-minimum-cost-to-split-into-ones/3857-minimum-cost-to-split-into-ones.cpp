class Solution {
public:
    long long res = 0;
    int fun(vector<int>& dp, int n){
        if(dp[n] != -1){
            return dp[n];
        }
        int a = n / 2;
        int b = a;
        if(n % 2 != 0){
            b++;
        }
        res += (a * b);
        return fun(dp, a) + fun(dp, b);
    }
    int minCost(int n) {
        vector<int> dp(n + 1, -1);
        dp[1] = 0;
        dp[n] = fun(dp, n);
        return res;
    }
};
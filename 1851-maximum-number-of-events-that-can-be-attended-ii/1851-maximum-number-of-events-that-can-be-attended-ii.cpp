class Solution {
public:
    vector<int> starts;
    int fun(vector<vector<int>>& dp, int i, int n, int k, vector<vector<int>>& events){
        if(i == n || k <= 0) return 0;
        if(dp[i][k] != -1) return dp[i][k];
        int skip = fun(dp, i + 1, n, k, events);
        int nextIndex = lower_bound(starts.begin(), starts.end(), events[i][1] + 1) - starts.begin();
        int take = events[i][2] + fun(dp, nextIndex, n, k - 1, events);
        return dp[i][k] = max(skip, take);
    }
    int maxValue(vector<vector<int>>& events, int k) {
        sort(events.begin(), events.end());
        int n = events.size();
        starts.resize(n);
        vector<vector<int>> dp(n, vector<int>(k + 1, -1));
        for(int i = 0 ; i < n ; i++){
            starts[i] = events[i][0];
        }
        return fun(dp, 0, n, k, events);
    }
};
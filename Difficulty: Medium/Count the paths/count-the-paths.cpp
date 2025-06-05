class Solution {
  public:
    int fun(vector<int> adj[], int V, int curr,  int dest, 
        vector<int>& dp){
            if(curr == dest) return 1;
            if(dp[curr] != -1) return dp[curr];
            int res = 0;
            for(auto it: adj[curr]){
                res += fun(adj, V, it, dest, dp);
            }
            return dp[curr] = res;
        }
    int countPaths(vector<vector<int>>& edges, int V, int src, int dest) {
        // Code here
        vector<int> dp(V, -1);
        vector<int> adj[V];
        for(auto it: edges){
            adj[it[0]].push_back(it[1]);
        }
        return fun(adj, V, src, dest, dp);
    }
};
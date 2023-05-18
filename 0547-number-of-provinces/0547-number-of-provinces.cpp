class Solution {
public:
    void dfs(vector<int> adj[], int s, vector<int>& vis){
        vis[s] = 1;
        for(auto it: adj[s]){
            if(!vis[it])
                dfs(adj, it, vis);
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<int> adj[n];
        for(int i = 0 ; i < n ; i++){
            for(int j = i; j < isConnected[i].size(); j++){
                if(i == j){
                    continue;
                }
                if(isConnected[i][j]){
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }
        vector<int> vis(n, 0);
        int res = 0;
        for(int i = 0 ; i < n ; i++){
            if(!vis[i]){
                res++;
                dfs(adj, i, vis);
            }
        }
        return res;
    }
};
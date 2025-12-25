// User function Template for C++

class Solution {
  public:
    void dfs(vector<int> ad[], int V, vector<int>& vis, int node){
        vis[node] = true;
        for(auto it: ad[node]){
            if(!vis[it])
                dfs(ad, V, vis, it);
        }
        return ;
    }
    int numProvinces(vector<vector<int>> adj, int V) {
        // code here
        vector<int> vis(V, 0);
        vector<int> ad[V];
        for(int i = 0 ; i < adj.size() ; i++){
            for(int j = i + 1 ; j < adj[i].size() ; j++){
                if(adj[i][j]){
                    ad[i].push_back(j);
                    ad[j].push_back(i);
                }
            }
        }
        int res = 0;
        for(int i = 0 ; i < V ; i++){
            if(!vis[i]){
                res++;
                dfs(ad, V, vis, i);
            }
        }
        return res;
    }
};
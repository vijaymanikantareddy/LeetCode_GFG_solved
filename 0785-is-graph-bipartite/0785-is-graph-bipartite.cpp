class Solution {
public:
    bool dfs(vector<int> adj[], vector<int>& vis, int color, int node){
        vis[node] = color;
        for(auto it: adj[node]){
            if(vis[it] == -1){
                if(dfs(adj, vis, !color, it) == false){
                    return false;
                }
            }else if(vis[it] == color){
                return false;
            }
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int> adj[n];
        vector<int> vis(graph.size(), -1);
        for(int i = 0 ; i < graph.size() ; i++){
            for(auto it: graph[i]){
                adj[i].push_back(it);
            }
        }
        
        for(int i = 0 ; i < n ; i++){
            if(vis[i] == -1){
                if(dfs(adj, vis, 0, i) == false){
                    return false;
                }
            }
        }
        
        return true;
    }
};
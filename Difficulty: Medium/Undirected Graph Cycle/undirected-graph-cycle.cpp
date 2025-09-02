class Solution {
  public:
    bool fun(vector<int> adj[], int V, int src){
        vector<bool> vis(V, 0);
        queue<pair<int, int>> q;
        q.push({src, -1});
        vis[src] = 1;
        while(!q.empty()){
            int node = q.front().first;
            int parent = q.front().second;
            q.pop();
            
            for(auto it: adj[node]){
                if(!vis[it]){
                    vis[it] = 1;
                    q.push({it, node});
                }else if(it != parent) return true;
            }
        }
        return false;
    }
    bool isCycle(int V, vector<vector<int>>& edges) {
        // Code here
        vector<int> adj[V];
        for(auto it: edges){
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }
        for(int i = 0 ; i < V ; i++){
            if(fun(adj, V, i) == true) return true;
        }
        return false;
    }
};
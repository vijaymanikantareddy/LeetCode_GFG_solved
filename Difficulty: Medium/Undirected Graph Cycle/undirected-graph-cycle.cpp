class Solution {
  public:
    bool detect(int src, vector<int> adj[], vector<int>& vis){
        vis[src] = 1;
        queue<pair<int, int>> q;
        q.push({src, -1});
        while(!q.empty()){
            int node = q.front().first;
            int parent = q.front().second;
            q.pop();
            for(auto adjNode: adj[node]){
                if(!vis[adjNode]){
                    vis[adjNode] = 1;
                    q.push({adjNode, node});
                }else if(adjNode != parent){
                    return true;
                }
            }
        }
        return false;
    }
    bool isCycle(int V, vector<vector<int>>& edges) {
        // Code here
        vector<int> adj[V];
        for(auto edge: edges){
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }
        vector<int> vis(V, 0);
        for(int i = 0 ; i < V ; i++){
            if(vis[i] == 0){
                if(detect(i, adj, vis) == true) return true;
            }
            
        }
        return false;
    }
};
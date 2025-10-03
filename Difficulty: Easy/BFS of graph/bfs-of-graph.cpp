class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfs(vector<vector<int>> &adj) {
        // Code here
        vector<int> res;
        queue<int> q;
        q.push(0);
        unordered_set<int> vis;
        vis.insert(0);
        res.push_back(0);
        while(!q.empty()){
            int t = q.front();
            q.pop();
            for(int i = 0 ; i < adj[t].size() ; i++){
                if(vis.find(adj[t][i]) == vis.end()){
                    vis.insert(adj[t][i]);
                    res.push_back(adj[t][i]);
                    q.push(adj[t][i]);
                }
            }
        }
        return res;
    }
};
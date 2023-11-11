class Graph {
public:
    vector<vector<pair<int, int>>> adj;
    Graph(int n, vector<vector<int>>& edges) {
        adj.resize(n);
        for(auto it: edges){
            adj[it[0]].push_back({it[1], it[2]});
        }
    }
    
    void addEdge(vector<int> edge) {
        adj[edge[0]].push_back({edge[1], edge[2]});
    }
    
    int shortestPath(int node1, int node2) {
        int n = adj.size();
        vector<int> dist(n, INT_MAX);
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;
        pq.push({0, node1});

        while(!pq.empty()){
            int cn = pq.top().second, cd = pq.top().first;
            pq.pop();
            if(cn == node2) return cd;
            if(dist[cn] < cd){
                continue;
            }
            for(auto it: adj[cn]){
                int neigh = it.first, di = it.second;
                if(di + cd < dist[neigh]){
                    dist[neigh] = di + cd;
                    pq.push({di+cd, neigh});
                }
            }
        }
        return (dist[node2] == INT_MAX)? -1: dist[node2];
    }
};

/**
 * Your Graph object will be instantiated and called as such:
 * Graph* obj = new Graph(n, edges);
 * obj->addEdge(edge);
 * int param_2 = obj->shortestPath(node1,node2);
 */
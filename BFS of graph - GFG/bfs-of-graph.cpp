//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void bfs(vector<int> adj[], int V, vector<int>& res, vector<int>& vis){
        queue<int> q;
        q.push(0);
        while(!q.empty()){
            int node = q.front();
            if(!vis[node]){
                res.push_back(node);
                for(auto it: adj[node]){
                    q.push(it);
                }
            }
            vis[node] = 1;
            q.pop();
            
        }
    }
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int> res;
        vector<int> vis(V, 0);
        bfs(adj, V, res, vis);
        return res;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >>

            E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            // 		adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.bfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends
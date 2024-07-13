//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> shortestPath(int n, int m, vector<vector<int>>& edges) {
        // Code here
        vector<pair<int, int>> adj[n+1];
        for(auto it: edges){
            adj[it[0]].push_back({it[1], it[2]});
            adj[it[1]].push_back({it[0], it[2]});
        }
        vector<int> vis(n+1, 0);
        vector<int> parent(n+1);
        for(int i = 1 ; i <= n ; i++) parent[i] = i;
        vector<int> dist(n+1, INT_MAX);
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        
        pq.push({0, 1});
        dist[1] = 0;
        while(!pq.empty()){
            int di = pq.top().first; // in Priority queue
            int node = pq.top().second;
            pq.pop();
            if(vis[node]) continue;
            vis[node] = 1;
            
            for(auto it: adj[node]){    // In Adjacency list
                int value = it.first;
                int weight = it.second;
                if(dist[value] > di + weight){
                    dist[value] = di + weight;
                    parent[value] = node;
                    pq.push({dist[value], value});
                }
            }
        }
        if(dist[n] == INT_MAX) return {-1};
        vector<int> res;
        int i = n;
        while(i != parent[i]){
            res.push_back(i);
            i = parent[i];
        }
        res.push_back(1);
        res.push_back(dist[n]);
        reverse(res.begin(), res.end());
        
        return res;
    }
};

//{ Driver Code Starts.
int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> edges;
        map<pair<int, int>, int> mp;
        for (int i = 0; i < m; ++i) {
            vector<int> temp;
            for (int j = 0; j < 3; ++j) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            edges.push_back(temp);
            mp[{edges.back()[0], edges.back()[1]}] = edges.back()[2];
            mp[{edges.back()[1], edges.back()[0]}] = edges.back()[2];
        }

        Solution obj;
        vector<int> res = obj.shortestPath(n, m, edges);
        int ans = 0;
        for (int i = 2; i < res.size(); i++) {
            ans += mp[{res[i], res[i - 1]}];
        }
        if (ans == res[0]) {

        } else if (res.size() == 1 && res[0] == -1)
            ans = res[0];
        else
            ans = -2;
        cout << ans << endl;
    }
}

// } Driver Code Ends
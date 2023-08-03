//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
     void dfs(stack<int>& st, vector<pair<int, int>> adj[], int node, vector<int>& vis){
         vis[node] = 1;
         for(auto it: adj[node]){
             if(!vis[it.first]){
                 dfs(st, adj, it.first, vis);
             }
         }
         st.push(node);
     }
     vector<int> shortestPath(int N,int M, vector<vector<int>>& edges){
        // code here
        vector<pair<int,int>> adj[N];
        for(int i = 0 ; i < M ; i++){
            int u = edges[i][0];
            int v = edges[i][1];
            int w = edges[i][2];
            adj[u].push_back({v, w});
        }
        vector<int> vis(N, 0);
        stack<int> st;
        for(int i = 0 ; i < N ; i++){
            if(!vis[i]){
                dfs(st, adj, i, vis);
            }
        }
        vector<int> res(N, INT_MAX);
        res[0] = 0;
        while(!st.empty()){
            int so = st.top();
            st.pop();
            for(auto it: adj[so]){
                int de = it.first;
                int w = it.second;
                if(res[so] != INT_MAX and res[so]+w < res[de]){
                    res[de] = res[so]+w;
                }
            }
        }
        for(int i = 0 ; i < N ; i++){
            if(res[i] == INT_MAX) res[i] = -1;
        }
        return res;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> edges;
        for(int i=0; i<m; ++i){
            vector<int> temp;
            for(int j=0; j<3; ++j){
                int x; cin>>x;
                temp.push_back(x);
            }
            edges.push_back(temp);
        }
        Solution obj;
        vector<int> res = obj.shortestPath(n, m, edges);
        for (auto x : res) {
            cout << x << " ";
        }
        cout << "\n";
    }
}

// } Driver Code Ends
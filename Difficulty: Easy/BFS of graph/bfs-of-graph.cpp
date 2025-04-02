//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfs(vector<vector<int>> &adj) {
        // Code here
        vector<int> res;
        int n = adj.size();
        vector<int> ad[n];
        for(int i = 0 ; i < n ; i++){
            for(int j : adj[i]){
                ad[i].push_back(j);
                ad[j].push_back(i);
            }
        }
        queue<int> q;
        q.push(0);
        vector<bool> vis(n, false);
        while(!q.empty()){
            int t = q.front();
            q.pop();
            if(!vis[t]){
                vis[t] = true;
                res.push_back(t);
                for(auto it: ad[t]){
                    q.push(it);
                }
            }
        }
        return res;
    }
};


//{ Driver Code Starts.

int main() {
    int tc;
    cin >> tc;
    cin.ignore();
    while (tc--) {
        int V;
        cin >> V;
        cin.ignore();
        // Use vector of vectors instead of array of vectors.
        vector<vector<int>> adj(V);

        for (int i = 0; i < V; i++) {
            string input;
            getline(cin, input);
            int num;
            vector<int> node;
            stringstream ss(input);
            while (ss >> num) {
                node.push_back(num);
            }
            adj[i] = node;
        }

        Solution obj;
        vector<int> ans = obj.bfs(adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends
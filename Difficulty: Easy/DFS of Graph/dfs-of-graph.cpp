//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    void dfs(vector<int> ad[], int node, vector<int>& res, vector<bool>& vis){
        if(vis[node]) return ;
        vis[node] = true;
        res.push_back(node);
        for(auto it: ad[node]){
            if(!vis[it]){
                dfs(ad, it, res, vis);
            }
        }
        return;
    }
    vector<int> dfs(vector<vector<int>>& adj) {
        // Code here
        int n = adj.size();
        vector<int> ad[n];
        for(int i = 0 ; i < n ; i++){
            for(auto it: adj[i]){
                ad[i].push_back(it);
                ad[it].push_back(i);
            }
        }
        vector<bool> vis(n, false);
        vector<int> res;
        dfs(ad, 0, res, vis);
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
        vector<vector<int>> adj(
            V); // Use vector of vectors instead of array of vectors.

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
        vector<int> ans = obj.dfs(adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends
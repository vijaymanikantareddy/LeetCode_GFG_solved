//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    bool dfs(vector<int> adj[], int node, int color, vector<int>& vis){
        vis[node] = color;
        for(auto it: adj[node]){
            if(vis[it] == -1){
                if(dfs(adj, it, !color, vis) == false){
                    return false;
                }
            }else if(vis[it] == color){
                return false;
            }
        }
        return true;
    }
	bool isBipartite(int V, vector<int>adj[]){
	    // Code here
	    vector<int> vis(V, -1);
	    for(int i = 0 ; i < V ; i++){
	        if(vis[i] == -1){
	            if(dfs(adj, i, 0, vis) == false){
	                return false;
	            }
	        }
	    }
	    return true;
	}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		Solution obj;
		bool ans = obj.isBipartite(V, adj);    
		if(ans)cout << "1\n";
		else cout << "0\n";  
	}
	return 0;
}
// } Driver Code Ends
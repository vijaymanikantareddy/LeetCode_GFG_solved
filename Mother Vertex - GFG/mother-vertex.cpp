//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution 
{
    public:
    //Function to find a Mother Vertex in the Graph.
    void dfs(vector<int> adj[], int node, vector<int>& vis){
        vis[node] = 1;
        for(auto it: adj[node]){
            if(!vis[it]){
                dfs(adj, it, vis);
            }
        }
    }
	int findMotherVertex(int V, vector<int>adj[])
	{
	    // Code here
	    for(int i = 0 ; i < V ; i++){
	        vector<int> vis(V, 0);
	        dfs(adj, i, vis);
	        bool flag = true;
	        for(int i = 0 ; i < V ; i++){
	            if(!vis[i]){
	                flag = false;
	                break;
	            }
	        }
	        if(flag){
	            return i;
	        }
	    }
	    return -1;
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
		}
		Solution obj;
		int ans = obj.findMotherVertex(V, adj);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends
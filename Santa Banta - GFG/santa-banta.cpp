//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution{
public:
    vector<int> primes;
    void precompute(){
        int n = 1299793;
        vector<int> arr(n, 1);
        arr[0] = arr[1] = 0;
        for(int i = 2 ; i*i < n ; i++){
            if(arr[i]){
                for(int j = i*i ; j < n ; j+=i){
                    arr[j] = 0;
                }
            }
        }
        for(int i = 2 ; i < n ; i++){
            if(arr[i]){
                primes.push_back(i);
            }
        }
    }
    void dfs(vector<int>& vis, vector<vector<int>>& adj, int& cnt, int node){
        if(vis[node]){
            return;
        }
        cnt++;
        vis[node] = 1;
        for(auto it: adj[node]){
            if(!vis[it]){
                dfs(vis, adj, cnt, it);
            }
        }
    }
    int helpSanta(int n, int m, vector<vector<int>> &g){
        // Code here
        if(m == 0){
            return -1;
        }
        vector<int> vis(n+1, 0);
        int mx = 0;
        for(int i = 0 ; i <= n ; i++){
            if(!vis[i]){
                int cnt = 0;
                dfs(vis, g, cnt, i);
                mx = max(cnt, mx);
            }
        }
        if(mx == 1){
            return -1;
        }
        return primes[mx-1];
    }
};

//{ Driver Code Starts.

int main(){
	int t;cin>>t;
	Solution ob;
	ob.precompute();
	while(t--){
        int n,e,u,v;
        cin>>n>>e;
        vector<vector<int>> g(n+10);
        
		for(int i = 0; i < e; i++)
		{
			cin>>u>>v;
			g[u].push_back(v);
			g[v].push_back(u);
		}
		cout << ob.helpSanta(n, e, g) << endl;
		
	}
}



// } Driver Code Ends
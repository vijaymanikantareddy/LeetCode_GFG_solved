//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    bool dfs(vector<vector<int>>& grid, int sr, int sc, vector<vector<int>>& vis){
        int n = grid.size();
        int m = grid[0].size();
        vis[sr][sc] = 1;
        int rows [] = {1, -1, 0, 0};
        int cols[] = {0, 0, -1, 1};
        for(int i = 0 ; i < 4 ; i++){
            int nrow = sr+rows[i];
            int ncol = sc+cols[i];
            if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && grid[nrow][ncol] >= 2 && !vis[nrow][ncol]){
                if(grid[nrow][ncol] == 2){
                    return true;
                }
                if(dfs(grid, nrow, ncol, vis)){
                    return true;
                }
            }
        }
        return false;
    }
    //Function to find whether a path exists from the source to destination.
    bool is_Possible(vector<vector<int>>& grid) 
    {
        //code here
        int n = grid.size();
        int m = grid[0].size();
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                if(grid[i][j] == 1){
                    vector<vector<int>> vis(n, vector<int>(m, 0));
                    if(dfs(grid, i, j, vis)){
                        return true;
                    }
                }
            }
        }
        return false;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>grid(n, vector<int>(n, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		bool ans = obj.is_Possible(grid);
		cout << ((ans) ? "1\n" : "0\n");
	}
	return 0;
}
// } Driver Code Ends
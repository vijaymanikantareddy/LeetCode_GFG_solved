//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
    public:
    void change(vector<vector<int>>& matrix, vector<vector<int>>& vis, int row, int col){
        vis[row][col] = 1;
        matrix[row][col] = 0;
        int n = matrix.size();
        int m = matrix[0].size();
        int dr[] = {1, -1, 0, 0};
        int dc[] = {0, 0, 1, -1};
        for(int i = 0 ; i < 4 ; i++){
            int nrow = dr[i]+row;
            int ncol = dc[i]+col;
            if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && matrix[nrow][ncol] && !vis[nrow][ncol]){
                change(matrix, vis, nrow, ncol);
            }
        }
    }
    void dfs(vector<vector<int>>& matrix, int row, int col, vector<vector<int>>& vis){
        vis[row][col] = 1;
        int n = matrix.size();
        int m = matrix[0].size();
        int dr[] = {1, -1, 0, 0};
        int dc[] = {0, 0, 1, -1};
        for(int i = 0 ; i < 4 ; i++){
            int nrow = dr[i]+row;
            int ncol = dc[i]+col;
            if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && matrix[nrow][ncol] && !vis[nrow][ncol]){
                dfs(matrix, nrow, ncol, vis);
            }
        }
    }
    int closedIslands(vector<vector<int>>& matrix, int n, int m) {
        // Code here
        vector<vector<int>> vis(n, vector<int>(m, 0));
        for(int i = 0 ; i < m ; i++){
            if(matrix[0][i] && vis[0][i] == 0){
                change(matrix, vis, 0, i);
            }
            if(matrix[n-1][i] && vis[n-1][i] == 0){
                change(matrix, vis, n-1, i);
            }
        }
        for(int i = 0 ; i < n ; i++){
            if(matrix[i][0] && vis[i][0]==0){
                change(matrix, vis, i, 0);
            }
            if(matrix[i][m-1] && vis[i][m-1] == 0){
                change(matrix, vis, i, m-1);
            }
        }
        int res = 0;
        for(int i = 0; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                if(matrix[i][j] && !vis[i][j]){
                    res++;
                    dfs(matrix, i, j, vis);
                }
            }
        }
        return res;
    }
};

//{ Driver Code Starts.
int main() {
	int t;
	cin>>t;
	while(t--)
	{
        int N, M;
        cin >> N >> M;
        vector<vector<int>>matrix(N, vector<int>(M, 0));
        for(int i=0; i<N; i++)
            for(int j=0; j<M; j++)
                cin >> matrix[i][j];
                
        Solution obj;
        int ans = obj.closedIslands(matrix, N, M);
        cout << ans << "\n";
    }
	
	return 0;
	
}


// } Driver Code Ends
//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    void dfs(vector<vector<char>>& mat, vector<vector<int>>& vis, int row, int col){
        vis[row][col] = 1;
        int n = mat.size();
        int m = mat[0].size();
        int rows[4] = {-1, 0, 1, 0};
        int cols[4] = {0, -1, 0, 1};
        for(int i = 0 ; i < 4 ; i++){
            int nrow = row+rows[i];
            int ncol = col + cols[i];
            if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && mat[nrow][ncol] == 'O' && !vis[nrow][ncol]){
                dfs(mat, vis, nrow, ncol);
            }
        }
    }
    vector<vector<char>> fill(int n, int m, vector<vector<char>> mat)
    {
        // code here
        vector<vector<int>> vis(n, vector<int>(m, 0));
        for(int i = 0 ; i < n ; i++){
            if(mat[i][0] == 'O' && vis[i][0] == 0){
                dfs(mat, vis, i, 0);
            }
            if(mat[i][m-1] == 'O' && vis[i][m-1] == 0){
                dfs(mat, vis, i, m-1);
            }
        }
        for(int i = 0 ; i < m ; i++){
            if(mat[0][i] == 'O' && vis[0][i] == 0){
                dfs(mat, vis, 0, i);
            }
            if(mat[n-1][i] == 'O' && vis[n-1][i] == 0){
                dfs(mat, vis, n-1, i);
            }
        }
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j<m ; j++){
                if(mat[i][j] =='O' && !vis[i][j]){
                    mat[i][j] = 'X';
                }
            }
        }
        return mat;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<char>> mat(n, vector<char>(m, '.'));
        for(int i = 0;i < n;i++)
            for(int j=0; j<m; j++)
                cin>>mat[i][j];
        
        Solution ob;
        vector<vector<char>> ans = ob.fill(n, m, mat);
        for(int i = 0;i < n;i++) {
            for(int j = 0;j < m;j++) {
                cout<<ans[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}
// } Driver Code Ends
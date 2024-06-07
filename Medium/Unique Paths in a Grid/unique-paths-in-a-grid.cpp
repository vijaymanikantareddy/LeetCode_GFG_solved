//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int mod = 1e9+7;
    int solve(vector<vector<int>>& grid, vector<vector<int>>& dp, int n, int m, int i, int j){
        if(i == n-1 && j == m-1 && grid[i][j] != 0) return 1;
        if(i >= n || j >= m) return 0;
        if(grid[i][j] == 0){
            return 0;
        }
        if(dp[i][j] != -1) return dp[i][j];
        int down = solve(grid, dp, n, m, i+1, j)%mod;
        int right = solve(grid, dp, n, m, i, j+1)%mod;
        return dp[i][j] = (down%mod + right%mod)%mod;
    }
    int uniquePaths(int n, int m, vector<vector<int>> &grid) {
        // code here
        vector<vector<int>> dp(n, vector<int>(m, -1));
        return solve(grid, dp, n, m, 0, 0)%mod;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,m,x;
        cin>>n>>m;
        
        vector<vector<int>> grid(n,vector<int>(m));
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>grid[i][j];
            }
        }

        Solution ob;
        cout << ob.uniquePaths(n,m,grid) << endl;
    }
    return 0;
}
// } Driver Code Ends
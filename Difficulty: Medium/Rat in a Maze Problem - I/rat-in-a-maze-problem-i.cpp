//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    vector<string> res;
    void dfs(vector<vector<int>> &m, string temp, int n, int col, int row, vector<vector<int>>& vis){
        if(row < 0 || col < 0 || row >= n || col >= n){
            return;
        }
        if(m[row][col] == 0) return;
        vis[row][col] = 1;
        if(row == n-1 && col == n-1){
            res.push_back(temp);
            temp = "";
            // return;
        }
        if(col-1 >= 0 && row >= 0 && m[row][col-1] && !vis[row][col-1])
            dfs(m, temp+"L", n, col-1, row, vis);
        if(row+1 < n && col < n && m[row+1][col] && !vis[row+1][col])
            dfs(m, temp+"D", n, col, row+1, vis);
        if(col >= 0 && row-1 >= 0 && m[row-1][col] && !vis[row-1][col])
            dfs(m, temp+"U", n, col, row-1, vis);
        if(col+1 < n && row < n && m[row][col+1] && !vis[row][col+1])
            dfs(m, temp+"R", n, col+1, row, vis);
        
        vis[row][col] = 0;
    }
    vector<string> findPath(vector<vector<int>> &mat) {
        // Your code goes here
        string temp = "";
        int n = mat.size();
        vector<vector<int>> vis(n, vector<int>(n, 0));
        dfs(mat, temp, n, 0, 0, vis);
        return res;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++)
                cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends
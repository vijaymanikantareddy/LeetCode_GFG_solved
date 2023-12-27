//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> antiDiagonalPattern(vector<vector<int>> matrix) 
    {
        // Code here
        vector<int> res;
        int n = matrix.size(), m = matrix[0].size();
        int t = n + m - 1;
        int i = 0, j = 0;
        
        for(int ti = 0 ; ti < m ; ti++){
            j = ti;
            i = 0;
            while(i < n && j >= 0 && i+j == ti){
                res.push_back(matrix[i][j]);
                i++;
                j--;
            }
            
        }
        
        i = 1, j = m-1;
        for(int ti = 1 ; ti < n ; ti++){
            i = ti;
            j = m-1;
            int s = i + j;
            while(i < n && j >= 0 && i+j == s){
                res.push_back(matrix[i][j]);
                i++;
                j--;
            }
            
        }
        
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
        vector<vector<int>> matrix;
        matrix.resize(n, vector<int>(n));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> matrix[i][j];
            }
        }

        Solution ob;
        vector<int> ans = ob.antiDiagonalPattern(matrix);
        for (int i = 0; i < ans.size(); ++i) cout << ans[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends
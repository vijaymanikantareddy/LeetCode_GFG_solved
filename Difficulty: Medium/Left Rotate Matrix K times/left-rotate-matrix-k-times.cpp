//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<int> fun(vector<int> arr, int k){
        vector<int> res;
        for(int i = k ; i < arr.size() ; i++){
            res.push_back(arr[i]);
        }
        for(int i = 0 ; i < k ; i++){
            res.push_back(arr[i]);
        }
        return res;
    }
    vector<vector<int>> rotateMatrix(int k, vector<vector<int>> mat) {
        // code here
        k = k%mat[0].size();
        for(int i = 0 ; i < mat.size(); i++){
            mat[i] = fun(mat[i], k);
        }
        return mat;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        vector<vector<int>> mat(n, vector<int>(m));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> mat[i][j];
        Solution ob;
        vector<vector<int>> ans = ob.rotateMatrix(k, mat);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++)
                cout << ans[i][j] << " ";
            cout << "\n";
        }
    }
}

// } Driver Code Ends
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int fun(string a, string b, vector<vector<int>>& dp,
    int i, int j){
        if(i < 0) return j+1;
        if(j < 0) return i+1;
        if(dp[i][j] != -1) return dp[i][j];
        int ans = 0;
        if(a[i] == b[j]){
            ans = fun(a, b, dp, i-1, j-1);
        }else{
            int ins = fun(a, b, dp, i, j-1);
            int del = fun(a, b, dp, i-1, j);
            int rep = fun(a, b, dp, i-1, j-1);
            ans = 1 + min({ins, del, rep});
        }
        return dp[i][j] = ans;
    }
    int editDistance(string str1, string str2) {
        // Code here
        int n = str1.size(), m = str2.size();
        vector<vector<int>> dp(n, vector<int>(m, -1));
        return fun(str1, str2, dp, n-1, m-1);
    }
};

//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        string s, t;
        cin >> s >> t;
        Solution ob;
        int ans = ob.editDistance(s, t);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends
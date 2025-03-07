//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

class Solution {
  public:
    int longestPalinSubseq(string &A) {
        // code here
        string B = A;
        int n = A.size();
        reverse(B.begin(), B.end());
        vector<vector<int>> dp(n+1, vector<int>(n+1, 0));
        for(int i = 0 ; i <= n ; i++){
            for(int j = 0 ; j <= n ; j++){
                if(i == 0 or j == 0) dp[i][j] = 0;
                else if(A[i-1] == B[j-1]){
                    dp[i][j] = 1+dp[i-1][j-1];
                }else{
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
                }
            }
        }
        return dp[n][n];
    }
};


//{ Driver Code Starts.

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.longestPalinSubseq(s) << endl;

        cout << "~"
             << "\n";
    }
}

// } Driver Code Ends
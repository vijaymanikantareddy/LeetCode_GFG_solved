//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    /*You are required to complete this method*/
    int solve(vector<vector<int>>& dp, string s, string p, int n, int m){
        if(n < 0 && m < 0) return 1;    // string and pattern matched fully
        if(n >= 0 && m < 0) return 0;   // string characters are there but the pattern ended
        if(n < 0 && m >= 0){        //string characters are completed, but the pattern not ended
            for(int i = 0 ; i <= m ; i++){
                if(p[i] != '*') return 0;   // since pattern is there, check for 
            }
            return 1;
        }
        
        if(dp[n][m] != -1) return dp[n][m];
        
        if(s[n] == p[m] || p[m] == '?'){    // both characters are equal
            dp[n][m] = solve(dp, s, p, n-1, m-1);
        }else if(p[m] == '*'){  // since it is *, check for two cases (skip in s and skip in p)
            dp[n][m] = (solve(dp, s, p, n-1, m) || solve(dp, s, p, n, m-1));
        }else{  // characters are not equal, so 0
            dp[n][m] = 0;   
        }
        return dp[n][m];
    }
    int wildCard(string pattern, string str) {
        // code here
        int n = str.size(), m = pattern.size();
        vector<vector<int>> dp(n, vector<int>(m, -1));
        return solve(dp, str, pattern, n-1, m-1);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, text;
        cin >> pat;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin >> text;
        Solution obj;
        cout << obj.wildCard(pat, text) << endl;
    }
}

// } Driver Code Ends
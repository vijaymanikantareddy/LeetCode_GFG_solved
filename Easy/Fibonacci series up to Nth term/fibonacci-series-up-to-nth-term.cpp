//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> Series(int n) {
        // Code here
        int mod = 1e9+7;
        if(n == 0) return {0};
        if(n == 1) return {0, 1};
        vector<int> res(n+1, 0);
        res[1] = 1;
        for(int i = 2 ; i <= n ; i++){
            res[i] = (res[i-1]+res[i-2])%mod;
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
        Solution obj;

        vector<int> ans = obj.Series(n);
        for (auto x : ans) cout << x << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends
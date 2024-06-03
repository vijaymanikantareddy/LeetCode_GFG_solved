//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int numberOfConsecutiveOnes(int n) {
        // code here
        if(n == 0 || n == 1) return 0;
        if(n == 2) return 1;
        if(n == 3) return 3;
        int mod = 1e9+7;
        int ans = 1, t1 = 0, t2 = 1;
        for(int i = 3 ; i <= n; i++){
            int t = t1+t2;
            t1 = t2;
            t2 = t%mod;
            ans = ((ans*2%mod) + t%mod)%mod;
        }
        return ans%mod;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.numberOfConsecutiveOnes(N) << endl;
    }
    return 0;
}

// } Driver Code Ends
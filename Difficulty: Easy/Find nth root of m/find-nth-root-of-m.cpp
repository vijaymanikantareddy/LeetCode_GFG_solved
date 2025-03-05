//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    long long fun(int f, int n, int m){
        long long res = 1;
        for(int i = 0 ; i < n ; i++){
            res *= f;
            if(res > m){
              return INT_MAX;
            }
        }
        return res;
    }
    int nthRoot(int n, int m) {
        // Code here.
        int low = 1, high = m;
        while(low <= high){
          int mid = low + (high - low)/2;
          long long f = fun(mid, n, m);
          if(f == m) return mid;
          else if(f > m || f == INT_MAX){
            high = mid - 1;
          }else{
            low = mid + 1;
          }
        }
        return -1;
    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        Solution ob;
        int ans = ob.nthRoot(n, m);
        cout << ans << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends
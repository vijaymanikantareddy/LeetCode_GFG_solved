//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int smallestSubstring(string S) {
        // Code here
        int a = 0, b = 0, c = 0;
        int res = INT_MAX;
        int l = 0, r = 0;
        while(r < S.size()){
            if(S[r] == '0') a++;
            else if(S[r] == '1') b++;
            else c++;
            while(l < r && a > 0 && b > 0 && c > 0){
                res = min(r - l + 1, res);
                if(S[l] == '0') a--;
                else if(S[l] == '1') b--;
                else c--;
                l++;
            }
            r++;
        }
        return res == INT_MAX? -1 : res;
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.smallestSubstring(S);
        cout << endl;
    }
}
// } Driver Code Ends
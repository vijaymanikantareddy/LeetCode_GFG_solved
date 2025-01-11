//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int longestUniqueSubstr(string &s) {
        // code here
        map<char, int> mp;
        int res = 0;
        int i = 0, j = 0;
        while(i < s.size()){
            mp[s[i]]++;
            while(mp[s[i]] > 1){
                mp[s[j++]]--;
            }
            res = max(res, i - j + 1);
            i++;
        }
        return res;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {

        Solution obj;
        string s;
        cin >> s;
        cout << obj.longestUniqueSubstr(s) << endl;
        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends
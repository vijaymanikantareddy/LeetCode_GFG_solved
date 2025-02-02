//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int findSubString(string& s) {
        // Your code goes here
        unordered_map<char, int> mp;
        for(auto ch: s) mp[ch]++;
        int cnt = mp.size();
        mp.clear();
        int i = 0, j = 0, res = INT_MAX;
        while(j < s.size()){
            mp[s[j]]++;
            while(i <= j && mp.size() == cnt){
                if(mp[s[i]] > 1){
                    mp[s[i]]--;
                }else{
                    break;
                }
                i++;
            }
            if(mp.size() == cnt)
                res = min(res, j - i + 1);
            j++;
        }
        return res;
    }
};

//{ Driver Code Starts.
//   Driver code
int main() {
    int t;
    cin >> t;
    while (t--) {

        string str;
        cin >> str;
        Solution ob;
        cout << ob.findSubString(str) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends
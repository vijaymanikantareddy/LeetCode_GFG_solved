//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    int ans = 0;
    void findstr(string s, int left, int right){
        while(left >= 0 && right < s.size()){
            if(s[left] != s[right]){
                break;
            }
            if(right - left + 1 > 1) ans++;
            left--;
            right++;
        }
    }
    int countPS(string &s) {
        // code here
        for(int i = 0 ; i < s.size() ; i++){
            findstr(s, i, i);
            findstr(s, i, i+1);
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.countPS(s) << endl;
        cout << "~\n";
    }
    return 0;
}
// } Driver Code Ends
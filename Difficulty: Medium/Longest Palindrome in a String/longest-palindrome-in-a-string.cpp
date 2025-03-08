//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string ans = "";
    void findstr(string s, int left, int right){
        while(left >= 0 && right < s.size()){
            if(s[left] != s[right]){
                break;
            }
            left--;
            right++;
        }
        if(right - left - 1 > ans.size()){
            ans = s.substr(left+1, right-left-1);
        }
    }
    string longestPalindrome(string &s) {
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
        string S;
        cin >> S;

        Solution ob;
        cout << ob.longestPalindrome(S) << endl;

        cout << "~"
             << "\n";
    }
}

// } Driver Code Ends
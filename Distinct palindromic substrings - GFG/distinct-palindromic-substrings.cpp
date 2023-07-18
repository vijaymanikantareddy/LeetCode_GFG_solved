//{ Driver Code Starts
// C++ program to find all distinct palindrome sub-strings
// of a given string
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
  public:
    unordered_set<string> se;
    void fun(string s, int l, int r){
        while(l >= 0 && r < s.size()){
            if(s[l] != s[r]){
                break;
            }
            se.insert(s.substr(l, r-l+1));
            l--;
            r++;
        }
    }
    int palindromeSubStrs(string s) {
        // code here
        for(int i = 0 ; i < s.size() ; i++){
            fun(s, i, i);
            fun(s, i, i+1);
        }
        return se.size();
    }
};

//{ Driver Code Starts.

// Driver program
int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        cout << ob.palindromeSubStrs(str) << endl;
    }
    return 0;
}

// } Driver Code Ends
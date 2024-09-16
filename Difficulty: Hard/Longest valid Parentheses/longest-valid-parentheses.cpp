//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int maxLength(string& str) {
        // code here
        int mx = 0, left = 0, right = 0;
        for(auto it: str){
            if(it == '('){
                left++;
            }else{
                right++;
            }
            if(left == right){
                mx = max(mx, 2*left);
            }
            else if(left < right){
                left = 0;
                right = 0;
            }
        }
        left = 0;
        right = 0;
        for(int i = str.size()-1 ; i >= 0 ; i--){
            if(str[i] == '('){
                left++;
            }else{
                right++;
            }
            if(left == right){
                mx = max(mx, 2*left);
            }
            else if(left > right){
                left = 0;
                right = 0;
            }
        }
        return mx;
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
        cout << ob.maxLength(S) << "\n";
    }
    return 0;
}
// } Driver Code Ends
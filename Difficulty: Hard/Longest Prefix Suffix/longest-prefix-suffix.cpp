//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++

class Solution {
  public:
    int lps(string str) {
        // Your code goes here
        int n = str.size();
        vector<int> v(n, 0);
        int ind = 0;
        for(int i = 1 ; i < n ; i++){
            if(str[i] == str[ind]){
                v[i] = ind + 1;
                ind++;
            }else{
                if(ind == 0){
                    v[i] = 0;
                }else{
                    ind = v[ind-1];
                    i--;
                }
            }
        }
        return v[n-1];
    }
};

//{ Driver Code Starts.

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;

        Solution ob;

        cout << ob.lps(str) << "\n";
    }

    return 0;
}

// } Driver Code Ends
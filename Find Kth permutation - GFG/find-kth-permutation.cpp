//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
public:
    
    string kthPermutation(int n, int k)
    {
        // code here
        string st = "";
        for(int i = 1; i <= n ; i++){
            st += to_string(i);
        }
        for(int i = 1 ; i < k ; i++){
            next_permutation(st.begin(), st.end());
        }
        return st;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        Solution ob;
        string ans = ob.kthPermutation(n, k);
        cout << ans;
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends
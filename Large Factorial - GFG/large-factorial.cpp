//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++


class Solution{
public:
    vector<long long> factorial(vector<long long> a, int n) {
        long long mx = a[0];
        for(int i = 1 ; i < n ; i++){
            mx = mx > a[i]? mx: a[i];
        }
        vector<long long> fact(mx+1);
        int mod = 1e9+7;
        fact[0] = 1;
        for(int i = 1 ; i <= mx ; i++){
            fact[i] = i*(fact[i-1])%mod;
            fact[i] %= mod;
        }
        vector<long long> res;
        for(int i = 0 ; i < n ; i++){
            res.push_back(fact[a[i]]);
        }
        return res;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        vector<long long> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<long long> res = ob.factorial(a, n);
        for (i = 0; i < n; i++) {
            cout << res[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends
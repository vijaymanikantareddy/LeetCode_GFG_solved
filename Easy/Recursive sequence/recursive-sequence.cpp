//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    long long sequence(int n){
        // code here
        long long res = 0;
        int mod = 1e9+7;
        int lim = 1, i = 1;
        while(lim <= n){
            long long s = 1;
            int j = 0;
            while(j < lim){
                s = (s*i)%mod;
                i++;
                j++;
            }
            // cout << s << " ";
            s %= mod;
            res = (res+s)%mod;
            res %= mod;
            lim++;
        }
        return res%mod;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        cout<<ob.sequence(N)<<endl;
    }
    return 0;
}
// } Driver Code Ends
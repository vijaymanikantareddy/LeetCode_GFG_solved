//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    bool isprime(long long n){
        if(n <= 1){
            return false;
        }
        for(long long i = 2 ; i*i <= n ; i++){
            if(n%i == 0){
                return false;
            }
        }
        return true;
    }
    long long primeProduct(long long L, long long R){
        // code here
        long long res = 1;
        long long mod = 1e9+7;
        for(long i = L ; i <= R ; i++)
        {
            if(isprime(i))
            {
                res *= i;
                res = res % mod;
            }
        }
        
        return res % mod;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        long long L, R;
        cin>>L>>R;
        
        Solution ob;
        cout<<ob.primeProduct(L, R)<<"\n";
    }
    return 0;
}
// } Driver Code Ends
//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    vector<int> sixyPrime(int L, int R) {
        // code here
        int n = 2e3+1;
        vector<int> primes(n, 1);
        primes[0] = primes[1] = 0;
        for(int i = 2 ; i < n ; i++){
            if(primes[i]){
                for(int j = i*i ; j < n ; j+=i){
                    primes[j] = 0;
                }
            }
        }
        vector<int> res;
        for(int i = L ; i <= R-6 ; i++){
            if(primes[i] && primes[i+6]){
                res.push_back(i);
                res.push_back(i+6);
            }
        }
        if(res.empty()) return {-1};
        return res;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int L,R;
        cin >> L >> R;
        Solution ob;
        vector<int>ans=ob.sixyPrime(L,R);    
        for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}

// } Driver Code Ends
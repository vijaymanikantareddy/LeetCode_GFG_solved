//{ Driver Code Starts


#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution {
  public:
    bool isprime(long long n){
        if(n <= 1){
            return false;
        }
        for(int i = 2 ; i*i <= n ; i++){
            if(n%i == 0){
                return false;
            }
        }
        return true;
    }
    int count3DivNums(long long L, long long R) {
        // code here
        int res = 0;
        long long i = ceil(sqrt(L));
        for( ; i*i <= R ; i++){
            if(isprime(i))
                res++;
        }
        return res;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long L,R;
        
        cin>>L>>R;

        Solution ob;
        cout << ob.count3DivNums(L,R) << endl;
    }
    return 0;
}
// } Driver Code Ends
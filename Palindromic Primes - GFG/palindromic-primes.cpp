//{ Driver Code Starts


#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution {
  public:
    bool ispalin(int n){
        int temp = n, rev = 0;
        while(n){
            rev = rev*10 + (n%10);
            n/=10;
        }
        return temp == rev;
    }
    int palPrimes(int n) {
        // code here
        vector<bool>primes(n+1, true);
        primes[0] = primes[1] = false;
        for(int i = 2 ; i*i <= n ; i++){
            if(primes[i]){
                for(int j = i*i ; j <= n ; j+=i){
                    primes[j] = false;
                }
            }
        }
        int cnt = 0;
        for(int i = 2 ; i <= n ; i++){
            if(primes[i] && ispalin(i)){
                cnt++;
            }
        }
        return cnt;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        
        cin>>n;

        Solution ob;
        cout << ob.palPrimes(n) << endl;
    }
    return 0;
}
// } Driver Code Ends
//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public: 
    bool isprime(int n){
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
    long long int largestPrimeFactor(int N){
        // code here
        long long int res = -1;
        for(int i = 1 ; i*i <= N ; i++){
            if(N%i == 0){
                if(isprime(i)){
                    res = i;
                }
                if(isprime(N/i) && (N/i) > res){
                    res = (N/i);
                }
            }
        }
        return res;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.largestPrimeFactor(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends
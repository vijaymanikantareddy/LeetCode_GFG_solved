//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    void fun(int n, string& s, int ind, int x){
        for(int i = ind-1, iter = 0 ; i >= 0 && iter < x ; i--, iter++){
            if(s[i] != '1') s[i] = '2';
        }
        for(int i = ind+1, iter = 0 ; i < n && iter < x ; i++, iter++){
            if(s[i] != '1') s[i] = '2';
        }
    }
    bool wifiRange(int N, string S, int X){
        // code here
        for(int i = 0 ; i < N ; i++){
            if(S[i] == '1'){
                fun(N, S, i, X);
            }
        }
        for(int i = 0 ; i < N ; i++){
            if(S[i] == '0') return false;
        }
        return true;
    }
};

//{ Driver Code Starts.

int main(){
    int T;
    cin >> T;
    while(T--){
        int N, X;
        string S;
        cin >> N >> X >> S;
        Solution obj;
        cout << obj.wifiRange(N, S, X) << "\n";
    }
}

// } Driver Code Ends
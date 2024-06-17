//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int isdivisible7(string num){
        //complete the function here
        long long n = 0;
        for(int i = 0 ; i < num.size() ; i++){
            int d = num[i] - '0';
            n = n*10 + d;
            n %= 7;
        }
        return (n%7 == 0);
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        Solution ob;
        cout << ob.isdivisible7(s) << endl;
    }
    return 0;
}
// } Driver Code Ends
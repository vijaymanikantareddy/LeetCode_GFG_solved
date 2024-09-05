//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int minFlips (string s);
int32_t main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;

        cout << minFlips (s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends


int minFlips (string S)
{
    // your code here
    int a = 0, b = 0;
    int p = 1, q = 0;
    for(int i = 0 ; i < S.size() ; i++){
        if(S[i] - '0' != p){
            a++;
        }
        if(S[i] - '0' != q){
            b++;
        }
        p = !p;
        q = !q;
    }
    return min(a, b);
}
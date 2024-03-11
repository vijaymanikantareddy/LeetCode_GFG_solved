//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    int maxSum(int n)
    {
        //code here.
        vector<int> dp(n+1, 0);
        if(n <= 6) return n;
        for(int i = 0 ; i <= 6 ; i++) dp[i] = i;
        for(int i = 7; i <= n ; i++){
            dp[i] = max({i, dp[i/2] + dp[i/3] + dp[i/4]});
        }
        // for(int i = 0 ; i <= n ; i++) cout << dp[i] << " ";
        // cout << endl;
        return dp[n];
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        Solution ob;
        cout<<ob.maxSum(n)<<"\n";
    }
    return 0;
}
// } Driver Code Ends
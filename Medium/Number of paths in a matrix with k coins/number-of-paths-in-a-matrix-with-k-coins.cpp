//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
public:
    long long solve(int n, int k, vector<vector<int>>& arr, vector<vector<vector<long long>>>& dp, int r, int c){
        if(r == n || c == n || k < 0) return 0;
        if(r == n-1 && c == n-1){
            if(k == arr[r][c]) return 1;
            return 0;
        }
        if(dp[r][c][k] != -1) return dp[r][c][k];
        long long a = solve(n, k-arr[r][c], arr, dp, r+1, c);
        long long b = solve(n, k-arr[r][c], arr, dp, r, c+1);
        return dp[r][c][k] = a+b;
    }
    long long numberOfPath(int n, int k, vector<vector<int>> &arr){
        
        // Code Here
        vector<vector<vector<long long>>> dp(n, vector<vector<long long>>(n, vector<long long>(k+1, -1)));
        return solve(n, k, arr, dp, 0, 0);
    }
};

//{ Driver Code Starts.

int main()
{
    Solution obj;
    int i,j,k,l,m,n,t;
    cin>>t;
    while(t--)
    {
        cin>>k>>n;
        vector<vector<int>> v(n, vector<int>(n, 0));
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
                cin>>v[i][j];
        cout << obj.numberOfPath(n, k, v) << endl;
    }
}
// } Driver Code Ends
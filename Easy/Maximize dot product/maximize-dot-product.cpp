//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
		
	public:
	int fun(int i,int m,int n,int j,int a[],int b[],vector<vector<int>> &dp)
    {
        if(i==n && j!=m)
            return -1e9;
        if(j==m)
            return 0;
        if(dp[i][j] != -1)
            return dp[i][j];
        int t = a[i]*b[j] + fun(i+1, m, n, j+1, a, b, dp);
        int nt = fun(i+1, m, n, j, a, b, dp);
        
        return dp[i][j]=max(t,nt);
    }
	int maxDotProduct(int n, int m, int a[], int b[]) 
	{ 
		// Your code goes here
        vector<vector<int>> dp(n,vector<int>(m,-1));
        return fun(0, m, n, 0, a, b, dp);
	} 
};


//{ Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        int a[n], b[m];

        for(int i = 0; i < n; i++)
        	cin >> a[i];

        for(int i = 0; i < m; i++)
        	cin >> b[i];

       

	    Solution ob;
	    cout << ob.maxDotProduct(n, m, a, b) << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends
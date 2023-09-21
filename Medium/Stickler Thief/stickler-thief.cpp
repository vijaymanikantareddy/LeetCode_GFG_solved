//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

// } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum money the thief can get.
    int fun(int arr[], int n, vector<int>& dp, int ind){
        if(ind >= n) return 0;
        if(dp[ind] != -1) return dp[ind];
        
        int pick = arr[ind] + fun(arr, n, dp, ind+2);
        
        int nonpick = fun(arr, n, dp, ind+1);
        
        return dp[ind] = max(pick, nonpick);
    }
    int FindMaxSum(int arr[], int n)
    {
        // Your code here
        vector<int> dp(n, -1);
        return fun(arr, n, dp, 0);
    }
};

//{ Driver Code Starts.
int main()
{
    //taking total testcases
	int t;
	cin>>t;
	while(t--)
	{
	    //taking number of houses
		int n;
		cin>>n;
		int a[n];
		
		//inserting money of each house in the array
		for(int i=0;i<n;++i)
			cin>>a[i];
		Solution ob;
		//calling function FindMaxSum()
		cout<<ob.FindMaxSum(a,n)<<endl;
	}
	return 0;
}

// } Driver Code Ends
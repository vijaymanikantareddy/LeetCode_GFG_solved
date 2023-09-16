//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to count the number of ways in which frog can reach the top.
    long long countWays(int n)
    {
        
        // your code here
        int mod = 1e9+7;
        vector<long long> v(n+1, 0);
        v[1] = 1;
        if(n <= 2) return n;
        v[2] = 2;
        v[3] = 4;
        for(int i = 4 ; i <= n ; i++){
            v[i] = (v[i-1]+v[i-2]+v[i-3]) % mod;
        }
        return v[n];
    }
};


//{ Driver Code Starts.
int main()
{
    //taking testcases
	int t;
	cin >> t;
	
	while(t--)
	{
	    //taking number of steps in stair
		int n;
		cin>>n;
		Solution ob;
		//calling function countWays()
		cout << ob.countWays(n) << endl;
	}
    
    return 0;
    
}

// } Driver Code Ends
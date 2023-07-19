//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//Back-end complete function Template for C++

class Solution{
    public:
    long long int countSubsets(vector<int>&arr, int n, int l, int r){
        //Write your code here
        long long int res = 0;
        reverse(arr.begin(), arr.end());
        int cnt = pow(2, n);
        for(int i = 0 ; i < cnt ; i++){
            int ite = i, j = 0;
            long long int s = 0;
            while(ite){
                if((ite&1) == 1){
                    s += arr[j];
                }
                ite >>= 1;
                j++;
            }
            if(s >= l && s <= r){
                res++;
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
	    int n;
	    cin >> n;
	    vector<int>arr(n);
	    for(int i = 0 ; i < n; i++){
	        cin >> arr[i];
	    }
	    int l, r;
	    cin >> l >> r;
	    Solution ob;
	    long long int ans = ob.countSubsets(arr, n, l, r);
	    cout << ans<<endl;
	}
	return 0;
}

// } Driver Code Ends
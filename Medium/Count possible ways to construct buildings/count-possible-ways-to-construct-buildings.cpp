//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	int TotalWays(int N)
	{
	    // Code here
	    int mod = 1e9+7;
	    vector<long long> v(N+3);
	    v[0] = 0;
	    v[1] = 1;
	    for(int i = 2 ; i <= N+2 ; i++){
	        v[i] = v[i-1] + v[i-2];
	        v[i] = v[i]%mod;
	    }
	    long long a = v.back();
	    return (a%mod)*(a%mod)%mod;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int N;
		cin >> N;
		Solution ob;
		int ans = ob.TotalWays(N);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends
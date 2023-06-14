//{ Driver Code Starts


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution {
public:
	int DivCountSum(int n){
	    // Code here
	    vector<int> divis(n+1, 0);
	    for(int i = 1 ; i <= n ; i++){
	        for(int j = i ; j <= n ; j+=i){
	            divis[j] += 1;
	        }
	    }
	    int res = 0;
	    for(int i = 0 ; i <= n ; i++){
	        res += divis[i];
	    }
	    return res;
	}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution obj;
		int ans = obj.DivCountSum(n);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends
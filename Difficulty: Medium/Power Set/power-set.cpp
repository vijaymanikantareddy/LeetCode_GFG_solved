//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
		vector<string> AllPossibleStrings(string s){
		    // Code here
		    int n = s.size();
		    vector<string> res;
		    for(int i = 1 ; i < pow(2, n) ; i++){
		        int num = i;
		        int j = 0;
		        string te = "";
		        while(num > 0){
		            if((num&1) == 1){
		                te.push_back(s[j]);
		            }
		            j++;
		            num >>= 1;
		        }
		        res.push_back(te);
		    }
		    sort(res.begin(), res.end());
		    return res;
		}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		Solution ob;
		vector<string> res = ob.AllPossibleStrings(s);
		for(auto i : res)
			cout << i <<" ";
		cout << "\n";

	
cout << "~" << "\n";
}
	return 0;
}
// } Driver Code Ends
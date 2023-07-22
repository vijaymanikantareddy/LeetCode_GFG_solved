//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	    void fun(string s, vector<string>& res, string& temp, int ind){
	        if(ind == s.size()){
	            if(temp != "")
    	            res.push_back(temp);
	            return ;
	        }
	        temp.push_back(s[ind]);
	        fun(s, res, temp, ind+1);
	        temp.pop_back();
	        fun(s, res, temp, ind+1);
	    }
		vector<string> AllPossibleStrings(string s){
		    // Code here
		    vector<string> res;
            string temp = "";
            fun(s, res, temp, 0);
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

	}
	return 0;
}
// } Driver Code Ends
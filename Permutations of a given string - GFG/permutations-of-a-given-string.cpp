//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	void fun(set<string> &res, string s, int ind, vector<bool>& vis, string temp){
        if(ind == s.size()){
            res.insert(temp);
            return;
        }
        for(int i = 0 ; i < s.size() ; i++){
            if(!vis[i]){
                vis[i] = true;
                temp.push_back(s[i]);
                fun(res, s, ind+1, vis, temp);
                temp.pop_back();
                vis[i] = false;
            }
        }
    }
	vector<string>find_permutation(string S)
	{
	    // Code here there
	    set<string> res;
	    vector<bool> vis(S.size(), false);
	    string temp = "";
	    fun(res, S, 0, vis, temp);
	    return vector<string> (res.begin(), res.end());
	}
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends
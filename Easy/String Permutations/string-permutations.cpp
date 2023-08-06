//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    //Complete this function
    void backtrack(string s, vector<string>& res, string &temp, vector<int>& vis){
        if(temp.size() == s.size()){
            res.push_back(temp);
            return ;
        }
        for(int i = 0 ; i < s.size() ; i++){
            if(!vis[i]){
                vis[i] = 1;
                temp.push_back(s[i]);
                backtrack(s, res, temp, vis);
                temp.pop_back();
                vis[i] = 0;
            }
        }
    }
    vector<string> permutation(string S)
    {
        //Your code here
        vector<string> res;
        string temp = "";
        vector<int> vis(S.size(), 0);
        backtrack(S, res, temp, vis);
        sort(res.begin(), res.end());
        return res;
    }
};

//{ Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string S;
		cin>>S;
		Solution ob;
		vector<string> vec = ob.permutation(S);
		for(string s : vec){
		    cout<<s<<" ";
		}
		cout<<endl;
	
	}
	return 0;
}
// } Driver Code Ends
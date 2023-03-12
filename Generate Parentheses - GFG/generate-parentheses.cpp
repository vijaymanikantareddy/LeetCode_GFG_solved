//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
vector<string> AllParenthesis(int n) ;


// } Driver Code Ends
//User function Template for C++

// N is the number of pairs of parentheses
// Return list of all combinations of balanced parantheses
class Solution
{
    public:
    vector<string> res;
    void fun(int n, string temp, int close, int open){
        if(temp.size() == 2*n){
            res.push_back(temp);
            return;
        }
        if(open < n){
            temp.push_back('(');
            fun(n, temp, close, open+1);
            temp.pop_back();
        }
        if(close < open){
            temp.push_back(')');
            fun(n, temp, close+1, open);
            temp.pop_back();
        }
    }
    vector<string> AllParenthesis(int n) 
    {
        // Your code goes here 
        fun(n,"", 0, 0);
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
		cin>>n;
		Solution ob;
		vector<string> result = ob.AllParenthesis(n); 
		sort(result.begin(),result.end());
		for (int i = 0; i < result.size(); ++i)
			cout<<result[i]<<"\n";
	}
	return 0; 
} 

// } Driver Code Ends
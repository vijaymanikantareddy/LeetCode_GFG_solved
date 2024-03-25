//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
    bool fun(string s){
        if(s[0] == '0') return false;
        int oc = 1, zc = 0;
        for(int i = 1 ; i < s.size() ; ++i){
            if(s[i] == '0'){
                zc++;
            }else oc++;
            if(zc > oc) return false;
        }
        return true;
    }
    string getBinaryNum(int n){
        string res = "";
        while(n > 0){
            if(n%2 == 0){
                res.push_back('0');
            }else{
                res.push_back('1');
            }
            n /= 2;
        }
        reverse(res.begin(), res.end());
        return res;
    }
	vector<string> NBitBinary(int n)
	{
	    // Your code goes here
	    if(n == 1) return {"1"};
	    vector<string> res;
	    for(int i = pow(2, n) ; i >= pow(2, n-1) ; i--){
	        string num = getBinaryNum(i);
	        if(fun(num)){
	            res.push_back(num);
	        }
	    }
	    sort(res.rbegin(), res.rend());
	    return res;
	}
};

//{ Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		int n;
   		cin >> n;
        Solution ob;
   		vector<string> ans = ob.NBitBinary(n);

   		for(auto i:ans)
   			cout << i << " ";

   		cout << "\n";
   	}

    return 0;
}
// } Driver Code Ends
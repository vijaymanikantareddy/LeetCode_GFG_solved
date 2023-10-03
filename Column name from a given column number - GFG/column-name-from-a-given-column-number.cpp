//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    string colName (long long int n)
    {
        // your code here
        string res = "";
        while(n > 0){
            if(n%26 == 0){
                res.push_back('Z');
                n /= 26;
                n--;
            }else{
                int d = n%26;
                n /= 26;
                res.push_back('A'+d-1);
            }
        }
        reverse(res.begin(), res.end());
        return res;
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
	{
		long long int n; cin >> n;
		Solution ob;
		cout << ob.colName (n) << '\n';
	}
}

// } Driver Code Ends
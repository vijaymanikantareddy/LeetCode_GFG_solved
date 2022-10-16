//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	
	int binaryPalin (long long int N)
	{
	    // Your Code Here
	    string res="";
        while(N){
            if(N&1){
                res+="1";
            }
            else{
                res+="0";
            }
            N>>=1;
        }
        int l=0, r=res.size()-1;
        while(l<=r){
            if(res[l]!=res[r]){
                return false;
            }
            l++;
            r--;
        }
        return true;
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
		cout << ob.binaryPalin (n) << endl;
	}
}

// Contributed By: Pranay Bansal

// } Driver Code Ends
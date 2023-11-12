//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string str1, string str2)
    {
        // Your code here
        char a = str1[0];
        char b = str1[1];
        string c = "";
        for(int i = 2 ; i < str1.size() ; i++){
            c += str1[i];
        }
        c += a;
        c += b;
        if(c == str2) return true;
        c = "";
        int n = str1.size()-1;
        a = str1[n];
        b = str1[n-1];
        c += b;
        c += a;
        for(int i = 0 ; i <= n-2 ; i++){
            c += str1[i];
        }
        return (c == str2);
    }

};



//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string b;
		cin>>s>>b;
		Solution obj;
		cout<<obj.isRotated(s,b)<<endl;
	}
	return 0;
}

// } Driver Code Ends
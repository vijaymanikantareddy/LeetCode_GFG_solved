//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
		
	string removeDups(string S) 
	{
	    // Your code goes here
	    for(int i=0 ; i<S.size()-1 ; i++){
	        if(S[i]=='_')
	            continue;
	        for(int j=i+1 ; j<S.size() ; j++){
	            if(S[i]==S[j]){
	                S[j]='_';
	            }
	        }
	    }
	    string res="";
	    for(char i: S){
	        if(i!='_'){
	            res += i;
	        }
	    }
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
   		string s;
   		cin >> s;

   		
   		Solution ob;
   		cout << ob.removeDups(s) << "\n";
   		
   	}

    return 0;
}
// } Driver Code Ends
//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
		
	int isDivisible(string s){
	    //complete the function here
	    int res = 0;
	    reverse(s.begin(), s.end());
	    for(int i = 0 ; i < s.size() ; i++){
	        if(s[i] == '1'){
	            if(i%2 == 0){
	                res += 1;
	            }else{
	                res += 2;
	            }
	            res = res%3;
	        }
	    }
	    return res%3 == 0? 1: 0;
	}

};

//{ Driver Code Starts.
int main(){
    
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        Solution ob;
        cout << ob.isDivisible(s) << endl;
    }
return 0;
}


// } Driver Code Ends
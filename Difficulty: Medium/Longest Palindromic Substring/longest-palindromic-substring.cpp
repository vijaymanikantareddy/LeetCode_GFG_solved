//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    string res;
    void fun(string s, int i, int j){
        while(i >= 0 && j < s.size() && s[i] == s[j]){
            string t = s.substr(i, j - i + 1);
            if(res.size() < t.size()){
                res = t;
            }
            i--;
            j++;
            
        }
    }
    string longestPalindrome(string S){
        // code here 
        for(int i = 0 ; i < S.size() ; i++){
            fun(S, i, i);
            fun(S, i, i+1);
        }
        return res;
    }
};

//{ Driver Code Starts.



int main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        Solution ob;
        cout<<ob.longestPalindrome(S)<<endl;
    }
    return 0;
}

// } Driver Code Ends
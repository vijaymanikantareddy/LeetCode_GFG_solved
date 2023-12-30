//{ Driver Code Starts
#include <iostream>
#include <map>
#include <algorithm>
#include <cstdlib>
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{
  public:
  
    //Function to return the name of candidate that received maximum votes.
    string fun(string a, string b){
        int m = a.size(), n = b.size();
        for(int i = 0 ; i < min(n, m) ; i++){
            if(a[i] < b[i]){
                return a;
            }else if(b[i] < a[i]){
                return b;
            }
        }
        if(m < n) return a;
        return b;
    }
    vector<string> winner(string arr[],int n)
    {
        // Your code here
        // Return the string containing the name and an integer
        // representing the number of votes the winning candidate got
        map<string, int> mp;
        for(int i = 0 ; i < n ; i++){
            mp[arr[i]]++;
        }
        int mx = 0;
        string res = arr[0];
        for(auto it: mp){
            if(it.second > mx){
                mx = it.second;
                res = it.first;
            }
            if(it.second == mx){
                res = fun(res, it.first);
            }
        }
        return {res, to_string(mx)};
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    
    for(int i=0;i<t;i++)
    {
        
        
        int n;
        cin>>n;
        
        string arr[n];
        
        for (int i=0;i<n;i++)
        cin>>arr[i];
        Solution obj;
        vector<string> result = obj.winner(arr,n);
        
        cout<<result[0] << " " << result[1] << endl;
    }
    return 0;
}

// } Driver Code Ends
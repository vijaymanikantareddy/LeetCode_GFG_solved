//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    set<vector<int>> res;
    void fun(vector<int> &arr, int n, vector<int>&temp, vector<bool> &vis){
        if(temp.size() == arr.size()){
            res.insert(temp);
            return;
        }
        for(int i = 0 ; i < n ; i++){
            if(!vis[i]){
                vis[i] = true;
                temp.push_back(arr[i]);
                fun(arr, n, temp, vis);
                vis[i] = false;
                temp.pop_back();
            }
        }
    }
    vector<vector<int>> uniquePerms(vector<int> arr ,int n) {
        // code here
        vector<bool> vis(n, false);
        vector<int> temp;
        fun(arr, n, temp, vis);
        return vector<vector<int>> (res.begin(), res.end());
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        
        cin>>n;
        vector<int> arr(n);
        
        for(int i=0 ; i<n ; i++)
            cin>>arr[i];

        Solution ob;
        vector<vector<int>> res = ob.uniquePerms(arr,n);
        for(int i=0; i<res.size(); i++)
        {
            for(int j=0; j<n; j++)
            {
                cout<<res[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}
// } Driver Code Ends
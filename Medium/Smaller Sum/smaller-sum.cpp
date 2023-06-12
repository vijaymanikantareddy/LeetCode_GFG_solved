//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++
class Solution{
public:
    vector<long long> smallerSum(int n,vector<int> &arr){
        // Code here
        vector<long long> res;
        vector<long long> pre(n, 0);
        vector<int> dup = arr;
        sort(dup.begin(), dup.end());
        pre[0] = dup[0];
        for(int i = 1 ; i < n ; i++){
            pre[i] = pre[i-1] + dup[i];
        }
        map<long long, long long> mp;
        mp[dup[0]] = 0;
        for(int i = 1 ; i < n ; i++){
            if(mp.find(dup[i]) == mp.end())
                mp[dup[i]] = pre[i-1];
        }
        // for(auto it: mp){
        //     cout<<it.first<<" "<<it.second<<"\n";
        // }
        for(int i = 0 ; i < n ; i++){
            res.push_back(mp[arr[i]]);
        }
        return res;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob; 
        vector<long long> ans=ob.smallerSum(n,arr);
        for(int i=0;i<n;i++){
            if(i!=n-1){
                cout<<ans[i]<<" ";
            }
            else{
                cout<<ans[i]<<endl;
            }
        }
    }
    return 0;
}
// } Driver Code Ends
//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> recamanSequence(int n){
        // code here
        vector<int> res;
        unordered_set<int> vis;
        vis.insert(0);
        res.push_back(0);
        for(int i = 1 ; i < n ; i++){
            int num = res[i-1] - i;
            if(vis.find(num) == vis.end() && num > 0){
                res.push_back(num);
                vis.insert(num);
            }else{
                res.push_back(res[i-1]+i);
                vis.insert(res[i-1]+i);
            }
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
        
        Solution ob;
        vector<int> ans = ob.recamanSequence(n);
        for(int i = 0;i < n;i++)
            cout<<ans[i]<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends
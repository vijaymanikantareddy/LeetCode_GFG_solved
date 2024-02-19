//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int minValue(string s, int k){
        // code here
        unordered_map<char, int> mp;
        for(auto it: s) mp[it]++;
        priority_queue<int> pq;
        for(auto it: mp) pq.push(it.second);
        while(k-- && !pq.empty()){
            int t = pq.top();
            t--;
            pq.pop();
            pq.push(t);
        }
        int res = 0;
        while(!pq.empty()){
            int t = pq.top();
            res += pow(t, 2);
            pq.pop();
        }
        return res;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        int k;
        cin>>s>>k;
        
        Solution ob;
        cout<<ob.minValue(s, k)<<"\n";
    }
    return 0;
}
// } Driver Code Ends
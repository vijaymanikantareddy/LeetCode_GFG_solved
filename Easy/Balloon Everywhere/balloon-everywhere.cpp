//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int maxInstance(string s){
        if(s.size() < 7) return 0;
        map<char, int> sm;
        for(char ch: s){
            sm[ch]++;
        }
        vector<int> vc;
        vc.push_back(sm['b']);
        vc.push_back(sm['a']);
        vc.push_back(sm['l']);
        vc.push_back(sm['o']);
        vc.push_back(sm['n']);
        for(int i = 0 ; i < 5 ; i++){
            if(vc[i] == 0) return 0;
        }
        vc[2] /= 2;
        vc[3] /= 2;
        int mi = INT_MAX;
        for(int i = 0 ; i < 5 ; i++){
            mi = mi < vc[i]? mi: vc[i];
        }
        return mi;
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.maxInstance(s)<<endl;
    }
    return 0;
}
// } Driver Code Ends
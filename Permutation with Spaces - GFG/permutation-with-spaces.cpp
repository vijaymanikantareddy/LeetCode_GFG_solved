//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
public:
    
    vector<string> permutation(string S){
        // Code Here
        vector<string> res;
        reverse(S.begin(), S.end());
        int cnt = pow(2, S.size()-1);
        for(int i = cnt-1 ; i >= 0 ; i--){
            int num = i;
            string temp = "";
            for(int j = 0 ; j < S.size() ; j++){
                temp.push_back(S[j]);
                if((num&1) == 1){
                    temp.push_back(' ');
                }
                num >>= 1;
            }
            reverse(temp.begin(), temp.end());
            res.push_back(temp);
        }
        return res;
    }
};

//{ Driver Code Starts.

int  main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        vector<string> ans;
        Solution obj;
        ans = obj.permutation(S);
        for(int i=0;i<ans.size();i++){
            cout<<"("<<ans[i]<<")";
        }
        cout << endl;
    }
}

// } Driver Code Ends
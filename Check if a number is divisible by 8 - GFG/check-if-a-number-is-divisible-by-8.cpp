//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    int DivisibleByEight(string S){
        //code here
        if(S.size() <= 3){
            int s = 0;
            int ml = S.size()-1;
            for(int i = 0 ; i < S.size() ; i++){
                int d = S[i]-'0';
                s += d*(pow(10, ml));
                ml--;
            }
            if(s%8 == 0){
                return 1;
            }else{
                return -1;
            }
        }
        int ml = 0;
        int sum = 0;
        for(int i = S.size()-1 ; i >= S.size()-3 ; i--){
            int d = S[i] - '0';
            sum += (d*(pow(10, ml)));
            ml++;
        }
        return (sum%8 == 0)? 1: -1;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin>>S;
        Solution ob;
        cout<<ob.DivisibleByEight(S)<<"\n";
    }
}
// } Driver Code Ends
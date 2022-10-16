//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int isPallindrome(long long int N){
        // code here
        string res="";
        while(N){
            if(N&1){
                res+="1";
            }
            else{
                res+="0";
            }
            N>>=1;
        }
        int l=0, r=res.size()-1;
        while(l<=r){
            if(res[l]!=res[r]){
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        long long int N;
        cin>>N;
        Solution ob;
        cout << ob.isPallindrome(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends
//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> res;
    vector<int> minPartition(int N)
    {
        // code here
        int prices[10] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 2000};
        int iter = 9;
        while(N)
        {
            if(prices[iter]<=N){
                res.push_back(prices[iter]);
                N -= prices[iter];
            }
            else{
                iter--;
            }
            if(N<=0){
            	break;
            }
            if(iter==0){
            	res.push_back(prices[iter]);
            	N = 0;
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
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> numbers = ob.minPartition(N);
        for(auto u: numbers)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends
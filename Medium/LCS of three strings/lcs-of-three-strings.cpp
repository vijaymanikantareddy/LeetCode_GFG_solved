//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:

        int LCSof3 (string A, string B, string C, int n1, int n2, int n3)
        {
            // your code here
            vector<vector<vector<int>>> dp(A.size()+1, vector<vector<int>>(B.size()+1,
            vector<int>(C.size()+1, 0)));
            for(int i = 0 ; i < A.size() ; i++){
                for(int j = 0 ; j < B.size() ; j++){
                    for(int k = 0 ; k < C.size() ; k++){
                        if(A[i] == B[j] && B[j] == C[k]){
                            dp[i+1][j+1][k+1] = 1 + dp[i][j][k];
                        }else{
                            dp[i+1][j+1][k+1] = max({dp[i+1][j+1][k], 
                            dp[i+1][j][k+1], 
                            dp[i][j+1][k+1]});
                        }
                    }
                }
            }
            return dp[A.size()][B.size()][C.size()];
        }
};


//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n1, n2, n3; cin >> n1 >> n2 >> n3;
        string A, B, C; cin >> A >> B >> C;
        Solution obj;
        cout << obj.LCSof3 (A, B, C, n1, n2, n3) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends
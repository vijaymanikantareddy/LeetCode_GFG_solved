//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int isSuperSimilar(int n, int m, vector<vector<int>>& mat, int x)
    {
        // code here
        vector<vector<int>> dup = mat;
        x = x%m;
        for(int iter = 0 ; iter < n ; iter++){
            if(iter%2 == 0){
                int i = 0;
                for(int j = x ; j < m ; j++){
                    dup[iter][i] = mat[iter][j];
                    i++;
                }
                for(int j = 0 ; j < x ; j++){
                    dup[iter][i] = mat[iter][j];
                    i++;
                }
            }else{
                int i = 0;
                for(int j = 0 ; j < x ; j++){
                    dup[iter][i] = mat[iter][j];
                    i++;
                }
                for(int j = x ; j < m ; j++){
                    dup[iter][i] = mat[iter][j];
                    i++;
                }
            }
        }
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                if(dup[i][j] != mat[i][j]){
                    return 0;
                }
            }
        }
        return true;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<int>> mat(n, vector<int>(m, 0));
        for(int i = 0;i < n*m;i++)
            cin>>mat[i/m][i%m];
        int x;
        cin >> x;
        
        Solution ob;
        cout<<ob.isSuperSimilar(n,m,mat,x)<<endl;
    }
    return 0;
}
// } Driver Code Ends
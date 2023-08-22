//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
    //Function to find minimum number of operations that are required 
    //to make the matrix beautiful.
    int findMinOpeartion(vector<vector<int> > matrix, int n)
    {
        // code here 
        int rmx = 0, cmx = 0;
        for(int i = 0 ; i < n ; i++){
            int rs = 0, cs = 0;
            for(int j = 0 ; j < n ; j++){
                rs += matrix[i][j];
                cs += matrix[j][i];
            }
            rmx = rmx < rs? rs: rmx;
            cmx = cmx < cs? cs: cmx;
        }
        bool row = true, col = false;
        if(cmx >= rmx){
            col = true;
            row = false;
        }
        int res = 0;
        for(int i = 0 ; i < n ; i++){
            int cs = 0, rs = 0;
            for(int j = 0 ; j < n ; j++){
                rs += matrix[i][j];
                cs += matrix[j][i];
            }
            if(col){
                res += (cmx - cs);
            }else if(row){
                res += (rmx - rs);
            }
            
        }
        return res;
    } 
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > matrix (n,vector<int>(n));
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin>>matrix[i][j];
        Solution ob;
        cout << ob.findMinOpeartion(matrix, n) << endl;
    }
    return 0;
}


// } Driver Code Ends
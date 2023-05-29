//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution
{   
public:
    int rowToNumber(vector<int> row){
        int res = 0;
        for(int i = 0 ; i < row.size(); i++){
            if(row[i]){
                res += pow(2, i);
            }
        }
        return res;
    }
    vector<int> repeatedRows(vector<vector<int>> matrix, int M, int N) 
    { 
        // Your code here
        vector<int> res;
        map<int, int> mp;
        for(int i = 0 ; i < M ; i++){
            int deci = rowToNumber(matrix[i]);
            if(mp.find(deci) == mp.end()){
                mp[deci]++;
            }else{
                res.push_back(i);
            }
        }
        return res;
      
    } 
};


//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    while(t--) 
    {
        int row, col;
        cin>> row>> col;
        vector<vector<int> > matrix(row); 
        for(int i=0; i<row; i++)
        {
            matrix[i].assign(col, 0);
            for( int j=0; j<col; j++)
            {
                cin>>matrix[i][j];
            }
        }
        
        Solution ob;
        vector<int> ans = ob.repeatedRows(matrix, row, col);


        for (int i = 0; i < ans.size(); ++i)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}



// } Driver Code Ends
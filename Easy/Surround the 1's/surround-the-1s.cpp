//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
    bool fun(vector<vector<int>>& matrix, int row, int col){
        int cnt = 0;
        int n = matrix.size();
        int m = matrix[0].size();
        for(int i = -1 ; i <= 1 ; i++){
            for(int j = -1 ; j <= 1 ; j++){
                int nrow = row+i;
                int ncol = col+j;
                if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && (matrix[nrow][ncol]==0)){
                    cnt++;
                }
            }
        }
        return (cnt%2==0 && cnt > 0);
    }
    int Count(vector<vector<int> >& matrix) {
        // Code here
        int res = 0;
        for(int i = 0 ; i < matrix.size() ; i++){
            for(int j = 0 ; j < matrix[i].size() ; j++){
                if(matrix[i][j] == 1 && fun(matrix, i, j)){
                    res++;
                }
            }
        }
        return res;
        
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>> matrix(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> matrix[i][j];
			}
		}
		Solution ob;
		int ans = ob.Count(matrix);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends
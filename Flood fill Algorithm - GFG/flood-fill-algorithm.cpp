//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    void dfs(vector<vector<int>>& ans, int sr, int sc, int newcolor, int color, int rows[], int cols[]){
        ans[sr][sc] = newcolor;
        int n = ans.size();
        int m = ans[0].size();
        for(int i = 0 ; i < 4 ; i++){
            int nrow = sr+rows[i];
            int ncol = sc+cols[i];
            if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && ans[nrow][ncol] == color){
                dfs(ans, nrow, ncol, newcolor, color, rows, cols);
            }
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        // Code here 
        if(image[sr][sc] == newColor){
            return image;
        }
        int rows[] = {0, 0, -1, 1};
        int cols[] = {-1, 1, 0, 0};
        vector<vector<int>> ans = image;
        dfs(ans, sr, sc, newColor, ans[sr][sc], rows, cols);
        return ans;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>image(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)
				cin >> image[i][j];
		}
		int sr, sc, newColor;
		cin >> sr >> sc >> newColor;
		Solution obj;
		vector<vector<int>> ans = obj.floodFill(image, sr, sc, newColor);
		for(auto i: ans){
			for(auto j: i)
				cout << j << " ";
			cout << "\n";
		}
	}
	return 0;
}
// } Driver Code Ends
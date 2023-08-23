//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
	bool dfs(vector<vector<char>>& grid, vector<vector<bool>>& vis, int row, int col, int index, string word){
        int n = grid.size();
        int m = grid[0].size();
        int dirx[4] = {-1, 0, 1, 0};
        int diry[4] = {0, 1, 0, -1};
        for(int i = 0 ; i < 4 ; i++){
            int ind = index;
            int nrow = row, ncol = col; 
            while(ind < word.size() && nrow >= 0 && ncol >= 0 && nrow < n && ncol < m){
                if(grid[nrow][ncol] != word[ind]){
                    break;
                }else{
                    nrow += dirx[i];
                    ncol += diry[i];
                    ind++;
                }
            }
            if(ind == word.size()) return true;
        }
        return false;
    }
    bool diagdfs(vector<vector<char>>& grid, int row, int col, int index, string word){
        int n = grid.size();
        int m = grid[0].size();
        int dirx[4] = {-1, -1, 1, 1};
        int diry[4] = {-1, 1, -1, 1};
        for(int i = 0 ; i < 4 ; i++){
            int ind = index;
            int nrow = row, ncol = col; 
            while(ind < word.size() && nrow >= 0 && ncol >= 0 && nrow < n && ncol < m){
                if(grid[nrow][ncol] != word[ind]){
                    break;
                }else{
                    nrow += dirx[i];
                    ncol += diry[i];
                    ind++;
                }
            }
            if(ind == word.size()) return true;
        }
        return false;

    }
	vector<vector<int>>searchWord(vector<vector<char>>grid, string word){
	    // Code here
	    int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> res;
        for(int row = 0 ; row < n ; row++){
            for(int col = 0 ; col < m ; col++){
                if(grid[row][col] == word[0]){
                    vector<vector<bool>> vis(n, vector<bool>(m, false));
                    if(dfs(grid, vis, row, col, 0, word)){
                        // cout<<"side "<<row<<" "<<col<<"\n";
                        res.push_back({row, col});
                        // break;
                    }
                    else if(diagdfs(grid, row, col, 0, word)){
                        // cout<<"diag "<<row<<" "<<col<<"\n";
                        res.push_back({row, col});
                        // break;
                    }
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
		vector<vector<char>>grid(n, vector<char>(m,'x'));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)
				cin >> grid[i][j];
		}
		string word;
		cin >> word;
		Solution obj;
		vector<vector<int>>ans = obj.searchWord(grid, word);
		if(ans.size() == 0)
		{
		    cout<<"-1\n";
		}
		else
		{
		    for(auto i: ans){
			for(auto j: i)
				cout << j << " ";
			cout << "\n";
		    }
		}
		
		
	}
	return 0;
}
// } Driver Code Ends
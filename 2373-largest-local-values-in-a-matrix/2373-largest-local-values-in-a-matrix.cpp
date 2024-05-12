class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        vector<vector<int>> res(n-2, vector<int>(m-2, 0));
        for(int i = 0 ; i < n-2 ; i++){
            for(int j = 0 ; j < m-2 ; j++){
                int mx = grid[i][j];
                for(int a = 0 ; a < 3 ; a++){
                    for(int b = 0 ; b < 3 ; b++){
                        mx = max(mx, grid[i+a][j+b]);
                    }
                }
                res[i][j] = mx;
            }
        }
        return res;
    }    
};
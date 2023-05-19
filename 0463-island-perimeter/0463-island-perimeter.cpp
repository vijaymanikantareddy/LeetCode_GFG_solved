class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int res = 0;
        int dr[] = {0, 0, -1, 1};
        int dc[] = {1, -1, 0, 0};
        int n = grid.size();
        int m = grid[0].size();
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                if(grid[i][j]){
                    for(int k = 0; k < 4 ; k++){
                        int nrow = i+dr[k];
                        int ncol = j+dc[k];
                        if((nrow == -1 || ncol == -1 || nrow == n || ncol == m) || (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && grid[nrow][ncol] == 0)){
                            res++;
                        }
                    }
                }
            }
        }
        return res;
    }
};
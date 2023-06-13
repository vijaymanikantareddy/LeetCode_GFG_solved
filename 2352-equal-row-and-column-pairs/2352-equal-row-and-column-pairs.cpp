class Solution {
public:
    bool com(vector<vector<int>>& grid, int r, int c){
        int n = grid.size();
        for(int i = 0 ; i < n ; i++){
            if(grid[r][i] != grid[i][c]){
                return false;
            }
        }
        return true;
    }
    int equalPairs(vector<vector<int>>& grid) {
        int res = 0;
        int n = grid.size();
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < n ; j++){
                if(grid[0][i] == grid[j][0] && com(grid, j, i)){
                    res++;
                }
            }
        }
        return res;
    }
};
class Solution {
public:
    bool ismagic(vector<vector<int>>& grid, int r, int c, int n, int m){
        if(r+2 >= n or c+2 >= m) return false;
        int sum = 15;
        unordered_map<int, int> mp;
        for(int i = r ; i < r+3 ; i++){
            for(int j = c ; j < c+3 ; j++){
                if(grid[i][j] <= 0 or grid[i][j] > 9) return false;
                if(mp.count(grid[i][j])) return false;
                mp[grid[i][j]]++;
            }
        }
        for(int i = 0 ; i < 3 ; i++){
            int rowsum = grid[r+i][c] + grid[r+i][c+1] + grid[r+i][c+2];
            int colsum = grid[r][c+i] + grid[r+1][c+i] + grid[r+2][c+i];
            if(rowsum != sum or colsum != sum) return false;
        }
        int diag1 = grid[r][c] + grid[r+1][c+1] + grid[r+2][c+2];
        int diag2 = grid[r+2][c] + grid[r+1][c+1] + grid[r][c+2];
        if(diag1 != sum or diag2 != sum) return false;
        return true;
    }
    int numMagicSquaresInside(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        int res = 0;
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                if(ismagic(grid, i, j, n, m)){
                    res++;
                }
            }
        }
        return res;
    }
};
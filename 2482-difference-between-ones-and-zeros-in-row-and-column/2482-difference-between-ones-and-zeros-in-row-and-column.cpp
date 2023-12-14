class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        vector<int> rowsone(n,0), rowszero(n, 0), colsone(m, 0), colszero(m, 0);
        for(int i = 0 ; i < grid.size(); i++){
            int so = 0, sz = 0;
            for(int j = 0 ; j < grid[i].size() ; j++){
                if(grid[i][j] == 1){
                    so++;
                }else sz++;
            }
            rowsone[i] = so;
            rowszero[i] = sz;
        }
        for(int i = 0 ; i < grid[0].size(); i++){
            int so = 0, sz = 0;
            for(int j = 0 ; j < grid.size() ; j++){
                if(grid[j][i] == 1){
                    so++;
                }else sz++;
            }
            colsone[i] = so;
            colszero[i] = sz;
        }
        vector<vector<int>> res(n, vector<int>(m, 0));
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                res[i][j] = rowsone[i] + colsone[j] - rowszero[i] - colszero[j];
            }
        }
        return res;
    }
};
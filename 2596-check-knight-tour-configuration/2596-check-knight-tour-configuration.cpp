class Solution {
public:
    bool ways(vector<vector<int>>& grid, int& i, int &j, int v){
        int n = grid.size();
        vector<vector<int>> dir = {
            {-2, -1}, {-2, 1}, {-1, -2}, {1, -2}, {1, 2}, {2, -1}, {2, 1}, {-1, 2}
        };
        for(int it = 0 ; it < 8 ; it++){
            int a = i + dir[it][0];
            int b = j + dir[it][1];
            if(a >= 0 && a < n && b >= 0 && b < n && grid[a][b] == v){
                i = a;
                j = b;
                return true;
            }
        }
        return false;
    }
    bool checkValidGrid(vector<vector<int>>& grid) {
        int v = 1, i = 0, j = 0;
        if(grid[i][j] != 0) return false;
        int n = grid.size();
        while(v < n*n){
            if(ways(grid, i, j, v) == false){
                return false;
            }
            v++;
        }
        return true;
    }
};
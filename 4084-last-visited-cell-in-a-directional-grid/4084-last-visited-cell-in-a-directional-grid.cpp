class Solution {
public:
    vector<int> lastVisitedCell(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<bool>> vis(n, vector<bool>(m, false));
        vis[0][0] = true;

        int r = 0, c = 0;

        while(true){
            int nr = r, nc = c;

            if (grid[r][c] == 'R') {
                nc++;
            } else if (grid[r][c] == 'L') {
                nc--;
            } else if (grid[r][c] == 'U') {
                nr--;
            } else {
                nr++;
            }

            if(nr < 0 or nr >= n or nc < 0 or nc >= m) break;

            if(vis[nr][nc]) break;

            r = nr;
            c = nc;
            vis[r][c] = true;
        }
        return {r, c};
    }
};
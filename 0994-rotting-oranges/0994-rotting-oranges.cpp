class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int tm = 0;
        int n = grid.size();
        int m = grid[0].size();
        queue<pair<pair<int, int>, int>>q;
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                if(grid[i][j] == 2){
                    q.push({{i, j}, 0});
                }
            }
        }
        int drow[] = {1, -1, 0, 0};
        int dcol[] = {0, 0, 1, -1};
        while(!q.empty()){
            int row = q.front().first.first;
            int col = q.front().first.second;
            int t = q.front().second;
            q.pop();
            tm = max(t, tm);
            for(int i = 0 ; i < 4 ; i++){
                int nrow = row + drow[i];
                int ncol = col + dcol[i];
                if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && grid[nrow][ncol] == 1){
                    grid[nrow][ncol] = 2;
                    q.push({{nrow, ncol}, t+1});
                }
            }
        }
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                if(grid[i][j] == 1){
                    return -1;
                }
            }
        }
        return tm;
    }
};
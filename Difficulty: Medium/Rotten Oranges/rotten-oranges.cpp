class Solution {
  public:
    int orangesRot(vector<vector<int>>& grid) {
        // code here
        int n = grid.size();
        int m = grid[0].size();
        int vis[n][m];
        int cntFresh = 0;
        queue<pair<pair<int, int>, int>> q; //{{row, col}, time}
        for(int i = 0; i < grid.size() ; i++){
            for(int j = 0 ; j < grid[i].size(); j++){
                if(grid[i][j] == 2){
                    q.push({{i, j}, 0});
                    vis[i][j] = 2;
                } else{
                    vis[i][j] = 0;
                }
                if(grid[i][j] == 1){
                    cntFresh++;
                }
            }
        }
        int cnt = 0;
        int drow[] = {1, -1, 0, 0};
        int dcol[] = {0, 0, 1, -1};
        int tm = 0;
        while(!q.empty()){
            int r = q.front().first.first;
            int c = q.front().first.second;
            int t = q.front().second;
            q.pop();
            tm = max(t, tm);
            for(int i = 0 ; i < 4 ; i++){
                int nrow = r + drow[i];
                int ncol = c + dcol[i];
                if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && vis[nrow][ncol] != 2 && grid[nrow][ncol] == 1){
                    q.push({{nrow, ncol}, t+1});
                    vis[nrow][ncol] = 2;
                    cnt++;
                }
            }
        }
        if(cnt != cntFresh) return -1;
        return tm;
    }
};
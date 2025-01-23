class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        vector<int> cols(n, 0), rows(m, 0);
        int cnt = 0;
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                if(grid[i][j]){
                    cols[i]++;
                    rows[j]++;
                    cnt++;
                }
            }
        }
        int res = 0;
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                if(grid[i][j] && cols[i] == 1 && rows[j] == 1){
                    res++;
                }
            }
        }
        return abs(cnt - res);
    }
};
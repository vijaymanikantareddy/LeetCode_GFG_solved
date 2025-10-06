class Solution {
  public:
    vector<pair<int, int>> dir = {
        {1, 2}, {-1, 2}, {1, -2}, {-1, -2},
        {2, 1}, {-2, 1}, {2, -1}, {-2, -1}
    };
    bool fun(vector<vector<int>>& mat, int n, int r, int c, int cnt){
        if(cnt == n * n){
            return true;
        }
        for(int i = 0 ; i < 8 ; i++){
            int nr = r + dir[i].first;
            int nc = c + dir[i].second;
            if(nr >= 0 && nr < n && nc >= 0 && nr < n && mat[nr][nc] == -1){
                mat[nr][nc] = cnt;
                if(fun(mat, n, nr, nc, cnt+1)){
                    return true;
                }
                mat[nr][nc] = -1;
            }
        }
        return false;
    }
    vector<vector<int>> knightTour(int n) {
        // code here
        vector<vector<int>> mat(n, vector<int>(n, -1));
        mat[0][0] = 0;
        if(!fun(mat, n, 0, 0, 1)){
            return {{-1}};
        }
        
        return mat;
    }
};
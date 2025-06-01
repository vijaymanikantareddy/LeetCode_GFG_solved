class Solution {
public:
    vector<vector<int>> minAbsDiff(vector<vector<int>>& grid, int k) {
        vector<vector<int>> res;
        int n = grid.size(), m = grid[0].size();
        for(int i = 0 ; i < n ; i++){
            vector<int> temp;
            for(int j = 0 ; j < m ; j++){
                if(i + k <= n && j + k <= m){
                    temp.push_back(fun(grid, i, j, k));
                }
            }
            if(!temp.empty())
                res.push_back(temp);
        }
        return res;
    }
    int fun(vector<vector<int>>& grid, int row, int col, int k){
        vector<int> a;
        for(int i = row ; i < row + k ; i++){
            for(int j = col ; j < col + k ; j++){
                a.push_back(grid[i][j]);
            }
        }
        if(a.size() <= 1) return 0;
        sort(a.begin(), a.end());
        int mini = INT_MAX;
        for(int i = 1 ; i < a.size() ; i++){
            if(a[i] != a[i - 1])
                mini = min(mini, a[i] - a[i - 1]);
        }
        if(mini == INT_MAX) return 0;
        return mini;
    }
};
class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        vector<int> v;
        for(int i = 0 ; i < grid.size() ; i++){
            for(int j = 0 ; j < grid[i].size(); j++){
                v.push_back(grid[i][j]);
            }
        }
        sort(v.begin(), v.end());
        int res = 0;
        int mid = v[v.size()/2];
        for(auto it: v){
            if((it - mid)%x != 0) return -1;
            res += abs(it - mid)/x;
        }
        return res;
    }
};
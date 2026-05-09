class Solution {
public:
    vector<vector<int>> rotateGrid(vector<vector<int>>& grid, int k) {
        int n = grid.size(), m = grid[0].size();
        int layers = min(n, m) / 2;
        for(int lay = 0 ; lay < layers ; lay++){
            vector<int> arr;
            int top = lay, left = lay;
            int bottom = n - 1 - lay, right = m - 1 - lay;

            for(int i = left ; i <= right ; i++){
                arr.push_back(grid[top][i]);
            }
            for(int i = top + 1 ; i <= bottom ; i++){
                arr.push_back(grid[i][right]);
            }
            for(int i = right - 1 ; i >= left ; i--){
                arr.push_back(grid[bottom][i]);
            }
            for(int i = bottom - 1 ; i >= top + 1; i--){
                arr.push_back(grid[i][left]);
            }

            int len = arr.size();
            int rot = k % len;
            reverse(arr.begin(), arr.begin() + rot);
            reverse(arr.begin() + rot, arr.end());
            reverse(arr.begin(), arr.end());

            int idx = 0;
            for(int i = left ; i <= right ; i++){
                grid[top][i] = arr[idx++];
            }
            for(int i = top + 1 ; i <= bottom ; i++){
                grid[i][right] = arr[idx++];
            }
            for(int i = right - 1 ; i >= left ; i--){
                grid[bottom][i] = arr[idx++];
            }
            for(int i = bottom - 1 ; i >= top + 1; i--){
                grid[i][left] = arr[idx++];
            }
        }
        return grid;
    }
};